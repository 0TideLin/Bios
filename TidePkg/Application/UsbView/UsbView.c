#include "UsbView.h"

USB_VIEW_DISPLAY        UsbViewDisplayArray[DISPLAY_SIZE];


VOID
EFIAPI
InitUsbViewDispaly()
{
  USB_VIEW_DISPLAY        *UsbViewDisplayArrayPt;
  UsbViewDisplayArrayPt = UsbViewDisplayArray;
  for(UINT16 Index = 0; Index < DISPLAY_SIZE; Index++)
  {
    UsbViewDisplayArrayPt->Parent = Index;
    UsbViewDisplayArrayPt->AddressMark = 0;
    UsbViewDisplayArrayPt++;
  }
  return;
}


USB_VIEW_DISPLAY *
EFIAPI
FindUsbViewDisplay(UINT64 AddressMark)
{
  USB_VIEW_DISPLAY        *UsbViewDisplayArrayPt;
  UsbViewDisplayArrayPt = UsbViewDisplayArray;
  for(UINT16 Index = 0; Index < DISPLAY_SIZE; Index++)
  {
    if(UsbViewDisplayArrayPt->AddressMark == AddressMark)
    {
      return NULL;
    }
    if(UsbViewDisplayArrayPt->AddressMark == 0)
    {
      UsbViewDisplayArrayPt->AddressMark = AddressMark;
      return UsbViewDisplayArrayPt;
    }
    UsbViewDisplayArrayPt ++;
  }
  return NULL;
}

VOID
EFIAPI
FindUsbViewChild(UINT16 ParentIndex)
{
  UINT16 Index;
  USB_VIEW_DISPLAY        *UsbViewDisplayArrayPt;
  UsbViewDisplayArrayPt = UsbViewDisplayArray;
  for(Index = 0; Index < DISPLAY_SIZE; Index++)
  {
    if(UsbViewDisplayArrayPt[Index].Parent == Index)continue;
    if(UsbViewDisplayArrayPt[Index].Parent == ParentIndex && UsbViewDisplayArrayPt[Index].AddressMark != 0)
    {
      PrintMessage(&UsbViewDisplayArrayPt[Index]);
      FindUsbViewChild(Index);
    }
    if(UsbViewDisplayArrayPt[Index].AddressMark == 0)break;
  }
  return ;
}

VOID
EFIAPI
SetUsbViewDispaly(USB_VIEW_DISPLAY *UsbViewDisplay, UINT16 ParentIndex)
{
  UsbViewDisplay->Parent = ParentIndex;
  return ;
}
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

/**
  Retrieve the indexed string for the language. It requires two
  steps to get a string, first to get the string's length. Then
  the string itself.

  @param  UsbDev                The usb device.
  @param  Index                 The index the string to retrieve.
  @param  LangId                Language ID.

  @return The created string descriptor or NULL.

**/
EFI_USB_STRING_DESCRIPTOR *
UsbGetOneString (
  IN     USB_DEVICE       *UsbDev,
  IN     UINT8            Index,
  IN     UINT16           LangId
  )
{
  EFI_USB_STRING_DESCRIPTOR Desc;
  EFI_STATUS                Status;
  UINT8                     *Buf;

  //
  // First get two bytes which contains the string length.
  //
  Status = UsbCtrlGetDesc (UsbDev, USB_DESC_TYPE_STRING, Index, LangId, &Desc, 2);

  //
  // Reject if Length even cannot cover itself, or odd because Unicode string byte length should be even.
  //
  if (EFI_ERROR (Status) ||
      (Desc.Length < OFFSET_OF (EFI_USB_STRING_DESCRIPTOR, Length) + sizeof (Desc.Length)) ||
      (Desc.Length % 2 != 0)
    ) {
    return NULL;
  }

  Buf = AllocateZeroPool (Desc.Length);

  if (Buf == NULL) {
    return NULL;
  }

  Status = UsbCtrlGetDesc (
             UsbDev,
             USB_DESC_TYPE_STRING,
             Index,
             LangId,
             Buf,
             Desc.Length
             );

  if (EFI_ERROR (Status)) {
    FreePool (Buf);
    return NULL;
  }

  return (EFI_USB_STRING_DESCRIPTOR *) Buf;
}


