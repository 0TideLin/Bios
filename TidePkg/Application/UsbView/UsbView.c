#include "UsbView.h"

VOID
EFIAPI
LsDevice(IN USB_VIEW_DEVICE_DISPLAY DeviceDisplay)
{
  Print(L"---------------------------------\n");
  Print(L"Manufacturer: %s\n",DeviceDisplay.Manufacturer);
  Print(L"Serial Number: %s\n", DeviceDisplay.SerialNumber);
  Print(L"Speed: 0x%02x\n", DeviceDisplay.Speed);
  Print(L"Bus: %x\n", DeviceDisplay.Bus);
  Print(L"Address: %02x\n", DeviceDisplay.Address);
  Print(L"Number of Ports: %02x\n", DeviceDisplay.NumberOfPort);
  Print(L"Bandwidth allocated: %02x\n", DeviceDisplay.BandWidthAllocated);
  Print(L"Usb Version: %04x\n", DeviceDisplay.UsbVersion);
  Print(L"Device Class: %02x\n", DeviceDisplay.DeviceClass);
  Print(L"Device SubClass: %02x\n", DeviceDisplay.DeviceSubClass);
  Print(L"Device Protocol:  %02x\n", DeviceDisplay.DeviceProtocol);
  Print(L"Maximum Default Endpoint Size: %02x\n", DeviceDisplay.MaximumDefaultEndpointSize);
  Print(L"Number of Configureations: %02x\n", DeviceDisplay.NumberOfConfigurations);
  Print(L"Vendor Id: %04x\n", DeviceDisplay.VendorId);
  Print(L"Product Id: %04x\n", DeviceDisplay.ProductId);
  Print(L"Revision Number: %04x\n", DeviceDisplay.RevisionNumber);
  Print(L"---------------------------------\n");
  return ;
}

/**
  Find the child device on the hub's port.

  @param  HubIf                 The hub interface.
  @param  Port                  The port of the hub this child is connected to.

  @return The device on the hub's port, or NULL if there is none.

**/
USB_DEVICE *
UsbFindChild (
  IN USB_INTERFACE        *HubIf,
  IN UINT8                Port
  )
{
  USB_DEVICE              *Device;
  USB_BUS                 *Bus;
  UINTN                   Index;

  Bus = HubIf->Device->Bus;

  //
  // Start checking from device 1, device 0 is the root hub
  //
  for (Index = 1; Index < Bus->MaxDevices; Index++) {
    Device = Bus->Devices[Index];

    if ((Device != NULL) && (Device->ParentAddr == HubIf->Device->Address) &&
        (Device->ParentPort == Port)) {

      return Device;
    }
  }

  return NULL;
}

BOOLEAN
EFIAPI
CheckDeviceExist(USB_DEVICE *RootHub, UINT64  *DeviceAddress)
{
  UINT64 Address;
  Address = (UINT64)RootHub;
  Print(L"%016x\n", Address);
  if(*DeviceAddress == 0)
  {
    *DeviceAddress = Address;
    return FALSE;
  } else {
    while( (*DeviceAddress) != 0 )
    {
      if( *(DeviceAddress++) == Address )return TRUE;
    }
    *(DeviceAddress++) = Address;
  }
  return FALSE;
}

