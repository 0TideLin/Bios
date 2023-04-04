#include "PasswordUiDxe.h"
#include "PasswordUiDxeData.h"


EFI_GUID mPasswordUiGuid = PASSWORD_UI_LIB_FORMSET_GUID;


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