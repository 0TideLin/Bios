#include "UsbView.h"


/**
  Execute a control transfer to the device.

  @param  UsbBus           The USB bus driver.
  @param  DevAddr          The device address.
  @param  DevSpeed         The device speed.
  @param  MaxPacket        Maximum packet size of endpoint 0.
  @param  Request          The control transfer request.
  @param  Direction        The direction of data stage.
  @param  Data             The buffer holding data.
  @param  DataLength       The length of the data.
  @param  TimeOut          Timeout (in ms) to wait until timeout.
  @param  Translator       The transaction translator for low/full speed device.
  @param  UsbResult        The result of transfer.

  @retval EFI_SUCCESS      The control transfer finished without error.
  @retval Others           The control transfer failed, reason returned in UsbReslt.

**/
EFI_STATUS
UsbHcControlTransfer (
  IN  USB_BUS                             *UsbBus,
  IN  UINT8                               DevAddr,
  IN  UINT8                               DevSpeed,
  IN  UINTN                               MaxPacket,
  IN  EFI_USB_DEVICE_REQUEST              *Request,
  IN  EFI_USB_DATA_DIRECTION              Direction,
  IN  OUT VOID                            *Data,
  IN  OUT UINTN                           *DataLength,
  IN  UINTN                               TimeOut,
  IN  EFI_USB2_HC_TRANSACTION_TRANSLATOR  *Translator,
  OUT UINT32                              *UsbResult
  )
{
  EFI_STATUS              Status;
  BOOLEAN                 IsSlowDevice;

  if (UsbBus->Usb2Hc != NULL) {
    Status = UsbBus->Usb2Hc->ControlTransfer (
                               UsbBus->Usb2Hc,
                               DevAddr,
                               DevSpeed,
                               MaxPacket,
                               Request,
                               Direction,
                               Data,
                               DataLength,
                               TimeOut,
                               Translator,
                               UsbResult
                               );

  } else {
    IsSlowDevice = (BOOLEAN)(EFI_USB_SPEED_LOW == DevSpeed);
    Status = UsbBus->UsbHc->ControlTransfer (
                              UsbBus->UsbHc,
                              DevAddr,
                              IsSlowDevice,
                              (UINT8) MaxPacket,
                              Request,
                              Direction,
                              Data,
                              DataLength,
                              TimeOut,
                              UsbResult
                              );
  }

  return Status;
}


/**
  USB standard control transfer support routine. This
  function is used by USB device. It is possible that
  the device's interfaces are still waiting to be
  enumerated.

  @param  UsbDev                The usb device.
  @param  Direction             The direction of data transfer.
  @param  Type                  Standard / class specific / vendor specific.
  @param  Target                The receiving target.
  @param  Request               Which request.
  @param  Value                 The wValue parameter of the request.
  @param  Index                 The wIndex parameter of the request.
  @param  Buf                   The buffer to receive data into / transmit from.
  @param  Length                The length of the buffer.

  @retval EFI_SUCCESS           The control request is executed.
  @retval EFI_DEVICE_ERROR      Failed to execute the control transfer.

**/
EFI_STATUS
UsbCtrlRequest (
  IN USB_DEVICE             *UsbDev,
  IN EFI_USB_DATA_DIRECTION Direction,
  IN UINTN                  Type,
  IN UINTN                  Target,
  IN UINTN                  Request,
  IN UINT16                 Value,
  IN UINT16                 Index,
  IN OUT VOID               *Buf,
  IN UINTN                  Length
  )
{
  EFI_USB_DEVICE_REQUEST  DevReq;
  EFI_STATUS              Status;
  UINT32                  Result;
  UINTN                   Len;

  ASSERT ((UsbDev != NULL) && (UsbDev->Bus != NULL));

  DevReq.RequestType  = USB_REQUEST_TYPE (Direction, Type, Target);
  DevReq.Request      = (UINT8) Request;
  DevReq.Value        = Value;
  DevReq.Index        = Index;
  DevReq.Length       = (UINT16) Length;

  Len                 = Length;
  Status = UsbHcControlTransfer (
             UsbDev->Bus,
             UsbDev->Address,
             UsbDev->Speed,
             UsbDev->MaxPacket0,
             &DevReq,
             Direction,
             Buf,
             &Len,
             USB_GENERAL_DEVICE_REQUEST_TIMEOUT,
             &UsbDev->Translator,
             &Result
             );

  return Status;
}



