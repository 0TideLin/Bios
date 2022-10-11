#ifndef _USB_VIEW_H_
#define _USB_VIEW_H_

#include <Uefi.h>

#include <Protocol/UsbIo.h>
#include <Protocol/Usb2HostController.h>
#include <Protocol/UsbHostController.h>
#include <Protocol/DevicePath.h>
#include <Protocol/PciIo.h>

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>

#include <IndustryStandard/Pci22.h>

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




#endif