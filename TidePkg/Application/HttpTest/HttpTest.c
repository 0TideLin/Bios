#include "HttpTest.h"

STATIC BOOLEAN  gRequestCallbackComplete  = FALSE;
STATIC BOOLEAN  gResponseCallbackComplete = FALSE;

STATIC BOOLEAN  gHttpError;

STATIC SHELL_FILE_HANDLE  mFileHandle = NULL;

//
// Path of the local file, Unicode encoded.
//
STATIC CONST CHAR16  *mLocalFilePath;

STATIC EFI_HANDLE   mNetDownloadImageHanlde;
STATIC CHAR8               *mAppBuffer;
STATIC UINTN               mAppBufferSize;


EFI_STATUS
EFIAPI
ImageLoadFile2 (
  IN EFI_LOAD_FILE2_PROTOCOL   *This,
  IN EFI_DEVICE_PATH_PROTOCOL  *FilePath,
  IN BOOLEAN                   BootPolicy,
  IN OUT UINTN                 *BufferSize,
  IN VOID                      *Buffer OPTIONAL
  )

{
  DEBUG((DEBUG_INFO, "My Image Load File\n" ));
  // Verify if the valid parameters
  if ((This == NULL) ||
      (BufferSize == NULL) ||
      (FilePath == NULL) ||
      !IsDevicePathValid (FilePath, 0))
  {
    return EFI_INVALID_PARAMETER;
  }

  if (BootPolicy) {
    return EFI_UNSUPPORTED;
  }

  // Check if the given buffer size is big enough
  // EFI_BUFFER_TOO_SMALL to allow caller to allocate a bigger buffer
  if (mAppBufferSize == 0) {
    return EFI_NOT_FOUND;
  }

  if ((Buffer == NULL) || (*BufferSize < mAppBufferSize)) {
    *BufferSize = mAppBufferSize;
    return EFI_BUFFER_TOO_SMALL;
  }

  // Copy InitRd
  CopyMem (Buffer, mAppBuffer, mAppBufferSize);
  *BufferSize = mAppBufferSize;

  return EFI_SUCCESS;
}

///
/// Load File Protocol instance
///
STATIC EFI_LOAD_FILE2_PROTOCOL  mImageLoadFile2 = {
  ImageLoadFile2
};


/**

  Function opens and returns a file handle to the root directory of a volume.

  @param DeviceHandle    A handle for a device

  @return A valid file handle or NULL is returned

**/
EFI_FILE_HANDLE
LibOpenRoot (
  IN EFI_HANDLE                   DeviceHandle
  )
{
  EFI_STATUS                      Status;
  EFI_SIMPLE_FILE_SYSTEM_PROTOCOL *Volume;
  EFI_FILE_HANDLE                 File;

  File = NULL;

  //
  // File the file system interface to the device
  //
  Status = gBS->HandleProtocol (
                  DeviceHandle,
                  &gEfiSimpleFileSystemProtocolGuid,
                  (VOID *) &Volume
                  );

  //
  // Open the root directory of the volume
  //
  if (!EFI_ERROR (Status)) {
    Status = Volume->OpenVolume (
                      Volume,
                      &File
                      );
  }
  //
  // Done
  //
  return EFI_ERROR (Status) ? NULL : File;
}

/**
  This function converts an input device structure to a Unicode string.

  @param DevPath                  A pointer to the device path structure.

  @return A new allocated Unicode string that represents the device path.

**/
CHAR16 *
LibDevicePathToStr (
  IN EFI_DEVICE_PATH_PROTOCOL     *DevPath
  )
{
  EFI_STATUS                       Status;
  CHAR16                           *ToText;
  EFI_DEVICE_PATH_TO_TEXT_PROTOCOL *DevPathToText;

  if (DevPath == NULL) {
    return NULL;
  }

  Status = gBS->LocateProtocol (
                  &gEfiDevicePathToTextProtocolGuid,
                  NULL,
                  (VOID **) &DevPathToText
                  );

  ToText = DevPathToText->ConvertDevicePathToText (
                            DevPath,
                            FALSE,
                            TRUE
                            );


  return ToText;
}

/**

  Function gets the file information from an open file descriptor, and stores it
  in a buffer allocated from pool.

  @param FHand           File Handle.
  @param InfoType        Info type need to get.

  @retval                A pointer to a buffer with file information or NULL is returned

**/
VOID *
LibFileInfo (
  IN EFI_FILE_HANDLE      FHand,
  IN EFI_GUID             *InfoType
  )
{
  EFI_STATUS    Status;
  EFI_FILE_INFO *Buffer;
  UINTN         BufferSize;

  Buffer      = NULL;
  BufferSize  = 0;

  Status = FHand->GetInfo (
                    FHand,
                    InfoType,
                    &BufferSize,
                    Buffer
                    );
  if (Status == EFI_BUFFER_TOO_SMALL) {
    Buffer = AllocatePool (BufferSize);

  }

  Status = FHand->GetInfo (
                    FHand,
                    InfoType,
                    &BufferSize,
                    Buffer
                    );

  return Buffer;
}

