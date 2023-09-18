#include <Uefi.h>

#include <Protocol/UsbIo.h>
#include <Protocol/Usb2HostController.h>
#include <Protocol/UsbHostController.h>
#include <Protocol/DevicePathToText.h>
#include <Protocol/Shell.h>

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <IndustryStandard/Pci22.h>
#include <IndustryStandard/Usb.h>
#include <Library/ShellLib.h>

STATIC CONST SHELL_PARAM_ITEM ParamList[] = {
  {L"-p",  TypeValue},
  {NULL, TypeValue}
};


EFI_STATUS
EFIAPI
DisableUsbPort(
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
){
  EFI_STATUS Status;
  LIST_ENTRY              *CheckPackage;
  CHAR16                  *ProblemParam;
  UINTN                   SelectPort;
  UINTN                   HandleCount;
  UINT32                  CommandStatus;
  EFI_HANDLE              *Handles;
  EFI_USB_IO_PROTOCOL     *UsbIo;
  EFI_USB_DEVICE_DESCRIPTOR DeviceDescriptor;
  EFI_USB_PORT_STATUS     PortStatus;
  USB_DEVICE_REQUEST      Request;
  USB_DEVICE_REQUEST      ResetRequest;
  USB_DEVICE_REQUEST      GetPortRequest;
  CONST CHAR16            *CommandLine;

  Status = ShellInitialize();


  if(EFI_ERROR(Status)){
    Print(L"Init mVariable %r\n", Status);
    return Status;
  }
  //
  //Disable port command
  //
  Request.RequestType = 0B01000000;
  Request.Request     = 0x56;
  Request.Value       = 0;
  Request.Length      = 0;
  //
  //Reset command
  //
  ResetRequest.RequestType = 0B00100011;
  ResetRequest.Request     = 3;
  ResetRequest.Value       = 4;
  ResetRequest.Length      = 0;
  //
  //Get Port command
  //
  GetPortRequest.RequestType = 0B10100011;
  GetPortRequest.Request     = 0;
  GetPortRequest.Value       = 0;
  GetPortRequest.Length      = 4;
  //
  //Parse the command line.
  //
  Status = ShellCommandLineParse(
    ParamList,
    &CheckPackage,
    &ProblemParam,
    TRUE
  );

  if( EFI_ERROR(Status) ){
    if( (Status == EFI_VOLUME_CORRUPTED) && (ProblemParam != NULL))
    {
      SHELL_FREE_NON_NULL( ProblemParam);
    }else {
      ASSERT(FALSE);
    }
    Print(L"CommandLineParse error %r\n", Status);
    return Status;
  }

  if( ShellCommandLineGetFlag( CheckPackage, L"-p" ) )
  {
    CommandLine = ShellCommandLineGetValue( CheckPackage, L"-p" );
    if( CommandLine == NULL)
    {
      Print(L"CommandLine Null\n");
    }
    Status = ShellConvertStringToUint64( CommandLine, &SelectPort, TRUE, FALSE );
  }

  Print(L"Disable Port %d \n", SelectPort);
  Request.Index |= SelectPort;
  Request.Index &= (0x000F);
  ResetRequest.Index |= (SelectPort + 1);
  ResetRequest.Index &= (0x000F);
  GetPortRequest.Index |= (SelectPort + 1);
  GetPortRequest.Index &= (0x000F);

  Print(L"port: 0x%x\n", Request.Index);
  Status = gBS->LocateHandleBuffer(
                  ByProtocol,
                  &gEfiUsbIoProtocolGuid,
                  NULL,
                  &HandleCount,
                  &Handles);
  if(!EFI_ERROR(Status)){
    for(UINT16 Index = 0; Index < HandleCount; Index ++)
    {
      Status = gBS->HandleProtocol(
                        Handles[Index],
                        &gEfiUsbIoProtocolGuid,
                        (void**)&UsbIo);

      UsbIo->UsbGetDeviceDescriptor(UsbIo, &DeviceDescriptor);

      if(DeviceDescriptor.IdVendor == 0x174C && DeviceDescriptor.IdProduct == 0x3074){
        //Send Get port cmmond
        Status = UsbIo->UsbControlTransfer(
                                  UsbIo,
                                  &GetPortRequest,
                                  EfiUsbDataIn,
                                  50,
                                  (void*)&PortStatus,
                                  GetPortRequest.Length,
                                  &CommandStatus);
        Print(L"Get Port Status %r - 0x%x\n", Status, CommandStatus);
        Print(L"PortStatus:0x%x - PortChangeStatus:0x%x\n", PortStatus.PortStatus, PortStatus.PortChangeStatus);

        //Send reset commond
        Status = UsbIo->UsbControlTransfer(
                                  UsbIo,
                                  &ResetRequest,
                                  EfiUsbNoData,
                                  50,
                                  (void*)NULL,
                                  0,
                                  &CommandStatus);
        Print(L"reset port %d %r-%r\n", SelectPort, Status, CommandStatus);

        //Send disable port commond
        Status = UsbIo->UsbControlTransfer(
                                  UsbIo,
                                  &Request,
                                  EfiUsbNoData,
                                  50,
                                  (void*)NULL,
                                  0,
                                  &CommandStatus);
        Print(L"Disable port %d %r-%r\n", SelectPort, Status, CommandStatus);
      
      }
    }
  }
  return Status;
}