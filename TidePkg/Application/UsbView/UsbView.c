#include "UsbView.h"


CHAR16                           *mFormat;
CHAR8                            *mLanguage;
UINTN                            mSelectPort;
EFI_DEVICE_PATH_TO_TEXT_PROTOCOL *mDevice2TextProtocol;
EFI_HII_HANDLE                   *mUsbViewHiiHandle;

STATIC CONST SHELL_PARAM_ITEM ParamList[] = {
  {L"-a",  TypeFlag},
  {L"-s",  TypeValue},
  {NULL, TypeValue}
};

EFI_STATUS
EFIAPI
InitmVariable()
{
  EFI_STATUS Status;

  mFormat = AllocatePool( sizeof(CHAR16) * 100 );
  UnicodeSPrint(mFormat, 100, L"  ");

  mLanguage = AllocatePool(10);
  AsciiSPrint(mLanguage, 10, "en-us");


  Status = gBS->LocateProtocol(
                        &gEfiDevicePathToTextProtocolGuid,
                        NULL,
                        (VOID**)&mDevice2TextProtocol);

  return Status;
}

EFI_HII_HANDLE
InitializeHiiPackage( EFI_HANDLE ImageHandle)
{
  EFI_STATUS                        Status;
  EFI_HII_PACKAGE_LIST_HEADER       *PackageList;
  EFI_HII_HANDLE                    HiiHandle;

  //
  //Retrieve HII package list from ImageHandle
  //
  Status = gBS->OpenProtocol(
                        ImageHandle,
                        &gEfiHiiPackageListProtocolGuid,
                        (VOID**)&PackageList,
                        ImageHandle,
                        NULL,
                        EFI_OPEN_PROTOCOL_GET_PROTOCOL
                        );
  ASSERT_EFI_ERROR(Status);

  if(EFI_ERROR(Status)){
    // Print(L"Retrieve HII package list %r\n", Status);
    return NULL;
  }

  //
  //Publish HII package list to HII Database.
  //
  Status = gHiiDatabase->NewPackageList(
                              gHiiDatabase,
                              PackageList,
                              NULL,
                              &HiiHandle
                              );
  ASSERT_EFI_ERROR( Status);
  if(EFI_ERROR(Status)) {
    return NULL;
  }

  return HiiHandle;
}