/**
  Replace the original Host and Uri with Host and Uri returned by the
  HTTP server in 'Location' header (redirection).

  @param[in]   Location           A pointer to the 'Location' string
                                  provided by HTTP server.
  @param[in]   Context            A pointer to HTTP download context.
  @param[in]   DownloadUrl        Fully qualified HTTP URL.

  @retval  EFI_SUCCESS            Host and Uri were successfully set.
  @retval  EFI_OUT_OF_RESOURCES   Error setting Host or Uri.
**/
STATIC
EFI_STATUS
SetHostURI (
  IN CHAR8                  *Location,
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN CHAR16                 *DownloadUrl
  )
{
  EFI_STATUS  Status;
  UINTN       StringSize;
  UINTN       FirstStep;
  UINTN       Idx;
  UINTN       Step;
  CHAR8       *Walker;
  CHAR16      *Temp;
  CHAR8       *Tmp;
  CHAR16      *Url;
  BOOLEAN     IsAbEmptyUrl;

  Tmp          = NULL;
  Url          = NULL;
  IsAbEmptyUrl = FALSE;
  FirstStep    = 0;

  StringSize = (AsciiStrSize (Location) * sizeof (CHAR16));
  Url        = AllocateZeroPool (StringSize);
  if (!Url) {
    return EFI_OUT_OF_RESOURCES;
  }

  Status = AsciiStrToUnicodeStrS (
             (CONST CHAR8 *)Location,
             Url,
             StringSize
             );

  if (EFI_ERROR (Status)) {
    goto Error;
  }

  //
  // If an HTTP server redirects to the same location more than once,
  // then stop attempts and tell it is not reachable.
  //
  if (!StrCmp (Url, DownloadUrl)) {
    Status = EFI_NO_MAPPING;
    goto Error;
  }

  if (AsciiStrLen (Location) > 2) {
    //
    // Some servers return 'Location: //server/resource'
    //
    IsAbEmptyUrl = (Location[0] == '/') && (Location[1] == '/');
    if (IsAbEmptyUrl) {
      //
      // Skip first "//"
      //
      Location += 2;
      FirstStep = 1;
    }
  }

  if (AsciiStrStr (Location, "://") || IsAbEmptyUrl) {
    Idx    = 0;
    Walker = Location;

    for (Step = FirstStep; Step < 2; Step++) {
      for ( ; *Walker != '/' && *Walker != '\0'; Walker++) {
        Idx++;
      }

      if (!Step) {
        //
        // Skip "//"
        //
        Idx    += 2;
        Walker += 2;
      }
    }

    Tmp = AllocateZeroPool (Idx + 1);
    if (!Tmp) {
      Status = EFI_OUT_OF_RESOURCES;
      goto Error;
    }

    CopyMem (Tmp, Location, Idx);

    //
    // Location now points to Uri
    //
    Location  += Idx;
    StringSize = (Idx + 1) * sizeof (CHAR16);

    SHELL_FREE_NON_NULL (Context->ServerAddrAndProto);

    Temp = AllocateZeroPool (StringSize);
    if (!Temp) {
      Status = EFI_OUT_OF_RESOURCES;
      goto Error;
    }

    Status = AsciiStrToUnicodeStrS (
               (CONST CHAR8 *)Tmp,
               Temp,
               StringSize
               );
    if (EFI_ERROR (Status)) {
      SHELL_FREE_NON_NULL (Temp);
      goto Error;
    }

    Idx = 0;
    if (IsAbEmptyUrl) {
      Context->ServerAddrAndProto = StrnCatGrow (
                                      &Context->ServerAddrAndProto,
                                      &Idx,
                                      L"http://",
                                      StrLen (L"http://")
                                      );
    }

    Context->ServerAddrAndProto = StrnCatGrow (
                                    &Context->ServerAddrAndProto,
                                    &Idx,
                                    Temp,
                                    StrLen (Temp)
                                    );
    SHELL_FREE_NON_NULL (Temp);
    if (!Context->ServerAddrAndProto) {
      Status = EFI_OUT_OF_RESOURCES;
      goto Error;
    }
  }

  SHELL_FREE_NON_NULL (Context->Uri);

  StringSize   = AsciiStrSize (Location) * sizeof (CHAR16);
  Context->Uri = AllocateZeroPool (StringSize);
  if (!Context->Uri) {
    Status = EFI_OUT_OF_RESOURCES;
    goto Error;
  }

  //
  // Now make changes to the Uri part.
  //
  Status = AsciiStrToUnicodeStrS (
             (CONST CHAR8 *)Location,
             Context->Uri,
             StringSize
             );
Error:
  SHELL_FREE_NON_NULL (Tmp);
  SHELL_FREE_NON_NULL (Url);

  return Status;
}

/**
  Callback to set the request completion flag.

  @param[in] Event:   The event.
  @param[in] Context: pointer to Notification Context.
 **/
STATIC
VOID
EFIAPI
RequestCallback (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  )
{
  gRequestCallbackComplete = TRUE;
}

/**
  Callback to set the response completion flag.
  @param[in] Event:   The event.
  @param[in] Context: pointer to Notification Context.
 **/
STATIC
VOID
EFIAPI
ResponseCallback (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  )
{
  gResponseCallbackComplete = TRUE;
}

