#ifndef _USB_VIEW_H_
#define _USB_VIEW_H_

#include <Uefi.h>

#include <Protocol/UsbIo.h>
#include <Protocol/Usb2HostController.h>
#include <Protocol/UsbHostController.h>
#include <Protocol/DevicePath.h>
#include <Protocol/PciIo.h>
#include <Protocol/PciRootBridgeIo.h>

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>

#include <IndustryStandard/Pci22.h>
#include <IndustryStandard/Usb.h>

#include "UsbBus.h"



#define PCI_SERIAL_BUS_CONTROLLER   0x0C  //Bus Class
#define PCI_USB_CONTROLLER          0x03  //Usb Controller subclass
#define PCI_UHCI                    0x00  //Pro-If
#define	PCI_OHCI                    0x10
#define	PCI_EHCI                    0x20
#define PCI_XHCI                    0x30
#define	PCI_UNSPECFIED              0x80
#define	PCI_USB_DEVICE              0xFE

#define PRO_IF_OFFSET               0x09
#define SUB_CLASS_OFFSET            0x0A
#define BASE_CLASS_OFFSET           0x0B

#define IS_CLASS(a, c) ((a) == (c))


typedef struct
{
  CHAR16   *Name;
  CHAR16   *Manufacturer;
  CHAR16   *SerialNumber;   //Xhci
  UINT8    Speed;
  UINT8    Bus;
  UINT8    Address;
  UINT8    NumberOfPort;      //Hub and Xhci
  UINT8    BandWidthAllocated;//xhci
  UINT16    UsbVersion;
  UINT8    DeviceClass;
  UINT8    DeviceSubClass;
  UINT8    DeviceProtocol;
  UINT8    MaximumDefaultEndpointSize;
  UINT8    NumberOfConfigurations;
  UINT16   VendorId;
  UINT16   ProductId;
  UINT16   RevisionNumber;
  BOOLEAN  IsHub;
  BOOLEAN  IsXhci;
}USB_VIEW_DEVICE_DISPLAY;

VOID
EFIAPI
LsDevice(IN USB_VIEW_DEVICE_DISPLAY DeviceDisplay);


typedef struct
{
  UINT8   NumberOfInterfaces;
  UINT8   Attributes;
  UINT16  MaxPowerNeed;
}USB_VIEW_CONFIG_DISPLAY;

VOID
EFIAPI
LsConfig(IN USB_VIEW_CONFIG_DISPLAY ConfigDisplay);

typedef struct
{
  UINT8   InterfaceNumber;
  CHAR16* Name;
  UINT8   AlternateNumber;
  UINT8   Class;
  UINT8   SubClass;
  UINT8   Protocol;
  UINT8   NumberOfEndpoints;
}USB_VIEW_INTERFACE_DISPLAY;

VOID
EFIAPI
LsInterface(IN USB_VIEW_INTERFACE_DISPLAY InterfaceDisplay);

typedef struct
{
  UINT8   Address;
  BOOLEAN Direction;
  UINT8   Attribute;
  UINT8   Type;
  UINT16  MaxPacketSize;
  UINT16  Interval;
}USB_VIEW_ENDPOINT_DISPLAY;

VOID
EFIAPI
LsEndpoint(IN USB_VIEW_ENDPOINT_DISPLAY ViewDisplay);



#endif