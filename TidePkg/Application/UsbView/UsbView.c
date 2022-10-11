#include "UsbView.h"


EFI_STATUS
EFIAPI
UsbViewMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS              Status;
  UINTN                   NumOfPciHandles;
  UINTN                   SegmentNumber;
  UINTN                   BusNumber;
  UINTN                   DeviceNumber;
  UINTN                   FunctionNumber;
  EFI_PCI_IO_PROTOCOL     *PciIo;
  EFI_HANDLE              *HandleBuffer;
  PCI_DEVICE_INDEPENDENT_REGION      PciRegion;

  Status = gBS->LocateHandleBuffer(
                                  ByProtocol,
                                  &gEfiPciIoProtocolGuid,
                                  NULL,
                                  &NumOfPciHandles,
                                  &HandleBuffer
                                  );
  if( EFI_ERROR(Status)){
    Print(L"No get the Pciio Buffer %r\n", Status);
    return Status;
  }
  for(UINTN Index = 0; Index < NumOfPciHandles; Index++)
  {
    Status = gBS->HandleProtocol(
                              HandleBuffer[Index],
                              &gEfiPciIoProtocolGuid,
                              (VOID**) &PciIo
                              );
    if( EFI_ERROR(Status)){
      Print(L"HandleProtocol error: %r\n", Status);
      continue;
    }
    //
    //Get the Class code
    //
    PciIo->Pci.Read(PciIo, EfiPciIoWidthUint32, 0, sizeof(PciRegion)/sizeof(UINT32), &PciRegion);


    Print(L"%x, %x, %x\n", PciRegion.ClassCode[0], PciRegion.ClassCode[1], PciRegion.ClassCode[2]); //ProIf,SubClass,BaseClass
    if(IS_CLASS(PciRegion.ClassCode[2], PCI_SERIAL_BUS_CONTROLLER)){
      Print(L"Vid:%04x,Did:%04x\n", PciRegion.VendorId, PciRegion.DeviceId);
      PciIo->GetLocation(PciIo, &SegmentNumber,&BusNumber, &DeviceNumber, &FunctionNumber);
      Print(L"B,D,F:%x,%x,%x\n",BusNumber, DeviceNumber, FunctionNumber);
    }
  }

  return Status;
}