VOID
EFIAPI
LsDeviceDesc(USB_VIEW_DISPLAY *UsbViewDisplay, EFI_USB_DEVICE_DESCRIPTOR Desc)
{
  UsbViewDisplay->DeviceDisplay.DeviceClass     = Desc.DeviceClass;
  UsbViewDisplay->DeviceDisplay.DeviceSubClass  = Desc.DeviceSubClass;
  UsbViewDisplay->DeviceDisplay.DeviceProtocol  = Desc.DeviceProtocol;
  UsbViewDisplay->DeviceDisplay.MaximumDefaultEndpointSize = Desc.MaxPacketSize0;
  UsbViewDisplay->DeviceDisplay.VendorId        = Desc.IdVendor;
  UsbViewDisplay->DeviceDisplay.ProductId       = Desc.IdProduct;
  UsbViewDisplay->DeviceDisplay.UsbVersion      = Desc.BcdUSB;
  UsbViewDisplay->DeviceDisplay.NumberOfConfigurations = Desc.NumConfigurations;

  // Print(L"Class:%02x,Subclass:%02x,Protocol:%02x,Maxsize0:%02x,Vendor:%04x,Product:%04x\n",
  //             Desc.DeviceClass,
  //             Desc.DeviceSubClass,
  //             Desc.DeviceProtocol,
  //             Desc.MaxPacketSize0,
  //             Desc.IdVendor,
  //             Desc.IdProduct);

  return ;
}

VOID
EFIAPI
LsConfigDesc(USB_VIEW_DISPLAY *UsbViewDisplayPt,  EFI_USB_CONFIG_DESCRIPTOR Desc)
{
  UsbViewDisplayPt->ConfigDisplay.MaxPowerNeed = Desc.MaxPower;
  UsbViewDisplayPt->ConfigDisplay.Attributes   = Desc.Attributes;
  UsbViewDisplayPt->ConfigDisplay.NumberOfInterfaces = Desc.NumInterfaces;

  // Print(L" MaxPower:%02x, Attribute:%02x\n",
  //                             Desc.MaxPower,
  //                             Desc.Attributes);
}

VOID
EFIAPI
LsEndpointDesc(USB_VIEW_ENDPOINT_DISPLAY *EndpointDisplayPt, USB_ENDPOINT_DESC *Desc)
{
  EndpointDisplayPt->Address      = Desc->Desc.EndpointAddress;
  EndpointDisplayPt->Attribute    = Desc->Desc.Attributes;
  // EndpointDisplayPt->Direction    = Desc->Desc
  EndpointDisplayPt->Interval     = Desc->Desc.Interval;
  EndpointDisplayPt->MaxPacketSize= Desc->Desc.MaxPacketSize;
  EndpointDisplayPt->Type         = Desc->Desc.DescriptorType;

  return ;
}


VOID
EFIAPI
LsInterfaceDesc(USB_VIEW_INTERFACE_DISPLAY *InterfaceDisplayPt, USB_INTERFACE_SETTING  *IfSetting)
{
  UINT16 Index;
  InterfaceDisplayPt->Class              = IfSetting->Desc.InterfaceClass;
  InterfaceDisplayPt->SubClass           = IfSetting->Desc.InterfaceSubClass;
  InterfaceDisplayPt->Protocol           = IfSetting->Desc.InterfaceProtocol;
  InterfaceDisplayPt->AlternateNumber    = IfSetting->Desc.AlternateSetting;
  InterfaceDisplayPt->NumberOfEndpoints  = IfSetting->Desc.NumEndpoints;
  InterfaceDisplayPt->InterfaceNumber    = IfSetting->Desc.InterfaceNumber;

  InterfaceDisplayPt->EndpointDisplay = AllocatePool(sizeof(USB_VIEW_ENDPOINT_DISPLAY) * IfSetting->Desc.NumEndpoints );
  for(Index = 0; Index < IfSetting->Desc.NumEndpoints; Index++)
  {
    LsEndpointDesc(&InterfaceDisplayPt->EndpointDisplay[Index] , IfSetting->Endpoints[Index]);
  }

  return ;
}