EFI_STATUS
EFIAPI
PrintDeviceDesc(IN CONST EFI_HANDLE Handle, BOOLEAN AllDisplay)
{
  EFI_STATUS                    Status;
  EFI_USB_IO_PROTOCOL           *UsbIo;
  EFI_USB_DEVICE_DESCRIPTOR     DeviceDesc;
  EFI_USB_CONFIG_DESCRIPTOR     ConfigDesc;
  EFI_USB_INTERFACE_DESCRIPTOR  InterfaceDesc;
  EFI_USB_ENDPOINT_DESCRIPTOR   EndpointDesc;
  CHAR16                        *Manufacturer;
  UINT16                        *LangIdTable;
  UINT16                        TableSize;
  UINT16                        FormatCount = 0;
  Status = gBS->HandleProtocol(Handle,
                              &gEfiUsbIoProtocolGuid,
                              (VOID**)&UsbIo);
  if( !AllDisplay )
  {
    return Status;
  }
  //
  //Only UsbIo protocol can get the Desc
  //
  if(UsbIo == NULL || EFI_ERROR(Status) ){
    return Status;
  }


  Status = UsbIo->UsbGetSupportedLanguages(UsbIo, &LangIdTable, &TableSize);
  Status = UsbIo->UsbGetDeviceDescriptor(UsbIo, &DeviceDesc);

  if (EFI_ERROR (Status) || (TableSize == 0) || (LangIdTable == NULL)) {
    Manufacturer = L"??";
  }
  UsbIo->UsbGetStringDescriptor(UsbIo,
                                LangIdTable[0],
                                DeviceDesc.StrManufacturer,
                                &Manufacturer);

   ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_DEVICE_MANUFACTURER), mUsbViewHiiHandle,
                mFormat,Manufacturer);

  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 100, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_DEVICE_DESC), mUsbViewHiiHandle,
                mFormat,DeviceDesc.DeviceClass,
                mFormat,DeviceDesc.DeviceSubClass,
                mFormat,DeviceDesc.DeviceProtocol,
                mFormat,DeviceDesc.BcdUSB,
                mFormat,DeviceDesc.BcdDevice,
                mFormat,DeviceDesc.MaxPacketSize0);
  }

  Status = UsbIo->UsbGetConfigDescriptor(UsbIo, &ConfigDesc);
  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 100, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_CONFIG_DESC), mUsbViewHiiHandle,
                mFormat,ConfigDesc.ConfigurationValue,
                mFormat,ConfigDesc.MaxPower*2,
                mFormat,ConfigDesc.NumInterfaces,
                mFormat,ConfigDesc.Attributes);
  }

  Status = UsbIo->UsbGetInterfaceDescriptor(UsbIo, &InterfaceDesc);
  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 100, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_INTERFACE_DESC), mUsbViewHiiHandle,
                mFormat,InterfaceDesc.InterfaceNumber,
                mFormat,InterfaceDesc.InterfaceClass,
                mFormat,InterfaceDesc.InterfaceSubClass,
                mFormat,InterfaceDesc.InterfaceProtocol);

    UnicodeSPrint(mFormat, 100, L"%s  ", mFormat);FormatCount++;
    for(UINT16 EpIndex = 0; EpIndex < InterfaceDesc.NumEndpoints; EpIndex++)
    {
      UsbIo->UsbGetEndpointDescriptor(UsbIo, EpIndex, &EndpointDesc);
      ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_ENDPOINT_DESC), mUsbViewHiiHandle,
                  mFormat,EpIndex,
                  mFormat,EndpointDesc.EndpointAddress,
                  mFormat,EndpointDesc.Interval,
                  mFormat,EndpointDesc.MaxPacketSize,
                  mFormat,EndpointDesc.Attributes);
    }
  }

  mFormat[ StrLen(mFormat) - (FormatCount*2) ] = L'\0';
  return Status;
}

VOID
EFIAPI
PrintMessage(IN CONST EFI_HANDLE Handle, BOOLEAN AllDisplay, BOOLEAN Select)
{
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;
  CHAR16                    *UsbDevicePathString;
  CHAR16                    *StringPath;
  CHAR16                    *DeviceName;

  DevicePath = DevicePathFromHandle( Handle );

  UsbDevicePathString = AllocateZeroPool( sizeof(CHAR16)*100 );
  GetUsbParentPortAndInterface(DevicePath, UsbDevicePathString);

  if( DevicePath == NULL ){
    StringPath = L"NULL";
  }else{
    StringPath = mDevice2TextProtocol->ConvertDevicePathToText(DevicePath, TRUE, TRUE);
  }

  gEfiShellProtocol->GetDeviceName(Handle,
                                  EFI_DEVICE_NAME_USE_COMPONENT_NAME|EFI_DEVICE_NAME_USE_DEVICE_PATH,
                                  mLanguage,
                                  &DeviceName);
  if( DeviceName == NULL )
  {
    DeviceName = L"Device";
  }
  ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_DEVICE_AND_PATH),mUsbViewHiiHandle,
                                mFormat,
                                ConvertHandleToHandleIndex( Handle ),
                                UsbDevicePathString,
                                StrCmp(DeviceName, StringPath) == 0 ? L"Device" : DeviceName
                                );
  //
  //Show Usb Io Device Info.
  //

  PrintDeviceDesc( Handle , AllDisplay);

  SHELL_FREE_NON_NULL(StringPath);
  SHELL_FREE_NON_NULL(UsbDevicePathString);

  return;
}



