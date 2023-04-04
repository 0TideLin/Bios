#ifndef _PASSWORD_UI_DXE_H__
#define _PASSWORD_UI_DXE_H__

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
#include <Protocol/HiiDatabase.h>
#include <Protocol/HiiPackageList.h>
#include <Protocol/GraphicsOutput.h>
#include <Protocol/HiiImageEx.h>


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

//
// Flag values of EFI_IFR_QUESTION_HEADER
//
#define EFI_IFR_FLAG_READ_ONLY           0x01
#define EFI_IFR_FLAG_CALLBACK            0x04
#define EFI_IFR_FLAG_RESET_REQUIRED      0x10
#define EFI_IFR_FLAG_REST_STYLE          0x20
#define EFI_IFR_FLAG_RECONNECT_REQUIRED  0x40
#define EFI_IFR_FLAG_OPTIONS_ONLY        0x80

#define FRONT_PAGE_KEY_CONTINUE               0x1000
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






#endif