VOID
EFIAPI
DealChild(USB_DEVICE *Dev, UINT16 ParentIndex)
{
  UINT16 Index;
  UINT16  UsbViewIndex;
  USB_DEVICE *Child;
  USB_VIEW_DISPLAY *UsbViewDisplayPt;

  UsbViewDisplayPt = FindUsbViewDisplay( (UINT64)Dev );
  if(UsbViewDisplayPt == NULL)
  {
    return;
  }
  UsbViewIndex = UsbViewDisplayPt->Parent;

  SetUsbViewDispaly(UsbViewDisplayPt, ParentIndex);
  LsDeviceDesc(UsbViewDisplayPt, Dev->DevDesc->Desc);

  // Print(L" Configuration:%02x\n",Dev->ActiveConfig->Desc.ConfigurationValue);
  LsConfigDesc(UsbViewDisplayPt ,Dev->ActiveConfig->Desc);

  UsbViewDisplayPt->InterfaceDisplay = AllocatePool( sizeof(USB_VIEW_INTERFACE_DISPLAY) * Dev->NumOfInterface );
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
          DealChild(Child, UsbViewIndex);
        }
      }
    }

    LsInterfaceDesc(&UsbViewDisplayPt->InterfaceDisplay[Index], Dev->Interfaces[Index]->IfSetting);


  }
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

VOID
EFIAPI
PrintMessage( USB_VIEW_DISPLAY *UsbViewDisplayPt)
{
  USB_VIEW_INTERFACE_DISPLAY *InterfaceDisplayPt;
  USB_VIEW_ENDPOINT_DISPLAY  *EndpointDisplayPt;
  Print(L"Class:%02x\nSubClass:%02x\nProtocol:%02x\nMaxEpSize:%02x\nVendorId:%04x\nProductId:%04x\nUsbVersion:%04x\nNumofConfig:%02x\n",
                            UsbViewDisplayPt->DeviceDisplay.DeviceClass,
                            UsbViewDisplayPt->DeviceDisplay.DeviceSubClass,
                            UsbViewDisplayPt->DeviceDisplay.DeviceProtocol,
                            UsbViewDisplayPt->DeviceDisplay.MaximumDefaultEndpointSize,
                            UsbViewDisplayPt->DeviceDisplay.VendorId,
                            UsbViewDisplayPt->DeviceDisplay.ProductId,
                            UsbViewDisplayPt->DeviceDisplay.UsbVersion,
                            UsbViewDisplayPt->DeviceDisplay.NumberOfConfigurations);
  Print(L"  MaxPower:%02x\n  Attributes:%02x\n  NumofInterfaces:%02x\n",
                            UsbViewDisplayPt->ConfigDisplay.MaxPowerNeed,
                            UsbViewDisplayPt->ConfigDisplay.Attributes,
                            UsbViewDisplayPt->ConfigDisplay.NumberOfInterfaces);

  InterfaceDisplayPt = UsbViewDisplayPt->InterfaceDisplay;
  for(UINT16 Index = 0; Index < UsbViewDisplayPt->ConfigDisplay.NumberOfInterfaces; Index++)
  {
    Print(L"    InterfaceNumber:%d\n    Class:%02x\n    SubClass:%02x\n    Protocol:%02x\n    AlternateNumber:%02x\n",
                            InterfaceDisplayPt->InterfaceNumber,
                            InterfaceDisplayPt->Class,
                            InterfaceDisplayPt->SubClass,
                            InterfaceDisplayPt->Protocol,
                            InterfaceDisplayPt->AlternateNumber
                            );
    EndpointDisplayPt = InterfaceDisplayPt->EndpointDisplay;
    for(UINT16 EpIndex = 0; EpIndex < InterfaceDisplayPt->NumberOfEndpoints; EpIndex++)
    {
      Print(L"      Endpoint%d\n", EpIndex);
      Print(L"      MaxPacketSize:%04x\n      Address:%02x\n      Interval:%04x\n      Attribute:%02x\n      Type:%2x\n",
                              EndpointDisplayPt->MaxPacketSize,
                              EndpointDisplayPt->Address,
                              EndpointDisplayPt->Interval,
                              EndpointDisplayPt->Attribute,
                              EndpointDisplayPt->Type);
      EndpointDisplayPt++;
    }
    InterfaceDisplayPt++;
  }

  return ;
}