EFI_STATUS
EFIAPI
LsUsbHcInfo()
{
  EFI_STATUS Status;
  UINTN                   NumOfHandles;
  UINTN                   Count;
  USB_INTERFACE           *RootIf;
  USB_INTERFACE           *UsbIf;
  USB_DEVICE              *RootHub;
  USB_DEVICE              *UsbDev;
  USB_BUS                 *Bus;
  // UINTN                   SegmentNumber;
  // UINTN                   BusNumber;
  // UINTN                   DeviceNumber;
  // UINTN                   FunctionNumber;
  // UINT8                   MaxSpeed = 0;
  // UINT8                   PortNumber = 0;
  // UINT8                   Is64bit;
  EFI_HANDLE              *HandleBuffer;
  // EFI_USB2_HC_PROTOCOL    *Usb2HcProtocol;
  EFI_USB_IO_PROTOCOL     *UsbIoProtocol;
  // USB_VIEW_HUB_DISPLAY    HubDisplay;

  USB_DEVICE_DESCRIPTOR   DeviceDsc;

  Status = gBS->LocateHandleBuffer(
                                  ByProtocol,
                                  &gEfiUsbIoProtocolGuid,
                                  NULL,
                                  &NumOfHandles,
                                  &HandleBuffer
                                  );
  if(EFI_ERROR(Status)){
    Print(L"HandleBuffer:%r\n", Status);
    return Status;
  }

  for( UINTN Index = 0; Index < NumOfHandles; Index++)
  {
    Status = gBS->HandleProtocol(
                                HandleBuffer[Index],
                                &gEfiUsbIoProtocolGuid,
                                (void **)&UsbIoProtocol
                                );
    if(EFI_ERROR(Status)){
      Print(L"HandleProtocol:%r\n", Status);
      continue;
    }
    UsbIf  = USB_INTERFACE_FROM_USBIO( UsbIoProtocol);
    UsbDev = UsbIf->Device;
    DeviceDsc = UsbDev->DevDesc->Desc;
    Print(L"%d:IsHub:%x\n", Index, UsbIf->IsHub);
    Print(L"Speed:%02x,Address:%02x,Bus:%x, Class:%04x,SubClass:%04x, Protocol:%04x Vendor:%04x Product:%04x\n",
                                                      UsbDev->Speed,
                                                      UsbDev->Address,
                                                      UsbDev->Bus->BusId.Reserved,
                                                      DeviceDsc.DeviceClass,
                                                      DeviceDsc.DeviceSubClass,
                                                      DeviceDsc.DeviceProtocol,
                                                      DeviceDsc.IdVendor,
                                                      DeviceDsc.IdProduct);
    Print(L"MaxPackeSize:%02x, NumOfCon:%02x, Manufac:%02x, Product:%02x, SerialNuber:%02x\n",
                                DeviceDsc.MaxPacketSize0,
                                DeviceDsc.NumConfigurations,
                                DeviceDsc.StrManufacturer,
                                DeviceDsc.StrProduct,
                                DeviceDsc.StrSerialNumber );


    Count = 0;
    RootHub = UsbDev;
    CHAR16* Blank= L"--";
    while(1)
    {
      if(RootHub->ParentIf == NULL)break;
      RootIf = RootHub->ParentIf;
      RootHub = RootIf->Device;
      DeviceDsc = RootHub->DevDesc->Desc;
      for(UINT8 blank =0; blank<=Count;blank++)Print(L"%s", Blank);
      Print(L"Parent%d:IsHub:%x\n", Count , RootIf->IsHub);
      for(UINT8 blank =0; blank<=Count;blank++)Print(L"%s", Blank);
      Print(L"Speed:%x,Address:%02x,Bus:%x,Class:%04x,SubClass:%04x, Protocol:%04x Vendor:%04x Product:%04x\n",
                                                      RootHub->Speed,
                                                      RootHub->Address,
                                                      RootHub->Bus->BusId,
                                                      DeviceDsc.DeviceClass,
                                                      DeviceDsc.DeviceSubClass,
                                                      DeviceDsc.DeviceProtocol,
                                                      DeviceDsc.IdVendor,
                                                      DeviceDsc.IdProduct);
      for(UINT8 blank =0; blank<=Count;blank++)Print(L"%s", Blank);
      Print(L"MaxPackeSize:%02x, NumOfCon:%02x, Manufac:%02x, Product:%02x, SerialNuber:%02x\n",
                                DeviceDsc.MaxPacketSize0,
                                DeviceDsc.NumConfigurations,
                                DeviceDsc.StrManufacturer,
                                DeviceDsc.StrProduct,
                                DeviceDsc.StrSerialNumber);

      if( RootHub->Bus->Usb2Hc != NULL){
        Bus = RootHub->Bus;
        for(UINT8 blank =0; blank<=Count;blank++)Print(L"%s", Blank);
        Print(L"Bus:%d\n",Bus->MaxDevices);
      }
      Count++;
    }

  }

  return Status;
}
UINT8  TestTmp = 0;