EFI_STATUS
EFIAPI
PrintRootHubDesc(IN CONST EFI_HANDLE Handle)
{
  EFI_STATUS Status;
  EFI_USB2_HC_PROTOCOL  *Usb2Hc;
  UINT8 MaxSpeed;
  UINT8 PortNumber;
  UINT8 Is64Bit;
  Status = gBS->HandleProtocol(Handle,
                    &gEfiUsb2HcProtocolGuid,
                    (VOID**)&Usb2Hc);
  Status = Usb2Hc->GetCapability(Usb2Hc, &MaxSpeed, &PortNumber, &Is64Bit);
  ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_ROOT_CAPABILITY), mUsbViewHiiHandle,
                                                                    MaxSpeed,
                                                                    PortNumber,
                                                                    Is64Bit);
  //
  //Get info by Pci io?
  //
  return Status;
}

VOID
UnionSetParentPortAndInterface(
   EFI_DEVICE_PATH_PROTOCOL* DevPath,
   USB_UNION_SET            *UnionSet
   )
{
  USB_DEVICE_PATH           *UsbDevicePath;
  EFI_DEVICE_PATH_PROTOCOL  *pDevPath=DevPath;
  UINT16                    Index;
  for(Index = 0; Index < 8;Index++)
  {
    UnionSet->ParAndIf[Index].Interface  = 0xFF;
    UnionSet->ParAndIf[Index].ParentPort = 0xFF;
  }
  UnionSet->Level = 0;

  if(DevPath == NULL){
    return ;
  }


  while(!IsDevicePathEnd(pDevPath)){
    if(pDevPath->Type == MESSAGING_DEVICE_PATH && pDevPath->SubType == MSG_USB_DP){
      UsbDevicePath = (USB_DEVICE_PATH*)pDevPath;
      UnionSet->ParAndIf[UnionSet->Level].ParentPort = UsbDevicePath->ParentPortNumber;
      UnionSet->ParAndIf[UnionSet->Level].Interface  = UsbDevicePath->InterfaceNumber;
      UnionSet->Level++;
    }
    pDevPath = NextDevicePathNode(pDevPath);
  }

  return ;
}

VOID
GetUsbParentPortAndInterface(
   EFI_DEVICE_PATH_PROTOCOL* DevPath,
   CHAR16             *String
   )
{
  USB_DEVICE_PATH           *UsbDevicePath;
  EFI_DEVICE_PATH_PROTOCOL  *pDevPath=DevPath;
  if(DevPath == NULL){
    String = L"None";
    return ;
  }

  while(!IsDevicePathEnd(pDevPath)){

    if(pDevPath->Type == MESSAGING_DEVICE_PATH && pDevPath->SubType == MSG_USB_DP){
      UsbDevicePath = (USB_DEVICE_PATH*)pDevPath;
      UnicodeSPrint(String + StrLen(String), 100, L"/Port%d-If%d", UsbDevicePath->ParentPortNumber, UsbDevicePath->InterfaceNumber);
    }
    pDevPath = NextDevicePathNode(pDevPath);
  }
  return ;
}

VOID
InsertNextIndex(UINT16 Index, INDEX_LIST *IndexList)
{
  INDEX_LIST *NewList;
  INDEX_LIST *NextList;

  NewList = (INDEX_LIST*) AllocatePool( sizeof(INDEX_LIST) );
  NewList->Index = Index;

  if(IndexList->Next == NULL)
  {
    NewList->Forward = IndexList;
    NewList->Next    = NULL;
    IndexList->Next  = NewList;
  } else {
    NextList = IndexList->Next;

    NewList->Forward = IndexList;
    NewList->Next    = NextList;

    IndexList->Next   = NewList;
    NextList->Forward = NewList;
  }
  return ;
}

VOID
InsertForwardIndex(UINT16 Index, INDEX_LIST *IndexList)
{
  InsertNextIndex(Index, IndexList->Forward);
}

