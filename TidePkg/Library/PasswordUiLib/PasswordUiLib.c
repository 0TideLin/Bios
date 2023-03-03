#include "PasswordUiLib.h"
#include "PasswrodUiLibData.h"


EFI_GUID mPasswordUiGuid = PASSWORD_UI_LIB_FORMSET_GUID;

HII_VENDOR_DEVICE_PATH  mPasswordUiHiiVendorDevicePath = {
  {
    {
      HARDWARE_DEVICE_PATH,
      HW_VENDOR_DP,
      {
        (UINT8) (sizeof (VENDOR_DEVICE_PATH)),
        (UINT8) ((sizeof (VENDOR_DEVICE_PATH)) >> 8)
      }
    },
    //
    // {95310388-8f78-4616-b711-82587dd347da}
    //
    { 0x95310388, 0x8f78, 0x4616, { 0xb7, 0x11, 0x82, 0x58, 0x7d, 0xd3, 0x47, 0xda } }
  },
  {
    END_DEVICE_PATH_TYPE,
    END_ENTIRE_DEVICE_PATH_SUBTYPE,
    {
      (UINT8) (END_DEVICE_PATH_LENGTH),
      (UINT8) ((END_DEVICE_PATH_LENGTH) >> 8)
    }
  }
};

CHAR16 DataName[]=L"PASSWORD_UI_IFR_NVDATA";

PASSWORD_UI_CALLBACK_DATA  gPasswordUiPrivate = {
  PASSWORD_UI_CALLBACK_DATA_SIGNATURE,
  NULL,
  NULL,
  {
    PasswordUiExtractConfig,
    PasswordUiRouteConfig,
    PasswordUiCallback
  }
};




/**
  Dynamic create Hii information for Device Manager.

  @param   NextShowFormId     The FormId which need to be show.

**/
VOID
CreatePasswordUiForm(
  IN EFI_FORM_ID      NextShowFormId
)
{
  DEBUG((DEBUG_INFO, "%a Start\n", __FUNCTION__));
  VOID                        *StartOpCodeHandle;
  VOID                        *EndOpCodeHandle;
  EFI_IFR_GUID_LABEL          *StartGuidLabel;
  EFI_IFR_GUID_LABEL          *EndGuidLabel;

  //
  // Allocate space for creation of UpdateData Buffer
  //
  StartOpCodeHandle = HiiAllocateOpCodeHandle ();
  ASSERT (StartOpCodeHandle != NULL);

  EndOpCodeHandle = HiiAllocateOpCodeHandle ();
  ASSERT (EndOpCodeHandle != NULL);
  //
  // Create Hii Extend Label OpCode as the start opcode
  //
  StartGuidLabel = (EFI_IFR_GUID_LABEL *) HiiCreateGuidOpCode (StartOpCodeHandle, &gEfiIfrTianoGuid, NULL, sizeof (EFI_IFR_GUID_LABEL));
  StartGuidLabel->ExtendOpCode = EFI_IFR_EXTEND_OP_LABEL;
  StartGuidLabel->Number       = LABEL_PASSWORD;
  //
  // Create Hii Extend Label OpCode as the end opcode
  //
  EndGuidLabel = (EFI_IFR_GUID_LABEL *) HiiCreateGuidOpCode (EndOpCodeHandle, &gEfiIfrTianoGuid, NULL, sizeof (EFI_IFR_GUID_LABEL));
  EndGuidLabel->ExtendOpCode = EFI_IFR_EXTEND_OP_LABEL;
  EndGuidLabel->Number       = LABEL_END;

  //
  //Updata Front Page form
  //
  UiCustomizeFrontPage (
    gPasswordUiPrivate.HiiHandle,
    StartOpCodeHandle
    );

  HiiUpdateForm (
    gPasswordUiPrivate.HiiHandle,
    &mPasswordUiGuid,
    PASSWORD_FORM_ID,
    StartOpCodeHandle,
    EndOpCodeHandle
    );

  HiiFreeOpCodeHandle (StartOpCodeHandle);
  HiiFreeOpCodeHandle (EndOpCodeHandle);
}