/**
  Wait until operation completes. Completion is indicated by
  setting of an appropriate variable.

  @param[in]      Context             A pointer to the HTTP download context.
  @param[in, out]  CallBackComplete   A pointer to the callback completion
                                      variable set by the callback.

  @retval  EFI_SUCCESS                Callback signalled completion.
  @retval  EFI_TIMEOUT                Timed out waiting for completion.
  @retval  Others                     Error waiting for completion.
**/
STATIC
EFI_STATUS
WaitForCompletion (
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN OUT BOOLEAN            *CallBackComplete
  )
{
  EFI_STATUS  Status;
  EFI_EVENT   WaitEvt;

  Status = EFI_SUCCESS;

  //
  // Use a timer to measure timeout. Cannot use Stall here!
  //
  Status = gBS->CreateEvent (
                  EVT_TIMER,
                  TPL_CALLBACK,
                  NULL,
                  NULL,
                  &WaitEvt
                  );
  ASSERT_EFI_ERROR (Status);

  if (!EFI_ERROR (Status)) {
    Status = gBS->SetTimer (
                    WaitEvt,
                    TimerRelative,
                    EFI_TIMER_PERIOD_SECONDS (TIMER_MAX_TIMEOUT_S)
                    );

    ASSERT_EFI_ERROR (Status);
  }

  while (  !*CallBackComplete
        && (!EFI_ERROR (Status))
        && EFI_ERROR (gBS->CheckEvent (WaitEvt)))
  {
    Status = Context->Http->Poll (Context->Http);
    if (  !Context->ContentDownloaded
       && (CallBackComplete == &gResponseCallbackComplete))
    {
      //
      // An HTTP server may just send a response redirection header.
      // In this case, don't wait for the event as
      // it might never happen and we waste 10s waiting.
      // Note that at this point Response may not has been populated,
      // so it needs to be checked first.
      //
      if (  Context->ResponseToken.Message
         && Context->ResponseToken.Message->Data.Response
         && (NEED_REDIRECTION (
               Context->ResponseToken.Message->Data.Response->StatusCode
               )
             ))
      {
        break;
      }
    }
  }

  gBS->SetTimer (WaitEvt, TimerCancel, 0);
  gBS->CloseEvent (WaitEvt);

  if (*CallBackComplete) {
    return EFI_SUCCESS;
  }

  if (!EFI_ERROR (Status)) {
    Status = EFI_TIMEOUT;
  }

  return Status;
}

/**
  Update the progress of a file download
  This procedure is called each time a new HTTP body portion is received.

  @param[in]  Context      HTTP download context.
  @param[in]  DownloadLen  Portion size, in bytes.
  @param[in]  Buffer       The pointer to the parsed buffer.

  @retval  EFI_SUCCESS     Portion saved.
  @retval  Other           Error saving the portion.
**/
STATIC
EFI_STATUS
EFIAPI
SavePortion (
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN UINTN                  DownloadLen,
  IN CHAR8                  *Buffer
  )
{
  CHAR16      Progress[HTTP_PROGRESS_MESSAGE_SIZE];
  UINTN       NbOfKb;
  UINTN       Index;
  UINTN       LastStep;
  UINTN       Step;
  EFI_STATUS  Status;
  CHAR8       *BufferPt;
  LastStep = 0;
  Step     = 0;

  // Print(L"COntext LastReportedNbOfBytes:%d\nDownloadlen:%d\n", Context->LastReportedNbOfBytes, DownloadLen);


  ShellSetFilePosition (mFileHandle, Context->LastReportedNbOfBytes);
  Status = ShellWriteFile (mFileHandle, &DownloadLen, Buffer);

  BufferPt = mAppBuffer + Context->LastReportedNbOfBytes;
  CopyMem(BufferPt, Buffer,  DownloadLen);

  if (EFI_ERROR (Status)) {
    if (Context->ContentDownloaded > 0) {
      Print(L"ContentDownloaded >0\n");
    }
    return Status;
  }

  if (Context->ContentDownloaded == 0) {
    Print(L"ContentDownloaded ==0\n");
  }

  Context->ContentDownloaded += DownloadLen;
  NbOfKb                      = Context->ContentDownloaded >> 10;

  Progress[0] = L'\0';
  if (Context->ContentLength) {
    LastStep = (Context->LastReportedNbOfBytes * HTTP_PROGRESS_SLIDER_STEPS) /
               Context->ContentLength;
    Step = (Context->ContentDownloaded * HTTP_PROGRESS_SLIDER_STEPS) /
           Context->ContentLength;
  }

  Context->LastReportedNbOfBytes = Context->ContentDownloaded;

  if (Step <= LastStep) {
    if (!Context->ContentLength) {
      //
      // Update downloaded size, there is no length info available.
      //
      Print (L"%7d Kb", NbOfKb);
    }

    return EFI_SUCCESS;
  }


  Status = StrCpyS (Progress, HTTP_PROGRESS_MESSAGE_SIZE, HTTP_PROGR_FRAME);
  if (EFI_ERROR (Status)) {
    return Status;
  }

  for (Index = 1; Index < Step; Index++) {
    Progress[Index] = L'=';
  }

  if (Step) {
    Progress[Step] = L'>';
  }

  return EFI_SUCCESS;
}

/**
  Message parser callback.
  Save a portion of HTTP body.

  @param[in]   EventType       Type of event. Can be either
                               OnComplete or OnData.
  @param[in]   Data            A pointer to the buffer with data.
  @param[in]   Length          Data length of this portion.
  @param[in]   Context         A pointer to the HTTP download context.

  @retval      EFI_SUCCESS    The portion was processed successfully.
  @retval      Other          Error returned by SavePortion.
**/
STATIC
EFI_STATUS
EFIAPI
ParseMsg (
  IN HTTP_BODY_PARSE_EVENT  EventType,
  IN CHAR8                  *Data,
  IN UINTN                  Length,
  IN VOID                   *Context
  )
{
  if (  (Data == NULL)
     || (EventType == BodyParseEventOnComplete)
     || (Context == NULL))
  {
    return EFI_SUCCESS;
  }

  return SavePortion (Context, Length, Data);
}

