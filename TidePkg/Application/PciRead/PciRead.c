#include <Library/IoLib.h>
#include <Library/PciLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS
EFIAPI
PciReadMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS Status;
  UINT32 Reg;
  Reg = MmioRead32(0x59000024);
  Print(L"%08x\n");
  Status = EFI_SUCCESS;
  return Status;
}