VOID
EFIAPI
LsMessage( USB_DEVICE *UsbDev)
{
  USB_DEVICE_DESCRIPTOR   DeviceDsc;
  // USB_CONFIG_DESC         Configs;
  USB_CONFIG_DESC         *ConfigDesc;
  USB_INTERFACE_DESC      **Interface;
  Print(L"--------------------------\n");
  DeviceDsc = UsbDev->DevDesc->Desc;
  ConfigDesc = UsbDev->ActiveConfig;
  Interface = ConfigDesc->Interfaces;
  Print(L"Tier:%02x,Address:%02x,Class:%04x,SubClass:%04x, Protocol:%04x Vendor:%04x Product:%04x,NumOfConfig:%04x\n",
                                                      UsbDev->Tier,
                                                      UsbDev->Address,
                                                      DeviceDsc.DeviceClass,
                                                      DeviceDsc.DeviceSubClass,
                                                      DeviceDsc.DeviceProtocol,
                                                      DeviceDsc.IdVendor,
                                                      DeviceDsc.IdProduct,
                                                      DeviceDsc.NumConfigurations);
  Print(L"  Configure:\n");
  Print(L"  Len:%02x,DscType:%02x,TotalLen:%04x,NumIf:%02x,ConValue:%02x,Con:%02x,Attr:%02x,MaxPow:%02x\n",
                        ConfigDesc->Desc.Length,
                        ConfigDesc->Desc.DescriptorType,
                        ConfigDesc->Desc.TotalLength,
                        ConfigDesc->Desc.NumInterfaces,
                        ConfigDesc->Desc.ConfigurationValue,
                        ConfigDesc->Desc.Configuration,
                        ConfigDesc->Desc.Attributes,
                        ConfigDesc->Desc.MaxPower);
  for(UINT16 Index = 0; Index < ConfigDesc->Desc.NumInterfaces; Index++)
  {
    Print(L"    Interface:%d\n", Index);
    Print(L"      ActiveIndex:%04x\n",
                       Interface[Index]->ActiveIndex
                       );
  }


  return;
}