BOOLEAN
IsNext(USB_UNION_SET *UnionSet, UINT16 Index, UINT16 ListData, UINT16 Level)
{
  if(UnionSet[Index].ParAndIf[Level].ParentPort == 0xFF)
  {
    return FALSE;
  }

  if(UnionSet[ListData].ParAndIf[Level].ParentPort == 0xFF)
  {
    return TRUE;
  }

  //
  //Match the device path
  //
  if ( UnionSet[Index].ParAndIf[Level].ParentPort == UnionSet[ListData].ParAndIf[Level].ParentPort &&
                 UnionSet[Index].ParAndIf[Level].Interface == UnionSet[ListData].ParAndIf[Level].Interface )
  {
    return ( IsNext(UnionSet, Index, ListData, Level+1 )  );
  } else if(UnionSet[Index].ParAndIf[Level].ParentPort > UnionSet[ListData].ParAndIf[Level].ParentPort )
  {
    return TRUE;
  } else if(UnionSet[Index].ParAndIf[Level].ParentPort == UnionSet[ListData].ParAndIf[Level].ParentPort &&
                UnionSet[Index].ParAndIf[Level].Interface >= UnionSet[ListData].ParAndIf[Level].Interface)
  {
    return TRUE;
  }else {
    return FALSE;
  }

}


VOID
SortIndex(UINT16 Index,INDEX_LIST *IndexList, USB_UNION_SET *UnionSet)
{
  UINT16        ListData;
  INDEX_LIST    *tmpListPt;

  ListData = IndexList->Index;

  tmpListPt   = IndexList;
  while(tmpListPt->Next != NULL)
  {
    ListData = tmpListPt->Index;
    if( !IsNext(UnionSet, Index, ListData, 0) && Index!=ListData )
    {
      InsertForwardIndex(Index, tmpListPt);
      break;
    }
    tmpListPt = tmpListPt->Next;
  }

  if(tmpListPt->Next == NULL)
  {
    InsertForwardIndex(Index, tmpListPt);
  }

}


//
//Device
//
EFI_STATUS
EnumerUsbDevieInfo(IN CONST EFI_HANDLE *HandleBuffer, UINTN NumOfHandles, BOOLEAN AllDisplay, BOOLEAN Select )
{
  EFI_STATUS                Status;
  UINT16                    Index;
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;
  USB_UNION_SET             *UnionSet;
  INDEX_LIST                *IndexList;
  INDEX_LIST                *ListHeader;
  INDEX_LIST                *ListTail;
  INDEX_LIST                *EmuList;

  Status = EFI_SUCCESS;

  UnionSet = AllocateZeroPool(sizeof(USB_UNION_SET) * NumOfHandles );

  for( Index = 0; Index < NumOfHandles; Index++ )
  {
    DevicePath = DevicePathFromHandle( HandleBuffer[Index] );
    UnionSetParentPortAndInterface(DevicePath, (UnionSet + Index) );
  }

  //
  //Init List
  //
  ListHeader = AllocatePool( sizeof(INDEX_LIST) );
  IndexList  = AllocatePool( sizeof(INDEX_LIST) );
  ListTail   = AllocatePool( sizeof(INDEX_LIST) );
  IndexList->Forward =  ListHeader;
  IndexList->Next    =  ListTail;
  IndexList->Index   =  0;

  ListHeader->Next    = IndexList;
  ListHeader->Forward = NULL;
  ListHeader->Index   = NumOfHandles;

  ListTail->Next    = NULL;
  ListTail->Index   = NumOfHandles;
  ListTail->Forward = IndexList;
  //
  //Sort the handle to output.
  //
  for( Index = 1; Index < NumOfHandles; Index++)
  {
    SortIndex(Index, IndexList, UnionSet);
  }

  EmuList =  ListHeader->Next;
  while( EmuList->Next != NULL)
  {
    //
    //If select the handle index, only print the select one detail message. Otherwise, print all device's message.
    //
    if( !Select || ( Select && ConvertHandleToHandleIndex( HandleBuffer[EmuList->Index] ) == mSelectPort ) )
    {
      Index = (UnionSet + EmuList->Index)->Level;
      while(Index--)
      {
        StrCatS(mFormat, 20, L"  ");
      }
      PrintMessage(HandleBuffer[EmuList->Index], AllDisplay, Select);
      UnicodeSPrint(mFormat, 100, L"  ");
      if(Select)
      {
        return Status;
      }
    }
    EmuList = EmuList->Next;
  }
  Print(L"\n");
  SHELL_FREE_NON_NULL(ListHeader);
  SHELL_FREE_NON_NULL(ListTail);
  SHELL_FREE_NON_NULL(IndexList);
  SHELL_FREE_NON_NULL(UnionSet);
  return Status;
}