/**
  This function allows a caller to extract the current configuration for one
  or more named elements from the target driver.


  @param This            Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.
  @param Request         A null-terminated Unicode string in <ConfigRequest> format.
  @param Progress        On return, points to a character in the Request string.
                         Points to the string's null terminator if request was successful.
                         Points to the most recent '&' before the first failing name/value
                         pair (or the beginning of the string if the failure is in the
                         first name/value pair) if the request was not successful.
  @param Results         A null-terminated Unicode string in <ConfigAltResp> format which
                         has all values filled in for the names in the Request string.
                         String to be allocated by the called function.

  @retval  EFI_SUCCESS            The Results is filled with the requested values.
  @retval  EFI_OUT_OF_RESOURCES   Not enough memory to store the results.
  @retval  EFI_INVALID_PARAMETER  Request is illegal syntax, or unknown name.
  @retval  EFI_NOT_FOUND          Routing data doesn't match any storage in this driver.

**/
EFI_STATUS
EFIAPI
PasswordUiExtractConfig (
  IN  CONST EFI_HII_CONFIG_ACCESS_PROTOCOL   *This,
  IN  CONST EFI_STRING                       Request,
  OUT EFI_STRING                             *Progress,
  OUT EFI_STRING                             *Results
  )
{
  DEBUG((DEBUG_INFO, "%a*****************************************************\n", __FUNCTION__));
  if (Progress == NULL || Results == NULL) {
    return EFI_INVALID_PARAMETER;
  }
  *Progress = Request;
  return EFI_NOT_FOUND;
}

