#ifndef _USB_VIEW_H_
#define _USB_VIEW_H_

#include <Uefi.h>

#include <Protocol/UsbIo.h>
#include <Protocol/Usb2HostController.h>
#include <Protocol/UsbHostController.h>
#include <Protocol/DevicePath.h>
#include <Protocol/PciIo.h>
#include <Protocol/PciRootBridgeIo.h>
#include <Protocol/DevicePathToText.h>
#include <Protocol/Shell.h>

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/HandleParsingLib.h>
#include <Library/UefiShellLib/UefiShellLib.h>
#include <Library/UefiHandleParsingLib/UefiHandleParsingLib.h>
#include <Library/HiiLib.h>
#include <Library/UefiHiiServicesLib.h>

#include <IndustryStandard/Pci22.h>
#include <IndustryStandard/Usb.h>


extern EFI_HII_HANDLE                *mUsbViewHiiHandle;

EFI_STATUS
EFIAPI
RunUsbView(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
);


typedef struct
{
  UINT8  ParentPort;
  UINT8  Interface;
}USB_PARENT_AND_INTERFACE;

typedef struct
{
  USB_PARENT_AND_INTERFACE ParAndIf[8];
  UINT16                   Level;
}USB_UNION_SET;

typedef struct INDEX_LIST_ST
{
  struct INDEX_LIST_ST  *Forward;
  UINT16               Index;
  struct INDEX_LIST_ST  *Next;
}INDEX_LIST;


VOID
EFIAPI
InitUsbViewDispaly();


VOID
GetUsbParentPortAndInterface(
   EFI_DEVICE_PATH_PROTOCOL* DevPath,
   CHAR16             *String
   );


EFI_HII_HANDLE
InitializeHiiPackage(EFI_HANDLE ImageHandle);

#endif