/**
  Get the standard descriptors.

  @param  UsbDev                The USB device to read descriptor from.
  @param  DescType              The type of descriptor to read.
  @param  DescIndex             The index of descriptor to read.
  @param  LangId                Language ID, only used to get string, otherwise set
                                it to 0.
  @param  Buf                   The buffer to hold the descriptor read.
  @param  Length                The length of the buffer.

  @retval EFI_SUCCESS           The descriptor is read OK.
  @retval Others                Failed to retrieve the descriptor.

**/
EFI_STATUS
UsbCtrlGetDesc (
  IN  USB_DEVICE          *UsbDev,
  IN  UINTN               DescType,
  IN  UINTN               DescIndex,
  IN  UINT16              LangId,
  OUT VOID                *Buf,
  IN  UINTN               Length
  )
{
  EFI_STATUS              Status;

  Status = UsbCtrlRequest (
             UsbDev,
             EfiUsbDataIn,
             USB_REQ_TYPE_STANDARD,
             USB_TARGET_DEVICE,
             USB_REQ_GET_DESCRIPTOR,
             (UINT16) ((DescType << 8) | DescIndex),
             LangId,
             Buf,
             Length
             );

  return Status;
}


/**
  Get the device descriptor for the device.

  @param  UsbDev                The Usb device to retrieve descriptor from.

  @retval EFI_SUCCESS           The device descriptor is returned.
  @retval EFI_OUT_OF_RESOURCES  Failed to allocate memory.

**/
EFI_STATUS
UsbGetDevDesc (
  IN USB_DEVICE           *UsbDev
  )
{
  USB_DEVICE_DESC         *DevDesc;
  EFI_STATUS              Status;

  DevDesc = AllocateZeroPool (sizeof (USB_DEVICE_DESC));

  if (DevDesc == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  Status  = UsbCtrlGetDesc (
              UsbDev,
              USB_DESC_TYPE_DEVICE,
              0,
              0,
              DevDesc,
              sizeof (EFI_USB_DEVICE_DESCRIPTOR)
              );

  if (EFI_ERROR (Status)) {
    gBS->FreePool (DevDesc);
  } else {
    UsbDev->DevDesc = DevDesc;
  }

  return Status;
}

VOID
EFIAPI
LsDeviceDesc( EFI_USB_DEVICE_DESCRIPTOR Desc)
{
  Print(L"Class:%02x,Subclass:%02x,Protocol:%02x,Maxsize0:%02x,Vendor:%04x,Product:%04x\n",
              Desc.DeviceClass,
              Desc.DeviceSubClass,
              Desc.DeviceProtocol,
              Desc.MaxPacketSize0,
              Desc.IdVendor,
              Desc.IdProduct);

  return ;
}

VOID
EFIAPI
LsConfigDesc(EFI_USB_CONFIG_DESCRIPTOR Desc)
{
  Print(L" MaxPower:%02x, Attribute:%02x\n",
                              Desc.MaxPower,
                              Desc.Attributes);
}

VOID
EFIAPI
LsInterfaceDesc(EFI_USB_INTERFACE_DESCRIPTOR Desc)
{
  Print(L"  %02x, Class:%02x, SubClass:%02x, Protocol:%02x, IfNum:%02x\n",
                      Desc.Interface,
                      Desc.InterfaceClass,
                      Desc.InterfaceSubClass,
                      Desc.InterfaceProtocol,
                      Desc.InterfaceNumber);
}

VOID
EFIAPI
LsEndpointDesc(USB_INTERFACE_SETTING *Setting)
{
  UINT16 Index;
  for(Index = 0; Index < Setting->Desc.NumEndpoints; Index++)
  {
    Print(L"   Endpoint:%d\n", Index);
    Print(L"   Address:%02x, Interval:%02x, MaxPacketSize:%04x\n",
                  Setting->Endpoints[Index]->Desc.EndpointAddress,
                  Setting->Endpoints[Index]->Desc.Interval,
                  Setting->Endpoints[Index]->Desc.MaxPacketSize);
  }
}

VOID
EFIAPI
DealChild(USB_DEVICE *Dev)
{
  UINT16 Index;
  USB_DEVICE *Child;
  for(Index = 0; Index < Dev->NumOfInterface; Index++)
  {
    //
    //It's hub, find child device again
    //
    if(Dev->Interfaces[Index]->IsHub)
    {
      for (UINT8 ChildIndex = 0; ChildIndex < Dev->Interfaces[Index]->NumOfPort; ChildIndex++)
      {
        Child = UsbFindChild(Dev->Interfaces[Index], ChildIndex);
        if(Child != NULL && Child->DisconnectFail==FALSE)
        {
          DealChild(Child);
        }
      }
    }

    Print(L"Tier:%02x\n",Dev->Tier);
    LsDeviceDesc(Dev->DevDesc->Desc);

    Print(L" Configuration:%02x\n",Dev->ActiveConfig->Desc.ConfigurationValue);
    LsConfigDesc(Dev->ActiveConfig->Desc);

    Print(L"  Interface:%d\n", Index );
    LsInterfaceDesc(Dev->Interfaces[Index]->IfSetting->Desc );
    LsEndpointDesc(Dev->Interfaces[Index]->IfSetting);

  }
  return ;
}


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
  // USB_DEVICE              *UsbDev;
  USB_DEVICE              *Child;
  UINT64                  *DeviceAddress;
  USB_VIEW_DEVICE_DISPLAY       DeviceDisplay;
  EFI_USB_PORT_STATUS     PortStatus;
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

    Print(L"Roothub%d\n", Index);
    //find child device
    for (UINT8 ChildIndex = 0; ChildIndex < RootIf->NumOfPort; ChildIndex++) {

      Child = UsbFindChild (RootIf, ChildIndex);
      if(Child != NULL && Child->DisconnectFail == FALSE)
      {

        RootIf->HubApi->GetPortStatus(RootIf, ChildIndex, &PortStatus);
        Print(L"Tier:%d\n", RootHub->Tier);
        Print(L"Port:%d:%04x, %04x\n",Index, PortStatus.PortStatus, PortStatus.PortChangeStatus);
        DealChild(Child);
        // Print(L"Index%d: Speed %x, Tier %d \n",ChildIndex, Child->Speed, Child->Tier);
        // Print(L"class:%x, %x\n", Child->DevDesc->Desc.DeviceClass,Child->DevDesc->Desc.IdVendor);
        // for(UINT8 InterfaceIndex = 0; InterfaceIndex < Child->NumOfInterface; InterfaceIndex++)
        // {
        //   Print(L"IsHub:%x\n", Child->Interfaces[InterfaceIndex]->IsHub);
        //   if(Child->Interfaces[InterfaceIndex]->IsHub && Child->Interfaces[InterfaceIndex]->IsManaged)
        //   {
        //     Print(L"HubPort:%x\n",Child->Interfaces[InterfaceIndex]->NumOfPort);
        //     for(UINT16 HubChildIndex = 0; HubChildIndex < Child->Interfaces[InterfaceIndex]->NumOfPort; HubChildIndex++)
        //     {
        //       HubChild = UsbFindChild(Child->Interfaces[InterfaceIndex], HubChildIndex);
        //       if(HubChild != NULL && HubChild->DisconnectFail==FALSE)
        //       {
        //         Print(L"HubChild:%x, %x\n", HubChild->DevDesc->Desc.DeviceClass, HubChild->DevDesc->Desc.IdVendor);
        //       }
        //     }


        //   }

        // }
        // Print(L"\n");
      }

    }
    continue;
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


    LsDevice(DeviceDisplay);
    Print(L"\n");
  }

  return Status;
}