/**
  This function processes the results of changes in configuration.

  @param This            Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.
  @param Configuration   A null-terminated Unicode string in <ConfigResp> format.
  @param Progress        A pointer to a string filled in with the offset of the most
                         recent '&' before the first failing name/value pair (or the
                         beginning of the string if the failure is in the first
                         name/value pair) or the terminating NULL if all was successful.

  @retval  EFI_SUCCESS            The Results is processed successfully.
  @retval  EFI_INVALID_PARAMETER  Configuration is NULL.
  @retval  EFI_NOT_FOUND          Routing data doesn't match any storage in this driver.

**/
EFI_STATUS
EFIAPI
PasswordUiRouteConfig (
  IN  CONST EFI_HII_CONFIG_ACCESS_PROTOCOL   *This,
  IN  CONST EFI_STRING                       Configuration,
  OUT EFI_STRING                             *Progress
  )
{
  DEBUG((DEBUG_INFO, "%a******************************************************\n", __FUNCTION__));
  if (Configuration == NULL || Progress == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  *Progress = Configuration;

  return EFI_NOT_FOUND;
}

/**
  This function is invoked if user selected a interactive opcode from Device Manager's
  Formset. If user set VBIOS, the new value is saved to EFI variable.

  @param This            Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.
  @param Action          Specifies the type of action taken by the browser.
  @param QuestionId      A unique value which is sent to the original exporting driver
                         so that it can identify the type of data to expect.
  @param Type            The type of value for the question.
  @param Value           A pointer to the data being sent to the original exporting driver.
  @param ActionRequest   On return, points to the action requested by the callback function.

  @retval  EFI_SUCCESS           The callback successfully handled the action.
  @retval  EFI_INVALID_PARAMETER The setup browser call this function with invalid parameters.

**/
EFI_STATUS
EFIAPI
PasswordUiCallback (
  IN  CONST EFI_HII_CONFIG_ACCESS_PROTOCOL   *This,
  IN  EFI_BROWSER_ACTION                     Action,
  IN  EFI_QUESTION_ID                        QuestionId,
  IN  UINT8                                  Type,
  IN  EFI_IFR_TYPE_VALUE                     *Value,
  OUT EFI_BROWSER_ACTION_REQUEST             *ActionRequest
  )
{
  PASSWORD_UI_IFR_NVDATA  *IfrNvData;
  CHAR16                  *NewString;
  UINTN                   NewStringLen;
  BOOLEAN                 Result;
  DEBUG((DEBUG_INFO, "Action:%d,QuestionId:%d\n", Action, QuestionId));
  if (Action != EFI_BROWSER_ACTION_CHANGING) {
    //mPasswordUiGuid
    // Do nothing for other UEFI Action. Only do call back when data is changed.
    //
    DEBUG((DEBUG_INFO, "Callback end\n"));
    return EFI_UNSUPPORTED;
  }
  if ((Value == NULL) || (ActionRequest == NULL)) {
    DEBUG((DEBUG_INFO, "Callback end\n"));
    return EFI_INVALID_PARAMETER;
  }
  if(Action == EFI_BROWSER_ACTION_CHANGING)
  {
    switch (QuestionId)
    {
    case KEY_USER:

      break;
    case KEY_PASSWORD:
        IfrNvData = AllocateZeroPool(sizeof(PASSWORD_UI_IFR_NVDATA));
        HiiGetBrowserData(&mPasswordUiGuid, DataName, sizeof(PASSWORD_UI_IFR_NVDATA),  (UINT8*)IfrNvData );
        // HiiSetBrowserData(&mPasswordUiGuid, DataName, sizeof(PASSWORD_UI_IFR_NVDATA), (UINT8*)IfrNvData, NULL);
        DEBUG((DEBUG_INFO, "password:%s\n", IfrNvData->Password));
        NewString = HiiGetString(gPasswordUiPrivate.HiiHandle, Value->string, NULL);
        NewStringLen = StrLen(NewString);
        DEBUG((DEBUG_INFO, "%a-%d: len:%d\n", __FUNCTION__, __LINE__, NewStringLen));
        DEBUG((DEBUG_INFO, "%a-%d: Str:%s\n", __FUNCTION__, __LINE__, NewString));
        UnicodeSPrint(IfrNvData->Password, NewStringLen*2 + 1, L"%s", NewString );
        DEBUG((DEBUG_INFO, "password:%s\n", IfrNvData->Password));
        // HiiSetString (gPasswordUiPrivate.HiiHandle, STRING_TOKEN (STR_PASSWORD_HELP), NewString, NULL);
        Result = HiiSetBrowserData(&mPasswordUiGuid, DataName, sizeof(PASSWORD_UI_IFR_NVDATA),  (UINT8*)IfrNvData, NULL);
        DEBUG((DEBUG_INFO, "Result:%x\n", Result));
      break;
    default:
      break;
    }

  }
  
  DEBUG((DEBUG_INFO, "Callback end\n"));
  // FreePool (NewString);
  // FreePool (IfrNvData);
  return EFI_SUCCESS;
}

/**
  Install Password UI driver.

  @param ImageHandle     The image handle.
  @param SystemTable     The system table.

  @retval  EFI_SUCEESS  Install  success.
  @retval  Other        Return error status.

**/
EFI_STATUS
EFIAPI
PasswordUiLibConstructor (
  IN EFI_HANDLE                            ImageHandle,
  IN EFI_SYSTEM_TABLE                      *SystemTable
)
{
  EFI_STATUS                  Status;
  DEBUG((DEBUG_INFO, "%a Start\n", __FUNCTION__));
  gPasswordUiPrivate.DriverHandle = NULL;
  Status = gBS->InstallMultipleProtocolInterfaces (
                  &gPasswordUiPrivate.DriverHandle,
                  &gEfiDevicePathProtocolGuid,
                  &mPasswordUiHiiVendorDevicePath,
                  &gEfiHiiConfigAccessProtocolGuid,
                  &gPasswordUiPrivate.ConfigAccess,
                  NULL
                  );
  ASSERT_EFI_ERROR (Status);

  //
  // Publish our HII data.
  //
  gPasswordUiPrivate.HiiHandle = HiiAddPackages (
                  &mPasswordUiGuid,
                  gPasswordUiPrivate.DriverHandle,
                  PasswordUiLibVfrBin,
                  PasswordUiLibStrings,
                  NULL
                  );
  ASSERT (gPasswordUiPrivate.HiiHandle != NULL);

  //
  // Update boot manager page
  //
  CreatePasswordUiForm ( 0x1000 );

  return EFI_SUCCESS;
}

/**
  Unloads the application and its installed protocol.

  @param  ImageHandle     Handle that identifies the image to be unloaded.
  @param  SystemTable     The system table.

  @retval EFI_SUCCESS           The image has been unloaded.
**/
EFI_STATUS
EFIAPI
PasswordUiLibDestructor(
  IN EFI_HANDLE                            ImageHandle,
  IN EFI_SYSTEM_TABLE                      *SystemTable
)
{
  EFI_STATUS                  Status;
  DEBUG((DEBUG_INFO, "%a Start\n", __FUNCTION__));
  Status = gBS->UninstallMultipleProtocolInterfaces (
                  gPasswordUiPrivate.DriverHandle,
                  &gEfiDevicePathProtocolGuid,
                  &mPasswordUiHiiVendorDevicePath,
                  &gEfiHiiConfigAccessProtocolGuid,
                  &gPasswordUiPrivate.ConfigAccess,
                  NULL
                  );
  ASSERT_EFI_ERROR (Status);

  HiiRemovePackages (gPasswordUiPrivate.HiiHandle);

  return EFI_SUCCESS;
}