/**
  Create a child for the service identified by its service binding protocol GUID
  and get from the child the interface of the protocol identified by its GUID.

  @param[in]   ControllerHandle            Controller handle.
  @param[in]   ServiceBindingProtocolGuid  Service binding protocol GUID of the
                                           service to be created.
  @param[in]   ProtocolGuid                GUID of the protocol to be open.
  @param[out]  ChildHandle                 Address where the handler of the
                                           created child is returned. NULL is
                                           returned in case of error.
  @param[out]  Interface                   Address where a pointer to the
                                           protocol interface is returned in
                                           case of success.

  @retval  EFI_SUCCESS  The child was created and the protocol opened.
  @retval  Others       Either the creation of the child or the opening
                        of the protocol failed.
**/
STATIC
EFI_STATUS
CreateServiceChildAndOpenProtocol (
  IN   EFI_HANDLE  ControllerHandle,
  IN   EFI_GUID    *ServiceBindingProtocolGuid,
  IN   EFI_GUID    *ProtocolGuid,
  OUT  EFI_HANDLE  *ChildHandle,
  OUT  VOID        **Interface
  )
{
  EFI_STATUS  Status;

  *ChildHandle = NULL;
  Status       = NetLibCreateServiceChild (
                   ControllerHandle,
                   gImageHandle,
                   ServiceBindingProtocolGuid,
                   ChildHandle
                   );
  if (!EFI_ERROR (Status)) {
    Status = gBS->OpenProtocol (
                    *ChildHandle,
                    ProtocolGuid,
                    Interface,
                    gImageHandle,
                    ControllerHandle,
                    EFI_OPEN_PROTOCOL_GET_PROTOCOL
                    );
    if (EFI_ERROR (Status)) {
      NetLibDestroyServiceChild (
        ControllerHandle,
        gImageHandle,
        ServiceBindingProtocolGuid,
        *ChildHandle
        );
      *ChildHandle = NULL;
    }
  }

  return Status;
}

/**
  Close the protocol identified by its GUID on the child handle of the service
  identified by its service binding protocol GUID, then destroy the child
  handle.

  @param[in]  ControllerHandle            Controller handle.
  @param[in]  ServiceBindingProtocolGuid  Service binding protocol GUID of the
                                          service to be destroyed.
  @param[in]  ProtocolGuid                GUID of the protocol to be closed.
  @param[in]  ChildHandle                 Handle of the child to be destroyed.
**/
STATIC
VOID
CloseProtocolAndDestroyServiceChild (
  IN  EFI_HANDLE  ControllerHandle,
  IN  EFI_GUID    *ServiceBindingProtocolGuid,
  IN  EFI_GUID    *ProtocolGuid,
  IN  EFI_HANDLE  ChildHandle
  )
{
  gBS->CloseProtocol (
         ChildHandle,
         ProtocolGuid,
         gImageHandle,
         ControllerHandle
         );

  NetLibDestroyServiceChild (
    ControllerHandle,
    gImageHandle,
    ServiceBindingProtocolGuid,
    ChildHandle
    );
}

/**
  Get the name of the NIC.

  @param[in]   ControllerHandle  The network physical device handle.
  @param[in]   NicNumber         The network physical device number.
  @param[out]  NicName           Address where to store the NIC name.
                                 The memory area has to be at least
                                 IP4_CONFIG2_INTERFACE_INFO_NAME_LENGTH
                                 double byte wide.

  @retval  EFI_SUCCESS  The name of the NIC was returned.
  @retval  Others       The creation of the child for the Managed
                        Network Service failed or the opening of
                        the Managed Network Protocol failed or
                        the operational parameters for the
                        Managed Network Protocol could not be
                        read.
**/
STATIC
EFI_STATUS
GetNicName (
  IN   EFI_HANDLE  ControllerHandle,
  IN   UINTN       NicNumber,
  OUT  CHAR16      *NicName
  )
{
  EFI_STATUS                    Status;
  EFI_HANDLE                    MnpHandle;
  EFI_MANAGED_NETWORK_PROTOCOL  *Mnp;
  EFI_SIMPLE_NETWORK_MODE       SnpMode;

  Status = CreateServiceChildAndOpenProtocol (
             ControllerHandle,
             &gEfiManagedNetworkServiceBindingProtocolGuid,
             &gEfiManagedNetworkProtocolGuid,
             &MnpHandle,
             (VOID **)&Mnp
             );
  if (EFI_ERROR (Status)) {
    goto Error;
  }

  Status = Mnp->GetModeData (Mnp, NULL, &SnpMode);
  if (EFI_ERROR (Status) && (Status != EFI_NOT_STARTED)) {
    goto Error;
  }

  UnicodeSPrint (
    NicName,
    IP4_CONFIG2_INTERFACE_INFO_NAME_LENGTH,
    SnpMode.IfType == NET_IFTYPE_ETHERNET ? L"eth%d" : L"unk%d",
    NicNumber
    );

  Status = EFI_SUCCESS;

Error:

  if (MnpHandle != NULL) {
    CloseProtocolAndDestroyServiceChild (
      ControllerHandle,
      &gEfiManagedNetworkServiceBindingProtocolGuid,
      &gEfiManagedNetworkProtocolGuid,
      MnpHandle
      );
  }

  return Status;
}

