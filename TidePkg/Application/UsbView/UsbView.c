#include "UsbView.h"


EFI_STATUS
EFIAPI
UsbViewMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS              Status;
  EFI_USB2_HC_PROTOCOL    *UsbHcProtocol;
  EFI_HANDLE              *HandleBuffer;
  UINTN                   HandleCount;
  EFI_USB_PORT_STATUS     PortStatus;

  Print(L"Start!\n");
  Status = gBS->LocateHandleBuffer(ByProtocol, &gEfiUsb2HcProtocolGuid, NULL, &HandleCount, &HandleBuffer);
  if(EFI_ERROR(Status))
  {
    DEBUG((DEBUG_INFO, "%r\n", Status));
    return Status;
  }

  for (UINT8 Index; Index < HandleCount ; Index ++)
  {
    Status = gBS->HandleProtocol(HandleBuffer[Index], &gEfiUsb2HcProtocolGuid, (void**)&UsbHcProtocol);
    if(EFI_ERROR(Status))
    {
      DEBUG((DEBUG_INFO, "Handle:%d:%r\n",Index, Status));
      continue;
    }

    Print(L"MajorRevision:%x, MinRevision:%x\n",UsbHcProtocol->MajorRevision, UsbHcProtocol->MinorRevision);

    for( UINT8 PortNum = 0; PortNum <= 8 ; PortNum ++)
    {
      Status = UsbHcProtocol->GetRootHubPortStatus(UsbHcProtocol,PortNum, &PortStatus);
      if(EFI_ERROR(Status))
      {
        Print(L"PortNum%02d:%r\n", PortNum, Status);
        if(PortNum == 0)continue;
        break;
      }
      Print(L"ProtNum%02d:0x%4x\n", PortNum, PortStatus);
    }
  }
  

  return Status;
}