VOID
EFIAPI
LsMessage()
{
  UINT16 Index;
  USB_VIEW_DISPLAY        *UsbViewDisplayArrayPt;
  UsbViewDisplayArrayPt = UsbViewDisplayArray;
  for(Index = 0; Index < DISPLAY_SIZE; Index++)
  {
    if(UsbViewDisplayArrayPt->Parent == Index &&UsbViewDisplayArrayPt->AddressMark != 0)
    {
      PrintMessage( UsbViewDisplayArrayPt );
      FindUsbViewChild(Index);
    }
    UsbViewDisplayArrayPt++;
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
  UINTN                   NumOfHandles;
  EFI_USB_IO_PROTOCOL     *UsbIo;
  EFI_HANDLE              *HandleBuffer;
  USB_BUS                 *Bus;
  USB_INTERFACE           *UsbIf;
  USB_INTERFACE           *RootIf;
  USB_DEVICE              *RootHub;
  USB_DEVICE              *Child;
  EFI_USB_PORT_STATUS     PortStatus;
  USB_VIEW_DISPLAY        *UsbViewDisplayPt;

  InitUsbViewDispaly();


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
  // Print(L"Num of Handles:%d\n", NumOfHandles);
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

    UsbViewDisplayPt = FindUsbViewDisplay( (UINT64)RootHub);
    //
    //Have been found, or more than DisplaySize
    //
    if(UsbViewDisplayPt == NULL)
    {
      continue;
    }
    UsbGetDevDesc(RootHub);
    LsDeviceDesc(UsbViewDisplayPt, RootHub->DevDesc->Desc);

    //Need to get the Desc
    // LsConfigDesc(UsbViewDisplayPt, RootHub->ActiveConfig->Desc);

    // UsbViewDisplayPt->InterfaceDisplay = AllocatePool( sizeof(USB_VIEW_INTERFACE_DISPLAY) * RootHub->NumOfInterface );
    // for(UINT8 InterfaceIndex = 0; InterfaceIndex<RootHub->NumOfInterface;InterfaceIndex++ )
    // {
    //   LsInterfaceDesc(&UsbViewDisplayPt->InterfaceDisplay[Index], RootHub->Interfaces[Index]->IfSetting);
    // }


    //find child device
    for (UINT8 ChildIndex = 0; ChildIndex < RootIf->NumOfPort; ChildIndex++) {

      Child = UsbFindChild (RootIf, ChildIndex);
      if(Child != NULL && Child->DisconnectFail == FALSE)
      {

        RootIf->HubApi->GetPortStatus(RootIf, ChildIndex, &PortStatus);
        // Print(L"Tier:%d\n", RootHub->Tier);
        // Print(L"Port:%d:%04x, %04x\n",Index, PortStatus.PortStatus, PortStatus.PortChangeStatus);
        DealChild(Child, UsbViewDisplayPt->Parent);

      }

    }

  }
  LsMessage();
  return Status;
}