EFI_STATUS
EFIAPI
UsbViewMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS              Status;
  // // Status = LsUsbHcInfo();
  UINTN                   NumOfHandles;
  // // UINTN                   SegmentNumber;
  // // UINTN                   BusNumber;
  // // UINTN                   DeviceNumber;
  // // UINTN                   FunctionNumber;
  // EFI_USB2_HC_PROTOCOL    *Usb2Hc;
  EFI_USB_IO_PROTOCOL     *UsbIo;
  EFI_HANDLE              *HandleBuffer;
  USB_BUS                 *Bus;
  USB_INTERFACE           *UsbIf;
  USB_INTERFACE           *RootIf;
  USB_DEVICE              *RootHub;
  USB_DEVICE              *UsbDev;
  USB_DEVICE              *Child;
  UINT64                  *DeviceAddress;
  USB_VIEW_DEVICE_DISPLAY       DeviceDisplay;
  // USB_VIEW_CONFIG_DISPLAY       ConfigDisplay;
  // USB_VIEW_INTERFACE_DISPLAY    InterfaceDisplay;
  // USB_VIEW_ENDPOINT_DISPLAY     EndpointDisplay;



  DeviceAddress = AllocateZeroPool( sizeof(UINT64)*256  );//max device 256
  Status = gBS->LocateHandleBuffer(
                                  ByProtocol,
                                  &gEfiUsbIoProtocolGuid,
                                  NULL,
                                  &NumOfHandles,
                                  &HandleBuffer
                                  );
  if(EFI_ERROR(Status)){
    Print(L"HandleBuffer:%r\n", Status);
    return Status;
  }
  Print(L"Num of Handles:%d\n", NumOfHandles);
  for( UINTN Index = 0; Index < NumOfHandles; Index++)
  {
    Status = gBS->HandleProtocol(
                                HandleBuffer[Index],
                                &gEfiUsbIoProtocolGuid,
                                (void **)&UsbIo
                                );
    if(EFI_ERROR(Status)){
      Print(L"HandleProtocol:%r\n", Status);
      continue;
    }
    //get the root hub
    UsbIf  = USB_INTERFACE_FROM_USBIO( UsbIo);
    if(UsbIf == NULL)continue;
    Bus = UsbIf->Device->Bus;
    RootHub = Bus->Devices[0];
    RootIf  = RootHub->Interfaces[0];

    DeviceDisplay.IsXhci = TRUE;
    DeviceDisplay.IsHub  = TRUE;
    DeviceDisplay.Address = RootHub->Address;
    DeviceDisplay.Bus     = 0; //need to get;
    DeviceDisplay.BandWidthAllocated = 0; //need to get;
    DeviceDisplay.DeviceClass     = RootHub->DevDesc->Desc.DeviceClass;
    DeviceDisplay.DeviceSubClass  = RootHub->DevDesc->Desc.DeviceSubClass;
    DeviceDisplay.DeviceProtocol  = RootHub->DevDesc->Desc.DeviceProtocol;
    if(RootIf == NULL)continue;
    // Status = RootIf->UsbIo.UsbGetStringDescriptor(&RootIf->UsbIo,
    //                                       RootHub->LangId[0],
    //                                       RootHub->DevDesc->Desc.StrManufacturer,
    //                                       &DeviceDisplay.Manufacturer );


    Print(L"Get Manufacturer:%r\n", Status);
    if( !EFI_ERROR(Status) )
    {
      DeviceDisplay.Manufacturer = L"NoGet";
    }
    DeviceDisplay.Name = L"NeedToFind";

    // Status = RootIf->UsbIo.UsbGetStringDescriptor(&RootIf->UsbIo,
    //                                       RootHub->LangId[0],
    //                                       RootHub->DevDesc->Desc.StrSerialNumber,
    //                                       &DeviceDisplay.SerialNumber );
    Print(L"Get SerialNumber:%r\n", Status);
    if( !EFI_ERROR(Status) )
    {
      DeviceDisplay.SerialNumber = L"NoGet";
    }
    DeviceDisplay.ProductId  = RootHub->DevDesc->Desc.IdProduct;
    DeviceDisplay.VendorId   =
    DeviceDisplay.UsbVersion = RootHub->DevDesc->Desc.BcdUSB;
    DeviceDisplay.RevisionNumber = RootHub->DevDesc->Desc.BcdDevice;
    DeviceDisplay.Speed      = RootHub->Speed;
    DeviceDisplay.NumberOfConfigurations = RootHub->DevDesc->Desc.NumConfigurations;
    DeviceDisplay.NumberOfPort = RootIf->NumOfPort;
    DeviceDisplay.MaximumDefaultEndpointSize = RootHub->DevDesc->Desc.MaxPacketSize0;


    if(   CheckDeviceExist(RootHub, DeviceAddress) ) continue;
    //find child device
    for (Index = 0; Index < RootIf->NumOfPort; Index++) {

      Child = UsbFindChild (RootIf, Index);
      if(   CheckDeviceExist(Child, DeviceAddress) ) continue;

      if ((Child != NULL) && (Child->DisconnectFail == TRUE)) {


      }

    }

    LsDevice(DeviceDisplay);
    Print(L"\n");
  }

  return Status;
}