/**
  Generate and send a request to the http server.

  @param[in]   Context           HTTP download context.
  @param[in]   DownloadUrl       Fully qualified URL to be downloaded.

  @retval EFI_SUCCESS            Request has been sent successfully.
  @retval EFI_INVALID_PARAMETER  Invalid URL.
  @retval EFI_OUT_OF_RESOURCES   Out of memory.
  @retval EFI_DEVICE_ERROR       If HTTPS is used, this probably
                                 means that TLS support either was not
                                 installed or not configured.
  @retval Others                 Error sending the request.
**/
STATIC
EFI_STATUS
SendRequest (
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN CHAR16                 *DownloadUrl
  )
{
  EFI_HTTP_REQUEST_DATA  RequestData;
  EFI_HTTP_HEADER        RequestHeader[HdrMax];
  EFI_HTTP_MESSAGE       RequestMessage;
  EFI_STATUS             Status;
  CHAR16                 *Host;
  UINTN                  StringSize;

  ZeroMem (&RequestData, sizeof (RequestData));
  ZeroMem (&RequestHeader, sizeof (RequestHeader));
  ZeroMem (&RequestMessage, sizeof (RequestMessage));
  ZeroMem (&Context->RequestToken, sizeof (Context->RequestToken));

  RequestHeader[HdrHost].FieldName  = "Host";
  RequestHeader[HdrConn].FieldName  = "Connection";
  RequestHeader[HdrAgent].FieldName = "User-Agent";

  Host = (CHAR16 *)Context->ServerAddrAndProto;
  while (*Host != CHAR_NULL && *Host != L'/') {
    Host++;
  }

  if (*Host == CHAR_NULL) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Get the next slash.
  //
  Host++;
  //
  // And now the host name.
  //
  Host++;

  StringSize                        = StrLen (Host) + 1;
  RequestHeader[HdrHost].FieldValue = AllocatePool (StringSize);
  if (!RequestHeader[HdrHost].FieldValue) {
    return EFI_OUT_OF_RESOURCES;
  }

  UnicodeStrToAsciiStrS (
    Host,
    RequestHeader[HdrHost].FieldValue,
    StringSize
    );

  RequestHeader[HdrConn].FieldValue  = "close";
  RequestHeader[HdrAgent].FieldValue = USER_AGENT_HDR;
  RequestMessage.HeaderCount         = HdrMax;

  RequestData.Method = HttpMethodGet;
  RequestData.Url    = DownloadUrl;

  RequestMessage.Data.Request = &RequestData;
  RequestMessage.Headers      = RequestHeader;
  RequestMessage.BodyLength   = 0;
  RequestMessage.Body         = NULL;
  Context->RequestToken.Event = NULL;

  //
  // Completion callback event to be set when Request completes.
  //
  Status = gBS->CreateEvent (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  RequestCallback,
                  Context,
                  &Context->RequestToken.Event
                  );

  Context->RequestToken.Status  = EFI_SUCCESS;
  Context->RequestToken.Message = &RequestMessage;
  gRequestCallbackComplete      = FALSE;
  Status                        = Context->Http->Request (Context->Http, &Context->RequestToken);
  if (EFI_ERROR (Status)) {
    goto Error;
  }

  Status = WaitForCompletion (Context, &gRequestCallbackComplete);
  if (EFI_ERROR (Status)) {
    Context->Http->Cancel (Context->Http, &Context->RequestToken);
  }

Error:
  SHELL_FREE_NON_NULL (RequestHeader[HdrHost].FieldValue);
  if (Context->RequestToken.Event) {
    gBS->CloseEvent (Context->RequestToken.Event);
    ZeroMem (&Context->RequestToken, sizeof (Context->RequestToken));
  }

  return Status;
}

