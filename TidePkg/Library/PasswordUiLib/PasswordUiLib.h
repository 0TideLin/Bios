#ifndef _PASSWORD_UI_LIB_H__
#define _PASSWORD_UI_LIB_H__

#include <Guid/MdeModuleHii.h>
#include <Guid/HiiPlatformSetupFormset.h>

#include <Protocol/HiiConfigAccess.h>
#include <Protocol/PciIo.h>

#include <Library/PrintLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseLib.h>
#include <Library/HiiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/UefiBootManagerLib.h>
#include <Library/UefiHiiServicesLib.h>


#define PASSWORD_UI_LIB_FORMSET_GUID \
  { 0x884bcb7b, 0x8d85, 0x482c, {0xaa, 0x3e, 0x2b, 0x72, 0x1c, 0xf9, 0x7b, 0xd7} }


#define PASSWORD_UI_CALLBACK_DATA_SIGNATURE  SIGNATURE_32 ('P', 'U', 'C', 'B')

//
//Key value same with .vfr
//
#define KEY_USER                       0x200
#define KEY_PASSWORD                   0x201

#define PASSWORD_FORM_ID                   0x1000

//
//laber value
//
#define LABEL_PASSWORD                 0x1100
#define LABEL_END                          0xffff

typedef struct {
  UINTN                           Signature;

  ///
  /// Device Manager HII relative handles
  ///
  EFI_HII_HANDLE                  HiiHandle;

  EFI_HANDLE                      DriverHandle;

  ///
  /// Device Manager Produced protocols
  ///
  EFI_HII_CONFIG_ACCESS_PROTOCOL  ConfigAccess;

  ///
  /// Configuration data
  ///
  UINT8                           VideoBios;
} PASSWORD_UI_CALLBACK_DATA;

///
/// HII specific Vendor Device Path definition.
///
typedef struct {
  VENDOR_DEVICE_PATH             VendorDevicePath;
  EFI_DEVICE_PATH_PROTOCOL       End;
} HII_VENDOR_DEVICE_PATH;



//
// These are the VFR compiler generated data representing our VFR data.
//
extern UINT8  PasswordUiLibVfrBin[];


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
  );


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
  );


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
  );




#endif