//
//Roothub
//
EFI_STATUS
EnumerUsbRootInfo(IN CONST EFI_HANDLE *HandleBuffer, UINTN NumOfHandles, BOOLEAN AllDisplay, BOOLEAN Select)
{
  EFI_STATUS                Status;
  UINT16                    Index;
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;
  CHAR16                    *StringPath;
  CHAR16                    *DeviceName;
  EFI_HANDLE                *ChildControllerHandleBuffer;
  UINTN                     ChildControllerHandleCount;
  // //for debug
  // EFI_USB_IO_PROTOCOL        *UsbIo;
  // UINTN                      NumOfUsbIoHandles;
  // EFI_HANDLE                 *UsbIoHandleBuffer;
  // Status = gBS->LocateHandleBuffer( ByProtocol,
  //                                   &gEfiUsbIoProtocolGuid,
  //                                   NULL,
  //                                   &NumOfUsbIoHandles,
  //                                   &UsbIoHandleBuffer);
  // for( UINT16 UsbIoIndex = 0; UsbIoIndex < NumOfUsbIoHandles; UsbIoIndex++ )
  // {
  //   Status = gBS->HandleProtocol( UsbIoHandleBuffer[UsbIoIndex],
  //                                 &gEfiUsbIoProtocolGuid,
  //                                 (VOID**)&UsbIo);
  //   Print(L"[%02x] ", ConvertHandleToHandleIndex( UsbIoHandleBuffer[UsbIoIndex] ) );
  // }
  // Print(L"\n");

  //
  //Enumerate all Roothub and Roothub's child device
  //
  for( Index = 0; Index < NumOfHandles; Index++)
  {
    //
    //Get the DeviceName and DevicePath text
    //
    DevicePath = DevicePathFromHandle( HandleBuffer[Index] );
    if(DevicePath == NULL){
      Print(L"Root not DevicePath:%r\n", Status);
      continue;
    }
    gEfiShellProtocol->GetDeviceName(HandleBuffer[Index],
                                    EFI_DEVICE_NAME_USE_COMPONENT_NAME|EFI_DEVICE_NAME_USE_DEVICE_PATH,
                                    mLanguage,
                                    &DeviceName);

    StringPath = mDevice2TextProtocol->ConvertDevicePathToText(DevicePath, TRUE, TRUE);

    //
    //Look up the parent-child relationship about the handle.
    //
    ChildControllerHandleBuffer = NULL;
    Status = ParseHandleDatabaseForChildControllers(
                                      HandleBuffer[Index],
                                      &ChildControllerHandleCount,
                                      &ChildControllerHandleBuffer
                                      );
    //
    //If select the handle index, only print the select one detail message. Otherwise, print all device's message.
    //
    if( !Select || ( Select && ConvertHandleToHandleIndex( HandleBuffer[Index] ) == mSelectPort ) )
    {
      ShellPrintHiiEx(-1,-1,NULL,STRING_TOKEN(STR_ROOT_AND_PATH), mUsbViewHiiHandle,
                          ConvertHandleToHandleIndex(HandleBuffer[Index]),
                          StringPath,
                          (DeviceName != NULL ? DeviceName : L"Unknown")
                          );
      //
      //Print detail message
      //
      if( AllDisplay )
      {
        PrintRootHubDesc(HandleBuffer[Index]);
      }

      if( Select )
      {
        return Status;
      }
    }



    //
    //Print child device message.
    //
    if( ChildControllerHandleCount == 0 )
    {

    } else {
      EnumerUsbDevieInfo( ChildControllerHandleBuffer,  ChildControllerHandleCount, AllDisplay, Select );

    }


    SHELL_FREE_NON_NULL(StringPath);
    SHELL_FREE_NON_NULL(ChildControllerHandleBuffer);
  }

  return Status;
}