/**
  Get HTTP server response and collect the whole body as a file.
  Set appropriate status in Context (REQ_OK, REQ_REPEAT, REQ_ERROR).
  Note that even if HTTP server returns an error code, it might send
  the body as well. This body will be collected in the resultant file.

  @param[in]   Context         A pointer to the HTTP download context.
  @param[in]   DownloadUrl     A pointer to the fully qualified URL to download.

  @retval  EFI_SUCCESS         Valid file. Body successfully collected.
  @retval  EFI_HTTP_ERROR      Response is a valid HTTP response, but the
                               HTTP server
                               indicated an error (HTTP code >= 400).
                               Response body MAY contain full
                               HTTP server response.
  @retval Others               Error getting the reponse from the HTTP server.
                               Response body is not collected.
**/
STATIC
EFI_STATUS
GetResponse (
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN CHAR16                 *DownloadUrl
  )
{
  EFI_HTTP_RESPONSE_DATA  ResponseData;
  EFI_HTTP_MESSAGE        ResponseMessage;
  EFI_HTTP_HEADER         *Header;
  EFI_STATUS              Status;
  VOID                    *MsgParser;
  EFI_TIME                StartTime;
  EFI_TIME                EndTime;
  CONST CHAR16            *Desc;
  UINTN                   ElapsedSeconds;
  BOOLEAN                 IsTrunked;
  BOOLEAN                 CanMeasureTime;
  EFI_HANDLE              ImageHanlde;
  EFI_DEVICE_PATH_PROTOCOL *DevicePath;

  ZeroMem (&ResponseData, sizeof (ResponseData));
  ZeroMem (&ResponseMessage, sizeof (ResponseMessage));
  ZeroMem (&Context->ResponseToken, sizeof (Context->ResponseToken));
  IsTrunked = FALSE;

  ResponseMessage.Body           = Context->Buffer;
  Context->ResponseToken.Status  = EFI_SUCCESS;
  Context->ResponseToken.Message = &ResponseMessage;
  Context->ContentLength         = 0;
  Context->Status                = REQ_OK;
  Status                         = EFI_SUCCESS;
  MsgParser                      = NULL;
  ResponseData.StatusCode        = HTTP_STATUS_UNSUPPORTED_STATUS;
  ResponseMessage.Data.Response  = &ResponseData;
  Context->ResponseToken.Event   = NULL;
  CanMeasureTime                 = FALSE;


  do {
    SHELL_FREE_NON_NULL (ResponseMessage.Headers);
    ResponseMessage.HeaderCount = 0;
    gResponseCallbackComplete   = FALSE;
    ResponseMessage.BodyLength  = Context->BufferSize;


    if (!Context->ContentDownloaded && !Context->ResponseToken.Event) {
      Status = gBS->CreateEvent (
                      EVT_NOTIFY_SIGNAL,
                      TPL_CALLBACK,
                      ResponseCallback,
                      Context,
                      &Context->ResponseToken.Event
                      );
      ASSERT_EFI_ERROR (Status);
    } else {
      ResponseMessage.Data.Response = NULL;
    }

    if (EFI_ERROR (Status)) {
      break;
    }

    Status = Context->Http->Response (Context->Http, &Context->ResponseToken);
    if (EFI_ERROR (Status)) {
      break;
    }

    Status = WaitForCompletion (Context, &gResponseCallbackComplete);
    if (EFI_ERROR (Status) && ResponseMessage.HeaderCount) {
      Status = EFI_SUCCESS;
    }

    if (EFI_ERROR (Status)) {
      Context->Http->Cancel (Context->Http, &Context->ResponseToken);
      break;
    }

    if (!Context->ContentDownloaded) {
      if (NEED_REDIRECTION (ResponseData.StatusCode)) {
        //
        // Need to repeat the request with new Location (server redirected).
        //
        Context->Status = REQ_NEED_REPEAT;

        Header = HttpFindHeader (
                   ResponseMessage.HeaderCount,
                   ResponseMessage.Headers,
                   "Location"
                   );
        if (Header) {
          Status = SetHostURI (Header->FieldValue, Context, DownloadUrl);
          if (Status == EFI_NO_MAPPING) {
            Print(L"%s: recursive http server relocation : %s",
              Context->ServerAddrAndProto,
              Context->Uri
              );
          }
        } else {
          //
          // Bad reply from the server. Server must specify the location.
          // Indicate that resource was not found, and no body collected.
          //
          Status = EFI_NOT_FOUND;
        }

        Context->Http->Cancel (Context->Http, &Context->ResponseToken);
        break;
      }

      //
      // Init message-body parser by header information.
      //
      if (!MsgParser) {
        Status = HttpInitMsgParser (
                   ResponseMessage.Data.Request->Method,
                   ResponseData.StatusCode,
                   ResponseMessage.HeaderCount,
                   ResponseMessage.Headers,
                   ParseMsg,
                   Context,
                   &MsgParser
                   );
        if (EFI_ERROR (Status)) {
          break;
        }
      }

      //
      // If it is a trunked message, rely on the parser.
      //
      Header = HttpFindHeader (
                 ResponseMessage.HeaderCount,
                 ResponseMessage.Headers,
                 "Transfer-Encoding"
                 );
      IsTrunked = (Header && !AsciiStrCmp (Header->FieldValue, "chunked"));

      HttpGetEntityLength (MsgParser, &Context->ContentLength);

      if (  (ResponseData.StatusCode >= HTTP_STATUS_400_BAD_REQUEST)
         && (ResponseData.StatusCode != HTTP_STATUS_308_PERMANENT_REDIRECT))
      {
        //
        // Server reported an error via Response code.
        // Collect the body if any.
        //
        if (!gHttpError) {
          gHttpError = TRUE;

          Desc = ErrStatusDesc[ResponseData.StatusCode -
                               HTTP_STATUS_400_BAD_REQUEST];
          Print(L"");

          //
          // This gives an RFC HTTP error.
          //
          Context->Status = StrDecimalToUintn(Desc);  //ShellStrToUintn (Desc);
          Status          = ENCODE_ERROR (Context->Status);
        }
      }
    }

    //
    // Do NOT try to parse an empty body.
    //
    if (ResponseMessage.BodyLength || IsTrunked) {
      Status = HttpParseMessageBody (
                 MsgParser,
                 ResponseMessage.BodyLength,
                 ResponseMessage.Body
                 );
    }
  } while (  !HttpIsMessageComplete (MsgParser)
          && !EFI_ERROR (Status)
          && ResponseMessage.BodyLength);

  if (  (Context->Status != REQ_NEED_REPEAT)
     && (Status == EFI_SUCCESS)
     && CanMeasureTime)
  {
    if (!EFI_ERROR (gRT->GetTime (&EndTime, NULL))) {
      ElapsedSeconds = EfiTimeToEpoch (&EndTime) - EfiTimeToEpoch (&StartTime);
      Print (
        L",%a%Lus\n",
        ElapsedSeconds ? " " : " < ",
        ElapsedSeconds > 1 ? (UINT64)ElapsedSeconds : 1
        );
    }
  }

  //
  //
  //
  Print(L"Dowanload finish\n");
  DevicePath = DevicePathFromHandle(mNetDownloadImageHanlde);
  Print(L"DevicePath:%02x, %02x\n", DevicePath->Type, DevicePath->SubType);

  // Status = gBS->LocateDevicePath(&gEfiLoadFile2ProtocolGuid, &DevicePath, ImageHanlde);
  // Print(L"File2:%r\n", Status);

  Status = gBS->LoadImage(FALSE, gImageHandle,DevicePath,
                                              NULL,
                                              mAppBufferSize,
                                              &ImageHanlde);
  Print(L"LoadImage:%r\n", Status);

  if(EFI_ERROR(Status)) {
    goto Error;
  }

  gBS->SetWatchdogTimer( 5 * 60, 0x0000, 0x00, NULL);

  Status = gBS->StartImage(ImageHanlde, NULL, NULL);

  gBS->SetWatchdogTimer(0x0000, 0x0000, 0x0000, NULL);

Error:
  SHELL_FREE_NON_NULL (MsgParser);
  if (Context->ResponseToken.Event) {
    gBS->CloseEvent (Context->ResponseToken.Event);
    ZeroMem (&Context->ResponseToken, sizeof (Context->ResponseToken));
  }

  return Status;
}

