#include <Uefi.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/DebugLib.h>
#include <Library/ShellLib.h>
#include <Library/PrintLib.h>

#include <Protocol/Shell.h>
#include <Protocol/HiiDatabase.h>
#include <Protocol/HiiPackageList.h>
#include <Protocol/HiiImageEx.h>


EFI_STATUS
EFIAPI
HiiDatabaseRun(
  IN EFI_HANDLE               ImageHandle,
  IN EFI_SYSTEM_TABLE         *SystemTable
)
{
  EFI_STATUS                      Status;
  // EFI_HII_PACKAGE_LIST_HEADER     *PackageList;
  EFI_HII_DATABASE_PROTOCOL       *HiiDatabase;
  EFI_HII_IMAGE_EX_PROTOCOL       *ImageEx;
  // EFI_HANDLE                      Handle;

  EFI_HII_HANDLE                  *HandleBuffer;
  UINTN                           BufferLength;

  // EFI_HII_PACKAGE_LIST_HEADER     *PackageHeaderBuffer;
  // EFI_HII_PACKAGE_HEADER          *Package;
  UINTN                           PackageHeaderBufferSize;
  EFI_IMAGE_INPUT                 *Image;
  EFI_IMAGE_OUTPUT                **Blt;

  Status = gBS->LocateProtocol(
                  &gEfiHiiDatabaseProtocolGuid,
                  NULL,
                  (VOID **) &HiiDatabase
                  );
  ASSERT_EFI_ERROR(Status);
  
  Status = gBS->LocateProtocol(
                  &gEfiHiiImageExProtocolGuid,
                  NULL,
                  (VOID **) &ImageEx
                  );
  ASSERT_EFI_ERROR(Status);

  BufferLength = 0;
  HandleBuffer = NULL;
  Status = HiiDatabase->ListPackageLists(
                              HiiDatabase,
                              EFI_HII_PACKAGE_TYPE_ALL,
                              NULL,
                              &BufferLength,
                              HandleBuffer
                              );
  if(Status == EFI_BUFFER_TOO_SMALL)
  {
    HandleBuffer = AllocateZeroPool(BufferLength);
    Status = HiiDatabase->ListPackageLists(
                              HiiDatabase,
                              EFI_HII_PACKAGE_IMAGES,
                              NULL,
                              &BufferLength,
                              HandleBuffer
                              );
  }
  // ASSERT(Status);
  DEBUG((DEBUG_INFO, "Number of HiiHandle is %d, Status=%r\n", BufferLength, Status));
  PackageHeaderBufferSize = 0;
  Image = AllocatePool(sizeof(EFI_IMAGE_INPUT));
  Blt   = AllocatePool(SIZE_2MB);
  for(UINTN Index = 0; Index < BufferLength; Index++)
  {
    DEBUG((DEBUG_INFO, "Buffer Index:%d\n", Index));
    Status = ImageEx->GetImageEx( ImageEx, HandleBuffer[Index],  0x0001, Image);
    DEBUG((DEBUG_INFO, "Image:%r\n", Status ));
    if(!EFI_ERROR(Status)){
      DEBUG((DEBUG_INFO,"%d X %d\n", Image->Height, Image->Width));
      Status = ImageEx->DrawImageEx(ImageEx, EFI_HII_DIRECT_TO_SCREEN, Image, Blt, 0, 0);
      DEBUG((DEBUG_INFO, "DrawImage:%r\n", Status ));
    }

  }
  Status = EFI_SUCCESS;
  return Status;
}