EFI_STATUS
EFIAPI
RunUsbView(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS              Status;
  LIST_ENTRY              *CheckPackage;
  CHAR16                  *ProblemParam;
  CONST CHAR16            *CommandLine;
  BOOLEAN                 AllDisplay = FALSE;
  BOOLEAN                 Select = FALSE;
  UINTN                   ParamCount;
  UINTN                   NumOfUsbHcHandles;
  EFI_HANDLE              *UsbHcHandleBuffer;

  Status = ShellInitialize();
  if( EFI_ERROR(Status) ){
    return SHELL_ABORTED;
  }

  //
  //Init module variable
  //
  Status = InitmVariable();

  if(EFI_ERROR(Status)){
    Print(L"Init mVariable %r\n", Status);
    return Status;
  }

  //
  //Parse the command line.
  //
  Status = ShellCommandLineParse(
    ParamList,
    &CheckPackage,
    &ProblemParam,
    TRUE
  );

  if( EFI_ERROR(Status) ){
    if( (Status == EFI_VOLUME_CORRUPTED) && (ProblemParam != NULL))
    {
      SHELL_FREE_NON_NULL( ProblemParam);
    }else {
      ASSERT(FALSE);
    }
    goto Error;
  }

  //
  //Check the number of parameters
  //
  Status = EFI_INVALID_PARAMETER;
  ParamCount = ShellCommandLineGetCount( CheckPackage);
  // Print(L"Param Count:%d\n", ParamCount);

  if( ParamCount > 2 )
  {
    ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_GEN_TOO_MANY), mUsbViewHiiHandle, L"UsbView" );
    ShellCommandLineFreeVarList( CheckPackage );
    return (SHELL_INVALID_PARAMETER);
  }

  if( ShellCommandLineGetFlag( CheckPackage, L"-a") )
  {
    AllDisplay = TRUE;
  }

  if( ShellCommandLineGetFlag( CheckPackage, L"-s" ) )
  {
    AllDisplay = TRUE;
    Select = TRUE;
    CommandLine = ShellCommandLineGetValue( CheckPackage, L"-s" );
    if( CommandLine == NULL)
    {
      ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_GEN_TOO_FEW), mUsbViewHiiHandle, L"-s" );
    }
    Status = ShellConvertStringToUint64( CommandLine, &mSelectPort, TRUE, FALSE );
    // Print(L"%x\n", mSelectPort);
  }


  Status = gBS->LocateHandleBuffer( ByProtocol,
                                    &gEfiUsb2HcProtocolGuid,
                                    NULL,
                                    &NumOfUsbHcHandles,
                                    &UsbHcHandleBuffer
                                  );


  if( EFI_ERROR( Status ) )
  {
    Print(L"HandleBuffer:%r\n", Status);
    return Status;
  }

  // Print(L"Hc Handles:%d\n", NumOfUsbHcHandles);
  EnumerUsbRootInfo( UsbHcHandleBuffer, NumOfUsbHcHandles, AllDisplay, Select );

Error:
  SHELL_FREE_NON_NULL( UsbHcHandleBuffer );
  SHELL_FREE_NON_NULL( mFormat );
  SHELL_FREE_NON_NULL( mLanguage );
  SHELL_FREE_NON_NULL( mDevice2TextProtocol );
  return Status;
}