/**
  Worker function that downloads the data of a file from an HTTP server given
  the path of the file and its size.

  @param[in]   Context           A pointer to the HTTP download context.
  @param[in]   ControllerHandle  The handle of the network interface controller
  @param[in]   NicName           NIC name

  @retval  EFI_SUCCESS           The file was downloaded.
  @retval  EFI_OUT_OF_RESOURCES  A memory allocation failed.
  #return  EFI_HTTP_ERROR        The server returned a valid HTTP error.
                                 Examine the mLocalFilePath file
                                 to get error body.
  @retval  Others                The downloading of the file from the server
                                 failed.
**/
STATIC
EFI_STATUS
DownloadFile (
  IN HTTP_DOWNLOAD_CONTEXT  *Context,
  IN EFI_HANDLE             ControllerHandle,
  IN CHAR16                 *NicName
  )
{
  EFI_STATUS  Status;
  CHAR16      *DownloadUrl;
  UINTN       UrlSize;
  EFI_HANDLE  HttpChildHandle;


  if (Context == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  DownloadUrl     = NULL;
  HttpChildHandle = NULL;

  Context->Buffer = AllocatePool (Context->BufferSize);
  if (Context->Buffer == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_EXIT;
  }

  //
  // Open the file.
  //
  if (!EFI_ERROR (ShellFileExists (mLocalFilePath))) {
    ShellDeleteFileByName (mLocalFilePath);
  }

  Status = ShellOpenFileByName (
             mLocalFilePath,
             &mFileHandle,
             EFI_FILE_MODE_CREATE |
             EFI_FILE_MODE_WRITE  |
             EFI_FILE_MODE_READ,
             0
             );
  if (EFI_ERROR (Status)) {
    Print(L"Can't open file\n");
    goto ON_EXIT;
  }

  do {

    SHELL_FREE_NON_NULL(DownloadUrl);

    CLOSE_HTTP_HANDLE (ControllerHandle, HttpChildHandle);

    Status = CreateServiceChildAndOpenProtocol (
               ControllerHandle,
               &gEfiHttpServiceBindingProtocolGuid,
               &gEfiHttpProtocolGuid,
               &HttpChildHandle,
               (VOID **)&Context->Http
               );

    if (EFI_ERROR (Status)) {
      Print(L"Open http protocol %r\n", Status);
      goto ON_EXIT;
    }

    Status = Context->Http->Configure (Context->Http, &Context->HttpConfigData);
    if (EFI_ERROR (Status)) {
      Print(L"Configure:%r\n", Status);
      goto ON_EXIT;
    }

    UrlSize     = 0;
    DownloadUrl = StrnCatGrow (
                    &DownloadUrl,
                    &UrlSize,
                    Context->ServerAddrAndProto,
                    StrLen (Context->ServerAddrAndProto)
                    );
    if (Context->Uri[0] != L'/') {
      DownloadUrl = StrnCatGrow (
                      &DownloadUrl,
                      &UrlSize,
                      L"/",
                      StrLen (Context->ServerAddrAndProto)
                      );
    }

    DownloadUrl = StrnCatGrow (
                    &DownloadUrl,
                    &UrlSize,
                    Context->Uri,
                    StrLen (Context->Uri)
                    );


    Status = SendRequest (Context, DownloadUrl);
    if (Status) {
      goto ON_EXIT;
    }

    Status = GetResponse (Context, DownloadUrl);

    if (Status) {
      goto ON_EXIT;
    }
  } while (Context->Status == REQ_NEED_REPEAT);

  if (Context->Status) {
    Status = ENCODE_ERROR (Context->Status);
  }

ON_EXIT:
  //
  // Close the file.
  //
  if (mFileHandle != NULL) {
    if (EFI_ERROR (Status) ) {
      ShellDeleteFile (&mFileHandle);
    } else {
      ShellCloseFile (&mFileHandle);
    }
  }
  SHELL_FREE_NON_NULL (DownloadUrl);
  SHELL_FREE_NON_NULL (Context->Buffer);

  CLOSE_HTTP_HANDLE (ControllerHandle, HttpChildHandle);

  return Status;
}


EFI_STATUS
EFIAPI
HttpRun(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS               Status;
  HTTP_DOWNLOAD_CONTEXT    Context;
  EFI_HTTPv4_ACCESS_POINT  IPv4Node;
  UINTN                    HandleCount;
  UINTN                    NicNumber;
  CHAR16                   NicName[IP4_CONFIG2_INTERFACE_INFO_NAME_LENGTH];
  EFI_HANDLE               *Handles;
  EFI_HANDLE               ControllerHandle;
  EFI_LOAD_FILE2_PROTOCOL  *File2Protcol;

  ZeroMem (&Context, sizeof(Context));


  ZeroMem (&Context.HttpConfigData, sizeof (Context.HttpConfigData));
  ZeroMem (&IPv4Node, sizeof (IPv4Node));

  mAppBuffer = AllocateZeroPool( SIZE_16MB);
  mAppBufferSize = 0;
  mNetDownloadImageHanlde = NULL;


  Print(L"Start\n");
 Status = gBS->InstallMultipleProtocolInterfaces(
                          &mNetDownloadImageHanlde,
                          &gEfiLoadFile2ProtocolGuid,
                          &mImageLoadFile2,
                          &gEfiDevicePathProtocolGuid,
                          &NetDownloadImageDevicePath,
                          NULL
                          );
  // mNetDownloadImage.LoadFile2.LoadFile()
  Print(L"Install Status:%r\n", Status);


  Status = gBS->HandleProtocol(mNetDownloadImageHanlde, &gEfiLoadFile2ProtocolGuid, (void**)&File2Protcol);
  Status = File2Protcol->LoadFile(File2Protcol, NULL, FALSE, (UINTN)0, NULL );
  Print(L"File2:%r\n", Status);
  IPv4Node.UseDefaultAddress = TRUE;
  Context.HttpConfigData.HttpVersion          = HttpVersion11;
  Context.HttpConfigData.AccessPoint.IPv4Node = &IPv4Node;

  Context.ServerAddrAndProto    = L"http://192.168.1.102";
  Context.BufferSize            = DEFAULT_BUF_SIZE;
  Context.Uri                   = L"file/321FBE27.efi";

  mLocalFilePath = L"httpget.efi";

  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEfiManagedNetworkServiceBindingProtocolGuid,
                  NULL,
                  &HandleCount,
                  &Handles
                  );
  if(!EFI_ERROR (Status)) {
    Status = EFI_NOT_FOUND;
    for(NicNumber = 0; (NicNumber < HandleCount)&&(Status != EFI_SUCCESS); NicNumber++ )
    {
      ControllerHandle = Handles[NicNumber];
      Status = GetNicName (ControllerHandle, NicNumber, NicName);

      if (EFI_ERROR (Status)) {
      Print(L"Controller:%r\n", Status);
      continue;
      }

      Status = DownloadFile (&Context, ControllerHandle, NicName);
      Print(L"DownloadFile:%r\n", Status);

    }
  }
  return Status;

}


  // EFI_STATUS                   Status;
  // UINTN                        NoSimpleFsHandles;
  // EFI_HANDLE                   *SimpleFsHandle;
  // UINT16                       *VolumeLabel;
  // UINT16                       *HelpString;
  // UINTN                        Index;
  // EFI_FILE_HANDLE              FileHandle;
  // UINTN                        OptionNumber;
  // EFI_FILE_SYSTEM_VOLUME_LABEL *Info;
  // EFI_FILE_PROTOCOL            *NewFile;
  // UINTN                        BufferSize;

  // NoSimpleFsHandles = 0;
  // OptionNumber      = 0;

  // //
  // // Locate Handles that support Simple File System protocol
  // //
  // Status = gBS->LocateHandleBuffer (
  //                 ByProtocol,
  //                 &gEfiSimpleFileSystemProtocolGuid,
  //                 NULL,
  //                 &NoSimpleFsHandles,
  //                 &SimpleFsHandle
  //                 );
  // if (!EFI_ERROR (Status)) {
  //   //
  //   // Find all the instances of the File System prototocol
  //   //
  //   for (Index = 0; Index < NoSimpleFsHandles; Index++) {
  //     // DeviceHandle = SimpleFsHandle[Index];
  //     FileHandle = LibOpenRoot (SimpleFsHandle[Index]);
  //     HelpString = LibDevicePathToStr (DevicePathFromHandle (SimpleFsHandle[Index]));

  //     //
  //     // Get current file system's Volume Label
  //     //
  //     Info = (EFI_FILE_SYSTEM_VOLUME_LABEL *) LibFileInfo (FileHandle, &gEfiFileSystemVolumeLabelInfoIdGuid);
  //     if (Info == NULL) {
  //       VolumeLabel = L"NO FILE SYSTEM INFO";
  //     } else {
  //       VolumeLabel = Info->VolumeLabel;
  //       if (*VolumeLabel == 0x0000) {
  //         VolumeLabel = L"NO VOLUME LABEL";
  //       }
  //     }
  //     Print(L"%s:%s\n", VolumeLabel, HelpString);
  //     if (Info != NULL)FreePool (Info);
  //     Status = FileHandle->Open(FileHandle, &NewFile, L"Tide.txt",
  //               EFI_FILE_MODE_CREATE|EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
  //     if(!EFI_ERROR ((Status))){
  //       BufferSize = StrLen(HelpString);
  //       Status = NewFile->Write(NewFile, &BufferSize, (VOID*)HelpString );
  //       Print(L"NewFile:%r\n", Status);
  //     }

  //   }
  // }

  // if (NoSimpleFsHandles != 0) {
  //   FreePool (SimpleFsHandle);
  // }

  // return Status;