
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
#include <Uefi.h>
#include <Protocol/PlatformLogo.h>




EFI_HII_HANDLE            mHiiHandle;
EFI_HII_IMAGE_EX_PROTOCOL *mHiiImageEx;

EFI_STATUS
EFIAPI
InitializePassword(
  IN EFI_HANDLE   ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable
)
{
  EFI_STATUS Status;
  EFI_HII_PACKAGE_LIST_HEADER *PackageList;
  EFI_HII_DATABASE_PROTOCOL   *HiiDatabase;
  // IMAGE_TOKEN(IMG_PICTURE);
  Status = gBS->LocateProtocol (
                  &gEfiHiiDatabaseProtocolGuid,
                  NULL,
                  (VOID **) &HiiDatabase
                  );
  ASSERT_EFI_ERROR (Status);

  Status = gBS->LocateProtocol (
                  &gEfiHiiImageExProtocolGuid,
                  NULL,
                  (VOID **) &mHiiImageEx
                  );
  ASSERT_EFI_ERROR (Status);

  //
  // Retrieve HII package list from ImageHandle
  //
  Status = gBS->OpenProtocol (
                  ImageHandle,
                  &gEfiHiiPackageListProtocolGuid,
                  (VOID **) &PackageList,
                  ImageHandle,
                  NULL,
                  EFI_OPEN_PROTOCOL_GET_PROTOCOL
                  );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "HII Image Package with logo not found in PE/COFF resource section\n"));
    return Status;
  }

  //
  // Publish HII package list to HII Database.
  //
  Status = HiiDatabase->NewPackageList (
                          HiiDatabase,
                          PackageList,
                          NULL,
                          &mHiiHandle
                          );

  return Status;
}