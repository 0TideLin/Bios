#ifndef _USB_IDS_H_
#define _USB_IDS_H_

#define USBIDS_VENDOR_DEVICE_ARRAY_MAX 18636

typedef struct
{
   UINT16 VendorId;
   CHAR16 *VendorString;
   UINT16 DeviceId;
   CHAR16 *DeviceString;     
}USBIDS_VENDOR_DEVICE;

USBIDS_VENDOR_DEVICE mUsbidsVendorDevice[]=
{
{
0x0001,
L"Fry's Electronics",
0x7778,
L"Counterfeit flash drive [Kingston]"
},
{
0x0002,
L"Ingram",
0x0,
L"0"
},
{
0x0003,
L"Club Mac",
0x0,
L"0"
},
{
0x0004,
L"Nebraska Furniture Mart",
0x0,
L"0"
},
{
0x0011,
L"Unknown",
0x7788,
L"counterfeit flash drive"
},
{
0x0053,
L"Planex",
0x5301,
L"GW-US54ZGL 802.11bg"
},
{
0x0078,
L"Microntek",
0x0006,
L"Joystick"
},
{
0x0079,
L"DragonRise Inc.",
0x0006,
L"PC TWIN SHOCK Gamepad"
},
{
0x0079,
L"DragonRise Inc.",
0x0011,
L"Gamepad"
},
{
0x0079,
L"DragonRise Inc.",
0x1800,
L"Mayflash Wii U Pro Game Controller Adapter [DirectInput]"
},
{
0x0079,
L"DragonRise Inc.",
0x181b,
L"Venom Arcade Joystick"
},
{
0x0079,
L"DragonRise Inc.",
0x1843,
L"Mayflash GameCube Controller Adapter"
},
{
0x0079,
L"DragonRise Inc.",
0x1844,
L"Mayflash GameCube Controller"
},
{
0x0080,
L"Assmann Electronic GmbH",
0xa001,
L"Digitus DA-71114 SATA"
},
{
0x0085,
L"Boeye Technology Co., Ltd.",
0x0600,
L"eBook Reader"
},
{
0x0102,
L"miniSTREAK",
0x0,
L"0"
},
{
0x0105,
L"Trust International B.V.",
0x145f,
L"NW-3100 802.11b/g 54Mbps Wireless Network Adapter [zd1211]"
},
{
0x0127,
L"IBP",
0x0002,
L"HDM Interface"
},
{
0x0127,
L"IBP",
0x0127,
L"ibp"
},
{
0x0145,
L"Unknown",
0x0112,
L"Card Reader"
},
{
0x017c,
L"MLK",
0x145f,
L"Trust Deskset"
},
{
0x0200,
L"TP-Link",
0x0201,
L"MA180 UMTS Modem"
},
{
0x0204,
L"Chipsbank Microelectronics Co., Ltd",
0x6025,
L"CBM2080 / CBM2090 Flash drive controller"
},
{
0x0204,
L"Chipsbank Microelectronics Co., Ltd",
0x6026,
L"CBM1180 Flash drive controller"
},
{
0x0218,
L"Hangzhou Worlde",
0x0301,
L"MIDI Port"
},
{
0x02ad,
L"HUMAX Co., Ltd.",
0x138c,
L"PVR Mass Storage"
},
{
0x0303,
L"Mini Automation Controller",
0x0,
L"0"
},
{
0x0324,
L"OCZ Technology Inc",
0xbc06,
L"OCZ ATV USB 2.0 Flash Drive"
},
{
0x0324,
L"OCZ Technology Inc",
0xbc08,
L"OCZ Rally2/ATV USB 2.0 Flash Drive"
},
{
0x0325,
L"OCZ Technology Inc",
0xac02,
L"ATV Turbo / Rally2 Dual Channel USB 2.0 Flash Drive"
},
{
0x0386,
L"LTS",
0x0001,
L"PSX for USB Converter"
},
{
0x03d9,
L"Shenzhen Sinote Tech-Electron Co., Ltd",
0x0499,
L"SE340D PC Remote Control"
},
{
0x03da,
L"Bernd Walter Computer Technology",
0x0002,
L"HD44780 LCD interface"
},
{
0x03e7,
L"Intel",
0x2150,
L"Myriad VPU [Movidius Neural Compute Stick]"
},
{
0x03e7,
L"Intel",
0x2485,
L"Movidius MyriadX"
},
{
0x03e7,
L"Intel",
0xf63b,
L"Myriad VPU [Movidius Neural Compute Stick]"
},
{
0x03e8,
L"EndPoints, Inc.",
0x0004,
L"SE401 Webcam"
},
{
0x03e8,
L"EndPoints, Inc.",
0x0008,
L"101 Ethernet [klsi]"
},
{
0x03e8,
L"EndPoints, Inc.",
0x0015,
L"ATAPI Enclosure"
},
{
0x03e8,
L"EndPoints, Inc.",
0x2123,
L"SiPix StyleCam Deluxe"
},
{
0x03e8,
L"EndPoints, Inc.",
0x8004,
L"Aox 99001"
},
{
0x03e9,
L"Thesys Microelectronics",
0x0,
L"0"
},
{
0x03ea,
L"Data Broadcasting Corp.",
0x0,
L"0"
},
{
0x03eb,
L"Atmel Corp.",
0x0902,
L"4-Port Hub"
},
{
0x03eb,
L"Atmel Corp.",
0x2002,
L"Mass Storage Device"
},
{
0x03eb,
L"Atmel Corp.",
0x2015,
L"at90usbkey sample firmware (HID keyboard)"
},
{
0x03eb,
L"Atmel Corp.",
0x2018,
L"at90usbkey sample firmware (CDC ACM)"
},
{
0x03eb,
L"Atmel Corp.",
0x2019,
L"stk525 sample firmware (microphone)"
},
{
0x03eb,
L"Atmel Corp.",
0x201c,
L"at90usbkey sample firmware (HID mouse)"
},
{
0x03eb,
L"Atmel Corp.",
0x201d,
L"at90usbkey sample firmware (HID generic)"
},
{
0x03eb,
L"Atmel Corp.",
0x2022,
L"at90usbkey sample firmware (composite device)"
},
{
0x03eb,
L"Atmel Corp.",
0x2040,
L"LUFA Test PID"
},
{
0x03eb,
L"Atmel Corp.",
0x2041,
L"LUFA Mouse Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2042,
L"LUFA Keyboard Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2043,
L"LUFA Joystick Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2044,
L"LUFA CDC Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2045,
L"LUFA Mass Storage Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2046,
L"LUFA Audio Output Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2047,
L"LUFA Audio Input Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2048,
L"LUFA MIDI Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2049,
L"Stripe Snoop Magnetic Stripe Reader"
},
{
0x03eb,
L"Atmel Corp.",
0x204a,
L"LUFA CDC Class Bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x204b,
L"LUFA USB to Serial Adapter Project"
},
{
0x03eb,
L"Atmel Corp.",
0x204c,
L"LUFA RNDIS Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x204d,
L"LUFA Combined Mouse and Keyboard Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x204e,
L"LUFA Dual CDC Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x204f,
L"LUFA Generic HID Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2060,
L"Benito Programmer Project"
},
{
0x03eb,
L"Atmel Corp.",
0x2061,
L"LUFA Combined Mass Storage and Keyboard Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2062,
L"LUFA Combined CDC and Mouse Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2063,
L"LUFA Datalogger Device"
},
{
0x03eb,
L"Atmel Corp.",
0x2064,
L"Interfaceless Control-Only LUFA Devices"
},
{
0x03eb,
L"Atmel Corp.",
0x2065,
L"LUFA Test and Measurement Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x2066,
L"LUFA Multiple Report HID Demo"
},
{
0x03eb,
L"Atmel Corp.",
0x2068,
L"LUFA Virtual Serial/Mass Storage Demo"
},
{
0x03eb,
L"Atmel Corp.",
0x2069,
L"LUFA Webserver Project"
},
{
0x03eb,
L"Atmel Corp.",
0x2103,
L"JTAG ICE mkII"
},
{
0x03eb,
L"Atmel Corp.",
0x2104,
L"AVR ISP mkII"
},
{
0x03eb,
L"Atmel Corp.",
0x2105,
L"AVRONE!"
},
{
0x03eb,
L"Atmel Corp.",
0x2106,
L"STK600 development board"
},
{
0x03eb,
L"Atmel Corp.",
0x2107,
L"AVR Dragon"
},
{
0x03eb,
L"Atmel Corp.",
0x2109,
L"STK541 ZigBee Development Board"
},
{
0x03eb,
L"Atmel Corp.",
0x210a,
L"AT86RF230 [RZUSBSTICK] transceiver"
},
{
0x03eb,
L"Atmel Corp.",
0x210d,
L"XPLAIN evaluation kit (CDC ACM)"
},
{
0x03eb,
L"Atmel Corp.",
0x2110,
L"AVR JTAGICE3 Debugger and Programmer"
},
{
0x03eb,
L"Atmel Corp.",
0x2111,
L"Xplained Pro board debugger and programmer"
},
{
0x03eb,
L"Atmel Corp.",
0x2122,
L"XMEGA-A1 Explained evaluation kit"
},
{
0x03eb,
L"Atmel Corp.",
0x2140,
L"AVR JTAGICE3 (v3.x) Debugger and Programmer"
},
{
0x03eb,
L"Atmel Corp.",
0x2141,
L"ICE debugger"
},
{
0x03eb,
L"Atmel Corp.",
0x2145,
L"ATMEGA328P-XMINI (CDC ACM)"
},
{
0x03eb,
L"Atmel Corp.",
0x2310,
L"EVK11xx evaluation board"
},
{
0x03eb,
L"Atmel Corp.",
0x2404,
L"The Micro"
},
{
0x03eb,
L"Atmel Corp.",
0x2fe4,
L"ATxmega32A4U DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2fe6,
L"Cactus V6 (DFU)"
},
{
0x03eb,
L"Atmel Corp.",
0x2fea,
L"Cactus RF60 (DFU)"
},
{
0x03eb,
L"Atmel Corp.",
0x2fee,
L"atmega8u2 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2fef,
L"atmega16u2 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff0,
L"atmega32u2 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff1,
L"at32uc3a3 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff3,
L"atmega16u4 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff4,
L"atmega32u4 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff6,
L"at32uc3b0/1 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff7,
L"at90usb82 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff8,
L"at32uc3a0/1 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ff9,
L"at90usb646/647 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ffa,
L"at90usb162 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ffb,
L"at90usb AVR DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2ffd,
L"at89c5130/c5131 DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x2fff,
L"at89c5132/c51snd1c DFU bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x3301,
L"at43301 4-Port Hub"
},
{
0x03eb,
L"Atmel Corp.",
0x3312,
L"4-Port Hub"
},
{
0x03eb,
L"Atmel Corp.",
0x4102,
L"AirVast W-Buddie WN210"
},
{
0x03eb,
L"Atmel Corp.",
0x5601,
L"at76c510 Prism-II 802.11b Access Point"
},
{
0x03eb,
L"Atmel Corp.",
0x5603,
L"Cisco 7920 WiFi IP Phone"
},
{
0x03eb,
L"Atmel Corp.",
0x6119,
L"AT91SAM CDC Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x6124,
L"at91sam SAMBA bootloader"
},
{
0x03eb,
L"Atmel Corp.",
0x6127,
L"AT91SAM HID Keyboard Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x6129,
L"AT91SAM Mass Storage Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x6200,
L"AT91SAM HID Mouse Demo Application"
},
{
0x03eb,
L"Atmel Corp.",
0x7603,
L"D-Link DWL-120 802.11b Wireless Adapter [Atmel at76c503a]"
},
{
0x03eb,
L"Atmel Corp.",
0x7604,
L"at76c503a 802.11b Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7605,
L"at76c503a 802.11b Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7606,
L"at76c505 802.11b Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7611,
L"at76c510 rfmd2948 802.11b Access Point"
},
{
0x03eb,
L"Atmel Corp.",
0x7613,
L"WL-1130 USB"
},
{
0x03eb,
L"Atmel Corp.",
0x7614,
L"AT76c505a Wireless Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7615,
L"AT76C505AMX Wireless Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7617,
L"AT76C505AS Wireless Adapter"
},
{
0x03eb,
L"Atmel Corp.",
0x7800,
L"Mini Album"
},
{
0x03eb,
L"Atmel Corp.",
0x800c,
L"Airspy HF+"
},
{
0x03eb,
L"Atmel Corp.",
0xff01,
L"WootingOne"
},
{
0x03eb,
L"Atmel Corp.",
0xff02,
L"WootingTwo"
},
{
0x03eb,
L"Atmel Corp.",
0xff07,
L"Tux Droid fish dongle"
},
{
0x03ec,
L"Iwatsu America, Inc.",
0x0,
L"0"
},
{
0x03ed,
L"Mitel Corp.",
0x0,
L"0"
},
{
0x03ee,
L"Mitsumi",
0x0000,
L"CD-R/RW Drive"
},
{
0x03ee,
L"Mitsumi",
0x2501,
L"eHome Infrared Receiver"
},
{
0x03ee,
L"Mitsumi",
0x2502,
L"eHome Infrared Receiver"
},
{
0x03ee,
L"Mitsumi",
0x5609,
L"Japanese Keyboard"
},
{
0x03ee,
L"Mitsumi",
0x641f,
L"WIF-0402C Bluetooth Adapter"
},
{
0x03ee,
L"Mitsumi",
0x6438,
L"Bluetooth Device"
},
{
0x03ee,
L"Mitsumi",
0x6440,
L"WML-C52APR Bluetooth Adapter"
},
{
0x03ee,
L"Mitsumi",
0x6901,
L"SmartDisk FDD"
},
{
0x03ee,
L"Mitsumi",
0x6902,
L"Floppy Disk Drive"
},
{
0x03ee,
L"Mitsumi",
0x7500,
L"CD-R/RW"
},
{
0x03ee,
L"Mitsumi",
0xffff,
L"Dongle with BlueCore in DFU mode"
},
{
0x03f0,
L"HP, Inc",
0x0004,
L"DeskJet 895c"
},
{
0x03f0,
L"HP, Inc",
0x0011,
L"OfficeJet G55"
},
{
0x03f0,
L"HP, Inc",
0x0012,
L"DeskJet 1125C Printer Port"
},
{
0x03f0,
L"HP, Inc",
0x0024,
L"KU-0316 Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x002a,
L"LaserJet P1102"
},
{
0x03f0,
L"HP, Inc",
0x0053,
L"DeskJet 2620 All-in-One Printer"
},
{
0x03f0,
L"HP, Inc",
0x0101,
L"ScanJet 4100c"
},
{
0x03f0,
L"HP, Inc",
0x0102,
L"PhotoSmart S20"
},
{
0x03f0,
L"HP, Inc",
0x0104,
L"DeskJet 880c/970c"
},
{
0x03f0,
L"HP, Inc",
0x0105,
L"ScanJet 4200c"
},
{
0x03f0,
L"HP, Inc",
0x0107,
L"CD-Writer Plus"
},
{
0x03f0,
L"HP, Inc",
0x010c,
L"Multimedia Keyboard Hub"
},
{
0x03f0,
L"HP, Inc",
0x0111,
L"G55xi Printer/Scanner/Copier"
},
{
0x03f0,
L"HP, Inc",
0x0117,
L"LaserJet 3200"
},
{
0x03f0,
L"HP, Inc",
0x011c,
L"hn210w 802.11b Adapter"
},
{
0x03f0,
L"HP, Inc",
0x011d,
L"Bluetooth 1.2 Interface [Broadcom BCM2035]"
},
{
0x03f0,
L"HP, Inc",
0x0121,
L"HP 39g+ [F2224A], 39gs [F2223A], 40gs [F2225A], 48gII [F2226A], 49g+ [F2228A], 50g [F2229A, NW240AA]"
},
{
0x03f0,
L"HP, Inc",
0x0122,
L"HID Internet Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0125,
L"DAT72 Tape"
},
{
0x03f0,
L"HP, Inc",
0x0139,
L"Barcode Scanner 4430"
},
{
0x03f0,
L"HP, Inc",
0x0201,
L"ScanJet 6200c"
},
{
0x03f0,
L"HP, Inc",
0x0202,
L"PhotoSmart S20"
},
{
0x03f0,
L"HP, Inc",
0x0204,
L"DeskJet 815c"
},
{
0x03f0,
L"HP, Inc",
0x0205,
L"ScanJet 3300c"
},
{
0x03f0,
L"HP, Inc",
0x0207,
L"CD-Writer Plus 8200e"
},
{
0x03f0,
L"HP, Inc",
0x020c,
L"Multimedia Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0211,
L"OfficeJet G85"
},
{
0x03f0,
L"HP, Inc",
0x0212,
L"DeskJet 1220C"
},
{
0x03f0,
L"HP, Inc",
0x0217,
L"LaserJet 2200"
},
{
0x03f0,
L"HP, Inc",
0x0218,
L"APOLLO P2500/2600"
},
{
0x03f0,
L"HP, Inc",
0x0221,
L"StreamSmart 400 [F2235AA]"
},
{
0x03f0,
L"HP, Inc",
0x0223,
L"Digital Drive Flash Reader"
},
{
0x03f0,
L"HP, Inc",
0x022a,
L"Laserjet CP1525nw"
},
{
0x03f0,
L"HP, Inc",
0x0241,
L"Link-5 micro dongle"
},
{
0x03f0,
L"HP, Inc",
0x0304,
L"DeskJet 810c/812c"
},
{
0x03f0,
L"HP, Inc",
0x0305,
L"ScanJet 4300c"
},
{
0x03f0,
L"HP, Inc",
0x0307,
L"CD-Writer+ CD-4e"
},
{
0x03f0,
L"HP, Inc",
0x0311,
L"OfficeJet G85xi"
},
{
0x03f0,
L"HP, Inc",
0x0312,
L"Color Inkjet CP1700"
},
{
0x03f0,
L"HP, Inc",
0x0314,
L"designjet 30/130 series"
},
{
0x03f0,
L"HP, Inc",
0x0317,
L"LaserJet 1200"
},
{
0x03f0,
L"HP, Inc",
0x0324,
L"SK-2885 keyboard"
},
{
0x03f0,
L"HP, Inc",
0x034a,
L"Elite Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0401,
L"ScanJet 5200c"
},
{
0x03f0,
L"HP, Inc",
0x0404,
L"DeskJet 830c/832c"
},
{
0x03f0,
L"HP, Inc",
0x0405,
L"ScanJet 3400cse"
},
{
0x03f0,
L"HP, Inc",
0x0411,
L"OfficeJet G95"
},
{
0x03f0,
L"HP, Inc",
0x0412,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x0417,
L"LaserJet 1200 series"
},
{
0x03f0,
L"HP, Inc",
0x0423,
L"HS-COMBO Cardreader"
},
{
0x03f0,
L"HP, Inc",
0x042a,
L"LaserJet M1132 MFP"
},
{
0x03f0,
L"HP, Inc",
0x0441,
L"Prime [NW280AA, G8X92AA]"
},
{
0x03f0,
L"HP, Inc",
0x0504,
L"DeskJet 885c"
},
{
0x03f0,
L"HP, Inc",
0x0505,
L"ScanJet 2100c"
},
{
0x03f0,
L"HP, Inc",
0x0507,
L"DVD+RW"
},
{
0x03f0,
L"HP, Inc",
0x050c,
L"5219 Wireless Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0511,
L"OfficeJet K60"
},
{
0x03f0,
L"HP, Inc",
0x0512,
L"DeckJet 450"
},
{
0x03f0,
L"HP, Inc",
0x0517,
L"LaserJet 1000"
},
{
0x03f0,
L"HP, Inc",
0x051d,
L"Bluetooth Interface"
},
{
0x03f0,
L"HP, Inc",
0x052a,
L"LaserJet M1212nf MFP"
},
{
0x03f0,
L"HP, Inc",
0x0601,
L"ScanJet 6300c"
},
{
0x03f0,
L"HP, Inc",
0x0604,
L"DeskJet 840c"
},
{
0x03f0,
L"HP, Inc",
0x0605,
L"ScanJet 2200c"
},
{
0x03f0,
L"HP, Inc",
0x0610,
L"Z24i Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x0611,
L"OfficeJet K60xi"
},
{
0x03f0,
L"HP, Inc",
0x0612,
L"business inkjet 3000"
},
{
0x03f0,
L"HP, Inc",
0x0624,
L"Bluetooth Dongle"
},
{
0x03f0,
L"HP, Inc",
0x0641,
L"X1200 Optical Mouse"
},
{
0x03f0,
L"HP, Inc",
0x0701,
L"ScanJet 5300c/5370c"
},
{
0x03f0,
L"HP, Inc",
0x0704,
L"DeskJet 825c"
},
{
0x03f0,
L"HP, Inc",
0x0705,
L"ScanJet 4400c"
},
{
0x03f0,
L"HP, Inc",
0x070c,
L"Personal Media Drive"
},
{
0x03f0,
L"HP, Inc",
0x0711,
L"OfficeJet K80"
},
{
0x03f0,
L"HP, Inc",
0x0712,
L"DeskJet 1180c"
},
{
0x03f0,
L"HP, Inc",
0x0714,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x0741,
L"Prime Wireless Kit [FOK65AA]"
},
{
0x03f0,
L"HP, Inc",
0x0801,
L"ScanJet 7400c"
},
{
0x03f0,
L"HP, Inc",
0x0804,
L"DeskJet 816c"
},
{
0x03f0,
L"HP, Inc",
0x0805,
L"HP4470C"
},
{
0x03f0,
L"HP, Inc",
0x0811,
L"OfficeJet K80xi"
},
{
0x03f0,
L"HP, Inc",
0x0817,
L"LaserJet 3300"
},
{
0x03f0,
L"HP, Inc",
0x0901,
L"ScanJet 2300c"
},
{
0x03f0,
L"HP, Inc",
0x0904,
L"DeskJet 845c"
},
{
0x03f0,
L"HP, Inc",
0x0912,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x0917,
L"LaserJet 3330"
},
{
0x03f0,
L"HP, Inc",
0x0924,
L"Modular Smartcard Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0941,
L"X500 Optical Mouse"
},
{
0x03f0,
L"HP, Inc",
0x094a,
L"Optical Mouse [672662-001]"
},
{
0x03f0,
L"HP, Inc",
0x0a01,
L"ScanJet 2400c"
},
{
0x03f0,
L"HP, Inc",
0x0a17,
L"color LaserJet 3700"
},
{
0x03f0,
L"HP, Inc",
0x0b01,
L"ScanJet 82x0C"
},
{
0x03f0,
L"HP, Inc",
0x0b0c,
L"Wireless Keyboard and Optical Mouse receiver"
},
{
0x03f0,
L"HP, Inc",
0x0b17,
L"LaserJet 2300d"
},
{
0x03f0,
L"HP, Inc",
0x0c17,
L"LaserJet 1010"
},
{
0x03f0,
L"HP, Inc",
0x0c24,
L"Bluetooth Dongle"
},
{
0x03f0,
L"HP, Inc",
0x0d12,
L"OfficeJet 9100 series"
},
{
0x03f0,
L"HP, Inc",
0x0d17,
L"LaserJet 1012"
},
{
0x03f0,
L"HP, Inc",
0x0d4a,
L"SK-2025 Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x0e17,
L"LaserJet 1015"
},
{
0x03f0,
L"HP, Inc",
0x0f0c,
L"Wireless Keyboard and Optical Mouse receiver"
},
{
0x03f0,
L"HP, Inc",
0x0f11,
L"OfficeJet V40"
},
{
0x03f0,
L"HP, Inc",
0x0f12,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x0f17,
L"LaserJet 1150"
},
{
0x03f0,
L"HP, Inc",
0x0f2a,
L"LaserJet 400 color M451dn"
},
{
0x03f0,
L"HP, Inc",
0x1001,
L"Photo Scanner 1000"
},
{
0x03f0,
L"HP, Inc",
0x1002,
L"PhotoSmart 140 series"
},
{
0x03f0,
L"HP, Inc",
0x1004,
L"DeskJet 970c/970cse"
},
{
0x03f0,
L"HP, Inc",
0x1005,
L"ScanJet 5400c"
},
{
0x03f0,
L"HP, Inc",
0x1011,
L"OfficeJet V40xi"
},
{
0x03f0,
L"HP, Inc",
0x1016,
L"Jornada 548 / iPAQ HW6515 Pocket PC"
},
{
0x03f0,
L"HP, Inc",
0x1017,
L"LaserJet 1300"
},
{
0x03f0,
L"HP, Inc",
0x1024,
L"Smart Card Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x1027,
L"Virtual keyboard and mouse"
},
{
0x03f0,
L"HP, Inc",
0x102a,
L"LaserJet Professional P 1102w"
},
{
0x03f0,
L"HP, Inc",
0x1102,
L"PhotoSmart 240 series"
},
{
0x03f0,
L"HP, Inc",
0x1104,
L"DeskJet 959c"
},
{
0x03f0,
L"HP, Inc",
0x1105,
L"ScanJet 5470c/5490c"
},
{
0x03f0,
L"HP, Inc",
0x1111,
L"OfficeJet v60"
},
{
0x03f0,
L"HP, Inc",
0x1116,
L"Jornada 568 Pocket PC"
},
{
0x03f0,
L"HP, Inc",
0x1117,
L"LaserJet 1300n"
},
{
0x03f0,
L"HP, Inc",
0x1151,
L"PSC-750xi Printer/Scanner/Copier"
},
{
0x03f0,
L"HP, Inc",
0x1198,
L"HID-compliant mouse"
},
{
0x03f0,
L"HP, Inc",
0x1202,
L"PhotoSmart 320 series"
},
{
0x03f0,
L"HP, Inc",
0x1204,
L"DeskJet 930c"
},
{
0x03f0,
L"HP, Inc",
0x1205,
L"ScanJet 4500C/5550C"
},
{
0x03f0,
L"HP, Inc",
0x1211,
L"OfficeJet v60xi"
},
{
0x03f0,
L"HP, Inc",
0x1217,
L"LaserJet 2300L"
},
{
0x03f0,
L"HP, Inc",
0x1227,
L"Virtual CD-ROM"
},
{
0x03f0,
L"HP, Inc",
0x1302,
L"PhotoSmart 370 series"
},
{
0x03f0,
L"HP, Inc",
0x1305,
L"ScanJet 4570c"
},
{
0x03f0,
L"HP, Inc",
0x1311,
L"OfficeJet V30"
},
{
0x03f0,
L"HP, Inc",
0x1312,
L"DeskJet 460"
},
{
0x03f0,
L"HP, Inc",
0x1317,
L"LaserJet 1005"
},
{
0x03f0,
L"HP, Inc",
0x1327,
L"iLO Virtual Hub"
},
{
0x03f0,
L"HP, Inc",
0x134a,
L"Optical Mouse"
},
{
0x03f0,
L"HP, Inc",
0x1405,
L"ScanJet 3670"
},
{
0x03f0,
L"HP, Inc",
0x1411,
L"PSC 750"
},
{
0x03f0,
L"HP, Inc",
0x1424,
L"f2105 Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x1502,
L"PhotoSmart 420 series"
},
{
0x03f0,
L"HP, Inc",
0x1504,
L"DeskJet 920c"
},
{
0x03f0,
L"HP, Inc",
0x150c,
L"Mood Lighting (Microchip Technology Inc.)"
},
{
0x03f0,
L"HP, Inc",
0x1511,
L"PSC 750xi"
},
{
0x03f0,
L"HP, Inc",
0x1512,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x1517,
L"color LaserJet 3500"
},
{
0x03f0,
L"HP, Inc",
0x1524,
L"Smart Card Keyboard - KR"
},
{
0x03f0,
L"HP, Inc",
0x1539,
L"Mini Magnetic Stripe Reader"
},
{
0x03f0,
L"HP, Inc",
0x1541,
L"Prime [G8X92AA]"
},
{
0x03f0,
L"HP, Inc",
0x154a,
L"Laser Mouse"
},
{
0x03f0,
L"HP, Inc",
0x1602,
L"PhotoSmart 330 series"
},
{
0x03f0,
L"HP, Inc",
0x1604,
L"DeskJet 940c"
},
{
0x03f0,
L"HP, Inc",
0x1605,
L"ScanJet 5530C PhotoSmart"
},
{
0x03f0,
L"HP, Inc",
0x1611,
L"psc 780"
},
{
0x03f0,
L"HP, Inc",
0x1617,
L"LaserJet 3015"
},
{
0x03f0,
L"HP, Inc",
0x161d,
L"Wireless Rechargeable Optical Mouse (HID)"
},
{
0x03f0,
L"HP, Inc",
0x1624,
L"Smart Card Keyboard - JP"
},
{
0x03f0,
L"HP, Inc",
0x1702,
L"PhotoSmart 380 series"
},
{
0x03f0,
L"HP, Inc",
0x1704,
L"DeskJet 948C"
},
{
0x03f0,
L"HP, Inc",
0x1705,
L"ScanJet 5590"
},
{
0x03f0,
L"HP, Inc",
0x1711,
L"psc 780xi"
},
{
0x03f0,
L"HP, Inc",
0x1712,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x1717,
L"LaserJet 3020"
},
{
0x03f0,
L"HP, Inc",
0x171d,
L"Bluetooth 2.0 Interface [Broadcom BCM2045]"
},
{
0x03f0,
L"HP, Inc",
0x1801,
L"Inkjet P-2000U"
},
{
0x03f0,
L"HP, Inc",
0x1802,
L"PhotoSmart 470 series"
},
{
0x03f0,
L"HP, Inc",
0x1804,
L"DeskJet 916C"
},
{
0x03f0,
L"HP, Inc",
0x1805,
L"ScanJet 7650"
},
{
0x03f0,
L"HP, Inc",
0x1811,
L"PSC 720"
},
{
0x03f0,
L"HP, Inc",
0x1812,
L"OfficeJet Pro K550"
},
{
0x03f0,
L"HP, Inc",
0x1817,
L"LaserJet 3030"
},
{
0x03f0,
L"HP, Inc",
0x181d,
L"Bluetooth 2.0 Interface"
},
{
0x03f0,
L"HP, Inc",
0x1902,
L"PhotoSmart A430 series"
},
{
0x03f0,
L"HP, Inc",
0x1904,
L"DeskJet 3820"
},
{
0x03f0,
L"HP, Inc",
0x1911,
L"OfficeJet V45"
},
{
0x03f0,
L"HP, Inc",
0x1917,
L"LaserJet 3380"
},
{
0x03f0,
L"HP, Inc",
0x1a02,
L"PhotoSmart A510 series"
},
{
0x03f0,
L"HP, Inc",
0x1a11,
L"OfficeJet 5100 series"
},
{
0x03f0,
L"HP, Inc",
0x1a17,
L"color LaserJet 4650"
},
{
0x03f0,
L"HP, Inc",
0x1b02,
L"PhotoSmart A610 series"
},
{
0x03f0,
L"HP, Inc",
0x1b04,
L"DeskJet 3810"
},
{
0x03f0,
L"HP, Inc",
0x1b05,
L"ScanJet 4850C/4890C"
},
{
0x03f0,
L"HP, Inc",
0x1b07,
L"Premium Starter Webcam"
},
{
0x03f0,
L"HP, Inc",
0x1c02,
L"PhotoSmart A710 series"
},
{
0x03f0,
L"HP, Inc",
0x1c17,
L"Color LaserJet 2550l"
},
{
0x03f0,
L"HP, Inc",
0x1d02,
L"PhotoSmart A310 series"
},
{
0x03f0,
L"HP, Inc",
0x1d17,
L"LaserJet 1320"
},
{
0x03f0,
L"HP, Inc",
0x1d24,
L"Barcode scanner"
},
{
0x03f0,
L"HP, Inc",
0x1e02,
L"PhotoSmart A320 Printer series"
},
{
0x03f0,
L"HP, Inc",
0x1e11,
L"PSC-950"
},
{
0x03f0,
L"HP, Inc",
0x1e17,
L"LaserJet 1160 series"
},
{
0x03f0,
L"HP, Inc",
0x1f02,
L"PhotoSmart A440 Printer series"
},
{
0x03f0,
L"HP, Inc",
0x1f11,
L"PSC 920"
},
{
0x03f0,
L"HP, Inc",
0x1f12,
L"OfficeJet Pro K5300"
},
{
0x03f0,
L"HP, Inc",
0x1f17,
L"color LaserJet 5550"
},
{
0x03f0,
L"HP, Inc",
0x1f1d,
L"un2400 Gobi Wireless Modem"
},
{
0x03f0,
L"HP, Inc",
0x2001,
L"Floppy"
},
{
0x03f0,
L"HP, Inc",
0x2002,
L"Hub"
},
{
0x03f0,
L"HP, Inc",
0x2004,
L"DeskJet 640c"
},
{
0x03f0,
L"HP, Inc",
0x2005,
L"ScanJet 3570c"
},
{
0x03f0,
L"HP, Inc",
0x2012,
L"OfficeJet Pro K5400"
},
{
0x03f0,
L"HP, Inc",
0x201d,
L"un2400 Gobi Wireless Modem (QDL mode)"
},
{
0x03f0,
L"HP, Inc",
0x2039,
L"Cashdrawer"
},
{
0x03f0,
L"HP, Inc",
0x2102,
L"PhotoSmart 7345"
},
{
0x03f0,
L"HP, Inc",
0x2104,
L"DeskJet 630c"
},
{
0x03f0,
L"HP, Inc",
0x2112,
L"OfficeJet Pro L7500"
},
{
0x03f0,
L"HP, Inc",
0x211d,
L"Sierra MC5725 [ev2210]"
},
{
0x03f0,
L"HP, Inc",
0x2202,
L"PhotoSmart 7600 series"
},
{
0x03f0,
L"HP, Inc",
0x2205,
L"ScanJet 3500c"
},
{
0x03f0,
L"HP, Inc",
0x2212,
L"OfficeJet Pro L7600"
},
{
0x03f0,
L"HP, Inc",
0x2217,
L"color LaserJet 9500 MFP"
},
{
0x03f0,
L"HP, Inc",
0x222a,
L"LaserJet Pro MFP M125nw"
},
{
0x03f0,
L"HP, Inc",
0x2302,
L"PhotoSmart 7600 series"
},
{
0x03f0,
L"HP, Inc",
0x2304,
L"DeskJet 656c"
},
{
0x03f0,
L"HP, Inc",
0x2305,
L"ScanJet 3970c"
},
{
0x03f0,
L"HP, Inc",
0x2311,
L"OfficeJet d series"
},
{
0x03f0,
L"HP, Inc",
0x2312,
L"OfficeJet Pro L7700"
},
{
0x03f0,
L"HP, Inc",
0x2317,
L"LaserJet 4350"
},
{
0x03f0,
L"HP, Inc",
0x231d,
L"Broadcom 2070 Bluetooth Combo"
},
{
0x03f0,
L"HP, Inc",
0x2402,
L"PhotoSmart 7700 series"
},
{
0x03f0,
L"HP, Inc",
0x2404,
L"Deskjet F2280 series"
},
{
0x03f0,
L"HP, Inc",
0x2405,
L"ScanJet 4070 PhotoSmart"
},
{
0x03f0,
L"HP, Inc",
0x2417,
L"LaserJet 4250"
},
{
0x03f0,
L"HP, Inc",
0x241d,
L"Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x03f0,
L"HP, Inc",
0x2424,
L"LP1965 19 Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x2441,
L"Prime G2 [2AP18AA]"
},
{
0x03f0,
L"HP, Inc",
0x2502,
L"PhotoSmart 7700 series"
},
{
0x03f0,
L"HP, Inc",
0x2504,
L"DeskJet F4200 series"
},
{
0x03f0,
L"HP, Inc",
0x2505,
L"ScanJet 3770"
},
{
0x03f0,
L"HP, Inc",
0x2512,
L"OfficeJet Pro L7300 / Compaq LA2405 series monitor"
},
{
0x03f0,
L"HP, Inc",
0x2514,
L"4-port hub"
},
{
0x03f0,
L"HP, Inc",
0x2517,
L"LaserJet 2410"
},
{
0x03f0,
L"HP, Inc",
0x251d,
L"Gobi 2000 Wireless Modem"
},
{
0x03f0,
L"HP, Inc",
0x2524,
L"LP3065 30 Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x2602,
L"PhotoSmart A520 series"
},
{
0x03f0,
L"HP, Inc",
0x2605,
L"ScanJet 3800c"
},
{
0x03f0,
L"HP, Inc",
0x2611,
L"OfficeJet 7100 series"
},
{
0x03f0,
L"HP, Inc",
0x2617,
L"Color LaserJet 2820 series"
},
{
0x03f0,
L"HP, Inc",
0x2624,
L"Pole Display (HP522 2 x 20 Line Display)"
},
{
0x03f0,
L"HP, Inc",
0x2702,
L"PhotoSmart A620 series"
},
{
0x03f0,
L"HP, Inc",
0x2704,
L"DeskJet 915"
},
{
0x03f0,
L"HP, Inc",
0x2717,
L"Color LaserJet 2830"
},
{
0x03f0,
L"HP, Inc",
0x2724,
L"Magnetic Stripe Reader IDRA-334133-HP"
},
{
0x03f0,
L"HP, Inc",
0x2805,
L"Scanjet G2710"
},
{
0x03f0,
L"HP, Inc",
0x2811,
L"PSC-2100"
},
{
0x03f0,
L"HP, Inc",
0x2817,
L"Color LaserJet 2840"
},
{
0x03f0,
L"HP, Inc",
0x2902,
L"PhotoSmart A820 series"
},
{
0x03f0,
L"HP, Inc",
0x2911,
L"PSC 2200"
},
{
0x03f0,
L"HP, Inc",
0x2917,
L"LaserJet 2420"
},
{
0x03f0,
L"HP, Inc",
0x2a11,
L"PSC 2150 series"
},
{
0x03f0,
L"HP, Inc",
0x2a17,
L"LaserJet 2430"
},
{
0x03f0,
L"HP, Inc",
0x2a1d,
L"Integrated Module with Bluetooth 2.1 Wireless technology"
},
{
0x03f0,
L"HP, Inc",
0x2b11,
L"PSC 2170 series"
},
{
0x03f0,
L"HP, Inc",
0x2b17,
L"LaserJet 1020"
},
{
0x03f0,
L"HP, Inc",
0x2b4a,
L"Business Slim Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x2c12,
L"Officejet J4680"
},
{
0x03f0,
L"HP, Inc",
0x2c17,
L"LaserJet 1022"
},
{
0x03f0,
L"HP, Inc",
0x2c24,
L"Logitech M-UAL-96 Mouse"
},
{
0x03f0,
L"HP, Inc",
0x2d05,
L"Scanjet 7000"
},
{
0x03f0,
L"HP, Inc",
0x2d11,
L"OfficeJet 6110"
},
{
0x03f0,
L"HP, Inc",
0x2d17,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x2e11,
L"PSC 1000"
},
{
0x03f0,
L"HP, Inc",
0x2e17,
L"LaserJet 2600n"
},
{
0x03f0,
L"HP, Inc",
0x2e24,
L"LP2275w Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x2f11,
L"PSC 1200"
},
{
0x03f0,
L"HP, Inc",
0x2f17,
L"Color LaserJet 2605dn"
},
{
0x03f0,
L"HP, Inc",
0x2f24,
L"LP2475w Monitor Hub"
},
{
0x03f0,
L"HP, Inc",
0x3002,
L"PhotoSmart P1000"
},
{
0x03f0,
L"HP, Inc",
0x3004,
L"DeskJet 980c"
},
{
0x03f0,
L"HP, Inc",
0x3005,
L"ScanJet 4670v"
},
{
0x03f0,
L"HP, Inc",
0x3011,
L"PSC 1100 series"
},
{
0x03f0,
L"HP, Inc",
0x3017,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x304a,
L"Slim Keyboard"
},
{
0x03f0,
L"HP, Inc",
0x3102,
L"PhotoSmart P1100 Printer w/ Card Reader"
},
{
0x03f0,
L"HP, Inc",
0x3104,
L"DeskJet 960c"
},
{
0x03f0,
L"HP, Inc",
0x3111,
L"OfficeJet 4100 series"
},
{
0x03f0,
L"HP, Inc",
0x3117,
L"EWS 2605dtn"
},
{
0x03f0,
L"HP, Inc",
0x311d,
L"Atheros AR9285 Malbec Bluetooth Adapter"
},
{
0x03f0,
L"HP, Inc",
0x3202,
L"PhotoSmart 1215"
},
{
0x03f0,
L"HP, Inc",
0x3207,
L"4 GB flash drive"
},
{
0x03f0,
L"HP, Inc",
0x3211,
L"OfficeJet 4105 series"
},
{
0x03f0,
L"HP, Inc",
0x3217,
L"LaserJet 3050"
},
{
0x03f0,
L"HP, Inc",
0x3302,
L"PhotoSmart 1218"
},
{
0x03f0,
L"HP, Inc",
0x3304,
L"DeskJet 990c"
},
{
0x03f0,
L"HP, Inc",
0x3307,
L"v125w Stick"
},
{
0x03f0,
L"HP, Inc",
0x3312,
L"OfficeJet J6410"
},
{
0x03f0,
L"HP, Inc",
0x3317,
L"LaserJet 3052"
},
{
0x03f0,
L"HP, Inc",
0x3402,
L"PhotoSmart 1115"
},
{
0x03f0,
L"HP, Inc",
0x3404,
L"DeskJet 6122"
},
{
0x03f0,
L"HP, Inc",
0x3417,
L"LaserJet 3055"
},
{
0x03f0,
L"HP, Inc",
0x3502,
L"PhotoSmart 230"
},
{
0x03f0,
L"HP, Inc",
0x3504,
L"DeskJet 6127c"
},
{
0x03f0,
L"HP, Inc",
0x3511,
L"PSC 2300"
},
{
0x03f0,
L"HP, Inc",
0x3517,
L"LaserJet 3390"
},
{
0x03f0,
L"HP, Inc",
0x3602,
L"PhotoSmart 1315"
},
{
0x03f0,
L"HP, Inc",
0x3611,
L"PSC 2410 PhotoSmart"
},
{
0x03f0,
L"HP, Inc",
0x3612,
L"Officejet Pro 8000 A809"
},
{
0x03f0,
L"HP, Inc",
0x3617,
L"Color LaserJet 2605"
},
{
0x03f0,
L"HP, Inc",
0x3711,
L"PSC 2500"
},
{
0x03f0,
L"HP, Inc",
0x3717,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x3724,
L"Webcam"
},
{
0x03f0,
L"HP, Inc",
0x3802,
L"PhotoSmart 100"
},
{
0x03f0,
L"HP, Inc",
0x3807,
L"c485w Flash Drive"
},
{
0x03f0,
L"HP, Inc",
0x3817,
L"LaserJet P2015 series"
},
{
0x03f0,
L"HP, Inc",
0x3902,
L"PhotoSmart 130"
},
{
0x03f0,
L"HP, Inc",
0x3912,
L"Officejet Pro 8500"
},
{
0x03f0,
L"HP, Inc",
0x3917,
L"LaserJet P2014"
},
{
0x03f0,
L"HP, Inc",
0x3a02,
L"PhotoSmart 7150"
},
{
0x03f0,
L"HP, Inc",
0x3a11,
L"OfficeJet 5500 series"
},
{
0x03f0,
L"HP, Inc",
0x3a17,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x3a1d,
L"hs2340 HSPA+ mobile broadband"
},
{
0x03f0,
L"HP, Inc",
0x3b02,
L"PhotoSmart 7150~"
},
{
0x03f0,
L"HP, Inc",
0x3b05,
L"Scanjet N8460"
},
{
0x03f0,
L"HP, Inc",
0x3b11,
L"PSC 1300 series"
},
{
0x03f0,
L"HP, Inc",
0x3b17,
L"LaserJet M1005 MFP"
},
{
0x03f0,
L"HP, Inc",
0x3b2a,
L"Color LaserJet MFP M277dw"
},
{
0x03f0,
L"HP, Inc",
0x3c02,
L"PhotoSmart 7350"
},
{
0x03f0,
L"HP, Inc",
0x3c05,
L"Scanjet Professional 1000 Mobile Scanner"
},
{
0x03f0,
L"HP, Inc",
0x3c11,
L"PSC 1358"
},
{
0x03f0,
L"HP, Inc",
0x3c17,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x3d02,
L"PhotoSmart 7350~"
},
{
0x03f0,
L"HP, Inc",
0x3d11,
L"OfficeJet 4215"
},
{
0x03f0,
L"HP, Inc",
0x3d17,
L"LaserJet P1005"
},
{
0x03f0,
L"HP, Inc",
0x3e02,
L"PhotoSmart 7550"
},
{
0x03f0,
L"HP, Inc",
0x3e17,
L"LaserJet P1006"
},
{
0x03f0,
L"HP, Inc",
0x3f02,
L"PhotoSmart 7550~"
},
{
0x03f0,
L"HP, Inc",
0x3f11,
L"PSC-1315/PSC-1317"
},
{
0x03f0,
L"HP, Inc",
0x4002,
L"PhotoSmart 635/715/720/735/935/E337 (storage)"
},
{
0x03f0,
L"HP, Inc",
0x4004,
L"CP1160"
},
{
0x03f0,
L"HP, Inc",
0x4102,
L"PhotoSmart 618"
},
{
0x03f0,
L"HP, Inc",
0x4105,
L"ScanJet 4370"
},
{
0x03f0,
L"HP, Inc",
0x4111,
L"OfficeJet 7200 series"
},
{
0x03f0,
L"HP, Inc",
0x4117,
L"LaserJet 1018"
},
{
0x03f0,
L"HP, Inc",
0x4202,
L"PhotoSmart 812"
},
{
0x03f0,
L"HP, Inc",
0x4205,
L"ScanJet G3010"
},
{
0x03f0,
L"HP, Inc",
0x4211,
L"OfficeJet 7300 series"
},
{
0x03f0,
L"HP, Inc",
0x4217,
L"EWS CM1015"
},
{
0x03f0,
L"HP, Inc",
0x4302,
L"PhotoSmart 850 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x4305,
L"ScanJet G3110"
},
{
0x03f0,
L"HP, Inc",
0x4311,
L"OfficeJet 7400 series"
},
{
0x03f0,
L"HP, Inc",
0x4317,
L"Color LaserJet CM1017"
},
{
0x03f0,
L"HP, Inc",
0x4402,
L"PhotoSmart 935 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x4417,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x4502,
L"PhotoSmart 945 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x4505,
L"ScanJet G4010"
},
{
0x03f0,
L"HP, Inc",
0x4507,
L"External HDD"
},
{
0x03f0,
L"HP, Inc",
0x4511,
L"PhotoSmart 2600"
},
{
0x03f0,
L"HP, Inc",
0x4512,
L"E709n [Officejet 6500 Wireless]"
},
{
0x03f0,
L"HP, Inc",
0x4517,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x4605,
L"ScanJet G4050"
},
{
0x03f0,
L"HP, Inc",
0x4611,
L"PhotoSmart 2700"
},
{
0x03f0,
L"HP, Inc",
0x4717,
L"Color LaserJet CP1215"
},
{
0x03f0,
L"HP, Inc",
0x4811,
L"PSC 1600"
},
{
0x03f0,
L"HP, Inc",
0x4911,
L"PSC 2350"
},
{
0x03f0,
L"HP, Inc",
0x4b11,
L"OfficeJet 6200"
},
{
0x03f0,
L"HP, Inc",
0x4c11,
L"PSC 1500 series"
},
{
0x03f0,
L"HP, Inc",
0x4c17,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x4d11,
L"PSC 1400"
},
{
0x03f0,
L"HP, Inc",
0x4d17,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x4e11,
L"PhotoSmart 2570 series"
},
{
0x03f0,
L"HP, Inc",
0x4f11,
L"OfficeJet 5600 (USBHUB)"
},
{
0x03f0,
L"HP, Inc",
0x4f17,
L"Color LaserJet CM1312 MFP"
},
{
0x03f0,
L"HP, Inc",
0x5004,
L"DeskJet 995c"
},
{
0x03f0,
L"HP, Inc",
0x5011,
L"PhotoSmart 3100 series"
},
{
0x03f0,
L"HP, Inc",
0x5017,
L"EWS UPD"
},
{
0x03f0,
L"HP, Inc",
0x5111,
L"PhotoSmart 3200 series"
},
{
0x03f0,
L"HP, Inc",
0x5211,
L"PhotoSmart 3300 series"
},
{
0x03f0,
L"HP, Inc",
0x5307,
L"v165w Stick"
},
{
0x03f0,
L"HP, Inc",
0x5311,
L"OfficeJet 6300"
},
{
0x03f0,
L"HP, Inc",
0x5312,
L"Officejet Pro 8500A"
},
{
0x03f0,
L"HP, Inc",
0x5317,
L"Color LaserJet CP2025 series"
},
{
0x03f0,
L"HP, Inc",
0x5411,
L"OfficeJet 4300"
},
{
0x03f0,
L"HP, Inc",
0x5511,
L"DeskJet F300 series"
},
{
0x03f0,
L"HP, Inc",
0x5611,
L"PhotoSmart C3180"
},
{
0x03f0,
L"HP, Inc",
0x5617,
L"LaserJet M1120 MFP"
},
{
0x03f0,
L"HP, Inc",
0x5711,
L"PhotoSmart C4100 series"
},
{
0x03f0,
L"HP, Inc",
0x5717,
L"LaserJet M1120n MFP"
},
{
0x03f0,
L"HP, Inc",
0x5811,
L"PhotoSmart C5100 series"
},
{
0x03f0,
L"HP, Inc",
0x5817,
L"LaserJet M1319f MFP"
},
{
0x03f0,
L"HP, Inc",
0x581d,
L"lt4112 Gobi 4G Module Network Device"
},
{
0x03f0,
L"HP, Inc",
0x5911,
L"PhotoSmart C6180"
},
{
0x03f0,
L"HP, Inc",
0x5912,
L"Officejet Pro 8600"
},
{
0x03f0,
L"HP, Inc",
0x5a11,
L"PhotoSmart C7100 series"
},
{
0x03f0,
L"HP, Inc",
0x5b11,
L"OfficeJet J2100 series"
},
{
0x03f0,
L"HP, Inc",
0x5b12,
L"Officejet Pro 8100"
},
{
0x03f0,
L"HP, Inc",
0x5c11,
L"PhotoSmart C4200 Printer series"
},
{
0x03f0,
L"HP, Inc",
0x5c12,
L"OfficeJet 6700"
},
{
0x03f0,
L"HP, Inc",
0x5c17,
L"LaserJet P2055 series"
},
{
0x03f0,
L"HP, Inc",
0x5d11,
L"PhotoSmart C5200 series"
},
{
0x03f0,
L"HP, Inc",
0x5e11,
L"PhotoSmart D7400 series"
},
{
0x03f0,
L"HP, Inc",
0x6004,
L"DeskJet 5550"
},
{
0x03f0,
L"HP, Inc",
0x6102,
L"Hewlett Packard Digital Camera"
},
{
0x03f0,
L"HP, Inc",
0x6104,
L"DeskJet 5650c"
},
{
0x03f0,
L"HP, Inc",
0x6117,
L"color LaserJet 3550"
},
{
0x03f0,
L"HP, Inc",
0x6202,
L"PhotoSmart 215"
},
{
0x03f0,
L"HP, Inc",
0x6204,
L"DeskJet 5150c"
},
{
0x03f0,
L"HP, Inc",
0x6217,
L"Color LaserJet 4700"
},
{
0x03f0,
L"HP, Inc",
0x6302,
L"PhotoSmart 318/612"
},
{
0x03f0,
L"HP, Inc",
0x6317,
L"Color LaserJet 4730mfp"
},
{
0x03f0,
L"HP, Inc",
0x6402,
L"PhotoSmart 715 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x6411,
L"PhotoSmart C8100 series"
},
{
0x03f0,
L"HP, Inc",
0x6417,
L"LaserJet 5200"
},
{
0x03f0,
L"HP, Inc",
0x6502,
L"PhotoSmart 120 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x6511,
L"PhotoSmart C7200 series"
},
{
0x03f0,
L"HP, Inc",
0x6602,
L"PhotoSmart 320"
},
{
0x03f0,
L"HP, Inc",
0x6611,
L"PhotoSmart C4380 series"
},
{
0x03f0,
L"HP, Inc",
0x6617,
L"LaserJet 5200L"
},
{
0x03f0,
L"HP, Inc",
0x6702,
L"PhotoSmart 720 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x6717,
L"Color LaserJet 3000"
},
{
0x03f0,
L"HP, Inc",
0x6802,
L"PhotoSmart 620 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x6811,
L"PhotoSmart D5300 series"
},
{
0x03f0,
L"HP, Inc",
0x6817,
L"Color LaserJet 3800"
},
{
0x03f0,
L"HP, Inc",
0x6911,
L"PhotoSmart D7200 series"
},
{
0x03f0,
L"HP, Inc",
0x6917,
L"Color LaserJet 3600"
},
{
0x03f0,
L"HP, Inc",
0x6a02,
L"PhotoSmart 735 (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x6a11,
L"PhotoSmart C6200 series"
},
{
0x03f0,
L"HP, Inc",
0x6a17,
L"LaserJet 4240"
},
{
0x03f0,
L"HP, Inc",
0x6b02,
L"PhotoSmart R707 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x6b11,
L"Photosmart C4500 series"
},
{
0x03f0,
L"HP, Inc",
0x6c11,
L"Photosmart C4480"
},
{
0x03f0,
L"HP, Inc",
0x6c17,
L"Color LaserJet 4610"
},
{
0x03f0,
L"HP, Inc",
0x6f17,
L"Color LaserJet CP6015 series"
},
{
0x03f0,
L"HP, Inc",
0x7004,
L"DeskJet 3320c"
},
{
0x03f0,
L"HP, Inc",
0x7102,
L"PhotoSmart 635 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x7104,
L"DeskJet 3420c"
},
{
0x03f0,
L"HP, Inc",
0x7117,
L"CM8060 Color MFP with Edgeline Technology"
},
{
0x03f0,
L"HP, Inc",
0x7202,
L"PhotoSmart 43x (ptp)"
},
{
0x03f0,
L"HP, Inc",
0x7204,
L"DeskJet 36xx"
},
{
0x03f0,
L"HP, Inc",
0x7217,
L"LaserJet M5035 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7302,
L"PhotoSmart M307 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x7304,
L"DeskJet 35xx"
},
{
0x03f0,
L"HP, Inc",
0x7311,
L"Photosmart Premium C309"
},
{
0x03f0,
L"HP, Inc",
0x7317,
L"LaserJet P3005"
},
{
0x03f0,
L"HP, Inc",
0x7404,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x7417,
L"LaserJet M4345 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7504,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x7517,
L"LaserJet M3035 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7604,
L"DeskJet 3940"
},
{
0x03f0,
L"HP, Inc",
0x7611,
L"DeskJet F2492 All-in-One"
},
{
0x03f0,
L"HP, Inc",
0x7617,
L"LaserJet P3004"
},
{
0x03f0,
L"HP, Inc",
0x7702,
L"PhotoSmart R817 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x7704,
L"DeskJet D4100"
},
{
0x03f0,
L"HP, Inc",
0x7717,
L"CM8050 Color MFP with Edgeline Technology"
},
{
0x03f0,
L"HP, Inc",
0x7804,
L"DeskJet D1360"
},
{
0x03f0,
L"HP, Inc",
0x7817,
L"Color LaserJet CP3505"
},
{
0x03f0,
L"HP, Inc",
0x7917,
L"LaserJet M5025 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7a02,
L"PhotoSmart M415 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x7a04,
L"DeskJet D2460"
},
{
0x03f0,
L"HP, Inc",
0x7a17,
L"LaserJet M3027 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7b02,
L"PhotoSmart M23 (PTP mode)"
},
{
0x03f0,
L"HP, Inc",
0x7b17,
L"Color LaserJet CP4005"
},
{
0x03f0,
L"HP, Inc",
0x7c17,
L"Color LaserJet CM6040 series"
},
{
0x03f0,
L"HP, Inc",
0x7d04,
L"DeskJet F2100 Printer series"
},
{
0x03f0,
L"HP, Inc",
0x7d17,
L"Color LaserJet CM4730 MFP"
},
{
0x03f0,
L"HP, Inc",
0x7e04,
L"DeskJet F4100 Printer series"
},
{
0x03f0,
L"HP, Inc",
0x8017,
L"LaserJet P4515"
},
{
0x03f0,
L"HP, Inc",
0x8104,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x8117,
L"LaserJet P4015"
},
{
0x03f0,
L"HP, Inc",
0x811c,
L"Ethernet HN210E"
},
{
0x03f0,
L"HP, Inc",
0x8204,
L"Printing Support"
},
{
0x03f0,
L"HP, Inc",
0x8207,
L"FHA-3510 2.4GHz Wireless Optical Mobile Mouse"
},
{
0x03f0,
L"HP, Inc",
0x8217,
L"LaserJet P4014"
},
{
0x03f0,
L"HP, Inc",
0x8317,
L"LaserJet M9050 MFP"
},
{
0x03f0,
L"HP, Inc",
0x8404,
L"DeskJet 6800 series"
},
{
0x03f0,
L"HP, Inc",
0x8417,
L"LaserJet M9040 MFP"
},
{
0x03f0,
L"HP, Inc",
0x8504,
L"DeskJet 6600 series"
},
{
0x03f0,
L"HP, Inc",
0x8604,
L"DeskJet 5440"
},
{
0x03f0,
L"HP, Inc",
0x8607,
L"Optical Mobile Mouse"
},
{
0x03f0,
L"HP, Inc",
0x8704,
L"DeskJet 5940"
},
{
0x03f0,
L"HP, Inc",
0x8711,
L"Deskjet 2050 J510"
},
{
0x03f0,
L"HP, Inc",
0x8804,
L"DeskJet 6980 series"
},
{
0x03f0,
L"HP, Inc",
0x8904,
L"DeskJet 6940 series"
},
{
0x03f0,
L"HP, Inc",
0x8911,
L"Deskjet 1050 J410"
},
{
0x03f0,
L"HP, Inc",
0x8c07,
L"Digital Stereo Headset"
},
{
0x03f0,
L"HP, Inc",
0x8c11,
L"Deskjet F4500 series"
},
{
0x03f0,
L"HP, Inc",
0x9002,
L"PhotoSmart M437"
},
{
0x03f0,
L"HP, Inc",
0x9102,
L"PhotoSmart M537"
},
{
0x03f0,
L"HP, Inc",
0x9207,
L"HD-4110 Webcam"
},
{
0x03f0,
L"HP, Inc",
0x9302,
L"PhotoSmart R930 series"
},
{
0x03f0,
L"HP, Inc",
0x9402,
L"PhotoSmart R837"
},
{
0x03f0,
L"HP, Inc",
0x942a,
L"LaserJet Pro M12a"
},
{
0x03f0,
L"HP, Inc",
0x9502,
L"PhotoSmart R840 series"
},
{
0x03f0,
L"HP, Inc",
0x952a,
L"LaserJet Pro M12w"
},
{
0x03f0,
L"HP, Inc",
0x9602,
L"PhotoSmart M730 series"
},
{
0x03f0,
L"HP, Inc",
0x9702,
L"PhotoSmart R740 series"
},
{
0x03f0,
L"HP, Inc",
0x9802,
L"PhotoSmart Mz60 series"
},
{
0x03f0,
L"HP, Inc",
0x9902,
L"PhotoSmart M630 series"
},
{
0x03f0,
L"HP, Inc",
0x9a02,
L"PhotoSmart E330 series"
},
{
0x03f0,
L"HP, Inc",
0x9b02,
L"PhotoSmart M540 series"
},
{
0x03f0,
L"HP, Inc",
0x9b07,
L"Portable Drive"
},
{
0x03f0,
L"HP, Inc",
0x9c02,
L"PhotoSmart M440 series"
},
{
0x03f0,
L"HP, Inc",
0xa004,
L"DeskJet 5850c"
},
{
0x03f0,
L"HP, Inc",
0xa011,
L"Deskjet 3050A"
},
{
0x03f0,
L"HP, Inc",
0xa407,
L"Wireless Optical Comfort Mouse"
},
{
0x03f0,
L"HP, Inc",
0xb002,
L"PhotoSmart 7200 series"
},
{
0x03f0,
L"HP, Inc",
0xb102,
L"PhotoSmart 7200 series"
},
{
0x03f0,
L"HP, Inc",
0xb107,
L"v255w/c310w Flash Drive"
},
{
0x03f0,
L"HP, Inc",
0xb116,
L"Webcam"
},
{
0x03f0,
L"HP, Inc",
0xb202,
L"PhotoSmart 7600 series"
},
{
0x03f0,
L"HP, Inc",
0xb302,
L"PhotoSmart 7600 series"
},
{
0x03f0,
L"HP, Inc",
0xb402,
L"PhotoSmart 7700 series"
},
{
0x03f0,
L"HP, Inc",
0xb502,
L"PhotoSmart 7700 series"
},
{
0x03f0,
L"HP, Inc",
0xb602,
L"PhotoSmart 7900 series"
},
{
0x03f0,
L"HP, Inc",
0xb702,
L"PhotoSmart 7900 series"
},
{
0x03f0,
L"HP, Inc",
0xb802,
L"PhotoSmart 7400 series"
},
{
0x03f0,
L"HP, Inc",
0xb902,
L"PhotoSmart 7800 series"
},
{
0x03f0,
L"HP, Inc",
0xba02,
L"PhotoSmart 8100 series"
},
{
0x03f0,
L"HP, Inc",
0xbb02,
L"PhotoSmart 8400 series"
},
{
0x03f0,
L"HP, Inc",
0xbc02,
L"PhotoSmart 8700 series"
},
{
0x03f0,
L"HP, Inc",
0xbd02,
L"PhotoSmart Pro B9100 series"
},
{
0x03f0,
L"HP, Inc",
0xbef4,
L"NEC Picty760"
},
{
0x03f0,
L"HP, Inc",
0xc002,
L"PhotoSmart 7800 series"
},
{
0x03f0,
L"HP, Inc",
0xc102,
L"PhotoSmart 8000 series"
},
{
0x03f0,
L"HP, Inc",
0xc111,
L"Deskjet 1510"
},
{
0x03f0,
L"HP, Inc",
0xc202,
L"PhotoSmart 8200 series"
},
{
0x03f0,
L"HP, Inc",
0xc211,
L"Deskjet 2540 series"
},
{
0x03f0,
L"HP, Inc",
0xc302,
L"DeskJet D2300"
},
{
0x03f0,
L"HP, Inc",
0xc402,
L"PhotoSmart D5100 series"
},
{
0x03f0,
L"HP, Inc",
0xc502,
L"PhotoSmart D6100 series"
},
{
0x03f0,
L"HP, Inc",
0xc602,
L"PhotoSmart D7100 series"
},
{
0x03f0,
L"HP, Inc",
0xc702,
L"PhotoSmart D7300 series"
},
{
0x03f0,
L"HP, Inc",
0xc802,
L"PhotoSmart D5060 Printer"
},
{
0x03f0,
L"HP, Inc",
0xd104,
L"Bluetooth Dongle"
},
{
0x03f0,
L"HP, Inc",
0xd507,
L"39gII [NW249AA]"
},
{
0x03f0,
L"HP, Inc",
0xefbe,
L"NEC Picty900"
},
{
0x03f0,
L"HP, Inc",
0xf0be,
L"NEC Picty920"
},
{
0x03f0,
L"HP, Inc",
0xf1be,
L"NEC Picty800"
},
{
0x03f1,
L"Genoa Technology",
0x0,
L"0"
},
{
0x03f2,
L"Oak Technology, Inc.",
0x0,
L"0"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0020,
L"AWN-8020 WLAN [Intersil PRISM 2.5]"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0080,
L"AVC-1100 Audio Capture"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0083,
L"AVC-2200 Device"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0087,
L"AVC-2210 Loader"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0088,
L"AVC-2210 Device"
},
{
0x03f3,
L"Adaptec, Inc.",
0x008b,
L"AVC-2310 Loader"
},
{
0x03f3,
L"Adaptec, Inc.",
0x008c,
L"AVC-2310 Device"
},
{
0x03f3,
L"Adaptec, Inc.",
0x0094,
L"eHome Infrared Receiver"
},
{
0x03f3,
L"Adaptec, Inc.",
0x009b,
L"AVC-1410 GameBridge TV NTSC"
},
{
0x03f3,
L"Adaptec, Inc.",
0x2000,
L"USBXchange"
},
{
0x03f3,
L"Adaptec, Inc.",
0x2001,
L"USBXchange Adapter"
},
{
0x03f3,
L"Adaptec, Inc.",
0x2002,
L"USB2-Xchange"
},
{
0x03f3,
L"Adaptec, Inc.",
0x2003,
L"USB2-Xchange Adapter"
},
{
0x03f3,
L"Adaptec, Inc.",
0x4000,
L"4-port hub"
},
{
0x03f3,
L"Adaptec, Inc.",
0xadcc,
L"Composite Device Support"
},
{
0x03f4,
L"Diebold, Inc.",
0x0,
L"0"
},
{
0x03f5,
L"Siemens Electromechanical",
0x0,
L"0"
},
{
0x03f8,
L"Epson Imaging Technology Center",
0x0,
L"0"
},
{
0x03f9,
L"KeyTronic Corp.",
0x0100,
L"KT-2001 Keyboard"
},
{
0x03f9,
L"KeyTronic Corp.",
0x0101,
L"Keyboard"
},
{
0x03f9,
L"KeyTronic Corp.",
0x0102,
L"Keyboard Mouse"
},
{
0x03fb,
L"OPTi, Inc.",
0x0,
L"0"
},
{
0x03fc,
L"Elitegroup Computer Systems",
0x0,
L"0"
},
{
0x03fd,
L"Xilinx, Inc.",
0x0008,
L"Platform Cable USB II"
},
{
0x03fd,
L"Xilinx, Inc.",
0x0050,
L"dfu downloader"
},
{
0x03fe,
L"Farallon Comunications",
0x0,
L"0"
},
{
0x0400,
L"National Semiconductor Corp.",
0x05dc,
L"Rigol Technologies DS1000USB Oscilloscope"
},
{
0x0400,
L"National Semiconductor Corp.",
0x0807,
L"Bluetooth Dongle"
},
{
0x0400,
L"National Semiconductor Corp.",
0x080a,
L"Bluetooth Device"
},
{
0x0400,
L"National Semiconductor Corp.",
0x09c4,
L"Rigol Technologies DG1022 Arbitrary Waveform Generator"
},
{
0x0400,
L"National Semiconductor Corp.",
0x1000,
L"Mustek BearPaw 1200 Scanner"
},
{
0x0400,
L"National Semiconductor Corp.",
0x1001,
L"Mustek BearPaw 2400 Scanner"
},
{
0x0400,
L"National Semiconductor Corp.",
0x1237,
L"Hub"
},
{
0x0400,
L"National Semiconductor Corp.",
0xa000,
L"Smart Display Reference Device"
},
{
0x0400,
L"National Semiconductor Corp.",
0xc359,
L"Logitech Harmony"
},
{
0x0400,
L"National Semiconductor Corp.",
0xc35b,
L"Printing Support"
},
{
0x0400,
L"National Semiconductor Corp.",
0xc55d,
L"Rigol Technologies DS5000USB Oscilloscope"
},
{
0x0401,
L"National Registry, Inc.",
0x0,
L"0"
},
{
0x0402,
L"ALi Corp.",
0x5462,
L"M5462 IDE Controller"
},
{
0x0402,
L"ALi Corp.",
0x5602,
L"M5602 Video Camera Controller"
},
{
0x0402,
L"ALi Corp.",
0x5603,
L"M5603 Video Camera Controller"
},
{
0x0402,
L"ALi Corp.",
0x5606,
L"M5606 Video Camera Controller [UVC]"
},
{
0x0402,
L"ALi Corp.",
0x5621,
L"M5621 High-Speed IDE Controller"
},
{
0x0402,
L"ALi Corp.",
0x5623,
L"M5623 Scanner Controller"
},
{
0x0402,
L"ALi Corp.",
0x5627,
L"Welland ME-740PS USB2 3.5 Power Saving Enclosure"
},
{
0x0402,
L"ALi Corp.",
0x5632,
L"M5632 Host-to-Host Link"
},
{
0x0402,
L"ALi Corp.",
0x5635,
L"M5635 Flash Card Reader"
},
{
0x0402,
L"ALi Corp.",
0x5636,
L"USB 2.0 Storage Device"
},
{
0x0402,
L"ALi Corp.",
0x5637,
L"M5637 IDE Controller"
},
{
0x0402,
L"ALi Corp.",
0x5642,
L"Storage Device"
},
{
0x0402,
L"ALi Corp.",
0x5661,
L"M5661 MP3 player"
},
{
0x0402,
L"ALi Corp.",
0x5667,
L"M5667 MP3 player"
},
{
0x0402,
L"ALi Corp.",
0x9665,
L"Gateway Webcam"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x0000,
L"H4SMK 7 Port Hub / Bricked Counterfeit FT232 Serial (UART) IC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x0232,
L"Serial Converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x1060,
L"JTAG adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x1234,
L"IronLogic RFID Adapter [Z-2 USB]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x1235,
L"Iron Logic Z-397 RS-485/422 converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6001,
L"FT232 Serial (UART) IC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6002,
L"Lumel PD12"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6007,
L"Serial Converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6008,
L"Serial Converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6009,
L"Serial Converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6010,
L"FT2232C/D/H Dual UART/FIFO IC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6011,
L"FT4232H Quad HS USB-UART/FIFO IC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6014,
L"FT232H Single HS USB-UART/FIFO IC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6015,
L"Bridge(I2C/SPI/UART/FIFO)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x6f70,
L"HB-RF-USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8028,
L"Dev board JTAG (FT232H based)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8040,
L"4 Port Hub"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8070,
L"7 Port Hub"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8140,
L"Vehicle Explorer Interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8210,
L"MGTimer - MGCC (Vic) Timing System"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8348,
L"FT232BM [SIENNA Serial Interface]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8370,
L"7 Port Hub"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8371,
L"PS/2 Keyboard And Mouse"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8372,
L"FT8U100AX Serial Port"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8508,
L"Selectronic SP PRO"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x87d0,
L"Cressi Dive Computer Interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8a28,
L"Rainforest Automation ZigBee Controller"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8a98,
L"TIAO Multi-Protocol Adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8b28,
L"Alpermann+Velte TCI70"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8b29,
L"Alpermann+Velte TC60 CLS"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8b2a,
L"Alpermann+Velte Rubidium Q1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8b2b,
L"Alpermann+Velte TCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x8b2c,
L"Alpermann+Velte TCC70"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9090,
L"SNAP Stick 200"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9132,
L"LCD and Temperature Interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9133,
L"CallerID"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9135,
L"Rotary Pub alarm"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9136,
L"Pulsecounter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9e90,
L"Marvell OpenRD Base/Client"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9f08,
L"CIB-1894 Conclusion SmartLink Box:"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0x9f80,
L"Ewert Energy Systems CANdapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xa6d0,
L"Texas Instruments XDS100v2 JTAG / BeagleBone A3"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xa951,
L"HCP HIT GSM/GPRS modem [Cinterion MC55i]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xa9a0,
L"FT2232D - Dual UART/FIFO IC - FTDI"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xabb8,
L"Lego Mindstorms NXTCam"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c0,
L"microSensys RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c1,
L"microSensys RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c2,
L"iID contactless RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c3,
L"iID contactless RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c4,
L"RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb0c5,
L"RFID device"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb810,
L"US Interface Navigator (CAT and 2nd PTT lines)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb811,
L"US Interface Navigator (WKEY and FSK lines)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb812,
L"US Interface Navigator (RS232 and CONFIG lines)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xb9b0,
L"Fujitsu SK-16FX-100PMC V1.1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbaf8,
L"Amontec JTAGkey"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbcd8,
L"Stellaris Development Board"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbcd9,
L"Stellaris Evaluation Board"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbcda,
L"Stellaris ICDI Board"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbd90,
L"PICAXE Download Cable [AXE027]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbdc8,
L"Egnite GmbH - JTAG/RS-232 adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbfd8,
L"OpenDCC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbfd9,
L"OpenDCC (Sniffer)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbfda,
L"OpenDCC (Throttle)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbfdb,
L"OpenDCC (Gateway)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xbfdc,
L"OpenDCC (GBM)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc580,
L"HID UNIKEY dongle [F-Response]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc630,
L"lcd2usb interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc631,
L"i2c-tiny-usb interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc632,
L"xu1541 c64 floppy drive interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc633,
L"TinyCrypt dongle"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc634,
L"glcd2usb interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc7d0,
L"RR-CirKits LocoBuffer-USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8b8,
L"Alpermann+Velte MTD TCU"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8b9,
L"Alpermann+Velte MTD TCU 1HE"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8ba,
L"Alpermann+Velte Rubidium H1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8bb,
L"Alpermann+Velte Rubidium H3"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8bc,
L"Alpermann+Velte Rubidium S1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8bd,
L"Alpermann+Velte Rubidium T1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8be,
L"Alpermann+Velte Rubidium D1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xc8bf,
L"Alpermann+Velte TC60 RLV"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xcc48,
L"Tactrix OpenPort 1.3 Mitsubishi"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xcc49,
L"Tactrix OpenPort 1.3 Subaru"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xcc4a,
L"Tactrix OpenPort 1.3 Universal"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xcff8,
L"Amontec JTAGkey"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd010,
L"SCS PTC-IIusb"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd011,
L"SCS Position-Tracker/TNC"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd012,
L"SCS DRAGON 1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd013,
L"SCS DRAGON 1"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd388,
L"Xsens converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd389,
L"Xsens Wireless Receiver"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38a,
L"Xsens serial converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38b,
L"Xsens serial converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38c,
L"Xsens Wireless Receiver"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38d,
L"Xsens Awinda Station"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38e,
L"Xsens serial converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd38f,
L"Xsens serial converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd491,
L"Zolix Omni 1509 monochromator"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd578,
L"Accesio USB-COM-4SM"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd6f8,
L"UNI Black BOX"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd738,
L"Propox JTAGcable II"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd739,
L"Propox ISPcable III"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd9a9,
L"Actisense USG-1 NMEA Serial Gateway"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd9aa,
L"Actisense NGT-1 NMEA2000 PC Interface"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xd9ab,
L"Actisense NGT-1 NMEA2000 Gateway"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xdaf4,
L"Qundis Serial Infrared Head"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe0d0,
L"Total Phase Aardvark I2C/SPI Host Adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe521,
L"EVER Sinline XL Series UPS"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe6c8,
L"PYRAMID Computer GmbH LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe700,
L"Elster Unicom III Optical Probe"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe729,
L"Segway Robotic Mobility Platforms 200"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe888,
L"Expert ISDN Control USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe889,
L"USB-RS232 OptoBridge"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe88a,
L"Expert mouseCLOCK USB II"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe88b,
L"Precision Clock MSF USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe88c,
L"Expert mouseCLOCK USB II HBG"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe8d8,
L"Aaronia AG Spectran Spectrum Analyzer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xe8dc,
L"Aaronia AG UBBV Preamplifier"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xea90,
L"Eclo 1-Wire Adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xecd9,
L"miControl miCan-Stick"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xed71,
L"HAMEG HO870 Serial Port"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xed72,
L"HAMEG HO720 Serial Port"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xed73,
L"HAMEG HO730 Serial Port"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xed74,
L"HAMEG HO820 Serial Port"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xef10,
L"FT1245BL"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf070,
L"Serial Converter 422/485 [Vardaan VEUSB422R3]"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf0c8,
L"SPROG Decoder Programmer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf0c9,
L"SPROG-DCC CAN-USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf0e9,
L"Tagsys L-P101"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf0ee,
L"Tagsys Medio P200x"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf1a0,
L"Asix PRESTO Programmer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf208,
L"Papenmeier Braille-Display"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf3c0,
L"4N-GALAXY Serial Converter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf458,
L"ABACUS ELECTRICS Optical Probe"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf608,
L"CTI USB-485-Mini"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf60b,
L"CTI USB-Nano-485"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf680,
L"Suunto Sports Instrument"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf758,
L"GW Instek GDS-8x0 Oscilloscope"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf7c0,
L"ZeitControl Cardsystems TagTracer MIFARE"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf850,
L"USB-UIRT (Universal Infrared Receiver+Transmitter)"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xf918,
L"Ant8 Logic Probe"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa00,
L"Matrix Orbital USB Serial"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa01,
L"Matrix Orbital MX2 or MX3"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa02,
L"Matrix Orbital MX4 or MX5"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa03,
L"Matrix Orbital VK/LK202 Family"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa04,
L"Matrix Orbital VK/LK204 Family"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfa20,
L"Ross-Tech HEX-USB"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc08,
L"Crystalfontz CFA-632 USB LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc09,
L"Crystalfontz CFA-634 USB LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc0b,
L"Crystalfontz CFA-633 USB LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc0c,
L"Crystalfontz CFA-631 USB LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc0d,
L"Crystalfontz CFA-635 USB LCD"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfc82,
L"SEMC DSS-20/DSS-25 SyncStation"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfd48,
L"ShipModul MiniPlex-4xUSB NMEA Multiplexer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfd49,
L"ShipModul MiniPlex-4xUSB-AIS NMEA Multiplexer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xfd4b,
L"ShipModul MiniPlex NMEA Multiplexer"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff08,
L"ToolHouse LoopBack Adapter"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff18,
L"ScienceScope Logbook ML"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff19,
L"Logbook Bus"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1a,
L"Logbook Bus"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1b,
L"Logbook Bus"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1c,
L"ScienceScope Logbook LS"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1d,
L"ScienceScope Logbook HS"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1e,
L"Logbook Bus"
},
{
0x0403,
L"Future Technology Devices International, Ltd",
0xff1f,
L"Logbook Bus"
},
{
0x0404,
L"NCR Corp.",
0x0202,
L"78XX Scanner"
},
{
0x0404,
L"NCR Corp.",
0x0203,
L"78XX Scanner - Embedded System"
},
{
0x0404,
L"NCR Corp.",
0x0310,
L"K590 Printer, Self-Service"
},
{
0x0404,
L"NCR Corp.",
0x0311,
L"7167 Printer, Receipt/Slip"
},
{
0x0404,
L"NCR Corp.",
0x0312,
L"7197 Printer Receipt"
},
{
0x0404,
L"NCR Corp.",
0x0320,
L"5932-USB Keyboard"
},
{
0x0404,
L"NCR Corp.",
0x0321,
L"5953-USB Dynakey"
},
{
0x0404,
L"NCR Corp.",
0x0322,
L"5932-USB Enhanced Keyboard"
},
{
0x0404,
L"NCR Corp.",
0x0323,
L"5932-USB Enhanced Keyboard, Flash-Recovery/Download"
},
{
0x0404,
L"NCR Corp.",
0x0324,
L"5953-USB Enhanced Dynakey"
},
{
0x0404,
L"NCR Corp.",
0x0325,
L"5953-USB Enhanced Dynakey Flash-Recovery/Download"
},
{
0x0404,
L"NCR Corp.",
0x0328,
L"K016: USB-MSR ISO 3-track MSR: POS Standard (See HID pages)"
},
{
0x0404,
L"NCR Corp.",
0x0329,
L"K018: USB-MSR JIS 2-Track MSR: POS Standard"
},
{
0x0404,
L"NCR Corp.",
0x032a,
L"K016: USB-MSR ISO 3-Track MSR: HID Keyboard Mode"
},
{
0x0404,
L"NCR Corp.",
0x032b,
L"K016/K018: USB-MSR Flash-Recovery/Download"
},
{
0x0405,
L"Synopsys, Inc.",
0x0,
L"0"
},
{
0x0406,
L"Fujitsu-ICL Computers",
0x0,
L"0"
},
{
0x0407,
L"Fujitsu Personal Systems, Inc.",
0x0,
L"0"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x0103,
L"FV TouchCam N1 (Audio)"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x030c,
L"HP Webcam"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x03b2,
L"HP Webcam"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x03f4,
L"HP Webcam"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x1030,
L"FV TouchCam N1 (Video)"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x3000,
L"Optical dual-touch panel"
},
{
0x0408,
L"Quanta Computer, Inc.",
0x3001,
L"Optical Touch Screen"
},
{
0x0408,
L"Quanta Computer, Inc.",
0xa060,
L"HD Webcam"
},
{
0x0409,
L"NEC Corp.",
0x0011,
L"PC98 Series Layout Keyboard Mouse"
},
{
0x0409,
L"NEC Corp.",
0x0012,
L"ATerm IT75DSU ISDN TA"
},
{
0x0409,
L"NEC Corp.",
0x0014,
L"Japanese Keyboard"
},
{
0x0409,
L"NEC Corp.",
0x0019,
L"109 Japanese Keyboard with Bus-Powered Hub"
},
{
0x0409,
L"NEC Corp.",
0x001a,
L"PC98 Series Layout Keyboard with Bus-Powered Hub"
},
{
0x0409,
L"NEC Corp.",
0x0025,
L"Mini Keyboard with Bus-Powered Hub"
},
{
0x0409,
L"NEC Corp.",
0x0027,
L"MultiSync Monitor"
},
{
0x0409,
L"NEC Corp.",
0x002c,
L"Clik!-USB Drive"
},
{
0x0409,
L"NEC Corp.",
0x0034,
L"109 Japanese Keyboard with One-touch start buttons"
},
{
0x0409,
L"NEC Corp.",
0x003f,
L"Wireless Keyboard with One-touch start buttons"
},
{
0x0409,
L"NEC Corp.",
0x0040,
L"Floppy"
},
{
0x0409,
L"NEC Corp.",
0x004e,
L"SuperScript 1400 Series"
},
{
0x0409,
L"NEC Corp.",
0x004f,
L"Wireless Keyboard with One-touch start buttons"
},
{
0x0409,
L"NEC Corp.",
0x0050,
L"7-port hub"
},
{
0x0409,
L"NEC Corp.",
0x0058,
L"HighSpeed Hub"
},
{
0x0409,
L"NEC Corp.",
0x0059,
L"HighSpeed Hub"
},
{
0x0409,
L"NEC Corp.",
0x005a,
L"HighSpeed Hub"
},
{
0x0409,
L"NEC Corp.",
0x006a,
L"Conceptronic USB Harddisk Box"
},
{
0x0409,
L"NEC Corp.",
0x007d,
L"MINICUBE2"
},
{
0x0409,
L"NEC Corp.",
0x007e,
L"PG-FP5 Flash Memory Programmer"
},
{
0x0409,
L"NEC Corp.",
0x0081,
L"SuperScript 1400 Series"
},
{
0x0409,
L"NEC Corp.",
0x0082,
L"SuperScript 1400 Series"
},
{
0x0409,
L"NEC Corp.",
0x0094,
L"Japanese Keyboard with One-touch start buttons"
},
{
0x0409,
L"NEC Corp.",
0x0095,
L"Japanese Keyboard"
},
{
0x0409,
L"NEC Corp.",
0x00a9,
L"AtermIT21L 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00aa,
L"AtermITX72 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00ab,
L"AtermITX62 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00ac,
L"AtermIT42 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00ae,
L"INSMATEV70G-MAX Standard"
},
{
0x0409,
L"NEC Corp.",
0x00af,
L"AtermITX70 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00b0,
L"AtermITX80 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00b2,
L"AtermITX80D 128K Support Standard"
},
{
0x0409,
L"NEC Corp.",
0x00c0,
L"Wireless Remocon"
},
{
0x0409,
L"NEC Corp.",
0x00f7,
L"Smart Display PK-SD10"
},
{
0x0409,
L"NEC Corp.",
0x011d,
L"e228 Mobile Phone"
},
{
0x0409,
L"NEC Corp.",
0x0203,
L"HID Audio Controls"
},
{
0x0409,
L"NEC Corp.",
0x021d,
L"Aterm WL54SU2 802.11g Wireless Adapter [Atheros AR5523]"
},
{
0x0409,
L"NEC Corp.",
0x0248,
L"Aterm PA-WL54GU"
},
{
0x0409,
L"NEC Corp.",
0x0249,
L"Aterm WL300NU-G"
},
{
0x0409,
L"NEC Corp.",
0x02b4,
L"Aterm WL300NU-AG"
},
{
0x0409,
L"NEC Corp.",
0x02b6,
L"Aterm WL300NU-GS 802.11n Wireless Adapter"
},
{
0x0409,
L"NEC Corp.",
0x02bc,
L"Computer Monitor"
},
{
0x0409,
L"NEC Corp.",
0x0300,
L"LifeTouch Note"
},
{
0x0409,
L"NEC Corp.",
0x0301,
L"LifeTouch Note (debug mode)"
},
{
0x0409,
L"NEC Corp.",
0x55aa,
L"Hub"
},
{
0x0409,
L"NEC Corp.",
0x55ab,
L"Hub [iMac/iTouch kbd]"
},
{
0x0409,
L"NEC Corp.",
0x8010,
L"Intellibase Hub"
},
{
0x0409,
L"NEC Corp.",
0x8011,
L"Intellibase Hub"
},
{
0x0409,
L"NEC Corp.",
0xefbe,
L"P!cty 900 [HP DJ]"
},
{
0x0409,
L"NEC Corp.",
0xf0be,
L"P!cty 920 [HP DJ 812c]"
},
{
0x040a,
L"Kodak Co.",
0x0001,
L"DVC-323"
},
{
0x040a,
L"Kodak Co.",
0x0002,
L"DVC-325"
},
{
0x040a,
L"Kodak Co.",
0x0100,
L"DC-220"
},
{
0x040a,
L"Kodak Co.",
0x0110,
L"DC-260"
},
{
0x040a,
L"Kodak Co.",
0x0111,
L"DC-265"
},
{
0x040a,
L"Kodak Co.",
0x0112,
L"DC-290"
},
{
0x040a,
L"Kodak Co.",
0x0120,
L"DC-240"
},
{
0x040a,
L"Kodak Co.",
0x0121,
L"DC-240 (PTP firmware)"
},
{
0x040a,
L"Kodak Co.",
0x0130,
L"DC-280"
},
{
0x040a,
L"Kodak Co.",
0x0131,
L"DC-5000"
},
{
0x040a,
L"Kodak Co.",
0x0132,
L"DC-3400"
},
{
0x040a,
L"Kodak Co.",
0x0140,
L"DC-4800"
},
{
0x040a,
L"Kodak Co.",
0x0160,
L"DC4800"
},
{
0x040a,
L"Kodak Co.",
0x0170,
L"DX3900"
},
{
0x040a,
L"Kodak Co.",
0x0200,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0300,
L"EZ-200"
},
{
0x040a,
L"Kodak Co.",
0x0400,
L"MC3"
},
{
0x040a,
L"Kodak Co.",
0x0402,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0403,
L"Z7590"
},
{
0x040a,
L"Kodak Co.",
0x0500,
L"DX3500"
},
{
0x040a,
L"Kodak Co.",
0x0510,
L"DX3600"
},
{
0x040a,
L"Kodak Co.",
0x0525,
L"DX3215"
},
{
0x040a,
L"Kodak Co.",
0x0530,
L"DX3700"
},
{
0x040a,
L"Kodak Co.",
0x0535,
L"EasyShare CX4230 Camera"
},
{
0x040a,
L"Kodak Co.",
0x0540,
L"LS420"
},
{
0x040a,
L"Kodak Co.",
0x0550,
L"DX4900"
},
{
0x040a,
L"Kodak Co.",
0x0555,
L"DX4330"
},
{
0x040a,
L"Kodak Co.",
0x0560,
L"CX4200"
},
{
0x040a,
L"Kodak Co.",
0x0565,
L"CX4210"
},
{
0x040a,
L"Kodak Co.",
0x0566,
L"CX4300"
},
{
0x040a,
L"Kodak Co.",
0x0567,
L"LS753"
},
{
0x040a,
L"Kodak Co.",
0x0568,
L"LS443"
},
{
0x040a,
L"Kodak Co.",
0x0569,
L"LS663"
},
{
0x040a,
L"Kodak Co.",
0x0570,
L"DX6340"
},
{
0x040a,
L"Kodak Co.",
0x0571,
L"CX6330"
},
{
0x040a,
L"Kodak Co.",
0x0572,
L"DX6440"
},
{
0x040a,
L"Kodak Co.",
0x0573,
L"CX6230"
},
{
0x040a,
L"Kodak Co.",
0x0574,
L"CX6200"
},
{
0x040a,
L"Kodak Co.",
0x0575,
L"DX6490"
},
{
0x040a,
L"Kodak Co.",
0x0576,
L"DX4530"
},
{
0x040a,
L"Kodak Co.",
0x0577,
L"DX7630"
},
{
0x040a,
L"Kodak Co.",
0x0578,
L"CX7300/CX7310"
},
{
0x040a,
L"Kodak Co.",
0x0579,
L"CX7220"
},
{
0x040a,
L"Kodak Co.",
0x057a,
L"CX7330"
},
{
0x040a,
L"Kodak Co.",
0x057b,
L"CX7430"
},
{
0x040a,
L"Kodak Co.",
0x057c,
L"CX7530"
},
{
0x040a,
L"Kodak Co.",
0x057d,
L"DX7440"
},
{
0x040a,
L"Kodak Co.",
0x057e,
L"C300"
},
{
0x040a,
L"Kodak Co.",
0x057f,
L"DX7590"
},
{
0x040a,
L"Kodak Co.",
0x0580,
L"Z730"
},
{
0x040a,
L"Kodak Co.",
0x0581,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0582,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0583,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0584,
L"CX6445"
},
{
0x040a,
L"Kodak Co.",
0x0585,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0586,
L"CX7525"
},
{
0x040a,
L"Kodak Co.",
0x0587,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0588,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0589,
L"EasyShare C360"
},
{
0x040a,
L"Kodak Co.",
0x058a,
L"C310"
},
{
0x040a,
L"Kodak Co.",
0x058b,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x058c,
L"C330"
},
{
0x040a,
L"Kodak Co.",
0x058d,
L"C340"
},
{
0x040a,
L"Kodak Co.",
0x058e,
L"V530"
},
{
0x040a,
L"Kodak Co.",
0x058f,
L"V550"
},
{
0x040a,
L"Kodak Co.",
0x0590,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0591,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0592,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0593,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0594,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0595,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0596,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0597,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x0598,
L"EASYSHARE M1033 digital camera"
},
{
0x040a,
L"Kodak Co.",
0x0599,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059a,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059b,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059c,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059d,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059e,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x059f,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a0,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a1,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a2,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a3,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a4,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a5,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a6,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a7,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a8,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05a9,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05aa,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05ab,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05ac,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05ad,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05ae,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05af,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b0,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b1,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b2,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b3,
L"EasyShare Z710 Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b4,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b5,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b6,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b7,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b8,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05b9,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05ba,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05bb,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05bc,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05bd,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05be,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05bf,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c0,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c1,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c2,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c3,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c4,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c5,
L"Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05c8,
L"EASYSHARE Z1485 IS Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x05d3,
L"EasyShare M320 Camera"
},
{
0x040a,
L"Kodak Co.",
0x05d4,
L"EasyShare C180 Digital Camera"
},
{
0x040a,
L"Kodak Co.",
0x1001,
L"EasyShare SV811 Digital Picture Frame"
},
{
0x040a,
L"Kodak Co.",
0x4000,
L"InkJet Color Printer"
},
{
0x040a,
L"Kodak Co.",
0x4021,
L"Photo Printer 6800"
},
{
0x040a,
L"Kodak Co.",
0x4022,
L"1400 Digital Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x402b,
L"Photo Printer 6850"
},
{
0x040a,
L"Kodak Co.",
0x402e,
L"605 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x4034,
L"805 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x4035,
L"7000 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x4037,
L"7010 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x4038,
L"7015 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x404d,
L"8810 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x404f,
L"305 Photo Printer"
},
{
0x040a,
L"Kodak Co.",
0x4056,
L"ESP 7200 Series AiO"
},
{
0x040a,
L"Kodak Co.",
0x4109,
L"EasyShare Printer Dock Series 3"
},
{
0x040a,
L"Kodak Co.",
0x410d,
L"EasyShare G600 Printer Dock"
},
{
0x040a,
L"Kodak Co.",
0x5010,
L"Wireless Adapter"
},
{
0x040a,
L"Kodak Co.",
0x5012,
L"DBT-220 Bluetooth Adapter"
},
{
0x040a,
L"Kodak Co.",
0x6001,
L"i30"
},
{
0x040a,
L"Kodak Co.",
0x6002,
L"i40"
},
{
0x040a,
L"Kodak Co.",
0x6003,
L"i50"
},
{
0x040a,
L"Kodak Co.",
0x6004,
L"i60"
},
{
0x040a,
L"Kodak Co.",
0x6005,
L"i80"
},
{
0x040a,
L"Kodak Co.",
0x6029,
L"i900"
},
{
0x040a,
L"Kodak Co.",
0x602a,
L"i900"
},
{
0x040b,
L"Weltrend Semiconductor",
0x0a68,
L"Func MS-3 gaming mouse [WT6573F MCU]"
},
{
0x040b,
L"Weltrend Semiconductor",
0x2000,
L"wired Keyboard [Dynex DX-WRK1401]"
},
{
0x040b,
L"Weltrend Semiconductor",
0x2367,
L"Human Interface Device [HP CalcPad 200 Calculator and Numeric Keypad]"
},
{
0x040b,
L"Weltrend Semiconductor",
0x6510,
L"Weltrend Bar Code Reader"
},
{
0x040b,
L"Weltrend Semiconductor",
0x6520,
L"Xploder Xbox Memory Unit (8MB)"
},
{
0x040b,
L"Weltrend Semiconductor",
0x6533,
L"Speed-Link Competition Pro"
},
{
0x040b,
L"Weltrend Semiconductor",
0x6543,
L"Manhattan Magnetic Card Strip Reader"
},
{
0x040c,
L"VTech Computers, Ltd",
0x0,
L"0"
},
{
0x040d,
L"VIA Technologies, Inc.",
0x3184,
L"VNT VT6656 USB-802.11 Wireless LAN Adapter"
},
{
0x040d,
L"VIA Technologies, Inc.",
0x340f,
L"Audinst HUD-mx2"
},
{
0x040d,
L"VIA Technologies, Inc.",
0x6205,
L"USB 2.0 Card Reader"
},
{
0x040e,
L"MCCI",
0x0,
L"0"
},
{
0x040f,
L"Echo Speech Corp.",
0x0,
L"0"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0001,
L"LUA-TX Ethernet [pegasus]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0005,
L"LUA-TX Ethernet"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0006,
L"WLI-USB-L11 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0009,
L"LUA2-TX Ethernet"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x000b,
L"WLI-USB-L11G-WR Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x000d,
L"WLI-USB-L11G Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0012,
L"LUA-KTX Ethernet"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0013,
L"USB2-IDE Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0016,
L"WLI-USB-S11 802.11b Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0018,
L"USB2-IDE Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x001c,
L"USB-IDE Bridge: DUB-PxxG"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0027,
L"WLI-USB-KS11G 802.11b Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x002a,
L"SMSC USB97C202 HD-HB300V2-EU"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x003d,
L"LUA-U2-KTX Ethernet"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0044,
L"WLI-USB-KB11 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x004b,
L"WLI-USB-G54 802.11g Adapter [Broadcom 4320 USB]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x004d,
L"WLI-USB-B11 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0050,
L"WLI2-USB2-G54 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x005e,
L"WLI-U2-KG54-YB WLAN"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0065,
L"Python2 WDM Encoder"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0066,
L"WLI-U2-KG54 WLAN"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0067,
L"WLI-U2-KG54-AI WLAN"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x006e,
L"LUA-U2-GT 10/100/1000 Ethernet Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0089,
L"RUF-C/U2 Flash Drive"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x008b,
L"Nintendo Wi-Fi"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0091,
L"WLI-U2-KAMG54 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0092,
L"WLI-U2-KAMG54 Bootloader"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0097,
L"WLI-U2-KG54-BB"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00a9,
L"WLI-U2-AMG54HP Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00aa,
L"WLI-U2-AMG54HP Bootloader"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00b3,
L"PC-OP-RS1 RemoteStation"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00bc,
L"WLI-U2-KG125S 802.11g Adapter [Broadcom 4320 USB]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00ca,
L"802.11n Network Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00cb,
L"WLI-U2-G300N 802.11n Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00d8,
L"WLI-U2-SG54HP"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00d9,
L"WLI-U2-G54HP"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00da,
L"WLI-U2-KG54L 802.11bg [ZyDAS ZD1211B]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00db,
L"External Hard Drive HD-PF32OU2 [Buffalo Ministation]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00e8,
L"WLI-UC-G300N Wireless LAN Adapter [Ralink RT2870]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x00f9,
L"Portable DVD Writer (DVSM-PL58U2)"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0105,
L"External Hard Drive HD-CEU2 [Drive Station]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x012c,
L"SATA Bridge"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x012e,
L"WLI-UC-AG300N Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0148,
L"WLI-UC-G300HP Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0150,
L"WLP-UC-AG300 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0157,
L"External Hard Drive HD-PEU2"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x0158,
L"WLI-UC-GNHP Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x015d,
L"WLI-UC-GN Wireless LAN Adapter [Ralink RT3070]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x016f,
L"WLI-UC-G301N Wireless LAN Adapter [Ralink RT3072]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x017f,
L"Sony UWA-BR100 802.11abgn Wireless Adapter [Atheros AR7010+AR9280]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x019e,
L"WLI-UC-GNP Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01a1,
L"MiniStation Metro"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01a2,
L"WLI-UC-GNM Wireless LAN Adapter [Ralink RT8070]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01ba,
L"SATA Bridge"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01dc,
L"Ultra-Slim Portable DVD Writer (DVSM-PC58U2V)"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01de,
L"External Hard Drive HD-PCTU3 [Buffalo MiniStation]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01ea,
L"SATA Bridge"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01ee,
L"WLI-UC-GNM2 Wireless LAN Adapter [Ralink RT3070]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01f1,
L"SATA Adapter [HD-LBU3]"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x01fd,
L"WLI-UC-G450 Wireless LAN Adapter"
},
{
0x0411,
L"BUFFALO INC. (formerly MelCo., Inc.)",
0x027e,
L"HD-LCU3"
},
{
0x0412,
L"Award Software International",
0x0,
L"0"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1310,
L"WinFast TV - NTSC + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1311,
L"WinFast TV - NTSC + MTS + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1312,
L"WinFast TV - PAL BG + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1313,
L"WinFast TV - PAL BG+TXT + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1314,
L"WinFast TV Audio - PHP PAL I"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1315,
L"WinFast TV Audio - PHP PAL I+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1316,
L"WinFast TV Audio - PHP PAL DK"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1317,
L"WinFast TV Audio - PHP PAL DK+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1318,
L"WinFast TV - PAL I/DK + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1319,
L"WinFast TV - PAL N + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x131a,
L"WinFast TV Audio - PHP SECAM LL"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x131b,
L"WinFast TV Audio - PHP SECAM LL+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x131c,
L"WinFast TV Audio - PHP SECAM DK"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x131d,
L"WinFast TV - SECAM DK + TXT + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x131e,
L"WinFast TV - NTSC Japan + FM"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1320,
L"WinFast TV - NTSC"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1321,
L"WinFast TV - NTSC + MTS"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1322,
L"WinFast TV - PAL BG"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1323,
L"WinFast TV - PAL BG+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1324,
L"WinFast TV Audio - PHP PAL I"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1325,
L"WinFast TV Audio - PHP PAL I+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1326,
L"WinFast TV Audio - PHP PAL DK"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1327,
L"WinFast TV Audio - PHP PAL DK+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1328,
L"WinFast TV - PAL I/DK"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x1329,
L"WinFast TV - PAL N"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x132a,
L"WinFast TV Audio - PHP SECAM LL"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x132b,
L"WinFast TV Audio - PHP SECAM LL+TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x132c,
L"WinFast TV Audio - PHP SECAM DK"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x132d,
L"WinFast TV - SECAM DK + TXT"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x132e,
L"WinFast TV - NTSC Japan"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6023,
L"EMP Audio Device"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6024,
L"WinFast PalmTop/Novo TV Video"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6025,
L"WinFast DTV Dongle (cold state)"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6026,
L"WinFast DTV Dongle (warm state)"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6029,
L"WinFast DTV Dongle Gold"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6125,
L"WinFast DTV Dongle"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6126,
L"WinFast DTV Dongle BDA Driver"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6a03,
L"RTL2832 [WinFast DTV Dongle Mini]"
},
{
0x0413,
L"Leadtek Research, Inc.",
0x6f00,
L"WinFast DTV Dongle (STK7700P based)"
},
{
0x0414,
L"Giga-Byte Technology Co., Ltd",
0x0,
L"0"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x0035,
L"W89C35 802.11bg WLAN Adapter"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x0101,
L"Hub"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x0961,
L"AVL Flash Card Reader"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x3810,
L"Smart Card Controller"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x3811,
L"Generic Controller - Single interface"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x3812,
L"Smart Card Controller_2Interface"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x3813,
L"Panel Display"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x5011,
L"Virtual Com Port"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x5518,
L"4-Port Hub"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551a,
L"PC Sync Keypad"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551b,
L"PC Async Keypad"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551c,
L"Sync Tenkey"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551d,
L"Async Tenkey"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551e,
L"Keyboard"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x551f,
L"Keyboard w/ Sys and Media"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x5521,
L"Keyboard"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x6481,
L"16-bit Scanner"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x7721,
L"Memory Stick Reader/Writer"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x7722,
L"Memory Stick Reader/Writer"
},
{
0x0416,
L"Winbond Electronics Corp.",
0x7723,
L"SD Card Reader"
},
{
0x0416,
L"Winbond Electronics Corp.",
0xc141,
L"Barcode Scanner"
},
{
0x0417,
L"Symbios Logic",
0x0,
L"0"
},
{
0x0418,
L"AST Research",
0x0,
L"0"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x0001,
L"IrDA Remote Controller / Creative Cordless Mouse"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x0600,
L"Desktop Wireless 6000"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x2694,
L"Laila"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3001,
L"Xerox P1202 Laser Printer"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3003,
L"Olivetti PG L12L"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3201,
L"Docuprint P8ex"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3404,
L"SCX-5x12 series"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3406,
L"MFP 830 series"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3407,
L"ML-912"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3601,
L"InkJet Color Printer"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x3602,
L"InkJet Color Printer"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x4602,
L"Remote NDIS Network Device"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x8001,
L"Hub"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0x8002,
L"SyncMaster HID Monitor Control"
},
{
0x0419,
L"Samsung Info. Systems America, Inc.",
0xaa03,
L"SDAS-3 MP3 Player"
},
{
0x041a,
L"Phoenix Technologies, Ltd",
0x0,
L"0"
},
{
0x041b,
L"d'TV",
0x0,
L"0"
},
{
0x041d,
L"S3, Inc.",
0x0,
L"0"
},
{
0x041e,
L"Creative Technology, Ltd",
0x0414,
L"HS-720 Headset"
},
{
0x041e,
L"Creative Technology, Ltd",
0x1002,
L"Nomad II"
},
{
0x041e,
L"Creative Technology, Ltd",
0x1003,
L"Blaster GamePad Cobra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x1050,
L"GamePad Cobra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x1053,
L"Mouse Gamer HD7600L"
},
{
0x041e,
L"Creative Technology, Ltd",
0x200c,
L"MuVo V100"
},
{
0x041e,
L"Creative Technology, Ltd",
0x2020,
L"Zen X-Fi 2"
},
{
0x041e,
L"Creative Technology, Ltd",
0x2029,
L"ZiiO"
},
{
0x041e,
L"Creative Technology, Ltd",
0x2801,
L"Prodikeys PC-MIDI multifunction keyboard"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3000,
L"SoundBlaster Extigy"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3002,
L"SB External Composite Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3010,
L"SoundBlaster MP3+"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3014,
L"SB External Composite Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3015,
L"Sound Blaster Digital Music LX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3020,
L"SoundBlaster Audigy 2 NX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3030,
L"SB External Composite Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3040,
L"SoundBlaster Live! 24-bit External SB0490"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3060,
L"Sound Blaster Audigy 2 ZS External"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3061,
L"SoundBlaster Audigy 2 ZS Video Editor"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3090,
L"Sound Blaster Digital Music SX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x30d0,
L"Xmod"
},
{
0x041e,
L"Creative Technology, Ltd",
0x30d3,
L"Sound Blaster Play!"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3100,
L"IR Receiver (SB0540)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3121,
L"WoW tap chat"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3220,
L"Sound Blaster Tactic(3D) Sigma sound card"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3232,
L"Sound Blaster Premium HD [SBX]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3237,
L"SB X-Fi Surround 5.1 Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3f00,
L"E-Mu Xboard 25 MIDI Controller"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3f02,
L"E-Mu 0202"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3f04,
L"E-Mu 0404"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3f07,
L"E-Mu Xmidi 1x1"
},
{
0x041e,
L"Creative Technology, Ltd",
0x3f0e,
L"Xmidi 1x1 Tab"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4003,
L"VideoBlaster Webcam Go Plus [W9967CF]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4004,
L"Nomad II MG"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4005,
L"Webcam Blaster Go ES"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4007,
L"Go Mini"
},
{
0x041e,
L"Creative Technology, Ltd",
0x400a,
L"PC-Cam 300"
},
{
0x041e,
L"Creative Technology, Ltd",
0x400b,
L"PC-Cam 600"
},
{
0x041e,
L"Creative Technology, Ltd",
0x400c,
L"Webcam 5 [pwc]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x400d,
L"Webcam PD1001"
},
{
0x041e,
L"Creative Technology, Ltd",
0x400f,
L"PC-CAM 550 (Composite)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4011,
L"Webcam PRO eX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4012,
L"PC-CAM350"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4013,
L"PC-Cam 750"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4015,
L"CardCam Value"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4016,
L"CardCam"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4017,
L"Webcam Mobile [PD1090]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4018,
L"Webcam Vista [PD1100]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4019,
L"Audio Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0x401a,
L"Webcam Vista [PD1100]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x401c,
L"Webcam NX [PD1110]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x401d,
L"Webcam NX Ultra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x401e,
L"Webcam NX Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x401f,
L"Webcam Notebook [PD1171]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4020,
L"Webcam NX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4021,
L"Webcam NX Ultra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4022,
L"Webcam NX Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4028,
L"Vista Plus cam [VF0090]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4029,
L"Webcam Live!"
},
{
0x041e,
L"Creative Technology, Ltd",
0x402f,
L"DC-CAM 3000Z"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4034,
L"Webcam Instant"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4035,
L"Webcam Instant"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4036,
L"Webcam Live!/Live! Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4037,
L"Webcam Live!"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4038,
L"ORITE CCD Webcam [PC370R]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4039,
L"Webcam Live! Effects"
},
{
0x041e,
L"Creative Technology, Ltd",
0x403a,
L"Webcam NX Pro 2"
},
{
0x041e,
L"Creative Technology, Ltd",
0x403b,
L"Creative Webcam Vista [VF0010]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x403c,
L"Webcam Live! Ultra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x403d,
L"Webcam Notebook Ultra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x403e,
L"Webcam Vista Plus"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4041,
L"Webcam Live! Motion"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4043,
L"Vibra Plus Webcam"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4045,
L"Live! Cam Voice"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4049,
L"Live! Cam Voice"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4051,
L"Live! Cam Notebook Pro [VF0250]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4052,
L"Live! Cam Vista IM"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4053,
L"Live! Cam Video IM"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4054,
L"Live! Cam Video IM"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4055,
L"Live! Cam Video IM Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4056,
L"Live! Cam Video IM Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4057,
L"Live! Cam Optia"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4058,
L"Live! Cam Optia AF"
},
{
0x041e,
L"Creative Technology, Ltd",
0x405f,
L"WebCam Vista (VF0330)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4061,
L"Live! Cam Notebook Pro [VF0400]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4063,
L"Live! Cam Video IM Pro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4068,
L"Live! Cam Notebook [VF0470]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x406c,
L"Live! Cam Sync [VF0520]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4083,
L"Live! Cam Socialize [VF0640]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4087,
L"Live! Cam Socialize HD 1080 [VF0680]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4088,
L"Live! Cam Chat HD [VF0700]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4095,
L"Live! Cam Sync HD [VF0770]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4097,
L"Live! Cam Chat HD [VF0700]"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4100,
L"Nomad Jukebox 2"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4101,
L"Nomad Jukebox 3"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4102,
L"NOMAD MuVo^2"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4106,
L"Nomad MuVo"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4107,
L"NOMAD MuVo"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4108,
L"Nomad Jukebox Zen"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4109,
L"Nomad Jukebox Zen NX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x410b,
L"Nomad Jukebox Zen USB 2.0"
},
{
0x041e,
L"Creative Technology, Ltd",
0x410c,
L"Nomad MuVo NX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x410f,
L"NOMAD MuVo^2 (Flash)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4110,
L"Nomad Jukebox Zen Xtra"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4111,
L"Dell Digital Jukebox"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4116,
L"MuVo^2"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4117,
L"Nomad MuVo TX"
},
{
0x041e,
L"Creative Technology, Ltd",
0x411b,
L"Zen Touch"
},
{
0x041e,
L"Creative Technology, Ltd",
0x411c,
L"Nomad MuVo USB 2.0"
},
{
0x041e,
L"Creative Technology, Ltd",
0x411d,
L"Zen"
},
{
0x041e,
L"Creative Technology, Ltd",
0x411e,
L"Zen Micro"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4120,
L"Nomad MuVo TX FM"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4123,
L"Zen Portable Media Center"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4124,
L"MuVo^2 FM (uHDD)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4126,
L"Dell DJ (2nd gen)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4127,
L"Dell DJ"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4128,
L"NOMAD Jukebox Zen Xtra (mtp)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x412b,
L"MuVo N200 with FM radio"
},
{
0x041e,
L"Creative Technology, Ltd",
0x412f,
L"Dell Digital Jukebox 2.Gen"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4130,
L"Zen Micro (mtp)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4131,
L"DAP-HD0014 [Zen Touch] (MTP)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4133,
L"Mass Storage Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4134,
L"Zen Neeon"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4136,
L"Zen Sleek"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4137,
L"Zen Sleek (mtp)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4139,
L"Zen Nano Plus"
},
{
0x041e,
L"Creative Technology, Ltd",
0x413c,
L"Zen MicroPhoto"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4150,
L"Zen V (MTP)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4151,
L"Zen Vision:M (mtp)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4152,
L"Zen V Plus"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4153,
L"Zen Vision W"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4154,
L"Zen Stone"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4155,
L"Zen Stone plus"
},
{
0x041e,
L"Creative Technology, Ltd",
0x4157,
L"Zen (MTP)"
},
{
0x041e,
L"Creative Technology, Ltd",
0x500f,
L"Broadband Blaster 8012U-V"
},
{
0x041e,
L"Creative Technology, Ltd",
0x5015,
L"TECOM Bluetooth Device"
},
{
0x041e,
L"Creative Technology, Ltd",
0xffff,
L"Webcam Live! Ultra"
},
{
0x041f,
L"LCS Telegraphics",
0x0,
L"0"
},
{
0x0420,
L"Chips and Technologies",
0x1307,
L"Celly SIM Card Reader"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0001,
L"E61i (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0018,
L"6288 GSM Smartphone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0019,
L"6288 GSM Smartphone (imaging mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x001a,
L"6288 GSM Smartphone (file transfer mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0024,
L"5610 XpressMusic (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0025,
L"5610 XpressMusic (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0028,
L"5610 XpressMusic (Imaging mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x002d,
L"6120 Phone (Mass storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x002e,
L"6120 Phone (Media-Player mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x002f,
L"6120 Phone (PC-Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0042,
L"E51 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0064,
L"3109c GSM Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x006b,
L"5310 Xpress Music (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x006c,
L"5310 Xpress music (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x006d,
L"N95 (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x006e,
L"N95 (Multimedia mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x006f,
L"N95 (Printing mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0070,
L"N95 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0096,
L"N810 Internet Tablet"
},
{
0x0421,
L"Nokia Mobile Phones",
0x00aa,
L"E71 (Mass storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x00ab,
L"E71 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x00e4,
L"E71 (Media transfer mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0103,
L"ADL Flashing Engine AVALON Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0104,
L"ADL Re-Flashing Engine Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0105,
L"Nokia Firmware Upgrade Mode"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0106,
L"ROM Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x010d,
L"E75 (Storage Mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x010e,
L"E75 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x010f,
L"E75 (Media transfer mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0110,
L"E75 (Imaging Mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0154,
L"5800 XpressMusic (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0155,
L"5800 XpressMusic (Multimedia mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0156,
L"5800 XpressMusic (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0157,
L"5800 XpressMusic (Imaging mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0199,
L"6700 Classic (msc)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x019a,
L"6700 Classic (PC Suite)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x019b,
L"6700 Classic (mtp)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x01b0,
L"6303 classic Phone (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x01b1,
L"6303 classic Phone (Mass storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x01b2,
L"6303 classic Phone (Printing and media mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x01c7,
L"N900 (Storage Mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x01c8,
L"N900 (PC-Suite Mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0228,
L"5530 XpressMusic"
},
{
0x0421,
L"Nokia Mobile Phones",
0x023a,
L"6730 Classic"
},
{
0x0421,
L"Nokia Mobile Phones",
0x026a,
L"N97 (mass storage)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x026b,
L"N97 (Multimedia)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x026c,
L"N97 (PC Suite)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x026d,
L"N97 (Pictures)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0295,
L"660i/6600i Slide Phone (Mass Storage)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0297,
L"660i/6600i Slide Phone (Still Image)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x02e1,
L"5230 (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x02e2,
L"5230 (Multimedia mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x02e3,
L"5230 (PC-Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x02e4,
L"5230 (Imaging mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0360,
L"C1-01 Ovi Suite Mode"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0396,
L"C7-00 (Modem mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03a4,
L"C5 (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03c0,
L"C7-00 (Mass storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03c1,
L"C7-00 (Media transfer mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03c2,
L"Sim"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03cd,
L"C7-00 (Nokia Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x03d1,
L"N950"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0400,
L"7600 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0401,
L"6650 GSM Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0402,
L"6255 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0404,
L"5510"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0405,
L"9500 GSM Communicator"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0407,
L"Music Player HDR-1(tm)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x040b,
L"N-Gage GSM Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x040d,
L"6620 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x040e,
L"6651 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x040f,
L"6230 GSM Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0410,
L"6630 Imaging Smartphone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0411,
L"7610 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0413,
L"6260 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0414,
L"7370"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0415,
L"9300 GSM Smartphone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0416,
L"6170 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0417,
L"7270 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0418,
L"E70 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0419,
L"E60 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041a,
L"9500 GSM Communicator (RNDIS)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041b,
L"9300 GSM Smartphone (RNDIS)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041c,
L"7710 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041d,
L"6670 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041e,
L"6680"
},
{
0x0421,
L"Nokia Mobile Phones",
0x041f,
L"6235 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0421,
L"3230 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0422,
L"6681 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0423,
L"6682 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0428,
L"6230i Modem"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0429,
L"6230i MultiMedia Card"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0431,
L"770 Internet Tablet"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0432,
L"N90 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0435,
L"E70 (IP Passthrough/RNDIS mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0436,
L"E60 (IP Passthrough/RNDIS mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0437,
L"6265 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x043a,
L"N70 USB Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x043b,
L"3155 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x043c,
L"6155 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x043d,
L"6270 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0443,
L"N70 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0444,
L"N91"
},
{
0x0421,
L"Nokia Mobile Phones",
0x044c,
L"NM850iG Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x044d,
L"E61 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x044e,
L"E61 (Data Exchange mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x044f,
L"E61 (IP Passthrough/RNDIS mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0453,
L"9300 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0456,
L"6111 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0457,
L"6111 Phone (Printing mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x045a,
L"6280 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x045d,
L"6282 Phone Parent"
},
{
0x0421,
L"Nokia Mobile Phones",
0x046e,
L"6110 Navigator"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0471,
L"6110 Navigator"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0485,
L"MTP Device"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04b9,
L"5300"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04bc,
L"5200 (Nokia mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04bd,
L"5200 (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04be,
L"5200 (MTP mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04c3,
L"N800 Internet Tablet"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04ce,
L"E90 Communicator (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04cf,
L"E90 Communicator (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04f0,
L"Nokia N95 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x04f9,
L"6300 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0508,
L"E65 (PC Suite mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0509,
L"E65 (Storage mode)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0518,
L"N9 Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x054d,
L"C2-01"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0600,
L"Digital Pen SU-1B"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0610,
L"CS-15 (Internet Stick 3G modem)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0661,
L"Lumia 620/920"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0662,
L"301 Dual SIM (Mass Storage)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0663,
L"301 Dual SIM"
},
{
0x0421,
L"Nokia Mobile Phones",
0x069a,
L"130 [RM-1035] (Charging only)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x06fc,
L"Lumia 640 Phone"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0720,
L"X (RM-980)"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0800,
L"Connectivity Cable DKU-5"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0801,
L"Data Cable DKU-6"
},
{
0x0421,
L"Nokia Mobile Phones",
0x0802,
L"CA-42 Phone Parent"
},
{
0x0422,
L"ADI Systems, Inc.",
0x0,
L"0"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x000a,
L"NetMate Ethernet"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x000c,
L"NetMate2 Ethernet"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x000d,
L"USB Chief Analyzer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x0100,
L"Generic Universal Protocol Analyzer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x0101,
L"UPA USBTracer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x0200,
L"Generic 10K Universal Protocol Analyzer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x020a,
L"PETracer ML"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x0300,
L"Generic Universal Protocol Analyzer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x0301,
L"2500H Tracer Trainer"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x030a,
L"PETracer x1"
},
{
0x0423,
L"Computer Access Technology Corp.",
0x1237,
L"Andromeda Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x0001,
L"Integrated Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x0140,
L"LPC47M14x hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x0acd,
L"Sitecom Internal Multi Memory reader/writer MD-005"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x0fdc,
L"Floppy"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x10cd,
L"Sitecom Internal Multi Memory reader/writer MD-005"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2020,
L"USB Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x20cd,
L"Sitecom Internal Multi Memory reader/writer MD-005"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x20fc,
L"6-in-1 Card Reader"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2134,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2228,
L"9-in-2 Card Reader"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x223a,
L"8-in-1 Card Reader"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2503,
L"USB 2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2507,
L"hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2512,
L"USB 2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2513,
L"2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2514,
L"USB 2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2517,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2524,
L"USB MultiSwitch Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2602,
L"USB 2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2640,
L"USB 2.0 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2660,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2744,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x274d,
L"HTC Hub Controller"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x2807,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x3fcc,
L"RME MADIface"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4041,
L"Hub and media card controller"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4060,
L"Ultra Fast Media Reader"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4064,
L"Ultra Fast Media Reader"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4712,
L"USB4712 high-speed hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4713,
L"USB4715 high-speed hub (2 ports disabled)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4714,
L"USB4715 high-speed hub (1 port disabled)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4715,
L"USB4715 high-speed hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4910,
L"USB491x hub integrated functions (primary)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4912,
L"USB4912 high-speed hub (1 port disabled)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4914,
L"USB4914 high-speed hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4916,
L"USB4916 high-speed hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4920,
L"USB491x hub integrated functions (secondary)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4925,
L"USB4925 high-speed hub (primary upstream)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4927,
L"USB4927 high-speed hub (primary upstream)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4931,
L"USB4925/4927 high-speed hub (secondary upstream)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4940,
L"USB47xx/49xx hub integrated WinUSB"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4942,
L"USB47xx/49xx hub integrated I2S audio port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4943,
L"USB47xx/49xx hub integrated I2S audio + HID port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4944,
L"USB47xx/49xx hub integrated serial port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4946,
L"USB47xx/49xx hub integrated serial + I2S audio port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x4947,
L"USB47xx/49xx hub integrated serial + I2S audio + HID port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x494a,
L"USB47xx/49xx hub integrated WinUSB + I2S audio port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x494b,
L"USB47xx/49xx hub integrated WinUSB + I2S audio + HID port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x494c,
L"USB47xx/49xx hub integrated WinUSB + serial port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x494e,
L"USB47xx/49xx hub integrated WinUSB + serial + I2S audio port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x494f,
L"USB47xx/49xx hub integrated WinUSB + serial + I2S audio + HID port"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x5434,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x5534,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x5744,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x5807,
L"Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x7500,
L"LAN7500 Ethernet 10/100/1000 Adapter"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x9500,
L"LAN9500/LAN9500i"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x9512,
L"SMC9512/9514 USB Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x9514,
L"SMC9514 Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x9904,
L"LAN9512/LAN9514 Ethernet 10/100 Adapter (SAL10)"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0x9e00,
L"LAN9500A/LAN9500Ai"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0xa700,
L"2 Port Hub"
},
{
0x0424,
L"Microchip Technology, Inc. (formerly SMSC)",
0xec00,
L"SMSC9512/9514 Fast Ethernet Adapter"
},
{
0x0425,
L"Motorola Semiconductors HK, Ltd",
0x0101,
L"G-Tech Wireless Mouse & Keyboard"
},
{
0x0425,
L"Motorola Semiconductors HK, Ltd",
0xf102,
L"G-Tech U+P Wireless Mouse"
},
{
0x0426,
L"Integrated Device Technology, Inc.",
0x0426,
L"WDM Driver"
},
{
0x0427,
L"Motorola Electronics Taiwan, Ltd",
0x0,
L"0"
},
{
0x0428,
L"Advanced Gravis Computer Tech, Ltd",
0x4001,
L"GamePad Pro"
},
{
0x0429,
L"Cirrus Logic",
0x0,
L"0"
},
{
0x042a,
L"Ericsson Austrian, AG",
0x0,
L"0"
},
{
0x042b,
L"Intel Corp.",
0x9316,
L"8x931Hx Customer Hub"
},
{
0x042c,
L"Innovative Semiconductors, Inc.",
0x0,
L"0"
},
{
0x042d,
L"Micronics",
0x0,
L"0"
},
{
0x042e,
L"Acer, Inc.",
0x0380,
L"MP3 Player"
},
{
0x042f,
L"Molex, Inc.",
0x0,
L"0"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0002,
L"109 Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0005,
L"Type 6 Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x000a,
L"109 Japanese Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x000b,
L"109 Japanese Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0082,
L"109 Japanese Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0083,
L"109 Japanese Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x00a2,
L"Type 7 Keyboard"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0100,
L"3-button Mouse"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x0502,
L"Panasonic CF-19 HID Touch Panel"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x100e,
L"24.1 LCD Monitor v4 / FID-638 Mouse"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0x36ba,
L"Bus Powered Hub"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa101,
L"remote key/mouse for P3 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa102,
L"remote key/mouse/storage for P3 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa103,
L"remote storage for P3 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa111,
L"remote keyboard for P4 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa112,
L"remote mouse for P4 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa113,
L"remote storage for P4 chip"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xa4a2,
L"Ethernet (RNDIS and CDC ethernet)"
},
{
0x0430,
L"Sun Microsystems, Inc.",
0xcdab,
L"Raritan KVM dongle"
},
{
0x0431,
L"Itac Systems, Inc.",
0x0100,
L"Mouse-Trak 3-button Track Ball"
},
{
0x0432,
L"Unisys Corp.",
0x0031,
L"Document Processor"
},
{
0x0433,
L"Alps Electric, Inc.",
0x1101,
L"IBM Game Controller"
},
{
0x0433,
L"Alps Electric, Inc.",
0xabab,
L"Keyboard"
},
{
0x0434,
L"Samsung Info. Systems America, Inc.",
0x0,
L"0"
},
{
0x0435,
L"Hyundai Electronics America",
0x0,
L"0"
},
{
0x0436,
L"Taugagreining HF",
0x0005,
L"CameraMate (DPCM_USB)"
},
{
0x0437,
L"Framatome Connectors USA",
0x0,
L"0"
},
{
0x0438,
L"Advanced Micro Devices, Inc.",
0x7900,
L"Root Hub"
},
{
0x0439,
L"Voice Technologies Group",
0x0,
L"0"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0001,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0002,
L"Optra E310 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0003,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0004,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0005,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0006,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0007,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0008,
L"Inkjet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0009,
L"Optra S2450 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000a,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000b,
L"Inkjet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000c,
L"Optra E312 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000d,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000e,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x000f,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0010,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0011,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0012,
L"Inkjet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0013,
L"Inkjet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0014,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0015,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0016,
L"Z12 Color Jetprinter"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0017,
L"Z32 printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0018,
L"Z52 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0019,
L"Forms Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001a,
L"Z65 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001b,
L"InkJet Photo Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001c,
L"Kodak Personal Picture Maker 200 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001d,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001e,
L"InkJet Photo Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x001f,
L"Kodak Personal Picture Maker 200 Card Reader"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0020,
L"Z51 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0021,
L"Z33 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0022,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0023,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0024,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0025,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0026,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0027,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0028,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0029,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002a,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002b,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002c,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002d,
L"X70/X73 Scan/Print/Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002e,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x002f,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0030,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0031,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0032,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0033,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0034,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0035,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0036,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0037,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0038,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0039,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003a,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003b,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003c,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003d,
L"X83 Scan/Print/Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003e,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x003f,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0040,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0041,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0042,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0043,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0044,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0045,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0046,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0047,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0048,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0049,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004a,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004b,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004c,
L"Scan Print Copy"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004d,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004e,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x004f,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0050,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0051,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0052,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0053,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0054,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0057,
L"Z35 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0058,
L"Laser Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x005a,
L"X63"
},
{
0x043d,
L"Lexmark International, Inc.",
0x005c,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0060,
L"X74/X75 Scanner"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0061,
L"X74 Hub"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0065,
L"X5130"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0069,
L"X74/X75 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x006d,
L"X125"
},
{
0x043d,
L"Lexmark International, Inc.",
0x006e,
L"C510"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0072,
L"X6170 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0073,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0078,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0079,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x007a,
L"Generic Hub"
},
{
0x043d,
L"Lexmark International, Inc.",
0x007b,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x007c,
L"X1110/X1130/X1140/X1150/X1170/X1180/X1185"
},
{
0x043d,
L"Lexmark International, Inc.",
0x007d,
L"Photo 3150"
},
{
0x043d,
L"Lexmark International, Inc.",
0x008a,
L"4200 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x008b,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x008c,
L"to CF/SM/SD/MS Card Reader"
},
{
0x043d,
L"Lexmark International, Inc.",
0x008e,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x008f,
L"X422"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0091,
L"Laser Printer E232"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0093,
L"X5250"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0095,
L"E220 Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0096,
L"2200 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0097,
L"P6250"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0098,
L"7100 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x009e,
L"P910 series Human Interface Device"
},
{
0x043d,
L"Lexmark International, Inc.",
0x009f,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00a9,
L"IBM Infoprint 1410 MFP"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00ab,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00b2,
L"3300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00b8,
L"7300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00b9,
L"8300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00ba,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00bb,
L"2300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00bd,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00be,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00bf,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00c0,
L"6300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00c1,
L"4300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00c7,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00c8,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00c9,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00cb,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00cc,
L"E120(n)"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00d0,
L"9300 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00d3,
L"X340 Scanner"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00d4,
L"X342n Scanner"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00d5,
L"Printing Support"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00d6,
L"X340 Scanner"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00e8,
L"X642e"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00e9,
L"2400 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00f6,
L"3400 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00f7,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x00ff,
L"InkJet Color Printer"
},
{
0x043d,
L"Lexmark International, Inc.",
0x010b,
L"2500 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x010d,
L"3500-4500 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x010f,
L"6500 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x0142,
L"X3650 (Printer, Scanner, Copier)"
},
{
0x043d,
L"Lexmark International, Inc.",
0x01fa,
L"S310 series"
},
{
0x043d,
L"Lexmark International, Inc.",
0x4303,
L"Xerox WorkCentre Pro 412"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x3001,
L"AN-WF100 802.11abgn Wireless Adapter [Broadcom BCM4323]"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x3004,
L"TWFM-B003D 802.11abgn Wireless Module [Broadcom BCM43236B]"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x3009,
L"VC400"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x3101,
L"AN-WF500 802.11abgn + BT Wireless Adapter [Broadcom BCM43242]"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x42bd,
L"Flatron 795FT Plus Monitor"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x4a4d,
L"Flatron 915FT Plus Monitor"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x7001,
L"MF-PD100 Soul Digital MP3 Player"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x7013,
L"MP3 Player"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x70d7,
L"Mouse Scanner LSM-150 [LG Smart Scan Mouse]"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x70f5,
L"External HDD"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x8484,
L"LPC-U30 Webcam II"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x8585,
L"LPC-UC35 Webcam"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x8888,
L"Electronics VCS Camera II(LPC-U20)"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x9800,
L"Remote Control Receiver_iMON"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x9803,
L"eHome Infrared Receiver"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x9804,
L"DMB Receiver Control"
},
{
0x043e,
L"LG Electronics USA, Inc.",
0x9c01,
L"LGE Sync"
},
{
0x043f,
L"RadiSys Corp.",
0x0,
L"0"
},
{
0x0440,
L"Eizo Nanao Corp.",
0x0,
L"0"
},
{
0x0441,
L"Winbond Systems Lab.",
0x1456,
L"Hub"
},
{
0x0442,
L"Ericsson, Inc.",
0xabba,
L"Bluetooth Device"
},
{
0x0443,
L"Gateway, Inc.",
0x000e,
L"Multimedia Keyboard"
},
{
0x0443,
L"Gateway, Inc.",
0x002e,
L"Millennium Keyboard"
},
{
0x0445,
L"Lucent Technologies, Inc.",
0x0,
L"0"
},
{
0x0446,
L"NMB Technologies Corp.",
0x6781,
L"Keyboard with PS/2 Mouse Port"
},
{
0x0446,
L"NMB Technologies Corp.",
0x6782,
L"Keyboard"
},
{
0x0447,
L"Momentum Microsystems",
0x0,
L"0"
},
{
0x0449,
L"Duta Multi Robotik",
0x0128,
L"Menengah"
},
{
0x0449,
L"Duta Multi Robotik",
0x0210,
L"Dasar"
},
{
0x0449,
L"Duta Multi Robotik",
0x0612,
L"Lanjutan"
},
{
0x044a,
L"Shamrock Tech. Co., Ltd",
0x0,
L"0"
},
{
0x044b,
L"WSI",
0x0,
L"0"
},
{
0x044c,
L"CCL/ITRI",
0x0,
L"0"
},
{
0x044d,
L"Siemens Nixdorf AG",
0x0,
L"0"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x1104,
L"Japanese Keyboard"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x2002,
L"MD-5500 Printer"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x2014,
L"Bluetooth Device"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3001,
L"UGTZ4 Bluetooth"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3002,
L"Bluetooth Device"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3003,
L"Bluetooth Device"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3004,
L"Bluetooth Adapter"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3005,
L"Integrated Bluetooth Device"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3006,
L"Bluetooth Adapter"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3007,
L"Bluetooth Controller (ALPS/UGX)"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x300c,
L"Bluetooth Controller (ALPS/UGPZ6)"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x300d,
L"Bluetooth Controller (ALPS/UGPZ6)"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3010,
L"Bluetooth Adapter"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0x3017,
L"BCM2046 Bluetooth Device"
},
{
0x044e,
L"Alps Electric Co., Ltd",
0xffff,
L"Compaq Bluetooth Multiport Module"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0400,
L"HOTAS Cougar"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0402,
L"HOTAS Warthog Joystick"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0404,
L"HOTAS Warthog Throttle"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x044f,
L"GP XID"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0f00,
L"Steering Wheel for Xbox"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0f03,
L"Steering Wheel for Xbox"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0f07,
L"Controller for Xbox"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0f0c,
L"Xbox Memory Unit (8MB)"
},
{
0x044f,
L"ThrustMaster, Inc.",
0x0f10,
L"Modena GT Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa003,
L"Rage 3D Game Pad"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa01b,
L"PK-GP301 Driving Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa0a0,
L"Top Gun Joystick"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa0a1,
L"Top Gun Joystick (rev2)"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa0a3,
L"Fusion Digital GamePad"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xa201,
L"PK-GP201 PlayStick"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb108,
L"T-Flight Hotas X Flight Stick"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb10a,
L"T.16000M Joystick"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb203,
L"360 Modena Pro Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb300,
L"Firestorm Dual Power"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb303,
L"FireStorm Dual Analog 2"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb304,
L"Firestorm Dual Power"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb307,
L"vibrating Upad"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb30b,
L"Wireless VibrationPad"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb315,
L"Firestorm Dual Analog 3"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb323,
L"Dual Trigger 3-in-1 (PC Mode)"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb324,
L"Dual Trigger 3-in-1 (PS3 Mode)"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb326,
L"Gamepad GP XID"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb351,
L"F16 MFD 1"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb352,
L"F16 MFD 2"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb365,
L"UbiSoft UbiConnect"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb603,
L"force feedback Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb605,
L"force feedback Racing Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb651,
L"Ferrari GT Rumble Force Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb653,
L"RGT Force Feedback Clutch Racing Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb654,
L"Ferrari GT Force Feedback Wheel"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb678,
L"T.Flight Rudder Pedals"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb679,
L"T-Rudder"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb687,
L"TWCS Throttle"
},
{
0x044f,
L"ThrustMaster, Inc.",
0xb700,
L"Tacticalboard"
},
{
0x0450,
L"DFI, Inc.",
0x0,
L"0"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x0422,
L"TUSB422 Port Controller with Power Delivery"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x1234,
L"Bluetooth Device"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x1428,
L"Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x1446,
L"TUSB2040/2070 Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x16a2,
L"CC Debugger"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x16a6,
L"BM-USBD1 BlueRobin RF heart rate sensor receiver"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x16a8,
L"CC2531 ZigBee"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x16ae,
L"CC2531 Dongle"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x2036,
L"TUSB2036 Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x2046,
L"TUSB2046 Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x2077,
L"TUSB2077 Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x2f90,
L"SM-USB-DIG"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x3410,
L"TUSB3410 Microcontroller"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x3f00,
L"OMAP1610"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x3f02,
L"SMC WSKP100 Wi-Fi Phone"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x505f,
L"TUSB5052 Serial"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x5153,
L"TUSB5052 Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x5409,
L"Frontier Labs NEX IA+ Digital Audio Player"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x6000,
L"AU5 ADSL Modem (pre-reenum)"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x6001,
L"AU5 ADSL Modem"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x6060,
L"RNDIS/BeWAN ADSL2+"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x6070,
L"RNDIS/BeWAN ADSL2+"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x625f,
L"TUSB6250 ATA Bridge"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x8041,
L"Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x8042,
L"Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x8043,
L"Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x8140,
L"TUSB8041 4-Port Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x8142,
L"TUSB8041 4-Port Hub"
},
{
0x0451,
L"Texas Instruments, Inc.",
0x926b,
L"TUSB9260 Boot Loader"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xbef3,
L"CC1352R1 Launchpad"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xdbc0,
L"Device Bay Controller"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe001,
L"GraphLink [SilverLink]"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe003,
L"TI-84 Plus Calculator"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe004,
L"TI-89 Titanium Calculator"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe008,
L"TI-84 Plus Silver Calculator"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe00e,
L"TI-89 Titanium Presentation Link"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe00f,
L"TI-84 Plus Presentation Link"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe010,
L"TI SmartPad Keyboard"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe011,
L"Nspire CAS+ prototype"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe012,
L"TI-Nspire Calculator"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe013,
L"Network Bridge"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe01c,
L"Data Collection Sled [Nspire Lab Cradle, Nspire Datatracker Cradle]"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe01e,
L"Nspire CX Navigator Access Point"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe01f,
L"Python Adapter (firmware install mode)"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe020,
L"Python Adapter"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xe022,
L"Nspire CX II"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xf430,
L"MSP-FET430UIF JTAG Tool"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xf432,
L"eZ430 Development Tool"
},
{
0x0451,
L"Texas Instruments, Inc.",
0xffff,
L"Bluetooth Device"
},
{
0x0452,
L"Mitsubishi Electronics America, Inc.",
0x0021,
L"HID Monitor Controls"
},
{
0x0452,
L"Mitsubishi Electronics America, Inc.",
0x0050,
L"Diamond Pro 900u CRT Monitor"
},
{
0x0452,
L"Mitsubishi Electronics America, Inc.",
0x0051,
L"Integrated Hub"
},
{
0x0452,
L"Mitsubishi Electronics America, Inc.",
0x0100,
L"Control Panel for Leica TCS SP5"
},
{
0x0453,
L"CMD Technology",
0x6781,
L"NMB Keyboard"
},
{
0x0453,
L"CMD Technology",
0x6783,
L"Chicony Composite Keyboard"
},
{
0x0454,
L"Vobis Microcomputer AG",
0x0,
L"0"
},
{
0x0455,
L"Telematics International, Inc.",
0x0,
L"0"
},
{
0x0456,
L"Analog Devices, Inc.",
0xf000,
L"FT2232 JTAG ICE [gnICE]"
},
{
0x0456,
L"Analog Devices, Inc.",
0xf001,
L"FT2232H Hi-Speed JTAG ICE [gnICE+]"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x0150,
L"Super Talent 1GB Flash Drive"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x0151,
L"Super Flash 1GB / GXT  64MB Flash Drive"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x0162,
L"SiS162 usb Wireless LAN Adapter"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x0163,
L"SiS163U 802.11 Wireless LAN Adapter"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x0817,
L"SiS-184-ASUS-4352.17 touch panel"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x10e1,
L"HID Touch Controller"
},
{
0x0457,
L"Silicon Integrated Systems Corp.",
0x5401,
L"Wireless Adapter RO80211GS-USB"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0001,
L"Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0002,
L"Genius NetMouse Pro"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0003,
L"Genius NetScroll+"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0006,
L"Easy Mouse+"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0007,
L"Trackbar Emotion"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x000b,
L"NetMouse Wheel(P+U)"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x000c,
L"TACOMA Fingerprint V1.06.01"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x000e,
L"Genius NetScroll Optical"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0013,
L"TACOMA Fingerprint Mouse V1.06.01"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x001a,
L"Genius WebScroll+"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x002e,
L"NetScroll + Traveler / NetScroll 110"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0036,
L"Pocket Mouse LE"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0039,
L"NetScroll+ Superior"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x003a,
L"NetScroll+ Mini Traveler / Genius NetScroll 120"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x004c,
L"Slimstar Pro Keyboard"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0056,
L"Ergo 300 Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0057,
L"Enhanced Gaming Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0059,
L"Enhanced Laser Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x005a,
L"Enhanced Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x005b,
L"Enhanced Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x005c,
L"Enhanced Laser Gaming Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x005d,
L"Enhanced Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0061,
L"Bluetooth Dongle"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0066,
L"Genius Traveler 1000 Wireless Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0072,
L"Navigator 335"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0083,
L"Bluetooth Dongle"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0087,
L"Ergo 525V Laser Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0089,
L"Genius Traveler 350"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x00ca,
L"Pen Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0100,
L"EasyPen Tablet"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0101,
L"CueCat"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x011b,
L"NetScroll T220"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x0186,
L"Genius DX-120 Mouse"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x1001,
L"Joystick"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x1002,
L"Game Pad"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x1003,
L"Genius VideoCam"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x1004,
L"Flight2000 F-23 Joystick"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x100a,
L"Aashima Technology Trust Sight Fighter Vibration Feedback Joystick"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2001,
L"ColorPage-Vivid Pro Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2004,
L"ColorPage-HR6 V1 Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2005,
L"ColorPage-HR6/Vivid3"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2007,
L"ColorPage-HR6 V2 Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2008,
L"ColorPage-HR6 V2 Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2009,
L"ColorPage-HR6A Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2011,
L"ColorPage-Vivid3x Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2012,
L"Plustek Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2013,
L"ColorPage-HR7 Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2014,
L"ColorPage-Vivid4"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2015,
L"ColorPage-HR7LE Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2016,
L"ColorPage-HR6X Scanner"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2017,
L"ColorPage-Vivid3xe"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2018,
L"ColorPage-HR7X"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2019,
L"ColorPage-HR6X Slim"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201a,
L"ColorPage-Vivid4xe"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201b,
L"ColorPage-Vivid4x"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201c,
L"ColorPage-HR8"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201d,
L"ColorPage-Vivid 1200 X"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201e,
L"ColorPage-Slim 1200"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x201f,
L"ColorPage-Vivid 1200 XE"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2020,
L"ColorPage-Slim 1200 USB2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x2021,
L"ColorPage-SF600"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x3017,
L"SPEED WHEEL 3 Vibration"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x3018,
L"Wireless 2.4Ghz Game Pad"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x3019,
L"10-Button USB Joystick with Vibration"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x301a,
L"MaxFire G-12U Vibration"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x301c,
L"Genius MaxFighter F-16U"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x301d,
L"Genius MaxFire MiniPad"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x400f,
L"Genius TVGo DVB-T02Q MCE"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x4012,
L"TVGo DVB-T03 [AF9015]"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x5003,
L"G-pen 560 Tablet"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x5004,
L"G-pen Tablet"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x5005,
L"Genius EasyPen M406"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x5012,
L"Genius EasyPen M406W"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x5014,
L"Genius EasyPen 340"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x505e,
L"Genius iSlim 330"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x6001,
L"GF3000F Ethernet Adapter"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7004,
L"VideoCAM Express V2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7006,
L"Dsc 1.3 Smart Camera Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7007,
L"VideoCAM Web"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7009,
L"G-Shot G312 Still Camera Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x700c,
L"VideoCAM Web V3"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x700d,
L"G-Shot G511 Composite Device"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x700f,
L"VideoCAM Web"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7012,
L"WebCAM USB2.0"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7014,
L"VideoCAM Live V3"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x701c,
L"G-Shot G512 Still Camera"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7020,
L"Sim 321C"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7025,
L"Eye 311Q Camera"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7029,
L"Genius Look 320s (SN9C201 + HV7131R)"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x702f,
L"Genius Slim 322"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7035,
L"i-Look 325T Camera"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7045,
L"Genius Look 1320 V2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x704c,
L"Genius i-Look 1321"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x704d,
L"Slim 1322AF"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7055,
L"Slim 2020AF camera"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x705a,
L"Asus USB2.0 Webcam"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x705c,
L"Genius iSlim 1300AF"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7061,
L"Genius iLook 1321 V2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7066,
L"Acer Crystal Eye Webcam"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7067,
L"Genius iSlim 1300AF V2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7068,
L"Genius eFace 1325R"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x706d,
L"Genius iSlim 2000AF V2"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7076,
L"Genius FaceCam 312"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7079,
L"FaceCam 2025R"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x707f,
L"TVGo DVB-T03 [RTL2832]"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7088,
L"WideCam 1050"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x7089,
L"Genius FaceCam 320"
},
{
0x0458,
L"KYE Systems Corp. (Mouse Systems)",
0x708c,
L"Genius WideCam F100"
},
{
0x0459,
L"Adobe Systems, Inc.",
0x0,
L"0"
},
{
0x045a,
L"SONICblue, Inc.",
0x07da,
L"Supra Express 56K modem"
},
{
0x045a,
L"SONICblue, Inc.",
0x0b4a,
L"SupraMax 2890 56K Modem [Lucent Atlas]"
},
{
0x045a,
L"SONICblue, Inc.",
0x0b68,
L"SupraMax 56K Modem"
},
{
0x045a,
L"SONICblue, Inc.",
0x5001,
L"Rio 600 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5002,
L"Rio 800 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5003,
L"Nike Psa/Play MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5005,
L"Rio S10 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5006,
L"Rio S50 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5007,
L"Rio S35 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5008,
L"Rio 900 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5009,
L"Rio S30 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x500d,
L"Fuse MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x500e,
L"Chiba MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x500f,
L"Cali MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5010,
L"Rio S11 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x501c,
L"Virgin MPF-1000"
},
{
0x045a,
L"SONICblue, Inc.",
0x501d,
L"Rio Fuse"
},
{
0x045a,
L"SONICblue, Inc.",
0x501e,
L"Rio Chiba"
},
{
0x045a,
L"SONICblue, Inc.",
0x501f,
L"Rio Cali"
},
{
0x045a,
L"SONICblue, Inc.",
0x503f,
L"Cali256 MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5202,
L"Rio Riot MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5210,
L"Rio Karma Music Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5220,
L"Rio Nitrus MP3 Player"
},
{
0x045a,
L"SONICblue, Inc.",
0x5221,
L"Rio Eigen"
},
{
0x045b,
L"Hitachi, Ltd",
0x0053,
L"RX610 RX-Stick"
},
{
0x045b,
L"Hitachi, Ltd",
0x0229,
L"mSATA Adapter [renkforce Pi-102]"
},
{
0x045d,
L"Nortel Networks, Ltd",
0x0,
L"0"
},
{
0x045e,
L"Microsoft Corp.",
0x0007,
L"SideWinder Game Pad"
},
{
0x045e,
L"Microsoft Corp.",
0x0008,
L"SideWinder Precision Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x0009,
L"IntelliMouse"
},
{
0x045e,
L"Microsoft Corp.",
0x000b,
L"Natural Keyboard Elite"
},
{
0x045e,
L"Microsoft Corp.",
0x000e,
L"SideWinder® Freestyle Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x0014,
L"Digital Sound System 80"
},
{
0x045e,
L"Microsoft Corp.",
0x001a,
L"SideWinder Precision Racing Wheel"
},
{
0x045e,
L"Microsoft Corp.",
0x001b,
L"SideWinder Force Feedback 2 Joystick"
},
{
0x045e,
L"Microsoft Corp.",
0x001c,
L"Internet Keyboard Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x001d,
L"Natural Keyboard Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x001e,
L"IntelliMouse Explorer"
},
{
0x045e,
L"Microsoft Corp.",
0x0023,
L"Trackball Optical"
},
{
0x045e,
L"Microsoft Corp.",
0x0024,
L"Trackball Explorer"
},
{
0x045e,
L"Microsoft Corp.",
0x0025,
L"IntelliEye Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x0026,
L"SideWinder GamePad Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x0027,
L"SideWinder PnP GamePad"
},
{
0x045e,
L"Microsoft Corp.",
0x0028,
L"SideWinder Dual Strike"
},
{
0x045e,
L"Microsoft Corp.",
0x0029,
L"IntelliMouse Optical"
},
{
0x045e,
L"Microsoft Corp.",
0x002b,
L"Internet Keyboard Pro"
},
{
0x045e,
L"Microsoft Corp.",
0x002d,
L"Internet Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x002f,
L"Integrated Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0033,
L"Sidewinder Strategic Commander"
},
{
0x045e,
L"Microsoft Corp.",
0x0034,
L"SideWinder Force Feedback Wheel"
},
{
0x045e,
L"Microsoft Corp.",
0x0038,
L"SideWinder Precision 2"
},
{
0x045e,
L"Microsoft Corp.",
0x0039,
L"IntelliMouse Optical"
},
{
0x045e,
L"Microsoft Corp.",
0x003b,
L"SideWinder Game Voice"
},
{
0x045e,
L"Microsoft Corp.",
0x003c,
L"SideWinder Joystick"
},
{
0x045e,
L"Microsoft Corp.",
0x0040,
L"Wheel Mouse Optical"
},
{
0x045e,
L"Microsoft Corp.",
0x0047,
L"IntelliMouse Explorer 3.0"
},
{
0x045e,
L"Microsoft Corp.",
0x0048,
L"Office Keyboard 1.0A"
},
{
0x045e,
L"Microsoft Corp.",
0x0053,
L"Optical Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x0059,
L"Wireless IntelliMouse Explorer"
},
{
0x045e,
L"Microsoft Corp.",
0x005c,
L"Office Keyboard (106/109)"
},
{
0x045e,
L"Microsoft Corp.",
0x005f,
L"Wireless MultiMedia Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x0061,
L"Wireless MultiMedia Keyboard (106/109)"
},
{
0x045e,
L"Microsoft Corp.",
0x0063,
L"Wireless Natural MultiMedia Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x0065,
L"Wireless Natural MultiMedia Keyboard (106/109)"
},
{
0x045e,
L"Microsoft Corp.",
0x006a,
L"Wireless Optical Mouse (IntelliPoint)"
},
{
0x045e,
L"Microsoft Corp.",
0x006d,
L"eHome Remote Control Keyboard keys"
},
{
0x045e,
L"Microsoft Corp.",
0x006e,
L"MN-510 802.11b Wireless Adapter [Intersil ISL3873B]"
},
{
0x045e,
L"Microsoft Corp.",
0x006f,
L"Smart Display Reference Device"
},
{
0x045e,
L"Microsoft Corp.",
0x0070,
L"Wireless MultiMedia Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x0071,
L"Wireless MultiMedia Keyboard (106/109)"
},
{
0x045e,
L"Microsoft Corp.",
0x0072,
L"Wireless Natural MultiMedia Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x0073,
L"Wireless Natural MultiMedia Keyboard (106/109)"
},
{
0x045e,
L"Microsoft Corp.",
0x0079,
L"IXI Ogo CT-17 handheld device"
},
{
0x045e,
L"Microsoft Corp.",
0x007a,
L"10/100 USB NIC"
},
{
0x045e,
L"Microsoft Corp.",
0x007d,
L"Notebook Optical Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x007e,
L"Wireless Transceiver for Bluetooth"
},
{
0x045e,
L"Microsoft Corp.",
0x0080,
L"Digital Media Pro Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x0083,
L"Basic Optical Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x0084,
L"Basic Optical Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x008a,
L"Wireless Optical Desktop Receiver 2.0A"
},
{
0x045e,
L"Microsoft Corp.",
0x008b,
L"Dual Receiver Wireless Mouse (IntelliPoint)"
},
{
0x045e,
L"Microsoft Corp.",
0x008c,
L"Wireless Intellimouse Explorer 2.0"
},
{
0x045e,
L"Microsoft Corp.",
0x0095,
L"IntelliMouse Explorer 4.0 (IntelliPoint)"
},
{
0x045e,
L"Microsoft Corp.",
0x009c,
L"Wireless Transceiver for Bluetooth 2.0"
},
{
0x045e,
L"Microsoft Corp.",
0x009d,
L"Wireless Optical Desktop 3.0"
},
{
0x045e,
L"Microsoft Corp.",
0x00a0,
L"eHome Infrared Receiver"
},
{
0x045e,
L"Microsoft Corp.",
0x00a4,
L"Compact Optical Mouse, model 1016"
},
{
0x045e,
L"Microsoft Corp.",
0x00b0,
L"Digital Media Pro Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x00b4,
L"Digital Media Keyboard 1.0A"
},
{
0x045e,
L"Microsoft Corp.",
0x00b9,
L"Wireless Optical Mouse 3.0"
},
{
0x045e,
L"Microsoft Corp.",
0x00bb,
L"Fingerprint Reader"
},
{
0x045e,
L"Microsoft Corp.",
0x00bc,
L"Fingerprint Reader"
},
{
0x045e,
L"Microsoft Corp.",
0x00bd,
L"Fingerprint Reader"
},
{
0x045e,
L"Microsoft Corp.",
0x00c2,
L"MN-710 802.11g Wireless Adapter [Intersil ISL3886]"
},
{
0x045e,
L"Microsoft Corp.",
0x00c9,
L"MTP Device"
},
{
0x045e,
L"Microsoft Corp.",
0x00ca,
L"Fingerprint Reader"
},
{
0x045e,
L"Microsoft Corp.",
0x00cb,
L"Basic Optical Mouse v2.0"
},
{
0x045e,
L"Microsoft Corp.",
0x00ce,
L"Generic PPC Flash device"
},
{
0x045e,
L"Microsoft Corp.",
0x00d1,
L"Optical Mouse with Tilt Wheel"
},
{
0x045e,
L"Microsoft Corp.",
0x00d2,
L"Notebook Optical Mouse with Tilt Wheel"
},
{
0x045e,
L"Microsoft Corp.",
0x00da,
L"eHome Infrared Receiver"
},
{
0x045e,
L"Microsoft Corp.",
0x00db,
L"Natural Ergonomic Keyboard 4000 V1.0"
},
{
0x045e,
L"Microsoft Corp.",
0x00dd,
L"Comfort Curve Keyboard 2000 V1.0"
},
{
0x045e,
L"Microsoft Corp.",
0x00e1,
L"Wireless Laser Mouse 6000 Receiver"
},
{
0x045e,
L"Microsoft Corp.",
0x00f4,
L"LifeCam VX-6000 (SN9C20x + OV9650)"
},
{
0x045e,
L"Microsoft Corp.",
0x00f5,
L"LifeCam VX-3000"
},
{
0x045e,
L"Microsoft Corp.",
0x00f6,
L"Comfort Optical Mouse 1000"
},
{
0x045e,
L"Microsoft Corp.",
0x00f7,
L"LifeCam VX-1000"
},
{
0x045e,
L"Microsoft Corp.",
0x00f8,
L"LifeCam NX-6000"
},
{
0x045e,
L"Microsoft Corp.",
0x00f9,
L"Wireless Desktop Receiver 3.1"
},
{
0x045e,
L"Microsoft Corp.",
0x0202,
L"Xbox Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x0280,
L"Xbox Memory Unit (8MB)"
},
{
0x045e,
L"Microsoft Corp.",
0x0283,
L"Xbox Communicator"
},
{
0x045e,
L"Microsoft Corp.",
0x0284,
L"Xbox DVD Playback Kit"
},
{
0x045e,
L"Microsoft Corp.",
0x0285,
L"Xbox Controller S"
},
{
0x045e,
L"Microsoft Corp.",
0x0288,
L"Xbox Controller S Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0289,
L"Xbox Controller S"
},
{
0x045e,
L"Microsoft Corp.",
0x028b,
L"Xbox360 DVD Emulator"
},
{
0x045e,
L"Microsoft Corp.",
0x028d,
L"Xbox360 Memory Unit 64MB"
},
{
0x045e,
L"Microsoft Corp.",
0x028e,
L"Xbox360 Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x028f,
L"Xbox360 Wireless Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x0290,
L"Xbox360 Performance Pipe (PIX)"
},
{
0x045e,
L"Microsoft Corp.",
0x0291,
L"Xbox 360 Wireless Receiver for Windows"
},
{
0x045e,
L"Microsoft Corp.",
0x0292,
L"Xbox360 Wireless Networking Adapter"
},
{
0x045e,
L"Microsoft Corp.",
0x029c,
L"Xbox360 HD-DVD Drive"
},
{
0x045e,
L"Microsoft Corp.",
0x029d,
L"Xbox360 HD-DVD Drive"
},
{
0x045e,
L"Microsoft Corp.",
0x029e,
L"Xbox360 HD-DVD Memory Unit"
},
{
0x045e,
L"Microsoft Corp.",
0x02a0,
L"Xbox360 Big Button IR"
},
{
0x045e,
L"Microsoft Corp.",
0x02a1,
L"Xbox 360 Wireless Receiver for Windows"
},
{
0x045e,
L"Microsoft Corp.",
0x02a8,
L"Xbox360 Wireless N Networking Adapter [Atheros AR7010+AR9280]"
},
{
0x045e,
L"Microsoft Corp.",
0x02ad,
L"Xbox NUI Audio"
},
{
0x045e,
L"Microsoft Corp.",
0x02ae,
L"Xbox NUI Camera"
},
{
0x045e,
L"Microsoft Corp.",
0x02b0,
L"Xbox NUI Motor"
},
{
0x045e,
L"Microsoft Corp.",
0x02b6,
L"Xbox360 Bluetooth Wireless Headset"
},
{
0x045e,
L"Microsoft Corp.",
0x02bb,
L"Kinect Audio"
},
{
0x045e,
L"Microsoft Corp.",
0x02be,
L"Kinect for Windows NUI Audio"
},
{
0x045e,
L"Microsoft Corp.",
0x02bf,
L"Kinect for Windows NUI Camera"
},
{
0x045e,
L"Microsoft Corp.",
0x02c2,
L"Kinect for Windows NUI Motor"
},
{
0x045e,
L"Microsoft Corp.",
0x02d1,
L"Xbox One Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x02d5,
L"Xbox One Digital TV Tuner"
},
{
0x045e,
L"Microsoft Corp.",
0x02dd,
L"Xbox One Controller (Firmware 2015)"
},
{
0x045e,
L"Microsoft Corp.",
0x02e3,
L"Xbox One Elite Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x02e6,
L"Wireless XBox Controller Dongle"
},
{
0x045e,
L"Microsoft Corp.",
0x02ea,
L"Xbox One S Controller"
},
{
0x045e,
L"Microsoft Corp.",
0x02fd,
L"Xbox One S Controller [Bluetooth]"
},
{
0x045e,
L"Microsoft Corp.",
0x0400,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0401,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0402,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0403,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0404,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0405,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0406,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0407,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0408,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0409,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040a,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040b,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040c,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040d,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040e,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x040f,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0410,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0411,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0412,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0413,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0414,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0415,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0416,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0417,
L"Windows Powered Pocket PC 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x0432,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0433,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0434,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0435,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0436,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0437,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0438,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0439,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x043a,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x043b,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x043c,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x043d,
L"Becker Traffic Assist Highspeed 7934"
},
{
0x045e,
L"Microsoft Corp.",
0x043e,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x043f,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0440,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0441,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0442,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0443,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0444,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0445,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0446,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0447,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0448,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0449,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044a,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044b,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044c,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044d,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044e,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x044f,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0450,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0451,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0452,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0453,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0454,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0455,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0456,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0457,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0458,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0459,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045a,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045b,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045c,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045d,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045e,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x045f,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0460,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0461,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0462,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0463,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0464,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0465,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0466,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0467,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0468,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0469,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046a,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046b,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046c,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046d,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046e,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x046f,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0470,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0471,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0472,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0473,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0474,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0475,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0476,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0477,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0478,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x0479,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x047a,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x047b,
L"Windows Powered Pocket PC 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04c8,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04c9,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04ca,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04cb,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04cc,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04cd,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04ce,
L"Windows Powered Smartphone 2002"
},
{
0x045e,
L"Microsoft Corp.",
0x04d7,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04d8,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04d9,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04da,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04db,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04dc,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04dd,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04de,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04df,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e0,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e1,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e2,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e3,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e4,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e5,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e6,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e7,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e8,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04e9,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04ea,
L"Windows Powered Smartphone 2003"
},
{
0x045e,
L"Microsoft Corp.",
0x04ec,
L"Windows Phone (Zune)"
},
{
0x045e,
L"Microsoft Corp.",
0x063e,
L"Zune HD Media Player"
},
{
0x045e,
L"Microsoft Corp.",
0x0640,
L"KIN Phone"
},
{
0x045e,
L"Microsoft Corp.",
0x0641,
L"KIN Phone"
},
{
0x045e,
L"Microsoft Corp.",
0x0642,
L"KIN Phone"
},
{
0x045e,
L"Microsoft Corp.",
0x0707,
L"Wireless Laser Mouse 8000"
},
{
0x045e,
L"Microsoft Corp.",
0x0708,
L"Transceiver v 3.0 for Bluetooth"
},
{
0x045e,
L"Microsoft Corp.",
0x070a,
L"Charon Bluetooth Dongle (DFU)"
},
{
0x045e,
L"Microsoft Corp.",
0x070f,
L"LifeChat LX-3000 Headset"
},
{
0x045e,
L"Microsoft Corp.",
0x0710,
L"Zune Media Player"
},
{
0x045e,
L"Microsoft Corp.",
0x0713,
L"Wireless Presenter Mouse 8000"
},
{
0x045e,
L"Microsoft Corp.",
0x0719,
L"Xbox 360 Wireless Adapter"
},
{
0x045e,
L"Microsoft Corp.",
0x071f,
L"Mouse/Keyboard 2.4GHz Transceiver V2.0"
},
{
0x045e,
L"Microsoft Corp.",
0x0721,
L"LifeCam NX-3000 (UVC-compliant)"
},
{
0x045e,
L"Microsoft Corp.",
0x0723,
L"LifeCam VX-7000 (UVC-compliant)"
},
{
0x045e,
L"Microsoft Corp.",
0x0724,
L"SideWinder Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x0728,
L"LifeCam VX-5000"
},
{
0x045e,
L"Microsoft Corp.",
0x0730,
L"Digital Media Keyboard 3000"
},
{
0x045e,
L"Microsoft Corp.",
0x0734,
L"Wireless Optical Desktop 700"
},
{
0x045e,
L"Microsoft Corp.",
0x0736,
L"Sidewinder X5 Mouse"
},
{
0x045e,
L"Microsoft Corp.",
0x0737,
L"Compact Optical Mouse 500"
},
{
0x045e,
L"Microsoft Corp.",
0x0745,
L"Nano Transceiver v1.0 for Bluetooth"
},
{
0x045e,
L"Microsoft Corp.",
0x074a,
L"LifeCam VX-500 [1357]"
},
{
0x045e,
L"Microsoft Corp.",
0x0750,
L"Wired Keyboard 600"
},
{
0x045e,
L"Microsoft Corp.",
0x0752,
L"Wired Keyboard 400"
},
{
0x045e,
L"Microsoft Corp.",
0x075d,
L"LifeCam Cinema"
},
{
0x045e,
L"Microsoft Corp.",
0x0761,
L"LifeCam VX-2000"
},
{
0x045e,
L"Microsoft Corp.",
0x0765,
L"Xbox360 Slim Internal Wireless Module (1400) [Marvell 88W8786U]"
},
{
0x045e,
L"Microsoft Corp.",
0x0766,
L"LifeCam VX-800"
},
{
0x045e,
L"Microsoft Corp.",
0x0768,
L"Sidewinder X4"
},
{
0x045e,
L"Microsoft Corp.",
0x076c,
L"Comfort Mouse 4500"
},
{
0x045e,
L"Microsoft Corp.",
0x076d,
L"LifeCam HD-5000"
},
{
0x045e,
L"Microsoft Corp.",
0x0770,
L"LifeCam VX-700"
},
{
0x045e,
L"Microsoft Corp.",
0x0772,
L"LifeCam Studio"
},
{
0x045e,
L"Microsoft Corp.",
0x0779,
L"LifeCam HD-3000"
},
{
0x045e,
L"Microsoft Corp.",
0x077f,
L"LifeChat LX-6000 Headset"
},
{
0x045e,
L"Microsoft Corp.",
0x0780,
L"Comfort Curve Keyboard 3000"
},
{
0x045e,
L"Microsoft Corp.",
0x0797,
L"Optical Mouse 200"
},
{
0x045e,
L"Microsoft Corp.",
0x0799,
L"Surface Pro embedded keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x07a5,
L"Wireless Receiver 1461C"
},
{
0x045e,
L"Microsoft Corp.",
0x07b2,
L"2.4GHz Transceiver v8.0 used by mouse Wireless Desktop 900"
},
{
0x045e,
L"Microsoft Corp.",
0x07b6,
L"Comfort Curve Keyboard 3000"
},
{
0x045e,
L"Microsoft Corp.",
0x07b9,
L"Wired Keyboard 200"
},
{
0x045e,
L"Microsoft Corp.",
0x07c6,
L"RTL8153 GigE [Surface Dock Ethernet]"
},
{
0x045e,
L"Microsoft Corp.",
0x07ca,
L"Surface Pro 3 Docking Station Audio Device"
},
{
0x045e,
L"Microsoft Corp.",
0x07cd,
L"Surface Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0x07f8,
L"Wired Keyboard 600 (model 1576)"
},
{
0x045e,
L"Microsoft Corp.",
0x07fd,
L"Nano Transceiver 1.1"
},
{
0x045e,
L"Microsoft Corp.",
0x0810,
L"LifeCam HD-3000"
},
{
0x045e,
L"Microsoft Corp.",
0x0900,
L"Surface Dock Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0901,
L"Surface Dock Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0902,
L"Surface Dock Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0903,
L"Surface Dock Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x0904,
L"Surface Dock Extender"
},
{
0x045e,
L"Microsoft Corp.",
0x0905,
L"Surface Dock Audio"
},
{
0x045e,
L"Microsoft Corp.",
0x090b,
L"Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x090c,
L"SD Card"
},
{
0x045e,
L"Microsoft Corp.",
0x091a,
L"Hub"
},
{
0x045e,
L"Microsoft Corp.",
0x09c0,
L"Surface Type Cover"
},
{
0x045e,
L"Microsoft Corp.",
0x0a00,
L"Lumia 950 Dual SIM (RM-1118)"
},
{
0x045e,
L"Microsoft Corp.",
0x930a,
L"ISOUSB.SYS Intel 82930 Isochronous IO Test Board"
},
{
0x045e,
L"Microsoft Corp.",
0xffca,
L"Catalina"
},
{
0x045e,
L"Microsoft Corp.",
0xfff8,
L"Keyboard"
},
{
0x045e,
L"Microsoft Corp.",
0xffff,
L"Windows CE Mass Storage"
},
{
0x0460,
L"Ace Cad Enterprise Co., Ltd",
0x0004,
L"Tablet (5x3.75)"
},
{
0x0460,
L"Ace Cad Enterprise Co., Ltd",
0x0006,
L"LCD Tablet (12x9)"
},
{
0x0460,
L"Ace Cad Enterprise Co., Ltd",
0x0008,
L"Tablet (3x2.25)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0010,
L"HP PR1101U / Primax PMX-KPR1101U Keyboard"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0300,
L"G2-300 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0301,
L"G2E-300 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0302,
L"G2-300 #2 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0303,
L"G2E-300 #2 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0340,
L"Colorado 9600 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0341,
L"Colorado 600u Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0345,
L"Visioneer 6200 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0346,
L"Memorex Maxx 6136u Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0347,
L"Primascan Colorado 2600u/Visioneer 4400 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0360,
L"Colorado 19200 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0361,
L"Colorado 1200u Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0363,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0364,
L"LG Electronics Scanworks 600U Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0365,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0366,
L"6400"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0367,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0371,
L"Visioneer Onetouch 8920 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0374,
L"UMAX Astra 2500"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0375,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0377,
L"Medion MD 5345 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0378,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x037b,
L"Medion MD 6190 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x037c,
L"VistaScan Astra 3600(ENG)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0380,
L"G2-600 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0381,
L"ReadyScan 636i Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0382,
L"G2-600 #2 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0383,
L"G2E-600 Scanner"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x038a,
L"UMAX Astra 3000/3600"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x038b,
L"Xerox 2400 Onetouch"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x038c,
L"UMAX Astra 4100"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0392,
L"Medion/Lifetec/Tevion/Cytron MD 6190"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x03a8,
L"9420M"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0813,
L"IBM UltraPort Camera"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0815,
L"Micro Innovations IC200 Webcam"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0819,
L"Fujifilm IX-30 Camera [webcam mode]"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x081a,
L"Fujifilm IX-30 Camera [storage mode]"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x081c,
L"Elitegroup ECS-C11 Camera"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x081d,
L"Elitegroup ECS-C11 Storage"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x0a00,
L"Micro Innovations Web Cam 320"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d01,
L"Comfort Keyboard / Kensington Orbit Elite"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d02,
L"Mouse-in-a-Box"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d03,
L"Kensington Mouse-in-a-box"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d04,
L"Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d06,
L"Balless Mouse (HID)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d0f,
L"HP Optical Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d15,
L"Dell Optical Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d17,
L"Optical Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d20,
L"HP Optical Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d2a,
L"PoPo Elixir Mouse (HID)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d2b,
L"Wireless Laser Mini Mouse (HID)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d2c,
L"PoPo Mini Pointer Mouse (HID)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d2e,
L"Optical Mobile Mouse (HID)"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d51,
L"0Y357C PMX-MMOCZUL (B) [Dell Laser Mouse]"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d62,
L"HP Laser Mobile Mini Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d75,
L"Rocketfish RF-FLBTAD Bluetooth Adapter"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d81,
L"Dell N889 Optical Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d8a,
L"HP Multimedia Keyboard"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d91,
L"Laser mouse M-D16DL"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4d92,
L"Optical mouse M-D17DR"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4db1,
L"Dell Laptop Integrated Webcam 2Mpix"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4de3,
L"HP 5-Button Optical Comfort Mouse"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4de7,
L"webcam"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4e04,
L"Lenovo Keyboard KB1021"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4e22,
L"Dell Mouse, 2 Buttons, Modell: MS111-P"
},
{
0x0461,
L"Primax Electronics, Ltd",
0x4e6f,
L"Acer Wired Keyboard Model KBAY211"
},
{
0x0463,
L"MGE UPS Systems",
0x0001,
L"UPS"
},
{
0x0463,
L"MGE UPS Systems",
0xffff,
L"UPS"
},
{
0x0464,
L"AMP/Tycoelectronics Corp.",
0x0,
L"0"
},
{
0x0467,
L"AT&T Paradyne",
0x0,
L"0"
},
{
0x0468,
L"Wieson Technologies Co., Ltd",
0x0,
L"0"
},
{
0x046a,
L"Cherry GmbH",
0x0001,
L"Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0003,
L"My3000 Hub"
},
{
0x046a,
L"Cherry GmbH",
0x0004,
L"CyBoard Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0005,
L"XX33 SmartCard Reader Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0008,
L"Wireless Keyboard and Mouse"
},
{
0x046a,
L"Cherry GmbH",
0x0010,
L"SmartBoard XX44"
},
{
0x046a,
L"Cherry GmbH",
0x0011,
L"G83 (RS 6000) Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0021,
L"CyMotion Expert Combo"
},
{
0x046a,
L"Cherry GmbH",
0x0023,
L"Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0027,
L"CyMotion Master Solar Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x002a,
L"Wireless Mouse & Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x002d,
L"SmartTerminal XX44"
},
{
0x046a,
L"Cherry GmbH",
0x003c,
L"Raptor Gaming Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x003d,
L"Raptor Gaming Keyboard Integrated Hub"
},
{
0x046a,
L"Cherry GmbH",
0x003e,
L"SmartTerminal ST-2xxx"
},
{
0x046a,
L"Cherry GmbH",
0x0041,
L"G86 6240 Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0080,
L"eHealth Terminal ST 1503"
},
{
0x046a,
L"Cherry GmbH",
0x0081,
L"eHealth Keyboard G87 1504"
},
{
0x046a,
L"Cherry GmbH",
0x00a1,
L"SmartCard Reader Keyboard KC 1000 SC"
},
{
0x046a,
L"Cherry GmbH",
0x0106,
L"R-300 Wireless Mouse Receiver"
},
{
0x046a,
L"Cherry GmbH",
0x010d,
L"MX-Board 3.0 Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0x0180,
L"Strait 3.0"
},
{
0x046a,
L"Cherry GmbH",
0xb090,
L"Keyboard"
},
{
0x046a,
L"Cherry GmbH",
0xb091,
L"Mouse"
},
{
0x046b,
L"American Megatrends, Inc.",
0x0001,
L"Keyboard"
},
{
0x046b,
L"American Megatrends, Inc.",
0x0101,
L"PS/2 Keyboard, Mouse & Joystick Ports"
},
{
0x046b,
L"American Megatrends, Inc.",
0x0301,
L"USB 1.0 Hub"
},
{
0x046b,
L"American Megatrends, Inc.",
0x0500,
L"Serial & Parallel Ports"
},
{
0x046b,
L"American Megatrends, Inc.",
0xff10,
L"Virtual Keyboard and Mouse"
},
{
0x046c,
L"Toshiba Corp., Digital Media Equipment",
0x0,
L"0"
},
{
0x046d,
L"Logitech, Inc.",
0x0082,
L"Acer Aspire 5672 Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x0200,
L"WingMan Extreme Joystick"
},
{
0x046d,
L"Logitech, Inc.",
0x0203,
L"M2452 Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0x0242,
L"Chillstream for Xbox 360"
},
{
0x046d,
L"Logitech, Inc.",
0x0301,
L"M4848 Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0x0401,
L"HP PageScan"
},
{
0x046d,
L"Logitech, Inc.",
0x0402,
L"NEC PageScan"
},
{
0x046d,
L"Logitech, Inc.",
0x040f,
L"Logitech/Storm PageScan"
},
{
0x046d,
L"Logitech, Inc.",
0x0430,
L"Mic (Cordless)"
},
{
0x046d,
L"Logitech, Inc.",
0x0801,
L"QuickCam Home"
},
{
0x046d,
L"Logitech, Inc.",
0x0802,
L"Webcam C200"
},
{
0x046d,
L"Logitech, Inc.",
0x0804,
L"Webcam C250"
},
{
0x046d,
L"Logitech, Inc.",
0x0805,
L"Webcam C300"
},
{
0x046d,
L"Logitech, Inc.",
0x0807,
L"Webcam B500"
},
{
0x046d,
L"Logitech, Inc.",
0x0808,
L"Webcam C600"
},
{
0x046d,
L"Logitech, Inc.",
0x0809,
L"Webcam Pro 9000"
},
{
0x046d,
L"Logitech, Inc.",
0x080a,
L"Portable Webcam C905"
},
{
0x046d,
L"Logitech, Inc.",
0x080f,
L"Webcam C120"
},
{
0x046d,
L"Logitech, Inc.",
0x0810,
L"QuickCam Pro"
},
{
0x046d,
L"Logitech, Inc.",
0x0819,
L"Webcam C210"
},
{
0x046d,
L"Logitech, Inc.",
0x081a,
L"Webcam C260"
},
{
0x046d,
L"Logitech, Inc.",
0x081b,
L"Webcam C310"
},
{
0x046d,
L"Logitech, Inc.",
0x081d,
L"HD Webcam C510"
},
{
0x046d,
L"Logitech, Inc.",
0x0820,
L"QuickCam VC"
},
{
0x046d,
L"Logitech, Inc.",
0x0821,
L"HD Webcam C910"
},
{
0x046d,
L"Logitech, Inc.",
0x0823,
L"HD Webcam B910"
},
{
0x046d,
L"Logitech, Inc.",
0x0825,
L"Webcam C270"
},
{
0x046d,
L"Logitech, Inc.",
0x0826,
L"HD Webcam C525"
},
{
0x046d,
L"Logitech, Inc.",
0x0828,
L"HD Webcam B990"
},
{
0x046d,
L"Logitech, Inc.",
0x082b,
L"Webcam C170"
},
{
0x046d,
L"Logitech, Inc.",
0x082c,
L"HD Webcam C615"
},
{
0x046d,
L"Logitech, Inc.",
0x082d,
L"HD Pro Webcam C920"
},
{
0x046d,
L"Logitech, Inc.",
0x0830,
L"QuickClip"
},
{
0x046d,
L"Logitech, Inc.",
0x0836,
L"B525 HD Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x0837,
L"BCC950 ConferenceCam"
},
{
0x046d,
L"Logitech, Inc.",
0x0840,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x0843,
L"Webcam C930e"
},
{
0x046d,
L"Logitech, Inc.",
0x0850,
L"QuickCam Web"
},
{
0x046d,
L"Logitech, Inc.",
0x085c,
L"C922 Pro Stream Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x0870,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x0890,
L"QuickCam Traveler"
},
{
0x046d,
L"Logitech, Inc.",
0x0892,
L"OrbiCam"
},
{
0x046d,
L"Logitech, Inc.",
0x0894,
L"CrystalCam"
},
{
0x046d,
L"Logitech, Inc.",
0x0895,
L"QuickCam for Dell Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x0896,
L"OrbiCam"
},
{
0x046d,
L"Logitech, Inc.",
0x0897,
L"QuickCam for Dell Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x0899,
L"QuickCam for Dell Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x089d,
L"QuickCam E2500 series"
},
{
0x046d,
L"Logitech, Inc.",
0x08a0,
L"QuickCam IM"
},
{
0x046d,
L"Logitech, Inc.",
0x08a1,
L"QuickCam IM with sound"
},
{
0x046d,
L"Logitech, Inc.",
0x08a2,
L"Labtec Webcam Pro"
},
{
0x046d,
L"Logitech, Inc.",
0x08a3,
L"QuickCam QuickCam Chat"
},
{
0x046d,
L"Logitech, Inc.",
0x08a6,
L"QuickCam IM"
},
{
0x046d,
L"Logitech, Inc.",
0x08a7,
L"QuickCam Image"
},
{
0x046d,
L"Logitech, Inc.",
0x08a9,
L"Notebook Deluxe"
},
{
0x046d,
L"Logitech, Inc.",
0x08aa,
L"Labtec Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x08ac,
L"QuickCam Cool"
},
{
0x046d,
L"Logitech, Inc.",
0x08ad,
L"QuickCam Communicate STX"
},
{
0x046d,
L"Logitech, Inc.",
0x08ae,
L"QuickCam for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x08af,
L"QuickCam Easy/Cool"
},
{
0x046d,
L"Logitech, Inc.",
0x08b0,
L"QuickCam 3000 Pro [pwc]"
},
{
0x046d,
L"Logitech, Inc.",
0x08b1,
L"QuickCam Notebook Pro"
},
{
0x046d,
L"Logitech, Inc.",
0x08b2,
L"QuickCam Pro 4000"
},
{
0x046d,
L"Logitech, Inc.",
0x08b3,
L"QuickCam Zoom"
},
{
0x046d,
L"Logitech, Inc.",
0x08b4,
L"QuickCam Zoom"
},
{
0x046d,
L"Logitech, Inc.",
0x08b5,
L"QuickCam Sphere"
},
{
0x046d,
L"Logitech, Inc.",
0x08b9,
L"QuickCam IM"
},
{
0x046d,
L"Logitech, Inc.",
0x08bd,
L"Microphone (Pro 4000)"
},
{
0x046d,
L"Logitech, Inc.",
0x08c0,
L"QuickCam Pro 3000"
},
{
0x046d,
L"Logitech, Inc.",
0x08c1,
L"QuickCam Fusion"
},
{
0x046d,
L"Logitech, Inc.",
0x08c2,
L"QuickCam PTZ"
},
{
0x046d,
L"Logitech, Inc.",
0x08c3,
L"Camera (Notebooks Pro)"
},
{
0x046d,
L"Logitech, Inc.",
0x08c5,
L"QuickCam Pro 5000"
},
{
0x046d,
L"Logitech, Inc.",
0x08c6,
L"QuickCam for DELL Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x08c7,
L"QuickCam OEM Cisco VT Camera II"
},
{
0x046d,
L"Logitech, Inc.",
0x08c9,
L"QuickCam Ultra Vision"
},
{
0x046d,
L"Logitech, Inc.",
0x08ca,
L"Mic (Fusion)"
},
{
0x046d,
L"Logitech, Inc.",
0x08cb,
L"Mic (Notebooks Pro)"
},
{
0x046d,
L"Logitech, Inc.",
0x08cc,
L"Mic (PTZ)"
},
{
0x046d,
L"Logitech, Inc.",
0x08ce,
L"QuickCam Pro 5000"
},
{
0x046d,
L"Logitech, Inc.",
0x08cf,
L"QuickCam UpdateMe"
},
{
0x046d,
L"Logitech, Inc.",
0x08d0,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x08d7,
L"QuickCam Communicate STX"
},
{
0x046d,
L"Logitech, Inc.",
0x08d8,
L"QuickCam for Notebook Deluxe"
},
{
0x046d,
L"Logitech, Inc.",
0x08d9,
L"QuickCam IM/Connect"
},
{
0x046d,
L"Logitech, Inc.",
0x08da,
L"QuickCam Messanger"
},
{
0x046d,
L"Logitech, Inc.",
0x08dd,
L"QuickCam for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x08e0,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x08e1,
L"Labtec Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x08f0,
L"QuickCam Messenger"
},
{
0x046d,
L"Logitech, Inc.",
0x08f1,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x08f2,
L"Microphone (Messenger)"
},
{
0x046d,
L"Logitech, Inc.",
0x08f3,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x08f4,
L"Labtec Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x08f5,
L"QuickCam Messenger Communicate"
},
{
0x046d,
L"Logitech, Inc.",
0x08f6,
L"QuickCam Messenger Plus"
},
{
0x046d,
L"Logitech, Inc.",
0x0900,
L"ClickSmart 310"
},
{
0x046d,
L"Logitech, Inc.",
0x0901,
L"ClickSmart 510"
},
{
0x046d,
L"Logitech, Inc.",
0x0903,
L"ClickSmart 820"
},
{
0x046d,
L"Logitech, Inc.",
0x0905,
L"ClickSmart 820"
},
{
0x046d,
L"Logitech, Inc.",
0x0910,
L"QuickCam Cordless"
},
{
0x046d,
L"Logitech, Inc.",
0x0920,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x0921,
L"Labtec Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x0922,
L"QuickCam Live"
},
{
0x046d,
L"Logitech, Inc.",
0x0928,
L"QuickCam Express"
},
{
0x046d,
L"Logitech, Inc.",
0x0929,
L"Labtec Webcam Pro"
},
{
0x046d,
L"Logitech, Inc.",
0x092a,
L"QuickCam for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x092b,
L"Labtec Webcam Plus"
},
{
0x046d,
L"Logitech, Inc.",
0x092c,
L"QuickCam Chat"
},
{
0x046d,
L"Logitech, Inc.",
0x092d,
L"QuickCam Express / Go"
},
{
0x046d,
L"Logitech, Inc.",
0x092e,
L"QuickCam Chat"
},
{
0x046d,
L"Logitech, Inc.",
0x092f,
L"QuickCam Express Plus"
},
{
0x046d,
L"Logitech, Inc.",
0x0950,
L"Pocket Camera"
},
{
0x046d,
L"Logitech, Inc.",
0x0960,
L"ClickSmart 420"
},
{
0x046d,
L"Logitech, Inc.",
0x0970,
L"Pocket750"
},
{
0x046d,
L"Logitech, Inc.",
0x0990,
L"QuickCam Pro 9000"
},
{
0x046d,
L"Logitech, Inc.",
0x0991,
L"QuickCam Pro for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x0992,
L"QuickCam Communicate Deluxe"
},
{
0x046d,
L"Logitech, Inc.",
0x0994,
L"QuickCam Orbit/Sphere AF"
},
{
0x046d,
L"Logitech, Inc.",
0x09a1,
L"QuickCam Communicate MP/S5500"
},
{
0x046d,
L"Logitech, Inc.",
0x09a2,
L"QuickCam Communicate Deluxe/S7500"
},
{
0x046d,
L"Logitech, Inc.",
0x09a4,
L"QuickCam E 3500"
},
{
0x046d,
L"Logitech, Inc.",
0x09a5,
L"Quickcam 3000 For Business"
},
{
0x046d,
L"Logitech, Inc.",
0x09a6,
L"QuickCam Vision Pro"
},
{
0x046d,
L"Logitech, Inc.",
0x09b0,
L"Acer OrbiCam"
},
{
0x046d,
L"Logitech, Inc.",
0x09b2,
L"Fujitsu Webcam"
},
{
0x046d,
L"Logitech, Inc.",
0x09c0,
L"QuickCam for Dell Notebooks Mic"
},
{
0x046d,
L"Logitech, Inc.",
0x09c1,
L"QuickCam Deluxe for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0x0a01,
L"USB Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a02,
L"Premium Stereo USB Headset 350"
},
{
0x046d,
L"Logitech, Inc.",
0x0a03,
L"Logitech USB Microphone"
},
{
0x046d,
L"Logitech, Inc.",
0x0a04,
L"V20 portable speakers (USB powered)"
},
{
0x046d,
L"Logitech, Inc.",
0x0a07,
L"Z-10 Speakers"
},
{
0x046d,
L"Logitech, Inc.",
0x0a0b,
L"ClearChat Pro USB"
},
{
0x046d,
L"Logitech, Inc.",
0x0a0c,
L"Clear Chat Comfort USB Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a13,
L"Z-5 Speakers"
},
{
0x046d,
L"Logitech, Inc.",
0x0a14,
L"USB Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a15,
L"G35 Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a17,
L"G330 Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a1f,
L"G930"
},
{
0x046d,
L"Logitech, Inc.",
0x0a29,
L"H600 [Wireless Headset]"
},
{
0x046d,
L"Logitech, Inc.",
0x0a37,
L"USB Headset H540"
},
{
0x046d,
L"Logitech, Inc.",
0x0a38,
L"Headset H340"
},
{
0x046d,
L"Logitech, Inc.",
0x0a44,
L"Headset H390"
},
{
0x046d,
L"Logitech, Inc.",
0x0a45,
L"960 Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a4d,
L"G430 Surround Sound Gaming Headset"
},
{
0x046d,
L"Logitech, Inc.",
0x0a5b,
L"G933 Wireless Headset Dongle"
},
{
0x046d,
L"Logitech, Inc.",
0x0a5d,
L"G933 Headset Battery Charger"
},
{
0x046d,
L"Logitech, Inc.",
0x0a66,
L"[G533 Wireless Headset Dongle]"
},
{
0x046d,
L"Logitech, Inc.",
0x0b02,
L"C-UV35 [Bluetooth Mini-Receiver] (HID proxy mode)"
},
{
0x046d,
L"Logitech, Inc.",
0x8801,
L"Video Camera"
},
{
0x046d,
L"Logitech, Inc.",
0xb014,
L"Bluetooth Mouse M336/M337/M535"
},
{
0x046d,
L"Logitech, Inc.",
0xb305,
L"BT Mini-Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xbfe4,
L"Premium Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc000,
L"N43 [Pilot Mouse]"
},
{
0x046d,
L"Logitech, Inc.",
0xc001,
L"N48/M-BB48/M-UK96A [FirstMouse Plus]"
},
{
0x046d,
L"Logitech, Inc.",
0xc002,
L"M-BA47 [MouseMan Plus]"
},
{
0x046d,
L"Logitech, Inc.",
0xc003,
L"MouseMan"
},
{
0x046d,
L"Logitech, Inc.",
0xc004,
L"WingMan Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc005,
L"WingMan Gaming Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc00b,
L"MouseMan Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc00c,
L"Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc00d,
L"MouseMan Wheel+"
},
{
0x046d,
L"Logitech, Inc.",
0xc00e,
L"M-BJ58/M-BJ69 Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc00f,
L"MouseMan Traveler/Mobile"
},
{
0x046d,
L"Logitech, Inc.",
0xc011,
L"Optical MouseMan"
},
{
0x046d,
L"Logitech, Inc.",
0xc012,
L"Mouseman Dual Optical"
},
{
0x046d,
L"Logitech, Inc.",
0xc014,
L"Corded Workstation Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc015,
L"Corded Workstation Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc016,
L"Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc018,
L"Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc019,
L"Optical Tilt Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc01a,
L"M-BQ85 Optical Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc01b,
L"MX310 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc01c,
L"Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc01d,
L"MX510 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc01e,
L"MX518 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc024,
L"MX300 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc025,
L"MX500 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc030,
L"iFeel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc031,
L"iFeel Mouse+"
},
{
0x046d,
L"Logitech, Inc.",
0xc032,
L"MouseMan iFeel"
},
{
0x046d,
L"Logitech, Inc.",
0xc033,
L"iFeel MouseMan+"
},
{
0x046d,
L"Logitech, Inc.",
0xc034,
L"MouseMan Optical"
},
{
0x046d,
L"Logitech, Inc.",
0xc035,
L"Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc036,
L"Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc037,
L"Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc038,
L"Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc03d,
L"M-BT96a Pilot Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc03e,
L"Premium Optical Wheel Mouse (M-BT58)"
},
{
0x046d,
L"Logitech, Inc.",
0xc03f,
L"M-BT85 [UltraX Optical Mouse]"
},
{
0x046d,
L"Logitech, Inc.",
0xc040,
L"Corded Tilt-Wheel Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc041,
L"G5 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc042,
L"G3 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc043,
L"MX320/MX400 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc044,
L"LX3 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc045,
L"Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc046,
L"RX1000 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc047,
L"Laser Mouse M-UAL120"
},
{
0x046d,
L"Logitech, Inc.",
0xc048,
L"G9 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc049,
L"G5 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc050,
L"RX 250 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc051,
L"G3 (MX518) Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc053,
L"Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc054,
L"Bluetooth mini-receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc058,
L"M115 Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc05a,
L"M90/M100 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc05b,
L"M-U0004 810-001317 [B110 Optical USB Mouse]"
},
{
0x046d,
L"Logitech, Inc.",
0xc05d,
L"Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc05f,
L"M115 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc061,
L"RX1500 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc062,
L"M-UAS144 [LS1 Laser Mouse]"
},
{
0x046d,
L"Logitech, Inc.",
0xc063,
L"DELL Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc064,
L"M110 corded optical mouse (M-B0001)"
},
{
0x046d,
L"Logitech, Inc.",
0xc066,
L"G9x Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc068,
L"G500 Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc069,
L"M-U0007 [Corded Mouse M500]"
},
{
0x046d,
L"Logitech, Inc.",
0xc06a,
L"USB Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc06b,
L"G700 Wireless Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc06c,
L"Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc077,
L"M105 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc07c,
L"M-R0017 [G700s Rechargeable Gaming Mouse]"
},
{
0x046d,
L"Logitech, Inc.",
0xc07d,
L"G502 Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc07e,
L"G402 Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc080,
L"G303 Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc083,
L"G403 Prodigy Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc084,
L"G203 Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc101,
L"UltraX Media Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc110,
L"Harmony 785/880/885 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc111,
L"Harmony 525 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc112,
L"Harmony 890 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc11f,
L"Harmony 900/1100 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc121,
L"Harmony One Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc122,
L"Harmony 650/700 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc124,
L"Harmony 300/350 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc125,
L"Harmony 200 Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc126,
L"Harmony Link"
},
{
0x046d,
L"Logitech, Inc.",
0xc129,
L"Harmony Hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc12b,
L"Harmony Touch/Ultimate Remote"
},
{
0x046d,
L"Logitech, Inc.",
0xc201,
L"WingMan Extreme Joystick with Throttle"
},
{
0x046d,
L"Logitech, Inc.",
0xc202,
L"WingMan Formula"
},
{
0x046d,
L"Logitech, Inc.",
0xc207,
L"WingMan Extreme Digital 3D"
},
{
0x046d,
L"Logitech, Inc.",
0xc208,
L"WingMan Gamepad Extreme"
},
{
0x046d,
L"Logitech, Inc.",
0xc209,
L"WingMan Gamepad"
},
{
0x046d,
L"Logitech, Inc.",
0xc20a,
L"WingMan RumblePad"
},
{
0x046d,
L"Logitech, Inc.",
0xc20b,
L"WingMan Action Pad"
},
{
0x046d,
L"Logitech, Inc.",
0xc20c,
L"WingMan Precision"
},
{
0x046d,
L"Logitech, Inc.",
0xc20d,
L"WingMan Attack 2"
},
{
0x046d,
L"Logitech, Inc.",
0xc20e,
L"WingMan Formula GP"
},
{
0x046d,
L"Logitech, Inc.",
0xc211,
L"iTouch Cordless Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc212,
L"WingMan Extreme Digital 3D"
},
{
0x046d,
L"Logitech, Inc.",
0xc213,
L"J-UH16 (Freedom 2.4 Cordless Joystick)"
},
{
0x046d,
L"Logitech, Inc.",
0xc214,
L"ATK3 (Attack III Joystick)"
},
{
0x046d,
L"Logitech, Inc.",
0xc215,
L"Extreme 3D Pro"
},
{
0x046d,
L"Logitech, Inc.",
0xc216,
L"F310 Gamepad [DirectInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc218,
L"F510 Gamepad [DirectInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc219,
L"F710 Gamepad [DirectInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc21a,
L"Precision Gamepad"
},
{
0x046d,
L"Logitech, Inc.",
0xc21c,
L"G13 Advanced Gameboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc21d,
L"F310 Gamepad [XInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc21e,
L"F510 Gamepad [XInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc21f,
L"F710 Wireless Gamepad [XInput Mode]"
},
{
0x046d,
L"Logitech, Inc.",
0xc221,
L"G11/G15 Keyboard / Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc222,
L"G15 Keyboard / LCD"
},
{
0x046d,
L"Logitech, Inc.",
0xc223,
L"G11/G15 Keyboard / USB Hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc225,
L"G11/G15 Keyboard / G keys"
},
{
0x046d,
L"Logitech, Inc.",
0xc226,
L"G15 Refresh Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc227,
L"G15 Refresh Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc228,
L"G19 Gaming Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc229,
L"G19 Gaming Keyboard Macro Interface"
},
{
0x046d,
L"Logitech, Inc.",
0xc22a,
L"Gaming Keyboard G110"
},
{
0x046d,
L"Logitech, Inc.",
0xc22b,
L"Gaming Keyboard G110 G-keys"
},
{
0x046d,
L"Logitech, Inc.",
0xc22d,
L"G510 Gaming Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc22e,
L"G510 Gaming Keyboard onboard audio"
},
{
0x046d,
L"Logitech, Inc.",
0xc231,
L"G13 Virtual Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc245,
L"G400 Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc246,
L"Gaming Mouse G300"
},
{
0x046d,
L"Logitech, Inc.",
0xc247,
L"G100S Optical Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc248,
L"G105 Gaming Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc24a,
L"G600 Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc24c,
L"G400s Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc24d,
L"G710 Gaming Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc24e,
L"G500s Laser Gaming Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc281,
L"WingMan Force"
},
{
0x046d,
L"Logitech, Inc.",
0xc283,
L"WingMan Force 3D"
},
{
0x046d,
L"Logitech, Inc.",
0xc285,
L"WingMan Strike Force 3D"
},
{
0x046d,
L"Logitech, Inc.",
0xc286,
L"Force 3D Pro"
},
{
0x046d,
L"Logitech, Inc.",
0xc287,
L"Flight System G940"
},
{
0x046d,
L"Logitech, Inc.",
0xc291,
L"WingMan Formula Force"
},
{
0x046d,
L"Logitech, Inc.",
0xc293,
L"WingMan Formula Force GP"
},
{
0x046d,
L"Logitech, Inc.",
0xc294,
L"Driving Force"
},
{
0x046d,
L"Logitech, Inc.",
0xc295,
L"Momo Force Steering Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc298,
L"Driving Force Pro"
},
{
0x046d,
L"Logitech, Inc.",
0xc299,
L"G25 Racing Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc29b,
L"G27 Racing Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc29c,
L"Speed Force Wireless Wheel for Wii"
},
{
0x046d,
L"Logitech, Inc.",
0xc2a0,
L"Wingman Force Feedback Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc2a1,
L"WingMan Force Feedback Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc2ab,
L"G13 Joystick"
},
{
0x046d,
L"Logitech, Inc.",
0xc301,
L"iTouch Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc302,
L"iTouch Pro Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc303,
L"iTouch Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc305,
L"Internet Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc307,
L"Internet Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc308,
L"Internet Navigator Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc309,
L"Y-BF37 [Internet Navigator Keyboard]"
},
{
0x046d,
L"Logitech, Inc.",
0xc30a,
L"iTouch Composite"
},
{
0x046d,
L"Logitech, Inc.",
0xc30b,
L"NetPlay Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc30c,
L"Internet Keys (X)"
},
{
0x046d,
L"Logitech, Inc.",
0xc30d,
L"Internet Keys"
},
{
0x046d,
L"Logitech, Inc.",
0xc30e,
L"UltraX Keyboard (Y-BL49)"
},
{
0x046d,
L"Logitech, Inc.",
0xc30f,
L"Logicool HID-Compliant Keyboard (106 key)"
},
{
0x046d,
L"Logitech, Inc.",
0xc311,
L"Y-UF49 [Internet Pro Keyboard]"
},
{
0x046d,
L"Logitech, Inc.",
0xc312,
L"DeLuxe 250 Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc313,
L"Internet 350 Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc315,
L"Classic Keyboard 200"
},
{
0x046d,
L"Logitech, Inc.",
0xc316,
L"HID-Compliant Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc317,
L"Wave Corded Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc318,
L"Illuminated Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc31a,
L"Comfort Wave 450"
},
{
0x046d,
L"Logitech, Inc.",
0xc31b,
L"Compact Keyboard K300"
},
{
0x046d,
L"Logitech, Inc.",
0xc31c,
L"Keyboard K120"
},
{
0x046d,
L"Logitech, Inc.",
0xc31d,
L"Media Keyboard K200"
},
{
0x046d,
L"Logitech, Inc.",
0xc31f,
L"Comfort Keyboard K290"
},
{
0x046d,
L"Logitech, Inc.",
0xc326,
L"Washable Keyboard K310"
},
{
0x046d,
L"Logitech, Inc.",
0xc328,
L"Corded Keyboard K280e"
},
{
0x046d,
L"Logitech, Inc.",
0xc32b,
L"G910 Orion Spark Mechanical Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc332,
L"G502 Proteus Spectrum Optical Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc335,
L"G910 Orion Spectrum Mechanical Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc33a,
L"G413 Gaming Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc401,
L"TrackMan Marble Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc402,
L"Marble Mouse (2-button)"
},
{
0x046d,
L"Logitech, Inc.",
0xc403,
L"Turbo TrackMan Marble FX"
},
{
0x046d,
L"Logitech, Inc.",
0xc404,
L"TrackMan Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xc408,
L"Marble Mouse (4-button)"
},
{
0x046d,
L"Logitech, Inc.",
0xc501,
L"Cordless Mouse Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc502,
L"Cordless Mouse & iTouch Keys"
},
{
0x046d,
L"Logitech, Inc.",
0xc503,
L"Cordless Mouse+Keyboard Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc504,
L"Cordless Mouse+Keyboard Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc505,
L"Cordless Mouse+Keyboard Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc506,
L"MX700 Cordless Mouse Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc508,
L"Cordless Trackball"
},
{
0x046d,
L"Logitech, Inc.",
0xc509,
L"Cordless Keyboard & Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc50a,
L"Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc50b,
L"Cordless Desktop Optical"
},
{
0x046d,
L"Logitech, Inc.",
0xc50c,
L"Cordless Desktop S510"
},
{
0x046d,
L"Logitech, Inc.",
0xc50d,
L"Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc50e,
L"Cordless Mouse Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc510,
L"Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc512,
L"LX-700 Cordless Desktop Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc513,
L"MX3000 Cordless Desktop Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc514,
L"Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc515,
L"Cordless 2.4 GHz Presenter Presentation remote control"
},
{
0x046d,
L"Logitech, Inc.",
0xc517,
L"LX710 Cordless Desktop Laser"
},
{
0x046d,
L"Logitech, Inc.",
0xc518,
L"MX610 Laser Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc51a,
L"MX Revolution/G7 Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc51b,
L"V220 Cordless Optical Mouse for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0xc521,
L"Cordless Mouse Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc525,
L"MX Revolution Cordless Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc526,
L"Nano Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc529,
L"Logitech Keyboard + Mice"
},
{
0x046d,
L"Logitech, Inc.",
0xc52b,
L"Unifying Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc52d,
L"R700 Remote Presenter receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc52e,
L"MK260 Wireless Combo Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc52f,
L"Unifying Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc531,
L"C-U0007 [Unifying Receiver]"
},
{
0x046d,
L"Logitech, Inc.",
0xc532,
L"Unifying Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc534,
L"Unifying Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc537,
L"Cordless Mouse Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xc53a,
L"PowerPlay Wireless Charging System"
},
{
0x046d,
L"Logitech, Inc.",
0xc603,
L"3Dconnexion Spacemouse Plus XT"
},
{
0x046d,
L"Logitech, Inc.",
0xc605,
L"3Dconnexion CADman"
},
{
0x046d,
L"Logitech, Inc.",
0xc606,
L"3Dconnexion Spacemouse Classic"
},
{
0x046d,
L"Logitech, Inc.",
0xc621,
L"3Dconnexion Spaceball 5000"
},
{
0x046d,
L"Logitech, Inc.",
0xc623,
L"3Dconnexion Space Traveller 3D Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc625,
L"3Dconnexion Space Pilot 3D Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc626,
L"3Dconnexion Space Navigator 3D Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc627,
L"3Dconnexion Space Explorer 3D Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc628,
L"3Dconnexion Space Navigator for Notebooks"
},
{
0x046d,
L"Logitech, Inc.",
0xc629,
L"3Dconnexion SpacePilot Pro 3D Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc62b,
L"3Dconnexion Space Mouse Pro"
},
{
0x046d,
L"Logitech, Inc.",
0xc640,
L"NuLOOQ navigator"
},
{
0x046d,
L"Logitech, Inc.",
0xc702,
L"Cordless Presenter"
},
{
0x046d,
L"Logitech, Inc.",
0xc703,
L"Elite Keyboard Y-RP20 + Mouse MX900 (Bluetooth)"
},
{
0x046d,
L"Logitech, Inc.",
0xc704,
L"diNovo Wireless Desktop"
},
{
0x046d,
L"Logitech, Inc.",
0xc705,
L"MX900 Bluetooth Wireless Hub (C-UJ16A)"
},
{
0x046d,
L"Logitech, Inc.",
0xc707,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc708,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc709,
L"BT Mini-Receiver (HCI mode)"
},
{
0x046d,
L"Logitech, Inc.",
0xc70a,
L"MX5000 Cordless Desktop"
},
{
0x046d,
L"Logitech, Inc.",
0xc70b,
L"BT Mini-Receiver (HID proxy mode)"
},
{
0x046d,
L"Logitech, Inc.",
0xc70c,
L"BT Mini-Receiver (HID proxy mode)"
},
{
0x046d,
L"Logitech, Inc.",
0xc70d,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc70e,
L"MX1000 Bluetooth Laser Mouse"
},
{
0x046d,
L"Logitech, Inc.",
0xc70f,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc712,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc714,
L"diNovo Edge Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc715,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc71a,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc71d,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xc71f,
L"diNovo Mini Wireless Keyboard"
},
{
0x046d,
L"Logitech, Inc.",
0xc720,
L"Bluetooth wireless hub"
},
{
0x046d,
L"Logitech, Inc.",
0xca03,
L"MOMO Racing"
},
{
0x046d,
L"Logitech, Inc.",
0xca04,
L"Formula Vibration Feedback Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xca84,
L"Cordless Controller for Xbox"
},
{
0x046d,
L"Logitech, Inc.",
0xca88,
L"Thunderpad for Xbox"
},
{
0x046d,
L"Logitech, Inc.",
0xca8a,
L"Precision Vibration Feedback Wheel for Xbox"
},
{
0x046d,
L"Logitech, Inc.",
0xcaa3,
L"DriveFX Racing Wheel"
},
{
0x046d,
L"Logitech, Inc.",
0xcab1,
L"Cordless Keyboard for Wii HID Receiver"
},
{
0x046d,
L"Logitech, Inc.",
0xd001,
L"QuickCam Pro"
},
{
0x046d,
L"Logitech, Inc.",
0xf301,
L"Controller"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x0100,
L"Keyboard"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x3001,
L"Mass Storage Device"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x3002,
L"Mass Storage Device"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x3003,
L"Mass Storage Device"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x3005,
L"Mass Storage Device"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x3008,
L"Mass Storage Device"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5250,
L"KeyMaestro Multimedia Keyboard"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5273,
L"KeyMaestro Multimedia Keyboard"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x52e6,
L"Cordless Mouse"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5308,
L"KeyMaestro Keyboard"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5408,
L"KeyMaestro Multimedia Keyboard/Hub"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5500,
L"Portable Keyboard 86+9 keys (Model 6100C US)"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5550,
L"5 button optical mouse model M873U"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x5720,
L"Smart Card Reader"
},
{
0x046e,
L"Behavior Tech. Computer Corp.",
0x6782,
L"BTC 7932 mouse+keyboard"
},
{
0x046f,
L"Crystal Semiconductor",
0x0,
L"0"
},
{
0x0471,
L"Philips (or NXP)",
0x0101,
L"DSS350 Digital Speaker System"
},
{
0x0471,
L"Philips (or NXP)",
0x0104,
L"DSS330 Digital Speaker System [uda1321]"
},
{
0x0471,
L"Philips (or NXP)",
0x0105,
L"UDA1321"
},
{
0x0471,
L"Philips (or NXP)",
0x014f,
L"GoGear SA9200"
},
{
0x0471,
L"Philips (or NXP)",
0x0160,
L"MP3 Player"
},
{
0x0471,
L"Philips (or NXP)",
0x0161,
L"MP3 Player"
},
{
0x0471,
L"Philips (or NXP)",
0x0163,
L"GoGear SA1100"
},
{
0x0471,
L"Philips (or NXP)",
0x0164,
L"GoGear SA1110/02"
},
{
0x0471,
L"Philips (or NXP)",
0x0165,
L"GoGear SA1330"
},
{
0x0471,
L"Philips (or NXP)",
0x0201,
L"Hub"
},
{
0x0471,
L"Philips (or NXP)",
0x0222,
L"Creative Nomad Jukebox"
},
{
0x0471,
L"Philips (or NXP)",
0x0302,
L"PCA645VC Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0303,
L"PCA646VC Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0304,
L"Askey VC010 Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0307,
L"PCVC675K Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0308,
L"PCVC680K Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x030b,
L"PC VGA Camera (Vesta Fun)"
},
{
0x0471,
L"Philips (or NXP)",
0x030c,
L"PCVC690K Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0310,
L"PCVC730K Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0311,
L"PCVC740K ToUcam Pro [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0312,
L"PCVC750K Webcam [pwc]"
},
{
0x0471,
L"Philips (or NXP)",
0x0314,
L"DMVC 1000K"
},
{
0x0471,
L"Philips (or NXP)",
0x0316,
L"DMVC 2000K Video Capture"
},
{
0x0471,
L"Philips (or NXP)",
0x0321,
L"FunCam"
},
{
0x0471,
L"Philips (or NXP)",
0x0322,
L"DMVC1300K PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0325,
L"SPC 200NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0326,
L"SPC 300NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0327,
L"Webcam SPC 6000 NC (Webcam w/ mic)"
},
{
0x0471,
L"Philips (or NXP)",
0x0328,
L"SPC 700NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0329,
L"SPC 900NC PC Camera / ORITE CCD Webcam(PC370R)"
},
{
0x0471,
L"Philips (or NXP)",
0x032d,
L"SPC 210NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x032e,
L"SPC 315NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0330,
L"SPC 710NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0331,
L"SPC 1300NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0332,
L"SPC 1000NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0333,
L"SPC 620NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0334,
L"SPC 520/525NC PC Camera"
},
{
0x0471,
L"Philips (or NXP)",
0x0401,
L"Semiconductors CICT Keyboard"
},
{
0x0471,
L"Philips (or NXP)",
0x0402,
L"PS/2 Mouse on Semiconductors CICT Keyboard"
},
{
0x0471,
L"Philips (or NXP)",
0x0406,
L"15 inch Detachable Monitor"
},
{
0x0471,
L"Philips (or NXP)",
0x0407,
L"10 inch Mobile Monitor"
},
{
0x0471,
L"Philips (or NXP)",
0x0408,
L"SG3WA1/74 802.11b WLAN Adapter [Atmel AT76C503A]"
},
{
0x0471,
L"Philips (or NXP)",
0x0471,
L"Digital Speaker System"
},
{
0x0471,
L"Philips (or NXP)",
0x0601,
L"OVU1020 IR Dongle (Kbd+Mouse)"
},
{
0x0471,
L"Philips (or NXP)",
0x0602,
L"ATI Remote Wonder II Input Device"
},
{
0x0471,
L"Philips (or NXP)",
0x0603,
L"ATI Remote Wonder II Controller"
},
{
0x0471,
L"Philips (or NXP)",
0x0608,
L"eHome Infrared Receiver"
},
{
0x0471,
L"Philips (or NXP)",
0x060a,
L"TSU9600 Remote Control"
},
{
0x0471,
L"Philips (or NXP)",
0x060c,
L"Consumer Infrared Transceiver (HP)"
},
{
0x0471,
L"Philips (or NXP)",
0x060d,
L"Consumer Infrared Transceiver (SRM5100)"
},
{
0x0471,
L"Philips (or NXP)",
0x060e,
L"RF Dongle"
},
{
0x0471,
L"Philips (or NXP)",
0x060f,
L"Consumer Infrared Transceiver"
},
{
0x0471,
L"Philips (or NXP)",
0x0613,
L"Infrared Transceiver"
},
{
0x0471,
L"Philips (or NXP)",
0x0617,
L"IEEE802.15.4 RF Dongle"
},
{
0x0471,
L"Philips (or NXP)",
0x0619,
L"TSU9400 Remote Control"
},
{
0x0471,
L"Philips (or NXP)",
0x0666,
L"Hantek DDS-3005 Arbitrary Waveform Generator"
},
{
0x0471,
L"Philips (or NXP)",
0x0700,
L"Semiconductors CICT Hub"
},
{
0x0471,
L"Philips (or NXP)",
0x0701,
L"150P1 TFT Display"
},
{
0x0471,
L"Philips (or NXP)",
0x0809,
L"AVNET Bluetooth Device"
},
{
0x0471,
L"Philips (or NXP)",
0x0811,
L"JR24 CDRW"
},
{
0x0471,
L"Philips (or NXP)",
0x0814,
L"DCCX38/P data cable"
},
{
0x0471,
L"Philips (or NXP)",
0x0815,
L"eHome Infrared Receiver"
},
{
0x0471,
L"Philips (or NXP)",
0x0844,
L"SA2111/02 1GB Flash Audio Player"
},
{
0x0471,
L"Philips (or NXP)",
0x084a,
L"GoGear SA3125"
},
{
0x0471,
L"Philips (or NXP)",
0x084e,
L"GoGear SA60xx (mtp)"
},
{
0x0471,
L"Philips (or NXP)",
0x0888,
L"Hantek DDS-3005 Arbitrary Waveform Generator"
},
{
0x0471,
L"Philips (or NXP)",
0x1103,
L"Digital Speaker System"
},
{
0x0471,
L"Philips (or NXP)",
0x1120,
L"Creative Rhomba MP3 player"
},
{
0x0471,
L"Philips (or NXP)",
0x1125,
L"Nike psa[128max Player"
},
{
0x0471,
L"Philips (or NXP)",
0x1137,
L"HDD065 MP3 player"
},
{
0x0471,
L"Philips (or NXP)",
0x1201,
L"Arima Bluetooth Device"
},
{
0x0471,
L"Philips (or NXP)",
0x1230,
L"Wireless Adapter 11g"
},
{
0x0471,
L"Philips (or NXP)",
0x1232,
L"SNU6500 Wireless Adapter"
},
{
0x0471,
L"Philips (or NXP)",
0x1233,
L"Wireless Adapter Bootloader Download"
},
{
0x0471,
L"Philips (or NXP)",
0x1236,
L"SNU5600 802.11bg"
},
{
0x0471,
L"Philips (or NXP)",
0x1237,
L"TalkTalk SNU5630NS/05 802.11bg"
},
{
0x0471,
L"Philips (or NXP)",
0x1552,
L"ISP 1581 Hi-Speed USB MPEG2 Encoder Reference Kit"
},
{
0x0471,
L"Philips (or NXP)",
0x1801,
L"Diva MP3 player"
},
{
0x0471,
L"Philips (or NXP)",
0x200a,
L"Wireless Network Adapter"
},
{
0x0471,
L"Philips (or NXP)",
0x200f,
L"802.11n Wireless Adapter"
},
{
0x0471,
L"Philips (or NXP)",
0x2021,
L"SDE3273FC/97 2.5 SATA HDD Enclosure [INIC-1608L]"
},
{
0x0471,
L"Philips (or NXP)",
0x2022,
L"GoGear SA52XX"
},
{
0x0471,
L"Philips (or NXP)",
0x2034,
L"Webcam SPC530NC"
},
{
0x0471,
L"Philips (or NXP)",
0x2036,
L"Webcam SPC1030NC"
},
{
0x0471,
L"Philips (or NXP)",
0x203f,
L"TSU9200 Remote Control"
},
{
0x0471,
L"Philips (or NXP)",
0x2046,
L"TSU9800 Remote Control"
},
{
0x0471,
L"Philips (or NXP)",
0x204e,
L"GoGear RaGa (SA1942/02)"
},
{
0x0471,
L"Philips (or NXP)",
0x205e,
L"TSU9300 Remote Control"
},
{
0x0471,
L"Philips (or NXP)",
0x206c,
L"MCE IR Receiver - Spinel plusf0r ASUS"
},
{
0x0471,
L"Philips (or NXP)",
0x2070,
L"GoGear Mix"
},
{
0x0471,
L"Philips (or NXP)",
0x2076,
L"GoGear Aria"
},
{
0x0471,
L"Philips (or NXP)",
0x2079,
L"GoGear Opus"
},
{
0x0471,
L"Philips (or NXP)",
0x2088,
L"MCE IR Receiver with ALS- Spinel plus for ASUS"
},
{
0x0471,
L"Philips (or NXP)",
0x209e,
L"PTA01 Wireless Adapter"
},
{
0x0471,
L"Philips (or NXP)",
0x20b6,
L"GoGear Vibe"
},
{
0x0471,
L"Philips (or NXP)",
0x20d0,
L"SPZ2000 Webcam [PixArt PAC7332]"
},
{
0x0471,
L"Philips (or NXP)",
0x20e3,
L"GoGear Raga"
},
{
0x0471,
L"Philips (or NXP)",
0x20e4,
L"GoGear ViBE 8GB"
},
{
0x0471,
L"Philips (or NXP)",
0x2160,
L"Mio LINK Heart Rate Monitor"
},
{
0x0471,
L"Philips (or NXP)",
0x21e0,
L"GoGEAR Raga"
},
{
0x0471,
L"Philips (or NXP)",
0x262c,
L"SPC230NC Webcam"
},
{
0x0471,
L"Philips (or NXP)",
0x485d,
L"Senselock SenseIV v2.x"
},
{
0x0471,
L"Philips (or NXP)",
0xdf55,
L"LPCXpresso LPC-Link"
},
{
0x0472,
L"Chicony Electronics Co., Ltd",
0x0065,
L"PFU-65 Keyboard [Chicony]"
},
{
0x0472,
L"Chicony Electronics Co., Ltd",
0xb086,
L"Asus USB2.0 Webcam"
},
{
0x0472,
L"Chicony Electronics Co., Ltd",
0xb091,
L"Webcam"
},
{
0x0473,
L"Sanyo Information Business Co., Ltd",
0x0,
L"0"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0110,
L"Digital Voice Recorder R200"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0217,
L"Xacti J2"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x022f,
L"C5 Digital Media Camera (mass storage mode)"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0230,
L"C5 Digital Media Camera (PictBridge mode)"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0231,
L"C5 Digital Media Camera (PC control mode)"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0401,
L"Optical Drive"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0701,
L"SCP-4900 Cellphone"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x071f,
L"Usb Com Port Enumerator"
},
{
0x0474,
L"Sanyo Electric Co., Ltd",
0x0722,
L"W33SA Camera"
},
{
0x0475,
L"Relisys/Teco Information System",
0x0100,
L"NEC Petiscan"
},
{
0x0475,
L"Relisys/Teco Information System",
0x0103,
L"Eclipse 1200U/Episode"
},
{
0x0475,
L"Relisys/Teco Information System",
0x0210,
L"Scorpio Ultra 3"
},
{
0x0476,
L"AESP",
0x0,
L"0"
},
{
0x0477,
L"Seagate Technology, Inc.",
0x0,
L"0"
},
{
0x0478,
L"Connectix Corp.",
0x0001,
L"QuickCam"
},
{
0x0478,
L"Connectix Corp.",
0x0002,
L"QuickClip"
},
{
0x0478,
L"Connectix Corp.",
0x0003,
L"QuickCam Pro"
},
{
0x0479,
L"Advanced Peripheral Laboratories",
0x0,
L"0"
},
{
0x047a,
L"Semtech Corp.",
0x0004,
L"ScreenCoder UR7HCTS2-USB"
},
{
0x047b,
L"Silitek Corp.",
0x0001,
L"Keyboard"
},
{
0x047b,
L"Silitek Corp.",
0x0002,
L"Keyboard and Mouse"
},
{
0x047b,
L"Silitek Corp.",
0x0011,
L"SK-1688U Keyboard"
},
{
0x047b,
L"Silitek Corp.",
0x00f9,
L"SK-1789u Keyboard"
},
{
0x047b,
L"Silitek Corp.",
0x0101,
L"BlueTooth Keyboard and Mouse"
},
{
0x047b,
L"Silitek Corp.",
0x020b,
L"SK-3105 SmartCard Reader"
},
{
0x047b,
L"Silitek Corp.",
0x050e,
L"Internet Compact Keyboard"
},
{
0x047b,
L"Silitek Corp.",
0x1000,
L"Trust Office Scan USB 19200"
},
{
0x047b,
L"Silitek Corp.",
0x1002,
L"HP ScanJet 4300c Parallel Port"
},
{
0x047c,
L"Dell Computer Corp.",
0xffff,
L"UPS Tower 500W LV"
},
{
0x047d,
L"Kensington",
0x1001,
L"Mouse*in*a*Box"
},
{
0x047d,
L"Kensington",
0x1002,
L"Expert Mouse Pro"
},
{
0x047d,
L"Kensington",
0x1003,
L"Orbit TrackBall"
},
{
0x047d,
L"Kensington",
0x1004,
L"MouseWorks"
},
{
0x047d,
L"Kensington",
0x1005,
L"TurboBall"
},
{
0x047d,
L"Kensington",
0x1006,
L"TurboRing"
},
{
0x047d,
L"Kensington",
0x1009,
L"Orbit TrackBall for Mac"
},
{
0x047d,
L"Kensington",
0x1012,
L"PocketMouse"
},
{
0x047d,
L"Kensington",
0x1013,
L"Mouse*in*a*Box Optical Pro"
},
{
0x047d,
L"Kensington",
0x1014,
L"Expert Mouse Pro Wireless"
},
{
0x047d,
L"Kensington",
0x1015,
L"Expert Mouse"
},
{
0x047d,
L"Kensington",
0x1016,
L"ADB/USB Orbit"
},
{
0x047d,
L"Kensington",
0x1018,
L"Studio Mouse"
},
{
0x047d,
L"Kensington",
0x101d,
L"Mouse*in*a*Box Optical Pro"
},
{
0x047d,
L"Kensington",
0x101e,
L"Studio Mouse Wireless"
},
{
0x047d,
L"Kensington",
0x101f,
L"PocketMouse Pro"
},
{
0x047d,
L"Kensington",
0x1020,
L"Expert Mouse Trackball"
},
{
0x047d,
L"Kensington",
0x1021,
L"Expert Mouse Wireless"
},
{
0x047d,
L"Kensington",
0x1022,
L"Orbit Optical"
},
{
0x047d,
L"Kensington",
0x1023,
L"Pocket Mouse Pro Wireless"
},
{
0x047d,
L"Kensington",
0x1024,
L"PocketMouse"
},
{
0x047d,
L"Kensington",
0x1025,
L"Mouse*in*a*Box Optical Elite Wireless"
},
{
0x047d,
L"Kensington",
0x1026,
L"Pocket Mouse Pro"
},
{
0x047d,
L"Kensington",
0x1027,
L"StudioMouse"
},
{
0x047d,
L"Kensington",
0x1028,
L"StudioMouse Wireless"
},
{
0x047d,
L"Kensington",
0x1029,
L"Mouse*in*a*Box Optical Elite"
},
{
0x047d,
L"Kensington",
0x102a,
L"Mouse*in*a*Box Optical"
},
{
0x047d,
L"Kensington",
0x102b,
L"PocketMouse"
},
{
0x047d,
L"Kensington",
0x102c,
L"Iridio"
},
{
0x047d,
L"Kensington",
0x102d,
L"Pilot Optical"
},
{
0x047d,
L"Kensington",
0x102e,
L"Pilot Optical Pro"
},
{
0x047d,
L"Kensington",
0x102f,
L"Pilot Optical Pro Wireless"
},
{
0x047d,
L"Kensington",
0x1042,
L"Ci25m Notebook Optical Mouse [Diamond Eye Precision]"
},
{
0x047d,
L"Kensington",
0x1043,
L"Ci65m Wireless Notebook Optical Mouse"
},
{
0x047d,
L"Kensington",
0x104a,
L"PilotMouse Mini Retractable"
},
{
0x047d,
L"Kensington",
0x105d,
L"PocketMouse Bluetooth"
},
{
0x047d,
L"Kensington",
0x105e,
L"Bluetooth EDR Dongle"
},
{
0x047d,
L"Kensington",
0x1061,
L"PocketMouse Grip"
},
{
0x047d,
L"Kensington",
0x1062,
L"PocketMouse Max"
},
{
0x047d,
L"Kensington",
0x1063,
L"PocketMouse Max Wireless"
},
{
0x047d,
L"Kensington",
0x1064,
L"PocketMouse 2.0 Wireless"
},
{
0x047d,
L"Kensington",
0x1065,
L"PocketMouse 2.0"
},
{
0x047d,
L"Kensington",
0x1066,
L"PocketMouse Max Glow"
},
{
0x047d,
L"Kensington",
0x1067,
L"ValueMouse"
},
{
0x047d,
L"Kensington",
0x1068,
L"ValueOpt White"
},
{
0x047d,
L"Kensington",
0x1069,
L"ValueOpt Black"
},
{
0x047d,
L"Kensington",
0x106a,
L"PilotMouse Laser Wireless Mini"
},
{
0x047d,
L"Kensington",
0x106b,
L"PilotMouse Laser - 3 Button"
},
{
0x047d,
L"Kensington",
0x106c,
L"PilotMouse Laser - Gaming"
},
{
0x047d,
L"Kensington",
0x106d,
L"PilotMouse Laser - Wired"
},
{
0x047d,
L"Kensington",
0x106e,
L"PilotMouse Micro Laser"
},
{
0x047d,
L"Kensington",
0x1070,
L"ValueOpt Travel"
},
{
0x047d,
L"Kensington",
0x1071,
L"ValueOpt RF TX"
},
{
0x047d,
L"Kensington",
0x1072,
L"PocketMouse Colour"
},
{
0x047d,
L"Kensington",
0x1073,
L"PilotMouse Laser - 6 Button"
},
{
0x047d,
L"Kensington",
0x1074,
L"PilotMouse Laser Wireless Mini"
},
{
0x047d,
L"Kensington",
0x1075,
L"SlimBlade Presenter Media Mouse"
},
{
0x047d,
L"Kensington",
0x1076,
L"SlimBlade Media Mouse"
},
{
0x047d,
L"Kensington",
0x1077,
L"SlimBlade Presenter Mouse"
},
{
0x047d,
L"Kensington",
0x1152,
L"Bluetooth EDR Dongle"
},
{
0x047d,
L"Kensington",
0x2002,
L"Optical Elite Wireless"
},
{
0x047d,
L"Kensington",
0x2010,
L"Wireless Presentation Remote"
},
{
0x047d,
L"Kensington",
0x2012,
L"Wireless Presenter with Laser Pointer"
},
{
0x047d,
L"Kensington",
0x2021,
L"PilotBoard Wireless"
},
{
0x047d,
L"Kensington",
0x2030,
L"PilotBoard Wireless"
},
{
0x047d,
L"Kensington",
0x2034,
L"SlimBlade Media Notebook Set"
},
{
0x047d,
L"Kensington",
0x2041,
L"SlimBlade Trackball"
},
{
0x047d,
L"Kensington",
0x2048,
L"Orbit Trackball with Scroll Ring"
},
{
0x047d,
L"Kensington",
0x4003,
L"Gravis Xterminator Digital Gamepad"
},
{
0x047d,
L"Kensington",
0x4005,
L"Gravis Eliminator GamePad Pro"
},
{
0x047d,
L"Kensington",
0x4006,
L"Gravis Eliminator AfterShock"
},
{
0x047d,
L"Kensington",
0x4007,
L"Gravis Xterminator Force"
},
{
0x047d,
L"Kensington",
0x4008,
L"Gravis Destroyer TiltPad"
},
{
0x047d,
L"Kensington",
0x5001,
L"Cabo I Camera"
},
{
0x047d,
L"Kensington",
0x5002,
L"VideoCam CABO II"
},
{
0x047d,
L"Kensington",
0x5003,
L"VideoCam"
},
{
0x047e,
L"Agere Systems, Inc. (Lucent)",
0x0300,
L"ORiNOCO Card"
},
{
0x047e,
L"Agere Systems, Inc. (Lucent)",
0x1001,
L"USS720 Parallel Port"
},
{
0x047e,
L"Agere Systems, Inc. (Lucent)",
0x2892,
L"Systems Soft Modem"
},
{
0x047e,
L"Agere Systems, Inc. (Lucent)",
0xbad1,
L"Lucent 56k Modem"
},
{
0x047e,
L"Agere Systems, Inc. (Lucent)",
0xf101,
L"Atlas Modem"
},
{
0x047f,
L"Plantronics, Inc.",
0x0101,
L"Bulk Driver"
},
{
0x047f,
L"Plantronics, Inc.",
0x02ee,
L"BT600"
},
{
0x047f,
L"Plantronics, Inc.",
0x0301,
L"Bulk Driver"
},
{
0x047f,
L"Plantronics, Inc.",
0x0411,
L"Savi Office Base Station"
},
{
0x047f,
L"Plantronics, Inc.",
0x0ca1,
L"USB DSP v4 Audio Interface"
},
{
0x047f,
L"Plantronics, Inc.",
0x4254,
L"BUA-100 Bluetooth Adapter"
},
{
0x047f,
L"Plantronics, Inc.",
0xaa05,
L"DA45"
},
{
0x047f,
L"Plantronics, Inc.",
0xac01,
L"Savi 7xx"
},
{
0x047f,
L"Plantronics, Inc.",
0xad01,
L"GameCom 777 5.1 Headset"
},
{
0x047f,
L"Plantronics, Inc.",
0xaf01,
L"DA80"
},
{
0x047f,
L"Plantronics, Inc.",
0xc008,
L"Audio 655 DSP"
},
{
0x047f,
L"Plantronics, Inc.",
0xc00e,
L"Blackwire C310 headset"
},
{
0x047f,
L"Plantronics, Inc.",
0xc03b,
L"HD1"
},
{
0x0480,
L"Toshiba America Inc",
0x0001,
L"InTouch Module"
},
{
0x0480,
L"Toshiba America Inc",
0x0004,
L"InTouch Module"
},
{
0x0480,
L"Toshiba America Inc",
0x0011,
L"InTouch Module"
},
{
0x0480,
L"Toshiba America Inc",
0x0014,
L"InTouch Module"
},
{
0x0480,
L"Toshiba America Inc",
0x0100,
L"Stor.E Slim USB 3.0"
},
{
0x0480,
L"Toshiba America Inc",
0x0200,
L"External Disk"
},
{
0x0480,
L"Toshiba America Inc",
0x0820,
L"Canvio Advance Disk"
},
{
0x0480,
L"Toshiba America Inc",
0x0821,
L"Canvio Advance 2TB model DTC920"
},
{
0x0480,
L"Toshiba America Inc",
0x0900,
L"MQ04UBF100"
},
{
0x0480,
L"Toshiba America Inc",
0xa006,
L"External Disk 1.5TB"
},
{
0x0480,
L"Toshiba America Inc",
0xa007,
L"External Disk USB 3.0"
},
{
0x0480,
L"Toshiba America Inc",
0xa009,
L"Stor.E Basics"
},
{
0x0480,
L"Toshiba America Inc",
0xa00d,
L"STOR.E BASICS 500GB"
},
{
0x0480,
L"Toshiba America Inc",
0xa100,
L"Canvio Alu 2TB 2.5 Black External Disk Model HDTH320EK3CA"
},
{
0x0480,
L"Toshiba America Inc",
0xa102,
L"Canvio Alu 2TB 2.5 Black External Disk Model HDTH320EK3CA"
},
{
0x0480,
L"Toshiba America Inc",
0xa202,
L"Canvio Basics HDD"
},
{
0x0480,
L"Toshiba America Inc",
0xa208,
L"Canvio Basics 2TB USB 3.0 Portable Hard Drive"
},
{
0x0480,
L"Toshiba America Inc",
0xb001,
L"Stor.E Partner"
},
{
0x0480,
L"Toshiba America Inc",
0xb207,
L"Canvio Ready"
},
{
0x0480,
L"Toshiba America Inc",
0xd000,
L"External Disk 2TB Model DT01ABA200"
},
{
0x0480,
L"Toshiba America Inc",
0xd010,
L"External Disk 3TB"
},
{
0x0480,
L"Toshiba America Inc",
0xd011,
L"Canvio Desk"
},
{
0x0481,
L"Zenith Data Systems",
0x0,
L"0"
},
{
0x0482,
L"Kyocera Corp.",
0x000e,
L"FS-1020D Printer"
},
{
0x0482,
L"Kyocera Corp.",
0x000f,
L"FS-1920 Mono Printer"
},
{
0x0482,
L"Kyocera Corp.",
0x0015,
L"FS-1030D printer"
},
{
0x0482,
L"Kyocera Corp.",
0x0100,
L"Finecam S3x"
},
{
0x0482,
L"Kyocera Corp.",
0x0101,
L"Finecam S4"
},
{
0x0482,
L"Kyocera Corp.",
0x0103,
L"Finecam S5"
},
{
0x0482,
L"Kyocera Corp.",
0x0105,
L"Finecam L3"
},
{
0x0482,
L"Kyocera Corp.",
0x0106,
L"Finecam"
},
{
0x0482,
L"Kyocera Corp.",
0x0107,
L"Digital Camera Device"
},
{
0x0482,
L"Kyocera Corp.",
0x0108,
L"Digital Camera Device"
},
{
0x0482,
L"Kyocera Corp.",
0x0203,
L"AH-K3001V"
},
{
0x0482,
L"Kyocera Corp.",
0x0204,
L"iBurst Terminal"
},
{
0x0482,
L"Kyocera Corp.",
0x0408,
L"FS-1320D Printer"
},
{
0x0482,
L"Kyocera Corp.",
0x0640,
L"ECOSYS M6026cdn"
},
{
0x0482,
L"Kyocera Corp.",
0x069b,
L"ECOSYS M2635dn"
},
{
0x0483,
L"STMicroelectronics",
0x0137,
L"BeWAN ADSL USB ST (blue or green)"
},
{
0x0483,
L"STMicroelectronics",
0x0138,
L"Unicorn II (ST70138B + MTC-20174TQ chipset)"
},
{
0x0483,
L"STMicroelectronics",
0x0adb,
L"Android Debug Bridge (ADB) device"
},
{
0x0483,
L"STMicroelectronics",
0x0afb,
L"Android Fastboot device"
},
{
0x0483,
L"STMicroelectronics",
0x1307,
L"Cytronix 6in1 Card Reader"
},
{
0x0483,
L"STMicroelectronics",
0x163d,
L"Cool Icam Digi-MP3"
},
{
0x0483,
L"STMicroelectronics",
0x2015,
L"TouchChip® Fingerprint Reader"
},
{
0x0483,
L"STMicroelectronics",
0x2016,
L"Fingerprint Reader"
},
{
0x0483,
L"STMicroelectronics",
0x2017,
L"Biometric Smart Card Reader"
},
{
0x0483,
L"STMicroelectronics",
0x2018,
L"BioSimKey"
},
{
0x0483,
L"STMicroelectronics",
0x2302,
L"Portable Flash Device (PFD)"
},
{
0x0483,
L"STMicroelectronics",
0x3744,
L"ST-LINK/V1"
},
{
0x0483,
L"STMicroelectronics",
0x3747,
L"ST Micro Connect Lite"
},
{
0x0483,
L"STMicroelectronics",
0x3748,
L"ST-LINK/V2"
},
{
0x0483,
L"STMicroelectronics",
0x374b,
L"ST-LINK/V2.1"
},
{
0x0483,
L"STMicroelectronics",
0x374d,
L"STLINK-V3 Loader"
},
{
0x0483,
L"STMicroelectronics",
0x374e,
L"STLINK-V3"
},
{
0x0483,
L"STMicroelectronics",
0x374f,
L"STLINK-V3"
},
{
0x0483,
L"STMicroelectronics",
0x3752,
L"ST-LINK/V2.1"
},
{
0x0483,
L"STMicroelectronics",
0x3753,
L"STLINK-V3"
},
{
0x0483,
L"STMicroelectronics",
0x4810,
L"ISDN adapter"
},
{
0x0483,
L"STMicroelectronics",
0x481d,
L"BT Digital Access adapter"
},
{
0x0483,
L"STMicroelectronics",
0x5000,
L"ST Micro/Ergenic ERG BT-002 Bluetooth Adapter"
},
{
0x0483,
L"STMicroelectronics",
0x5001,
L"ST Micro Bluetooth Device"
},
{
0x0483,
L"STMicroelectronics",
0x5710,
L"Joystick in FS Mode"
},
{
0x0483,
L"STMicroelectronics",
0x5720,
L"Mass Storage Device"
},
{
0x0483,
L"STMicroelectronics",
0x5721,
L"Interrupt Demo"
},
{
0x0483,
L"STMicroelectronics",
0x5722,
L"Bulk Demo"
},
{
0x0483,
L"STMicroelectronics",
0x5730,
L"Audio Speaker"
},
{
0x0483,
L"STMicroelectronics",
0x5731,
L"Microphone"
},
{
0x0483,
L"STMicroelectronics",
0x5740,
L"Virtual COM Port"
},
{
0x0483,
L"STMicroelectronics",
0x5750,
L"LED badge -- mini LED display -- 11x44"
},
{
0x0483,
L"STMicroelectronics",
0x7270,
L"ST Micro Serial Bridge"
},
{
0x0483,
L"STMicroelectronics",
0x7554,
L"56k SoftModem"
},
{
0x0483,
L"STMicroelectronics",
0x8213,
L"ThermaData Logger Cradle"
},
{
0x0483,
L"STMicroelectronics",
0x8259,
L"Probe"
},
{
0x0483,
L"STMicroelectronics",
0x91d1,
L"Sensor Hub"
},
{
0x0483,
L"STMicroelectronics",
0xa171,
L"ThermaData WiFi"
},
{
0x0483,
L"STMicroelectronics",
0xa2e0,
L"BMeasure instrument"
},
{
0x0483,
L"STMicroelectronics",
0xdf11,
L"STM Device in DFU Mode"
},
{
0x0483,
L"STMicroelectronics",
0xff10,
L"Swann ST56 Modem"
},
{
0x0484,
L"Specialix",
0x0,
L"0"
},
{
0x0485,
L"Nokia Monitors",
0x0,
L"0"
},
{
0x0486,
L"ASUS Computers, Inc.",
0x0185,
L"EeePC T91MT HID Touch Panel"
},
{
0x0487,
L"Stewart Connector",
0x0,
L"0"
},
{
0x0488,
L"Cirque Corp.",
0x0,
L"0"
},
{
0x0489,
L"Foxconn / Hon Hai",
0x0502,
L"SmartMedia Card Reader Firmware Loader"
},
{
0x0489,
L"Foxconn / Hon Hai",
0x0503,
L"SmartMedia Card Reader"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xd00c,
L"Rollei Compactline (Storage Mode)"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xd00e,
L"Rollei Compactline (Video Mode)"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe000,
L"T-Com TC 300"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe003,
L"Pirelli DP-L10"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe00d,
L"Broadcom Bluetooth 2.1 Device"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe00f,
L"Foxconn T77H114 BCM2070 [Single-Chip Bluetooth 2.1 + EDR Adapter]"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe011,
L"Acer Bluetooth module"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe016,
L"Ubee PXU1900 WiMAX Adapter [Beceem BCSM250]"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe02c,
L"Atheros AR5BBU12 Bluetooth Device"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe032,
L"Broadcom BCM20702 Bluetooth"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe042,
L"Broadcom BCM20702 Bluetooth"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe04d,
L"Atheros AR3012 Bluetooth"
},
{
0x0489,
L"Foxconn / Hon Hai",
0xe055,
L"BCM43142A0 broadcom bluetooth"
},
{
0x048a,
L"S-MOS Systems, Inc.",
0x0,
L"0"
},
{
0x048c,
L"Alps Electric Ireland, Ltd",
0x0,
L"0"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x1165,
L"IT1165 Flash Controller"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x1172,
L"Flash Drive"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x1234,
L"Mass storage"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x1336,
L"SD/MMC Cardreader"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x1345,
L"Multi Cardreader"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9006,
L"IT9135 BDA Afatech DVB-T HDTV Dongle"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9009,
L"Zolid HD DVD Maker"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9135,
L"Zolid Mini DVB-T Stick"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9306,
L"IT930x DVB stick"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9503,
L"ITE it9503 feature-limited DVB-T transmission chip [ccHDtv]"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9507,
L"ITE it9507 full featured DVB-T transmission chip [ccHDtv]"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0x9910,
L"IT9910 chipset based grabber"
},
{
0x048d,
L"Integrated Technology Express, Inc.",
0xff59,
L"Hdmi-CEC Bridge"
},
{
0x048f,
L"Eicon Tech.",
0x0,
L"0"
},
{
0x0490,
L"United Microelectronics Corp.",
0x0,
L"0"
},
{
0x0491,
L"Capetronic",
0x0003,
L"Taxan Monitor Control"
},
{
0x0492,
L"Samsung SemiConductor, Inc.",
0x0140,
L"MP3 player"
},
{
0x0492,
L"Samsung SemiConductor, Inc.",
0x0141,
L"MP3 Player"
},
{
0x0493,
L"MAG Technology Co., Ltd",
0x0,
L"0"
},
{
0x0495,
L"ESS Technology, Inc.",
0x0,
L"0"
},
{
0x0496,
L"Micron Electronics",
0x0,
L"0"
},
{
0x0497,
L"Smile International",
0xc001,
L"Camera Device"
},
{
0x0498,
L"Capetronic (Kaohsiung) Corp.",
0x0,
L"0"
},
{
0x0499,
L"Yamaha Corp.",
0x1000,
L"UX256 MIDI I/F"
},
{
0x0499,
L"Yamaha Corp.",
0x1001,
L"MU1000"
},
{
0x0499,
L"Yamaha Corp.",
0x1002,
L"MU2000"
},
{
0x0499,
L"Yamaha Corp.",
0x1003,
L"MU500"
},
{
0x0499,
L"Yamaha Corp.",
0x1004,
L"UW500"
},
{
0x0499,
L"Yamaha Corp.",
0x1005,
L"MOTIF6"
},
{
0x0499,
L"Yamaha Corp.",
0x1006,
L"MOTIF7"
},
{
0x0499,
L"Yamaha Corp.",
0x1007,
L"MOTIF8"
},
{
0x0499,
L"Yamaha Corp.",
0x1008,
L"UX96 MIDI I/F"
},
{
0x0499,
L"Yamaha Corp.",
0x1009,
L"UX16 MIDI I/F"
},
{
0x0499,
L"Yamaha Corp.",
0x100a,
L"EOS BX"
},
{
0x0499,
L"Yamaha Corp.",
0x100c,
L"UC-MX"
},
{
0x0499,
L"Yamaha Corp.",
0x100d,
L"UC-KX"
},
{
0x0499,
L"Yamaha Corp.",
0x100e,
L"S08"
},
{
0x0499,
L"Yamaha Corp.",
0x100f,
L"CLP-150"
},
{
0x0499,
L"Yamaha Corp.",
0x1010,
L"CLP-170"
},
{
0x0499,
L"Yamaha Corp.",
0x1011,
L"P-250"
},
{
0x0499,
L"Yamaha Corp.",
0x1012,
L"TYROS"
},
{
0x0499,
L"Yamaha Corp.",
0x1013,
L"PF-500"
},
{
0x0499,
L"Yamaha Corp.",
0x1014,
L"S90"
},
{
0x0499,
L"Yamaha Corp.",
0x1015,
L"MOTIF-R"
},
{
0x0499,
L"Yamaha Corp.",
0x1016,
L"MDP-5"
},
{
0x0499,
L"Yamaha Corp.",
0x1017,
L"CVP-204"
},
{
0x0499,
L"Yamaha Corp.",
0x1018,
L"CVP-206"
},
{
0x0499,
L"Yamaha Corp.",
0x1019,
L"CVP-208"
},
{
0x0499,
L"Yamaha Corp.",
0x101a,
L"CVP-210"
},
{
0x0499,
L"Yamaha Corp.",
0x101b,
L"PSR-1100"
},
{
0x0499,
L"Yamaha Corp.",
0x101c,
L"PSR-2100"
},
{
0x0499,
L"Yamaha Corp.",
0x101d,
L"CLP-175"
},
{
0x0499,
L"Yamaha Corp.",
0x101e,
L"PSR-K1"
},
{
0x0499,
L"Yamaha Corp.",
0x101f,
L"EZ-J24"
},
{
0x0499,
L"Yamaha Corp.",
0x1020,
L"EZ-250i"
},
{
0x0499,
L"Yamaha Corp.",
0x1021,
L"MOTIF ES 6"
},
{
0x0499,
L"Yamaha Corp.",
0x1022,
L"MOTIF ES 7"
},
{
0x0499,
L"Yamaha Corp.",
0x1023,
L"MOTIF ES 8"
},
{
0x0499,
L"Yamaha Corp.",
0x1024,
L"CVP-301"
},
{
0x0499,
L"Yamaha Corp.",
0x1025,
L"CVP-303"
},
{
0x0499,
L"Yamaha Corp.",
0x1026,
L"CVP-305"
},
{
0x0499,
L"Yamaha Corp.",
0x1027,
L"CVP-307"
},
{
0x0499,
L"Yamaha Corp.",
0x1028,
L"CVP-309"
},
{
0x0499,
L"Yamaha Corp.",
0x1029,
L"CVP-309GP"
},
{
0x0499,
L"Yamaha Corp.",
0x102a,
L"PSR-1500"
},
{
0x0499,
L"Yamaha Corp.",
0x102b,
L"PSR-3000"
},
{
0x0499,
L"Yamaha Corp.",
0x102e,
L"ELS-01/01C"
},
{
0x0499,
L"Yamaha Corp.",
0x1030,
L"PSR-295/293"
},
{
0x0499,
L"Yamaha Corp.",
0x1031,
L"DGX-205/203"
},
{
0x0499,
L"Yamaha Corp.",
0x1032,
L"DGX-305"
},
{
0x0499,
L"Yamaha Corp.",
0x1033,
L"DGX-505"
},
{
0x0499,
L"Yamaha Corp.",
0x1037,
L"PSR-E403"
},
{
0x0499,
L"Yamaha Corp.",
0x103c,
L"MOTIF-RACK ES"
},
{
0x0499,
L"Yamaha Corp.",
0x1054,
L"S90XS Keyboard/Music Synthesizer"
},
{
0x0499,
L"Yamaha Corp.",
0x160f,
L"P-105"
},
{
0x0499,
L"Yamaha Corp.",
0x1613,
L"Clavinova CLP535"
},
{
0x0499,
L"Yamaha Corp.",
0x1617,
L"PSR-E353 digital keyboard"
},
{
0x0499,
L"Yamaha Corp.",
0x1704,
L"Steinberg UR44"
},
{
0x0499,
L"Yamaha Corp.",
0x2000,
L"DGP-7"
},
{
0x0499,
L"Yamaha Corp.",
0x2001,
L"DGP-5"
},
{
0x0499,
L"Yamaha Corp.",
0x3001,
L"YST-MS55D USB Speaker"
},
{
0x0499,
L"Yamaha Corp.",
0x3003,
L"YST-M45D USB Speaker"
},
{
0x0499,
L"Yamaha Corp.",
0x4000,
L"NetVolante RTA54i Broadband&ISDN Router"
},
{
0x0499,
L"Yamaha Corp.",
0x4001,
L"NetVolante RTW65b Broadband Wireless Router"
},
{
0x0499,
L"Yamaha Corp.",
0x4002,
L"NetVolante RTW65i Broadband&ISDN Wireless Router"
},
{
0x0499,
L"Yamaha Corp.",
0x4004,
L"NetVolante RTA55i Broadband VoIP Router"
},
{
0x0499,
L"Yamaha Corp.",
0x5000,
L"CS1D"
},
{
0x0499,
L"Yamaha Corp.",
0x5001,
L"DSP1D"
},
{
0x0499,
L"Yamaha Corp.",
0x5002,
L"DME32"
},
{
0x0499,
L"Yamaha Corp.",
0x5003,
L"DM2000"
},
{
0x0499,
L"Yamaha Corp.",
0x5004,
L"02R96"
},
{
0x0499,
L"Yamaha Corp.",
0x5005,
L"ACU16-C"
},
{
0x0499,
L"Yamaha Corp.",
0x5006,
L"NHB32-C"
},
{
0x0499,
L"Yamaha Corp.",
0x5007,
L"DM1000"
},
{
0x0499,
L"Yamaha Corp.",
0x5008,
L"01V96"
},
{
0x0499,
L"Yamaha Corp.",
0x5009,
L"SPX2000"
},
{
0x0499,
L"Yamaha Corp.",
0x500a,
L"PM5D"
},
{
0x0499,
L"Yamaha Corp.",
0x500b,
L"DME64N"
},
{
0x0499,
L"Yamaha Corp.",
0x500c,
L"DME24N"
},
{
0x0499,
L"Yamaha Corp.",
0x6001,
L"CRW2200UX Lightspeed 2 External CD-RW Drive"
},
{
0x0499,
L"Yamaha Corp.",
0x7000,
L"DTX"
},
{
0x0499,
L"Yamaha Corp.",
0x7010,
L"UB99"
},
{
0x049a,
L"Gandalf Technologies, Ltd",
0x0,
L"0"
},
{
0x049b,
L"Curtis Computer Products",
0x0,
L"0"
},
{
0x049c,
L"Acer Advanced Labs, Inc.",
0x0002,
L"Keyboard (?)"
},
{
0x049d,
L"VLSI Technology",
0x0,
L"0"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0002,
L"InkJet Color Printer"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0003,
L"iPAQ PocketPC"
},
{
0x049f,
L"Compaq Computer Corp.",
0x000e,
L"Internet Keyboard"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0012,
L"InkJet Color Printer"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0018,
L"PA-1/PA-2 MP3 Player"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0019,
L"InkJet Color Printer"
},
{
0x049f,
L"Compaq Computer Corp.",
0x001a,
L"S4 100 Scanner"
},
{
0x049f,
L"Compaq Computer Corp.",
0x001e,
L"IJ650 Inkjet Printer"
},
{
0x049f,
L"Compaq Computer Corp.",
0x001f,
L"WL215 Adapter"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0021,
L"S200 Scanner"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0027,
L"Bluetooth Multiport Module by Compaq"
},
{
0x049f,
L"Compaq Computer Corp.",
0x002a,
L"1400P Inkjet Printer"
},
{
0x049f,
L"Compaq Computer Corp.",
0x002b,
L"A3000"
},
{
0x049f,
L"Compaq Computer Corp.",
0x002c,
L"Lexmark X125"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0032,
L"802.11b Adapter [ipaq h5400]"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0033,
L"Wireless LAN MultiPort W100 [Intersil PRISM 2.5]"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0036,
L"Bluetooth Multiport Module"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0051,
L"KU-0133 Easy Access Interner Keyboard"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0076,
L"Wireless LAN MultiPort W200"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0080,
L"GPRS Multiport"
},
{
0x049f,
L"Compaq Computer Corp.",
0x0086,
L"Bluetooth Device"
},
{
0x049f,
L"Compaq Computer Corp.",
0x504a,
L"Personal Jukebox PJB100"
},
{
0x049f,
L"Compaq Computer Corp.",
0x505a,
L"Linux-USB CDC Subset Device, or Itsy (experimental)"
},
{
0x049f,
L"Compaq Computer Corp.",
0x8511,
L"iPAQ Networking 10/100 Ethernet [pegasus2]"
},
{
0x04a0,
L"Digital Equipment Corp.",
0x0,
L"0"
},
{
0x04a1,
L"SystemSoft Corp.",
0xfff0,
L"Telex Composite Device"
},
{
0x04a2,
L"FirePower Systems",
0x0,
L"0"
},
{
0x04a3,
L"Trident Microsystems, Inc.",
0x0,
L"0"
},
{
0x04a4,
L"Hitachi, Ltd",
0x0004,
L"DVD-CAM DZ-MV100A Camcorder"
},
{
0x04a4,
L"Hitachi, Ltd",
0x001e,
L"DVDCAM USB HS Interface"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x0001,
L"Keyboard"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x0002,
L"API Ergo K/B"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x0003,
L"API Generic K/B Mouse"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x12a6,
L"AcerScan C310U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x1a20,
L"Prisa 310U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x1a2a,
L"Prisa 620U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2022,
L"Prisa 320U/340U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2040,
L"Prisa 620UT"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x205e,
L"ScanPrisa 640BU"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2060,
L"Prisa 620U+/640U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x207e,
L"Prisa 640BU"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x209e,
L"ScanPrisa 640BT"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20ae,
L"S2W 3000U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20b0,
L"S2W 3300U/4300U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20be,
L"Prisa 640BT"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20c0,
L"Prisa 1240UT"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20de,
L"S2W 4300U+"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20f8,
L"Benq 5000"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20fc,
L"Benq 5000"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x20fe,
L"SW2 5300U"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2137,
L"Benq 5150/5250"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2202,
L"Benq 7400UT"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x2311,
L"Benq 5560"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x3003,
L"Benq Webcam"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x3008,
L"Benq 1500"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x300a,
L"Benq 3410"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x300c,
L"Benq 1016"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x3019,
L"Benq DC C40"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x4000,
L"P30 Composite Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x4013,
L"BenQ-Siemens EF82/SL91"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x4044,
L"BenQ-Siemens SF71"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x4045,
L"BenQ-Siemens E81"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x4048,
L"BenQ M7"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6001,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6002,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6003,
L"ATA/ATAPI Adapter"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6004,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6005,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6006,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6007,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6008,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6009,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600a,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600b,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600c,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600d,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600e,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x600f,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6010,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6011,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6012,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6013,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6014,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6015,
L"Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6125,
L"MP3 Player"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6180,
L"MP3 Player"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x6200,
L"MP3 Player"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x7500,
L"Hi-Speed Mass Storage Device"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x9000,
L"AWL300 Wireless Adapter"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x9001,
L"AWL400 Wireless Adapter"
},
{
0x04a5,
L"Acer Peripherals Inc. (now BenQ Corp.)",
0x9213,
L"Kbd Hub"
},
{
0x04a6,
L"Nokia Display Products",
0x00b9,
L"Audio"
},
{
0x04a6,
L"Nokia Display Products",
0x0180,
L"Hub Type P"
},
{
0x04a6,
L"Nokia Display Products",
0x0181,
L"HID Monitor Controls"
},
{
0x04a7,
L"Visioneer",
0x0100,
L"StrobePro"
},
{
0x04a7,
L"Visioneer",
0x0101,
L"Strobe Pro Scanner (1.01)"
},
{
0x04a7,
L"Visioneer",
0x0102,
L"StrobePro Scanner"
},
{
0x04a7,
L"Visioneer",
0x0211,
L"OneTouch 7600 Scanner"
},
{
0x04a7,
L"Visioneer",
0x0221,
L"OneTouch 5300 Scanner"
},
{
0x04a7,
L"Visioneer",
0x0223,
L"OneTouch 8200"
},
{
0x04a7,
L"Visioneer",
0x0224,
L"OneTouch 4800 USB/Microtek Scanport 3000"
},
{
0x04a7,
L"Visioneer",
0x0225,
L"VistaScan Astra 3600(ENG)"
},
{
0x04a7,
L"Visioneer",
0x0226,
L"OneTouch 5300 USB"
},
{
0x04a7,
L"Visioneer",
0x0229,
L"OneTouch 7100"
},
{
0x04a7,
L"Visioneer",
0x022a,
L"OneTouch 6600"
},
{
0x04a7,
L"Visioneer",
0x022c,
L"OneTouch 9000/9020"
},
{
0x04a7,
L"Visioneer",
0x0231,
L"6100 Scanner"
},
{
0x04a7,
L"Visioneer",
0x0311,
L"6200 EPP/USB Scanner"
},
{
0x04a7,
L"Visioneer",
0x0321,
L"OneTouch 8100 EPP/USB Scanner"
},
{
0x04a7,
L"Visioneer",
0x0331,
L"OneTouch 8600 EPP/USB Scanner"
},
{
0x04a7,
L"Visioneer",
0x0341,
L"6400"
},
{
0x04a7,
L"Visioneer",
0x0361,
L"VistaScan Astra 3600(ENG)"
},
{
0x04a7,
L"Visioneer",
0x0362,
L"OneTouch 9320"
},
{
0x04a7,
L"Visioneer",
0x0371,
L"OneTouch 8700/8920"
},
{
0x04a7,
L"Visioneer",
0x0380,
L"OneTouch 7700"
},
{
0x04a7,
L"Visioneer",
0x0382,
L"Photo Port 7700"
},
{
0x04a7,
L"Visioneer",
0x0390,
L"9650"
},
{
0x04a7,
L"Visioneer",
0x03a0,
L"Xerox 4800 One Touch"
},
{
0x04a7,
L"Visioneer",
0x0410,
L"OneTouch Pro 8800/8820"
},
{
0x04a7,
L"Visioneer",
0x0421,
L"9450 USB"
},
{
0x04a7,
L"Visioneer",
0x0423,
L"9750 Scanner"
},
{
0x04a7,
L"Visioneer",
0x0424,
L"Strobe XP 450"
},
{
0x04a7,
L"Visioneer",
0x0425,
L"Strobe XP 100"
},
{
0x04a7,
L"Visioneer",
0x0426,
L"Strobe XP 200"
},
{
0x04a7,
L"Visioneer",
0x0427,
L"Strobe XP 100"
},
{
0x04a7,
L"Visioneer",
0x0444,
L"OneTouch 7300"
},
{
0x04a7,
L"Visioneer",
0x0445,
L"CardReader 100"
},
{
0x04a7,
L"Visioneer",
0x0446,
L"Xerox DocuMate 510"
},
{
0x04a7,
L"Visioneer",
0x0447,
L"XEROX DocuMate 520"
},
{
0x04a7,
L"Visioneer",
0x0448,
L"XEROX DocuMate 250"
},
{
0x04a7,
L"Visioneer",
0x0449,
L"Xerox DocuMate 252"
},
{
0x04a7,
L"Visioneer",
0x044a,
L"Xerox 6400"
},
{
0x04a7,
L"Visioneer",
0x044c,
L"Xerox DocuMate 262"
},
{
0x04a7,
L"Visioneer",
0x0474,
L"Strobe XP 300"
},
{
0x04a7,
L"Visioneer",
0x0475,
L"Xerox DocuMate 272"
},
{
0x04a7,
L"Visioneer",
0x0478,
L"Strobe XP 220"
},
{
0x04a7,
L"Visioneer",
0x0479,
L"Strobe XP 470"
},
{
0x04a7,
L"Visioneer",
0x047a,
L"9450"
},
{
0x04a7,
L"Visioneer",
0x047b,
L"9650"
},
{
0x04a7,
L"Visioneer",
0x047d,
L"9420"
},
{
0x04a7,
L"Visioneer",
0x0480,
L"9520"
},
{
0x04a7,
L"Visioneer",
0x048f,
L"Strobe XP 470"
},
{
0x04a7,
L"Visioneer",
0x0491,
L"Strobe XP 450"
},
{
0x04a7,
L"Visioneer",
0x0493,
L"9750"
},
{
0x04a7,
L"Visioneer",
0x0494,
L"Strobe XP 120"
},
{
0x04a7,
L"Visioneer",
0x0497,
L"Patriot 430"
},
{
0x04a7,
L"Visioneer",
0x0498,
L"Patriot 680"
},
{
0x04a7,
L"Visioneer",
0x0499,
L"Patriot 780"
},
{
0x04a7,
L"Visioneer",
0x049b,
L"Strobe XP 100"
},
{
0x04a7,
L"Visioneer",
0x04a0,
L"7400"
},
{
0x04a7,
L"Visioneer",
0x04ac,
L"Xerox Travel Scanner 100"
},
{
0x04a7,
L"Visioneer",
0x04bb,
L"strobe 400 scanner"
},
{
0x04a7,
L"Visioneer",
0x04cd,
L"Xerox Travel Scanner 150"
},
{
0x04a8,
L"Multivideo Labs, Inc.",
0x0101,
L"Hub"
},
{
0x04a8,
L"Multivideo Labs, Inc.",
0x0303,
L"Peripheral Switch"
},
{
0x04a8,
L"Multivideo Labs, Inc.",
0x0404,
L"Peripheral Switch"
},
{
0x04a9,
L"Canon, Inc.",
0x1005,
L"BJ Printer Hub"
},
{
0x04a9,
L"Canon, Inc.",
0x1035,
L"PD Printer Storage"
},
{
0x04a9,
L"Canon, Inc.",
0x1050,
L"BJC-8200"
},
{
0x04a9,
L"Canon, Inc.",
0x1051,
L"BJC-3000 Color Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1052,
L"BJC-6100"
},
{
0x04a9,
L"Canon, Inc.",
0x1053,
L"BJC-6200"
},
{
0x04a9,
L"Canon, Inc.",
0x1054,
L"BJC-6500"
},
{
0x04a9,
L"Canon, Inc.",
0x1055,
L"BJC-85"
},
{
0x04a9,
L"Canon, Inc.",
0x1056,
L"BJC-2110 Color Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1057,
L"LR1"
},
{
0x04a9,
L"Canon, Inc.",
0x105a,
L"BJC-55"
},
{
0x04a9,
L"Canon, Inc.",
0x105b,
L"S600 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x105c,
L"S400"
},
{
0x04a9,
L"Canon, Inc.",
0x105d,
L"S450 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x105e,
L"S800"
},
{
0x04a9,
L"Canon, Inc.",
0x1062,
L"S500 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1063,
L"S4500"
},
{
0x04a9,
L"Canon, Inc.",
0x1064,
L"S300 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1065,
L"S100"
},
{
0x04a9,
L"Canon, Inc.",
0x1066,
L"S630"
},
{
0x04a9,
L"Canon, Inc.",
0x1067,
L"S900"
},
{
0x04a9,
L"Canon, Inc.",
0x1068,
L"S9000"
},
{
0x04a9,
L"Canon, Inc.",
0x1069,
L"S820"
},
{
0x04a9,
L"Canon, Inc.",
0x106a,
L"S200 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x106b,
L"S520 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x106d,
L"S750 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x106e,
L"S820D"
},
{
0x04a9,
L"Canon, Inc.",
0x1070,
L"S530D"
},
{
0x04a9,
L"Canon, Inc.",
0x1072,
L"I850 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1073,
L"I550 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1074,
L"S330 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1076,
L"i70"
},
{
0x04a9,
L"Canon, Inc.",
0x1077,
L"i950"
},
{
0x04a9,
L"Canon, Inc.",
0x107a,
L"S830D"
},
{
0x04a9,
L"Canon, Inc.",
0x107b,
L"i320"
},
{
0x04a9,
L"Canon, Inc.",
0x107c,
L"i470D"
},
{
0x04a9,
L"Canon, Inc.",
0x107d,
L"i9100"
},
{
0x04a9,
L"Canon, Inc.",
0x107e,
L"i450"
},
{
0x04a9,
L"Canon, Inc.",
0x107f,
L"i860"
},
{
0x04a9,
L"Canon, Inc.",
0x1082,
L"i350"
},
{
0x04a9,
L"Canon, Inc.",
0x1084,
L"i250"
},
{
0x04a9,
L"Canon, Inc.",
0x1085,
L"i255"
},
{
0x04a9,
L"Canon, Inc.",
0x1086,
L"i560"
},
{
0x04a9,
L"Canon, Inc.",
0x1088,
L"i965"
},
{
0x04a9,
L"Canon, Inc.",
0x108a,
L"i455"
},
{
0x04a9,
L"Canon, Inc.",
0x108b,
L"i900D"
},
{
0x04a9,
L"Canon, Inc.",
0x108c,
L"i475D"
},
{
0x04a9,
L"Canon, Inc.",
0x108d,
L"PIXMA iP2000"
},
{
0x04a9,
L"Canon, Inc.",
0x108f,
L"i80"
},
{
0x04a9,
L"Canon, Inc.",
0x1090,
L"i9900 Photo Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1091,
L"PIXMA iP1500"
},
{
0x04a9,
L"Canon, Inc.",
0x1093,
L"PIXMA iP4000"
},
{
0x04a9,
L"Canon, Inc.",
0x1094,
L"PIXMA iP3000x Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x1095,
L"PIXMA iP6000D"
},
{
0x04a9,
L"Canon, Inc.",
0x1097,
L"PIXMA iP5000"
},
{
0x04a9,
L"Canon, Inc.",
0x1098,
L"PIXMA iP1000"
},
{
0x04a9,
L"Canon, Inc.",
0x1099,
L"PIXMA iP8500"
},
{
0x04a9,
L"Canon, Inc.",
0x109c,
L"PIXMA iP4000R"
},
{
0x04a9,
L"Canon, Inc.",
0x109d,
L"iP90"
},
{
0x04a9,
L"Canon, Inc.",
0x10a0,
L"PIXMA iP1600 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10a2,
L"iP4200"
},
{
0x04a9,
L"Canon, Inc.",
0x10a4,
L"iP5200R"
},
{
0x04a9,
L"Canon, Inc.",
0x10a5,
L"iP5200"
},
{
0x04a9,
L"Canon, Inc.",
0x10a7,
L"iP6210D"
},
{
0x04a9,
L"Canon, Inc.",
0x10a8,
L"iP6220D"
},
{
0x04a9,
L"Canon, Inc.",
0x10a9,
L"iP6600D"
},
{
0x04a9,
L"Canon, Inc.",
0x10b6,
L"PIXMA iP4300 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10b7,
L"PIXMA iP5300 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10c2,
L"PIXMA iP1800 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10c4,
L"Pixma iP4500 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10c9,
L"PIXMA iP4600 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10ca,
L"PIXMA iP3600 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x10e3,
L"PIXMA iX6850 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x12fe,
L"Printer in service mode"
},
{
0x04a9,
L"Canon, Inc.",
0x1404,
L"W6400PG"
},
{
0x04a9,
L"Canon, Inc.",
0x1405,
L"W8400PG"
},
{
0x04a9,
L"Canon, Inc.",
0x150f,
L"BIJ2350 PCL"
},
{
0x04a9,
L"Canon, Inc.",
0x1510,
L"BIJ1350 PCL"
},
{
0x04a9,
L"Canon, Inc.",
0x1512,
L"BIJ1350D PCL"
},
{
0x04a9,
L"Canon, Inc.",
0x1601,
L"DR-2080C Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1607,
L"DR-6080 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1608,
L"DR-2580C Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1609,
L"DR-3080CII"
},
{
0x04a9,
L"Canon, Inc.",
0x160a,
L"DR-2050C Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1700,
L"PIXMA MP110 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1701,
L"PIXMA MP130 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1702,
L"MP410 Composite"
},
{
0x04a9,
L"Canon, Inc.",
0x1703,
L"MP430 Composite"
},
{
0x04a9,
L"Canon, Inc.",
0x1704,
L"MP330 Composite"
},
{
0x04a9,
L"Canon, Inc.",
0x1706,
L"PIXMA MP750 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1707,
L"PIXMA MP780/MP790"
},
{
0x04a9,
L"Canon, Inc.",
0x1708,
L"PIXMA MP760/MP770"
},
{
0x04a9,
L"Canon, Inc.",
0x1709,
L"PIXMA MP150 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x170a,
L"PIXMA MP170 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x170b,
L"PIXMA MP450 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x170c,
L"PIXMA MP500 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x170d,
L"PIXMA MP800 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x170e,
L"PIXMA MP800R"
},
{
0x04a9,
L"Canon, Inc.",
0x1710,
L"MP950"
},
{
0x04a9,
L"Canon, Inc.",
0x1712,
L"PIXMA MP530"
},
{
0x04a9,
L"Canon, Inc.",
0x1713,
L"PIXMA MP830 Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x1714,
L"MP160"
},
{
0x04a9,
L"Canon, Inc.",
0x1715,
L"PIXMA MP180"
},
{
0x04a9,
L"Canon, Inc.",
0x1716,
L"PIXMA MP460"
},
{
0x04a9,
L"Canon, Inc.",
0x1717,
L"PIXMA MP510"
},
{
0x04a9,
L"Canon, Inc.",
0x1718,
L"PIXMA MP600"
},
{
0x04a9,
L"Canon, Inc.",
0x1719,
L"PIXMA MP600R"
},
{
0x04a9,
L"Canon, Inc.",
0x171a,
L"PIXMA MP810"
},
{
0x04a9,
L"Canon, Inc.",
0x171b,
L"PIXMA MP960"
},
{
0x04a9,
L"Canon, Inc.",
0x171c,
L"PIXMA MX7600"
},
{
0x04a9,
L"Canon, Inc.",
0x1721,
L"PIXMA MP210"
},
{
0x04a9,
L"Canon, Inc.",
0x1722,
L"PIXMA MP220"
},
{
0x04a9,
L"Canon, Inc.",
0x1723,
L"PIXMA MP470"
},
{
0x04a9,
L"Canon, Inc.",
0x1724,
L"PIXMA MP520 series"
},
{
0x04a9,
L"Canon, Inc.",
0x1725,
L"PIXMA MP610"
},
{
0x04a9,
L"Canon, Inc.",
0x1726,
L"PIXMA MP970"
},
{
0x04a9,
L"Canon, Inc.",
0x1727,
L"PIXMA MX300"
},
{
0x04a9,
L"Canon, Inc.",
0x1728,
L"PIXMA MX310 series"
},
{
0x04a9,
L"Canon, Inc.",
0x1729,
L"PIXMA MX700"
},
{
0x04a9,
L"Canon, Inc.",
0x172b,
L"MP140 ser"
},
{
0x04a9,
L"Canon, Inc.",
0x172c,
L"PIXMA MX850"
},
{
0x04a9,
L"Canon, Inc.",
0x172d,
L"PIXMA MP980"
},
{
0x04a9,
L"Canon, Inc.",
0x172e,
L"PIXMA MP630"
},
{
0x04a9,
L"Canon, Inc.",
0x172f,
L"PIXMA MP620"
},
{
0x04a9,
L"Canon, Inc.",
0x1730,
L"PIXMA MP540"
},
{
0x04a9,
L"Canon, Inc.",
0x1731,
L"PIXMA MP480"
},
{
0x04a9,
L"Canon, Inc.",
0x1732,
L"PIXMA MP240"
},
{
0x04a9,
L"Canon, Inc.",
0x1733,
L"PIXMA MP260"
},
{
0x04a9,
L"Canon, Inc.",
0x1734,
L"PIXMA MP190"
},
{
0x04a9,
L"Canon, Inc.",
0x1735,
L"PIXMA MX860"
},
{
0x04a9,
L"Canon, Inc.",
0x1736,
L"PIXMA MX320 series"
},
{
0x04a9,
L"Canon, Inc.",
0x1737,
L"PIXMA MX330"
},
{
0x04a9,
L"Canon, Inc.",
0x173a,
L"PIXMA MP250"
},
{
0x04a9,
L"Canon, Inc.",
0x173b,
L"PIXMA MP270 All-In-One Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x173c,
L"PIXMA MP490"
},
{
0x04a9,
L"Canon, Inc.",
0x173d,
L"PIXMA MP550"
},
{
0x04a9,
L"Canon, Inc.",
0x173e,
L"PIXMA MP560"
},
{
0x04a9,
L"Canon, Inc.",
0x173f,
L"PIXMA MP640"
},
{
0x04a9,
L"Canon, Inc.",
0x1740,
L"PIXMA MP990"
},
{
0x04a9,
L"Canon, Inc.",
0x1741,
L"PIXMA MX340"
},
{
0x04a9,
L"Canon, Inc.",
0x1742,
L"PIXMA MX350"
},
{
0x04a9,
L"Canon, Inc.",
0x1743,
L"PIXMA MX870"
},
{
0x04a9,
L"Canon, Inc.",
0x1746,
L"PIXMA MP280"
},
{
0x04a9,
L"Canon, Inc.",
0x1747,
L"PIXMA MP495"
},
{
0x04a9,
L"Canon, Inc.",
0x1748,
L"PIXMA MG5100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1749,
L"PIXMA MG5200 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x174a,
L"PIXMA MG6100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x174b,
L"PIXMA MG8100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x174d,
L"PIXMA MX360"
},
{
0x04a9,
L"Canon, Inc.",
0x174e,
L"PIXMA MX410"
},
{
0x04a9,
L"Canon, Inc.",
0x174f,
L"PIXMA MX420"
},
{
0x04a9,
L"Canon, Inc.",
0x1750,
L"PIXMA MX880 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1752,
L"PIXMA MG3100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1753,
L"PIXMA MG4100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1754,
L"PIXMA MG5300 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1755,
L"PIXMA MG6200 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1756,
L"PIXMA MG8200 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1757,
L"PIXMA MP493"
},
{
0x04a9,
L"Canon, Inc.",
0x1759,
L"PIXMA MX370 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x175b,
L"PIXMA MX430 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x175c,
L"PIXMA MX510 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x175d,
L"PIXMA MX710 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x175e,
L"PIXMA MX890 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x175f,
L"PIXMA MP230"
},
{
0x04a9,
L"Canon, Inc.",
0x1762,
L"PIXMA MG3200 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1763,
L"PIXMA MG4200 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1764,
L"PIXMA MG5400 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1765,
L"PIXMA MG6300 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1766,
L"PIXMA MX390 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1768,
L"PIXMA MX450 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1769,
L"PIXMA MX520 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x176a,
L"PIXMA MX720 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x176b,
L"PIXMA MX920 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x176d,
L"PIXMA MG2500 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x176e,
L"PIXMA MG3500 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x176f,
L"PIXMA MG6500 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1770,
L"PIXMA MG6400 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1771,
L"PIXMA MG5500 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1772,
L"PIXMA MG7100 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1774,
L"PIXMA MX470 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1775,
L"PIXMA MX530 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x177c,
L"PIXMA MG7500 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x177e,
L"PIXMA MG6600 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x177f,
L"PIXMA MG5600 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1780,
L"PIXMA MG2900 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x1787,
L"PIXMA MX490 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x178a,
L"PIXMA MG3600 Series"
},
{
0x04a9,
L"Canon, Inc.",
0x178d,
L"PIXMA MG6853"
},
{
0x04a9,
L"Canon, Inc.",
0x180b,
L"PIXMA MG3000 series"
},
{
0x04a9,
L"Canon, Inc.",
0x1856,
L"PIXMA TS6250"
},
{
0x04a9,
L"Canon, Inc.",
0x1900,
L"CanoScan LiDE 90"
},
{
0x04a9,
L"Canon, Inc.",
0x1901,
L"CanoScan 8800F"
},
{
0x04a9,
L"Canon, Inc.",
0x1904,
L"CanoScan LiDE 100"
},
{
0x04a9,
L"Canon, Inc.",
0x1905,
L"CanoScan LiDE 200"
},
{
0x04a9,
L"Canon, Inc.",
0x1906,
L"CanoScan 5600F"
},
{
0x04a9,
L"Canon, Inc.",
0x1907,
L"CanoScan LiDE 700F"
},
{
0x04a9,
L"Canon, Inc.",
0x1909,
L"CanoScan LiDE 110"
},
{
0x04a9,
L"Canon, Inc.",
0x190a,
L"CanoScan LiDE 210"
},
{
0x04a9,
L"Canon, Inc.",
0x190d,
L"CanoScan 9000F Mark II"
},
{
0x04a9,
L"Canon, Inc.",
0x190e,
L"CanoScan LiDE 120"
},
{
0x04a9,
L"Canon, Inc.",
0x190f,
L"CanoScan LiDE 220"
},
{
0x04a9,
L"Canon, Inc.",
0x2200,
L"CanoScan LiDE 25"
},
{
0x04a9,
L"Canon, Inc.",
0x2201,
L"CanoScan FB320U"
},
{
0x04a9,
L"Canon, Inc.",
0x2202,
L"CanoScan FB620U"
},
{
0x04a9,
L"Canon, Inc.",
0x2204,
L"CanoScan FB630U"
},
{
0x04a9,
L"Canon, Inc.",
0x2205,
L"CanoScan FB1210U"
},
{
0x04a9,
L"Canon, Inc.",
0x2206,
L"CanoScan N650U/N656U"
},
{
0x04a9,
L"Canon, Inc.",
0x2207,
L"CanoScan 1220U"
},
{
0x04a9,
L"Canon, Inc.",
0x2208,
L"CanoScan D660U"
},
{
0x04a9,
L"Canon, Inc.",
0x220a,
L"CanoScan D2400UF"
},
{
0x04a9,
L"Canon, Inc.",
0x220b,
L"CanoScan D646U"
},
{
0x04a9,
L"Canon, Inc.",
0x220c,
L"CanoScan D1250U2"
},
{
0x04a9,
L"Canon, Inc.",
0x220d,
L"CanoScan N670U/N676U/LiDE 20"
},
{
0x04a9,
L"Canon, Inc.",
0x220e,
L"CanoScan N1240U/LiDE 30"
},
{
0x04a9,
L"Canon, Inc.",
0x220f,
L"CanoScan 8000F"
},
{
0x04a9,
L"Canon, Inc.",
0x2210,
L"CanoScan 9900F"
},
{
0x04a9,
L"Canon, Inc.",
0x2212,
L"CanoScan 5000F"
},
{
0x04a9,
L"Canon, Inc.",
0x2213,
L"CanoScan LiDE 50/LiDE 35/LiDE 40"
},
{
0x04a9,
L"Canon, Inc.",
0x2214,
L"CanoScan LiDE 80"
},
{
0x04a9,
L"Canon, Inc.",
0x2215,
L"CanoScan 3000/3000F/3000ex"
},
{
0x04a9,
L"Canon, Inc.",
0x2216,
L"CanoScan 3200F"
},
{
0x04a9,
L"Canon, Inc.",
0x2217,
L"CanoScan 5200F"
},
{
0x04a9,
L"Canon, Inc.",
0x2219,
L"CanoScan 9950F"
},
{
0x04a9,
L"Canon, Inc.",
0x221b,
L"CanoScan 4200F"
},
{
0x04a9,
L"Canon, Inc.",
0x221c,
L"CanoScan LiDE 60"
},
{
0x04a9,
L"Canon, Inc.",
0x221e,
L"CanoScan 8400F"
},
{
0x04a9,
L"Canon, Inc.",
0x221f,
L"CanoScan LiDE 500F"
},
{
0x04a9,
L"Canon, Inc.",
0x2220,
L"CanoScan LIDE 25"
},
{
0x04a9,
L"Canon, Inc.",
0x2224,
L"CanoScan LiDE 600F"
},
{
0x04a9,
L"Canon, Inc.",
0x2225,
L"CanoScan LiDE 70"
},
{
0x04a9,
L"Canon, Inc.",
0x2228,
L"CanoScan 4400F"
},
{
0x04a9,
L"Canon, Inc.",
0x2229,
L"CanoScan 8600F"
},
{
0x04a9,
L"Canon, Inc.",
0x2602,
L"MultiPASS C555"
},
{
0x04a9,
L"Canon, Inc.",
0x2603,
L"MultiPASS C755"
},
{
0x04a9,
L"Canon, Inc.",
0x260a,
L"LBP810"
},
{
0x04a9,
L"Canon, Inc.",
0x260e,
L"LBP-2000"
},
{
0x04a9,
L"Canon, Inc.",
0x2610,
L"MPC600F"
},
{
0x04a9,
L"Canon, Inc.",
0x2611,
L"SmartBase MPC400"
},
{
0x04a9,
L"Canon, Inc.",
0x2612,
L"MultiPASS C855"
},
{
0x04a9,
L"Canon, Inc.",
0x2617,
L"LBP1210"
},
{
0x04a9,
L"Canon, Inc.",
0x261a,
L"iR1600"
},
{
0x04a9,
L"Canon, Inc.",
0x261b,
L"iR1610"
},
{
0x04a9,
L"Canon, Inc.",
0x261c,
L"iC2300"
},
{
0x04a9,
L"Canon, Inc.",
0x261f,
L"MPC200 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x2621,
L"iR2000"
},
{
0x04a9,
L"Canon, Inc.",
0x2622,
L"iR2010"
},
{
0x04a9,
L"Canon, Inc.",
0x2623,
L"FAX-B180C"
},
{
0x04a9,
L"Canon, Inc.",
0x2629,
L"FAXPHONE L75"
},
{
0x04a9,
L"Canon, Inc.",
0x262b,
L"LaserShot LBP-1120 Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x262c,
L"imageCLASS D300"
},
{
0x04a9,
L"Canon, Inc.",
0x262d,
L"iR C3200"
},
{
0x04a9,
L"Canon, Inc.",
0x262f,
L"PIXMA MP730"
},
{
0x04a9,
L"Canon, Inc.",
0x2630,
L"PIXMA MP700"
},
{
0x04a9,
L"Canon, Inc.",
0x2631,
L"LASER CLASS 700"
},
{
0x04a9,
L"Canon, Inc.",
0x2632,
L"FAX-L2000"
},
{
0x04a9,
L"Canon, Inc.",
0x2633,
L"LASERCLASS 500"
},
{
0x04a9,
L"Canon, Inc.",
0x2634,
L"PC-D300/FAX-L400/ICD300"
},
{
0x04a9,
L"Canon, Inc.",
0x2635,
L"MPC190"
},
{
0x04a9,
L"Canon, Inc.",
0x2636,
L"LBP3200"
},
{
0x04a9,
L"Canon, Inc.",
0x2637,
L"iR C6800"
},
{
0x04a9,
L"Canon, Inc.",
0x2638,
L"iR C3100"
},
{
0x04a9,
L"Canon, Inc.",
0x263c,
L"PIXMA MP360"
},
{
0x04a9,
L"Canon, Inc.",
0x263d,
L"PIXMA MP370"
},
{
0x04a9,
L"Canon, Inc.",
0x263e,
L"PIXMA MP390"
},
{
0x04a9,
L"Canon, Inc.",
0x263f,
L"PIXMA MP375R"
},
{
0x04a9,
L"Canon, Inc.",
0x2646,
L"MF5530 Scanner Device V1.9.1"
},
{
0x04a9,
L"Canon, Inc.",
0x2647,
L"MF5550 Composite"
},
{
0x04a9,
L"Canon, Inc.",
0x264c,
L"PIXMA MP740"
},
{
0x04a9,
L"Canon, Inc.",
0x264d,
L"PIXMA MP710"
},
{
0x04a9,
L"Canon, Inc.",
0x264e,
L"MF5630"
},
{
0x04a9,
L"Canon, Inc.",
0x264f,
L"MF5650 (FAX)"
},
{
0x04a9,
L"Canon, Inc.",
0x2650,
L"iR 6800C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x2651,
L"iR 3100C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x2654,
L"LBP3600"
},
{
0x04a9,
L"Canon, Inc.",
0x2655,
L"FP-L170/MF350/L380/L398"
},
{
0x04a9,
L"Canon, Inc.",
0x2656,
L"iR1510-1670 CAPT Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x2657,
L"LBP3210"
},
{
0x04a9,
L"Canon, Inc.",
0x2659,
L"MF8100"
},
{
0x04a9,
L"Canon, Inc.",
0x265b,
L"CAPT Printer"
},
{
0x04a9,
L"Canon, Inc.",
0x265c,
L"iR C3220"
},
{
0x04a9,
L"Canon, Inc.",
0x265d,
L"MF5730"
},
{
0x04a9,
L"Canon, Inc.",
0x265e,
L"MF5750"
},
{
0x04a9,
L"Canon, Inc.",
0x265f,
L"MF5770"
},
{
0x04a9,
L"Canon, Inc.",
0x2660,
L"MF3110"
},
{
0x04a9,
L"Canon, Inc.",
0x2663,
L"iR3570/iR4570"
},
{
0x04a9,
L"Canon, Inc.",
0x2664,
L"iR2270/iR2870"
},
{
0x04a9,
L"Canon, Inc.",
0x2665,
L"iR C2620"
},
{
0x04a9,
L"Canon, Inc.",
0x2666,
L"iR C5800"
},
{
0x04a9,
L"Canon, Inc.",
0x2667,
L"iR85PLUS"
},
{
0x04a9,
L"Canon, Inc.",
0x2669,
L"iR105PLUS"
},
{
0x04a9,
L"Canon, Inc.",
0x266a,
L"LBP3000"
},
{
0x04a9,
L"Canon, Inc.",
0x266b,
L"iR8070"
},
{
0x04a9,
L"Canon, Inc.",
0x266c,
L"iR9070"
},
{
0x04a9,
L"Canon, Inc.",
0x266d,
L"iR 5800C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x266e,
L"CAPT Device"
},
{
0x04a9,
L"Canon, Inc.",
0x266f,
L"iR2230"
},
{
0x04a9,
L"Canon, Inc.",
0x2670,
L"iR3530"
},
{
0x04a9,
L"Canon, Inc.",
0x2671,
L"iR5570/iR6570"
},
{
0x04a9,
L"Canon, Inc.",
0x2672,
L"iR C3170"
},
{
0x04a9,
L"Canon, Inc.",
0x2673,
L"iR 3170C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x2674,
L"FAX-L120"
},
{
0x04a9,
L"Canon, Inc.",
0x2675,
L"iR2830"
},
{
0x04a9,
L"Canon, Inc.",
0x2676,
L"LBP2900"
},
{
0x04a9,
L"Canon, Inc.",
0x2677,
L"iR C2570"
},
{
0x04a9,
L"Canon, Inc.",
0x2678,
L"iR 2570C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x2679,
L"LBP5000"
},
{
0x04a9,
L"Canon, Inc.",
0x267a,
L"iR2016"
},
{
0x04a9,
L"Canon, Inc.",
0x267b,
L"iR2020"
},
{
0x04a9,
L"Canon, Inc.",
0x267d,
L"MF7100 series"
},
{
0x04a9,
L"Canon, Inc.",
0x267e,
L"LBP3300"
},
{
0x04a9,
L"Canon, Inc.",
0x2684,
L"MF3200 series"
},
{
0x04a9,
L"Canon, Inc.",
0x2686,
L"MF6500 series"
},
{
0x04a9,
L"Canon, Inc.",
0x2687,
L"iR4530"
},
{
0x04a9,
L"Canon, Inc.",
0x2688,
L"LBP3460"
},
{
0x04a9,
L"Canon, Inc.",
0x2689,
L"FAX-L180/L380S/L398S"
},
{
0x04a9,
L"Canon, Inc.",
0x268a,
L"LC310/L390/L408S"
},
{
0x04a9,
L"Canon, Inc.",
0x268b,
L"LBP3500"
},
{
0x04a9,
L"Canon, Inc.",
0x268c,
L"iR C6870"
},
{
0x04a9,
L"Canon, Inc.",
0x268d,
L"iR 6870C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x268e,
L"iR C5870"
},
{
0x04a9,
L"Canon, Inc.",
0x268f,
L"iR 5870C EUR"
},
{
0x04a9,
L"Canon, Inc.",
0x2691,
L"iR7105"
},
{
0x04a9,
L"Canon, Inc.",
0x26a1,
L"LBP5300"
},
{
0x04a9,
L"Canon, Inc.",
0x26a3,
L"MF4100 series"
},
{
0x04a9,
L"Canon, Inc.",
0x26a4,
L"LBP5100"
},
{
0x04a9,
L"Canon, Inc.",
0x26b0,
L"MF4600 series"
},
{
0x04a9,
L"Canon, Inc.",
0x26b4,
L"MF4010 series"
},
{
0x04a9,
L"Canon, Inc.",
0x26b5,
L"MF4200 series"
},
{
0x04a9,
L"Canon, Inc.",
0x26b6,
L"FAX-L140/L130"
},
{
0x04a9,
L"Canon, Inc.",
0x26b9,
L"LBP3310"
},
{
0x04a9,
L"Canon, Inc.",
0x26ba,
L"LBP5050"
},
{
0x04a9,
L"Canon, Inc.",
0x26da,
L"LBP3010/LBP3018/LBP3050"
},
{
0x04a9,
L"Canon, Inc.",
0x26db,
L"LBP3100/LBP3108/LBP3150"
},
{
0x04a9,
L"Canon, Inc.",
0x26e6,
L"iR1024"
},
{
0x04a9,
L"Canon, Inc.",
0x26ea,
L"LBP9100C"
},
{
0x04a9,
L"Canon, Inc.",
0x26ee,
L"MF4320-4350"
},
{
0x04a9,
L"Canon, Inc.",
0x26f1,
L"LBP7200C"
},
{
0x04a9,
L"Canon, Inc.",
0x26ff,
L"LBP6300"
},
{
0x04a9,
L"Canon, Inc.",
0x271a,
L"LBP6000"
},
{
0x04a9,
L"Canon, Inc.",
0x271b,
L"LBP6200"
},
{
0x04a9,
L"Canon, Inc.",
0x271c,
L"LBP7010C/7018C"
},
{
0x04a9,
L"Canon, Inc.",
0x2736,
L"I-SENSYS MF4550d"
},
{
0x04a9,
L"Canon, Inc.",
0x2737,
L"MF4410"
},
{
0x04a9,
L"Canon, Inc.",
0x2771,
L"LBP6020"
},
{
0x04a9,
L"Canon, Inc.",
0x2796,
L"LBP6230/6240"
},
{
0x04a9,
L"Canon, Inc.",
0x3041,
L"PowerShot S10"
},
{
0x04a9,
L"Canon, Inc.",
0x3042,
L"CanoScan FS4000US Film Scanner"
},
{
0x04a9,
L"Canon, Inc.",
0x3043,
L"PowerShot S20"
},
{
0x04a9,
L"Canon, Inc.",
0x3044,
L"EOS D30"
},
{
0x04a9,
L"Canon, Inc.",
0x3045,
L"PowerShot S100"
},
{
0x04a9,
L"Canon, Inc.",
0x3046,
L"IXY Digital"
},
{
0x04a9,
L"Canon, Inc.",
0x3047,
L"Digital IXUS"
},
{
0x04a9,
L"Canon, Inc.",
0x3048,
L"PowerShot G1"
},
{
0x04a9,
L"Canon, Inc.",
0x3049,
L"PowerShot Pro90 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x304a,
L"CP-10"
},
{
0x04a9,
L"Canon, Inc.",
0x304b,
L"IXY Digital 300"
},
{
0x04a9,
L"Canon, Inc.",
0x304c,
L"PowerShot S300"
},
{
0x04a9,
L"Canon, Inc.",
0x304d,
L"Digital IXUS 300"
},
{
0x04a9,
L"Canon, Inc.",
0x304e,
L"PowerShot A20"
},
{
0x04a9,
L"Canon, Inc.",
0x304f,
L"PowerShot A10"
},
{
0x04a9,
L"Canon, Inc.",
0x3050,
L"PowerShot unknown 1"
},
{
0x04a9,
L"Canon, Inc.",
0x3051,
L"PowerShot S110"
},
{
0x04a9,
L"Canon, Inc.",
0x3052,
L"Digital IXUS V"
},
{
0x04a9,
L"Canon, Inc.",
0x3055,
L"PowerShot G2"
},
{
0x04a9,
L"Canon, Inc.",
0x3056,
L"PowerShot S40"
},
{
0x04a9,
L"Canon, Inc.",
0x3057,
L"PowerShot S30"
},
{
0x04a9,
L"Canon, Inc.",
0x3058,
L"PowerShot A40"
},
{
0x04a9,
L"Canon, Inc.",
0x3059,
L"PowerShot A30"
},
{
0x04a9,
L"Canon, Inc.",
0x305b,
L"ZR45MC Digital Camcorder"
},
{
0x04a9,
L"Canon, Inc.",
0x305c,
L"PowerShot unknown 2"
},
{
0x04a9,
L"Canon, Inc.",
0x3060,
L"EOS D60"
},
{
0x04a9,
L"Canon, Inc.",
0x3061,
L"PowerShot A100"
},
{
0x04a9,
L"Canon, Inc.",
0x3062,
L"PowerShot A200"
},
{
0x04a9,
L"Canon, Inc.",
0x3063,
L"CP-100"
},
{
0x04a9,
L"Canon, Inc.",
0x3065,
L"PowerShot S200"
},
{
0x04a9,
L"Canon, Inc.",
0x3066,
L"Digital IXUS 330"
},
{
0x04a9,
L"Canon, Inc.",
0x3067,
L"MV550i Digital Video Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x3069,
L"PowerShot G3"
},
{
0x04a9,
L"Canon, Inc.",
0x306a,
L"Digital unknown 3"
},
{
0x04a9,
L"Canon, Inc.",
0x306b,
L"MVX2i Digital Video Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x306c,
L"PowerShot S45"
},
{
0x04a9,
L"Canon, Inc.",
0x306d,
L"PowerShot S45 PtP Mode"
},
{
0x04a9,
L"Canon, Inc.",
0x306e,
L"PowerShot G3 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x306f,
L"PowerShot G3 (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3070,
L"PowerShot S230"
},
{
0x04a9,
L"Canon, Inc.",
0x3071,
L"PowerShot S230 (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3072,
L"PowerShot SD100 / Digital IXUS II (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3073,
L"PowerShot A70 (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3074,
L"PowerShot A60 (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3075,
L"IXUS 400 Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x3076,
L"PowerShot A300"
},
{
0x04a9,
L"Canon, Inc.",
0x3077,
L"PowerShot S50"
},
{
0x04a9,
L"Canon, Inc.",
0x3078,
L"ZR70MC Digital Camcorder"
},
{
0x04a9,
L"Canon, Inc.",
0x307a,
L"MV650i (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x307b,
L"MV630i Digital Video Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x307c,
L"CP-200"
},
{
0x04a9,
L"Canon, Inc.",
0x307d,
L"CP-300"
},
{
0x04a9,
L"Canon, Inc.",
0x307f,
L"Optura 20"
},
{
0x04a9,
L"Canon, Inc.",
0x3080,
L"MVX150i (normal mode) / Optura 20 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3081,
L"Optura 10"
},
{
0x04a9,
L"Canon, Inc.",
0x3082,
L"MVX100i / Optura 10"
},
{
0x04a9,
L"Canon, Inc.",
0x3083,
L"EOS 10D"
},
{
0x04a9,
L"Canon, Inc.",
0x3084,
L"EOS 300D / EOS Digital Rebel"
},
{
0x04a9,
L"Canon, Inc.",
0x3085,
L"PowerShot G5"
},
{
0x04a9,
L"Canon, Inc.",
0x3087,
L"Elura 50 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3088,
L"Elura 50 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x308d,
L"MVX3i"
},
{
0x04a9,
L"Canon, Inc.",
0x308e,
L"FV M1 (normal mode) / MVX 3i (normal mode) / Optura Xi (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3093,
L"Optura 300"
},
{
0x04a9,
L"Canon, Inc.",
0x3096,
L"IXY DV M2 (normal mode) / MVX 10i (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3099,
L"EOS 300D (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x309a,
L"PowerShot A80"
},
{
0x04a9,
L"Canon, Inc.",
0x309b,
L"Digital IXUS (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x309c,
L"PowerShot S1 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x309d,
L"Powershot Pro 1"
},
{
0x04a9,
L"Canon, Inc.",
0x309f,
L"Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x30a0,
L"Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x30a1,
L"Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x30a2,
L"Camera"
},
{
0x04a9,
L"Canon, Inc.",
0x30a8,
L"Elura 60E/Optura 40 (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x30a9,
L"MVX25i (normal mode) / Optura 40 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b1,
L"PowerShot S70 (normal mode) / PowerShot S70 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b2,
L"PowerShot S60 (normal mode) / PowerShot S60 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b3,
L"PowerShot G6 (normal mode) / PowerShot G6 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b4,
L"PowerShot S500"
},
{
0x04a9,
L"Canon, Inc.",
0x30b5,
L"PowerShot A75"
},
{
0x04a9,
L"Canon, Inc.",
0x30b6,
L"Digital IXUS II2  / Digital IXUS II2 (PTP mode) / PowerShot SD110 (PTP mode) / PowerShot SD110 Digital ELPH"
},
{
0x04a9,
L"Canon, Inc.",
0x30b7,
L"PowerShot A400 / PowerShot A400 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b8,
L"PowerShot A310 / PowerShot A310 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30b9,
L"Powershot A85"
},
{
0x04a9,
L"Canon, Inc.",
0x30ba,
L"PowerShot S410 Digital Elph"
},
{
0x04a9,
L"Canon, Inc.",
0x30bb,
L"PowerShot A95"
},
{
0x04a9,
L"Canon, Inc.",
0x30bd,
L"CP-220"
},
{
0x04a9,
L"Canon, Inc.",
0x30be,
L"CP-330"
},
{
0x04a9,
L"Canon, Inc.",
0x30bf,
L"Digital IXUS 40"
},
{
0x04a9,
L"Canon, Inc.",
0x30c0,
L"Digital IXUS 30 (PTP mode) / PowerShot SD200 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30c1,
L"Digital IXUS 50 (normal mode) / IXY Digital 55 (normal mode) / PowerShot A520 (PTP mode) / PowerShot SD400 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30c2,
L"PowerShot A510 (normal mode) / PowerShot A510 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30c4,
L"Digital IXUS i5 (normal mode) / IXY Digital L2 (normal mode) / PowerShot SD20 (normal mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30ea,
L"EOS 1D Mark II (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30eb,
L"EOS 20D"
},
{
0x04a9,
L"Canon, Inc.",
0x30ec,
L"EOS 20D (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x30ee,
L"EOS 350D"
},
{
0x04a9,
L"Canon, Inc.",
0x30ef,
L"EOS 350D (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x30f0,
L"PowerShot S2 IS (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30f2,
L"Digital IXUS 700 (normal mode) / Digital IXUS 700 (PTP mode) / IXY Digital 600 (normal mode) / PowerShot SD500 (normal mode) / PowerShot SD500 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30f4,
L"PowerShot SD30 / Ixus iZoom / IXY DIGITAL L3"
},
{
0x04a9,
L"Canon, Inc.",
0x30f5,
L"SELPHY CP500"
},
{
0x04a9,
L"Canon, Inc.",
0x30f6,
L"SELPHY CP400"
},
{
0x04a9,
L"Canon, Inc.",
0x30f8,
L"Powershot A430"
},
{
0x04a9,
L"Canon, Inc.",
0x30f9,
L"PowerShot A410 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30fa,
L"PowerShot S80"
},
{
0x04a9,
L"Canon, Inc.",
0x30fc,
L"PowerShot A620 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30fd,
L"PowerShot A610 (normal mode)/PowerShot A610 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30fe,
L"Digital IXUS 65 (PTP mode)/PowerShot SD630 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x30ff,
L"Digital IXUS 55 (PTP mode)/PowerShot SD450 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3100,
L"PowerShot TX1"
},
{
0x04a9,
L"Canon, Inc.",
0x310b,
L"SELPHY CP600"
},
{
0x04a9,
L"Canon, Inc.",
0x310e,
L"Digital IXUS 50 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x310f,
L"PowerShot A420"
},
{
0x04a9,
L"Canon, Inc.",
0x3110,
L"EOS Digital Rebel XTi"
},
{
0x04a9,
L"Canon, Inc.",
0x3115,
L"PowerShot SD900 / Digital IXUS 900 Ti / IXY DIGITAL 1000"
},
{
0x04a9,
L"Canon, Inc.",
0x3116,
L"Digital IXUS 750 / PowerShot SD550 (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3117,
L"PowerShot A700"
},
{
0x04a9,
L"Canon, Inc.",
0x3119,
L"PowerShot SD700 IS / Digital IXUS 800 IS / IXY Digital 800 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x311a,
L"PowerShot S3 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x311b,
L"PowerShot A540"
},
{
0x04a9,
L"Canon, Inc.",
0x311c,
L"PowerShot SD600 DIGITAL ELPH / DIGITAL IXUS 60 / IXY DIGITAL 70"
},
{
0x04a9,
L"Canon, Inc.",
0x3125,
L"PowerShot G7"
},
{
0x04a9,
L"Canon, Inc.",
0x3126,
L"PowerShot A530"
},
{
0x04a9,
L"Canon, Inc.",
0x3127,
L"SELPHY CP710"
},
{
0x04a9,
L"Canon, Inc.",
0x3128,
L"SELPHY CP510"
},
{
0x04a9,
L"Canon, Inc.",
0x312d,
L"Elura 100"
},
{
0x04a9,
L"Canon, Inc.",
0x3136,
L"PowerShot SD800 IS / Digital IXUS 850 IS / IXY DIGITAL 900 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3137,
L"PowerShot SD40 / Digital IXUS i7 IXY / DIGITAL L4"
},
{
0x04a9,
L"Canon, Inc.",
0x3138,
L"PowerShot A710 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3139,
L"PowerShot A640"
},
{
0x04a9,
L"Canon, Inc.",
0x313a,
L"PowerShot A630"
},
{
0x04a9,
L"Canon, Inc.",
0x3141,
L"SELPHY ES1"
},
{
0x04a9,
L"Canon, Inc.",
0x3142,
L"SELPHY CP730"
},
{
0x04a9,
L"Canon, Inc.",
0x3143,
L"SELPHY CP720"
},
{
0x04a9,
L"Canon, Inc.",
0x3145,
L"EOS 450D"
},
{
0x04a9,
L"Canon, Inc.",
0x3146,
L"EOS 40D"
},
{
0x04a9,
L"Canon, Inc.",
0x3147,
L"EOS 1Ds Mark III"
},
{
0x04a9,
L"Canon, Inc.",
0x3148,
L"PowerShot S5 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3149,
L"PowerShot A460"
},
{
0x04a9,
L"Canon, Inc.",
0x314b,
L"PowerShot SD850 IS DIGITAL ELPH / Digital IXUS 950 IS / IXY DIGITAL 810 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x314c,
L"PowerShot A570 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x314d,
L"PowerShot A560"
},
{
0x04a9,
L"Canon, Inc.",
0x314e,
L"PowerShot SD750 DIGITAL ELPH / DIGITAL IXUS 75 / IXY DIGITAL 90"
},
{
0x04a9,
L"Canon, Inc.",
0x314f,
L"PowerShot SD1000 DIGITAL ELPH / DIGITAL IXUS 70 / IXY DIGITAL 10"
},
{
0x04a9,
L"Canon, Inc.",
0x3150,
L"PowerShot A550"
},
{
0x04a9,
L"Canon, Inc.",
0x3155,
L"PowerShot A450"
},
{
0x04a9,
L"Canon, Inc.",
0x315a,
L"PowerShot G9"
},
{
0x04a9,
L"Canon, Inc.",
0x315b,
L"PowerShot A650 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x315d,
L"PowerShot A720"
},
{
0x04a9,
L"Canon, Inc.",
0x315e,
L"PowerShot SX100 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x315f,
L"PowerShot SD950 IS DIGITAL ELPH / DIGITAL IXUS 960 IS / IXY DIGITAL 2000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3160,
L"Digital IXUS 860 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3170,
L"SELPHY CP750"
},
{
0x04a9,
L"Canon, Inc.",
0x3171,
L"SELPHY CP740"
},
{
0x04a9,
L"Canon, Inc.",
0x3172,
L"SELPHY CP520"
},
{
0x04a9,
L"Canon, Inc.",
0x3173,
L"PowerShot SD890 IS DIGITAL ELPH / Digital IXUS 970 IS / IXY DIGITAL 820 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3174,
L"PowerShot SD790 IS DIGITAL ELPH / Digital IXUS 90 IS / IXY DIGITAL 95 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3175,
L"IXY Digital 25 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3176,
L"PowerShot A590"
},
{
0x04a9,
L"Canon, Inc.",
0x3177,
L"PowerShot A580"
},
{
0x04a9,
L"Canon, Inc.",
0x317a,
L"PC1267 [Powershot A470]"
},
{
0x04a9,
L"Canon, Inc.",
0x3184,
L"Digital IXUS 80 IS (PTP mode)"
},
{
0x04a9,
L"Canon, Inc.",
0x3185,
L"SELPHY ES2"
},
{
0x04a9,
L"Canon, Inc.",
0x3186,
L"SELPHY ES20"
},
{
0x04a9,
L"Canon, Inc.",
0x318d,
L"PowerShot SX100 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x318e,
L"PowerShot A1000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x318f,
L"PowerShot G10"
},
{
0x04a9,
L"Canon, Inc.",
0x3191,
L"PowerShot A2000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3192,
L"PowerShot SX110 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3193,
L"PowerShot SD990 IS DIGITAL ELPH / Digital IXUS 980 IS / IXY DIGITAL 3000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3195,
L"PowerShot SX1 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3196,
L"PowerShot SD880 IS DIGITAL ELPH / Digital IXUS 870 IS / IXY DIGITAL 920 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3199,
L"EOS 5D Mark II"
},
{
0x04a9,
L"Canon, Inc.",
0x319a,
L"EOS 7D"
},
{
0x04a9,
L"Canon, Inc.",
0x319b,
L"EOS 50D"
},
{
0x04a9,
L"Canon, Inc.",
0x31aa,
L"SELPHY CP770"
},
{
0x04a9,
L"Canon, Inc.",
0x31ab,
L"SELPHY CP760"
},
{
0x04a9,
L"Canon, Inc.",
0x31ad,
L"PowerShot E1"
},
{
0x04a9,
L"Canon, Inc.",
0x31af,
L"SELPHY ES3"
},
{
0x04a9,
L"Canon, Inc.",
0x31b0,
L"SELPHY ES30"
},
{
0x04a9,
L"Canon, Inc.",
0x31b1,
L"SELPHY CP530"
},
{
0x04a9,
L"Canon, Inc.",
0x31bc,
L"PowerShot D10"
},
{
0x04a9,
L"Canon, Inc.",
0x31bd,
L"PowerShot SD960 IS DIGITAL ELPH / Digital IXUS 110 IS / IXY DIGITAL 510 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31be,
L"PowerShot A2100 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31bf,
L"PowerShot A480"
},
{
0x04a9,
L"Canon, Inc.",
0x31c0,
L"PowerShot SX200 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31c1,
L"PowerShot SD970 IS DIGITAL ELPH / Digital IXUS 990 IS / IXY DIGITAL 830 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31c2,
L"PowerShot SD780 IS DIGITAL ELPH / Digital IXUS 100 IS / IXY DIGITAL 210 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31c3,
L"PowerShot A1100 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31c4,
L"PowerShot SD1200 IS DIGITAL ELPH / Digital IXUS 95 IS / IXY DIGITAL 110 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31cf,
L"EOS Rebel T1i / EOS 500D / EOS Kiss X3"
},
{
0x04a9,
L"Canon, Inc.",
0x31dd,
L"SELPHY CP780"
},
{
0x04a9,
L"Canon, Inc.",
0x31df,
L"PowerShot G11"
},
{
0x04a9,
L"Canon, Inc.",
0x31e0,
L"PowerShot SX120 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31e1,
L"PowerShot S90"
},
{
0x04a9,
L"Canon, Inc.",
0x31e4,
L"PowerShot SX20 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31e5,
L"Digital IXUS 200 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31e6,
L"PowerShot SD940 IS DIGITAL ELPH / Digital IXUS 120 IS / IXY DIGITAL 220 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31e7,
L"SELPHY CP790"
},
{
0x04a9,
L"Canon, Inc.",
0x31ea,
L"EOS Rebel T2i / EOS 550D / EOS Kiss X4"
},
{
0x04a9,
L"Canon, Inc.",
0x31ee,
L"SELPHY ES40"
},
{
0x04a9,
L"Canon, Inc.",
0x31ef,
L"PowerShot A495"
},
{
0x04a9,
L"Canon, Inc.",
0x31f0,
L"PowerShot A490"
},
{
0x04a9,
L"Canon, Inc.",
0x31f1,
L"PowerShot A3100 IS / PowerShot A3150 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31f2,
L"PowerShot A3000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31f3,
L"PowerShot Digital ELPH SD1400 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31f4,
L"PowerShot SD1300 IS / IXUS 105"
},
{
0x04a9,
L"Canon, Inc.",
0x31f5,
L"Powershot SD3500 IS / IXUS 210 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31f6,
L"PowerShot SX210 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x31f7,
L"Powershot SD4000 IS / IXUS 300 HS / IXY 30S"
},
{
0x04a9,
L"Canon, Inc.",
0x31f8,
L"Powershot SD4500 IS / IXUS 1000 HS / IXY 50S"
},
{
0x04a9,
L"Canon, Inc.",
0x31ff,
L"Digital IXUS 55"
},
{
0x04a9,
L"Canon, Inc.",
0x3209,
L"Vixia HF S21 A"
},
{
0x04a9,
L"Canon, Inc.",
0x320f,
L"PowerShot G12"
},
{
0x04a9,
L"Canon, Inc.",
0x3210,
L"Powershot SX30 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3211,
L"PowerShot SX130 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3212,
L"Powershot S95"
},
{
0x04a9,
L"Canon, Inc.",
0x3214,
L"SELPHY CP800"
},
{
0x04a9,
L"Canon, Inc.",
0x3215,
L"EOS 60D"
},
{
0x04a9,
L"Canon, Inc.",
0x3218,
L"EOS 600D / Rebel T3i (ptp)"
},
{
0x04a9,
L"Canon, Inc.",
0x3219,
L"EOS 1D X"
},
{
0x04a9,
L"Canon, Inc.",
0x3223,
L"PowerShot A3300 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3224,
L"PowerShot A3200 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3225,
L"PowerShot ELPH 500 HS / IXUS 310 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3226,
L"PowerShow A800"
},
{
0x04a9,
L"Canon, Inc.",
0x3227,
L"PowerShot ELPH 100 HS / IXUS 115 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3228,
L"PowerShot SX230 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3229,
L"PowerShot ELPH 300 HS / IXUS 220 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x322a,
L"PowerShot A2200"
},
{
0x04a9,
L"Canon, Inc.",
0x322b,
L"Powershot A1200"
},
{
0x04a9,
L"Canon, Inc.",
0x322c,
L"PowerShot SX220 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3233,
L"PowerShot G1 X"
},
{
0x04a9,
L"Canon, Inc.",
0x3234,
L"PowerShot SX150 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3235,
L"PowerShot ELPH 510 HS / IXUS 1100 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3236,
L"PowerShot S100"
},
{
0x04a9,
L"Canon, Inc.",
0x3237,
L"PowerShot ELPH 310 HS / IXUS 230 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3238,
L"PowerShot SX40 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x323a,
L"EOS 5D Mark III"
},
{
0x04a9,
L"Canon, Inc.",
0x323b,
L"EOS Rebel T4i"
},
{
0x04a9,
L"Canon, Inc.",
0x323d,
L"EOS M"
},
{
0x04a9,
L"Canon, Inc.",
0x323e,
L"PowerShot A1300"
},
{
0x04a9,
L"Canon, Inc.",
0x323f,
L"PowerShot A810"
},
{
0x04a9,
L"Canon, Inc.",
0x3240,
L"PowerShot ELPH 320 HS / IXUS 240 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3241,
L"PowerShot ELPH 110 HS / IXUS 125 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3242,
L"PowerShot D20"
},
{
0x04a9,
L"Canon, Inc.",
0x3243,
L"PowerShot A4000 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3244,
L"PowerShot SX260 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3245,
L"PowerShot SX240 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3246,
L"PowerShot ELPH 530 HS / IXUS 510 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3247,
L"PowerShot ELPH 520 HS / IXUS 500 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3248,
L"PowerShot A3400 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3249,
L"PowerShot A2400 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x324a,
L"PowerShot A2300"
},
{
0x04a9,
L"Canon, Inc.",
0x3250,
L"EOS 6D"
},
{
0x04a9,
L"Canon, Inc.",
0x3252,
L"EOS 1D C"
},
{
0x04a9,
L"Canon, Inc.",
0x3253,
L"EOS 70D"
},
{
0x04a9,
L"Canon, Inc.",
0x3255,
L"SELPHY CP900"
},
{
0x04a9,
L"Canon, Inc.",
0x3256,
L"SELPHY CP810"
},
{
0x04a9,
L"Canon, Inc.",
0x3258,
L"PowerShot G15"
},
{
0x04a9,
L"Canon, Inc.",
0x3259,
L"PowerShot SX50 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x325a,
L"PowerShot SX160 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x325b,
L"PowerShot S110"
},
{
0x04a9,
L"Canon, Inc.",
0x325c,
L"PowerShot SX500 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x325e,
L"PowerShot N"
},
{
0x04a9,
L"Canon, Inc.",
0x325f,
L"PowerShot SX280 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3260,
L"PowerShot SX270 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3261,
L"PowerShot A3500 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3262,
L"PowerShot A2600"
},
{
0x04a9,
L"Canon, Inc.",
0x3263,
L"PowerShot SX275 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3264,
L"PowerShot A1400"
},
{
0x04a9,
L"Canon, Inc.",
0x3265,
L"Powershot ELPH 130 IS / IXUS 140"
},
{
0x04a9,
L"Canon, Inc.",
0x3266,
L"Powershot ELPH 120 IS / IXUS 135"
},
{
0x04a9,
L"Canon, Inc.",
0x3268,
L"PowerShot ELPH 330 HS / IXUS 255 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x326f,
L"EOS 7D Mark II"
},
{
0x04a9,
L"Canon, Inc.",
0x3270,
L"EOS 100D"
},
{
0x04a9,
L"Canon, Inc.",
0x3271,
L"PowerShot A2500"
},
{
0x04a9,
L"Canon, Inc.",
0x3272,
L"EOS 700D"
},
{
0x04a9,
L"Canon, Inc.",
0x3274,
L"PowerShot G16"
},
{
0x04a9,
L"Canon, Inc.",
0x3275,
L"PowerShot S120"
},
{
0x04a9,
L"Canon, Inc.",
0x3276,
L"PowerShot SX170 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x3277,
L"PowerShot SX510 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3278,
L"PowerShot S200"
},
{
0x04a9,
L"Canon, Inc.",
0x327a,
L"SELPHY CP910"
},
{
0x04a9,
L"Canon, Inc.",
0x327b,
L"SELPHY CP820"
},
{
0x04a9,
L"Canon, Inc.",
0x327d,
L"Powershot ELPH 115 IS / IXUS 132"
},
{
0x04a9,
L"Canon, Inc.",
0x327f,
L"EOS Rebel T5 / EOS 1200D / EOS Kiss X70"
},
{
0x04a9,
L"Canon, Inc.",
0x3284,
L"PowerShot D30"
},
{
0x04a9,
L"Canon, Inc.",
0x3285,
L"PowerShot SX700 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3286,
L"PowerShot SX600 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x3287,
L"PowerShot ELPH 140 IS / IXUS 150"
},
{
0x04a9,
L"Canon, Inc.",
0x3288,
L"Powershot ELPH 135 / IXUS 145"
},
{
0x04a9,
L"Canon, Inc.",
0x3289,
L"PowerShot ELPH 340 HS / IXUS 265 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x328a,
L"PowerShot ELPH 150 IS / IXUS 155"
},
{
0x04a9,
L"Canon, Inc.",
0x328b,
L"PowerShot N Facebook(R) Ready"
},
{
0x04a9,
L"Canon, Inc.",
0x3299,
L"EOS M3"
},
{
0x04a9,
L"Canon, Inc.",
0x329a,
L"PowerShot SX60 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x329b,
L"PowerShot SX520 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x329c,
L"PowerShot SX400 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x329d,
L"PowerShot G7 X"
},
{
0x04a9,
L"Canon, Inc.",
0x329f,
L"PowerShot SX530 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x32a0,
L"EOS M10"
},
{
0x04a9,
L"Canon, Inc.",
0x32a6,
L"PowerShot SX710 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x32a7,
L"PowerShot SX610 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x32a8,
L"PowerShot G3 X"
},
{
0x04a9,
L"Canon, Inc.",
0x32aa,
L"Powershot ELPH 160 / IXUS 160"
},
{
0x04a9,
L"Canon, Inc.",
0x32ab,
L"PowerShot ELPH 350HS / IXUS 275 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x32ac,
L"PowerShot ELPH 170 IS / IXUS 170"
},
{
0x04a9,
L"Canon, Inc.",
0x32ad,
L"PowerShot SX410 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x32b1,
L"SELPHY CP1200"
},
{
0x04a9,
L"Canon, Inc.",
0x32b2,
L"PowerShot G9 X"
},
{
0x04a9,
L"Canon, Inc.",
0x32b3,
L"PowerShot G5 X"
},
{
0x04a9,
L"Canon, Inc.",
0x32b4,
L"EOS Rebel T6"
},
{
0x04a9,
L"Canon, Inc.",
0x32bb,
L"EOS M5"
},
{
0x04a9,
L"Canon, Inc.",
0x32bf,
L"PowerShot SX420 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x32c1,
L"PowerShot ELPH 180 / IXUS 175"
},
{
0x04a9,
L"Canon, Inc.",
0x32c2,
L"PowerShot SX720 HS"
},
{
0x04a9,
L"Canon, Inc.",
0x32c5,
L"EOS M6"
},
{
0x04a9,
L"Canon, Inc.",
0x32cc,
L"EOS 200D"
},
{
0x04a9,
L"Canon, Inc.",
0x32d1,
L"EOS M100"
},
{
0x04a9,
L"Canon, Inc.",
0x32d2,
L"EOS M50"
},
{
0x04a9,
L"Canon, Inc.",
0x32d4,
L"Powershot ELPH 185 / IXUS 185 / IXY 200"
},
{
0x04a9,
L"Canon, Inc.",
0x32d5,
L"PowerShot SX430 IS"
},
{
0x04a9,
L"Canon, Inc.",
0x32db,
L"SELPHY CP1300"
},
{
0x04aa,
L"DaeWoo Telecom, Ltd",
0x0,
L"0"
},
{
0x04ab,
L"Chromatic Research",
0x0,
L"0"
},
{
0x04ac,
L"Micro Audiometrics Corp.",
0x0,
L"0"
},
{
0x04ad,
L"Dooin Electronics",
0x2501,
L"Bluetooth Device"
},
{
0x04af,
L"Winnov L.P.",
0x0,
L"0"
},
{
0x04b0,
L"Nikon Corp.",
0x0102,
L"Coolpix 990"
},
{
0x04b0,
L"Nikon Corp.",
0x0103,
L"Coolpix 880"
},
{
0x04b0,
L"Nikon Corp.",
0x0104,
L"Coolpix 995"
},
{
0x04b0,
L"Nikon Corp.",
0x0106,
L"Coolpix 775"
},
{
0x04b0,
L"Nikon Corp.",
0x0107,
L"Coolpix 5000"
},
{
0x04b0,
L"Nikon Corp.",
0x0108,
L"Coolpix 2500"
},
{
0x04b0,
L"Nikon Corp.",
0x0109,
L"Coolpix 2500 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x010a,
L"Coolpix 4500"
},
{
0x04b0,
L"Nikon Corp.",
0x010b,
L"Coolpix 4500 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x010d,
L"Coolpix 5700 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x010e,
L"Coolpix 4300 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x010f,
L"Coolpix 4300 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0110,
L"Coolpix 3500 (Sierra Mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0111,
L"Coolpix 3500 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0112,
L"Coolpix 885 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0113,
L"Coolpix 5000 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0114,
L"Coolpix 3100 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x0115,
L"Coolpix 3100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0117,
L"Coolpix 2100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0119,
L"Coolpix 5400 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x011d,
L"Coolpix 3700 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0121,
L"Coolpix 3200 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0122,
L"Coolpix 2200 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0124,
L"Coolpix 8400 (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0125,
L"Coolpix 8400 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0126,
L"Coolpix 8800"
},
{
0x04b0,
L"Nikon Corp.",
0x0129,
L"Coolpix 4800 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x012c,
L"Coolpix 4100 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x012d,
L"Coolpix 4100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x012e,
L"Coolpix 5600 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0130,
L"Coolpix 4600 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0135,
L"Coolpix 5900 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0136,
L"Coolpix 7900 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x0137,
L"Coolpix 7900 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x013a,
L"Coolpix 100 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x013b,
L"Coolpix 100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0141,
L"Coolpix P2 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x0142,
L"Coolpix P2 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0163,
L"Coolpix P5100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0169,
L"Coolpix P50 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0202,
L"Coolpix SQ (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0203,
L"Coolpix 4200 (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0204,
L"Coolpix 4200 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0205,
L"Coolpix 5200 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x0206,
L"Coolpix 5200 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0301,
L"Coolpix 2000 (storage)"
},
{
0x04b0,
L"Nikon Corp.",
0x0302,
L"Coolpix 2000 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0317,
L"Coolpix L20 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0402,
L"DSC D100 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0403,
L"D2H (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0404,
L"D2H SLR (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0405,
L"D70 (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0406,
L"DSC D70 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0408,
L"D2X SLR (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0409,
L"D50 digital camera"
},
{
0x04b0,
L"Nikon Corp.",
0x040a,
L"D50 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x040c,
L"D2Hs"
},
{
0x04b0,
L"Nikon Corp.",
0x040e,
L"DSC D70s (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x040f,
L"D200 (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0410,
L"D200 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0413,
L"D40 (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x041e,
L"D60 digital camera (mass storage mode)"
},
{
0x04b0,
L"Nikon Corp.",
0x0422,
L"D700 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0423,
L"D5000"
},
{
0x04b0,
L"Nikon Corp.",
0x0424,
L"D3000"
},
{
0x04b0,
L"Nikon Corp.",
0x0425,
L"D300S"
},
{
0x04b0,
L"Nikon Corp.",
0x0428,
L"D7000"
},
{
0x04b0,
L"Nikon Corp.",
0x0429,
L"D5100"
},
{
0x04b0,
L"Nikon Corp.",
0x042a,
L"D800 (ptp)"
},
{
0x04b0,
L"Nikon Corp.",
0x0430,
L"D7100"
},
{
0x04b0,
L"Nikon Corp.",
0x0436,
L"D810"
},
{
0x04b0,
L"Nikon Corp.",
0x043f,
L"D5600"
},
{
0x04b0,
L"Nikon Corp.",
0x0f03,
L"PD-10 Wireless Printer Adapter"
},
{
0x04b0,
L"Nikon Corp.",
0x4000,
L"Coolscan LS 40 ED"
},
{
0x04b0,
L"Nikon Corp.",
0x4001,
L"LS 50 ED/Coolscan V ED"
},
{
0x04b0,
L"Nikon Corp.",
0x4002,
L"Super Coolscan LS-5000 ED"
},
{
0x04b1,
L"Pan International",
0x0,
L"0"
},
{
0x04b3,
L"IBM Corp.",
0x3003,
L"Rapid Access III Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x3004,
L"Media Access Pro Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x300a,
L"Rapid Access IIIe Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x3016,
L"UltraNav Keyboard Hub"
},
{
0x04b3,
L"IBM Corp.",
0x3018,
L"UltraNav Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x301a,
L"2-port low-power hub"
},
{
0x04b3,
L"IBM Corp.",
0x301b,
L"SK-8815 Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x301c,
L"Enhanced Performance Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x3020,
L"Enhanced Performance Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x3025,
L"NetVista Full Width Keyboard"
},
{
0x04b3,
L"IBM Corp.",
0x3100,
L"NetVista Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x3103,
L"ScrollPoint Pro Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x3104,
L"ScrollPoint Wireless Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x3105,
L"ScrollPoint Optical (HID)"
},
{
0x04b3,
L"IBM Corp.",
0x3107,
L"ThinkPad 800dpi Optical Travel Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x3108,
L"800dpi Optical Mouse w/ Scroll Point"
},
{
0x04b3,
L"IBM Corp.",
0x3109,
L"Optical ScrollPoint Pro Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x310b,
L"Red Wheel Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x310c,
L"Wheel Mouse"
},
{
0x04b3,
L"IBM Corp.",
0x4427,
L"Portable CD ROM"
},
{
0x04b3,
L"IBM Corp.",
0x4482,
L"Serial Converter"
},
{
0x04b3,
L"IBM Corp.",
0x4484,
L"SMSC USB20H04 3-Port Hub [ThinkPad X4 UltraBase, Wistron S Note-3 Media Slice]"
},
{
0x04b3,
L"IBM Corp.",
0x4485,
L"ThinkPad Dock Hub"
},
{
0x04b3,
L"IBM Corp.",
0x4524,
L"40 Character Vacuum Fluorescent Display"
},
{
0x04b3,
L"IBM Corp.",
0x4525,
L"Double sided CRT"
},
{
0x04b3,
L"IBM Corp.",
0x4535,
L"4610 Suremark Printer"
},
{
0x04b3,
L"IBM Corp.",
0x4550,
L"NVRAM (128 KB)"
},
{
0x04b3,
L"IBM Corp.",
0x4554,
L"Cash Drawer"
},
{
0x04b3,
L"IBM Corp.",
0x4580,
L"Hub w/ NVRAM"
},
{
0x04b3,
L"IBM Corp.",
0x4581,
L"4800-2xx Hub w/ Cash Drawer"
},
{
0x04b3,
L"IBM Corp.",
0x4604,
L"Keyboard w/ Card Reader"
},
{
0x04b3,
L"IBM Corp.",
0x4671,
L"4820 LCD w/ MSR/KB"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0001,
L"Mouse"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0002,
L"CY7C63x0x Thermometer"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0033,
L"Mouse"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0060,
L"Wireless optical mouse"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0100,
L"Cino FuzzyScan F760-B"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0101,
L"Keyboard/Hub"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0102,
L"Keyboard with APM"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0130,
L"MyIRC Remote Receiver"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0306,
L"Telephone Receiver"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0407,
L"Optical Skype Mouse"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x0bad,
L"MetaGeek Wi-Spy"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x1002,
L"CY7C63001 R100 FM Radio"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x1006,
L"Human Interface Device"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x2050,
L"hub"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x2830,
L"Opera1 DVB-S (cold state)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x3813,
L"NANO BIOS Programmer"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4235,
L"Monitor 02 Driver"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4381,
L"SCAPS USC-1 Scanner Controller"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4611,
L"Storage Adapter FX2 (CY)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4616,
L"Flash Disk (TPP)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4624,
L"DS-Xtreme Flash Card"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x4717,
L"West Bridge"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x5201,
L"Combi Keyboard-Hub (Hub)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x5202,
L"Combi Keyboard-Hub (Keyboard)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x5500,
L"HID->COM RS232 Adapter"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x5a9b,
L"Dacal CD/DVD Library D-101/DC-300/DC-016RW"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6370,
L"ViewMate Desktop Mouse CC2201"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6502,
L"CY4609"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6506,
L"CY4603"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x650a,
L"CY4613"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6560,
L"CY7C65640 USB-2.0 TetraHub"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6570,
L"Unprogrammed CY7C65632/34 hub HX2VL"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6572,
L"Unprogrammed CY7C65642 hub"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6830,
L"CY7C68300A EZ-USB AT2 USB 2.0 to ATA/ATAPI"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x6831,
L"Storage Adapter ISD-300LP (CY)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x7417,
L"Wireless PC Lock/Ultra Mouse"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x8329,
L"USB To keyboard/Mouse Converter"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x8613,
L"CY7C68013 EZ-USB FX2 USB 2.0 Development Kit"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x8614,
L"DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0x861f,
L"Anysee E30 USB 2.0 DVB-T Receiver"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xbca1,
L"Barcode Reader"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xcc04,
L"Centor USB RACIA-ALVAR USB PORT"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xcc06,
L"Centor-P RACIA-ALVAR USB PORT"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xd5d5,
L"CY7C63x0x Zoltrix Z-Boxer GamePad"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xde61,
L"Barcode Reader"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xde64,
L"Barcode Reader"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xf000,
L"CY30700 Licorice evaluation board"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xf111,
L"CY8CKIT-002 PSoC MiniProg3 Rev A Program and debug kit"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xf115,
L"PSoC FirstTouch Programmer"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xf231,
L"DELLY Changer 4in1 universal IR remote"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xf232,
L"Mono embedded computer"
},
{
0x04b4,
L"Cypress Semiconductor Corp.",
0xfd13,
L"Programmable power socket"
},
{
0x04b5,
L"ROHM LSI Systems USA, LLC",
0x3064,
L"Hantek DSO-3064"
},
{
0x04b6,
L"Hint Corp.",
0x0,
L"0"
},
{
0x04b7,
L"Compal Electronics, Inc.",
0x0,
L"0"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0001,
L"Stylus Color 740 / Photo 750"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0002,
L"ISD Smart Cable for Mac"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0003,
L"ISD Smart Cable"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0004,
L"Printer"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0005,
L"Printer"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0006,
L"Printer"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0007,
L"Printer"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0015,
L"Stylus Photo R3000"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0101,
L"GT-7000U [Perfection 636]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0102,
L"GT-2200"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0103,
L"GT-6600U [Perfection 610]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0104,
L"GT-7600UF [Perfection 1200U/1200U Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0105,
L"Stylus Scan 2000"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0106,
L"Stylus Scan 2500"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0107,
L"ES-2000 [Expression 1600U]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0108,
L"CC-700"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0109,
L"ES-8500 [Expression 1640 XL]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010a,
L"GT-8700/GT-8700F [Perfection 1640SU/1640SU PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010b,
L"GT-7700U [Perfection 1240U]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010c,
L"GT-6700U [Perfection 640]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010d,
L"CC-500L"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010e,
L"ES-2200 [Perfection 1680]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x010f,
L"GT-7200U [Perfection 1250/1250 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0110,
L"GT-8200U/GT-8200UF [Perfection 1650/1650 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0112,
L"GT-9700F [Perfection 2450 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0114,
L"Perfection 660"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0116,
L"GT-9400UF [Perfection 3170]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0118,
L"GT-F600 [Perfection 4180]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0119,
L"GT-X750 [Perfection 4490 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011a,
L"CC-550L [1000 ICS]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011b,
L"GT-9300UF [Perfection 2400 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011c,
L"GT-9800F [Perfection 3200]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011d,
L"GT-7300U [Perfection 1260/1260 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011e,
L"GT-8300UF [Perfection 1660 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x011f,
L"GT-8400UF [Perfection 1670/1670 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0120,
L"GT-7400U [Perfection 1270]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0121,
L"GT-F500/GT-F550 [Perfection 2480/2580 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0122,
L"GT-F520/GT-F570 [Perfection 3590 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0126,
L"ES-7000H [GT-15000]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0128,
L"GT-X700 [Perfection 4870]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0129,
L"ES-10000G [Expression 10000XL]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012a,
L"GT-X800 [Perfection 4990 PHOTO]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012b,
L"ES-H300 [GT-2500]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012c,
L"GT-X900 [Perfection V700/V750 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012d,
L"GT-F650 [GT-S600/Perfection V10/V100]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012e,
L"GT-F670 [Perfection V200 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x012f,
L"GT-F700 [Perfection V350]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0130,
L"GT-X770 [Perfection V500]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0131,
L"GT-F720 [GT-S620/Perfection V30/V300 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0133,
L"GT-1500 [GT-D1000]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0135,
L"GT-X970"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0136,
L"ES-D400 [GT-S80]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0137,
L"ES-D200 [GT-S50]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0138,
L"ES-H7200 [GT-20000]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x013a,
L"GT-X820 [Perfection V600 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0142,
L"GT-F730 [GT-S630/Perfection V33/V330 Photo]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0143,
L"GT-S55"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0144,
L"GT-S85"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0151,
L"Perfection V800 Photo"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0202,
L"Interface Card UB-U05 for Thermal Receipt Printers [M129C/TM-T70/TM-T88IV]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0401,
L"CP 800 Digital Camera"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0402,
L"PhotoPC 850z"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0403,
L"PhotoPC 3000z"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0509,
L"JVC PIX-MC10"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0601,
L"Stylus Photo 875DC Card Reader"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0602,
L"Stylus Photo 895 Card Reader"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0801,
L"CC-600PX [Stylus CX5200/CX5400/CX6600]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0802,
L"CC-570L [Stylus CX3100/CX3200]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0803,
L"Printer (Composite Device)"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0804,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0805,
L"Stylus CX6300/CX6400"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0806,
L"PM-A850 [Stylus Photo RX600/610]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0807,
L"Stylus Photo RX500/510"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0808,
L"Stylus CX5200/CX5300/CX5400"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0809,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x080a,
L"F-3200"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x080c,
L"ME100 [Stylus CX1500]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x080d,
L"Stylus CX4500/4600"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x080e,
L"PX-A550 [CX-3500/3600/3650 MFP]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x080f,
L"Stylus Photo RX420/RX425/RX430"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0810,
L"PM-A900 [Stylus Photo RX700]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0811,
L"PM-A870 [Stylus Photo RX620/RX630]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0812,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0813,
L"Stylus CX6500/6600"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0814,
L"PM-A700"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0815,
L"LP-A500 [AcuLaser CX1]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0816,
L"Printer (Composite Device)"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0817,
L"LP-M5500/LP-M5500F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0818,
L"Stylus CX3700/CX3800/DX3800"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0819,
L"PX-A650 [Stylus CX4700/CX4800/DX4800/DX4850]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081a,
L"PM-A750 [Stylus Photo RX520/RX530]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081b,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081c,
L"PM-A890 [Stylus Photo RX640/RX650]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081d,
L"PM-A950"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081e,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x081f,
L"Stylus CX7700/7800"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0820,
L"Stylus CX4100/CX4200/DX4200"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0821,
L"Stylus CX5700F/CX5800F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0822,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0823,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0824,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0825,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0826,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0827,
L"PM-A820 [Stylus Photo RX560/RX580/RX585/RX590]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0828,
L"PM-A970"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0829,
L"PM-T990"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082a,
L"PM-A920"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082b,
L"Stylus CX5900/CX5000/DX5000/DX5050"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082c,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082d,
L"Storage Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082e,
L"PX-A720 [Stylus CX5900/CX6000/DX6000]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x082f,
L"PX-A620 [Stylus CX3900/DX4000/DX4050]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0830,
L"ME 200 [Stylus CX2800/CX2900]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0831,
L"Stylus CX6900F/CX7000F/DX7000F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0832,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0833,
L"LP-M5600"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0834,
L"LP-M6000"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0835,
L"AcuLaser CX21"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0836,
L"PM-T960"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0837,
L"PM-A940 [Stylus Photo RX680/RX685/RX690]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0838,
L"PX-A640 [CX7300/CX7400/DX7400]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0839,
L"PX-A740 [CX8300/CX8400/DX8400]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083a,
L"PX-FA700 [CX9300F/CX9400Fax/DX9400F]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083b,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083c,
L"PM-A840S [Stylus Photo RX595/RX610]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083d,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083e,
L"MFP Composite Device"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x083f,
L"Stylus CX4300/CX4400/CX5500/CX5600/DX4400/DX4450"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0841,
L"PX-401A [ME 300/Stylus NX100]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0843,
L"LP-M5000"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0844,
L"EP-901A/EP-901F [Artisan 800/Stylus Photo PX800FW]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0846,
L"EP-801A [Artisan 700/Stylus Photo PX700W/TX700W]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0847,
L"PX-601F [ME Office 700FW/Stylus Office BX600FW/TX600FW]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0848,
L"ME Office 600F/Stylus Office BX300F/TX300F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0849,
L"Stylus SX205"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x084a,
L"PX-501A [Stylus NX400]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x084d,
L"PX-402A [Stylus SX115/Stylus NX110 Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x084f,
L"Multifunctional Printer Scanner [ME Office 510 / Epson Stylus SX215]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0850,
L"EP-702A [Stylus Photo PX650/TX650 Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0851,
L"Stylus SX410"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0852,
L"EP-802A [Artisan 710 Series/Stylus Photo PX710W/TX720W Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0853,
L"EP-902A [Artisan 810 Series/Stylus Photo PX810FW Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0854,
L"ME OFFICE 650FN Series/Stylus Office BX310FN/TX520FN Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0855,
L"PX-602F [Stylus Office BX610FW/TX620FW Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0856,
L"PX-502A [Stylus SX515W]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x085c,
L"ME 320/330 Series [Stylus SX125]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x085d,
L"PX-603F [ME OFFICE 960FWD Series/Stylus Office BX625FWD/TX620FWD Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x085e,
L"PX-503A [ME OFFICE 900WD Series/Stylus Office BX525WD]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x085f,
L"Stylus Office BX320FW/TX525FW Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0860,
L"EP-903A/EP-903F [Artisan 835/Stylus Photo PX820FWD Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0861,
L"EP-803A/EP-803AW [Artisan 725/Stylus Photo PX720WD/TX720WD Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0862,
L"EP-703A [Stylus Photo PX660 Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0863,
L"ME OFFICE 620F Series/Stylus Office BX305F/BX305FW/TX320F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0864,
L"ME OFFICE 560W Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0865,
L"ME OFFICE 520 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0866,
L"AcuLaser MX20DN/MX20DNF/MX21DNF"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0869,
L"PX-1600F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x086a,
L"PX-673F [Stylus Office BX925FWD]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0870,
L"Stylus Office BX305FW Plus"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0871,
L"K200 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0872,
L"K300 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0873,
L"L200 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0878,
L"EP-704A"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0879,
L"EP-904A/EP-904F [Artisan 837/Stylus Photo PX830FWD Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x087b,
L"EP-804A/EP-804AR/EP-804AW [Stylus Photo PX730WD/Artisan 730 Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x087c,
L"PX-1700F"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x087d,
L"PX-B750F/WP-4525 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x087f,
L"PX-403A"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0880,
L"PX-434A [Stylus NX330 Series]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0881,
L"PX-404A [ME OFFICE 535]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0883,
L"ME 340 Series/Stylus NX130 Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0884,
L"Stylus NX430W Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0885,
L"Stylus NX230/SX235W Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x088f,
L"Stylus Office BX635FWD"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0890,
L"ME OFFICE 940FW Series/Stylus Office BX630FW Series"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0891,
L"Stylus Office BX535WD"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0892,
L"Stylus Office BX935FWD"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0893,
L"EP-774A"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x0e03,
L"Thermal Receipt Printer [TM-T20]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x1114,
L"XP-440 [Expression Home Small-in-One Printer]"
},
{
0x04b8,
L"Seiko Epson Corp.",
0x1129,
L"ET-4750 [WorkForce ET-4750 EcoTank All-in-One]"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x0300,
L"SafeNet USB SuperPro/UltraPro"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1000,
L"iKey 1000 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1001,
L"iKey 1200 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1002,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1003,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1004,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1005,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1006,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1200,
L"iKey 2000 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1201,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1202,
L"iKey 2032 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1203,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1204,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1205,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1206,
L"iKey 4000 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1300,
L"iKey 3000 Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1301,
L"iKey 3000"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1302,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1303,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1304,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1305,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x1306,
L"iKey Token"
},
{
0x04b9,
L"Rainbow Technologies, Inc.",
0x8000,
L"SafeNet Sentinel Hardware Key"
},
{
0x04ba,
L"Toucan Systems, Ltd",
0x0,
L"0"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0101,
L"USB2-IDE/ATAPI Bridge Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0201,
L"USB2-IDE/ATAPI Bridge Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0204,
L"DVD Multi-plus unit iU-CD2"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0206,
L"DVD Multi-plus unit DVR-UEH8"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0301,
L"Storage Device"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0314,
L"USB-SSMRW SD-card"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0319,
L"USB2-IDE/ATAPI Bridge Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x031a,
L"USB2-IDE/ATAPI Bridge Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x031b,
L"USB2-IDE/ATAPI Bridge Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x031e,
L"USB-SDRW SD-card"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0502,
L"Nogatech Live! (BT)"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0528,
L"GV-USB Video Capture"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0901,
L"USB ETT"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0904,
L"ET/TX Ethernet [pegasus]"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0913,
L"ET/TX-S Ethernet [pegasus2]"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0919,
L"USB WN-B11"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0922,
L"IOData AirPort WN-B11/USBS 802.11b"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0930,
L"ETG-US2"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0937,
L"WN-WAG/USL Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0938,
L"WN-G54/USL Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x093b,
L"WN-GDN/USB"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x093f,
L"WNGDNUS2 802.11n"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0944,
L"WHG-AGDN/US Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0945,
L"WN-GDN/US3 Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0947,
L"WN-G150U Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0948,
L"WN-G300U Wireless LAN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0a03,
L"Serial USB-RSAQ1"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0a07,
L"USB2-iCN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0a08,
L"USB2-iCN Adapter"
},
{
0x04bb,
L"I-O Data Device, Inc.",
0x0c01,
L"FM-10 Pro Disk"
},
{
0x04bd,
L"Toshiba Electronics Taiwan Corp.",
0x0,
L"0"
},
{
0x04be,
L"Telia Research AB",
0x0,
L"0"
},
{
0x04bf,
L"TDK Corp.",
0x0100,
L"MediaReader CF"
},
{
0x04bf,
L"TDK Corp.",
0x0115,
L"USB-PDC Adapter UPA9664"
},
{
0x04bf,
L"TDK Corp.",
0x0116,
L"USB-cdmaOne Adapter UCA1464"
},
{
0x04bf,
L"TDK Corp.",
0x0117,
L"USB-PHS Adapter UHA6400"
},
{
0x04bf,
L"TDK Corp.",
0x0118,
L"USB-PHS Adapter UPA6400"
},
{
0x04bf,
L"TDK Corp.",
0x0135,
L"MediaReader Dual"
},
{
0x04bf,
L"TDK Corp.",
0x0202,
L"73S1121F Smart Card Reader-"
},
{
0x04bf,
L"TDK Corp.",
0x0309,
L"Bluetooth USB dongle"
},
{
0x04bf,
L"TDK Corp.",
0x030a,
L"IBM Bluetooth Ultraport Module"
},
{
0x04bf,
L"TDK Corp.",
0x030b,
L"Bluetooth Device"
},
{
0x04bf,
L"TDK Corp.",
0x030c,
L"Ultraport Bluetooth Device"
},
{
0x04bf,
L"TDK Corp.",
0x0310,
L"Integrated Bluetooth"
},
{
0x04bf,
L"TDK Corp.",
0x0311,
L"Integrated Bluetooth Device"
},
{
0x04bf,
L"TDK Corp.",
0x0317,
L"Bluetooth UltraPort Module from IBM"
},
{
0x04bf,
L"TDK Corp.",
0x0318,
L"IBM Integrated Bluetooth"
},
{
0x04bf,
L"TDK Corp.",
0x0319,
L"Bluetooth Adapter"
},
{
0x04bf,
L"TDK Corp.",
0x0320,
L"Bluetooth Adapter"
},
{
0x04bf,
L"TDK Corp.",
0x0321,
L"Bluetooth Device"
},
{
0x04bf,
L"TDK Corp.",
0x0a28,
L"INDI AV-IN Device"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x0020,
L"56K Voice Pro"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x0022,
L"56K Voice Pro"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x007e,
L"ISDN TA"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x0082,
L"OfficeConnect Analog Modem"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x008f,
L"Pro ISDN TA"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x0097,
L"OfficeConnect Analog"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x009d,
L"HomeConnect Webcam [vicam]"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x00a9,
L"ISDN Pro TA-U"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x00b9,
L"HomeConnect IDSL Modem"
},
{
0x04c1,
L"U.S. Robotics (3Com)",
0x3021,
L"56k Voice FaxModem Pro"
},
{
0x04c2,
L"Methode Electronics Far East PTE, Ltd",
0x0,
L"0"
},
{
0x04c3,
L"Maxi Switch, Inc.",
0x1102,
L"Mouse"
},
{
0x04c3,
L"Maxi Switch, Inc.",
0x2102,
L"Mouse"
},
{
0x04c4,
L"Lockheed Martin Energy Research",
0x0,
L"0"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1029,
L"fi-4010c Scanner"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1033,
L"fi-4110CU"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1041,
L"fi-4120c Scanner"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1042,
L"fi-4220c Scanner"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x105b,
L"AH-F401U Air H device"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1084,
L"PalmSecure Sensor V2"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1096,
L"fi-5110EOX"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1097,
L"fi-5110C"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10ae,
L"fi-4120C2"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10af,
L"fi-4220C2"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10c7,
L"fi-60f scanner"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10e0,
L"fi-5120c Scanner"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10e1,
L"fi-5220C"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10e7,
L"fi-5900C"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x10fe,
L"S500"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1104,
L"KD02906 Line Thermal Printer"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x114f,
L"fi-6130"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x1150,
L"fi-6230"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x11f3,
L"fi-6130Z"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x125a,
L"PalmSecure Sensor Device - MP"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x132e,
L"fi-7160"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x200f,
L"Sigma DP2 (Mass Storage)"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x2010,
L"Sigma DP2 (PictBridge)"
},
{
0x04c5,
L"Fujitsu, Ltd",
0x201d,
L"SATA 3.0 6Gbit/s Adaptor [GROOVY]"
},
{
0x04c6,
L"Toshiba America Electronic Components",
0x0,
L"0"
},
{
0x04c7,
L"Micro Macro Technologies",
0x0,
L"0"
},
{
0x04c8,
L"Konica Corp.",
0x0720,
L"Digital Color Camera"
},
{
0x04c8,
L"Konica Corp.",
0x0721,
L"e-miniD Camera"
},
{
0x04c8,
L"Konica Corp.",
0x0722,
L"e-mini"
},
{
0x04c8,
L"Konica Corp.",
0x0723,
L"KD-200Z Camera"
},
{
0x04c8,
L"Konica Corp.",
0x0726,
L"KD-310Z Camera"
},
{
0x04c8,
L"Konica Corp.",
0x0728,
L"Revio C2 Mass Storage Device"
},
{
0x04c8,
L"Konica Corp.",
0x0729,
L"Revio C2 Digital Camera"
},
{
0x04c8,
L"Konica Corp.",
0x072c,
L"Revio KD20M"
},
{
0x04c8,
L"Konica Corp.",
0x072d,
L"Revio KD410Z"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x0020,
L"USB Keyboard"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x004b,
L"Keyboard"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x004f,
L"SK-9020 keyboard"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x008a,
L"Acer Wired Mouse Model SM-9023"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x1766,
L"HID Monitor Controls"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x2004,
L"Bluetooth 4.0 [Broadcom BCM20702A0]"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x2006,
L"Broadcom BCM43142A0 Bluetooth Device"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x2007,
L"Broadcom BCM43142A0 Bluetooth Device"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x3005,
L"Atheros Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x300b,
L"Atheros AR3012 Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x300d,
L"Atheros AR3012 Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x300f,
L"Atheros AR3012 Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x3014,
L"Qualcomm Atheros Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x3015,
L"Qualcomm Atheros QCA9377 Bluetooth"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x7022,
L"HP HD Webcam"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x7025,
L"HP HD Webcam"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x7046,
L"TOSHIBA Web Camera - HD"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0x9304,
L"Hub"
},
{
0x04ca,
L"Lite-On Technology Corp.",
0xf01c,
L"TT1280DA DVB-T TV Tuner"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0100,
L"FinePix 30i/40i/50i, A101/201, 1300/2200, 1400/2400/2600/2800/4500/4700/4800/4900/6800/6900 Zoom"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0103,
L"FinePix NX-500/NX-700 printer"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0104,
L"FinePix A101, 2600/2800/4800/6800 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0108,
L"FinePix F601 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0109,
L"FinePix F601 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x010a,
L"FinePix S602 (Pro) Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x010b,
L"FinePix S602 (Pro) Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x010d,
L"FinePix S2 pro"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x010e,
L"FinePix F402 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x010f,
L"FinePix F402 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0110,
L"FinePix M603 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0111,
L"FinePix M603 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0112,
L"FinePix A202, A200 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0113,
L"FinePix A202, A200 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0114,
L"FinePix F401 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0115,
L"FinePix F401 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0116,
L"FinePix A203 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0117,
L"FinePix A203 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0118,
L"FinePix A303 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0119,
L"FinePix A303 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x011a,
L"FinePix S304/3800 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x011b,
L"FinePix S304/3800 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x011c,
L"FinePix A204/2650 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x011d,
L"FinePix A204/2650 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0120,
L"FinePix F700 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0121,
L"FinePix F700 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0122,
L"FinePix F410 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0123,
L"FinePix F410 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0124,
L"FinePix A310 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0125,
L"FinePix A310 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0126,
L"FinePix A210 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0127,
L"FinePix A210 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0128,
L"FinePix A205(S) Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0129,
L"FinePix A205(S) Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x012a,
L"FinePix F610 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x012b,
L"FinePix Digital Camera 030513"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x012c,
L"FinePix S7000 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x012d,
L"FinePix S7000 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x012f,
L"FinePix Digital Camera 030731"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0130,
L"FinePix S5000 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0131,
L"FinePix S5000 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x013b,
L"FinePix Digital Camera 030722"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x013c,
L"FinePix S3000 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x013d,
L"FinePix S3000 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x013e,
L"FinePix F420 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x013f,
L"FinePix F420 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0142,
L"FinePix S7000 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0148,
L"FinePix A330 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0149,
L"FinePix A330 Zoom (UVC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x014a,
L"FinePix A330 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x014b,
L"FinePix A340 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x014c,
L"FinePix A340 Zoom (UVC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0159,
L"FinePix F710 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0165,
L"FinePix S3500 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0168,
L"FinePix E500 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0169,
L"FinePix E500 Zoom (UVC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x016b,
L"FinePix E510 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x016c,
L"FinePix E510 Zoom (PC CAM)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x016e,
L"FinePix S5500 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x016f,
L"FinePix S5500 Zoom (UVC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0171,
L"FinePix E550 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0172,
L"FinePix E550 Zoom (UVC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0177,
L"FinePix F10 (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0179,
L"Finepix F10 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0186,
L"FinePix S5200/S5600 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0188,
L"FinePix S5200/S5600 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x018e,
L"FinePix S9500 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x018f,
L"FinePix S9500 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0192,
L"FinePix E900 Zoom (DSC)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0193,
L"FinePix E900 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x019b,
L"FinePix F30 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01af,
L"FinePix A700 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01bf,
L"FinePix F6000fd/S6500fd Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c0,
L"FinePix F20 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c1,
L"FinePix F31fd (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c3,
L"FinePix S5 Pro"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c4,
L"FinePix S5700 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c5,
L"FinePix F40fd (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01c6,
L"FinePix A820 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01d2,
L"FinePix A800 Zoom (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01d3,
L"FinePix A920 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01d4,
L"FinePix F50fd (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01d5,
L"FinePix F47 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01f7,
L"FinePix J250 (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x01fd,
L"A160"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x023e,
L"FinePix AX300"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0240,
L"FinePix S2950 Digital Camera"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0241,
L"FinePix S3200 Digital Camera"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x0278,
L"FinePix JV300"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x02c5,
L"FinePix S9900W Digital Camera (PTP)"
},
{
0x04cb,
L"Fuji Photo Film Co., Ltd",
0x5006,
L"ASK-300"
},
{
0x04cc,
L"ST-Ericsson",
0x1122,
L"Hub"
},
{
0x04cc,
L"ST-Ericsson",
0x1520,
L"USB 2.0 Hub (Avocent KVM)"
},
{
0x04cc,
L"ST-Ericsson",
0x1521,
L"USB 2.0 Hub"
},
{
0x04cc,
L"ST-Ericsson",
0x1a62,
L"GW Instek GSP-830 Spectrum Analyzer (HID)"
},
{
0x04cc,
L"ST-Ericsson",
0x2323,
L"Ux500 serial debug port"
},
{
0x04cc,
L"ST-Ericsson",
0x2533,
L"NFC device (PN533)"
},
{
0x04cc,
L"ST-Ericsson",
0x8116,
L"Camera"
},
{
0x04cd,
L"Tatung Co. Of America",
0x0,
L"0"
},
{
0x04ce,
L"ScanLogic Corp.",
0x0002,
L"SL11R-IDE IDE Bridge"
},
{
0x04ce,
L"ScanLogic Corp.",
0x0100,
L"USB2PRN Printer Class"
},
{
0x04ce,
L"ScanLogic Corp.",
0x0300,
L"Phantom 336CX - C3 scanner"
},
{
0x04ce,
L"ScanLogic Corp.",
0x04ce,
L"SL11DEMO, VID: 0x4ce, PID: 0x4ce"
},
{
0x04ce,
L"ScanLogic Corp.",
0x07d1,
L"SL11R, VID: 0x4ce, PID: 0x07D1"
},
{
0x04cf,
L"Myson Century, Inc.",
0x0022,
L"OCZ Alchemy Series Elixir II Keyboard"
},
{
0x04cf,
L"Myson Century, Inc.",
0x0800,
L"MTP800 Mass Storage Device"
},
{
0x04cf,
L"Myson Century, Inc.",
0x8810,
L"CS8810 Mass Storage Device"
},
{
0x04cf,
L"Myson Century, Inc.",
0x8811,
L"CS8811 Mass Storage Device"
},
{
0x04cf,
L"Myson Century, Inc.",
0x8813,
L"CS8813 Mass Storage Device"
},
{
0x04cf,
L"Myson Century, Inc.",
0x8818,
L"USB2.0 to ATAPI Bridge Controller"
},
{
0x04cf,
L"Myson Century, Inc.",
0x8819,
L"USB 2.0 SD/MMC Reader"
},
{
0x04cf,
L"Myson Century, Inc.",
0x9920,
L"CS8819A2-114 Mass Storage Device"
},
{
0x04d0,
L"Digi International",
0x0,
L"0"
},
{
0x04d1,
L"ITT Canon",
0x0,
L"0"
},
{
0x04d2,
L"Altec Lansing Technologies",
0x0070,
L"ADA70 Speakers"
},
{
0x04d2,
L"Altec Lansing Technologies",
0x0305,
L"Non-Compliant Audio Device"
},
{
0x04d2,
L"Altec Lansing Technologies",
0x0311,
L"ADA-310 Speakers"
},
{
0x04d2,
L"Altec Lansing Technologies",
0x2060,
L"Claritel-i750 - vp"
},
{
0x04d2,
L"Altec Lansing Technologies",
0xff05,
L"ADA-305 Speakers"
},
{
0x04d2,
L"Altec Lansing Technologies",
0xff47,
L"Lansing HID Audio Controls"
},
{
0x04d2,
L"Altec Lansing Technologies",
0xff49,
L"Lansing HID Audio Controls"
},
{
0x04d3,
L"VidUS, Inc.",
0x0,
L"0"
},
{
0x04d4,
L"LSI Logic, Inc.",
0x0,
L"0"
},
{
0x04d5,
L"Forte Technologies, Inc.",
0x0,
L"0"
},
{
0x04d6,
L"Mentor Graphics",
0x0,
L"0"
},
{
0x04d7,
L"Oki Semiconductor",
0x1be4,
L"Bluetooth Device"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0002,
L"PicoLCD 20x2"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0003,
L"PICkit 2 Microcontroller Programmer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x000a,
L"CDC RS-232 Emulation Demo"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x000b,
L"PIC18F2550 (32K Flashable 10 Channel, 10 Bit A/D USB Microcontroller)"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0032,
L"PICkit1"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0033,
L"PICkit2"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0036,
L"PICkit Serial Analyzer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x00e0,
L"PIC32 Starter Board"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x04cd,
L"28Cxxx EEPROM Programmer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x0a04,
L"AGP LIN Serial Analyzer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x8000,
L"In-Circuit Debugger"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x8001,
L"ICD2 in-circuit debugger"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x8101,
L"PIC24F Starter Kit"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x8107,
L"Microstick II"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x8108,
L"ChipKit Pro MX7 (PIC32MX)"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x9004,
L"Microchip REAL ICE"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x900a,
L"PICkit3"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x9012,
L"PICkit4"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0x9015,
L"ICD 4 In-Circuit Debugger"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xc001,
L"PicoLCD 20x4"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xe11c,
L"TL866CS EEPROM Programmer [MiniPRO]"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xed16,
L"BeamiRC 2.0 CNC remote controller analoge"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xedb4,
L"micro PLC (ATSAMD51G19A) [Black Brix ECU II]"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xedb5,
L"ATMEGA32U4 [Black Brix ECU]"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf2c4,
L"Macareux-labs Hygrometry Temperature Sensor"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf2f7,
L"Yepkit YKUSH"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf3aa,
L"Macareux-labs Usbce Bootloader mode"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf437,
L"SBE Tech Ultrasonic Anemometer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf4b5,
L"SmartScope"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf5fe,
L"TrueRNG"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf8da,
L"Hughski Ltd. ColorHug"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf8e8,
L"Harmony 300/350 Remote"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xf91c,
L"SPROG IIv3"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfaff,
L"Dangerous Prototypes BusPirate v4 Bootloader mode"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfb00,
L"Dangerous Prototypes BusPirate v4"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfbb2,
L"GCUSB-nStep stepper motor controller"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfbba,
L"DiscFerret Magnetic Disc Analyser (bootloader mode)"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfbbb,
L"DiscFerret Magnetic Disc Analyser (active mode)"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfc1e,
L"Bachrus Speedometer Interface"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xfc92,
L"Open Bench Logic Sniffer"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xffee,
L"Devantech USB-ISS"
},
{
0x04d8,
L"Microchip Technology, Inc.",
0xffef,
L"PICoPLC [APStech]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x0022,
L"Portable Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x0348,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x048e,
L"Optical Mouse"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x0499,
L"Optical Mouse"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1135,
L"Mouse [MGK-15BU/MLK-15BU]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1203,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1400,
L"PS/2 keyboard + mouse controller"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1503,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1603,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1702,
L"Keyboard LKS02"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x1818,
L"Keyboard [Diatec Filco Majestouch 2]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2011,
L"Keyboard [Diatec Filco Majestouch 1]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2013,
L"Keyboard [Das Keyboard]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2206,
L"Fujitsu Siemens Mouse Esprimo Q"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2221,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2323,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2519,
L"Shenzhen LogoTech 2.4GHz receiver"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2832,
L"HT82A832R Audio MCU"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x2834,
L"HT82A834R Audio MCU"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0x4545,
L"Keyboard [Diatec Majestouch 2 Tenkeyless]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa01c,
L"wireless multimedia keyboard with trackball [Trust ADURA 17911]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa050,
L"Chatman V1"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa052,
L"USB-zyTemp"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa055,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa096,
L"Keyboard"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa09f,
L"E-Signal LUOM G10 Mechanical Gaming Mouse"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa100,
L"Mouse [HV-MS735]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa11b,
L"Mouse [MX-3200]"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xa29f,
L"Microarray fingerprint reader"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xb534,
L"LGT8F328P Microprocessor"
},
{
0x04d9,
L"Holtek Semiconductor, Inc.",
0xe002,
L"MCU"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0901,
L"LS-120 Camera"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0912,
L"SDR-S10"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0b01,
L"CD-R/RW Drive"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0b03,
L"SuperDisk 240MB"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d01,
L"CD-R Drive KXL-840AN"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d09,
L"CD-R Drive KXL-RW32AN"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d0a,
L"CD-R Drive KXL-CB20AN"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d0d,
L"CDRCB03"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d0e,
L"DVD-ROM & CD-R/RW"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0d14,
L"DVD-RAM MLT08"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0f07,
L"KX-MB2030 Multifunction Laser Printer"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x0f40,
L"Printer"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x104d,
L"Elite Panaboard UB-T880 (HID)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x104e,
L"Elite Panaboard Pen Adaptor (HID)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x1500,
L"MFSUSB Driver"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x1800,
L"DY-WL10 802.11abgn Adapter [Broadcom BCM4323]"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x1b00,
L"MultiMediaCard"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2121,
L"EB-VS6"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2316,
L"DVC Mass Storage Device"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2317,
L"DVC USB-SERIAL Driver for WinXP"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2318,
L"NV-GS11/230/250 (webcam mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2319,
L"NV-GS15 (webcam mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x231a,
L"NV-GS11/230/250 (DV mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x231d,
L"DVC Web Camera Device"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x231e,
L"DVC DV Stream Device"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2372,
L"Lumix Camera (Storage mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2374,
L"Lumix Camera (PTP mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2451,
L"HDC-SD9"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x245b,
L"HC-X920K (3MOS Full HD video camcorder)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2477,
L"SDR-H85 Camcorder (PC mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2478,
L"SDR-H85 Camcorder (recorder mode - SD card)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2479,
L"SDR-H85 Camcorder (recorder mode - HDD)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x2497,
L"HDC-TM700"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x250c,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x250d,
L"Gobi Wireless Modem"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x3904,
L"N5HBZ0000055 802.11abgn Wireless Adapter [Atheros AR7010+AR9280]"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x3908,
L"N5HBZ0000062 802.11abgn Wireless Adapter [Atheros AR9374v1.1]"
},
{
0x04da,
L"Panasonic (Matsushita)",
0x3c04,
L"JT-P100MR-20 [ePassport Reader]"
},
{
0x04db,
L"Hypertec Pty, Ltd",
0x0,
L"0"
},
{
0x04dc,
L"Huan Hsin Holdings, Ltd",
0x0,
L"0"
},
{
0x04dd,
L"Sharp Corp.",
0x13a6,
L"MFC2000"
},
{
0x04dd,
L"Sharp Corp.",
0x6006,
L"AL-1216"
},
{
0x04dd,
L"Sharp Corp.",
0x6007,
L"AL-1045"
},
{
0x04dd,
L"Sharp Corp.",
0x6008,
L"AL-1255"
},
{
0x04dd,
L"Sharp Corp.",
0x6009,
L"AL-1530CS"
},
{
0x04dd,
L"Sharp Corp.",
0x600a,
L"AL-1540CS"
},
{
0x04dd,
L"Sharp Corp.",
0x600b,
L"AL-1456"
},
{
0x04dd,
L"Sharp Corp.",
0x600c,
L"AL-1555"
},
{
0x04dd,
L"Sharp Corp.",
0x600d,
L"AL-1225"
},
{
0x04dd,
L"Sharp Corp.",
0x600e,
L"AL-1551CS"
},
{
0x04dd,
L"Sharp Corp.",
0x600f,
L"AR-122E"
},
{
0x04dd,
L"Sharp Corp.",
0x6010,
L"AR-152E"
},
{
0x04dd,
L"Sharp Corp.",
0x6011,
L"AR-157E"
},
{
0x04dd,
L"Sharp Corp.",
0x6012,
L"SN-1045"
},
{
0x04dd,
L"Sharp Corp.",
0x6013,
L"SN-1255"
},
{
0x04dd,
L"Sharp Corp.",
0x6014,
L"SN-1456"
},
{
0x04dd,
L"Sharp Corp.",
0x6015,
L"SN-1555"
},
{
0x04dd,
L"Sharp Corp.",
0x6016,
L"AR-153E"
},
{
0x04dd,
L"Sharp Corp.",
0x6017,
L"AR-122E N"
},
{
0x04dd,
L"Sharp Corp.",
0x6018,
L"AR-153E N"
},
{
0x04dd,
L"Sharp Corp.",
0x6019,
L"AR-152E N"
},
{
0x04dd,
L"Sharp Corp.",
0x601a,
L"AR-157E N"
},
{
0x04dd,
L"Sharp Corp.",
0x601b,
L"AL-1217"
},
{
0x04dd,
L"Sharp Corp.",
0x601c,
L"AL-1226"
},
{
0x04dd,
L"Sharp Corp.",
0x601d,
L"AR-123E"
},
{
0x04dd,
L"Sharp Corp.",
0x6021,
L"IS01"
},
{
0x04dd,
L"Sharp Corp.",
0x7002,
L"DVC Ver.1.0"
},
{
0x04dd,
L"Sharp Corp.",
0x7004,
L"VE-CG40U Digital Still Camera"
},
{
0x04dd,
L"Sharp Corp.",
0x7005,
L"VE-CG30 Digital Still Camera"
},
{
0x04dd,
L"Sharp Corp.",
0x7007,
L"VL-Z7S Digital Camcorder"
},
{
0x04dd,
L"Sharp Corp.",
0x8004,
L"Zaurus SL-5000D/SL-5500 PDA"
},
{
0x04dd,
L"Sharp Corp.",
0x8005,
L"Zaurus A-300"
},
{
0x04dd,
L"Sharp Corp.",
0x8006,
L"Zaurus SL-B500/SL-5600 PDA"
},
{
0x04dd,
L"Sharp Corp.",
0x8007,
L"Zaurus C-700 PDA"
},
{
0x04dd,
L"Sharp Corp.",
0x9009,
L"AR-M160"
},
{
0x04dd,
L"Sharp Corp.",
0x9014,
L"IM-DR80 Portable NetMD Player"
},
{
0x04dd,
L"Sharp Corp.",
0x9031,
L"Zaurus C-750/C-760/C-860/SL-C3000 PDA"
},
{
0x04dd,
L"Sharp Corp.",
0x9032,
L"Zaurus SL-6000"
},
{
0x04dd,
L"Sharp Corp.",
0x903a,
L"GSM GPRS"
},
{
0x04dd,
L"Sharp Corp.",
0x9050,
L"Zaurus C-860 PDA"
},
{
0x04dd,
L"Sharp Corp.",
0x9056,
L"Viewcam Z"
},
{
0x04dd,
L"Sharp Corp.",
0x9073,
L"AM-900"
},
{
0x04dd,
L"Sharp Corp.",
0x9074,
L"GSM GPRS"
},
{
0x04dd,
L"Sharp Corp.",
0x90a9,
L"Sharp Composite"
},
{
0x04dd,
L"Sharp Corp.",
0x90d0,
L"USB-to-Serial Comm. Port"
},
{
0x04dd,
L"Sharp Corp.",
0x90f2,
L"Sharp 3G GSM USB Control"
},
{
0x04dd,
L"Sharp Corp.",
0x9120,
L"WS004SH"
},
{
0x04dd,
L"Sharp Corp.",
0x9122,
L"WS007SH"
},
{
0x04dd,
L"Sharp Corp.",
0x9123,
L"W-ZERO3 ES Smartphone"
},
{
0x04dd,
L"Sharp Corp.",
0x91a3,
L"922SH Internet Machine"
},
{
0x04dd,
L"Sharp Corp.",
0x939a,
L"IS03"
},
{
0x04de,
L"MindShare, Inc.",
0x0,
L"0"
},
{
0x04df,
L"Interlink Electronics",
0x0,
L"0"
},
{
0x04e1,
L"Iiyama North America, Inc.",
0x0201,
L"Monitor Hub"
},
{
0x04e2,
L"Exar Corp.",
0x1410,
L"XR21V1410 USB-UART IC"
},
{
0x04e3,
L"Zilog, Inc.",
0x0,
L"0"
},
{
0x04e4,
L"ACC Microelectronics",
0x0,
L"0"
},
{
0x04e5,
L"Promise Technology",
0x0,
L"0"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0001,
L"E-USB ATA Bridge"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0002,
L"eUSCSI SCSI Bridge"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0003,
L"eUSB SmartMedia Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0005,
L"eUSB SmartMedia/CompactFlash Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0006,
L"eUSB SmartMedia Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0007,
L"Hifd"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0009,
L"eUSB ATA/ATAPI Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x000a,
L"eUSB CompactFlash Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x000b,
L"eUSCSI Bridge"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x000c,
L"eUSCSI Bridge"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x000d,
L"Dazzle MS"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0012,
L"Dazzle SD/MMC"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0101,
L"eUSB ATA Bridge (Sony Spressa USB CDRW)"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0311,
L"Dazzle DM-CF"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0312,
L"Dazzle DM-SD/MMC"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0313,
L"Dazzle SM"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0314,
L"Dazzle MS"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0322,
L"e-Film Reader-5"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0325,
L"eUSB ORCA Quad Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0327,
L"Digital Media Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x03fe,
L"DMHS2 DFU Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0406,
L"eUSB SmartDM Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x04e6,
L"eUSB DFU Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x04e7,
L"STCII DFU Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x04e8,
L"eUSBDM DFU Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x04e9,
L"DM-E DFU Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0500,
L"Veridicom 5thSense Fingerprint Sensor and eUSB SmartCard"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0701,
L"DCS200 Loader Device"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0702,
L"DVD Creation Station 200"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0703,
L"DVC100 Loader Device"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x0704,
L"Digital Video Creator 100"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x1001,
L"SCR300 Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x1010,
L"USBAT-2 CompactFlash Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x1014,
L"e-Film Reader-3"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x1020,
L"USBAT ATA/ATAPI Adapter"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x2007,
L"RSA SecurID ComboReader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x2009,
L"Citibank Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x200a,
L"Reflex v.2 Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x200d,
L"STR391 Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5111,
L"SCR331-DI SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5113,
L"SCR333 SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5114,
L"SCR331-DI SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5115,
L"SCR335 SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5116,
L"SCR331-LC1 / SCR3310 SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5117,
L"SCR3320 - Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5118,
L"Expresscard SIM Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5119,
L"SCR3340 - ExpressCard54 Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x511b,
L"SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x511d,
L"SCR3311 Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5120,
L"SCR331-DI SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5121,
L"SDI010 Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5151,
L"SCR338 Keyboard Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5292,
L"SCL011 RFID reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5410,
L"SCR35xx Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5591,
L"SCL3711-NFC&RW"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0x5810,
L"uTrust 2700 R Smart Card Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0xe000,
L"SCRx31 Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0xe001,
L"SCR331 SmartCard Reader"
},
{
0x04e6,
L"SCM Microsystems, Inc.",
0xe003,
L"SPR532 PinPad SmartCard Reader"
},
{
0x04e7,
L"Elo TouchSystems",
0x0001,
L"TouchScreen"
},
{
0x04e7,
L"Elo TouchSystems",
0x0002,
L"Touchmonitor Interface 2600 Rev 2"
},
{
0x04e7,
L"Elo TouchSystems",
0x0004,
L"4000U CarrollTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0007,
L"2500U IntelliTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0008,
L"3000U AccuTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0009,
L"4000U CarrollTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0020,
L"Touchscreen Interface (2700)"
},
{
0x04e7,
L"Elo TouchSystems",
0x0021,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0030,
L"4500U CarrollTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0032,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0033,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0041,
L"5010 Surface Capacitive Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0042,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0050,
L"2216 AccuTouch® Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0071,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0072,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0081,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x0082,
L"Touchmonitor Interface"
},
{
0x04e7,
L"Elo TouchSystems",
0x00ff,
L"Touchmonitor Interface"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x0001,
L"Printer Bootloader"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x0100,
L"Kingston Flash Drive (128MB)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x0110,
L"Connect3D Flash Drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x0111,
L"Connect3D Flash Drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x0300,
L"E2530 / GT-C3350 Phones (Mass storage mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x1003,
L"MP3 Player and Recorder"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x1006,
L"SDC-200Z"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x130c,
L"NX100"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x1323,
L"WB700 Camera"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x1f05,
L"S2 Portable [JMicron] (500GB)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x1f06,
L"HX-MU064DA portable harddisk"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x2018,
L"WIS09ABGN LinkStick Wireless LAN Adapter"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x2035,
L"Digital Photo Frame Mass Storage"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x2036,
L"Digital Photo Frame Mini Monitor"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3004,
L"ML-4600"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3005,
L"Docuprint P1210"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3008,
L"ML-6060 laser printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x300c,
L"ML-1210 Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x300e,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3104,
L"ML-3550N"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3210,
L"ML-5200A Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3226,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3228,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x322a,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x322c,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3230,
L"ML-1440"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3232,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3236,
L"ML-1450"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3238,
L"ML-1430"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x323a,
L"ML-1710 Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x323b,
L"Phaser 3130"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x323c,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x323d,
L"Phaser 3120"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x323e,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3240,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3242,
L"ML-1510 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3248,
L"Color Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x324a,
L"Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x324c,
L"ML-1740 Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x324d,
L"Phaser 3121"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3256,
L"ML-1520 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x325b,
L"Xerox Phaser 3117 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x325f,
L"Phaser 3425 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3260,
L"CLP-510 Color Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3268,
L"ML-1610 Mono Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x326c,
L"ML-2010P Mono Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3276,
L"ML-3050/ML-3051 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x327e,
L"ML-2510 Series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x328e,
L"CLP-310 Color Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3292,
L"ML-1640 Series Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3296,
L"ML-2580N Mono Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3297,
L"ML-191x/ML-252x Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x329f,
L"CLP-325 Color Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3301,
L"ML-1660 Series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x330c,
L"ML-1865"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x330f,
L"ML-216x Series Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3310,
L"ML-331x Series Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3315,
L"ML-2540 Series Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x331e,
L"M262x/M282x Xpress Series Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3409,
L"SCX-4216F Scanner"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x340c,
L"SCX-5x15 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x340d,
L"SCX-6x20 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x340e,
L"MFP 560 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x340f,
L"Printing Support"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3412,
L"SCX-4x20 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3413,
L"SCX-4100 Scanner"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3415,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3419,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x341a,
L"Printing Support"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x341b,
L"SCX-4200 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x341c,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x341d,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x341f,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3420,
L"Composite Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3426,
L"SCX-4500 Laser Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x342d,
L"SCX-4x28 Series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x344f,
L"SCX-3400 Series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x347e,
L"C48x Series Color Laser Multifunction Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3605,
L"InkJet Color Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3606,
L"InkJet Color Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3609,
L"InkJet Color Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3902,
L"InkJet Color Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3903,
L"Xerox WorkCentre XK50cx"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x390f,
L"InkJet Color Printer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x3911,
L"SCX-1020 series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x4005,
L"GT-S8000 Jet (msc)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x4f1f,
L"GT-S8000 Jet (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5000,
L"YP-MF series"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5001,
L"YP-100"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5002,
L"YP-30"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5003,
L"YP-700"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5004,
L"YP-30"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5005,
L"YP-300"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5006,
L"YP-750"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x500d,
L"MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5010,
L"Yepp YP-35"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5011,
L"YP-780"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5013,
L"YP-60"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5015,
L"yepp upgrade"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x501b,
L"MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5021,
L"Yepp YP-ST5"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5026,
L"YP-MT6V"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5027,
L"YP-T7"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x502b,
L"YP-F1"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5032,
L"YP-J70"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x503b,
L"YP-U1 MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x503d,
L"YP-T7F"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5041,
L"YP-Z5"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5050,
L"YP-U2 MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5051,
L"YP-F2R"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5055,
L"YP-T9"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x507d,
L"YP-U3 (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x507f,
L"YP-T9J"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5080,
L"Yepp YP-K3 (msc)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5081,
L"Yepp YP-K3 (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5082,
L"YP-P2 (msc)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5083,
L"YP-P2 (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x508a,
L"YP-T10"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x508b,
L"YP-S5 MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x508c,
L"YP-S5"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5090,
L"YP-S3 (msc)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5091,
L"YP-S3 (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5092,
L"YP-U4 (msc)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5093,
L"YP-U4 (mtp)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5095,
L"YP-S2"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x510f,
L"YP-R1"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5119,
L"Yepp YP-P3"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x511c,
L"YP-Q2"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5121,
L"YP-U5"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5123,
L"Yepp YP-M1"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a00,
L"YP-NEU"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a01,
L"YP-NDU"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a03,
L"Yepp MP3 Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a04,
L"YP-800"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a08,
L"YP-90"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5a0f,
L"Meizu M6 MiniPlayer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b01,
L"Memory Stick Reader/Writer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b02,
L"Memory Stick Reader/Writer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b03,
L"Memory Stick Reader/Writer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b04,
L"Memory Stick Reader/Writer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b05,
L"Memory Stick Reader/Writer"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5b11,
L"SEW-2001u Card"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f00,
L"NEXiO Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f01,
L"NEXiO Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f02,
L"NEXiO Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f03,
L"NEXiO Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f04,
L"NEXiO Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x5f05,
L"STORY Station 1TB"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6032,
L"G2 Portable hard drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6033,
L"G2 Portable device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6034,
L"G2 Portable hard drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x60b3,
L"M2 Portable Hard Drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x60c4,
L"M2 Portable Hard Drive USB 3.0"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6124,
L"D3 Station External Hard Drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6125,
L"D3 Station External Hard Drive"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x61b5,
L"M3 Portable Hard Drive 2TB"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x61b6,
L"M3 Portable Hard Drive 1TB"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x61b7,
L"M3 Portable Hard Drive 4TB"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x61f3,
L"Portable SSD T3 (MU-PT250B, MU-PT500B)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x61f5,
L"Portable SSD T5"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6601,
L"Mobile Phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6602,
L"Galaxy"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6603,
L"Galaxy"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6611,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6613,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6615,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6617,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6619,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x661b,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x661e,
L"Handheld"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6620,
L"Handheld"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6622,
L"Handheld"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6624,
L"Handheld"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x662e,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6630,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6632,
L"MITs Sync"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x663e,
L"D900e/B2100 Phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x663f,
L"SGH-E720/SGH-E840"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6640,
L"Usb Modem Enumerator"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6651,
L"i8510 Innov8"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6702,
L"X830"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6708,
L"U600 Phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6709,
L"U600"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6734,
L"Juke"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6759,
L"D900e/B2100 Media Player"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x675a,
L"D900e/B2100 Mass Storage"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x675b,
L"D900e Camera"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6772,
L"Standalone LTE device (Trial)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6795,
L"S5230"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6802,
L"Standalone HSPA device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6806,
L"Composite LTE device (Trial)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6807,
L"Composite HSPA device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x681c,
L"Galaxy Portal/Spica/S"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x681d,
L"Galaxy Portal/Spica Android Phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6843,
L"E2530 Phone (Samsung Kies mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x684e,
L"Wave (GT-S8500)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x685b,
L"GT-I9100 Phone [Galaxy S II] (mass storage mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x685c,
L"GT-I9250 Phone [Galaxy Nexus] (Mass storage mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x685d,
L"GT-I9100 Phone [Galaxy S II] (Download mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x685e,
L"GT-I9100 / GT-C3350 Phones (USB Debugging mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6860,
L"Galaxy series, misc. (MTP mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6863,
L"Galaxy series, misc. (tethering mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6864,
L"GT-I9070 (network tethering, USB debugging enabled)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6865,
L"Galaxy (PTP mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6866,
L"Galaxy (debugging mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6868,
L"Escape Composite driver for Android Phones: Modem+Diagnostic+ADB"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6875,
L"GT-B3710 Standalone LTE device (Commercial)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6876,
L"GT-B3710 LTE Modem"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6877,
L"Galaxy S"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x687a,
L"GT-E2370 mobile phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6888,
L"GT-B3730 Composite LTE device (Commercial)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x6889,
L"GT-B3730 Composite LTE device (Commercial)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x689a,
L"LTE Storage Driver [CMC2xx]"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x689e,
L"GT-S5670 [Galaxy Fit]"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x68aa,
L"Reality"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7011,
L"SEW-2003U Card"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7021,
L"Bluetooth Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7061,
L"eHome Infrared Receiver"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7080,
L"Anycall SCH-W580"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7081,
L"Human Interface Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x7301,
L"Fingerprint Device"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x8001,
L"Handheld"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x8002,
L"Portable SSD 500GB Model Number: MU - P8500B"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0x8003,
L"Portable SSD T1"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xd003,
L"GT-I9003"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xe020,
L"SERI E02 SCOM 6200 UMTS Phone"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xe021,
L"SERI E02 SCOM 6200 Virtual UARTs"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xe022,
L"SERI E02 SCOM 6200 Flash Load Disk"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xf000,
L"Intensity 3 (Mass Storage Mode)"
},
{
0x04e8,
L"Samsung Electronics Co., Ltd",
0xff30,
L"SG_iMON"
},
{
0x04e9,
L"PC-Tel, Inc.",
0x0,
L"0"
},
{
0x04ea,
L"Brooktree Corp.",
0x0,
L"0"
},
{
0x04eb,
L"Northstar Systems, Inc.",
0xe004,
L"eHome Infrared Transceiver"
},
{
0x04ec,
L"Tokyo Electron Device, Ltd",
0x0,
L"0"
},
{
0x04ed,
L"Annabooks",
0x0,
L"0"
},
{
0x04ef,
L"Pacific Electronic International, Inc.",
0x0,
L"0"
},
{
0x04f0,
L"Daewoo Electronics Co., Ltd",
0x0,
L"0"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x0001,
L"GC-QX3 Digital Still Camera"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x0004,
L"GR-DVL815U Digital Video Camera"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x0006,
L"DV Camera Storage"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x0008,
L"GZ-MG30AA/MC500E Digital Video Camera"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x0009,
L"GR-DX25EK Digital Video Camera"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x000a,
L"GR-D72 Digital Video Camera"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x1001,
L"GC-A50 Camera Device"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x3008,
L"MP-PRX1 Ethernet"
},
{
0x04f1,
L"Victor Company of Japan, Ltd",
0x3009,
L"MP-XP7250 WLAN Adapter"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0001,
L"KU-8933 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0002,
L"NT68P81 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0110,
L"KU-2971 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0111,
L"KU-9908 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0112,
L"KU-8933 Keyboard with PS/2 Mouse port"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0116,
L"KU-2971/KU-0325 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0200,
L"KBR-0108"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0201,
L"Gaming Keyboard KPD0250"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0220,
L"Wireless HID Receiver"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0402,
L"Genius LuxeMate i200 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0403,
L"KU-0420 keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0418,
L"KU-0418 Tactical Pad"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0618,
L"RG-0618U Wireless HID Receiver & KG-0609 Wireless Keyboard with Touchpad"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0718,
L"wired mouse"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0760,
L"Acer KU-0760 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0833,
L"KU-0833 Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0841,
L"HP Multimedia Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0860,
L"2.4G Multimedia Wireless Kit"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x0939,
L"Amazon Basics mouse"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x1061,
L"HP KG-1061 Wireless Keyboard+Mouse"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0x1121,
L"Periboard 717 Mini Wireless Keyboard"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa001,
L"E-Video DC-100 Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa120,
L"ORITE CCD Webcam(PC370R)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa121,
L"ORITE CCD Webcam(PC370R)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa122,
L"ORITE CCD Webcam(PC370R)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa123,
L"ORITE CCD Webcam(PC370R)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa124,
L"ORITE CCD Webcam(PC370R)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa128,
L"PC Camera (SN9C202 + OV7663 + EEPROM)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa133,
L"Gateway Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa136,
L"LabTec Webcam 5500"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa147,
L"Medion Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa204,
L"DSC WIA Device (1300)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa208,
L"DSC WIA Device (2320)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa209,
L"Labtec DC-2320"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa20a,
L"DSC WIA Device (3310)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa20c,
L"DSC WIA Device (3320)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xa210,
L"Audio Device"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb008,
L"USB 2.0 Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb009,
L"Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb010,
L"Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb012,
L"1.3 MPixel UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb013,
L"USB 2.0 Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb015,
L"VGA 24fps UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb016,
L"VGA 30fps UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb018,
L"2M UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb021,
L"ViewSonic 1.3M, USB2.0 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb022,
L"Gateway USB 2.0 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb023,
L"Gateway USB 2.0 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb024,
L"USB 2.0 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb025,
L"Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb027,
L"Gateway USB 2.0 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb028,
L"VGA UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb029,
L"1.3M UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb036,
L"Asus Integrated 0.3M UVC Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb044,
L"Acer CrystalEye Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb057,
L"integrated USB webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb059,
L"CKF7037 HP webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb064,
L"CNA7137 Integrated Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb070,
L"Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb071,
L"2.0M UVC Webcam / CNF7129"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb083,
L"CKF7063 Webcam (HP)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb091,
L"Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb104,
L"CNF7069 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb107,
L"CNF7070 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb14c,
L"CNF8050 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb159,
L"CNF8243 Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb15c,
L"Sony Vaio Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb175,
L"4-Port Hub"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1aa,
L"Webcam-101"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1ac,
L"HP Laptop Integrated Webcam [2 MP Fixed]"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1b4,
L"Lenovo Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1b9,
L"Asus Integrated Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1cf,
L"Lenovo Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1d6,
L"CNF9055 Toshiba Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1d8,
L"1.3M Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb1e4,
L"Toshiba Integrated Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb213,
L"Fujitsu Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb217,
L"Lenovo Integrated Camera (0.3MP)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb221,
L"integrated camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb230,
L"Integrated HP HD Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb249,
L"HP Integrated Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb257,
L"Lenovo Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb26b,
L"Sony Visual Communication Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb272,
L"Lenovo EasyCamera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2b0,
L"Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2b9,
L"Lenovo Integrated Camera UVC"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2da,
L"thinkpad t430s camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2db,
L"Thinkpad T430 camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2ea,
L"Integrated Camera [ThinkPad]"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb2f4,
L"HP Webcam-50"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb330,
L"Asus 720p CMOS webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb354,
L"UVC 1.00 device HD UVC WebCam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb394,
L"Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb3eb,
L"HP 720p HD Monitor Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb3f6,
L"HD WebCam (Acer)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb3fd,
L"HD WebCam (Asus N-series)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb40e,
L"HP Truevision HD camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb444,
L"Lenovo Integrated Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb49f,
L"Bluetooth (RTL8723BE)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb563,
L"Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb5ce,
L"Integrated Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb5cf,
L"Integrated IR Camera"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb5db,
L"HP Webcam"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb604,
L"Integrated Camera (1280x720@30)"
},
{
0x04f2,
L"Chicony Electronics Co., Ltd",
0xb681,
L"ThinkPad T490 Webcam"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x000a,
L"Touchscreen"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0103,
L"ActiveJet K-2024 Multimedia Keyboard"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x016f,
L"Touchscreen"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x01a4,
L"Wireless Keyboard"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0201,
L"Touchscreen"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0210,
L"Optical Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0212,
L"Laser Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0214,
L"Lynx M9 Optical Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0230,
L"3D Optical Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0232,
L"Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0234,
L"Optical Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0235,
L"Optical Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x02f4,
L"2.4G Cordless Mouse"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x0381,
L"Touchscreen"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x04a0,
L"Dream Cheeky Stress/Panic Button"
},
{
0x04f3,
L"Elan Microelectronics Corp.",
0x2234,
L"Touchscreen"
},
{
0x04f4,
L"Harting Elektronik, Inc.",
0x0,
L"0"
},
{
0x04f5,
L"Fujitsu-ICL Systems, Inc.",
0x0,
L"0"
},
{
0x04f6,
L"Norand Corp.",
0x0,
L"0"
},
{
0x04f7,
L"Newnex Technology Corp.",
0x0,
L"0"
},
{
0x04f8,
L"FuturePlus Systems",
0x0,
L"0"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0002,
L"HL-1050 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0005,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0006,
L"HL-1240 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0007,
L"HL-1250 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0008,
L"HL-1270 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0009,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000a,
L"P2500 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000b,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000c,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000d,
L"HL-1440 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000e,
L"HL-1450 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x000f,
L"HL-1470N series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0010,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0011,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0012,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0013,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0014,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0015,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0016,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0017,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0018,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x001a,
L"HL-1430 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x001c,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x001e,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0020,
L"HL-5130 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0021,
L"HL-5140 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0022,
L"HL-5150D series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0023,
L"HL-5170DN series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0024,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0025,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0027,
L"HL-2030 Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0028,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0029,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x002a,
L"HL-52x0 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x002b,
L"HL-5250DN Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x002c,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x002d,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0039,
L"HL-5340 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0041,
L"HL-2250DN Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0042,
L"HL-2270DW Laser Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x004d,
L"HL-6180DW series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0080,
L"HL-L6250DN series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0100,
L"MFC8600/9650 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0101,
L"MFC9600/9870 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0102,
L"MFC9750/1200 series"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0104,
L"MFC-8300J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0105,
L"MFC-9600J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0106,
L"MFC-7300C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0107,
L"MFC-7400C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0108,
L"MFC-9200C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0109,
L"MFC-830"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010a,
L"MFC-840"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010b,
L"MFC-860"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010c,
L"MFC-7400J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010d,
L"MFC-9200J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010e,
L"MFC-3100C Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x010f,
L"MFC-5100C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0110,
L"MFC-4800 Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0111,
L"MFC-6800"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0112,
L"DCP1000 Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0113,
L"MFC-8500"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0114,
L"MFC9700 Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0115,
L"MFC-9800 Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0116,
L"DCP1400 Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0119,
L"MFC-9660"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011a,
L"MFC-9860"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011b,
L"MFC-9880"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011c,
L"MFC-9760"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011d,
L"MFC-9070"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011e,
L"MFC-9180"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x011f,
L"MFC-9160"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0120,
L"MFC580 Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0121,
L"MFC-590"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0122,
L"MFC-5100J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0124,
L"MFC-4800J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0125,
L"MFC-6800J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0127,
L"MFC-9800J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0128,
L"MFC-8500J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0129,
L"Imagistics 2500 (MFC-8640D clone)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x012b,
L"MFC-9030"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x012e,
L"FAX4100e IntelliFax 4100e"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x012f,
L"FAX-4750e"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0130,
L"FAX-5750e"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0132,
L"MFC-5200C RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0135,
L"MFC-100 Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0136,
L"MFC-150CL Scanner"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x013c,
L"MFC-890 Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x013d,
L"MFC-5200J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x013e,
L"MFC-4420C RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x013f,
L"MFC-4820C RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0140,
L"DCP-8020"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0141,
L"DCP-8025D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0142,
L"MFC-8420"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0143,
L"MFC-8820D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0144,
L"DCP-4020C RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0146,
L"MFC-3220C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0147,
L"FAX-1820C Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0148,
L"MFC-3320CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0149,
L"FAX-1920CN Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014a,
L"MFC-3420C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014b,
L"MFC-3820CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014c,
L"DCP-3020C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014d,
L"FAX-1815C Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014e,
L"MFC-8820J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x014f,
L"DCP-8025J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0150,
L"MFC-8220 Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0151,
L"MFC-8210J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0153,
L"DCP-1000J"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0157,
L"MFC-3420J Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0158,
L"MFC-3820JN Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x015d,
L"MFC Composite Device"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x015e,
L"DCP-8045D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x015f,
L"MFC-8440"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0160,
L"MFC-8840D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0161,
L"MFC-210C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0162,
L"MFC-420CN Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0163,
L"MFC-410CN RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0165,
L"MFC-620CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0166,
L"MFC-610CLN RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0168,
L"MFC-620CLN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0169,
L"DCP-110C RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x016b,
L"DCP-310CN RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x016c,
L"FAX-2440C Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x016d,
L"MFC-5440CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x016e,
L"MFC-5840CN Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0170,
L"FAX-1840C Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0171,
L"FAX-1835C Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0172,
L"FAX-1940CN Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0173,
L"MFC-3240C Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0174,
L"MFC-3340CN RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x017b,
L"Imagistics sx2100"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0180,
L"MFC-7420"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0181,
L"MFC-7820N Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0182,
L"DCP-7010"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0183,
L"DCP-7020"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0184,
L"DCP-7025 Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0185,
L"MFC-7220 Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0186,
L"Composite Device"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0187,
L"FAX-2820 Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0188,
L"FAX-2920 Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x018a,
L"MFC-9420CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x018c,
L"DCP-115C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x018d,
L"DCP-116C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x018e,
L"DCP-117C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x018f,
L"DCP-118C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0190,
L"DCP-120C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0191,
L"DCP-315CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0192,
L"DCP-340CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0193,
L"MFC-215C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0194,
L"MFC-425CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0195,
L"MFC-820CW Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0196,
L"MFC-820CN Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0197,
L"MFC-640CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x019a,
L"MFC-840CLN Remote Setup Port"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a2,
L"MFC-8640D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a3,
L"Composite Device"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a4,
L"DCP-8065DN Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a5,
L"MFC-8460N Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a6,
L"MFC-8860DN Port(FaxModem)"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a7,
L"MFC-8870DW Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a8,
L"DCP-130C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01a9,
L"DCP-330C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01aa,
L"DCP-540CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ab,
L"MFC-240C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ae,
L"DCP-750CW RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01af,
L"MFC-440CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b0,
L"MFC-660CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b1,
L"MFC-665CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b2,
L"MFC-845CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b4,
L"MFC-460CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b5,
L"MFC-630CD"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b6,
L"MFC-850CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b7,
L"MFC-5460CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01b8,
L"MFC-5860CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ba,
L"MFC-3360C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01bd,
L"MFC-8660DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01be,
L"DCP-750CN RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01bf,
L"MFC-860CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c0,
L"DCP-128C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c1,
L"DCP-129C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c2,
L"DCP-131C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c3,
L"DCP-329C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c4,
L"DCP-331C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c5,
L"MFC-239C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01c9,
L"DCP-9040CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ca,
L"MFC-9440CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01cb,
L"DCP-9045CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01cc,
L"MFC-9840CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ce,
L"DCP-135C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01cf,
L"DCP-150C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d0,
L"DCP-350C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d1,
L"DCP-560CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d2,
L"DCP-770CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d3,
L"DCP-770CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d4,
L"MFC-230C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d5,
L"MFC-235C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d6,
L"MFC-260C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d7,
L"MFC-465CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d8,
L"MFC-680CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01d9,
L"MFC-685CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01da,
L"MFC-885CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01db,
L"MFC-480CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01dc,
L"MFC-650CD"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01dd,
L"MFC-870CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01de,
L"MFC-880CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01df,
L"DCP-155C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e0,
L"MFC-265C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e1,
L"DCP-153C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e2,
L"DCP-157C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e3,
L"DCP-353C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e4,
L"DCP-357C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e7,
L"MFC-7340"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01e9,
L"DCP-7040"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ea,
L"DCP-7030"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01eb,
L"MFC-7320"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01ec,
L"MFC-9640CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x01f4,
L"MFC-5890CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x020a,
L"MFC-8670DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x020c,
L"DCP-9042CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x020d,
L"MFC-9450CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0216,
L"MFC-8880DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0217,
L"MFC-8480DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0219,
L"MFC-8380DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021a,
L"MFC-8370DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021b,
L"DCP-8070D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021c,
L"MFC-9320CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021d,
L"MFC-9120CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021e,
L"DCP-9010CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x021f,
L"DCP-8085DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0220,
L"MFC-9010CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0222,
L"DCP-195C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0223,
L"DCP-365CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0224,
L"DCP-375CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0225,
L"DCP-395CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0227,
L"DCP-595CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0228,
L"MFC-255CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0229,
L"MFC-295CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022a,
L"MFC-495CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022b,
L"MFC-495CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022c,
L"MFC-795CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022d,
L"MFC-675CD"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022e,
L"MFC-695CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x022f,
L"MFC-735CD"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0230,
L"MFC-935CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0234,
L"DCP-373CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0235,
L"DCP-377CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0236,
L"DCP-390CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0239,
L"MFC-253CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x023a,
L"MFC-257CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x023e,
L"DCP-197C"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x023f,
L"MFC-8680DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0240,
L"MFC-J950DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0245,
L"MFC-9560CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0248,
L"DCP-7055 scanner/printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x024e,
L"MFC-7460DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0253,
L"DCP-J125"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0254,
L"DCP-J315W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0255,
L"DCP-J515W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0256,
L"DCP-J515N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0257,
L"DCP-J715W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0258,
L"DCP-J715N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0259,
L"MFC-J220"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025a,
L"MFC-J410"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025b,
L"MFC-J265W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025c,
L"MFC-J415W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025d,
L"MFC-J615W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025e,
L"MFC-J615N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x025f,
L"MFC-J700D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0260,
L"MFC-J800D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0261,
L"MFC-J850DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x026b,
L"MFC-J630W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x026d,
L"MFC-J805D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x026e,
L"MFC-J855DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x026f,
L"MFC-J270W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0270,
L"MFC-7360N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0273,
L"DCP-7057 scanner/printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0276,
L"MFC-5895CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0278,
L"MFC-J410W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0279,
L"DCP-J525W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027a,
L"DCP-J525N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027b,
L"DCP-J725DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027c,
L"DCP-J725N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027d,
L"DCP-J925DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027e,
L"MFC-J955DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x027f,
L"MFC-J280W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0280,
L"MFC-J435W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0281,
L"MFC-J430W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0282,
L"MFC-J625DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0283,
L"MFC-J825DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0284,
L"MFC-J825N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0285,
L"MFC-J705D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0287,
L"MFC-J860DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0288,
L"MFC-J5910DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0289,
L"MFC-J5910CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x028a,
L"DCP-J925N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x028d,
L"MFC-J835DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x028f,
L"MFC-J425W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0290,
L"MFC-J432W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0291,
L"DCP-8110DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0292,
L"DCP-8150DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0293,
L"DCP-8155DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0294,
L"DCP-8250DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0295,
L"MFC-8510DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0296,
L"MFC-8520DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0298,
L"MFC-8910DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0299,
L"MFC-8950DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x029a,
L"MFC-8690DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x029c,
L"MFC-8515DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x029e,
L"MFC-9125CN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x029f,
L"MFC-9325CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02a0,
L"DCP-J140W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02a5,
L"MFC-7240"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02a6,
L"FAX-2940"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02a7,
L"FAX-2950"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02a8,
L"MFC-7290"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ab,
L"FAX-2990"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ac,
L"DCP-8110D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ad,
L"MFC-9130CW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ae,
L"MFC-9140CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02af,
L"MFC-9330CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b0,
L"MFC-9340CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b1,
L"DCP-9020CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b2,
L"MFC-J810DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b3,
L"MFC-J4510DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b4,
L"MFC-J4710DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b5,
L"DCP-8112DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b6,
L"DCP-8152DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b7,
L"DCP-8157DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02b8,
L"MFC-8512DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ba,
L"MFC-8912DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02bb,
L"MFC-8952DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02bc,
L"DCP-J540N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02bd,
L"DCP-J740N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02be,
L"MFC-J710D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02bf,
L"MFC-J840N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c0,
L"DCP-J940N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c1,
L"MFC-J960DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c2,
L"DCP-J4110DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c3,
L"MFC-J4310DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c4,
L"MFC-J4410DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c5,
L"MFC-J4610DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c6,
L"DCP-J4210N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c7,
L"MFC-J4510N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c8,
L"MFC-J4910CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02c9,
L"MFC-J4810DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ca,
L"MFC-8712DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02cb,
L"MFC-8710DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02cc,
L"MFC-J2310"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02cd,
L"MFC-J2510"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ce,
L"DCP-7055W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02cf,
L"DCP-7057W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02d0,
L"DCP-1510"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02d1,
L"MFC-1810"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02d3,
L"DCP-9020CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02d4,
L"MFC-8810DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02dd,
L"DCP-J4215N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02de,
L"DCP-J132W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02df,
L"DCP-J152W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e0,
L"DCP-J152N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e1,
L"DCP-J172W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e2,
L"DCP-J552DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e3,
L"DCP-J552N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e4,
L"DCP-J752DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e5,
L"DCP-J752N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e6,
L"DCP-J952N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e7,
L"MFC-J245"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e8,
L"MFC-J470DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02e9,
L"MFC-J475DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ea,
L"MFC-J285DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02eb,
L"MFC-J650DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ec,
L"MFC-J870DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ed,
L"MFC-J870N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ee,
L"MFC-J720D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ef,
L"MFC-J820DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f0,
L"MFC-J980DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f1,
L"MFC-J890DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f2,
L"MFC-J6520DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f3,
L"MFC-J6570CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f4,
L"MFC-J6720DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f5,
L"MFC-J6920DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f6,
L"MFC-J6970CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f7,
L"MFC-J6975CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f8,
L"MFC-J6770CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02f9,
L"DCP-J132N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02fa,
L"MFC-J450DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02fb,
L"MFC-J875DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02fc,
L"DCP-J100"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02fd,
L"DCP-J105"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02fe,
L"MFC-J200"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x02ff,
L"MFC-J3520"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0300,
L"MFC-J3720"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x030f,
L"DCP-L8400CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0310,
L"DCP-L8450CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0311,
L"MFC-L8600CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0312,
L"MFC-L8650CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0313,
L"MFC-L8850CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0314,
L"MFC-L9550CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0318,
L"MFC-7365DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0320,
L"MFC-L2740DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0321,
L"DCP-L2500D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0322,
L"DCP-L2520DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0324,
L"DCP-L2520D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0326,
L"DCP-L2540DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0328,
L"DCP-L2540DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0329,
L"DCP-L2560DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0330,
L"HL-L2380DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0331,
L"MFC-L2700DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0335,
L"FAX-L2700DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0337,
L"MFC-L2720DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0338,
L"MFC-L2720DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0339,
L"DCP-J4120DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x033a,
L"MFC-J4320DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x033c,
L"MFC-J2320"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x033d,
L"MFC-J4420DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0340,
L"MFC-J4620DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0341,
L"MFC-J2720"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0342,
L"MFC-J4625DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0343,
L"MFC-J5320DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0346,
L"MFC-J5620DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0347,
L"MFC-J5720DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0349,
L"DCP-J4220N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x034b,
L"MFC-J4720N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x034e,
L"MFC-J5720CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x034f,
L"MFC-J5820DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0350,
L"MFC-J5620CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0351,
L"DCP-J137N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0353,
L"DCP-J557N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0354,
L"DCP-J757N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0355,
L"DCP-J957N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0356,
L"MFC-J877N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0357,
L"MFC-J727D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0358,
L"MFC-J987DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0359,
L"MFC-J827DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x035a,
L"MFC-J897DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x035b,
L"DCP-1610W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x035c,
L"DCP-1610NW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x035d,
L"MFC-1910W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x035e,
L"MFC-1910NW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0360,
L"DCP-1618W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0361,
L"MFC-1919NW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0364,
L"MFC-J5625DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0365,
L"MFC-J4520DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0366,
L"MFC-J5520DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0367,
L"DCP-7080D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0368,
L"DCP-7080"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0369,
L"DCP-7180DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036a,
L"DCP-7189DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036b,
L"MFC-7380"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036c,
L"MFC-7480D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036d,
L"MFC-7880DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036e,
L"MFC-7889DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x036f,
L"DCP-9022CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0370,
L"MFC-9142CDN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0371,
L"MFC-9332CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0372,
L"MFC-9342CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0373,
L"MFC-L2700D"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0376,
L"DCP-1600"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0377,
L"MFC-1900"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0378,
L"DCP-1608"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0379,
L"DCP-1619"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037a,
L"MFC-1906"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037b,
L"MFC-1908"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037c,
L"ADS-2000e"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037d,
L"ADS-2100e"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037e,
L"ADS-2500We"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x037f,
L"ADS-2600We"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0380,
L"DCP-J562DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0381,
L"DCP-J562N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0383,
L"DCP-J962N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0384,
L"MFC-J480DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0385,
L"MFC-J485DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0386,
L"MFC-J460DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0388,
L"MFC-J680DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0389,
L"MFC-J880DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038a,
L"MFC-J885DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038b,
L"MFC-J880N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038c,
L"MFC-J730DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038d,
L"MFC-J990DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038e,
L"MFC-J830DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x038f,
L"MFC-J900DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0390,
L"MFC-J5920DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0392,
L"MFC-L2705DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0393,
L"DCP-T300"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0394,
L"DCP-T500W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0395,
L"DCP-T700W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0396,
L"MFC-T800W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x0397,
L"DCP-J963N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03b3,
L"MFC-J6925DW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03b4,
L"MFC-J6573CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03b5,
L"MFC-J6973CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03b6,
L"MFC-J6990CDW"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03bb,
L"MFC-L2680W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03bc,
L"MFC-L2700DN"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03bd,
L"DCP-J762N"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x03fd,
L"ADS-2700W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x1000,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x1002,
L"Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2002,
L"PTUSB Printing"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2004,
L"PT-2300/2310 p-Touch Laber Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2007,
L"PT-2420PC P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2015,
L"QL-500 P-touch label printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2016,
L"QL-550 P-touch label printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x201a,
L"PT-18R P-touch label printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x201b,
L"QL-650TD P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2027,
L"QL-560 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2028,
L"QL-570 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x202b,
L"PT-7600 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x202c,
L"PT-1230PC P-touch Label Printer E mode"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2030,
L"PT-1230PC P-touch Label Printer EL mode"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2041,
L"PT-2730 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2042,
L"QL-700 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2061,
L"PT-P700 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2064,
L"PT-P700 P-touch Label Printer RemovableDisk"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x209b,
L"QL-800 P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x209c,
L"QL-810W P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x209d,
L"QL-820NWB P-touch Label Printer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2100,
L"Card Reader Writer"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x2102,
L"Sewing machine"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a0,
L"ADS-2000"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a1,
L"ADS-2100"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a4,
L"ADS-2500W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a5,
L"ADS-2600W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a6,
L"ADS-1000W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a7,
L"ADS-1100W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a8,
L"ADS-1500W"
},
{
0x04f9,
L"Brother Industries, Ltd",
0x60a9,
L"ADS-1600W"
},
{
0x04fa,
L"Dallas Semiconductor",
0x2490,
L"DS1490F 2-in-1 Fob, 1-Wire adapter"
},
{
0x04fa,
L"Dallas Semiconductor",
0x4201,
L"DS4201 Audio DAC"
},
{
0x04fb,
L"Biostar Microtech International Corp.",
0x0,
L"0"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0003,
L"CM1092 / Wintech CM-5098 Optical Mouse"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0005,
L"USB OpticalWheel Mouse"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0013,
L"ViewMate Desktop Mouse CC2201"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0015,
L"ViewMate Desktop Mouse CC2201"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x00d3,
L"00052486 / Laser Mouse M1052 [hama]"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0171,
L"SPCA1527A/SPCA1528 SD card camera (Mass Storage mode)"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0201,
L"SPCP825 RS232C Adapter"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0232,
L"Fingerprint"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0538,
L"Wireless Optical Mouse 2.4G [Bright]"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0561,
L"Flexcam 100"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x05d8,
L"Wireless keyboard/mouse"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x05da,
L"SPEEDLINK SNAPPY Wireless Mouse Nano"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0c15,
L"SPIF215A SATA bridge"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x0c25,
L"SATALink SPIF225A"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x1528,
L"SPCA1527A/SPCA1528 SD card camera (webcam mode)"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x1533,
L"Mass Storage"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x2080,
L"ASUS Webcam"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x500c,
L"CA500C Digital Camera"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x504a,
L"Aiptek Mini PenCam 1.3"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x504b,
L"Aiptek Mega PockerCam 1.3/Maxell MaxPocket LE 1.3"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x5330,
L"Digitrex 2110"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x5331,
L"Vivitar Vivicam 10"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x5360,
L"Sunplus Generic Digital Camera"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x5563,
L"Digital Media Player MP3/WMA [The Sharper Image]"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x5720,
L"Card Reader Driver"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x6333,
L"Siri A9 UVC chipset"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x7333,
L"Finet Technology Palmpix DC-85"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0x757a,
L"Aiptek, MP315 MP3 Player"
},
{
0x04fc,
L"Sunplus Technology Co., Ltd",
0xffff,
L"PureDigital Ritz Disposable"
},
{
0x04fd,
L"Soliton Systems, K.K.",
0x0003,
L"Smart Card Reader II"
},
{
0x04fe,
L"PFU, Ltd",
0x0006,
L"Happy Hacking Keyboard Lite2"
},
{
0x04ff,
L"E-CMOS Corp.",
0x0,
L"0"
},
{
0x0500,
L"Siam United Hi-Tech",
0x0001,
L"DART Keyboard Mouse"
},
{
0x0500,
L"Siam United Hi-Tech",
0x0002,
L"DART-2 Keyboard"
},
{
0x0501,
L"Fujikura DDK, Ltd",
0x0,
L"0"
},
{
0x0502,
L"Acer, Inc.",
0x0001,
L"Handheld"
},
{
0x0502,
L"Acer, Inc.",
0x0736,
L"Handheld"
},
{
0x0502,
L"Acer, Inc.",
0x15b1,
L"PDA n311"
},
{
0x0502,
L"Acer, Inc.",
0x1631,
L"c10 Series"
},
{
0x0502,
L"Acer, Inc.",
0x1632,
L"c20 Series"
},
{
0x0502,
L"Acer, Inc.",
0x16e1,
L"n10 Handheld Sync"
},
{
0x0502,
L"Acer, Inc.",
0x16e2,
L"n20 Pocket PC Sync"
},
{
0x0502,
L"Acer, Inc.",
0x16e3,
L"n30 Handheld Sync"
},
{
0x0502,
L"Acer, Inc.",
0x2008,
L"Liquid Gallant Duo E350 (preloader)"
},
{
0x0502,
L"Acer, Inc.",
0x3202,
L"Liquid"
},
{
0x0502,
L"Acer, Inc.",
0x3203,
L"Liquid (Debug mode)"
},
{
0x0502,
L"Acer, Inc.",
0x3230,
L"BeTouch E120"
},
{
0x0502,
L"Acer, Inc.",
0x3317,
L"Liquid"
},
{
0x0502,
L"Acer, Inc.",
0x3325,
L"Iconia tablet A500"
},
{
0x0502,
L"Acer, Inc.",
0x3341,
L"Iconia tablet A500"
},
{
0x0502,
L"Acer, Inc.",
0x33c3,
L"Liquid Gallant Duo E350"
},
{
0x0502,
L"Acer, Inc.",
0x33c4,
L"Liquid Gallant Duo E350 (debug mode)"
},
{
0x0502,
L"Acer, Inc.",
0x33c7,
L"Liquid Gallant Duo E350 (USB tethering)"
},
{
0x0502,
L"Acer, Inc.",
0x33c8,
L"Liquid Gallant Duo E350 (debug mode, USB tethering)"
},
{
0x0502,
L"Acer, Inc.",
0xd001,
L"Divio NW801/DVC-V6+ Digital Camera"
},
{
0x0503,
L"Hitachi America, Ltd",
0x0,
L"0"
},
{
0x0504,
L"Hayes Microcomputer Products",
0x0,
L"0"
},
{
0x0506,
L"3Com Corp.",
0x009d,
L"HomeConnect Camera"
},
{
0x0506,
L"3Com Corp.",
0x00a0,
L"3CREB96 Bluetooth Adapter"
},
{
0x0506,
L"3Com Corp.",
0x00a1,
L"Bluetooth Device"
},
{
0x0506,
L"3Com Corp.",
0x00a2,
L"Bluetooth Device"
},
{
0x0506,
L"3Com Corp.",
0x00df,
L"3Com Home Connect lite"
},
{
0x0506,
L"3Com Corp.",
0x0100,
L"HomeConnect ADSL Modem Driver"
},
{
0x0506,
L"3Com Corp.",
0x03e8,
L"3C19250 Ethernet [klsi]"
},
{
0x0506,
L"3Com Corp.",
0x0a01,
L"3CRSHEW696 Wireless Adapter"
},
{
0x0506,
L"3Com Corp.",
0x0a11,
L"3CRWE254G72 802.11g Adapter"
},
{
0x0506,
L"3Com Corp.",
0x11f8,
L"HomeConnect 3C460"
},
{
0x0506,
L"3Com Corp.",
0x2922,
L"HomeConnect Cable Modem External with"
},
{
0x0506,
L"3Com Corp.",
0x3021,
L"U.S.Robotics 56000 Voice FaxModem Pro"
},
{
0x0506,
L"3Com Corp.",
0x4601,
L"3C460B 10/100 Ethernet Adapter"
},
{
0x0506,
L"3Com Corp.",
0xf002,
L"3CP4218 ADSL Modem (pre-init)"
},
{
0x0506,
L"3Com Corp.",
0xf003,
L"3CP4218 ADSL Modem"
},
{
0x0506,
L"3Com Corp.",
0xf100,
L"3CP4218 ADSL Modem (pre-init)"
},
{
0x0507,
L"Hosiden Corp.",
0x0011,
L"Konami ParaParaParadise Controller"
},
{
0x0508,
L"Clarion Co., Ltd",
0x0,
L"0"
},
{
0x0509,
L"Aztech Systems, Ltd",
0x0801,
L"ADSL Modem"
},
{
0x0509,
L"Aztech Systems, Ltd",
0x0802,
L"ADSL Modem (RFC1483)"
},
{
0x0509,
L"Aztech Systems, Ltd",
0x0806,
L"DSL Modem"
},
{
0x0509,
L"Aztech Systems, Ltd",
0x080f,
L"Binatone ADSL500 Modem Network Interface"
},
{
0x0509,
L"Aztech Systems, Ltd",
0x0812,
L"Pirelli ADSL Modem Network Interface"
},
{
0x050a,
L"Cinch Connectors",
0x0,
L"0"
},
{
0x050b,
L"Cable System International",
0x0,
L"0"
},
{
0x050c,
L"InnoMedia, Inc.",
0x0,
L"0"
},
{
0x050d,
L"Belkin Components",
0x0004,
L"Direct Connect"
},
{
0x050d,
L"Belkin Components",
0x0012,
L"F8T012 Bluetooth Adapter"
},
{
0x050d,
L"Belkin Components",
0x0013,
L"F8T013 Bluetooth Adapter"
},
{
0x050d,
L"Belkin Components",
0x0017,
L"B8T017 Bluetooth+EDR 2.1 / F4U017 USB 2.0 7-port Hub"
},
{
0x050d,
L"Belkin Components",
0x003a,
L"Universal Media Reader"
},
{
0x050d,
L"Belkin Components",
0x0050,
L"F5D6050 802.11b Wireless Adapter v2000 [Atmel at76c503a]"
},
{
0x050d,
L"Belkin Components",
0x0081,
L"F8T001v2 Bluetooth"
},
{
0x050d,
L"Belkin Components",
0x0083,
L"Bluetooth Device"
},
{
0x050d,
L"Belkin Components",
0x0084,
L"F8T003v2 Bluetooth"
},
{
0x050d,
L"Belkin Components",
0x0102,
L"Flip KVM"
},
{
0x050d,
L"Belkin Components",
0x0103,
L"F5U103 Serial Adapter [etek]"
},
{
0x050d,
L"Belkin Components",
0x0106,
L"VideoBus II Adapter, Video"
},
{
0x050d,
L"Belkin Components",
0x0108,
L"F1DE108B KVM"
},
{
0x050d,
L"Belkin Components",
0x0109,
L"F5U109/F5U409 PDA Adapter"
},
{
0x050d,
L"Belkin Components",
0x0115,
L"SCSI Adapter"
},
{
0x050d,
L"Belkin Components",
0x0119,
L"F5U120-PC Dual PS/2 Ports / F5U118-UNV ADB Adapter"
},
{
0x050d,
L"Belkin Components",
0x0121,
L"F5D5050 100Mbps Ethernet"
},
{
0x050d,
L"Belkin Components",
0x0122,
L"Ethernet Adapter"
},
{
0x050d,
L"Belkin Components",
0x0131,
L"Bluetooth Device with trace filter"
},
{
0x050d,
L"Belkin Components",
0x016a,
L"Bluetooth Mini Dongle"
},
{
0x050d,
L"Belkin Components",
0x0200,
L"Nostromo SpeedPad n52te Gaming Keyboard"
},
{
0x050d,
L"Belkin Components",
0x0201,
L"Peripheral Switch"
},
{
0x050d,
L"Belkin Components",
0x0208,
L"USBView II Video Adapter [nt1004]"
},
{
0x050d,
L"Belkin Components",
0x0210,
L"F5U228 Hi-Speed USB 2.0 DVD Creator"
},
{
0x050d,
L"Belkin Components",
0x0211,
L"F5U211 USB 2.0 15-in-1 Media Reader & Writer"
},
{
0x050d,
L"Belkin Components",
0x0224,
L"F5U224 USB 2.0 4-Port Hub"
},
{
0x050d,
L"Belkin Components",
0x0234,
L"F5U234 USB 2.0 4-Port Hub"
},
{
0x050d,
L"Belkin Components",
0x0237,
L"F5U237 USB 2.0 7-Port Hub"
},
{
0x050d,
L"Belkin Components",
0x0240,
L"F5U240 USB 2.0 CF Card Reader"
},
{
0x050d,
L"Belkin Components",
0x0249,
L"USB 2 Flash Media Device"
},
{
0x050d,
L"Belkin Components",
0x0257,
L"F5U257 Serial"
},
{
0x050d,
L"Belkin Components",
0x0304,
L"FSU304 USB 2.0 - 4 Ports Hub"
},
{
0x050d,
L"Belkin Components",
0x0307,
L"USB 2.0 - 7 ports Hub [FSU307]"
},
{
0x050d,
L"Belkin Components",
0x038c,
L"F2CU038 HDMI Adapter"
},
{
0x050d,
L"Belkin Components",
0x0409,
L"F5U409 Serial"
},
{
0x050d,
L"Belkin Components",
0x0416,
L"Staples 12416 7 port desktop hub"
},
{
0x050d,
L"Belkin Components",
0x0551,
L"F6C550-AVR UPS"
},
{
0x050d,
L"Belkin Components",
0x065a,
L"F8T065BF Mini Bluetooth 4.0 Adapter"
},
{
0x050d,
L"Belkin Components",
0x0706,
L"2-N-1 7-Port Hub (Lower half)"
},
{
0x050d,
L"Belkin Components",
0x0802,
L"Nostromo n40 Gamepad"
},
{
0x050d,
L"Belkin Components",
0x0803,
L"Nostromo 1745 GamePad"
},
{
0x050d,
L"Belkin Components",
0x0805,
L"Nostromo N50 GamePad"
},
{
0x050d,
L"Belkin Components",
0x0815,
L"Nostromo n52 HID SpeedPad Mouse Wheel"
},
{
0x050d,
L"Belkin Components",
0x0826,
L"ErgoFit Wireless Optical Mouse (HID)"
},
{
0x050d,
L"Belkin Components",
0x0980,
L"HID UPS Battery"
},
{
0x050d,
L"Belkin Components",
0x1004,
L"F9L1004 802.11n Surf N300 XR Wireless Adapter [Realtek RTL8192CU]"
},
{
0x050d,
L"Belkin Components",
0x1102,
L"F7D1102 N150/Surf Micro Wireless Adapter v1000 [Realtek RTL8188CUS]"
},
{
0x050d,
L"Belkin Components",
0x1103,
L"F9L1103 N750 DB 802.11abgn 2x3:3 [Ralink RT3573]"
},
{
0x050d,
L"Belkin Components",
0x1106,
L"F9L1106v1 802.11a/b/g/n/ac Wireless Adapter [Broadcom BCM43526]"
},
{
0x050d,
L"Belkin Components",
0x1109,
L"F9L1109v1 802.11a/b/g/n/ac Wireless Adapter [Realtek RTL8812AU]"
},
{
0x050d,
L"Belkin Components",
0x110a,
L"F9L1101v2 802.11abgn Wireless Adapter [Realtek RTL8192DU]"
},
{
0x050d,
L"Belkin Components",
0x11f2,
L"ISY Wireless Micro Adapter IWL 2000 [RTL8188CUS]"
},
{
0x050d,
L"Belkin Components",
0x1202,
L"F5U120-PC Parallel Printer Port"
},
{
0x050d,
L"Belkin Components",
0x1203,
L"F5U120-PC Serial Port"
},
{
0x050d,
L"Belkin Components",
0x2103,
L"F7D2102 802.11n N300 Micro Wireless Adapter v3000 [Realtek RTL8192CU]"
},
{
0x050d,
L"Belkin Components",
0x21f1,
L"N300 WLAN N Adapter [ISY]"
},
{
0x050d,
L"Belkin Components",
0x21f2,
L"RTL8192CU 802.11n WLAN Adapter [ISY IWL 4000]"
},
{
0x050d,
L"Belkin Components",
0x258a,
L"F5U258 Host to Host cable"
},
{
0x050d,
L"Belkin Components",
0x3101,
L"F1DF102U/F1DG102U Flip Hub"
},
{
0x050d,
L"Belkin Components",
0x3201,
L"F1DF102U/F1DG102U Flip KVM"
},
{
0x050d,
L"Belkin Components",
0x4050,
L"ZD1211B"
},
{
0x050d,
L"Belkin Components",
0x5055,
L"F5D5055 Gigabit Network Adapter [AX88xxx]"
},
{
0x050d,
L"Belkin Components",
0x6050,
L"F6D6050 802.11abgn Wireless Adapter [Broadcom BCM4323]"
},
{
0x050d,
L"Belkin Components",
0x6051,
L"F5D6051 802.11b Wireless Network Adapter [ZyDAS ZD1201]"
},
{
0x050d,
L"Belkin Components",
0x615a,
L"F7D4101 / F9L1101v1 802.11abgn Wireless Adapter [Broadcom BCM4323]"
},
{
0x050d,
L"Belkin Components",
0x7050,
L"F5D7050 Wireless G Adapter v1000/v2000 [Intersil ISL3887]"
},
{
0x050d,
L"Belkin Components",
0x7051,
L"F5D7051 802.11g Adapter v1000 [Broadcom 4320 USB]"
},
{
0x050d,
L"Belkin Components",
0x705a,
L"F5D7050 Wireless G Adapter v3000 [Ralink RT2571W]"
},
{
0x050d,
L"Belkin Components",
0x705b,
L"Wireless G Adapter"
},
{
0x050d,
L"Belkin Components",
0x705c,
L"F5D7050 Wireless G Adapter v4000 [Zydas ZD1211B]"
},
{
0x050d,
L"Belkin Components",
0x705e,
L"F5D7050 Wireless G Adapter v5000 [Realtek RTL8187B]"
},
{
0x050d,
L"Belkin Components",
0x706a,
L"2-N-1 7-Port Hub (Upper half)"
},
{
0x050d,
L"Belkin Components",
0x8053,
L"F5D8053 N Wireless USB Adapter v1000/v4000 [Ralink RT2870]"
},
{
0x050d,
L"Belkin Components",
0x805c,
L"F5D8053 N Wireless Adapter v3000 [Ralink RT2870]"
},
{
0x050d,
L"Belkin Components",
0x805e,
L"F5D8053 N Wireless USB Adapter v5000 [Realtek RTL8192U]"
},
{
0x050d,
L"Belkin Components",
0x815c,
L"F5D8053 N Wireless USB Adapter v3000 [Ralink RT2870]"
},
{
0x050d,
L"Belkin Components",
0x815f,
L"F5D8053 N Wireless USB Adapter v6000 [Realtek RTL8192SU]"
},
{
0x050d,
L"Belkin Components",
0x825a,
L"F5D8055 N+ Wireless Adapter v1000 [Ralink RT2870]"
},
{
0x050d,
L"Belkin Components",
0x825b,
L"F5D8055 N+ Wireless Adapter v2000 [Ralink RT3072]"
},
{
0x050d,
L"Belkin Components",
0x845a,
L"F7D2101 802.11n Surf & Share Wireless Adapter v1000 [Realtek RTL8192SU]"
},
{
0x050d,
L"Belkin Components",
0x905b,
L"F5D9050 Wireless G+ MIMO Network Adapter v3000 [Ralink RT2573]"
},
{
0x050d,
L"Belkin Components",
0x905c,
L"F5D9050 Wireless G+ MIMO Network Adapter v4000 [Ralink RT2573]"
},
{
0x050d,
L"Belkin Components",
0x935a,
L"F6D4050 N150 Enhanced Wireless Network Adapter v1000 [Ralink RT3070]"
},
{
0x050d,
L"Belkin Components",
0x935b,
L"F6D4050 N150 Enhanced Wireless Network Adapter v2000 [Ralink RT3070]"
},
{
0x050d,
L"Belkin Components",
0x945a,
L"F7D1101 v1 Basic Wireless Adapter [Realtek RTL8188SU]"
},
{
0x050d,
L"Belkin Components",
0x945b,
L"F7D1101 v2 Basic Wireless Adapter [Ralink RT3370]"
},
{
0x050d,
L"Belkin Components",
0xd321,
L"Dynex DX-NUSB 802.11bgn Wireless Adapter [Broadcom BCM43231]"
},
{
0x050e,
L"Neon Technology, Inc.",
0x0,
L"0"
},
{
0x050f,
L"KC Technology, Inc.",
0x0001,
L"Hub"
},
{
0x050f,
L"KC Technology, Inc.",
0x0003,
L"KC82C160S Hub"
},
{
0x050f,
L"KC Technology, Inc.",
0x0180,
L"KC-180 IrDA Dongle"
},
{
0x050f,
L"KC Technology, Inc.",
0x0190,
L"KC2190 USB Host-to-Host cable"
},
{
0x0510,
L"Sejin Electron, Inc.",
0x0001,
L"Keyboard"
},
{
0x0510,
L"Sejin Electron, Inc.",
0x1000,
L"Keyboard with PS/2 Mouse Port"
},
{
0x0510,
L"Sejin Electron, Inc.",
0xe001,
L"Mouse"
},
{
0x0511,
L"N'Able (DataBook) Technologies, Inc.",
0x002b,
L"AOC DVB"
},
{
0x0512,
L"Hualon Microelectronics Corp.",
0x0,
L"0"
},
{
0x0513,
L"digital-X, Inc.",
0x0,
L"0"
},
{
0x0514,
L"FCI Electronics",
0x0,
L"0"
},
{
0x0515,
L"ACTC",
0x0,
L"0"
},
{
0x0516,
L"Longwell Electronics",
0x0,
L"0"
},
{
0x0517,
L"Butterfly Communications",
0x0,
L"0"
},
{
0x0518,
L"EzKEY Corp.",
0x0001,
L"USB to PS2 Adaptor v1.09"
},
{
0x0518,
L"EzKEY Corp.",
0x0002,
L"EZ-9900C Keyboard"
},
{
0x0519,
L"Star Micronics Co., Ltd",
0x0003,
L"TSP100ECO/TSP100II"
},
{
0x0519,
L"Star Micronics Co., Ltd",
0xc002,
L"Xlive Bluetooth XBM-100S MP3 Player"
},
{
0x051a,
L"WYSE Technology",
0xa005,
L"Smart Display Version 9973"
},
{
0x051b,
L"Silicon Graphics",
0x0,
L"0"
},
{
0x051c,
L"Shuttle, Inc.",
0x0005,
L"VFD Module"
},
{
0x051c,
L"Shuttle, Inc.",
0xc001,
L"eHome Infrared Receiver"
},
{
0x051c,
L"Shuttle, Inc.",
0xc002,
L"eHome Infrared Receiver"
},
{
0x051d,
L"American Power Conversion",
0x0001,
L"UPS"
},
{
0x051d,
L"American Power Conversion",
0x0002,
L"Uninterruptible Power Supply"
},
{
0x051d,
L"American Power Conversion",
0x0003,
L"UPS"
},
{
0x051e,
L"Scientific Atlanta, Inc.",
0x0,
L"0"
},
{
0x051f,
L"IO Systems (Elite Electronics), Inc.",
0x0,
L"0"
},
{
0x0520,
L"Taiwan Semiconductor Manufacturing Co.",
0x0,
L"0"
},
{
0x0521,
L"Airborn Connectors",
0x0,
L"0"
},
{
0x0522,
L"Advanced Connectek, Inc.",
0x0,
L"0"
},
{
0x0523,
L"ATEN GmbH",
0x0,
L"0"
},
{
0x0524,
L"Sola Electronics",
0x0,
L"0"
},
{
0x0525,
L"Netchip Technology, Inc.",
0x100d,
L"RFMD Bluetooth Device"
},
{
0x0525,
L"Netchip Technology, Inc.",
0x1080,
L"NET1080 USB-USB Bridge"
},
{
0x0525,
L"Netchip Technology, Inc.",
0x1200,
L"SSDC Adapter II"
},
{
0x0525,
L"Netchip Technology, Inc.",
0x1265,
L"File-backed Storage Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0x3424,
L"Lumidigm Venus fingerprint sensor"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa0f0,
L"Cambridge Electronic Devices Power1401 mk 2"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa140,
L"USB Clik! 40"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa141,
L"(OME) PocketZip 40 MP3 Player Driver"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa220,
L"GVC Bluetooth Wireless Adapter"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a0,
L"Linux-USB Gadget Zero"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a1,
L"Linux-USB Ethernet Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a2,
L"Linux-USB Ethernet/RNDIS Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a3,
L"Linux-USB user-mode isochronous source/sink"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a4,
L"Linux-USB user-mode bulk source/sink"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a5,
L"Pocketbook Pro 903 / Mobius 2 Action Cam"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a6,
L"Linux-USB Serial Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a7,
L"Linux-USB Serial Gadget (CDC ACM mode)"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a8,
L"Linux-USB Printer Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4a9,
L"Linux-USB OBEX Gadget"
},
{
0x0525,
L"Netchip Technology, Inc.",
0xa4aa,
L"Linux-USB CDC Composite Gadge (Ethernet and ACM)"
},
{
0x0526,
L"Temic MHS S.A.",
0x0,
L"0"
},
{
0x0527,
L"ALTRA",
0x0,
L"0"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7561,
L"TV Wonder"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7562,
L"TV Wonder, Edition (FN5)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7563,
L"TV Wonder, Edition (FI)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7564,
L"TV Wonder, Edition (FQ)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7565,
L"TV Wonder, Edition (NTSC+)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7566,
L"TV Wonder, Edition (FN5)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7567,
L"TV Wonder, Edition (FI)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7568,
L"TV Wonder, Edition (FQ)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x7569,
L"Live! Pro (A)"
},
{
0x0528,
L"ATI Technologies, Inc.",
0x756a,
L"Live! Pro Audio (O)"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0001,
L"HASP copy protection dongle"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x030b,
L"eToken R1 v3.1.3.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0313,
L"eToken R1 v3.2.3.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x031b,
L"eToken R1 v3.3.3.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0323,
L"eToken R1 v3.4.3.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0412,
L"eToken R2 v2.2.4.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x041a,
L"eToken R2 v2.2.4.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0422,
L"eToken R2 v2.4.4.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x042a,
L"eToken R2 v2.5.4.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x050c,
L"eToken Pro v4.1.5.x"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0514,
L"eToken Pro v4.2.5.4"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0600,
L"eToken Pro 64k (4.2)"
},
{
0x0529,
L"Aladdin Knowledge Systems",
0x0620,
L"Token JC"
},
{
0x052a,
L"Crescent Heart Software",
0x0,
L"0"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x0102,
L"Ca508A HP1020 Camera v.1.3.1.6"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x0801,
L"Yakumo MegaImage 37"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x1512,
L"Yakumo MegaImage IV"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x1513,
L"Aosta CX100 Webcam"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x1514,
L"Aosta CX100 Webcam Storage"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x1905,
L"Yakumo MegaImage 47"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x1911,
L"Yakumo MegaImage 47 SL"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x2202,
L"WDM Still Image Capture"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x2203,
L"Sound Vision Stream Driver"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0x3a06,
L"DigiLife DDV-5120A"
},
{
0x052b,
L"Tekom Technologies, Inc.",
0xd001,
L"P35U Camera Capture"
},
{
0x052c,
L"Canon Information Systems, Inc.",
0x0,
L"0"
},
{
0x052d,
L"Avid Electronics Corp.",
0x0,
L"0"
},
{
0x052e,
L"Standard Microsystems Corp.",
0x0,
L"0"
},
{
0x052f,
L"Unicore Software, Inc.",
0x0,
L"0"
},
{
0x0530,
L"American Microsystems, Inc.",
0x0,
L"0"
},
{
0x0531,
L"Wacom Technology Corp.",
0x0,
L"0"
},
{
0x0532,
L"Systech Corp.",
0x0,
L"0"
},
{
0x0533,
L"Alcatel Mobile Phones",
0x0,
L"0"
},
{
0x0534,
L"Motorola, Inc.",
0x0,
L"0"
},
{
0x0535,
L"LIH TZU Electric Co., Ltd",
0x0,
L"0"
},
{
0x0536,
L"Hand Held Products (Welch Allyn, Inc.)",
0x01a0,
L"PDT"
},
{
0x0537,
L"Inventec Corp.",
0x0,
L"0"
},
{
0x0538,
L"Caldera International, Inc. (SCO)",
0x0,
L"0"
},
{
0x0539,
L"Shyh Shiun Terminals Co., Ltd",
0x0,
L"0"
},
{
0x053a,
L"PrehKeyTec GmbH",
0x0b00,
L"Hub"
},
{
0x053a,
L"PrehKeyTec GmbH",
0x0b01,
L"Preh MCI 3100"
},
{
0x053b,
L"Global Village Communication",
0x0,
L"0"
},
{
0x053c,
L"Institut of Microelectronic & Mechatronic Systems",
0x0,
L"0"
},
{
0x053d,
L"Silicon Architect",
0x0,
L"0"
},
{
0x053e,
L"Mobility Electronics",
0x0,
L"0"
},
{
0x053f,
L"Synopsys, Inc.",
0x0,
L"0"
},
{
0x0540,
L"UniAccess AB",
0x0101,
L"Panache Surf ISDN TA"
},
{
0x0541,
L"Sirf Technology, Inc.",
0x0,
L"0"
},
{
0x0543,
L"ViewSonic Corp.",
0x00fe,
L"G773 Monitor Hub"
},
{
0x0543,
L"ViewSonic Corp.",
0x00ff,
L"P815 Monitor Hub"
},
{
0x0543,
L"ViewSonic Corp.",
0x0bf2,
L"airpanel V150 Wireless Smart Display"
},
{
0x0543,
L"ViewSonic Corp.",
0x0bf3,
L"airpanel V110 Wireless Smart Display"
},
{
0x0543,
L"ViewSonic Corp.",
0x0ed9,
L"Color Pocket PC V35"
},
{
0x0543,
L"ViewSonic Corp.",
0x0f01,
L"airsync Wi-Fi Wireless Adapter"
},
{
0x0543,
L"ViewSonic Corp.",
0x1527,
L"Color Pocket PC V36"
},
{
0x0543,
L"ViewSonic Corp.",
0x1529,
L"Color Pocket PC V37"
},
{
0x0543,
L"ViewSonic Corp.",
0x152b,
L"Color Pocket PC V38"
},
{
0x0543,
L"ViewSonic Corp.",
0x152e,
L"Pocket PC"
},
{
0x0543,
L"ViewSonic Corp.",
0x1921,
L"Communicator Pocket PC"
},
{
0x0543,
L"ViewSonic Corp.",
0x1922,
L"Smartphone"
},
{
0x0543,
L"ViewSonic Corp.",
0x1923,
L"Pocket PC V30"
},
{
0x0543,
L"ViewSonic Corp.",
0x1a11,
L"Wireless 802.11g Adapter"
},
{
0x0543,
L"ViewSonic Corp.",
0x1e60,
L"TA310 - ATSC/NTSC/PAL Driver(PCM4)"
},
{
0x0543,
L"ViewSonic Corp.",
0x4153,
L"ViewSonic G773 Control (?)"
},
{
0x0544,
L"Cristie Electronics, Ltd",
0x0,
L"0"
},
{
0x0545,
L"Xirlink, Inc.",
0x7333,
L"Trution Web Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x8002,
L"IBM NetCamera"
},
{
0x0545,
L"Xirlink, Inc.",
0x8009,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x800c,
L"Veo Stingray"
},
{
0x0545,
L"Xirlink, Inc.",
0x800d,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x8080,
L"IBM C-It Webcam"
},
{
0x0545,
L"Xirlink, Inc.",
0x808a,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x808b,
L"Veo Stingray"
},
{
0x0545,
L"Xirlink, Inc.",
0x808d,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x810a,
L"Veo Advanced Connect Webcam"
},
{
0x0545,
L"Xirlink, Inc.",
0x810b,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x810c,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x8135,
L"Veo Mobile/Advanced Web Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x813a,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x813b,
L"Veo PC Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x813c,
L"Veo Mobile/Advanced Web Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x8333,
L"Veo Stingray/Connect Web Camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x888c,
L"eVision 123 digital camera"
},
{
0x0545,
L"Xirlink, Inc.",
0x888d,
L"eVision 123 digital camera"
},
{
0x0546,
L"Polaroid Corp.",
0x0daf,
L"PDC 2300Z"
},
{
0x0546,
L"Polaroid Corp.",
0x1bed,
L"PDC 1320 Camera"
},
{
0x0546,
L"Polaroid Corp.",
0x3097,
L"PDC 310"
},
{
0x0546,
L"Polaroid Corp.",
0x3155,
L"PDC 3070 Camera"
},
{
0x0546,
L"Polaroid Corp.",
0x3187,
L"Digital Camera"
},
{
0x0546,
L"Polaroid Corp.",
0x3191,
L"Ion 80 Camera"
},
{
0x0546,
L"Polaroid Corp.",
0x3273,
L"PDC 2030 Camera"
},
{
0x0546,
L"Polaroid Corp.",
0x3304,
L"a500 Digital Camera"
},
{
0x0546,
L"Polaroid Corp.",
0xdccf,
L"Sound Vision Stream Driver"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x0001,
L"ICSI Bluetooth Device"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x0080,
L"I3SYSTEM HYUNY"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x1002,
L"Python2 WDM Encoder"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x1006,
L"Hantek DSO-2100 UF"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2131,
L"AN2131 EZUSB Microcontroller"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2235,
L"AN2235 EZUSB-FX Microcontroller"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2710,
L"EZ-Link Loader (EZLNKLDR.SYS)"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2720,
L"AN2720 USB-USB Bridge"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2727,
L"Xircom PGUNET USB-USB Bridge"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2750,
L"EZ-Link (EZLNKUSB.SYS)"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x2810,
L"Cypress ATAPI Bridge"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x4018,
L"AmScope MU1803"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x4d90,
L"AmScope MD1900 camera"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x6010,
L"AmScope MU1000 camera"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x6510,
L"Touptek UCMOS05100KPA"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x7000,
L"PowerSpec MCE460 Front Panel LED Display"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x7777,
L"Bluetooth Device"
},
{
0x0547,
L"Anchor Chips, Inc.",
0x9999,
L"AN2131 uninitialized (?)"
},
{
0x0548,
L"Tyan Computer Corp.",
0x1005,
L"EZ Cart II GameBoy Flash Programmer"
},
{
0x0549,
L"Pixera Corp.",
0x0,
L"0"
},
{
0x054a,
L"Fujitsu Microelectronics, Inc.",
0x0,
L"0"
},
{
0x054b,
L"New Media Corp.",
0x0,
L"0"
},
{
0x054c,
L"Sony Corp.",
0x0001,
L"HUB"
},
{
0x054c,
L"Sony Corp.",
0x0002,
L"Standard HUB"
},
{
0x054c,
L"Sony Corp.",
0x0010,
L"Cyber-shot, Mavica (msc)"
},
{
0x054c,
L"Sony Corp.",
0x0014,
L"Nogatech USBVision (SY)"
},
{
0x054c,
L"Sony Corp.",
0x0022,
L"Storage Adapter V2 (TPP)"
},
{
0x054c,
L"Sony Corp.",
0x0023,
L"CD Writer"
},
{
0x054c,
L"Sony Corp.",
0x0024,
L"Mavica CD-1000 Camera"
},
{
0x054c,
L"Sony Corp.",
0x0025,
L"NW-MS7 Walkman MemoryStick Reader"
},
{
0x054c,
L"Sony Corp.",
0x002b,
L"Portable USB Harddrive V2"
},
{
0x054c,
L"Sony Corp.",
0x002c,
L"USB Floppy Disk Drive"
},
{
0x054c,
L"Sony Corp.",
0x002d,
L"MSAC-US1 MemoryStick Reader"
},
{
0x054c,
L"Sony Corp.",
0x002e,
L"HandyCam MemoryStick Reader"
},
{
0x054c,
L"Sony Corp.",
0x0030,
L"Storage Adapter V2 (TPP)"
},
{
0x054c,
L"Sony Corp.",
0x0032,
L"MemoryStick MSC-U01 Reader"
},
{
0x054c,
L"Sony Corp.",
0x0035,
L"Network Walkman (E)"
},
{
0x054c,
L"Sony Corp.",
0x0036,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0037,
L"MG Memory Stick Reader/Writer"
},
{
0x054c,
L"Sony Corp.",
0x0038,
L"Clie PEG-S300/D PalmOS PDA"
},
{
0x054c,
L"Sony Corp.",
0x0039,
L"Network Walkman (MS)"
},
{
0x054c,
L"Sony Corp.",
0x003c,
L"VAIO-MX LCD Control"
},
{
0x054c,
L"Sony Corp.",
0x0045,
L"Digital Imaging Video"
},
{
0x054c,
L"Sony Corp.",
0x0046,
L"Network Walkman"
},
{
0x054c,
L"Sony Corp.",
0x0049,
L"UP-D895"
},
{
0x054c,
L"Sony Corp.",
0x004a,
L"Memory Stick Hi-Fi System"
},
{
0x054c,
L"Sony Corp.",
0x004b,
L"Memory Stick Reader/Writer"
},
{
0x054c,
L"Sony Corp.",
0x004e,
L"DSC-xxx (ptp)"
},
{
0x054c,
L"Sony Corp.",
0x0056,
L"MG Memory Stick Reader/Writer"
},
{
0x054c,
L"Sony Corp.",
0x0058,
L"Clie PEG-N7x0C PalmOS PDA Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x0066,
L"Clie PEG-N7x0C/PEG-T425 PalmOS PDA Serial"
},
{
0x054c,
L"Sony Corp.",
0x0067,
L"CMR-PC3 Webcam"
},
{
0x054c,
L"Sony Corp.",
0x0069,
L"Memorystick MSC-U03 Reader"
},
{
0x054c,
L"Sony Corp.",
0x006c,
L"FeliCa S310 [PaSoRi]"
},
{
0x054c,
L"Sony Corp.",
0x006d,
L"Clie PEG-T425 PDA Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x006f,
L"Network Walkman (EV)"
},
{
0x054c,
L"Sony Corp.",
0x0073,
L"Storage CRX1750U"
},
{
0x054c,
L"Sony Corp.",
0x0075,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0076,
L"Storage Adapter ACR-U20"
},
{
0x054c,
L"Sony Corp.",
0x007c,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x007f,
L"IC Recorder (MS)"
},
{
0x054c,
L"Sony Corp.",
0x0080,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0081,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0084,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0085,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0086,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x008b,
L"Micro Vault 64M Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x0095,
L"Clie s360"
},
{
0x054c,
L"Sony Corp.",
0x0099,
L"Clie NR70 PDA Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x009a,
L"Clie NR70 PDA Serial"
},
{
0x054c,
L"Sony Corp.",
0x00ab,
L"Visual Communication Camera (PCGA-UVC10)"
},
{
0x054c,
L"Sony Corp.",
0x00af,
L"DPP-EX Series Digital Photo Printer"
},
{
0x054c,
L"Sony Corp.",
0x00bf,
L"IC Recorder (S)"
},
{
0x054c,
L"Sony Corp.",
0x00c0,
L"Handycam DCR-30"
},
{
0x054c,
L"Sony Corp.",
0x00c6,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x00c7,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x00c8,
L"MZ-N710 Minidisc Walkman"
},
{
0x054c,
L"Sony Corp.",
0x00c9,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x00ca,
L"MZ-DN430 Minidisc Walkman"
},
{
0x054c,
L"Sony Corp.",
0x00cb,
L"MSAC-US20 Memory Stick Reader"
},
{
0x054c,
L"Sony Corp.",
0x00da,
L"Clie nx60"
},
{
0x054c,
L"Sony Corp.",
0x00e8,
L"Network Walkman (MS)"
},
{
0x054c,
L"Sony Corp.",
0x00e9,
L"Handheld"
},
{
0x054c,
L"Sony Corp.",
0x00eb,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0101,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0103,
L"IC Recorder (ST)"
},
{
0x054c,
L"Sony Corp.",
0x0105,
L"Micro Vault Hub"
},
{
0x054c,
L"Sony Corp.",
0x0107,
L"VCC-U01 Visual Communication Camera"
},
{
0x054c,
L"Sony Corp.",
0x0110,
L"Digital Imaging Video"
},
{
0x054c,
L"Sony Corp.",
0x0113,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0116,
L"IC Recorder (P)"
},
{
0x054c,
L"Sony Corp.",
0x0144,
L"Clie PEG-TH55 PDA"
},
{
0x054c,
L"Sony Corp.",
0x0147,
L"Visual Communication Camera (PCGA-UVC11)"
},
{
0x054c,
L"Sony Corp.",
0x014c,
L"Aiwa AM-NX9 Net MD Music Recorder MDLP"
},
{
0x054c,
L"Sony Corp.",
0x014d,
L"Memory Stick Reader/Writer"
},
{
0x054c,
L"Sony Corp.",
0x0154,
L"Eyetoy Audio Device"
},
{
0x054c,
L"Sony Corp.",
0x0155,
L"Eyetoy Video Device"
},
{
0x054c,
L"Sony Corp.",
0x015f,
L"IC Recorder (BM)"
},
{
0x054c,
L"Sony Corp.",
0x0169,
L"Clie PEG-TJ35 PDA Serial"
},
{
0x054c,
L"Sony Corp.",
0x016a,
L"Clie PEG-TJ35 PDA Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x016b,
L"Mobile HDD"
},
{
0x054c,
L"Sony Corp.",
0x016d,
L"IC Recorder (SX)"
},
{
0x054c,
L"Sony Corp.",
0x016e,
L"DPP-EX50 Digital Photo Printer"
},
{
0x054c,
L"Sony Corp.",
0x0171,
L"Fingerprint Sensor 3500"
},
{
0x054c,
L"Sony Corp.",
0x017e,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x017f,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0180,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0181,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0182,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0183,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0184,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0185,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0186,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0187,
L"Hi-MD MZ-NH600 WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0188,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x018a,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x018b,
L"Hi-MD SOUND GATE"
},
{
0x054c,
L"Sony Corp.",
0x019e,
L"Micro Vault 1.0G Mass Storage"
},
{
0x054c,
L"Sony Corp.",
0x01ad,
L"ATRAC HDD PA"
},
{
0x054c,
L"Sony Corp.",
0x01bb,
L"FeliCa S320 [PaSoRi]"
},
{
0x054c,
L"Sony Corp.",
0x01bd,
L"MRW62E Multi-Card Reader/Writer"
},
{
0x054c,
L"Sony Corp.",
0x01c3,
L"NW-E55 Network Walkman"
},
{
0x054c,
L"Sony Corp.",
0x01c6,
L"MEMORY P-AUDIO"
},
{
0x054c,
L"Sony Corp.",
0x01c7,
L"Printing Support"
},
{
0x054c,
L"Sony Corp.",
0x01c8,
L"PSP Type A"
},
{
0x054c,
L"Sony Corp.",
0x01c9,
L"PSP Type B"
},
{
0x054c,
L"Sony Corp.",
0x01d0,
L"DVD+RW External Drive DRU-700A"
},
{
0x054c,
L"Sony Corp.",
0x01d5,
L"IC RECORDER"
},
{
0x054c,
L"Sony Corp.",
0x01de,
L"VRD-VC10 [Video Capture]"
},
{
0x054c,
L"Sony Corp.",
0x01e7,
L"UP-D897"
},
{
0x054c,
L"Sony Corp.",
0x01e8,
L"UP-DR150 Photo Printer"
},
{
0x054c,
L"Sony Corp.",
0x01e9,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x01ea,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x01ee,
L"IC RECORDER"
},
{
0x054c,
L"Sony Corp.",
0x01fa,
L"IC Recorder (P)"
},
{
0x054c,
L"Sony Corp.",
0x01fb,
L"NW-E405 Network Walkman"
},
{
0x054c,
L"Sony Corp.",
0x020f,
L"Device"
},
{
0x054c,
L"Sony Corp.",
0x0210,
L"ATRAC HDD PA"
},
{
0x054c,
L"Sony Corp.",
0x0219,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x021a,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x021b,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x021c,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x021d,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0226,
L"UP-CR10L"
},
{
0x054c,
L"Sony Corp.",
0x0227,
L"Printing Support"
},
{
0x054c,
L"Sony Corp.",
0x022c,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x022d,
L"Hi-MD AUDIO"
},
{
0x054c,
L"Sony Corp.",
0x0233,
L"ATRAC HDD PA"
},
{
0x054c,
L"Sony Corp.",
0x0236,
L"Mobile HDD"
},
{
0x054c,
L"Sony Corp.",
0x023b,
L"DVD+RW External Drive DRU-800UL"
},
{
0x054c,
L"Sony Corp.",
0x023c,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x023d,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0243,
L"MicroVault Flash Drive"
},
{
0x054c,
L"Sony Corp.",
0x024b,
L"Vaio VGX Mouse"
},
{
0x054c,
L"Sony Corp.",
0x0257,
L"IFU-WLM2 USB Wireless LAN Module (Wireless Mode)"
},
{
0x054c,
L"Sony Corp.",
0x0258,
L"IFU-WLM2 USB Wireless LAN Module (Memory Mode)"
},
{
0x054c,
L"Sony Corp.",
0x0259,
L"IC RECORDER"
},
{
0x054c,
L"Sony Corp.",
0x0267,
L"Tachikoma Device"
},
{
0x054c,
L"Sony Corp.",
0x0268,
L"Batoh Device / PlayStation 3 Controller"
},
{
0x054c,
L"Sony Corp.",
0x0269,
L"HDD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x026a,
L"HDD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0271,
L"IC Recorder (P)"
},
{
0x054c,
L"Sony Corp.",
0x027c,
L"NETWORK WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x027e,
L"SONY Communicator"
},
{
0x054c,
L"Sony Corp.",
0x027f,
L"IC RECORDER"
},
{
0x054c,
L"Sony Corp.",
0x0286,
L"Net MD"
},
{
0x054c,
L"Sony Corp.",
0x0287,
L"Hi-MD WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x0290,
L"VGP-UVC100 Visual Communication Camera"
},
{
0x054c,
L"Sony Corp.",
0x029b,
L"PRS-500 eBook reader"
},
{
0x054c,
L"Sony Corp.",
0x02a5,
L"MicroVault Flash Drive"
},
{
0x054c,
L"Sony Corp.",
0x02af,
L"Handycam DCR-DVD306E"
},
{
0x054c,
L"Sony Corp.",
0x02c4,
L"Device"
},
{
0x054c,
L"Sony Corp.",
0x02d1,
L"DVD RW"
},
{
0x054c,
L"Sony Corp.",
0x02d2,
L"PSP Slim"
},
{
0x054c,
L"Sony Corp.",
0x02d4,
L"UP-CX1"
},
{
0x054c,
L"Sony Corp.",
0x02d8,
L"SBAC-US10 SxS PRO memory card reader/writer"
},
{
0x054c,
L"Sony Corp.",
0x02e1,
L"FeliCa S330 [PaSoRi]"
},
{
0x054c,
L"Sony Corp.",
0x02ea,
L"PlayStation 3 Memory Card Adaptor"
},
{
0x054c,
L"Sony Corp.",
0x02f9,
L"DSC-H9"
},
{
0x054c,
L"Sony Corp.",
0x0317,
L"WALKMAN"
},
{
0x054c,
L"Sony Corp.",
0x031a,
L"Walkman NWD-B103F"
},
{
0x054c,
L"Sony Corp.",
0x031e,
L"PRS-300/PRS-505 eBook reader"
},
{
0x054c,
L"Sony Corp.",
0x0325,
L"NWZ-A818"
},
{
0x054c,
L"Sony Corp.",
0x033e,
L"DSC-W120/W290"
},
{
0x054c,
L"Sony Corp.",
0x0346,
L"Handycam DCR-SR55E"
},
{
0x054c,
L"Sony Corp.",
0x0348,
L"HandyCam HDR-TG3E"
},
{
0x054c,
L"Sony Corp.",
0x035b,
L"Walkman NWZ-A828"
},
{
0x054c,
L"Sony Corp.",
0x035c,
L"NWZ-A726/A728/A729"
},
{
0x054c,
L"Sony Corp.",
0x035f,
L"UP-DR200 Photo Printer"
},
{
0x054c,
L"Sony Corp.",
0x0382,
L"Memory Stick PRO-HG Duo Adaptor (MSAC-UAH1)"
},
{
0x054c,
L"Sony Corp.",
0x0385,
L"Walkman NWZ-E436F"
},
{
0x054c,
L"Sony Corp.",
0x0387,
L"IC Recorder (P)"
},
{
0x054c,
L"Sony Corp.",
0x03bc,
L"Webbie HD - MHS-CM1"
},
{
0x054c,
L"Sony Corp.",
0x03c3,
L"UP-DR80MD"
},
{
0x054c,
L"Sony Corp.",
0x03c4,
L"Stryker SDP1000"
},
{
0x054c,
L"Sony Corp.",
0x03c5,
L"UP-DR80"
},
{
0x054c,
L"Sony Corp.",
0x03cc,
L"SD Card Reader"
},
{
0x054c,
L"Sony Corp.",
0x03d1,
L"DPF-X95"
},
{
0x054c,
L"Sony Corp.",
0x03d3,
L"DR-BT100CX"
},
{
0x054c,
L"Sony Corp.",
0x03d5,
L"PlayStation Move motion controller"
},
{
0x054c,
L"Sony Corp.",
0x03fc,
L"WALKMAN [NWZ-E345]"
},
{
0x054c,
L"Sony Corp.",
0x03fd,
L"Walkman NWZ-E443"
},
{
0x054c,
L"Sony Corp.",
0x042f,
L"PlayStation Move navigation controller"
},
{
0x054c,
L"Sony Corp.",
0x0440,
L"DSC-H55"
},
{
0x054c,
L"Sony Corp.",
0x0485,
L"MHS-PM5 HD camcorder"
},
{
0x054c,
L"Sony Corp.",
0x04cb,
L"WALKMAN NWZ-E354"
},
{
0x054c,
L"Sony Corp.",
0x0541,
L"DSC-HX100V [Cybershot Digital Still Camera]"
},
{
0x054c,
L"Sony Corp.",
0x05c4,
L"DualShock 4 [CUH-ZCT1x]"
},
{
0x054c,
L"Sony Corp.",
0x0689,
L"Walkman NWZ-B173F"
},
{
0x054c,
L"Sony Corp.",
0x06bb,
L"WALKMAN NWZ-F805"
},
{
0x054c,
L"Sony Corp.",
0x06c3,
L"RC-S380"
},
{
0x054c,
L"Sony Corp.",
0x07c4,
L"ILCE-6000 (aka Alpha-6000) in Mass Storage mode"
},
{
0x054c,
L"Sony Corp.",
0x082f,
L"Walkman NWZW Series"
},
{
0x054c,
L"Sony Corp.",
0x0847,
L"WG-C10 Portable Wireless Server"
},
{
0x054c,
L"Sony Corp.",
0x0884,
L"MDR-ZX770BN [Wireless Noise Canceling Stereo Headset]"
},
{
0x054c,
L"Sony Corp.",
0x088c,
L"Portable Headphone Amplifier"
},
{
0x054c,
L"Sony Corp.",
0x08b7,
L"ILCE-6000 (aka Alpha-6000) in MTP mode"
},
{
0x054c,
L"Sony Corp.",
0x094e,
L"ILCE-6000 (aka Alpha-6000) in PC Remote mode"
},
{
0x054c,
L"Sony Corp.",
0x0994,
L"ILCE-6000 (aka Alpha-6000) in charging mode"
},
{
0x054c,
L"Sony Corp.",
0x09cc,
L"DualShock 4 [CUH-ZCT2x]"
},
{
0x054c,
L"Sony Corp.",
0x0ba0,
L"Dualshock4 Wireless Adaptor"
},
{
0x054c,
L"Sony Corp.",
0x0bb5,
L"Headset MDR-1000X"
},
{
0x054c,
L"Sony Corp.",
0x0c02,
L"ILCE-7M3 [A7III] in Mass Storage mode"
},
{
0x054c,
L"Sony Corp.",
0x0c03,
L"ILCE-7M3 [A7III] in MTP mode"
},
{
0x054c,
L"Sony Corp.",
0x0c34,
L"ILCE-7M3 [A7III] in PC Remote mode"
},
{
0x054c,
L"Sony Corp.",
0x0cd3,
L"WH-1000XM3 [Wireless Noise-Canceling Headphones]"
},
{
0x054c,
L"Sony Corp.",
0x0cda,
L"PlayStation Classic controller"
},
{
0x054c,
L"Sony Corp.",
0x1000,
L"Wireless Buzz! Receiver"
},
{
0x054d,
L"Try Corp.",
0x0,
L"0"
},
{
0x054e,
L"Proside Corp.",
0x0,
L"0"
},
{
0x054f,
L"WYSE Technology Taiwan",
0x0,
L"0"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x0002,
L"InkJet Color Printer"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x0004,
L"InkJet Color Printer"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x0005,
L"InkJet Color Printer"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x000b,
L"Workcentre 24"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x014e,
L"CM215b Printer"
},
{
0x0550,
L"Fuji Xerox Co., Ltd",
0x0165,
L"DocuPrint M215b"
},
{
0x0551,
L"CompuTrend Systems, Inc.",
0x0,
L"0"
},
{
0x0552,
L"Philips Monitors",
0x0,
L"0"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0001,
L"TerraCAM"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0002,
L"CPiA Webcam"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0100,
L"STV0672 Camera"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0140,
L"Video Camera"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0150,
L"CDE CAM 100"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0151,
L"Digital Blue QX5 Microscope"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0200,
L"Dual-mode Camera0"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0201,
L"Dual-mode Camera1"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0202,
L"STV0680 Camera"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0674,
L"Multi-mode Camera"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x0679,
L"NMS Video Camera (Webcam)"
},
{
0x0553,
L"STMicroelectronics Imaging Division (VLSI Vision)",
0x1002,
L"Che-ez! Splash"
},
{
0x0554,
L"Dictaphone Corp.",
0x0,
L"0"
},
{
0x0555,
L"ANAM S&T Co., Ltd",
0x0,
L"0"
},
{
0x0556,
L"Asahi Kasei Microsystems Co., Ltd",
0x0001,
L"AK5370 I/F A/D Converter"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2001,
L"UC-1284 Printer Port"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2002,
L"10Mbps Ethernet [klsi]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2004,
L"UC-100KM PS/2 Mouse and Keyboard adapter"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2006,
L"UC-1284B Printer Port"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2007,
L"UC-110T 100Mbps Ethernet [pegasus]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2008,
L"UC-232A Serial Port [pl2303]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2009,
L"UC-210T Ethernet"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2011,
L"UC-2324 4xSerial Ports [mos7840]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2202,
L"CS124U Miniview II KVM Switch"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2212,
L"Keyboard/Mouse"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2213,
L"CS682 2-Port USB 2.0 DVI KVM Switch"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2221,
L"Winbond Hermon"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2404,
L"4-port switch"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2600,
L"IDE Bridge"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x2701,
L"CE700A KVM Extender"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x4000,
L"DSB-650 10Mbps Ethernet [klsi]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x7000,
L"Hub"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x7820,
L"UC-2322 2xSerial Ports [mos7820]"
},
{
0x0557,
L"ATEN International Co., Ltd",
0x8021,
L"Hub"
},
{
0x0558,
L"Truevision, Inc.",
0x1009,
L"GW Instek GDS-1000 Oscilloscope"
},
{
0x0558,
L"Truevision, Inc.",
0x100a,
L"GW Instek GDS-1000A Oscilloscope"
},
{
0x0558,
L"Truevision, Inc.",
0x2009,
L"GW Instek GDS-2000 Oscilloscope"
},
{
0x0559,
L"Cadence Design Systems, Inc.",
0x0,
L"0"
},
{
0x055a,
L"Kenwood USA",
0x0,
L"0"
},
{
0x055b,
L"KnowledgeTek, Inc.",
0x0,
L"0"
},
{
0x055c,
L"Proton Electronic Ind.",
0x0,
L"0"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x0001,
L"Keyboard"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x0bb1,
L"Bluetooth Device"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x1030,
L"Optical Wheel Mouse (OMS3CB/OMGB30)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x1031,
L"Optical Wheel Mouse (OMA3CB/OMGI30)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x1040,
L"Mouse HID Device"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x1050,
L"E-Mail Optical Wheel Mouse (OMS3CE)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x1080,
L"Optical Wheel Mouse (OMS3CH)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x2020,
L"Floppy Disk Drive"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x6780,
L"Keyboard V1"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x6781,
L"Keyboard Mouse"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x8001,
L"E.M. Hub"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x9000,
L"AnyCam [pwc]"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0x9001,
L"MPC-C30 AnyCam Premium for Notebooks [pwc]"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa000,
L"SWL-2100U"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa010,
L"WLAN Adapter(SWL-2300)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa011,
L"Boot Device"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa012,
L"WLAN Adapter(SWL-2300)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa013,
L"WLAN Adapter(SWL-2350)"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xa230,
L"Boot Device"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xb000,
L"11Mbps WLAN Mini Adapter"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xb230,
L"Netopia 802.11b WLAN Adapter"
},
{
0x055d,
L"Samsung Electro-Mechanics Co.",
0xb231,
L"LG Wireless LAN 11b Adapter"
},
{
0x055e,
L"CTX Opto-Electronics Corp.",
0x0,
L"0"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0001,
L"ScanExpress 1200 CU"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0002,
L"ScanExpress 600 CU"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0003,
L"ScanExpress 1200 USB"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0006,
L"ScanExpress 1200 UB"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0007,
L"ScanExpress 1200 USB Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0008,
L"ScanExpress 1200 CU Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0010,
L"BearPaw 1200F"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0210,
L"ScanExpress A3 USB"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0218,
L"BearPaw 2400 TA"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0219,
L"BearPaw 2400 TA Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021a,
L"BearPaw 2448 TA Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021b,
L"BearPaw 1200 CU Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021c,
L"BearPaw 1200 CU Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021d,
L"BearPaw 2400 CU Plus"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021e,
L"BearPaw 1200 TA/CS"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x021f,
L"SNAPSCAN e22"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0400,
L"BearPaw 2400 TA Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0401,
L"P 3600 A3 Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0408,
L"BearPaw 2448 CU Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0409,
L"BearPaw 2448 TA Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x040b,
L"ScanExpress A3 USB 1200 PRO"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0501,
L"ScanExpress A3 2400 Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x0873,
L"ScanExpress 600 USB"
},
{
0x055f,
L"Mustek Systems, Inc.",
0x1000,
L"BearPaw 4800 TA Pro"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xa350,
L"gSmart 350 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xa800,
L"MDC 800 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xb500,
L"MDC 3000 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc005,
L"PC CAM 300A"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc200,
L"gSmart 300"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc211,
L"Kowa Bs888e Microcamera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc220,
L"gSmart mini"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc230,
L"Digicam 330K"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc232,
L"MDC3500 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc360,
L"DV 4000 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc420,
L"gSmart mini 2 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc430,
L"gSmart LCD 2 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc440,
L"DV 3000 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc520,
L"gSmart mini 3 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc530,
L"gSmart LCD 2 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc540,
L"gSmart D30 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc630,
L"MDC 4000 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc631,
L"MDC 4000 Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xc650,
L"MDC 5500Z Camera"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xd001,
L"WCam 300"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xd003,
L"WCam 300A"
},
{
0x055f,
L"Mustek Systems, Inc.",
0xd004,
L"WCam 300AN"
},
{
0x0560,
L"Interface Corp.",
0x0,
L"0"
},
{
0x0561,
L"Oasis Design, Inc.",
0x0,
L"0"
},
{
0x0562,
L"Telex Communications, Inc.",
0x0001,
L"Enhanced Microphone"
},
{
0x0562,
L"Telex Communications, Inc.",
0x0002,
L"Telex Microphone"
},
{
0x0563,
L"Immersion Corp.",
0x0,
L"0"
},
{
0x0564,
L"Kodak Digital Product Center, Japan Ltd. (formerly Chinon Industries Inc.)",
0x0,
L"0"
},
{
0x0565,
L"Peracom Networks, Inc.",
0x0001,
L"Serial Port [etek]"
},
{
0x0565,
L"Peracom Networks, Inc.",
0x0002,
L"Enet Ethernet [klsi]"
},
{
0x0565,
L"Peracom Networks, Inc.",
0x0003,
L"@Home Networks Ethernet [klsi]"
},
{
0x0565,
L"Peracom Networks, Inc.",
0x0005,
L"Enet2 Ethernet [klsi]"
},
{
0x0565,
L"Peracom Networks, Inc.",
0x0041,
L"Peracom Remote NDIS Ethernet Adapter"
},
{
0x0566,
L"Monterey International Corp.",
0x0110,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1001,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1002,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1003,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1004,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1005,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1006,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x1007,
L"ViewMate Desktop Mouse CC2201"
},
{
0x0566,
L"Monterey International Corp.",
0x2800,
L"MIC K/B"
},
{
0x0566,
L"Monterey International Corp.",
0x2801,
L"MIC K/B Mouse"
},
{
0x0566,
L"Monterey International Corp.",
0x2802,
L"Kbd Hub"
},
{
0x0566,
L"Monterey International Corp.",
0x3002,
L"Keyboard"
},
{
0x0566,
L"Monterey International Corp.",
0x3004,
L"Genius KB-29E"
},
{
0x0566,
L"Monterey International Corp.",
0x3013,
L"BakkerElkhuizen Wired Keyboard S-board 840 Design"
},
{
0x0566,
L"Monterey International Corp.",
0x3020,
L"BakkerElkhuizen Wired Keyboard S-board 840 Design USB-Hub"
},
{
0x0566,
L"Monterey International Corp.",
0x3027,
L"Sun-Flex ProTouch"
},
{
0x0566,
L"Monterey International Corp.",
0x3107,
L"Keyboard"
},
{
0x0566,
L"Monterey International Corp.",
0x3132,
L"Optical mouse M-DY4DR / M-DY6DR"
},
{
0x0566,
L"Monterey International Corp.",
0x4006,
L"FID 638 Mouse (Sun Microsystems)"
},
{
0x0567,
L"Xyratex International, Ltd",
0x0,
L"0"
},
{
0x0568,
L"Quartz Ingenierie",
0x0,
L"0"
},
{
0x0569,
L"SegaSoft",
0x0,
L"0"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0000,
L"PenPartner"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0001,
L"PenPartner 4x5"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0002,
L"PenPartner 6x8"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0003,
L"PTU-600 [Cintiq Partner]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0010,
L"ET-0405 [Graphire]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0011,
L"ET-0405A [Graphire2 (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0012,
L"ET-0507A [Graphire2 (5x7)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0013,
L"CTE-430 [Graphire3 (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0014,
L"CTE-630 [Graphire3 (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0015,
L"CTE-440 [Graphire4 (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0016,
L"CTE-640 [Graphire4 (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0017,
L"CTE-450 [Bamboo Fun (small)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0018,
L"CTE-650 [Bamboo Fun (medium)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0019,
L"CTE-631 [Bamboo One]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0020,
L"GD-0405 [Intuos (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0021,
L"GD-0608 [Intuos (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0022,
L"GD-0912 [Intuos (9x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0023,
L"GD-1212 [Intuos (12x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0024,
L"GD-1218 [Intuos (12x18)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0026,
L"PTH-450 [Intuos5 touch (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0027,
L"PTH-650 [Intuos5 touch (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0028,
L"PTH-850 [Intuos5 touch (L)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0029,
L"PTK-450 [Intuos5 (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x002a,
L"PTK-650 [Intuos5 (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0030,
L"PL400"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0031,
L"PL500"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0032,
L"PL600"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0033,
L"PL600SX"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0034,
L"PL550"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0035,
L"PL800"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0037,
L"PL700"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0038,
L"PL510"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0039,
L"DTU-710"
},
{
0x056a,
L"Wacom Co., Ltd",
0x003a,
L"DTI-520"
},
{
0x056a,
L"Wacom Co., Ltd",
0x003b,
L"Integrated Hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x003f,
L"DTZ-2100 [Cintiq 21UX]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0041,
L"XD-0405-U [Intuos2 (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0042,
L"XD-0608-U [Intuos2 (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0043,
L"XD-0912-U [Intuos2 (9x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0044,
L"XD-1212-U [Intuos2 (12x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0045,
L"XD-1218-U [Intuos2 (12x18)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0047,
L"Intuos2 6x8"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0057,
L"DTK-2241"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0059,
L"DTH-2242 tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x005b,
L"DTH-2200 [Cintiq 22HD Touch] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x005d,
L"DTH-2242 touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x005e,
L"DTH-2200 [Cintiq 22HD Touch] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0060,
L"FT-0405 [Volito, PenPartner, PenStation (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0061,
L"FT-0203 [Volito, PenPartner, PenStation (2x3)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0062,
L"CTF-420 [Volito2]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0063,
L"CTF-220 [BizTablet]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0064,
L"CTF-221 [PenPartner2]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0065,
L"MTE-450 [Bamboo]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0069,
L"CTF-430 [Bamboo One]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x006a,
L"CTE-460 [Bamboo One Pen (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x006b,
L"CTE-660 [Bamboo One Pen (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0081,
L"CTE-630BT [Graphire Wireless (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0084,
L"ACK-40401 [Wireless Accessory Kit]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0090,
L"TPC90"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0093,
L"TPC93"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0097,
L"TPC97"
},
{
0x056a,
L"Wacom Co., Ltd",
0x009a,
L"TPC9A"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00a2,
L"STU-300B [LCD signature pad]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b0,
L"PTZ-430 [Intuos3 (4x5)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b1,
L"PTZ-630 [Intuos3 (6x8)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b2,
L"PTZ-930 [Intuos3 (9x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b3,
L"PTZ-1230 [Intuos3 (12x12)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b4,
L"PTZ-1231W [Intuos3 (12x19)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b5,
L"PTZ-631W [Intuos3 (6x11)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b7,
L"PTZ-431W [Intuos3 (4x6)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b8,
L"PTK-440 [Intuos4 (4x6)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00b9,
L"PTK-640 [Intuos4 (6x9)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00ba,
L"PTK-840 [Intuos4 (8x13)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00bb,
L"PTK-1240 [Intuos4 (12x19)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00c0,
L"DTF-521"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00c4,
L"DTF-720"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00c5,
L"DTZ-2000W [Cintiq 20WSX]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00c6,
L"DTZ-1200W [Cintiq 12WX]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00c7,
L"DTU-1931"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00cc,
L"DTK-2100 [Cintiq 21UX]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00ce,
L"DTU-2231"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d0,
L"CTT-460 [Bamboo Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d1,
L"CTH-460 [Bamboo Pen & Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d2,
L"CTH-461 [Bamboo Fun/Craft/Comic Pen & Touch (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d3,
L"CTH-661 [Bamboo Fun/Comic Pen & Touch (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d4,
L"CTL-460 [Bamboo Pen (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d5,
L"CTL-660 [Bamboo Pen (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d6,
L"CTH-460 [Bamboo Pen & Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d7,
L"CTH-461 [Bamboo Fun/Craft/Comic Pen & Touch (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d8,
L"CTH-661 [Bamboo Fun/Comic Pen & Touch (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00d9,
L"CTT-460 [Bamboo Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00da,
L"CTH-461SE [Bamboo Pen & Touch Special Edition (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00db,
L"CTH-661SE [Bamboo Pen & Touch Special Edition (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00dc,
L"CTT-470 [Bamboo Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00dd,
L"CTL-470 [Bamboo Connect]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00de,
L"CTH-470 [Bamboo Fun Pen & Touch]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00df,
L"CTH-670 [Bamboo Create/Fun]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00e2,
L"TPCE2"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00e3,
L"TPCE3"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00e5,
L"TPCE5"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00e6,
L"TPCE6"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00ec,
L"TPCEC"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00ed,
L"TPCED"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00ef,
L"TPCEF"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00f0,
L"DTU-1631"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00f4,
L"DTK-2400 [Cintiq 24HD] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00f6,
L"DTH-2400 [Cintiq 24HD touch] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00f8,
L"DTH-2400 [Cintiq 24HD touch] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00f9,
L"DTK-2200 [Cintiq 22HD] hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00fa,
L"DTK-2200 [Cintiq 22HD] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x00fb,
L"DTU-1031"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0100,
L"TPC100"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0101,
L"TPC101"
},
{
0x056a,
L"Wacom Co., Ltd",
0x010d,
L"TPC10D"
},
{
0x056a,
L"Wacom Co., Ltd",
0x010e,
L"TPC10E"
},
{
0x056a,
L"Wacom Co., Ltd",
0x010f,
L"TPC10F"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0116,
L"TPC116"
},
{
0x056a,
L"Wacom Co., Ltd",
0x012c,
L"TPC12C"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0221,
L"MDP-123 [Inkling]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0300,
L"CTL-471 [Bamboo Splash, One by Wacom (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0301,
L"CTL-671 [One by Wacom (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0302,
L"CTH-480 [Intuos Pen & Touch (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0303,
L"CTH-680 [Intuos Pen & Touch (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0304,
L"DTK-1300 [Cintiq 13HD]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0307,
L"DTH-A1300 [Cintiq Companion Hybrid] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0309,
L"DTH-A1300 [Cintiq Companion Hybrid] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x030e,
L"CTL-480 [Intuos Pen (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0314,
L"PTH-451 [Intuos pro (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0315,
L"PTH-651 [Intuos pro (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0317,
L"PTH-851 [Intuos pro (L)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0318,
L"CTH-301 [Bamboo]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0319,
L"CTH-300 [Bamboo Pad wireless]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0323,
L"CTL-680 [Intuos Pen (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x032a,
L"DTK-2700 [Cintiq 27QHD]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x032b,
L"DTH-2700 [Cintiq 27QHD touch] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x032c,
L"DTH-2700 [Cintiq 27QHD touch] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x032f,
L"DTU-1031X"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0331,
L"ACK-411050 [ExpressKey Remote]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0333,
L"DTH-1300 [Cintiq 13HD Touch] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0335,
L"DTH-1300 [Cintiq 13HD Touch] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0336,
L"DTU-1141"
},
{
0x056a,
L"Wacom Co., Ltd",
0x033b,
L"CTL-490 [Intuos Draw (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x033c,
L"CTH-490 [Intuos Art/Photo/Comic (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x033d,
L"CTL-690 [Intuos Draw (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x033e,
L"CTH-690 [Intuos Art (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0343,
L"DTK-1651"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0347,
L"DTH-W1620 [MobileStudio Pro 16] internal hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0348,
L"DTH-W1620 [MobileStudio Pro 16] external hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x034a,
L"DTH-W1320 [MobileStudio Pro 13] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x034b,
L"DTH-W1620 [MobileStudio Pro 16] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x034d,
L"DTH-W1320 [MobileStudio Pro 13] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x034e,
L"DTH-W1620 [MobileStudio Pro 16] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x034f,
L"DTH-1320 [Cintiq Pro 13] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0350,
L"DTH-1620 [Cintiq Pro 16] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0351,
L"DTH-2420 [Cintiq Pro 24 PT] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0352,
L"DTH-3220 [Cintiq Pro 32] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0353,
L"DTH-1320 [Cintiq Pro 13] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0354,
L"DTH-1620 [Cintiq Pro 16] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0355,
L"DTH-2420 [Cintiq Pro 24 PT] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0356,
L"DTH-3220 [Cintiq Pro 32] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0357,
L"PTH-660 [Intuos Pro (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0358,
L"PTH-860 [Intuos Pro (L)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0359,
L"DTU-1141B"
},
{
0x056a,
L"Wacom Co., Ltd",
0x035a,
L"DTH-1152 tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0368,
L"DTH-1152 touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0374,
L"CTL-4100 [Intuos (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0375,
L"CTL-6100 [Intuos (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0376,
L"CTL-4100WL [Intuos BT (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0378,
L"CTL-6100WL [Intuos BT (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x037a,
L"CTL-472 [One by Wacom (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x037b,
L"CTL-672 [One by Wacom (M)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x037c,
L"DTK-2420 [Cintiq Pro 24 P]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x037d,
L"DTH-2452 tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x037e,
L"DTH-2452 touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0382,
L"DTK-2451 tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x038a,
L"DTH-3220 [Cintiq Pro 32] internal hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x038d,
L"DTH-3220 [Cintiq Pro 32] internal hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x038e,
L"DTH-3220 [Cintiq Pro 32] external hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x038f,
L"DTH-3220 [Cintiq Pro 32] internal hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0390,
L"DTK-1660 [Cintiq 16]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0392,
L"PTH-460 [Intuos Pro (S)]"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0396,
L"DTK-1660E"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0398,
L"DTH-W1320 [MobileStudio Pro 13] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0399,
L"DTH-W1620 [MobileStudio Pro 16] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x039a,
L"DTH-W1320 [MobileStudio Pro 13] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x039b,
L"DTH-W1620 [MobileStudio Pro 16] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x039c,
L"DTH-W1320 [MobileStudio Pro 16] external hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x039d,
L"DTH-W1320 [MobileStudio Pro 16] internal hub"
},
{
0x056a,
L"Wacom Co., Ltd",
0x03aa,
L"DTH-W1620 [MobileStudio Pro 16] tablet"
},
{
0x056a,
L"Wacom Co., Ltd",
0x03ac,
L"DTH-W1620 [MobileStudio Pro 16] touchscreen"
},
{
0x056a,
L"Wacom Co., Ltd",
0x0400,
L"PenPartner 4x5"
},
{
0x056a,
L"Wacom Co., Ltd",
0x4001,
L"TPC4001"
},
{
0x056a,
L"Wacom Co., Ltd",
0x4004,
L"TPC4004"
},
{
0x056a,
L"Wacom Co., Ltd",
0x4850,
L"PenPartner 6x8"
},
{
0x056a,
L"Wacom Co., Ltd",
0x5000,
L"TPC5000"
},
{
0x056a,
L"Wacom Co., Ltd",
0x5002,
L"TPC5002"
},
{
0x056a,
L"Wacom Co., Ltd",
0x5010,
L"TPC5010"
},
{
0x056b,
L"Decicon, Inc.",
0x0,
L"0"
},
{
0x056c,
L"eTEK Labs",
0x0006,
L"KwikLink Host-Host Connector"
},
{
0x056c,
L"eTEK Labs",
0x8007,
L"Kwik232 Serial Port"
},
{
0x056c,
L"eTEK Labs",
0x8100,
L"KwikLink Host-Host Connector"
},
{
0x056c,
L"eTEK Labs",
0x8101,
L"KwikLink USB-USB Bridge"
},
{
0x056d,
L"EIZO Corp.",
0x0000,
L"Hub"
},
{
0x056d,
L"EIZO Corp.",
0x0001,
L"Monitor"
},
{
0x056d,
L"EIZO Corp.",
0x0002,
L"HID Monitor Controls"
},
{
0x056d,
L"EIZO Corp.",
0x0003,
L"Device Bay Controller"
},
{
0x056d,
L"EIZO Corp.",
0x4001,
L"Monitor"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0002,
L"29UO Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0057,
L"Micro Grast Pop M-PGDL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x005c,
L"Micro Grast Pop M-PG2DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x005d,
L"Micro Grast Fit M-FGDL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x005e,
L"Micro Grast Fit M-FG2DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0062,
L"Optical mouse M-D18DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0063,
L"Laser mouse M-SODL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0069,
L"Laser mouse M-GE1UL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0071,
L"Laser mouse M-GE3DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0072,
L"Laser mouse M-LS6UL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0073,
L"Laser mouse M-LS7UL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0074,
L"Optical mouse M-FW1UL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0075,
L"Laser mouse M-FW2DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0077,
L"Laser mouse M-LY2UL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0079,
L"Laser mouse M-D21DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x007b,
L"Laser mouse M-D20DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x007c,
L"Laser Bluetooth mouse M-BT5BL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x007e,
L"Option mouse M-M8UR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x007f,
L"Option mouse M-M9UR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0081,
L"Option mouse M-DY6DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0082,
L"Laser mouse M-D22DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0088,
L"Micro Grast2 Bit M-BG3DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0089,
L"Micro Grast2 Pop M-PG3DL"
},
{
0x056e,
L"Elecom Co., Ltd",
0x008c,
L"M-NE3DL Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x008d,
L"ORIME M-NE4DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x008f,
L"M-BT8BL Bluetooth Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x0092,
L"Wireless BlueLED Mouse (M-BL2DB)"
},
{
0x056e,
L"Elecom Co., Ltd",
0x009c,
L"IR Mouse M-IR02DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x009d,
L"IR Mouse M-IR03DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x009f,
L"BlueLED Mouse M-HS1DB"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a1,
L"IR Mouse M-IR05DR"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a4,
L"Blue LED Mouse M-BL06DB"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a5,
L"M-NV1BR Bluetooth Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a7,
L"Blue LED Mouse M-BL08DB"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a8,
L"M-BL09DB Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x00a9,
L"M-BL10UB Mouse"
},
{
0x056e,
L"Elecom Co., Ltd",
0x2003,
L"JC-U3613M"
},
{
0x056e,
L"Elecom Co., Ltd",
0x2004,
L"JC-U3613M"
},
{
0x056e,
L"Elecom Co., Ltd",
0x200c,
L"LD-USB/TX"
},
{
0x056e,
L"Elecom Co., Ltd",
0x2012,
L"JC-U4013S Gamepad"
},
{
0x056e,
L"Elecom Co., Ltd",
0x4002,
L"Laneed 100Mbps Ethernet LD-USB/TX [pegasus]"
},
{
0x056e,
L"Elecom Co., Ltd",
0x4005,
L"LD-USBL/TX"
},
{
0x056e,
L"Elecom Co., Ltd",
0x400b,
L"LD-USB/TX"
},
{
0x056e,
L"Elecom Co., Ltd",
0x4010,
L"LD-USB20"
},
{
0x056e,
L"Elecom Co., Ltd",
0x5003,
L"UC-SGT"
},
{
0x056e,
L"Elecom Co., Ltd",
0x5004,
L"UC-SGT"
},
{
0x056e,
L"Elecom Co., Ltd",
0x6008,
L"Flash Disk"
},
{
0x056e,
L"Elecom Co., Ltd",
0xabc1,
L"LD-USB/TX"
},
{
0x056f,
L"Korea Data Systems Co., Ltd",
0xcd00,
L"CDM-751 CD organizer"
},
{
0x0570,
L"Epson America",
0x0,
L"0"
},
{
0x0571,
L"Interex, Inc.",
0x0002,
L"echoFX InterView Lite"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0001,
L"Ezcam II Webcam"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0002,
L"Ezcam II Webcam"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0040,
L"Wondereye CP-115 Webcam"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0041,
L"Webcam Notebook"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0042,
L"Webcam Notebook"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x0320,
L"DVBSky T330 DVB-T2/C tuner"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1232,
L"V.90 modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1234,
L"Typhoon Redfun Modem V90 56k"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1252,
L"HCF V90 Data Fax Voice Modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1253,
L"Zoom V.92 Faxmodem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1300,
L"SoftK56 Data Fax Voice CARP"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1301,
L"Modem Enumerator"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1328,
L"TrendNet TFM-561 modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x1804,
L"HP Dock Audio"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x2000,
L"SoftGate 802.11 Adapter"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x2002,
L"SoftGate 802.11 Adapter"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x262a,
L"tm5600 Video & Audio Grabber Capture"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x680c,
L"DVBSky T680C DVB-T2/C tuner"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x6831,
L"DVBSky S960 DVB-S2 tuner"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x8390,
L"WinFast PalmTop/Novo TV Video"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x8392,
L"WinFast PalmTop/Novo TV Video"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0x960c,
L"DVBSky S960C DVB-S2 tuner"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xc686,
L"Geniatech T220A DVB-T2 TV Stick"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xc688,
L"Geniatech T230 DVB-T2 TV Stick"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcafc,
L"CX861xx ROM Boot Loader"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcafd,
L"CX82310 ROM Boot Loader"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcafe,
L"AccessRunner ADSL Modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcb00,
L"ADSL Modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcb01,
L"ADSL Modem"
},
{
0x0572,
L"Conexant Systems (Rockwell), Inc.",
0xcb06,
L"StarModem Network Interface"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x0003,
L"USBGear USBG-V1"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x0400,
L"D-Link V100"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x0600,
L"Dazzle USBVision (1006)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x1300,
L"leadtek USBVision (1006)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x2000,
L"X10 va10a Wireless Camera"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x2001,
L"Dazzle EmMe (2001)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x2101,
L"Zoran Co. PMD (Nogatech) AV-grabber Manhattan"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x2d00,
L"Osprey 50"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x2d01,
L"Hauppauge USB-Live Model 600"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x3000,
L"Dazzle MicroCam (NTSC)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x3001,
L"Dazzle MicroCam (PAL)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4000,
L"Nogatech TV! (NTSC)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4001,
L"Nogatech TV! (PAL)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4002,
L"Nogatech TV! (PAL-I-)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4003,
L"Nogatech TV! (MF-)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4008,
L"Nogatech TV! (NTSC) (T)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4009,
L"Nogatech TV! (PAL) (T)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4010,
L"Nogatech TV! (NTSC) (A)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4100,
L"USB-TV FM (NTSC)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4110,
L"PNY USB-TV (NTSC) FM"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4400,
L"Nogatech TV! Pro (NTSC)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4401,
L"Nogatech TV! Pro (PAL)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4450,
L"PixelView PlayTv-USB PRO (PAL) FM"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4451,
L"Nogatech TV! Pro (PAL+)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4452,
L"Nogatech TV! Pro (PAL-I+)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4500,
L"Nogatech TV! Pro (NTSC)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4501,
L"Nogatech TV! Pro (PAL)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4550,
L"ZTV ZT-721 2.4GHz A/V Receiver"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4551,
L"Dazzle TV! Pro Audio (P+)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d00,
L"Hauppauge WinTV-USB USA"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d01,
L"Hauppauge WinTV-USB"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d02,
L"Hauppauge WinTV-USB UK"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d03,
L"Hauppauge WinTV-USB France"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d04,
L"Hauppauge WinTV (PAL D/K)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d10,
L"Hauppauge WinTV-USB with FM USA radio"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d11,
L"Hauppauge WinTV-USB (PAL) with FM radio"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d12,
L"Hauppauge WinTV-USB UK with FM Radio"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d14,
L"Hauppauge WinTV (PAL D/K FM)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d20,
L"Hauppauge WinTV-USB II (PAL) with FM radio"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d21,
L"Hauppauge WinTV-USB II (PAL)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d22,
L"Hauppauge WinTV-USB II (PAL) Model 566"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d23,
L"Hauppauge WinTV-USB France 4D23"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d24,
L"Hauppauge WinTV Pro (PAL D/K)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d25,
L"Hauppauge WinTV-USB Model 40209 rev B234"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d26,
L"Hauppauge WinTV-USB Model 40209 rev B243"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d27,
L"Hauppauge WinTV-USB Model 40204 Rev B281"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d28,
L"Hauppauge WinTV-USB Model 40204 rev B283"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d29,
L"Hauppauge WinTV-USB Model 40205 rev B298"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d2a,
L"Hauppague WinTV-USB Model 602 Rev B285"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d2b,
L"Hauppague WinTV-USB Model 602 Rev B282"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d2c,
L"Hauppauge WinTV Pro (PAL/SECAM)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d30,
L"Hauppauge WinTV-USB FM Model 40211 Rev B123"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d31,
L"Hauppauge WinTV-USB III (PAL) with FM radio Model 568"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d32,
L"Hauppauge WinTV-USB III (PAL) FM Model 573"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d34,
L"Hauppauge WinTV Pro (PAL D/K FM)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d35,
L"Hauppauge WinTV-USB III (PAL) FM Model 597"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d36,
L"Hauppauge WinTV Pro (PAL B/G FM)"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d37,
L"Hauppauge WinTV-USB Model 40219 rev E189"
},
{
0x0573,
L"Zoran Co. Personal Media Division (Nogatech)",
0x4d38,
L"Hauppauge WinTV Pro (NTSC FM)"
},
{
0x0574,
L"City University of Hong Kong",
0x0,
L"0"
},
{
0x0575,
L"Philips Creative Display Solutions",
0x0,
L"0"
},
{
0x0576,
L"BAFO/Quality Computer Accessories",
0x0,
L"0"
},
{
0x0577,
L"ELSA",
0x0,
L"0"
},
{
0x0578,
L"Intrinsix Corp.",
0x0,
L"0"
},
{
0x0579,
L"GVC Corp.",
0x0,
L"0"
},
{
0x057a,
L"Samsung Electronics America",
0x0,
L"0"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0000,
L"FlashBuster-U Floppy"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0001,
L"Tri-Media Reader Floppy"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0006,
L"Tri-Media Reader Card Reader"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0010,
L"Memory Stick Reader Writer"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0020,
L"HEXA Media Drive 6-in-1 Card Reader Writer"
},
{
0x057b,
L"Y-E Data, Inc.",
0x0030,
L"Memory Card Viewer (TV)"
},
{
0x057c,
L"AVM GmbH",
0x0b00,
L"ISDN-Controller B1 Family"
},
{
0x057c,
L"AVM GmbH",
0x0c00,
L"ISDN-Controller FRITZ!Card"
},
{
0x057c,
L"AVM GmbH",
0x1000,
L"ISDN-Controller FRITZ!Card v2.0"
},
{
0x057c,
L"AVM GmbH",
0x1900,
L"ISDN-Controller FRITZ!Card v2.1"
},
{
0x057c,
L"AVM GmbH",
0x2000,
L"ISDN-Connector FRITZ!X"
},
{
0x057c,
L"AVM GmbH",
0x2200,
L"BlueFRITZ!"
},
{
0x057c,
L"AVM GmbH",
0x2300,
L"Teledat X130 DSL"
},
{
0x057c,
L"AVM GmbH",
0x2800,
L"Teledat 2a/b / X120 / NetXXL ISDN Terminal Adapter"
},
{
0x057c,
L"AVM GmbH",
0x3200,
L"Teledat X130 DSL"
},
{
0x057c,
L"AVM GmbH",
0x3500,
L"FRITZ!Card DSL SL"
},
{
0x057c,
L"AVM GmbH",
0x3701,
L"FRITZ!Box SL"
},
{
0x057c,
L"AVM GmbH",
0x3702,
L"FRITZ!Box"
},
{
0x057c,
L"AVM GmbH",
0x3800,
L"BlueFRITZ! Bluetooth Stick"
},
{
0x057c,
L"AVM GmbH",
0x3a00,
L"FRITZ!Box Fon"
},
{
0x057c,
L"AVM GmbH",
0x3c00,
L"FRITZ!Box WLAN"
},
{
0x057c,
L"AVM GmbH",
0x3d00,
L"FRITZ!Box Fon WLAN 7050/7140/7170/IAD3331"
},
{
0x057c,
L"AVM GmbH",
0x3e01,
L"FRITZ!Box (Annex A)"
},
{
0x057c,
L"AVM GmbH",
0x4001,
L"FRITZ!Box Fon (Annex A)"
},
{
0x057c,
L"AVM GmbH",
0x4101,
L"FRITZ!Box WLAN (Annex A)"
},
{
0x057c,
L"AVM GmbH",
0x4201,
L"FRITZ!Box Fon WLAN (Annex A)"
},
{
0x057c,
L"AVM GmbH",
0x4601,
L"Eumex 5520PC (WinXP/2000)"
},
{
0x057c,
L"AVM GmbH",
0x4602,
L"Eumex 400 (WinXP/2000)"
},
{
0x057c,
L"AVM GmbH",
0x4701,
L"AVM FRITZ!Box Fon ata"
},
{
0x057c,
L"AVM GmbH",
0x5401,
L"Eumex 300 IP"
},
{
0x057c,
L"AVM GmbH",
0x5601,
L"AVM Fritz!WLAN [Texas Instruments TNETW1450]"
},
{
0x057c,
L"AVM GmbH",
0x6201,
L"AVM Fritz!WLAN v1.1 [Texas Instruments TNETW1450]"
},
{
0x057c,
L"AVM GmbH",
0x62ff,
L"AVM Fritz!WLAN USB (in CD-ROM-mode)"
},
{
0x057c,
L"AVM GmbH",
0x8401,
L"Fritz!WLAN N [Atheros AR9001U]"
},
{
0x057c,
L"AVM GmbH",
0x8402,
L"Fritz!WLAN N 2.4 [Atheros AR9001U]"
},
{
0x057c,
L"AVM GmbH",
0x8403,
L"Fritz!WLAN N v2 [Atheros AR9271]"
},
{
0x057c,
L"AVM GmbH",
0x84ff,
L"AVM Fritz!WLAN USB N (in CD-ROM-mode)"
},
{
0x057c,
L"AVM GmbH",
0x8501,
L"FRITZ WLAN N v2 [RT5572/rt2870.bin]"
},
{
0x057d,
L"Shark Multimedia, Inc.",
0x0,
L"0"
},
{
0x057e,
L"Nintendo Co., Ltd",
0x0305,
L"Broadcom BCM2045A Bluetooth Radio [Nintendo Wii]"
},
{
0x057e,
L"Nintendo Co., Ltd",
0x0306,
L"Wii Remote Controller RVL-003"
},
{
0x057e,
L"Nintendo Co., Ltd",
0x0337,
L"Wii U GameCube Controller Adapter"
},
{
0x057e,
L"Nintendo Co., Ltd",
0x2006,
L"Joy-Con L"
},
{
0x057e,
L"Nintendo Co., Ltd",
0x2007,
L"Joy-Con R"
},
{
0x057f,
L"QuickShot, Ltd",
0x6238,
L"USB StrikePad"
},
{
0x0580,
L"Denron, Inc.",
0x0,
L"0"
},
{
0x0581,
L"Racal Data Group",
0x0,
L"0"
},
{
0x0582,
L"Roland Corp.",
0x0000,
L"UA-100(G)"
},
{
0x0582,
L"Roland Corp.",
0x0002,
L"UM-4/MPU-64 MIDI Interface"
},
{
0x0582,
L"Roland Corp.",
0x0003,
L"SoundCanvas SC-8850"
},
{
0x0582,
L"Roland Corp.",
0x0004,
L"U-8"
},
{
0x0582,
L"Roland Corp.",
0x0005,
L"UM-2(C/EX)"
},
{
0x0582,
L"Roland Corp.",
0x0007,
L"SoundCanvas SC-8820"
},
{
0x0582,
L"Roland Corp.",
0x0008,
L"PC-300"
},
{
0x0582,
L"Roland Corp.",
0x0009,
L"UM-1(E/S/X)"
},
{
0x0582,
L"Roland Corp.",
0x000b,
L"SK-500"
},
{
0x0582,
L"Roland Corp.",
0x000c,
L"SC-D70"
},
{
0x0582,
L"Roland Corp.",
0x0010,
L"EDIROL UA-5"
},
{
0x0582,
L"Roland Corp.",
0x0011,
L"Edirol UA-5 Sound Capture"
},
{
0x0582,
L"Roland Corp.",
0x0012,
L"XV-5050"
},
{
0x0582,
L"Roland Corp.",
0x0013,
L"XV-5050"
},
{
0x0582,
L"Roland Corp.",
0x0014,
L"EDIROL UM-880 MIDI I/F (native)"
},
{
0x0582,
L"Roland Corp.",
0x0015,
L"EDIROL UM-880 MIDI I/F (generic)"
},
{
0x0582,
L"Roland Corp.",
0x0016,
L"EDIROL SD-90"
},
{
0x0582,
L"Roland Corp.",
0x0017,
L"EDIROL SD-90"
},
{
0x0582,
L"Roland Corp.",
0x0018,
L"UA-1A"
},
{
0x0582,
L"Roland Corp.",
0x001b,
L"MMP-2"
},
{
0x0582,
L"Roland Corp.",
0x001c,
L"MMP-2"
},
{
0x0582,
L"Roland Corp.",
0x001d,
L"V-SYNTH"
},
{
0x0582,
L"Roland Corp.",
0x001e,
L"V-SYNTH"
},
{
0x0582,
L"Roland Corp.",
0x0023,
L"EDIROL UM-550"
},
{
0x0582,
L"Roland Corp.",
0x0024,
L"EDIROL UM-550"
},
{
0x0582,
L"Roland Corp.",
0x0025,
L"EDIROL UA-20"
},
{
0x0582,
L"Roland Corp.",
0x0026,
L"EDIROL UA-20"
},
{
0x0582,
L"Roland Corp.",
0x0027,
L"EDIROL SD-20"
},
{
0x0582,
L"Roland Corp.",
0x0028,
L"EDIROL SD-20"
},
{
0x0582,
L"Roland Corp.",
0x0029,
L"EDIROL SD-80"
},
{
0x0582,
L"Roland Corp.",
0x002a,
L"EDIROL SD-80"
},
{
0x0582,
L"Roland Corp.",
0x002b,
L"EDIROL UA-700"
},
{
0x0582,
L"Roland Corp.",
0x002c,
L"EDIROL UA-700"
},
{
0x0582,
L"Roland Corp.",
0x002d,
L"XV-2020 Synthesizer"
},
{
0x0582,
L"Roland Corp.",
0x002e,
L"XV-2020 Synthesizer"
},
{
0x0582,
L"Roland Corp.",
0x002f,
L"VariOS"
},
{
0x0582,
L"Roland Corp.",
0x0030,
L"VariOS"
},
{
0x0582,
L"Roland Corp.",
0x0033,
L"EDIROL PCR"
},
{
0x0582,
L"Roland Corp.",
0x0034,
L"EDIROL PCR"
},
{
0x0582,
L"Roland Corp.",
0x0035,
L"M-1000"
},
{
0x0582,
L"Roland Corp.",
0x0037,
L"Digital Piano"
},
{
0x0582,
L"Roland Corp.",
0x0038,
L"Digital Piano"
},
{
0x0582,
L"Roland Corp.",
0x003b,
L"BOSS GS-10"
},
{
0x0582,
L"Roland Corp.",
0x003c,
L"BOSS GS-10"
},
{
0x0582,
L"Roland Corp.",
0x0040,
L"GI-20"
},
{
0x0582,
L"Roland Corp.",
0x0041,
L"GI-20"
},
{
0x0582,
L"Roland Corp.",
0x0042,
L"RS-70"
},
{
0x0582,
L"Roland Corp.",
0x0043,
L"RS-70"
},
{
0x0582,
L"Roland Corp.",
0x0044,
L"EDIROL UA-1000"
},
{
0x0582,
L"Roland Corp.",
0x0047,
L"EDIROL UR-80 WAVE"
},
{
0x0582,
L"Roland Corp.",
0x0048,
L"EDIROL UR-80 MIDI"
},
{
0x0582,
L"Roland Corp.",
0x0049,
L"EDIROL UR-80 WAVE"
},
{
0x0582,
L"Roland Corp.",
0x004a,
L"EDIROL UR-80 MIDI"
},
{
0x0582,
L"Roland Corp.",
0x004b,
L"EDIROL M-100FX"
},
{
0x0582,
L"Roland Corp.",
0x004c,
L"EDIROL PCR-A WAVE"
},
{
0x0582,
L"Roland Corp.",
0x004d,
L"EDIROL PCR-A MIDI"
},
{
0x0582,
L"Roland Corp.",
0x004e,
L"EDIROL PCR-A WAVE"
},
{
0x0582,
L"Roland Corp.",
0x004f,
L"EDIROL PCR-A MIDI"
},
{
0x0582,
L"Roland Corp.",
0x0050,
L"EDIROL UA-3FX"
},
{
0x0582,
L"Roland Corp.",
0x0052,
L"EDIROL UM-1SX"
},
{
0x0582,
L"Roland Corp.",
0x0054,
L"Digital Piano"
},
{
0x0582,
L"Roland Corp.",
0x0060,
L"EXR Series"
},
{
0x0582,
L"Roland Corp.",
0x0064,
L"EDIROL PCR-1 WAVE"
},
{
0x0582,
L"Roland Corp.",
0x0065,
L"EDIROL PCR-1 MIDI"
},
{
0x0582,
L"Roland Corp.",
0x0066,
L"EDIROL PCR-1 WAVE"
},
{
0x0582,
L"Roland Corp.",
0x0067,
L"EDIROL PCR-1 MIDI"
},
{
0x0582,
L"Roland Corp.",
0x006a,
L"SP-606"
},
{
0x0582,
L"Roland Corp.",
0x006b,
L"SP-606"
},
{
0x0582,
L"Roland Corp.",
0x006d,
L"FANTOM-X"
},
{
0x0582,
L"Roland Corp.",
0x006e,
L"FANTOM-X"
},
{
0x0582,
L"Roland Corp.",
0x0073,
L"EDIROL UA-25"
},
{
0x0582,
L"Roland Corp.",
0x0074,
L"EDIROL UA-25"
},
{
0x0582,
L"Roland Corp.",
0x0075,
L"BOSS DR-880"
},
{
0x0582,
L"Roland Corp.",
0x0076,
L"BOSS DR-880"
},
{
0x0582,
L"Roland Corp.",
0x007a,
L"RD"
},
{
0x0582,
L"Roland Corp.",
0x007b,
L"RD"
},
{
0x0582,
L"Roland Corp.",
0x007d,
L"EDIROL UA-101"
},
{
0x0582,
L"Roland Corp.",
0x0080,
L"G-70"
},
{
0x0582,
L"Roland Corp.",
0x0081,
L"G-70"
},
{
0x0582,
L"Roland Corp.",
0x0084,
L"V-SYNTH XT"
},
{
0x0582,
L"Roland Corp.",
0x0089,
L"BOSS GT-PRO"
},
{
0x0582,
L"Roland Corp.",
0x008b,
L"EDIROL PC-50"
},
{
0x0582,
L"Roland Corp.",
0x008c,
L"EDIROL PC-50"
},
{
0x0582,
L"Roland Corp.",
0x008d,
L"EDIROL UA-101 USB1"
},
{
0x0582,
L"Roland Corp.",
0x0092,
L"EDIROL PC-80 WAVE"
},
{
0x0582,
L"Roland Corp.",
0x0093,
L"EDIROL PC-80 MIDI"
},
{
0x0582,
L"Roland Corp.",
0x0096,
L"EDIROL UA-1EX"
},
{
0x0582,
L"Roland Corp.",
0x009a,
L"EDIROL UM-3EX"
},
{
0x0582,
L"Roland Corp.",
0x009d,
L"EDIROL UM-1"
},
{
0x0582,
L"Roland Corp.",
0x00a0,
L"MD-P1"
},
{
0x0582,
L"Roland Corp.",
0x00a2,
L"Digital Piano"
},
{
0x0582,
L"Roland Corp.",
0x00a3,
L"EDIROL UA-4FX"
},
{
0x0582,
L"Roland Corp.",
0x00a6,
L"Juno-G"
},
{
0x0582,
L"Roland Corp.",
0x00a9,
L"MC-808"
},
{
0x0582,
L"Roland Corp.",
0x00ad,
L"SH-201"
},
{
0x0582,
L"Roland Corp.",
0x00b2,
L"VG-99"
},
{
0x0582,
L"Roland Corp.",
0x00b3,
L"VG-99"
},
{
0x0582,
L"Roland Corp.",
0x00b7,
L"BK-7m/VIMA JM-5/8"
},
{
0x0582,
L"Roland Corp.",
0x00c2,
L"SonicCell"
},
{
0x0582,
L"Roland Corp.",
0x00c4,
L"EDIROL M-16DX"
},
{
0x0582,
L"Roland Corp.",
0x00c5,
L"SP-555"
},
{
0x0582,
L"Roland Corp.",
0x00c7,
L"V-Synth GT"
},
{
0x0582,
L"Roland Corp.",
0x00d1,
L"Music Atelier"
},
{
0x0582,
L"Roland Corp.",
0x00d3,
L"M-380/400"
},
{
0x0582,
L"Roland Corp.",
0x00da,
L"BOSS GT-10"
},
{
0x0582,
L"Roland Corp.",
0x00db,
L"BOSS GT-10 Guitar Effects Processor"
},
{
0x0582,
L"Roland Corp.",
0x00dc,
L"BOSS GT-10B"
},
{
0x0582,
L"Roland Corp.",
0x00de,
L"Fantom G"
},
{
0x0582,
L"Roland Corp.",
0x00e6,
L"EDIROL UA-25EX (Advanced mode)"
},
{
0x0582,
L"Roland Corp.",
0x00e7,
L"EDIROL UA-25EX"
},
{
0x0582,
L"Roland Corp.",
0x00e9,
L"UA-1G"
},
{
0x0582,
L"Roland Corp.",
0x00eb,
L"VS-100"
},
{
0x0582,
L"Roland Corp.",
0x00f6,
L"GW-8/AX-Synth"
},
{
0x0582,
L"Roland Corp.",
0x00f8,
L"JUNO Series"
},
{
0x0582,
L"Roland Corp.",
0x00fc,
L"VS-700C"
},
{
0x0582,
L"Roland Corp.",
0x00fd,
L"VS-700"
},
{
0x0582,
L"Roland Corp.",
0x00fe,
L"VS-700 M1"
},
{
0x0582,
L"Roland Corp.",
0x00ff,
L"VS-700 M2"
},
{
0x0582,
L"Roland Corp.",
0x0100,
L"VS-700"
},
{
0x0582,
L"Roland Corp.",
0x0101,
L"VS-700 M2"
},
{
0x0582,
L"Roland Corp.",
0x0102,
L"VB-99"
},
{
0x0582,
L"Roland Corp.",
0x0104,
L"UM-1G"
},
{
0x0582,
L"Roland Corp.",
0x0106,
L"UM-2G"
},
{
0x0582,
L"Roland Corp.",
0x0108,
L"UM-3G"
},
{
0x0582,
L"Roland Corp.",
0x0109,
L"eBand JS-8"
},
{
0x0582,
L"Roland Corp.",
0x010d,
L"A-500S"
},
{
0x0582,
L"Roland Corp.",
0x010f,
L"A-PRO"
},
{
0x0582,
L"Roland Corp.",
0x0110,
L"A-PRO"
},
{
0x0582,
L"Roland Corp.",
0x0111,
L"GAIA SH-01"
},
{
0x0582,
L"Roland Corp.",
0x0113,
L"ME-25"
},
{
0x0582,
L"Roland Corp.",
0x0114,
L"SD-50"
},
{
0x0582,
L"Roland Corp.",
0x0116,
L"WAVE/MP3 RECORDER R-05"
},
{
0x0582,
L"Roland Corp.",
0x0117,
L"VS-20"
},
{
0x0582,
L"Roland Corp.",
0x0119,
L"OCTAPAD SPD-30"
},
{
0x0582,
L"Roland Corp.",
0x011c,
L"Lucina AX-09"
},
{
0x0582,
L"Roland Corp.",
0x011e,
L"BR-800"
},
{
0x0582,
L"Roland Corp.",
0x0120,
L"OCTA-CAPTURE"
},
{
0x0582,
L"Roland Corp.",
0x0121,
L"OCTA-CAPTURE"
},
{
0x0582,
L"Roland Corp.",
0x0123,
L"JUNO-Gi"
},
{
0x0582,
L"Roland Corp.",
0x0124,
L"M-300"
},
{
0x0582,
L"Roland Corp.",
0x0127,
L"GR-55"
},
{
0x0582,
L"Roland Corp.",
0x012a,
L"UM-ONE"
},
{
0x0582,
L"Roland Corp.",
0x012b,
L"DUO-CAPTURE"
},
{
0x0582,
L"Roland Corp.",
0x012f,
L"QUAD-CAPTURE"
},
{
0x0582,
L"Roland Corp.",
0x0130,
L"MICRO BR BR-80"
},
{
0x0582,
L"Roland Corp.",
0x0132,
L"TRI-CAPTURE"
},
{
0x0582,
L"Roland Corp.",
0x0134,
L"V-Mixer"
},
{
0x0582,
L"Roland Corp.",
0x0138,
L"Boss RC-300 (Audio mode)"
},
{
0x0582,
L"Roland Corp.",
0x0139,
L"Boss RC-300 (Storage mode)"
},
{
0x0582,
L"Roland Corp.",
0x013a,
L"JUPITER-80"
},
{
0x0582,
L"Roland Corp.",
0x013e,
L"R-26"
},
{
0x0582,
L"Roland Corp.",
0x0145,
L"SPD-SX"
},
{
0x0582,
L"Roland Corp.",
0x014b,
L"eBand JS-10"
},
{
0x0582,
L"Roland Corp.",
0x014d,
L"GT-100"
},
{
0x0582,
L"Roland Corp.",
0x0150,
L"TD-15"
},
{
0x0582,
L"Roland Corp.",
0x0151,
L"TD-11"
},
{
0x0582,
L"Roland Corp.",
0x0154,
L"JUPITER-50"
},
{
0x0582,
L"Roland Corp.",
0x0156,
L"A-Series"
},
{
0x0582,
L"Roland Corp.",
0x0158,
L"TD-30"
},
{
0x0582,
L"Roland Corp.",
0x0159,
L"DUO-CAPTURE EX"
},
{
0x0582,
L"Roland Corp.",
0x015b,
L"INTEGRA-7"
},
{
0x0582,
L"Roland Corp.",
0x015d,
L"R-88"
},
{
0x0582,
L"Roland Corp.",
0x0505,
L"EDIROL UA-101"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x0001,
L"4 Axis 12 button +POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x0002,
L"4 Axis 12 button +POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x2030,
L"RM-203 USB Nest [mode 1]"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x2031,
L"RM-203 USB Nest [mode 2]"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x2032,
L"RM-203 USB Nest [mode 3]"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x2033,
L"RM-203 USB Nest [mode 4]"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x2050,
L"PX-205 PSX Bridge"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x205f,
L"PSX/USB converter"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x206f,
L"USB, 2-axis 8-button gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x3050,
L"QF-305u Gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x3379,
L"Rockfire X-Force"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x337f,
L"Rockfire USB RacingStar Vibra"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x509f,
L"USB,4-Axis,12-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x5259,
L"Rockfire USB SkyShuttle Vibra"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x525f,
L"USB Vibration Pad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x5308,
L"USB Wireless VibrationPad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x5359,
L"Rockfire USB SkyShuttle Pro"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x535f,
L"USB,real VibrationPad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x5659,
L"Rockfire USB SkyShuttle Vibra"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x565f,
L"USB VibrationPad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x6009,
L"Revenger"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x600f,
L"USB,GameBoard II"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x6258,
L"USB, 4-axis, 6-button joystick w/view finder"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x6889,
L"Windstorm Pro"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x688f,
L"QF-688uv Windstorm Pro Joystick"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0x7070,
L"QF-707u Bazooka Joystick"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa000,
L"MaxFire G-08XU Gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa015,
L"4-Axis,16-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa019,
L"USB, Vibration ,4-axis, 8-button joystick w/view finder"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa020,
L"USB,4-Axis,10-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa021,
L"USB,4-Axis,12-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa022,
L"USB,4-Axis,14-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa023,
L"USB,4-Axis,16-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa024,
L"4axis,12button vibrition audio gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa025,
L"4axis,12button vibrition audio gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa130,
L"USB Wireless 2.4GHz Gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa131,
L"USB Wireless 2.4GHz Joystick"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa132,
L"USB Wireless 2.4GHz Wheelpad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa133,
L"USB Wireless 2.4GHz Wheel&Gamepad"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa202,
L"ForceFeedbackWheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xa209,
L"MetalStrike FF"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb000,
L"USB,4-Axis,12-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb001,
L"USB,4-Axis,12-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb002,
L"Vibration,12-Button USB Wheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb005,
L"USB,12-Button Wheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb008,
L"USB Wireless 2.4GHz Wheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb009,
L"USB,12-Button  Wheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00a,
L"PSX/USB converter"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00b,
L"PSX/USB converter"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00c,
L"PSX/USB converter"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00d,
L"PSX/USB converter"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00e,
L"4-Axis,12-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb00f,
L"USB,5-Axis,10-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb010,
L"MetalStrike Pro"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb012,
L"Wireless MetalStrike"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb013,
L"USB,Wiress  2.4GHZ Joystick"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb016,
L"USB,5-Axis,10-Button with POV"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xb018,
L"TW6 Wheel"
},
{
0x0583,
L"Padix Co., Ltd (Rockfire)",
0xff60,
L"USB Wireless VibrationPad"
},
{
0x0584,
L"RATOC System, Inc.",
0x0008,
L"Fujifilm MemoryCard ReaderWriter"
},
{
0x0584,
L"RATOC System, Inc.",
0x0220,
L"U2SCX SCSI Converter"
},
{
0x0584,
L"RATOC System, Inc.",
0x0304,
L"U2SCX-LVD (SCSI Converter)"
},
{
0x0584,
L"RATOC System, Inc.",
0xb000,
L"REX-USB60"
},
{
0x0584,
L"RATOC System, Inc.",
0xb020,
L"REX-USB60F"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0001,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0002,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0003,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0004,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0005,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0006,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0007,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0008,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x0009,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000a,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000b,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000c,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000d,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000e,
L"Digital Camera"
},
{
0x0585,
L"FlashPoint Technology, Inc.",
0x000f,
L"Digital Camera"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x0025,
L"802.11b/g/n USB Wireless Network Adapter"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x0100,
L"omni.net"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x0102,
L"omni.net II ISDN TA [HFC-S]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x0110,
L"omni.net Plus"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x1000,
L"omni.net LCD Plus - ISDN TA"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x1500,
L"Omni 56K Plus"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x2011,
L"Scorpion-980N keyboard"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3304,
L"LAN Modem"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3309,
L"ADSL Modem Prestige 600 series"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x330a,
L"ADSL Modem Interface"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x330e,
L"USB Broadband ADSL Modem Rev 1.10"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3400,
L"ZyAIR B-220 IEEE 802.11b Adapter"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3401,
L"ZyAIR G-220 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3402,
L"ZyAIR G-220F 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3403,
L"AG-200 802.11abg Wireless Adapter [Atheros AR5523]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3407,
L"G-200 v2 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3408,
L"G-260 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3409,
L"AG-225H 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x340a,
L"M-202 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x340c,
L"G-270S 802.11bg Wireless Adapter [Atheros AR5523]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x340f,
L"G-220 v2 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3410,
L"ZyAIR G-202 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3412,
L"802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3413,
L"ZyAIR AG-225H v2 802.11bg"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3415,
L"G-210H 802.11g Wireless Adapter"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3416,
L"NWD-210N 802.11b/g/n-draft wireless adapter"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3417,
L"NWD271N 802.11n Wireless Adapter [Atheros AR9001U-(2)NG]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3418,
L"NWD211AN 802.11abgn Wireless Adapter [Ralink RT2870]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3419,
L"G-220 v3 802.11bg Wireless Adapter [ZyDAS ZD1211B]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x341a,
L"NWD-270N Wireless N-lite USB Adapter"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x341e,
L"NWD2105 802.11bgn Wireless Adapter [Ralink RT3070]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x341f,
L"NWD2205 802.11n Wireless N Adapter [Realtek RTL8192CU]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x3425,
L"NWD6505 802.11a/b/g/n/ac Wireless Adapter [MediaTek MT7610U]"
},
{
0x0586,
L"ZyXEL Communications Corp.",
0x343e,
L"N220 802.11bgn Wireless Adapter"
},
{
0x0587,
L"America Kotobuki Electronics Industries, Inc.",
0x0,
L"0"
},
{
0x0588,
L"Sapien Design",
0x0,
L"0"
},
{
0x0589,
L"Victron",
0x0,
L"0"
},
{
0x058a,
L"Nohau Corp.",
0x0,
L"0"
},
{
0x058b,
L"Infineon Technologies",
0x0015,
L"Flash Loader utility"
},
{
0x058b,
L"Infineon Technologies",
0x001c,
L"Flash Drive"
},
{
0x058b,
L"Infineon Technologies",
0x0041,
L"Flash Loader utility"
},
{
0x058c,
L"In Focus Systems",
0x0007,
L"Flash"
},
{
0x058c,
L"In Focus Systems",
0x0008,
L"LP130"
},
{
0x058c,
L"In Focus Systems",
0x000a,
L"LP530"
},
{
0x058c,
L"In Focus Systems",
0x0010,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0011,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0012,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0013,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0014,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0015,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0016,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0017,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0018,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x0019,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001a,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001b,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001c,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001d,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001e,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0x001f,
L"Projector"
},
{
0x058c,
L"In Focus Systems",
0xffe5,
L"IN34 Projector"
},
{
0x058c,
L"In Focus Systems",
0xffeb,
L"Projector IN76"
},
{
0x058d,
L"Micrel Semiconductor",
0x0,
L"0"
},
{
0x058e,
L"Tripath Technology, Inc.",
0x0,
L"0"
},
{
0x058f,
L"Alcor Micro Corp.",
0x1234,
L"Flash Drive"
},
{
0x058f,
L"Alcor Micro Corp.",
0x2412,
L"SCard R/W CSR-145"
},
{
0x058f,
L"Alcor Micro Corp.",
0x2802,
L"Monterey Keyboard"
},
{
0x058f,
L"Alcor Micro Corp.",
0x5492,
L"Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6232,
L"Hi-Speed 16-in-1 Flash Card Reader/Writer"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6254,
L"USB Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6331,
L"SD/MMC/MS Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6332,
L"Multi-Function Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6335,
L"SD/MMC Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6360,
L"Multimedia Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6361,
L"Multimedia Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6362,
L"Flash Card Reader/Writer"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6364,
L"AU6477 Card Reader Controller"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6366,
L"Multi Flash Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6377,
L"AU6375 4-LUN card reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6386,
L"Memory Card"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6387,
L"Flash Drive"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6390,
L"USB 2.0-IDE bridge"
},
{
0x058f,
L"Alcor Micro Corp.",
0x6391,
L"IDE Bridge"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9213,
L"MacAlly Kbd Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9215,
L"AU9814 Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9254,
L"Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9310,
L"Mass Storage (UID4/5A & UID7A)"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9320,
L"Micro Storage Driver for Win98"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9321,
L"Micro Storage Driver for Win98"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9330,
L"SD Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9331,
L"Micro Storage Driver for Win98"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9340,
L"Delkin eFilm Reader-32"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9350,
L"Delkin eFilm Reader-32"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9360,
L"8-in-1 Media Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9361,
L"Multimedia Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9368,
L"Multimedia Card Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9380,
L"Flash Drive"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9381,
L"Flash Drive"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9382,
L"Acer/Sweex Flash drive"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9384,
L"qdi U2Disk T209M"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9410,
L"Keyboard"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9472,
L"Keyboard Hub"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9510,
L"ChunghwaTL USB02 Smartcard Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9520,
L"Watchdata W 1981"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9540,
L"AU9540 Smartcard Reader"
},
{
0x058f,
L"Alcor Micro Corp.",
0x9720,
L"USB-Serial Adapter"
},
{
0x058f,
L"Alcor Micro Corp.",
0xa014,
L"Asus Integrated Webcam"
},
{
0x058f,
L"Alcor Micro Corp.",
0xb002,
L"Acer Integrated Webcam"
},
{
0x0590,
L"Omron Corp.",
0x0004,
L"Cable Modem"
},
{
0x0590,
L"Omron Corp.",
0x000b,
L"MR56SVS"
},
{
0x0590,
L"Omron Corp.",
0x0028,
L"HJ-720IT / HEM-7080IT-E / HEM-790IT"
},
{
0x0591,
L"Questra Consulting",
0x0,
L"0"
},
{
0x0592,
L"Powerware Corp.",
0x0002,
L"UPS (X-Slot)"
},
{
0x0593,
L"Incite",
0x0,
L"0"
},
{
0x0594,
L"Princeton Graphic Systems",
0x0,
L"0"
},
{
0x0595,
L"Zoran Microelectronics, Ltd",
0x1001,
L"Digitrex DSC-1300/DSC-2100 (mass storage mode)"
},
{
0x0595,
L"Zoran Microelectronics, Ltd",
0x2002,
L"DIGITAL STILL CAMERA 6M 4X"
},
{
0x0595,
L"Zoran Microelectronics, Ltd",
0x4343,
L"Digital Camera EX-20 DSC"
},
{
0x0596,
L"MicroTouch Systems, Inc.",
0x0001,
L"Touchscreen"
},
{
0x0596,
L"MicroTouch Systems, Inc.",
0x0002,
L"Touch Screen Controller"
},
{
0x0596,
L"MicroTouch Systems, Inc.",
0x0500,
L"PCT Multitouch HID Controller"
},
{
0x0596,
L"MicroTouch Systems, Inc.",
0x0543,
L"DELL XPS touchscreen"
},
{
0x0597,
L"Trisignal Communications",
0x0,
L"0"
},
{
0x0598,
L"Niigata Canotec Co., Inc.",
0x0,
L"0"
},
{
0x0599,
L"Brilliance Semiconductor, Inc.",
0x0,
L"0"
},
{
0x059a,
L"Spectrum Signal Processing, Inc.",
0x0,
L"0"
},
{
0x059b,
L"Iomega Corp.",
0x0001,
L"Zip 100 (Type 1)"
},
{
0x059b,
L"Iomega Corp.",
0x000b,
L"Zip 100 (Type 2)"
},
{
0x059b,
L"Iomega Corp.",
0x0021,
L"Win98 Disk Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0030,
L"Zip 250 (Ver 1)"
},
{
0x059b,
L"Iomega Corp.",
0x0031,
L"Zip 100 (Type 3)"
},
{
0x059b,
L"Iomega Corp.",
0x0032,
L"Zip 250 (Ver 2)"
},
{
0x059b,
L"Iomega Corp.",
0x0034,
L"Zip 100 Driver"
},
{
0x059b,
L"Iomega Corp.",
0x0037,
L"Zip 750 MB"
},
{
0x059b,
L"Iomega Corp.",
0x0040,
L"SCSI Bridge"
},
{
0x059b,
L"Iomega Corp.",
0x0042,
L"Rev 70 GB"
},
{
0x059b,
L"Iomega Corp.",
0x0050,
L"Zip CD 650 Writer"
},
{
0x059b,
L"Iomega Corp.",
0x0053,
L"CDRW55292EXT CD-RW External Drive"
},
{
0x059b,
L"Iomega Corp.",
0x0056,
L"External CD-RW Drive Enclosure"
},
{
0x059b,
L"Iomega Corp.",
0x0057,
L"Mass Storage Device"
},
{
0x059b,
L"Iomega Corp.",
0x005d,
L"Mass Storage Device"
},
{
0x059b,
L"Iomega Corp.",
0x005f,
L"CDRW64892EXT3-C CD-RW 52x24x52x External Drive"
},
{
0x059b,
L"Iomega Corp.",
0x0060,
L"PCMCIA PocketZip Dock"
},
{
0x059b,
L"Iomega Corp.",
0x0061,
L"Varo PocketZip 40 MP3 Player"
},
{
0x059b,
L"Iomega Corp.",
0x006d,
L"HipZip MP3 Player"
},
{
0x059b,
L"Iomega Corp.",
0x0070,
L"eGo Portable Hard Drive"
},
{
0x059b,
L"Iomega Corp.",
0x007c,
L"Ultra Max USB/1394"
},
{
0x059b,
L"Iomega Corp.",
0x007d,
L"HTC42606 0G9AT00 [Iomega HDD]"
},
{
0x059b,
L"Iomega Corp.",
0x007e,
L"Mini 256MB/512MB Flash Drive [IOM2D5]"
},
{
0x059b,
L"Iomega Corp.",
0x00db,
L"FotoShow Zip 250 Driver"
},
{
0x059b,
L"Iomega Corp.",
0x0150,
L"Mass Storage Device"
},
{
0x059b,
L"Iomega Corp.",
0x015d,
L"Super DVD Writer"
},
{
0x059b,
L"Iomega Corp.",
0x0173,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0174,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0176,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0177,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0178,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x0179,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x059b,
L"Iomega Corp.",
0x017a,
L"HDD"
},
{
0x059b,
L"Iomega Corp.",
0x017b,
L"HDD/1394A"
},
{
0x059b,
L"Iomega Corp.",
0x017c,
L"HDD/1394B"
},
{
0x059b,
L"Iomega Corp.",
0x0251,
L"Optical"
},
{
0x059b,
L"Iomega Corp.",
0x0252,
L"Optical"
},
{
0x059b,
L"Iomega Corp.",
0x0275,
L"ST332082 0A"
},
{
0x059b,
L"Iomega Corp.",
0x0278,
L"LDHD-UPS [Professional Desktop Hard Drive eSATA / USB2.0]"
},
{
0x059b,
L"Iomega Corp.",
0x027a,
L"LPHD250-U [Portable Hard Drive Silver Series 250 Go]"
},
{
0x059b,
L"Iomega Corp.",
0x0470,
L"Prestige Portable Hard Drive"
},
{
0x059b,
L"Iomega Corp.",
0x047a,
L"Select Portable Hard Drive"
},
{
0x059b,
L"Iomega Corp.",
0x0571,
L"Prestige Portable Hard Drive"
},
{
0x059b,
L"Iomega Corp.",
0x0579,
L"eGo Portable Hard Drive"
},
{
0x059b,
L"Iomega Corp.",
0x1052,
L"DVD+RW External Drive"
},
{
0x059c,
L"A-Trend Technology Co., Ltd",
0x0,
L"0"
},
{
0x059d,
L"Advanced Input Devices",
0x0,
L"0"
},
{
0x059e,
L"Intelligent Instrumentation",
0x0,
L"0"
},
{
0x059f,
L"LaCie, Ltd",
0x0201,
L"StudioDrive USB2"
},
{
0x059f,
L"LaCie, Ltd",
0x0202,
L"StudioDrive USB2"
},
{
0x059f,
L"LaCie, Ltd",
0x0203,
L"StudioDrive USB2"
},
{
0x059f,
L"LaCie, Ltd",
0x0211,
L"PocketDrive"
},
{
0x059f,
L"LaCie, Ltd",
0x0212,
L"PocketDrive"
},
{
0x059f,
L"LaCie, Ltd",
0x0213,
L"PocketDrive USB2"
},
{
0x059f,
L"LaCie, Ltd",
0x0323,
L"LaCie d2 Drive USB2"
},
{
0x059f,
L"LaCie, Ltd",
0x0421,
L"Big Disk G465"
},
{
0x059f,
L"LaCie, Ltd",
0x0525,
L"BigDisk Extreme 500"
},
{
0x059f,
L"LaCie, Ltd",
0x0641,
L"Mobile Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x0829,
L"BigDisk Extreme+"
},
{
0x059f,
L"LaCie, Ltd",
0x1004,
L"Little Disk 20 GB"
},
{
0x059f,
L"LaCie, Ltd",
0x100c,
L"Rugged Triple Interface Mobile Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1010,
L"Desktop Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1016,
L"Desktop Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1018,
L"Desktop Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1019,
L"Desktop Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1021,
L"Little Disk"
},
{
0x059f,
L"LaCie, Ltd",
0x1027,
L"iamaKey V2"
},
{
0x059f,
L"LaCie, Ltd",
0x102a,
L"Rikiki Hard Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1049,
L"rikiki Harddrive"
},
{
0x059f,
L"LaCie, Ltd",
0x1052,
L"P'9220 Mobile Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x1061,
L"Rugged USB3-FW"
},
{
0x059f,
L"LaCie, Ltd",
0x1064,
L"Rugged 16 and 32 GB"
},
{
0x059f,
L"LaCie, Ltd",
0x106b,
L"Rugged Mini HDD"
},
{
0x059f,
L"LaCie, Ltd",
0x106d,
L"Porsche Design Mobile Drive"
},
{
0x059f,
L"LaCie, Ltd",
0x106e,
L"Porsche Design Desktop Drive"
},
{
0x059f,
L"LaCie, Ltd",
0xa601,
L"HardDrive"
},
{
0x059f,
L"LaCie, Ltd",
0xa602,
L"CD R/W"
},
{
0x05a0,
L"Vetronix Corp.",
0x0,
L"0"
},
{
0x05a1,
L"USC Corp.",
0x0,
L"0"
},
{
0x05a2,
L"Fuji Film Microdevices Co., Ltd",
0x0,
L"0"
},
{
0x05a3,
L"ARC International",
0x8388,
L"Marvell 88W8388 802.11a/b/g WLAN"
},
{
0x05a3,
L"ARC International",
0x9230,
L"Camera"
},
{
0x05a3,
L"ARC International",
0x9320,
L"Camera"
},
{
0x05a3,
L"ARC International",
0x9331,
L"Camera"
},
{
0x05a3,
L"ARC International",
0x9422,
L"Camera"
},
{
0x05a3,
L"ARC International",
0x9520,
L"Camera"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x1000,
L"WKB-1000S Wireless Ergo Keyboard with Touchpad"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x2000,
L"WKB-2000 Wireless Keyboard with Touchpad"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9720,
L"Keyboard Mouse"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9722,
L"Keyboard"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9731,
L"MCK-600W/MCK-800USB Keyboard"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9783,
L"Wireless Keypad"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9837,
L"Targus Number Keypad"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9862,
L"Targus Number Keypad (Composite Device)"
},
{
0x05a4,
L"Ortek Technology, Inc.",
0x9881,
L"IR receiver [VRC-1100 Vista MCE Remote Control]"
},
{
0x05a5,
L"Sampo Technology Corp.",
0x0,
L"0"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0001,
L"CVA124 Cable Voice Adapter (WDM)"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0002,
L"CVA122 Cable Voice Adapter (WDM)"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0003,
L"CVA124E Cable Voice Adapter (WDM)"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0004,
L"CVA122E Cable Voice Adapter (WDM)"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0a00,
L"Integrated Management Controller Hub"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0a01,
L"Virtual Keyboard/Mouse"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0a02,
L"Virtual Mass Storage"
},
{
0x05a6,
L"Cisco Systems, Inc.",
0x0a03,
L"Virtual Ethernet/RNDIS"
},
{
0x05a7,
L"Bose Corp.",
0x4000,
L"Bluetooth Headset"
},
{
0x05a7,
L"Bose Corp.",
0x4001,
L"Bluetooth Headset in DFU mode"
},
{
0x05a7,
L"Bose Corp.",
0x4002,
L"Bluetooth Headset Series 2"
},
{
0x05a7,
L"Bose Corp.",
0x4003,
L"Bluetooth Headset Series 2 in DFU mode"
},
{
0x05a7,
L"Bose Corp.",
0xbc50,
L"SoundLink Wireless Mobile speaker"
},
{
0x05a7,
L"Bose Corp.",
0xbc51,
L"SoundLink Wireless Mobile speaker in DFU mode"
},
{
0x05a8,
L"Spacetec IMC Corp.",
0x0,
L"0"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x0511,
L"OV511 Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x0518,
L"OV518 Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x0519,
L"OV519 Microphone"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x1550,
L"VEHO Filmscanner"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x2640,
L"OV2640 Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x2643,
L"Monitor Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x264b,
L"Monitor Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x2800,
L"SuperCAM"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x4519,
L"Webcam Classic"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x7670,
L"OV7670 Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x8065,
L"GAIA Sensor FPGA Demo Board"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0x8519,
L"OV519 Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0xa511,
L"OV511+ Webcam"
},
{
0x05a9,
L"OmniVision Technologies, Inc.",
0xa518,
L"D-Link DSB-C310 Webcam"
},
{
0x05aa,
L"Utilux South China, Ltd",
0x0,
L"0"
},
{
0x05ab,
L"In-System Design",
0x0002,
L"Parallel Port"
},
{
0x05ab,
L"In-System Design",
0x0030,
L"Storage Adapter V2 (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0031,
L"ATA Bridge"
},
{
0x05ab,
L"In-System Design",
0x0060,
L"USB 2.0 ATA Bridge"
},
{
0x05ab,
L"In-System Design",
0x0061,
L"Storage Adapter V3 (TPP-I)"
},
{
0x05ab,
L"In-System Design",
0x0101,
L"Storage Adapter (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0130,
L"Compact Flash and Microdrive Reader (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0200,
L"USS725 ATA Bridge"
},
{
0x05ab,
L"In-System Design",
0x0201,
L"Storage Adapter (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0202,
L"ATA Bridge"
},
{
0x05ab,
L"In-System Design",
0x0300,
L"Portable Hard Drive (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0301,
L"Portable Hard Drive V2"
},
{
0x05ab,
L"In-System Design",
0x0350,
L"Portable Hard Drive (TPP)"
},
{
0x05ab,
L"In-System Design",
0x0351,
L"Portable Hard Drive V2"
},
{
0x05ab,
L"In-System Design",
0x081a,
L"ATA Bridge"
},
{
0x05ab,
L"In-System Design",
0x0cda,
L"ATA Bridge for CD-R/RW"
},
{
0x05ab,
L"In-System Design",
0x1001,
L"BAYI Printer Class Support"
},
{
0x05ab,
L"In-System Design",
0x5700,
L"Storage Adapter V2 (TPP)"
},
{
0x05ab,
L"In-System Design",
0x5701,
L"USB Storage Adapter V2"
},
{
0x05ab,
L"In-System Design",
0x5901,
L"Smart Board (TPP)"
},
{
0x05ab,
L"In-System Design",
0x5a01,
L"ATI Storage Adapter (TPP)"
},
{
0x05ab,
L"In-System Design",
0x5d01,
L"DataBook Adapter (TPP)"
},
{
0x05ac,
L"Apple, Inc.",
0x0201,
L"USB Keyboard [Alps or Logitech, M2452]"
},
{
0x05ac,
L"Apple, Inc.",
0x0202,
L"Keyboard [ALPS]"
},
{
0x05ac,
L"Apple, Inc.",
0x0205,
L"Extended Keyboard [Mitsumi]"
},
{
0x05ac,
L"Apple, Inc.",
0x0206,
L"Extended Keyboard [Mitsumi]"
},
{
0x05ac,
L"Apple, Inc.",
0x020b,
L"Pro Keyboard [Mitsumi, A1048/US layout]"
},
{
0x05ac,
L"Apple, Inc.",
0x020c,
L"Extended Keyboard [Mitsumi]"
},
{
0x05ac,
L"Apple, Inc.",
0x020d,
L"Pro Keyboard [Mitsumi, A1048/JIS layout]"
},
{
0x05ac,
L"Apple, Inc.",
0x020e,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x020f,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0214,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0215,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0216,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0217,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0218,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0219,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x021a,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x021b,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x021c,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x021d,
L"Aluminum Mini Keyboard (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x021e,
L"Aluminum Mini Keyboard (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x021f,
L"Aluminum Mini Keyboard (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0220,
L"Aluminum Keyboard (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0221,
L"Aluminum Keyboard (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0222,
L"Aluminum Keyboard (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0223,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0224,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0225,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0229,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x022a,
L"Internal Keyboard/Trackpad (MacBook Pro) (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x022b,
L"Internal Keyboard/Trackpad (MacBook Pro) (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0230,
L"Internal Keyboard/Trackpad (MacBook Pro 4,1) (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0231,
L"Internal Keyboard/Trackpad (MacBook Pro 4,1) (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0232,
L"Internal Keyboard/Trackpad (MacBook Pro 4,1) (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0236,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0237,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0238,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x023f,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0240,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0241,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0242,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0243,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0244,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0245,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0246,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0247,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x024a,
L"Internal Keyboard/Trackpad (MacBook Air) (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x024d,
L"Internal Keyboard/Trackpad (MacBook Air) (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0250,
L"Aluminium Keyboard (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0252,
L"Internal Keyboard/Trackpad (ANSI)"
},
{
0x05ac,
L"Apple, Inc.",
0x0253,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0254,
L"Internal Keyboard/Trackpad (JIS)"
},
{
0x05ac,
L"Apple, Inc.",
0x0259,
L"Internal Keyboard/Trackpad"
},
{
0x05ac,
L"Apple, Inc.",
0x0263,
L"Apple Internal Keyboard / Trackpad (MacBook Retina)"
},
{
0x05ac,
L"Apple, Inc.",
0x0267,
L"Magic Keyboard A1644"
},
{
0x05ac,
L"Apple, Inc.",
0x0269,
L"Magic Mouse 2 (Lightning connector)"
},
{
0x05ac,
L"Apple, Inc.",
0x0273,
L"Internal Keyboard/Trackpad (ISO)"
},
{
0x05ac,
L"Apple, Inc.",
0x0301,
L"USB Mouse [Mitsumi, M4848]"
},
{
0x05ac,
L"Apple, Inc.",
0x0302,
L"Optical Mouse [Fujitsu]"
},
{
0x05ac,
L"Apple, Inc.",
0x0304,
L"Mighty Mouse [Mitsumi, M1152]"
},
{
0x05ac,
L"Apple, Inc.",
0x0306,
L"Optical USB Mouse [Fujitsu]"
},
{
0x05ac,
L"Apple, Inc.",
0x030a,
L"Internal Trackpad"
},
{
0x05ac,
L"Apple, Inc.",
0x030b,
L"Internal Trackpad"
},
{
0x05ac,
L"Apple, Inc.",
0x030d,
L"Magic Mouse"
},
{
0x05ac,
L"Apple, Inc.",
0x030e,
L"MC380Z/A [Magic Trackpad]"
},
{
0x05ac,
L"Apple, Inc.",
0x1000,
L"Bluetooth HCI MacBookPro (HID mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1001,
L"Keyboard Hub [ALPS]"
},
{
0x05ac,
L"Apple, Inc.",
0x1002,
L"Extended Keyboard Hub [Mitsumi]"
},
{
0x05ac,
L"Apple, Inc.",
0x1003,
L"Hub in Pro Keyboard [Mitsumi, A1048]"
},
{
0x05ac,
L"Apple, Inc.",
0x1006,
L"Hub in Aluminum Keyboard"
},
{
0x05ac,
L"Apple, Inc.",
0x1008,
L"Mini DisplayPort to Dual-Link DVI Adapter"
},
{
0x05ac,
L"Apple, Inc.",
0x1101,
L"Speakers"
},
{
0x05ac,
L"Apple, Inc.",
0x1105,
L"Audio in LED Cinema Display"
},
{
0x05ac,
L"Apple, Inc.",
0x1107,
L"Thunderbolt Display Audio"
},
{
0x05ac,
L"Apple, Inc.",
0x1112,
L"FaceTime HD Camera (Display)"
},
{
0x05ac,
L"Apple, Inc.",
0x1201,
L"3G iPod"
},
{
0x05ac,
L"Apple, Inc.",
0x1202,
L"iPod 2G"
},
{
0x05ac,
L"Apple, Inc.",
0x1203,
L"iPod 4.Gen Grayscale 40G"
},
{
0x05ac,
L"Apple, Inc.",
0x1204,
L"iPod [Photo]"
},
{
0x05ac,
L"Apple, Inc.",
0x1205,
L"iPod Mini 1.Gen/2.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1206,
L"iPod '06'"
},
{
0x05ac,
L"Apple, Inc.",
0x1207,
L"iPod '07'"
},
{
0x05ac,
L"Apple, Inc.",
0x1208,
L"iPod '08'"
},
{
0x05ac,
L"Apple, Inc.",
0x1209,
L"iPod Video"
},
{
0x05ac,
L"Apple, Inc.",
0x120a,
L"iPod Nano"
},
{
0x05ac,
L"Apple, Inc.",
0x1223,
L"iPod Classic/Nano 3.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1224,
L"iPod Nano 3.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1225,
L"iPod Nano 4.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1227,
L"Mobile Device (DFU Mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1231,
L"iPod Nano 5.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1240,
L"iPod Nano 2.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1242,
L"iPod Nano 3.Gen (WTF mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1243,
L"iPod Nano 4.Gen (WTF mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1245,
L"iPod Classic 3.Gen (WTF mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1246,
L"iPod Nano 5.Gen (WTF mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1255,
L"iPod Nano 4.Gen (DFU mode)"
},
{
0x05ac,
L"Apple, Inc.",
0x1260,
L"iPod Nano 2.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1261,
L"iPod Classic"
},
{
0x05ac,
L"Apple, Inc.",
0x1262,
L"iPod Nano 3.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1263,
L"iPod Nano 4.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1265,
L"iPod Nano 5.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1266,
L"iPod Nano 6.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1267,
L"iPod Nano 7.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1281,
L"Apple Mobile Device [Recovery Mode]"
},
{
0x05ac,
L"Apple, Inc.",
0x1290,
L"iPhone"
},
{
0x05ac,
L"Apple, Inc.",
0x1291,
L"iPod Touch 1.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1292,
L"iPhone 3G"
},
{
0x05ac,
L"Apple, Inc.",
0x1293,
L"iPod Touch 2.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1294,
L"iPhone 3GS"
},
{
0x05ac,
L"Apple, Inc.",
0x1296,
L"iPod Touch 3.Gen (8GB)"
},
{
0x05ac,
L"Apple, Inc.",
0x1297,
L"iPhone 4"
},
{
0x05ac,
L"Apple, Inc.",
0x1299,
L"iPod Touch 3.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x129a,
L"iPad"
},
{
0x05ac,
L"Apple, Inc.",
0x129c,
L"iPhone 4(CDMA)"
},
{
0x05ac,
L"Apple, Inc.",
0x129e,
L"iPod Touch 4.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x129f,
L"iPad 2"
},
{
0x05ac,
L"Apple, Inc.",
0x12a0,
L"iPhone 4S"
},
{
0x05ac,
L"Apple, Inc.",
0x12a2,
L"iPad 2 (3G; 64GB)"
},
{
0x05ac,
L"Apple, Inc.",
0x12a3,
L"iPad 2 (CDMA)"
},
{
0x05ac,
L"Apple, Inc.",
0x12a4,
L"iPad 3 (wifi)"
},
{
0x05ac,
L"Apple, Inc.",
0x12a5,
L"iPad 3 (CDMA)"
},
{
0x05ac,
L"Apple, Inc.",
0x12a6,
L"iPad 3 (3G, 16 GB)"
},
{
0x05ac,
L"Apple, Inc.",
0x12a8,
L"iPhone5/5C/5S/6"
},
{
0x05ac,
L"Apple, Inc.",
0x12a9,
L"iPad 2"
},
{
0x05ac,
L"Apple, Inc.",
0x12aa,
L"iPod Touch 5.Gen [A1421]"
},
{
0x05ac,
L"Apple, Inc.",
0x12ab,
L"iPad 4/Mini1"
},
{
0x05ac,
L"Apple, Inc.",
0x1300,
L"iPod Shuffle"
},
{
0x05ac,
L"Apple, Inc.",
0x1301,
L"iPod Shuffle 2.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1302,
L"iPod Shuffle 3.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1303,
L"iPod Shuffle 4.Gen"
},
{
0x05ac,
L"Apple, Inc.",
0x1401,
L"Modem"
},
{
0x05ac,
L"Apple, Inc.",
0x1402,
L"Ethernet Adapter [A1277]"
},
{
0x05ac,
L"Apple, Inc.",
0x1500,
L"SuperDrive [A1379]"
},
{
0x05ac,
L"Apple, Inc.",
0x8005,
L"OHCI Root Hub Simulation"
},
{
0x05ac,
L"Apple, Inc.",
0x8006,
L"EHCI Root Hub Simulation"
},
{
0x05ac,
L"Apple, Inc.",
0x8007,
L"XHCI Root Hub USB 2.0 Simulation"
},
{
0x05ac,
L"Apple, Inc.",
0x8202,
L"HCF V.90 Data/Fax Modem"
},
{
0x05ac,
L"Apple, Inc.",
0x8203,
L"Bluetooth HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8204,
L"Built-in Bluetooth 2.0+EDR HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8205,
L"Bluetooth HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8206,
L"Bluetooth HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x820a,
L"Bluetooth HID Keyboard"
},
{
0x05ac,
L"Apple, Inc.",
0x820b,
L"Bluetooth HID Mouse"
},
{
0x05ac,
L"Apple, Inc.",
0x820f,
L"Bluetooth HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8213,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8215,
L"Built-in Bluetooth 2.0+EDR HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8216,
L"Bluetooth USB Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8217,
L"Bluetooth USB Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8218,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x821a,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x821f,
L"Built-in Bluetooth 2.0+EDR HCI"
},
{
0x05ac,
L"Apple, Inc.",
0x8240,
L"Built-in IR Receiver"
},
{
0x05ac,
L"Apple, Inc.",
0x8241,
L"Built-in IR Receiver"
},
{
0x05ac,
L"Apple, Inc.",
0x8242,
L"Built-in IR Receiver"
},
{
0x05ac,
L"Apple, Inc.",
0x8281,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8286,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x828c,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8290,
L"Bluetooth Host Controller"
},
{
0x05ac,
L"Apple, Inc.",
0x8300,
L"Built-in iSight (no firmware loaded)"
},
{
0x05ac,
L"Apple, Inc.",
0x8403,
L"Internal Memory Card Reader"
},
{
0x05ac,
L"Apple, Inc.",
0x8404,
L"Internal Memory Card Reader"
},
{
0x05ac,
L"Apple, Inc.",
0x8501,
L"Built-in iSight [Micron]"
},
{
0x05ac,
L"Apple, Inc.",
0x8502,
L"Built-in iSight"
},
{
0x05ac,
L"Apple, Inc.",
0x8505,
L"Built-in iSight"
},
{
0x05ac,
L"Apple, Inc.",
0x8507,
L"Built-in iSight"
},
{
0x05ac,
L"Apple, Inc.",
0x8508,
L"iSight in LED Cinema Display"
},
{
0x05ac,
L"Apple, Inc.",
0x8509,
L"FaceTime HD Camera"
},
{
0x05ac,
L"Apple, Inc.",
0x850a,
L"FaceTime Camera"
},
{
0x05ac,
L"Apple, Inc.",
0x8510,
L"FaceTime HD Camera (Built-in)"
},
{
0x05ac,
L"Apple, Inc.",
0x911c,
L"Hub in A1082 [Cinema HD Display 23]"
},
{
0x05ac,
L"Apple, Inc.",
0x9127,
L"Hub in Thunderbolt Display"
},
{
0x05ac,
L"Apple, Inc.",
0x912f,
L"Hub in 30 Cinema Display"
},
{
0x05ac,
L"Apple, Inc.",
0x9215,
L"Studio Display 15"
},
{
0x05ac,
L"Apple, Inc.",
0x9217,
L"Studio Display 17"
},
{
0x05ac,
L"Apple, Inc.",
0x9218,
L"Cinema Display 23"
},
{
0x05ac,
L"Apple, Inc.",
0x9219,
L"Cinema Display 20"
},
{
0x05ac,
L"Apple, Inc.",
0x921c,
L"A1082 [Cinema HD Display 23 ]"
},
{
0x05ac,
L"Apple, Inc.",
0x921e,
L"Cinema Display 24"
},
{
0x05ac,
L"Apple, Inc.",
0x9221,
L"30 Cinema Display"
},
{
0x05ac,
L"Apple, Inc.",
0x9226,
L"LED Cinema Display"
},
{
0x05ac,
L"Apple, Inc.",
0x9227,
L"Thunderbolt Display"
},
{
0x05ac,
L"Apple, Inc.",
0x9232,
L"Cinema HD Display 30"
},
{
0x05ac,
L"Apple, Inc.",
0xffff,
L"Bluetooth in DFU mode - Driver"
},
{
0x05ad,
L"Y.C. Cable U.S.A., Inc.",
0x0,
L"0"
},
{
0x05ae,
L"Synopsys, Inc.",
0x0,
L"0"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x0806,
L"HP SK806A Keyboard"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x0809,
L"Wireless Keyboard and Mouse"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x0821,
L"IDE to"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x3062,
L"Cordless Keyboard"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x9167,
L"KB 9151B - 678"
},
{
0x05af,
L"Jing-Mold Enterprise Co., Ltd",
0x9267,
L"KB 9251B - 678 Mouse"
},
{
0x05b0,
L"Fountain Technologies, Inc.",
0x0,
L"0"
},
{
0x05b1,
L"First International Computer, Inc.",
0x1389,
L"Bluetooth Wireless Adapter"
},
{
0x05b4,
L"LG Semicon Co., Ltd",
0x4857,
L"M-Any DAH-210"
},
{
0x05b4,
L"LG Semicon Co., Ltd",
0x6001,
L"HYUNDAI GDS30C6001 SSFDC / MMC I/F Controller"
},
{
0x05b5,
L"Dialogic Corp.",
0x0,
L"0"
},
{
0x05b6,
L"Proxima Corp.",
0x0,
L"0"
},
{
0x05b7,
L"Medianix Semiconductor, Inc.",
0x0,
L"0"
},
{
0x05b8,
L"Agiler, Inc.",
0x3002,
L"Scroll Mouse"
},
{
0x05b8,
L"Agiler, Inc.",
0x3223,
L"ISY Wireless Presenter"
},
{
0x05b9,
L"Philips Research Laboratories",
0x0,
L"0"
},
{
0x05ba,
L"DigitalPersona, Inc.",
0x0007,
L"Fingerprint Reader"
},
{
0x05ba,
L"DigitalPersona, Inc.",
0x0008,
L"Fingerprint Reader"
},
{
0x05ba,
L"DigitalPersona, Inc.",
0x000a,
L"Fingerprint Reader"
},
{
0x05bb,
L"Grey Cell Systems",
0x0,
L"0"
},
{
0x05bc,
L"3G Green Green Globe Co., Ltd",
0x0004,
L"Trackball"
},
{
0x05bd,
L"RAFI GmbH & Co. KG",
0x0,
L"0"
},
{
0x05be,
L"Tyco Electronics (Raychem)",
0x0,
L"0"
},
{
0x05bf,
L"S & S Research",
0x0,
L"0"
},
{
0x05c0,
L"Keil Software",
0x0,
L"0"
},
{
0x05c1,
L"Kawasaki Microelectronics, Inc.",
0x0,
L"0"
},
{
0x05c2,
L"Media Phonics (Suisse) S.A.",
0x0,
L"0"
},
{
0x05c5,
L"Digi International, Inc.",
0x0002,
L"AccelePort USB 2"
},
{
0x05c5,
L"Digi International, Inc.",
0x0004,
L"AccelePort USB 4"
},
{
0x05c5,
L"Digi International, Inc.",
0x0008,
L"AccelePort USB 8"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x0114,
L"Select RW-200 CDMA Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x1000,
L"Mass Storage Device"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x3100,
L"CDMA Wireless Modem/Phone"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x3196,
L"CDMA Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x3197,
L"CDMA Wireless Modem/Phone"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x6000,
L"Siemens SG75"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x6503,
L"AnyData APE-540H"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x6613,
L"Onda H600/N501HS ZTE MF330"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x6764,
L"A0001 Phone [OnePlus One]"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9000,
L"SIMCom SIM5218 modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9001,
L"Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9002,
L"Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9003,
L"Quectel UC20"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9008,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9018,
L"Qualcomm HSUSB Device"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9025,
L"Qualcomm HSUSB Device"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9201,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9202,
L"Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9203,
L"Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9205,
L"Gobi 2000"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9211,
L"Acer Gobi Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9212,
L"Acer Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9214,
L"Acer Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9215,
L"Acer Gobi 2000 Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9221,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9222,
L"Gobi Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9224,
L"Sony Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9225,
L"Sony Gobi 2000 Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9231,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9234,
L"Top Global Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9235,
L"Top Global Gobi 2000 Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9244,
L"Samsung Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9245,
L"Samsung Gobi 2000 Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9264,
L"Asus Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9265,
L"Asus Gobi 2000 Wireless Modem"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9274,
L"iRex Technologies Gobi 2000 Wireless Modem (QDL mode)"
},
{
0x05c6,
L"Qualcomm, Inc.",
0x9275,
L"iRex Technologies Gobi 2000 Wireless Modem"
},
{
0x05c7,
L"Qtronix Corp.",
0x0113,
L"PC Line Mouse"
},
{
0x05c7,
L"Qtronix Corp.",
0x1001,
L"Lynx Mouse"
},
{
0x05c7,
L"Qtronix Corp.",
0x2001,
L"Keyboard"
},
{
0x05c7,
L"Qtronix Corp.",
0x2011,
L"SCorpius Keyboard"
},
{
0x05c7,
L"Qtronix Corp.",
0x6001,
L"Ten-Keypad"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x0103,
L"FO13FF-65 PC-CAM"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x010b,
L"Webcam (UVC)"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x021a,
L"HP Webcam"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x0318,
L"Webcam"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x0361,
L"SunplusIT INC. HP Truevision HD Webcam"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x036e,
L"Webcam"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x0403,
L"Webcam"
},
{
0x05c8,
L"Cheng Uei Precision Industry Co., Ltd (Foxlink)",
0x041b,
L"HP 2.0MP High Definition Webcam"
},
{
0x05c9,
L"Semtech Corp.",
0x0,
L"0"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x0101,
L"RDC-5300 Camera"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x0325,
L"Caplio GX (ptp)"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x032d,
L"Caplio GX 8 (ptp)"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x032f,
L"Caplio R3 (ptp)"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x03a1,
L"IS200e"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x0403,
L"Printing Support"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x0405,
L"Type 101"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x0406,
L"Type 102"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1803,
L"V5 camera [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1810,
L"Pavilion Webcam [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1812,
L"Pavilion Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1814,
L"HD Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1815,
L"Dell Laptop Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1820,
L"Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1830,
L"Visual Communication Camera VGP-VCC2 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1832,
L"Visual Communication Camera VGP-VCC3 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1833,
L"Visual Communication Camera VGP-VCC2 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1834,
L"Visual Communication Camera VGP-VCC2 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1835,
L"Visual Communication Camera VGP-VCC5 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1836,
L"Visual Communication Camera VGP-VCC4 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1837,
L"Visual Communication Camera VGP-VCC4 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1839,
L"Visual Communication Camera VGP-VCC6 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x183a,
L"Visual Communication Camera VGP-VCC7 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x183b,
L"Visual Communication Camera VGP-VCC8 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x183d,
L"Sony Vaio Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x183e,
L"Visual Communication Camera VGP-VCC9 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1841,
L"Fujitsu F01/ Lifebook U810 [R5U870]"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x1870,
L"Webcam 1000"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x18b0,
L"Sony Vaio Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x18b1,
L"Sony Vaio Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x18b3,
L"Sony Vaio Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x18b5,
L"Sony Vaio Integrated Webcam"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2201,
L"RDC-7 Camera"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2202,
L"Caplio RR30"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2203,
L"Caplio 300G"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2204,
L"Caplio G3"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2205,
L"Caplio RR30 / Medion MD 6126 Camera"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2206,
L"Konica DG-3Z"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2207,
L"Caplio Pro G3"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2208,
L"Caplio G4"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2209,
L"Caplio 400G wide"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220a,
L"KONICA MINOLTA DG-4Wide"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220b,
L"Caplio RX"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220c,
L"Caplio GX"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220d,
L"Caplio R1/RZ1"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220e,
L"Sea & Sea 5000G"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x220f,
L"Rollei dr5 / Rollei dr5 (PTP mode)"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2211,
L"Caplio R1S"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2212,
L"Caplio R1v Camera"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2213,
L"Caplio R2"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2214,
L"Caplio GX 8"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2215,
L"DSC 725"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2216,
L"Caplio R3"
},
{
0x05ca,
L"Ricoh Co., Ltd",
0x2222,
L"RDC-i500"
},
{
0x05cb,
L"PowerVision Technologies, Inc.",
0x1483,
L"PV8630 interface (scanners, webcams)"
},
{
0x05cc,
L"ELSA AG",
0x2100,
L"MicroLink ISDN Office"
},
{
0x05cc,
L"ELSA AG",
0x2219,
L"MicroLink ISDN"
},
{
0x05cc,
L"ELSA AG",
0x2265,
L"MicroLink 56k"
},
{
0x05cc,
L"ELSA AG",
0x2267,
L"MicroLink 56k (V.250)"
},
{
0x05cc,
L"ELSA AG",
0x2280,
L"MicroLink 56k Fun"
},
{
0x05cc,
L"ELSA AG",
0x3000,
L"Micolink USB2Ethernet [pegasus]"
},
{
0x05cc,
L"ELSA AG",
0x3100,
L"AirLancer USB-11"
},
{
0x05cc,
L"ELSA AG",
0x3363,
L"MicroLink ADSL Fun"
},
{
0x05cd,
L"Silicom, Ltd",
0x0,
L"0"
},
{
0x05ce,
L"sci-worx GmbH",
0x0,
L"0"
},
{
0x05cf,
L"Sung Forn Co., Ltd",
0x0,
L"0"
},
{
0x05d0,
L"GE Medical Systems Lunar",
0x0,
L"0"
},
{
0x05d1,
L"Brainboxes, Ltd",
0x0003,
L"Bluetooth Adapter BL-554"
},
{
0x05d2,
L"Wave Systems Corp.",
0x0,
L"0"
},
{
0x05d3,
L"Tohoku Ricoh Co., Ltd",
0x0,
L"0"
},
{
0x05d5,
L"Super Gate Technology Co., Ltd",
0x0,
L"0"
},
{
0x05d6,
L"Philips Semiconductors, CICT",
0x0,
L"0"
},
{
0x05d7,
L"Thomas & Betts Corp.",
0x0099,
L"10Mbps Ethernet [klsi]"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4001,
L"Artec Ultima 2000"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4002,
L"Artec Ultima 2000 (GT6801 based)/Lifetec LT9385/ScanMagic 1200 UB Plus Scanner"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4003,
L"Artec E+ 48U"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4004,
L"Artec E+ Pro"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4005,
L"MEM48U"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4006,
L"TRUST EASY WEBSCAN 19200"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4007,
L"TRUST 240H EASY WEBSCAN GOLD"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4008,
L"Trust Easy Webscan 19200"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4009,
L"Umax Astraslim"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x4013,
L"IT Scan 1200"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x8105,
L"Artec T1 USB TVBOX (cold)"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x8106,
L"Artec T1 USB TVBOX (warm)"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x8107,
L"Artec T1 USB TVBOX with AN2235 (cold)"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x8108,
L"Artec T1 USB TVBOX with AN2235 (warm)"
},
{
0x05d8,
L"Ultima Electronics Corp.",
0x8109,
L"Artec T1 USB2.0 TVBOX (cold"
},
{
0x05d9,
L"Axiohm Transaction Solutions",
0xa225,
L"A225 Printer"
},
{
0x05d9,
L"Axiohm Transaction Solutions",
0xa758,
L"A758 Printer"
},
{
0x05d9,
L"Axiohm Transaction Solutions",
0xa794,
L"A794 Printer"
},
{
0x05da,
L"Microtek International, Inc.",
0x0091,
L"ScanMaker X6u"
},
{
0x05da,
L"Microtek International, Inc.",
0x0093,
L"ScanMaker V6USL"
},
{
0x05da,
L"Microtek International, Inc.",
0x0094,
L"Phantom 336CX/C3"
},
{
0x05da,
L"Microtek International, Inc.",
0x0099,
L"ScanMaker X6/X6U"
},
{
0x05da,
L"Microtek International, Inc.",
0x009a,
L"Phantom C6"
},
{
0x05da,
L"Microtek International, Inc.",
0x00a0,
L"Phantom 336CX/C3 (#2)"
},
{
0x05da,
L"Microtek International, Inc.",
0x00a3,
L"ScanMaker V6USL"
},
{
0x05da,
L"Microtek International, Inc.",
0x00ac,
L"ScanMaker V6UL"
},
{
0x05da,
L"Microtek International, Inc.",
0x00b6,
L"ScanMaker V6UPL"
},
{
0x05da,
L"Microtek International, Inc.",
0x00ef,
L"ScanMaker V6UPL"
},
{
0x05da,
L"Microtek International, Inc.",
0x1006,
L"Jenoptik JD350 entrance"
},
{
0x05da,
L"Microtek International, Inc.",
0x1011,
L"NHJ Che-ez! Kiss Digital Camera"
},
{
0x05da,
L"Microtek International, Inc.",
0x1018,
L"Digital Dream Enigma 1.3"
},
{
0x05da,
L"Microtek International, Inc.",
0x1020,
L"Digital Dream l espion xtra"
},
{
0x05da,
L"Microtek International, Inc.",
0x1025,
L"Take-it Still Camera Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1026,
L"Take-it"
},
{
0x05da,
L"Microtek International, Inc.",
0x1043,
L"Take-It 1300 DSC Bulk Driver"
},
{
0x05da,
L"Microtek International, Inc.",
0x1045,
L"Take-it D1"
},
{
0x05da,
L"Microtek International, Inc.",
0x1047,
L"Take-it Camera Composite Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1048,
L"Take-it Q3"
},
{
0x05da,
L"Microtek International, Inc.",
0x1049,
L"3M Still Camera Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1051,
L"Camcorder Series"
},
{
0x05da,
L"Microtek International, Inc.",
0x1052,
L"Mass Storage Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1053,
L"Take-it DV Composite Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1054,
L"Mass Storage Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1055,
L"Digital Camera Series(536)"
},
{
0x05da,
L"Microtek International, Inc.",
0x1056,
L"Mass Storage Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1057,
L"Take-it DSC Camera Device(536)"
},
{
0x05da,
L"Microtek International, Inc.",
0x1058,
L"Mass Storage Device"
},
{
0x05da,
L"Microtek International, Inc.",
0x1059,
L"Camcorder DSC Series"
},
{
0x05da,
L"Microtek International, Inc.",
0x1060,
L"Microtek Take-it MV500"
},
{
0x05da,
L"Microtek International, Inc.",
0x2007,
L"ArtixScan DI 1210"
},
{
0x05da,
L"Microtek International, Inc.",
0x200c,
L"1394_USB2 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x200e,
L"ArtixScan DI 810"
},
{
0x05da,
L"Microtek International, Inc.",
0x2017,
L"UF ICE Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x201c,
L"4800 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x201d,
L"ArtixScan DI 1610"
},
{
0x05da,
L"Microtek International, Inc.",
0x201f,
L"4800 Scanner-ICE"
},
{
0x05da,
L"Microtek International, Inc.",
0x202e,
L"ArtixScan DI 2020"
},
{
0x05da,
L"Microtek International, Inc.",
0x208b,
L"ScanMaker 6800"
},
{
0x05da,
L"Microtek International, Inc.",
0x208f,
L"ArtixScan DI 2010"
},
{
0x05da,
L"Microtek International, Inc.",
0x209e,
L"ScanMaker 4700LP"
},
{
0x05da,
L"Microtek International, Inc.",
0x20a7,
L"ScanMaker 5600"
},
{
0x05da,
L"Microtek International, Inc.",
0x20b0,
L"ScanMaker X12USL"
},
{
0x05da,
L"Microtek International, Inc.",
0x20b1,
L"ScanMaker 8700"
},
{
0x05da,
L"Microtek International, Inc.",
0x20b4,
L"ScanMaker 4700"
},
{
0x05da,
L"Microtek International, Inc.",
0x20bd,
L"ScanMaker 5700"
},
{
0x05da,
L"Microtek International, Inc.",
0x20c9,
L"ScanMaker 6700"
},
{
0x05da,
L"Microtek International, Inc.",
0x20d2,
L"Microtek ArtixScan 1800f"
},
{
0x05da,
L"Microtek International, Inc.",
0x20d6,
L"PS4000"
},
{
0x05da,
L"Microtek International, Inc.",
0x20de,
L"ScanMaker 9800XL"
},
{
0x05da,
L"Microtek International, Inc.",
0x20e0,
L"ScanMaker 9700XL"
},
{
0x05da,
L"Microtek International, Inc.",
0x20ed,
L"ScanMaker 4700"
},
{
0x05da,
L"Microtek International, Inc.",
0x20ee,
L"Micortek ScanMaker X12USL"
},
{
0x05da,
L"Microtek International, Inc.",
0x2838,
L"RT2832U"
},
{
0x05da,
L"Microtek International, Inc.",
0x3008,
L"Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x300a,
L"4800 ICE Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x300b,
L"4800 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x300f,
L"MiniScan C5"
},
{
0x05da,
L"Microtek International, Inc.",
0x3020,
L"4800dpi Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x3021,
L"1200dpi Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x3022,
L"Scanner 4800dpi"
},
{
0x05da,
L"Microtek International, Inc.",
0x3023,
L"USB1200II Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x3025,
L"ScanMaker S460"
},
{
0x05da,
L"Microtek International, Inc.",
0x30c1,
L"USB600 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x30ce,
L"ScanMaker 3800"
},
{
0x05da,
L"Microtek International, Inc.",
0x30cf,
L"ScanMaker 4800"
},
{
0x05da,
L"Microtek International, Inc.",
0x30d4,
L"USB1200 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x30d8,
L"Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x30d9,
L"USB2400 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x30e4,
L"ScanMaker 4100"
},
{
0x05da,
L"Microtek International, Inc.",
0x30e5,
L"USB3200 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x30e6,
L"ScanMaker i320"
},
{
0x05da,
L"Microtek International, Inc.",
0x40b3,
L"ScanMaker 3600"
},
{
0x05da,
L"Microtek International, Inc.",
0x40b8,
L"ScanMaker 3700"
},
{
0x05da,
L"Microtek International, Inc.",
0x40c7,
L"ScanMaker 4600"
},
{
0x05da,
L"Microtek International, Inc.",
0x40ca,
L"ScanMaker 3600"
},
{
0x05da,
L"Microtek International, Inc.",
0x40cb,
L"ScanMaker 3700"
},
{
0x05da,
L"Microtek International, Inc.",
0x40dd,
L"ScanMaker 3750i"
},
{
0x05da,
L"Microtek International, Inc.",
0x40ff,
L"ScanMaker 3600"
},
{
0x05da,
L"Microtek International, Inc.",
0x5003,
L"Goya"
},
{
0x05da,
L"Microtek International, Inc.",
0x5013,
L"3200 Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x6072,
L"XT-3500 A4 HD Scanner"
},
{
0x05da,
L"Microtek International, Inc.",
0x80a3,
L"ScanMaker V6USL (#2)"
},
{
0x05da,
L"Microtek International, Inc.",
0x80ac,
L"ScanMaker V6UL/SpicyU"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x0003,
L"SUNTAC U-Cable type D2"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x0005,
L"SUNTAC U-Cable type P1"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x0009,
L"SUNTAC Slipper U"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x000a,
L"SUNTAC Ir-Trinity"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x000b,
L"SUNTAC U-Cable type A3"
},
{
0x05db,
L"Sun Corp. (Suntac?)",
0x0011,
L"SUNTAC U-Cable type A4"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0001,
L"jumpSHOT CompactFlash Reader"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0002,
L"JumpShot"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0003,
L"JumpShot"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0080,
L"Jumpdrive Secure 64MB"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0081,
L"RBC Compact Flash Drive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x00a7,
L"JumpDrive Impact"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0100,
L"JumpDrive PRO"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0200,
L"JumpDrive 2.0 Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0300,
L"Jumpdrive Geysr"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0301,
L"JumpDrive Classic"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0302,
L"JD Micro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0303,
L"JD Micro Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0304,
L"JD Secure II"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0310,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0311,
L"JumpDrive Classic"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0312,
L"JD Micro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0313,
L"JD Micro Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0320,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0321,
L"JD Micro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0322,
L"JD Micro Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0323,
L"UFC"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0330,
L"JumpDrive Expression"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0340,
L"JumpDrive TAD"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0350,
L"Express Card"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0400,
L"UFDC"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0401,
L"UFDC"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0403,
L"Locked B Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0405,
L"Locked C Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0407,
L"Locked D Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0409,
L"Locked E Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x040b,
L"Locked F Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x040d,
L"Locked G Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x040f,
L"Locked H Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0410,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0411,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0413,
L"Locked J Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0415,
L"Locked K Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0417,
L"Locked L Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0419,
L"Locked M Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x041b,
L"Locked N Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x041d,
L"Locked O Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x041f,
L"Locked P Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0420,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0421,
L"JumpDrive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0423,
L"Locked R Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0425,
L"Locked S Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0427,
L"Locked T Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0429,
L"Locked U Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x042b,
L"Locked V Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x042d,
L"Locked W Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x042f,
L"Locked X Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0431,
L"Locked Y Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x0433,
L"Locked Z Device"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x4d02,
L"MP3 Player"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x4d12,
L"MP3 Player"
},
{
0x05dc,
L"Lexar Media, Inc.",
0x4d30,
L"MP3 Player"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa209,
L"JumpDrive S70"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa300,
L"JumpDrive2"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa400,
L"JumpDrive trade; Pro 40-501"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa410,
L"JumpDrive 128MB/256MB"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa411,
L"JumpDrive Traveler"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa420,
L"JumpDrive Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa421,
L"JumpDrive Pro II"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa422,
L"JumpDrive Micro Pro"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa430,
L"JumpDrive Secure"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa431,
L"JumpDrive Secure II"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa432,
L"JumpDrive Classic"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa440,
L"JumpDrive Lightning"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa450,
L"JumpDrive TouchGuard"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa460,
L"JD Mercury"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa501,
L"JumpDrive Classic"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa510,
L"JumpDrive Sport"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa530,
L"JumpDrive Expression"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa531,
L"JumpDrive Secure II"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa560,
L"JumpDrive FireFly"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa701,
L"JumpDrive FireFly"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa731,
L"JumpDrive FireFly"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa762,
L"JumpDrive FireFly"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa768,
L"JumpDrive Retrax"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa790,
L"JumpDrive 2GB"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa811,
L"16GB Gizmo!"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa813,
L"16gB flash thumb drive"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa815,
L"JumpDrive V10"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa81d,
L"LJDTT16G [JumpDrive 16GB]"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa833,
L"JumpDrive S23 64GB"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xa838,
L"JumpDrive Tough"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xb002,
L"USB CF Reader"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xb018,
L"Multi-Card Reader"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xb047,
L"SDHC Reader [RW047-7000]"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xb051,
L"microSD RDR UHS-I Card Reader [LRWM03U-7000]"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xba02,
L"Workflow CFR1"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xba0a,
L"Workflow DD512"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xc753,
L"JumpDrive TwistTurn"
},
{
0x05dc,
L"Lexar Media, Inc.",
0xc75c,
L"JumpDrive V10"
},
{
0x05dd,
L"Delta Electronics, Inc.",
0xff31,
L"AWU-120"
},
{
0x05dd,
L"Delta Electronics, Inc.",
0xff32,
L"FriendlyNET AeroLAN AL2011"
},
{
0x05dd,
L"Delta Electronics, Inc.",
0xff35,
L"PCW 100 - Wireless 802.11b Adapter"
},
{
0x05dd,
L"Delta Electronics, Inc.",
0xff91,
L"2Wire PC Port Phoneline 10Mbps Adapter"
},
{
0x05df,
L"Silicon Vision, Inc.",
0x0,
L"0"
},
{
0x05e0,
L"Symbol Technologies",
0x0700,
L"Bar Code Scanner (CS1504)"
},
{
0x05e0,
L"Symbol Technologies",
0x0800,
L"Spectrum24 Wireless LAN Adapter"
},
{
0x05e0,
L"Symbol Technologies",
0x1200,
L"Bar Code Scanner"
},
{
0x05e0,
L"Symbol Technologies",
0x1701,
L"Bar Code Scanner (CDC)"
},
{
0x05e0,
L"Symbol Technologies",
0x1900,
L"SNAPI Imaging Device"
},
{
0x05e0,
L"Symbol Technologies",
0x2000,
L"MC3090 Rugged Mobile Computer"
},
{
0x05e0,
L"Symbol Technologies",
0x200d,
L"MC70 Rugged Mobile Computer"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0100,
L"802.11g + Bluetooth Wireless Adapter"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0408,
L"STK1160 Video Capture Device"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0500,
L"DC-112X Webcam"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0501,
L"DC-1125 Webcam"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0890,
L"STK011 Camera"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0892,
L"STK013 Camera"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0895,
L"STK016 Camera"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x0896,
L"STK017 Camera"
},
{
0x05e1,
L"Syntek Semiconductor Co., Ltd",
0x2010,
L"ARCTIC Sound P261 Headphones"
},
{
0x05e2,
L"ElecVision, Inc.",
0x0,
L"0"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x000a,
L"Keyboard with PS/2 Port"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x000b,
L"Mouse"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0100,
L"Nintendo Game Boy Advance SP"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0120,
L"Pacific Image Electronics PrimeFilm 1800u slide/negative scanner"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0131,
L"CF/SM Reader/Writer"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0142,
L"Multiple Slides Scanner-3600"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0143,
L"Multiple Frames Film Scanner-36series"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0145,
L"Reflecta CrystalScan 7200 Photo-Scanner"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0180,
L"Plustek Scanner"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0182,
L"Wize Media 1000"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0189,
L"ScanJet 4600 series"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x018a,
L"Xerox 6400"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0300,
L"GLUSB98PT Parallel Port"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0301,
L"USB2LPT Cable Release2"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0406,
L"Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0501,
L"GL620USB Host-Host interface"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0502,
L"GL620USB-A GeneLink USB-USB Bridge"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0503,
L"Webcam"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0504,
L"HID Keyboard Filter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0604,
L"USB 1.1 Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0605,
L"USB 2.0 Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0606,
L"USB 2.0 Hub / D-Link DUB-H4 USB 2.0 Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0607,
L"Logitech G110 Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0608,
L"Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0610,
L"4-port hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0612,
L"Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0616,
L"hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0660,
L"USB 2.0 Hub"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0700,
L"SIIG US2256 CompactFlash Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0701,
L"USB 2.0 IDE Adapter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0702,
L"USB 2.0 IDE Adapter [GL811E]"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0703,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0704,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0705,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0706,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0707,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0708,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0709,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x070a,
L"Pen Flash"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x070b,
L"DMHS1B Rev 3 DFU Adapter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x070e,
L"USB 2.0 Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x070f,
L"Pen Flash"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0710,
L"USB 2.0 33-in-1 Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0711,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0712,
L"Delkin Mass Storage Device"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0715,
L"USB 2.0 microSD Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0716,
L"USB 2.0 Multislot Card Reader/Writer"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0717,
L"All-in-1 Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0718,
L"IDE/SATA Adapter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0719,
L"SATA adapter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0722,
L"SD/MMC card reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0723,
L"GL827L SD/MMC/MS Flash Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0726,
L"SD Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0727,
L"microSD Reader/Writer"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0731,
L"GL3310 SATA 3Gb/s Bridge Controller"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0732,
L"All-in-One Cardreader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0736,
L"microSD Reader/Writer"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0738,
L"Card reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0741,
L"microSD Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0743,
L"SDXC and microSDXC CardReader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0745,
L"Logilink CR0012"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0748,
L"All-in-One Cardreader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0751,
L"microSD Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0760,
L"USB 2.0 Card Reader/Writer"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0761,
L"Genesys Mass Storage Device"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0780,
L"USBFS DFU Adapter"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x07a0,
L"Pen Flash"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0880,
L"Wasp (SL-6612)"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x0927,
L"Card Reader"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0x1205,
L"Afilias Optical Mouse H3003 / Trust Optical USB MultiColour Mouse MI-2330"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xa700,
L"Pen Flash"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xf102,
L"VX7012 TV Box"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xf103,
L"VX7012 TV Box"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xf104,
L"VX7012 TV Box"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xfd21,
L"3M TL20 Temperature Logger"
},
{
0x05e3,
L"Genesys Logic, Inc.",
0xfe00,
L"Razer Mouse"
},
{
0x05e4,
L"Red Wing Corp.",
0x0,
L"0"
},
{
0x05e5,
L"Fuji Electric Co., Ltd",
0x0,
L"0"
},
{
0x05e6,
L"Keithley Instruments",
0x0,
L"0"
},
{
0x05e8,
L"ICC, Inc.",
0x0,
L"0"
},
{
0x05e9,
L"Kawasaki LSI",
0x0008,
L"KL5KUSB101B Ethernet [klsi]"
},
{
0x05e9,
L"Kawasaki LSI",
0x0009,
L"Sony 10Mbps Ethernet [pegasus]"
},
{
0x05e9,
L"Kawasaki LSI",
0x000c,
L"USB-to-RS-232"
},
{
0x05e9,
L"Kawasaki LSI",
0x000d,
L"USB-to-RS-232"
},
{
0x05e9,
L"Kawasaki LSI",
0x0014,
L"RS-232 J104"
},
{
0x05e9,
L"Kawasaki LSI",
0x0040,
L"Ethernet Adapter"
},
{
0x05e9,
L"Kawasaki LSI",
0x2008,
L"Ethernet Adapter"
},
{
0x05eb,
L"FFC, Ltd",
0x0,
L"0"
},
{
0x05ec,
L"COM21, Inc.",
0x0,
L"0"
},
{
0x05ee,
L"Cytechinfo Inc.",
0x0,
L"0"
},
{
0x05ef,
L"AVB, Inc. [anko?]",
0x020a,
L"Top Shot Pegasus Joystick"
},
{
0x05ef,
L"AVB, Inc. [anko?]",
0x8884,
L"Mag Turbo Force Wheel"
},
{
0x05ef,
L"AVB, Inc. [anko?]",
0x8888,
L"Top Shot Force Feedback Racing Wheel"
},
{
0x05f0,
L"Canopus Co., Ltd",
0x0101,
L"DA-Port DAC"
},
{
0x05f1,
L"Compass Communications",
0x0,
L"0"
},
{
0x05f2,
L"Dexin Corp., Ltd",
0x0010,
L"AQ Mouse"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0007,
L"Kinesis Advantage PRO MPC/USB Keyboard"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0081,
L"Kinesis Integrated Hub"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x00ff,
L"VEC Footpedal"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0203,
L"Y-mouse Keyboard & Mouse Adapter"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x020b,
L"PS2 Adapter"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0232,
L"X-Keys Switch Interface, Programming Mode"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0261,
L"X-Keys Switch Interface, SPLAT Mode"
},
{
0x05f3,
L"PI Engineering, Inc.",
0x0264,
L"X-Keys Switch Interface, Composite Mode"
},
{
0x05f5,
L"Unixtar Technology, Inc.",
0x0,
L"0"
},
{
0x05f6,
L"AOC International",
0x0,
L"0"
},
{
0x05f7,
L"RFC Distribution(s) PTE, Ltd",
0x0,
L"0"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x1104,
L"Magellan 2200VS"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x1206,
L"Gryphon series (OEM mode)"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x2202,
L"Point of Sale Handheld Scanner"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x2206,
L"Gryphon series (keyboard emulation mode)"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x220c,
L"Datalogic Gryphon GD4430"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x2601,
L"Datalogic Magellan 1000i Barcode Scanner"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x2602,
L"Datalogic Magellan 1100i Barcode Scanner"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x4204,
L"Gryphon series (RS-232 emulation mode)"
},
{
0x05f9,
L"PSC Scanning, Inc.",
0x5204,
L"Datalogic Gryphon GFS4170 (config mode)"
},
{
0x05fa,
L"Siemens Telecommunications Systems, Ltd",
0x3301,
L"Keyboard with PS/2 Mouse Port"
},
{
0x05fa,
L"Siemens Telecommunications Systems, Ltd",
0x3302,
L"Keyboard"
},
{
0x05fa,
L"Siemens Telecommunications Systems, Ltd",
0x3303,
L"Keyboard with PS/2 Mouse Port"
},
{
0x05fc,
L"Harman",
0x0001,
L"Soundcraft Si Multi Digital Card"
},
{
0x05fc,
L"Harman",
0x0010,
L"Soundcraft Si MADI combo card"
},
{
0x05fc,
L"Harman",
0x7849,
L"Harman/Kardon SoundSticks"
},
{
0x05fd,
L"InterAct, Inc.",
0x0239,
L"SV-239 HammerHead Digital"
},
{
0x05fd,
L"InterAct, Inc.",
0x0251,
L"Raider Pro"
},
{
0x05fd,
L"InterAct, Inc.",
0x0253,
L"ProPad 8 Digital"
},
{
0x05fd,
L"InterAct, Inc.",
0x0286,
L"SV-286 Cyclone Digital"
},
{
0x05fd,
L"InterAct, Inc.",
0x107a,
L"PowerPad Pro X-Box pad"
},
{
0x05fd,
L"InterAct, Inc.",
0x262a,
L"3dfx HammerHead FX"
},
{
0x05fd,
L"InterAct, Inc.",
0x262f,
L"HammerHead Fx"
},
{
0x05fd,
L"InterAct, Inc.",
0xdaae,
L"Game Shark"
},
{
0x05fd,
L"InterAct, Inc.",
0xdbae,
L"Datel XBoxMC"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0001,
L"Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0003,
L"Cypress USB Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0005,
L"Viewmaster 4D Browser Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0007,
L"Twinhead Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0009,
L"Inland Pro 4500/5000 Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0011,
L"Browser Mouse"
},
{
0x05fe,
L"Chic Technology Corp.",
0x0014,
L"Gamepad"
},
{
0x05fe,
L"Chic Technology Corp.",
0x1010,
L"Optical Wireless"
},
{
0x05fe,
L"Chic Technology Corp.",
0x2001,
L"Microsoft Wireless Receiver 700"
},
{
0x05ff,
L"LeCroy Corp.",
0x0,
L"0"
},
{
0x0600,
L"Barco Display Systems",
0x0,
L"0"
},
{
0x0601,
L"Jazz Hipster Corp.",
0x0003,
L"Internet Security Co., Ltd. SecureKey"
},
{
0x0602,
L"Vista Imaging, Inc.",
0x1001,
L"ViCam Webcam"
},
{
0x0603,
L"Novatek Microelectronics Corp.",
0x00f1,
L"Keyboard (Labtec Ultra Flat Keyboard)"
},
{
0x0603,
L"Novatek Microelectronics Corp.",
0x00f2,
L"Keyboard (Labtec Ultra Flat Keyboard)"
},
{
0x0603,
L"Novatek Microelectronics Corp.",
0x6871,
L"Mouse"
},
{
0x0603,
L"Novatek Microelectronics Corp.",
0x8611,
L"NTK96550 based camera"
},
{
0x0604,
L"Jean Co., Ltd",
0x0,
L"0"
},
{
0x0605,
L"Anchor C&C Co., Ltd",
0x0,
L"0"
},
{
0x0606,
L"Royal Information Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0607,
L"Bridge Information Co., Ltd",
0x0,
L"0"
},
{
0x0608,
L"Genrad Ads",
0x0,
L"0"
},
{
0x0609,
L"SMK Manufacturing, Inc.",
0x031d,
L"eHome Infrared Receiver"
},
{
0x0609,
L"SMK Manufacturing, Inc.",
0x0322,
L"eHome Infrared Receiver"
},
{
0x0609,
L"SMK Manufacturing, Inc.",
0x0334,
L"eHome Infrared Receiver"
},
{
0x0609,
L"SMK Manufacturing, Inc.",
0xff12,
L"SMK Bluetooth Device"
},
{
0x060a,
L"Worthington Data Solutions, Inc.",
0x0,
L"0"
},
{
0x060b,
L"Solid Year",
0x0001,
L"MacAlly Keyboard"
},
{
0x060b,
L"Solid Year",
0x0230,
L"KSK-8003 UX Keyboard"
},
{
0x060b,
L"Solid Year",
0x0540,
L"DeltaCo TB-106U Keyboard"
},
{
0x060b,
L"Solid Year",
0x1006,
L"Japanese Keyboard - 260U"
},
{
0x060b,
L"Solid Year",
0x2101,
L"Keyboard"
},
{
0x060b,
L"Solid Year",
0x2231,
L"KSK-6001 UELX Keyboard"
},
{
0x060b,
L"Solid Year",
0x2270,
L"Gigabyte K8100 Aivia Gaming Keyboard"
},
{
0x060b,
L"Solid Year",
0x5253,
L"Thermaltake MEKA G-Unit Gaming Keyboard"
},
{
0x060b,
L"Solid Year",
0x5811,
L"ACK-571U Wireless Keyboard"
},
{
0x060b,
L"Solid Year",
0x5903,
L"Japanese Keyboard - 595U"
},
{
0x060b,
L"Solid Year",
0x6001,
L"SolidTek USB 2p HUB"
},
{
0x060b,
L"Solid Year",
0x6002,
L"SolidTek USB Keyboard"
},
{
0x060b,
L"Solid Year",
0x6003,
L"Japanese Keyboard - 600HM"
},
{
0x060b,
L"Solid Year",
0x6231,
L"Thermaltake eSPORTS Meka Keyboard"
},
{
0x060b,
L"Solid Year",
0x8007,
L"P-W1G1F12 VER:1 [Macally MegaCam]"
},
{
0x060b,
L"Solid Year",
0xa001,
L"Maxwell Compact Pc PM3"
},
{
0x060c,
L"EEH Datalink GmbH",
0x0,
L"0"
},
{
0x060d,
L"Auctor Corp.",
0x0,
L"0"
},
{
0x060e,
L"Transmonde Technologies, Inc.",
0x0,
L"0"
},
{
0x060f,
L"Joinsoon Electronics Mfg. Co., Ltd",
0x0,
L"0"
},
{
0x0610,
L"Costar Electronics, Inc.",
0x0,
L"0"
},
{
0x0611,
L"Totoku Electric Co., Ltd",
0x0,
L"0"
},
{
0x0613,
L"TransAct Technologies, Inc.",
0x0,
L"0"
},
{
0x0614,
L"Bio-Rad Laboratories",
0x0,
L"0"
},
{
0x0615,
L"Quabbin Wire & Cable Co., Inc.",
0x0,
L"0"
},
{
0x0616,
L"Future Techno Designs PVT, Ltd",
0x0,
L"0"
},
{
0x0617,
L"Swiss Federal Insitute of Technology",
0x000a,
L"Thymio-II"
},
{
0x0617,
L"Swiss Federal Insitute of Technology",
0x000c,
L"Thymio-II Wireless"
},
{
0x0618,
L"MacAlly",
0x0101,
L"Mouse"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0101,
L"SLP-100 Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0102,
L"SLP-200 Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0103,
L"SLP-100N Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0104,
L"SLP-200N Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0105,
L"SLP-240 Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0501,
L"SLP-440 Driver"
},
{
0x0619,
L"Seiko Instruments, Inc.",
0x0502,
L"SLP-450 Driver"
},
{
0x061a,
L"Veridicom International, Inc.",
0x0110,
L"5thSense Fingerprint Sensor"
},
{
0x061a,
L"Veridicom International, Inc.",
0x0200,
L"FPS200 Fingerprint Sensor"
},
{
0x061a,
L"Veridicom International, Inc.",
0x8200,
L"VKI-A Fingerprint Sensor/Flash Storage (dumb)"
},
{
0x061a,
L"Veridicom International, Inc.",
0x9200,
L"VKI-B Fingerprint Sensor/Flash Storage (smart)"
},
{
0x061b,
L"Promptus Communications, Inc.",
0x0,
L"0"
},
{
0x061c,
L"Act Labs, Ltd",
0x0,
L"0"
},
{
0x061d,
L"Quatech, Inc.",
0xc020,
L"SSU-100"
},
{
0x061e,
L"Nissei Electric Co.",
0x0001,
L"nissei 128DE-USB -"
},
{
0x061e,
L"Nissei Electric Co.",
0x0010,
L"nissei 128DE-PNA -"
},
{
0x0620,
L"Alaris, Inc.",
0x0004,
L"QuickVideo weeCam"
},
{
0x0620,
L"Alaris, Inc.",
0x0007,
L"QuickVideo weeCam"
},
{
0x0620,
L"Alaris, Inc.",
0x000a,
L"QuickVideo weeCam"
},
{
0x0620,
L"Alaris, Inc.",
0x000b,
L"QuickVideo weeCam"
},
{
0x0621,
L"ODU-Steckverbindungssysteme GmbH & Co. KG",
0x0,
L"0"
},
{
0x0622,
L"Iotech, Inc.",
0x0,
L"0"
},
{
0x0623,
L"Littelfuse, Inc.",
0x0,
L"0"
},
{
0x0624,
L"Avocent Corp.",
0x0248,
L"Virtual Hub"
},
{
0x0624,
L"Avocent Corp.",
0x0249,
L"Virtual Keyboard/Mouse"
},
{
0x0624,
L"Avocent Corp.",
0x0251,
L"Virtual Mass Storage"
},
{
0x0624,
L"Avocent Corp.",
0x0294,
L"Dell 03R874 KVM dongle"
},
{
0x0624,
L"Avocent Corp.",
0x0402,
L"Cisco Virtual Keyboard and Mouse"
},
{
0x0624,
L"Avocent Corp.",
0x0403,
L"Cisco Virtual Mass Storage"
},
{
0x0625,
L"TiMedia Technology Co., Ltd",
0x0,
L"0"
},
{
0x0626,
L"Nippon Systems Development Co., Ltd",
0x0,
L"0"
},
{
0x0627,
L"Adomax Technology Co., Ltd",
0x0,
L"0"
},
{
0x0628,
L"Tasking Software, Inc.",
0x0,
L"0"
},
{
0x0629,
L"Zida Technologies, Ltd",
0x0,
L"0"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x0000,
L"Optical mouse"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x0001,
L"Notebook Optical Mouse"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x0102,
L"Wireless Keyboard/Mouse Combo [MK1152WC]"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x0201,
L"Defender Office Keyboard (K7310) S Zodiak KM-9010"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x0252,
L"Emerge Uni-retractable Laser Mouse"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x2410,
L"Wireless PS3 gamepad"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x3286,
L"Nano Receiver [Sandstrom Laser Mouse SMWLL11]"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x4101,
L"Wireless Keyboard/Mouse"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x6301,
L"Trust Wireless Optical Mouse MI-4150K"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x9003,
L"VoIP Conference Hub (A16GH)"
},
{
0x062a,
L"MosArt Semiconductor Corp.",
0x9004,
L"USR9602 USB Internet Mini Phone"
},
{
0x062b,
L"Greatlink Electronics Taiwan, Ltd",
0x0,
L"0"
},
{
0x062c,
L"Institute for Information Industry",
0x0,
L"0"
},
{
0x062d,
L"Taiwan Tai-Hao Enterprises Co., Ltd",
0x0,
L"0"
},
{
0x062e,
L"Mainsuper Enterprises Co., Ltd",
0x0,
L"0"
},
{
0x062f,
L"Sin Sheng Terminal & Machine, Inc.",
0x0,
L"0"
},
{
0x0631,
L"JUJO Electronics Corp.",
0x0,
L"0"
},
{
0x0633,
L"Cyrix Corp.",
0x0,
L"0"
},
{
0x0634,
L"Micron Technology, Inc.",
0x0655,
L"Embedded Mass Storage Drive [RealSSD]"
},
{
0x0635,
L"Methode Electronics, Inc.",
0x0,
L"0"
},
{
0x0636,
L"Sierra Imaging, Inc.",
0x0003,
L"Vivicam 35Xx"
},
{
0x0638,
L"Avision, Inc.",
0x0268,
L"iVina 1200U Scanner"
},
{
0x0638,
L"Avision, Inc.",
0x026a,
L"Minolta Dimage Scan Dual II AF-2820U (2886)"
},
{
0x0638,
L"Avision, Inc.",
0x0a10,
L"iVina FB1600/UMAX Astra 4500"
},
{
0x0638,
L"Avision, Inc.",
0x0a13,
L"AV600U"
},
{
0x0638,
L"Avision, Inc.",
0x0a15,
L"Konica Minolta SC-110"
},
{
0x0638,
L"Avision, Inc.",
0x0a16,
L"Konica Minolta SC-215"
},
{
0x0638,
L"Avision, Inc.",
0x0a30,
L"UMAX Astra 6700 Scanner"
},
{
0x0638,
L"Avision, Inc.",
0x0a41,
L"Avision AM3000/MF3000 Series"
},
{
0x0638,
L"Avision, Inc.",
0x0f01,
L"fi-4010CU"
},
{
0x0638,
L"Avision, Inc.",
0x4004,
L"Minolta Dimage Scan Elite II AF-2920 (2888)"
},
{
0x0639,
L"Chrontel, Inc.",
0x0,
L"0"
},
{
0x063a,
L"Techwin Corp.",
0x0,
L"0"
},
{
0x063b,
L"Taugagreining HF",
0x0,
L"0"
},
{
0x063c,
L"Yamaichi Electronics Co., Ltd (Sakura)",
0x0,
L"0"
},
{
0x063d,
L"Fong Kai Industrial Co., Ltd",
0x0,
L"0"
},
{
0x063e,
L"RealMedia Technology, Inc.",
0x0,
L"0"
},
{
0x063f,
L"New Technology Cable, Ltd",
0x0,
L"0"
},
{
0x0640,
L"Hitex Development Tools",
0x0026,
L"LPC-Stick"
},
{
0x0641,
L"Woods Industries, Inc.",
0x0,
L"0"
},
{
0x0642,
L"VIA Medical Corp.",
0x0,
L"0"
},
{
0x0644,
L"TEAC Corp.",
0x0000,
L"Floppy"
},
{
0x0644,
L"TEAC Corp.",
0x0200,
L"All-In-One Multi-Card Reader CA200/B/S"
},
{
0x0644,
L"TEAC Corp.",
0x1000,
L"CD-ROM Drive"
},
{
0x0644,
L"TEAC Corp.",
0x800d,
L"TASCAM Portastudio DP-01FX"
},
{
0x0644,
L"TEAC Corp.",
0x800e,
L"TASCAM US-122L"
},
{
0x0644,
L"TEAC Corp.",
0x801d,
L"TASCAM DR-100"
},
{
0x0644,
L"TEAC Corp.",
0x8021,
L"TASCAM US-122mkII"
},
{
0x0644,
L"TEAC Corp.",
0xd001,
L"CD-R/RW Unit"
},
{
0x0644,
L"TEAC Corp.",
0xd002,
L"CD-R/RW Unit"
},
{
0x0644,
L"TEAC Corp.",
0xd010,
L"CD-RW/DVD Unit"
},
{
0x0645,
L"Who? Vision Systems, Inc.",
0x0,
L"0"
},
{
0x0646,
L"UMAX",
0x0,
L"0"
},
{
0x0647,
L"Acton Research Corp.",
0x0100,
L"ARC SpectraPro UV/VIS/IR Monochromator/Spectrograph"
},
{
0x0647,
L"Acton Research Corp.",
0x0101,
L"ARC AM-VM Mono Airpath/Vacuum Monochromator/Spectrograph"
},
{
0x0647,
L"Acton Research Corp.",
0x0102,
L"ARC Inspectrum Mono"
},
{
0x0647,
L"Acton Research Corp.",
0x0103,
L"ARC Filterwheel"
},
{
0x0647,
L"Acton Research Corp.",
0x03e9,
L"Inspectrum 128x1024 F VIS Spectrograph"
},
{
0x0647,
L"Acton Research Corp.",
0x03ea,
L"Inspectrum 256x1024 F VIS Spectrograph"
},
{
0x0647,
L"Acton Research Corp.",
0x03eb,
L"Inspectrum 128x1024 B VIS Spectrograph"
},
{
0x0647,
L"Acton Research Corp.",
0x03ec,
L"Inspectrum 256x1024 B VIS Spectrograph"
},
{
0x0648,
L"Inside Out Networks",
0x0,
L"0"
},
{
0x0649,
L"Weli Science Co., Ltd",
0x0,
L"0"
},
{
0x064b,
L"Analog Devices, Inc. (White Mountain DSP)",
0x0165,
L"Blackfin 535 [ADZS HPUSB ICE]"
},
{
0x064c,
L"Ji-Haw Industrial Co., Ltd",
0x0,
L"0"
},
{
0x064d,
L"TriTech Microelectronics, Ltd",
0x0,
L"0"
},
{
0x064e,
L"Suyin Corp.",
0x2100,
L"Sony Visual Communication Camera"
},
{
0x064e,
L"Suyin Corp.",
0x9700,
L"Asus Integrated Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xa100,
L"Acer OrbiCam"
},
{
0x064e,
L"Suyin Corp.",
0xa101,
L"Acer CrystalEye Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xa102,
L"Acer/Lenovo Webcam [CN0316]"
},
{
0x064e,
L"Suyin Corp.",
0xa103,
L"Acer/HP Integrated Webcam [CN0314]"
},
{
0x064e,
L"Suyin Corp.",
0xa110,
L"HP Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xa114,
L"Lemote Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xa116,
L"UVC 1.3MPixel WebCam"
},
{
0x064e,
L"Suyin Corp.",
0xa136,
L"Asus Integrated Webcam [CN031B]"
},
{
0x064e,
L"Suyin Corp.",
0xa219,
L"1.3M WebCam (notebook emachines E730, Acer sub-brand)"
},
{
0x064e,
L"Suyin Corp.",
0xc107,
L"HP webcam [dv6-1190en]"
},
{
0x064e,
L"Suyin Corp.",
0xc335,
L"HP TrueVision HD"
},
{
0x064e,
L"Suyin Corp.",
0xd101,
L"Acer CrystalEye Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xd213,
L"UVC HD Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xd217,
L"HP TrueVision HD"
},
{
0x064e,
L"Suyin Corp.",
0xe201,
L"Lenovo Integrated Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xe203,
L"Lenovo Integrated Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xe258,
L"HP TrueVision HD Integrated Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xe263,
L"HP TrueVision HD Integrated Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xf102,
L"Lenovo Integrated Webcam [R5U877]"
},
{
0x064e,
L"Suyin Corp.",
0xf103,
L"Lenovo Integrated Webcam [R5U877]"
},
{
0x064e,
L"Suyin Corp.",
0xf209,
L"HP Webcam"
},
{
0x064e,
L"Suyin Corp.",
0xf300,
L"UVC 0.3M Webcam"
},
{
0x064f,
L"WIBU-Systems AG",
0x03e9,
L"CmStick (MSD, article no. 1001-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x03f2,
L"CmStick/M (MSD, article no. 1010-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x03f3,
L"CmStick/M (MSD, article no. 1011-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x0bd7,
L"Wibu-Box/U (article no. 3031-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x0bd8,
L"Wibu-Box/RU (article no. 3032-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x2af9,
L"CmStick (HID, article no. 1001-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x2b03,
L"CmStick/M (HID, article no. 1011-xx-xxx)"
},
{
0x064f,
L"WIBU-Systems AG",
0x5213,
L"CmStick/M (COMPOSITE, article no. 1011-xx-xxx)"
},
{
0x0650,
L"Dynapro Systems",
0x0,
L"0"
},
{
0x0651,
L"Likom Technology Sdn. Bhd.",
0x0,
L"0"
},
{
0x0652,
L"Stargate Solutions, Inc.",
0x0,
L"0"
},
{
0x0653,
L"CNF, Inc.",
0x0,
L"0"
},
{
0x0654,
L"Granite Microsystems, Inc.",
0x0005,
L"Device Bay Controller"
},
{
0x0654,
L"Granite Microsystems, Inc.",
0x0006,
L"Hub"
},
{
0x0654,
L"Granite Microsystems, Inc.",
0x0007,
L"Device Bay Controller"
},
{
0x0654,
L"Granite Microsystems, Inc.",
0x0016,
L"Hub"
},
{
0x0655,
L"Space Shuttle Hi-Tech Co., Ltd",
0x0,
L"0"
},
{
0x0656,
L"Glory Mark Electronic, Ltd",
0x0,
L"0"
},
{
0x0657,
L"Tekcon Electronics Corp.",
0x0,
L"0"
},
{
0x0658,
L"Sigma Designs, Inc.",
0x0200,
L"Aeotec Z-Stick Gen5 (ZW090) - UZB"
},
{
0x0659,
L"Aethra",
0x0,
L"0"
},
{
0x065a,
L"Optoelectronics Co., Ltd",
0x0001,
L"Opticon OPR-2001 / NLV-1001 (keyboard mode)"
},
{
0x065a,
L"Optoelectronics Co., Ltd",
0x0009,
L"NLV-1001 (serial mode) / OPN-2001 [Opticon]"
},
{
0x065b,
L"Tracewell Systems",
0x0,
L"0"
},
{
0x065e,
L"Silicon Graphics",
0x0,
L"0"
},
{
0x065f,
L"Good Way Technology Co., Ltd & GWC technology Inc.",
0x0,
L"0"
},
{
0x0660,
L"TSAY-E (BVI) International, Inc.",
0x0,
L"0"
},
{
0x0661,
L"Hamamatsu Photonics K.K.",
0x0,
L"0"
},
{
0x0662,
L"Kansai Electric Co., Ltd",
0x0,
L"0"
},
{
0x0663,
L"Topmax Electronic Co., Ltd",
0x0103,
L"CobraPad"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0301,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0302,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0303,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0304,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0305,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0306,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0307,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0664,
L"ET&T Technology Co., Ltd.",
0x0309,
L"Groovy Technology Corp. GTouch Touch Screen"
},
{
0x0665,
L"Cypress Semiconductor",
0x5161,
L"USB to Serial"
},
{
0x0667,
L"Aiwa Co., Ltd",
0x0fa1,
L"TD-U8000 Tape Drive"
},
{
0x0668,
L"WordWand",
0x0,
L"0"
},
{
0x0669,
L"Oce' Printing Systems GmbH",
0x0,
L"0"
},
{
0x066a,
L"Total Technologies, Ltd",
0x0,
L"0"
},
{
0x066b,
L"Linksys, Inc.",
0x0105,
L"SCM eUSB SmartMedia Card Reader"
},
{
0x066b,
L"Linksys, Inc.",
0x010a,
L"Melco MCR-U2 SmartMedia / CompactFlash Reader"
},
{
0x066b,
L"Linksys, Inc.",
0x200c,
L"USB10TX"
},
{
0x066b,
L"Linksys, Inc.",
0x2202,
L"USB10TX Ethernet [pegasus]"
},
{
0x066b,
L"Linksys, Inc.",
0x2203,
L"USB100TX Ethernet [pegasus]"
},
{
0x066b,
L"Linksys, Inc.",
0x2204,
L"USB100TX HomePNA Ethernet [pegasus]"
},
{
0x066b,
L"Linksys, Inc.",
0x2206,
L"USB Ethernet [pegasus]"
},
{
0x066b,
L"Linksys, Inc.",
0x2207,
L"HomeLink Phoneline 10M Network Adapter"
},
{
0x066b,
L"Linksys, Inc.",
0x2211,
L"WUSB11 802.11b Adapter"
},
{
0x066b,
L"Linksys, Inc.",
0x2212,
L"WUSB11v2.5 802.11b Adapter"
},
{
0x066b,
L"Linksys, Inc.",
0x2213,
L"WUSB12v1.1 802.11b Adapter"
},
{
0x066b,
L"Linksys, Inc.",
0x2219,
L"Instant Wireless Network Adapter"
},
{
0x066b,
L"Linksys, Inc.",
0x400b,
L"USB10TX"
},
{
0x066d,
L"Entrega, Inc.",
0x0,
L"0"
},
{
0x066e,
L"Acer Semiconductor America, Inc.",
0x0,
L"0"
},
{
0x066f,
L"SigmaTel, Inc.",
0x003b,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x003e,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x003f,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x0040,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x0041,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x0042,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x0043,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x004b,
L"A-Max PA11 MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x3400,
L"STMP3400 D-Major MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x3410,
L"STMP3410 D-Major MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x3500,
L"Player Recovery Device"
},
{
0x066f,
L"SigmaTel, Inc.",
0x3780,
L"STMP3780/i.MX23 SystemOnChip in RecoveryMode"
},
{
0x066f,
L"SigmaTel, Inc.",
0x4200,
L"STIr4200 IrDA Bridge"
},
{
0x066f,
L"SigmaTel, Inc.",
0x4210,
L"STIr4210 IrDA Bridge"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8000,
L"MSCN MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8001,
L"SigmaTel MSCN Audio Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8004,
L"MSCNMMC MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8008,
L"i-Bead 100 MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8020,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8034,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8036,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8038,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8056,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8060,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8066,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x807e,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8092,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8096,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x809a,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80aa,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80ac,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80b8,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80ba,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80bc,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80bf,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80c5,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80c8,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80ca,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x80cc,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8104,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8106,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8108,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x810a,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x810c,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8122,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8124,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8126,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8128,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8134,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8136,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8138,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x813a,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x813e,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8140,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8142,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8144,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8146,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8148,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x814c,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8201,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8202,
L"Jens of Sweden / I-BEAD 150M/150H MP3 player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8203,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8204,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8205,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8206,
L"Digital MP3 Music Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8207,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8208,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8209,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820a,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820b,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820c,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820d,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820e,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x820f,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8210,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8211,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8212,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8213,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8214,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8215,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8216,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8217,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8218,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8219,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821a,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821b,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821c,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821d,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821e,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x821f,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8220,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8221,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8222,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8223,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8224,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8225,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8226,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8227,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8228,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8229,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8230,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x829c,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x82e0,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x8320,
L"TrekStor i.Beat fun"
},
{
0x066f,
L"SigmaTel, Inc.",
0x835d,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x9000,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x9001,
L"MP3 Player"
},
{
0x066f,
L"SigmaTel, Inc.",
0x9002,
L"MP3 Player"
},
{
0x0670,
L"Sequel Imaging",
0x0001,
L"Calibrator"
},
{
0x0670,
L"Sequel Imaging",
0x0005,
L"Enable Cable"
},
{
0x0672,
L"Labtec, Inc.",
0x1041,
L"LCS1040 Speaker System"
},
{
0x0672,
L"Labtec, Inc.",
0x5000,
L"SpaceBall 4000 FLX"
},
{
0x0673,
L"HCL",
0x5000,
L"Keyboard"
},
{
0x0674,
L"Key Mouse Electronic Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0675,
L"DrayTek Corp.",
0x0110,
L"Vigor 128 ISDN TA"
},
{
0x0675,
L"DrayTek Corp.",
0x0530,
L"Vigor530 IEEE 802.11G Adapter (ISL3880+NET2280)"
},
{
0x0675,
L"DrayTek Corp.",
0x0550,
L"Vigor550"
},
{
0x0675,
L"DrayTek Corp.",
0x1688,
L"miniVigor 128 ISDN TA [HFC-S]"
},
{
0x0675,
L"DrayTek Corp.",
0x6694,
L"miniVigor 128 ISDN TA"
},
{
0x0676,
L"Teles AG",
0x0,
L"0"
},
{
0x0677,
L"Aiwa Co., Ltd",
0x07d5,
L"TM-ED1285(USB)"
},
{
0x0677,
L"Aiwa Co., Ltd",
0x0fa1,
L"TD-U8000 Tape Drive"
},
{
0x0678,
L"ACard Technology Corp.",
0x0,
L"0"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0000,
L"PL2301 USB-USB Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0001,
L"PL2302 USB-USB Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0307,
L"Motorola Serial Adapter"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x04bb,
L"PL2303 Serial (IODATA USB-RSAQ2)"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0600,
L"IDE Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0610,
L"Onext EG210U MODEM"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x0611,
L"AlDiga AL-11U Quad-band GSM/GPRS/EDGE modem"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2303,
L"PL2303 Serial Port"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2305,
L"PL2305 Parallel Port"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2306,
L"Raylink Bridge Controller"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2307,
L"PL2307 USB-ATAPI4 Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2313,
L"FITEL PHS U Cable Adaptor"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2315,
L"Flash Disk Embedded Hub"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2316,
L"Flash Disk Security Device"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2317,
L"Mass Storage Device"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2501,
L"PL2501 USB-USB Bridge (USB 2.0)"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2506,
L"Kaser 8gB micro hard drive"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2507,
L"PL2507 Hi-speed USB to IDE bridge controller"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2515,
L"Flash Disk Embedded Hub"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2517,
L"Flash Disk Mass Storage Device"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2528,
L"Storage device (8gB thumb drive)"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x25a1,
L"PL25A1 Host-Host Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x2773,
L"PL2773 SATAII bridge controller"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x3400,
L"Hi-Speed Flash Disk with TruePrint AES3400"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x3500,
L"Hi-Speed Flash Disk with TruePrint AES3500"
},
{
0x067b,
L"Prolific Technology, Inc.",
0x3507,
L"PL3507 ATAPI6 Bridge"
},
{
0x067b,
L"Prolific Technology, Inc.",
0xaaa0,
L"Prolific Pharos"
},
{
0x067b,
L"Prolific Technology, Inc.",
0xaaa2,
L"PL2303 Serial Adapter (IODATA USB-RSAQ3)"
},
{
0x067b,
L"Prolific Technology, Inc.",
0xaaa3,
L"PL2303x Serial Adapter"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x1001,
L"Siemens SpeedStream 100MBps Ethernet"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x1022,
L"Siemens SpeedStream 1022 802.11b Adapter"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x1023,
L"SpeedStream Wireless"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4020,
L"SpeedStream 4020 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4031,
L"Efficient ADSL Modem"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4032,
L"SpeedStream 4031 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4033,
L"SpeedStream 4031 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4060,
L"Alcatel Speedstream 4060 ADSL Modem"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x4062,
L"Efficient Networks 4060 Loader"
},
{
0x067c,
L"Efficient Networks, Inc.",
0x5667,
L"Efficient Networks Virtual Bus for ADSL Modem"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xc031,
L"SpeedStream 4031 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xc032,
L"SpeedStream 4031 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xc033,
L"SpeedStream 4031 ATM/ADSL Installer"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xc060,
L"SpeedStream 4060 Miniport ATM/ADSL Adapter"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xd667,
L"Efficient Networks Virtual Bus for ADSL Modem"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xe240,
L"Speedstream Ethernet Adapter E240"
},
{
0x067c,
L"Efficient Networks, Inc.",
0xe540,
L"Speedstream Ethernet Adapter E240"
},
{
0x067d,
L"Hohner Corp.",
0x0,
L"0"
},
{
0x067e,
L"Intermec Technologies Corp.",
0x0801,
L"HID Keyboard, Barcode scanner"
},
{
0x067e,
L"Intermec Technologies Corp.",
0x0803,
L"VCP, Barcode scanner"
},
{
0x067e,
L"Intermec Technologies Corp.",
0x0805,
L"VCP + UVC, Barcode scanner"
},
{
0x067e,
L"Intermec Technologies Corp.",
0x1001,
L"Mobile Computer"
},
{
0x067f,
L"Virata, Ltd",
0x4552,
L"DSL-200 ADSL Modem"
},
{
0x067f,
L"Virata, Ltd",
0x6542,
L"DSL Modem"
},
{
0x067f,
L"Virata, Ltd",
0x6549,
L"DSL Modem"
},
{
0x067f,
L"Virata, Ltd",
0x7541,
L"DSL Modem"
},
{
0x0680,
L"Realtek Semiconductor Corp., CPP Div. (Avance Logic)",
0x0002,
L"Arowana Optical Wheel Mouse MSOP-01"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0001,
L"Dect Base"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0002,
L"Gigaset 3075 Passive ISDN"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0005,
L"ID-Mouse with Fingerprint Reader"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0012,
L"I-Gate 802.11b Adapter"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x001b,
L"WLL013"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x001d,
L"Hipath 1000"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0022,
L"Gigaset SX353 ISDN"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0026,
L"DECT Data - Gigaset M34"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x002b,
L"A-100-I ADSL Modem"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x002e,
L"ADSL Router_S-141"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x0034,
L"GSM module MC35/ES75 USB Modem"
},
{
0x0681,
L"Siemens Information and Communication Products",
0x3c06,
L"54g USB Network Adapter"
},
{
0x0682,
L"Victor Company of Japan, Ltd",
0x0,
L"0"
},
{
0x0684,
L"Actiontec Electronics, Inc.",
0x0,
L"0"
},
{
0x0685,
L"ZD Incorporated",
0x7000,
L"HSDPA Modem"
},
{
0x0686,
L"Minolta Co., Ltd",
0x2001,
L"PagePro 4110W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x2004,
L"PagePro 1200W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x2005,
L"Magicolor 2300 DL"
},
{
0x0686,
L"Minolta Co., Ltd",
0x3001,
L"PagePro 4100"
},
{
0x0686,
L"Minolta Co., Ltd",
0x3005,
L"PagePro 1250E"
},
{
0x0686,
L"Minolta Co., Ltd",
0x3006,
L"PagePro 1250W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x3009,
L"Magicolor 2300W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x300b,
L"PagePro 1350W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x300c,
L"PagePro 1300W"
},
{
0x0686,
L"Minolta Co., Ltd",
0x302e,
L"Develop D 1650iD PCL"
},
{
0x0686,
L"Minolta Co., Ltd",
0x3034,
L"Develop D 2050iD PCL"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4001,
L"Dimage 2300"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4003,
L"Dimage 2330 Zoom Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4004,
L"Dimage Scan Elite II AF-2920 (2888)"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4005,
L"Minolta DiMAGE E201 Mass Storage Device"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4006,
L"Dimage 7 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4007,
L"Dimage S304 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4008,
L"Dimage 5 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4009,
L"Dimage X Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400a,
L"Dimage S404 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400b,
L"Dimage 7i Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400c,
L"Dimage F100 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400d,
L"Dimage Scan Dual III AF-2840 (2889)"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400e,
L"Dimage Scan Elite 5400 (2890)"
},
{
0x0686,
L"Minolta Co., Ltd",
0x400f,
L"Dimage 7Hi Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4010,
L"Dimage Xi Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4011,
L"Dimage F300 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4012,
L"Dimage F200 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4014,
L"Dimage S414 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4015,
L"Dimage XT Camera [storage]"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4016,
L"Dimage XT Camera [remote mode]"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4017,
L"Dimage E223"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4018,
L"Dimage Z1  Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x4019,
L"Dimage A1 Camera [remote mode]"
},
{
0x0686,
L"Minolta Co., Ltd",
0x401a,
L"Dimage A1 Camera [storage]"
},
{
0x0686,
L"Minolta Co., Ltd",
0x401c,
L"Dimage X20 Camera"
},
{
0x0686,
L"Minolta Co., Ltd",
0x401e,
L"Dimage E323 Camera"
},
{
0x068a,
L"Pertech, Inc.",
0x0,
L"0"
},
{
0x068b,
L"Potrans International, Inc.",
0x0,
L"0"
},
{
0x068e,
L"CH Products, Inc.",
0x00d3,
L"OEM 3 axis 5 button joystick"
},
{
0x068e,
L"CH Products, Inc.",
0x00e2,
L"HFX OEM Joystick"
},
{
0x068e,
L"CH Products, Inc.",
0x00f0,
L"Multi-Function Panel"
},
{
0x068e,
L"CH Products, Inc.",
0x00f1,
L"Pro Throttle"
},
{
0x068e,
L"CH Products, Inc.",
0x00f2,
L"Flight Sim Pedals"
},
{
0x068e,
L"CH Products, Inc.",
0x00f3,
L"Fighterstick"
},
{
0x068e,
L"CH Products, Inc.",
0x00f4,
L"Combatstick"
},
{
0x068e,
L"CH Products, Inc.",
0x00fa,
L"Ch Throttle Quadrant"
},
{
0x068e,
L"CH Products, Inc.",
0x00ff,
L"Flight Sim Yoke"
},
{
0x068e,
L"CH Products, Inc.",
0x0500,
L"GameStick 3D"
},
{
0x068e,
L"CH Products, Inc.",
0x0501,
L"CH Pro Pedals"
},
{
0x068e,
L"CH Products, Inc.",
0x0504,
L"F-16 Combat Stick"
},
{
0x0690,
L"Golden Bridge Electech, Inc.",
0x0,
L"0"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x0002,
L"FlashGate SmartMedia Card Reader"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x0003,
L"FlashGate CompactFlash Card Reader"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x0005,
L"FlashGate"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x0006,
L"SM PCCard R/W and SPD"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x0007,
L"FlashGate ME (Authenticated)"
},
{
0x0693,
L"Hagiwara Sys-Com Co., Ltd",
0x000a,
L"SDCard/MMC Reader/Writer"
},
{
0x0694,
L"Lego Group",
0x0001,
L"Mindstorms Tower"
},
{
0x0694,
L"Lego Group",
0x0002,
L"Mindstorms NXT"
},
{
0x0694,
L"Lego Group",
0x0005,
L"Mindstorms EV3"
},
{
0x0694,
L"Lego Group",
0x0006,
L"Mindstorms EV3 Firmware Update"
},
{
0x0698,
L"Chuntex (CTX)",
0x1786,
L"1300ex Monitor"
},
{
0x0698,
L"Chuntex (CTX)",
0x2003,
L"CTX M730V built in Camera"
},
{
0x0698,
L"Chuntex (CTX)",
0x9999,
L"VLxxxx Monitor+Hub"
},
{
0x0699,
L"Tektronix, Inc.",
0x0347,
L"AFG 3022B"
},
{
0x0699,
L"Tektronix, Inc.",
0x036a,
L"TDS 2024B"
},
{
0x069a,
L"Askey Computer Corp.",
0x0001,
L"VC010 Webcam [pwc]"
},
{
0x069a,
L"Askey Computer Corp.",
0x0303,
L"Cable Modem"
},
{
0x069a,
L"Askey Computer Corp.",
0x0311,
L"ADSL Router Remote NDIS Device"
},
{
0x069a,
L"Askey Computer Corp.",
0x0318,
L"Remote NDIS Device"
},
{
0x069a,
L"Askey Computer Corp.",
0x0319,
L"220V Remote NDIS Device"
},
{
0x069a,
L"Askey Computer Corp.",
0x0320,
L"IEEE 802.11b Wireless LAN Card"
},
{
0x069a,
L"Askey Computer Corp.",
0x0321,
L"Dynalink WLL013 / Compex WLU11A 802.11b Adapter"
},
{
0x069a,
L"Askey Computer Corp.",
0x0402,
L"Scientific Atlanta WebSTAR 100 & 200 series Cable Modem"
},
{
0x069a,
L"Askey Computer Corp.",
0x0811,
L"BT Virtual Bus for Helium"
},
{
0x069a,
L"Askey Computer Corp.",
0x0821,
L"BT Voyager 1010 802.11b Adapter"
},
{
0x069a,
L"Askey Computer Corp.",
0x4402,
L"Scientific Atlanta WebSTAR 2000 series Cable Modem"
},
{
0x069a,
L"Askey Computer Corp.",
0x4403,
L"Scientific Atlanta WebSTAR 300 series Cable Modem"
},
{
0x069a,
L"Askey Computer Corp.",
0x4501,
L"Scientific-Atlanta WebSTAR 2000 series Cable Modem"
},
{
0x069b,
L"Thomson, Inc.",
0x0704,
L"DCM245 Cable Modem"
},
{
0x069b,
L"Thomson, Inc.",
0x0705,
L"THG540K Cable Modem"
},
{
0x069b,
L"Thomson, Inc.",
0x0709,
L"Lyra PDP2424"
},
{
0x069b,
L"Thomson, Inc.",
0x070c,
L"MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x070d,
L"MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x070e,
L"MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x070f,
L"RCA Lyra RD1071 MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x0731,
L"Lyra M200E256"
},
{
0x069b,
L"Thomson, Inc.",
0x0761,
L"RCA H100A"
},
{
0x069b,
L"Thomson, Inc.",
0x0778,
L"PEARL USB Device"
},
{
0x069b,
L"Thomson, Inc.",
0x2220,
L"RCA Kazoo RD1000 MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x300a,
L"RCA Lyra MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x3012,
L"MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x3013,
L"MP3 Player"
},
{
0x069b,
L"Thomson, Inc.",
0x5557,
L"RCA CDS6300"
},
{
0x069d,
L"Hughes Network Systems (HNS)",
0x0001,
L"Satellite Receiver Device"
},
{
0x069d,
L"Hughes Network Systems (HNS)",
0x0002,
L"Satellite Device"
},
{
0x069e,
L"Welcat Inc.",
0x0005,
L"Marx CryptoBox v1.2"
},
{
0x069f,
L"Allied Data Technologies BV",
0x0010,
L"Tornado Speakerphone FaxModem 56.0"
},
{
0x069f,
L"Allied Data Technologies BV",
0x0011,
L"Tornado Speakerphone FaxModem 56.0"
},
{
0x069f,
L"Allied Data Technologies BV",
0x1000,
L"ADT VvBus for CopperJet"
},
{
0x069f,
L"Allied Data Technologies BV",
0x1004,
L"CopperJet 821 RouterPlus"
},
{
0x06a2,
L"Topro Technology, Inc.",
0x0033,
L"USB Mouse"
},
{
0x06a3,
L"Saitek PLC",
0x0006,
L"Cyborg Gold Joystick"
},
{
0x06a3,
L"Saitek PLC",
0x0109,
L"P880 Pad"
},
{
0x06a3,
L"Saitek PLC",
0x0160,
L"ST290 Pro"
},
{
0x06a3,
L"Saitek PLC",
0x0200,
L"Xbox Adrenalin Hub"
},
{
0x06a3,
L"Saitek PLC",
0x0241,
L"Xbox Adrenalin Gamepad"
},
{
0x06a3,
L"Saitek PLC",
0x0255,
L"X52 Flight Controller"
},
{
0x06a3,
L"Saitek PLC",
0x040b,
L"P990 Dual Analog Pad"
},
{
0x06a3,
L"Saitek PLC",
0x040c,
L"P2900 Wireless Pad"
},
{
0x06a3,
L"Saitek PLC",
0x0422,
L"ST90 Joystick"
},
{
0x06a3,
L"Saitek PLC",
0x0460,
L"ST290 Pro Flight Stick"
},
{
0x06a3,
L"Saitek PLC",
0x0463,
L"ST290"
},
{
0x06a3,
L"Saitek PLC",
0x0464,
L"Cyborg Evo"
},
{
0x06a3,
L"Saitek PLC",
0x0471,
L"Cyborg Graphite Stick"
},
{
0x06a3,
L"Saitek PLC",
0x0501,
L"R100 Sports Wheel"
},
{
0x06a3,
L"Saitek PLC",
0x0502,
L"ST200 Stick"
},
{
0x06a3,
L"Saitek PLC",
0x0506,
L"R220 Digital Wheel"
},
{
0x06a3,
L"Saitek PLC",
0x051e,
L"Cyborg Digital II Stick"
},
{
0x06a3,
L"Saitek PLC",
0x052d,
L"P750 Gamepad"
},
{
0x06a3,
L"Saitek PLC",
0x053c,
L"X45 Flight Controller"
},
{
0x06a3,
L"Saitek PLC",
0x053f,
L"X36F Flightstick"
},
{
0x06a3,
L"Saitek PLC",
0x056c,
L"P2000 Tilt Pad"
},
{
0x06a3,
L"Saitek PLC",
0x056f,
L"P2000 Tilt Pad"
},
{
0x06a3,
L"Saitek PLC",
0x05d2,
L"PC Dash 2"
},
{
0x06a3,
L"Saitek PLC",
0x075c,
L"X52 Flight Controller"
},
{
0x06a3,
L"Saitek PLC",
0x0762,
L"Saitek X52 Pro Flight Control System"
},
{
0x06a3,
L"Saitek PLC",
0x0763,
L"Pro Flight Rudder Pedals"
},
{
0x06a3,
L"Saitek PLC",
0x0764,
L"Flight Pro Combat Rudder"
},
{
0x06a3,
L"Saitek PLC",
0x0805,
L"R440 Force Wheel"
},
{
0x06a3,
L"Saitek PLC",
0x0b4e,
L"Pro Flight Backlit Information Panel"
},
{
0x06a3,
L"Saitek PLC",
0x0bac,
L"Pro Flight Yoke"
},
{
0x06a3,
L"Saitek PLC",
0x0c2d,
L"Pro Flight Quadrant"
},
{
0x06a3,
L"Saitek PLC",
0x0d05,
L"Pro Flight Radio Panel"
},
{
0x06a3,
L"Saitek PLC",
0x0d06,
L"Flight Pro Multi Panel"
},
{
0x06a3,
L"Saitek PLC",
0x0d67,
L"Pro Flight Switch Panel"
},
{
0x06a3,
L"Saitek PLC",
0x1003,
L"GM2 Action Pad"
},
{
0x06a3,
L"Saitek PLC",
0x1009,
L"Action Pad"
},
{
0x06a3,
L"Saitek PLC",
0x100a,
L"SP550 Pad and Joystick Combo"
},
{
0x06a3,
L"Saitek PLC",
0x100b,
L"SP550 Pad"
},
{
0x06a3,
L"Saitek PLC",
0x1509,
L"P3000 Wireless Pad"
},
{
0x06a3,
L"Saitek PLC",
0x1589,
L"P3000 Wireless Pad"
},
{
0x06a3,
L"Saitek PLC",
0x2541,
L"X45 Flight Controller"
},
{
0x06a3,
L"Saitek PLC",
0x3509,
L"P3000 RF GamePad"
},
{
0x06a3,
L"Saitek PLC",
0x353e,
L"Cyborg Evo Wireless"
},
{
0x06a3,
L"Saitek PLC",
0x3589,
L"P3000 Wireless Pad"
},
{
0x06a3,
L"Saitek PLC",
0x35be,
L"Cyborg Evo"
},
{
0x06a3,
L"Saitek PLC",
0x5509,
L"P3000 Wireless Pad"
},
{
0x06a3,
L"Saitek PLC",
0x712c,
L"Pro Flight Yoke integrated hub"
},
{
0x06a3,
L"Saitek PLC",
0x8000,
L"Gamers' Keyboard"
},
{
0x06a3,
L"Saitek PLC",
0x801e,
L"Cyborg 3D Digital Stick II"
},
{
0x06a3,
L"Saitek PLC",
0x8020,
L"Eclipse Keyboard"
},
{
0x06a3,
L"Saitek PLC",
0x8021,
L"Eclipse II Keyboard"
},
{
0x06a3,
L"Saitek PLC",
0x802d,
L"P750 Pad"
},
{
0x06a3,
L"Saitek PLC",
0x803f,
L"X36 Flight Controller"
},
{
0x06a3,
L"Saitek PLC",
0x806f,
L"P2000 Tilt Pad"
},
{
0x06a3,
L"Saitek PLC",
0x80c0,
L"Pro Gamer Command Unit"
},
{
0x06a3,
L"Saitek PLC",
0x80c1,
L"Cyborg Command Pad Unit"
},
{
0x06a3,
L"Saitek PLC",
0xa2ae,
L"Pro Flight Instrument Panel"
},
{
0x06a3,
L"Saitek PLC",
0xa502,
L"Gaming Mouse"
},
{
0x06a3,
L"Saitek PLC",
0xf518,
L"P3200 Rumble Force Game Pad"
},
{
0x06a3,
L"Saitek PLC",
0xff04,
L"R440 Force Wheel"
},
{
0x06a3,
L"Saitek PLC",
0xff0c,
L"Cyborg Force Rumble Pad"
},
{
0x06a3,
L"Saitek PLC",
0xff0d,
L"P2600 Rumble Force Pad"
},
{
0x06a3,
L"Saitek PLC",
0xff12,
L"Cyborg 3D Force Stick"
},
{
0x06a3,
L"Saitek PLC",
0xff17,
L"ST 330 Rumble Force Stick"
},
{
0x06a3,
L"Saitek PLC",
0xff52,
L"Cyborg 3D Rumble Force Joystick"
},
{
0x06a3,
L"Saitek PLC",
0xffb5,
L"Cyborg Evo Force Joystick"
},
{
0x06a4,
L"Xiamen Doowell Electron Co., Ltd",
0x0,
L"0"
},
{
0x06a5,
L"Divio",
0x0000,
L"Typhoon Webcam 100k [nw8000]"
},
{
0x06a5,
L"Divio",
0xd001,
L"ProLink DS3303u Webcam"
},
{
0x06a5,
L"Divio",
0xd800,
L"Chicony TwinkleCam"
},
{
0x06a5,
L"Divio",
0xd820,
L"Wize Media 1000"
},
{
0x06a7,
L"MicroStore, Inc.",
0x0,
L"0"
},
{
0x06a8,
L"Topaz Systems, Inc.",
0x0042,
L"SignatureGem 1X5 Pad"
},
{
0x06a8,
L"Topaz Systems, Inc.",
0x0043,
L"SignatureGem 1X5-HID Pad"
},
{
0x06a9,
L"Westell",
0x0005,
L"WireSpeed Dual Connect Modem"
},
{
0x06a9,
L"Westell",
0x0006,
L"WireSpeed Dual Connect Modem"
},
{
0x06a9,
L"Westell",
0x000a,
L"WireSpeed Dual Connect Modem"
},
{
0x06a9,
L"Westell",
0x000b,
L"WireSpeed Dual Connect Modem"
},
{
0x06a9,
L"Westell",
0x000e,
L"A90-211WG-01 802.11g Adapter [Intersil ISL3887]"
},
{
0x06aa,
L"Sysgration, Ltd",
0x0,
L"0"
},
{
0x06ac,
L"Fujitsu Laboratories of America, Inc.",
0x0,
L"0"
},
{
0x06ad,
L"Greatland Electronics Taiwan, Ltd",
0x0,
L"0"
},
{
0x06ae,
L"Professional Multimedia Testing Centre",
0x0,
L"0"
},
{
0x06af,
L"Harting, Inc. of North America",
0x0,
L"0"
},
{
0x06b8,
L"Pixela Corp.",
0x0,
L"0"
},
{
0x06b9,
L"Alcatel Telecom",
0x0120,
L"SpeedTouch 120g 802.11g Wireless Adapter [Intersil ISL3886]"
},
{
0x06b9,
L"Alcatel Telecom",
0x0121,
L"SpeedTouch 121g Wireless Dongle"
},
{
0x06b9,
L"Alcatel Telecom",
0x2001,
L"SPEED TOUCH Card"
},
{
0x06b9,
L"Alcatel Telecom",
0x4061,
L"SpeedTouch ISDN or ADSL Modem"
},
{
0x06b9,
L"Alcatel Telecom",
0x4062,
L"SpeedTouch ISDN or ADSL router"
},
{
0x06b9,
L"Alcatel Telecom",
0xa5a5,
L"DynaMiTe Modem"
},
{
0x06ba,
L"Smooth Cord & Connector Co., Ltd",
0x0,
L"0"
},
{
0x06bb,
L"EDA, Inc.",
0x0,
L"0"
},
{
0x06bc,
L"Oki Data Corp.",
0x000b,
L"Okipage 14ex Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x0027,
L"Okipage 14e"
},
{
0x06bc,
L"Oki Data Corp.",
0x00f7,
L"OKI B4600 Mono Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x015e,
L"OKIPOS 411/412 POS Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x01c9,
L"OKI B430 Mono Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x020b,
L"OKI ES4140 Mono Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x02bb,
L"OKI PT390 POS Printer"
},
{
0x06bc,
L"Oki Data Corp.",
0x0a91,
L"B2500MFP (printer+scanner)"
},
{
0x06bc,
L"Oki Data Corp.",
0x3801,
L"B6100 Laser Printer"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0001,
L"SnapScan 1212U"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0002,
L"SnapScan 1236U"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0100,
L"SnapScan Touch"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0101,
L"SNAPSCAN ELITE"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0200,
L"ScanMaker 8700"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x02bf,
L"DUOSCAN f40"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0400,
L"CL30"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0401,
L"Mass Storage"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0403,
L"ePhoto CL18 Camera"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x0404,
L"ePhoto CL20 Camera"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x2061,
L"SnapScan 1212U (?)"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x208d,
L"Snapscan e40"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x208f,
L"SnapScan e50"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x2091,
L"SnapScan e20"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x2093,
L"SnapScan e10"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x2095,
L"SnapScan e25"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x2097,
L"SnapScan e26"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x20fd,
L"SnapScan e52"
},
{
0x06bd,
L"AGFA-Gevaert NV",
0x20ff,
L"SnapScan e42"
},
{
0x06be,
L"AME Optimedia Technology Co., Ltd",
0x0800,
L"Optimedia Camera"
},
{
0x06be,
L"AME Optimedia Technology Co., Ltd",
0x1005,
L"Dazzle DPVM! (1005)"
},
{
0x06be,
L"AME Optimedia Technology Co., Ltd",
0xd001,
L"P35U Camera Capture"
},
{
0x06bf,
L"Leoco Corp.",
0x0,
L"0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0030,
L"PhidgetRFID"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0031,
L"RFID reader"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0038,
L"4-Motor PhidgetServo v3.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0039,
L"1-Motor PhidgetServo v3.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x003a,
L"8-Motor PhidgetAvancedServo"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0040,
L"PhidgetInterface Kit 0-0-4"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0044,
L"PhidgetInterface Kit 0-16-16"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0045,
L"PhidgetInterface Kit 8-8-8"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0048,
L"PhidgetStepper (Under Development)"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0049,
L"PhidgetTextLED Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x004a,
L"PhidgetLED Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x004b,
L"PhidgetEncoder Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0051,
L"PhidgetInterface Kit 0-5-7 (Custom)"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0052,
L"PhidgetTextLCD"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0053,
L"PhidgetInterfaceKit 0-8-8"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0058,
L"PhidgetMotorControl Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0070,
L"PhidgetTemperatureSensor Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0071,
L"PhidgetAccelerometer Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0072,
L"PhidgetWeightSensor Ver 1.0"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0073,
L"PhidgetHumiditySensor"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0074,
L"PhidgetPHSensor"
},
{
0x06c2,
L"Phidgets Inc. (formerly GLAB)",
0x0075,
L"PhidgetGyroscope"
},
{
0x06c4,
L"Bizlink International Corp.",
0x0,
L"0"
},
{
0x06c5,
L"Hagenuk, GmbH",
0x0,
L"0"
},
{
0x06c6,
L"Infowave Software, Inc.",
0x0,
L"0"
},
{
0x06c8,
L"SIIG, Inc.",
0x0,
L"0"
},
{
0x06c9,
L"Taxan (Europe), Ltd",
0x0005,
L"Monitor Control"
},
{
0x06c9,
L"Taxan (Europe), Ltd",
0x0007,
L"Monitor Control"
},
{
0x06c9,
L"Taxan (Europe), Ltd",
0x0009,
L"Monitor Control"
},
{
0x06ca,
L"Newer Technology, Inc.",
0x2003,
L"uSCSI"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0001,
L"TouchPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0002,
L"Integrated TouchPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0003,
L"cPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0005,
L"Touchpad/FPS"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0006,
L"TouchScreen"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0007,
L"USB Styk"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0008,
L"WheelPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0009,
L"Composite TouchPad and TrackPoint"
},
{
0x06cb,
L"Synaptics, Inc.",
0x000e,
L"HID Device"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0010,
L"Wireless TouchPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x0013,
L"DisplayPad"
},
{
0x06cb,
L"Synaptics, Inc.",
0x2970,
L"touchpad"
},
{
0x06cc,
L"Terayon Communication Systems",
0x0101,
L"Cable Modem"
},
{
0x06cc,
L"Terayon Communication Systems",
0x0102,
L"Cable Modem"
},
{
0x06cc,
L"Terayon Communication Systems",
0x0103,
L"Cable Modem"
},
{
0x06cc,
L"Terayon Communication Systems",
0x0104,
L"Cable Modem"
},
{
0x06cc,
L"Terayon Communication Systems",
0x0304,
L"Cable Modem"
},
{
0x06cd,
L"Keyspan",
0x0101,
L"USA-28 PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0102,
L"USA-28X PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0103,
L"USA-19 PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0104,
L"PDA [prerenum]"
},
{
0x06cd,
L"Keyspan",
0x0105,
L"USA-18X PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0106,
L"USA-19W PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0107,
L"USA-19 PDA"
},
{
0x06cd,
L"Keyspan",
0x0108,
L"USA-19W PDA"
},
{
0x06cd,
L"Keyspan",
0x0109,
L"USA-49W serial adapter [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x010a,
L"USA-49W serial adapter"
},
{
0x06cd,
L"Keyspan",
0x010b,
L"USA-19Qi serial adapter [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x010c,
L"USA-19Qi serial adapter"
},
{
0x06cd,
L"Keyspan",
0x010d,
L"USA-19Q serial Adapter (no firmware)"
},
{
0x06cd,
L"Keyspan",
0x010e,
L"USA-19Q serial Adapter"
},
{
0x06cd,
L"Keyspan",
0x010f,
L"USA-28 PDA"
},
{
0x06cd,
L"Keyspan",
0x0110,
L"USA-28Xb PDA"
},
{
0x06cd,
L"Keyspan",
0x0111,
L"USA-18 serial Adapter"
},
{
0x06cd,
L"Keyspan",
0x0112,
L"USA-18X PDA"
},
{
0x06cd,
L"Keyspan",
0x0113,
L"USA-28Xb PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0114,
L"USA-28Xa PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0115,
L"USA-28Xa PDA"
},
{
0x06cd,
L"Keyspan",
0x0116,
L"USA-18XA serial Adapter (no firmware)"
},
{
0x06cd,
L"Keyspan",
0x0117,
L"USA-18XA serial Adapter"
},
{
0x06cd,
L"Keyspan",
0x0118,
L"USA-19QW PDA [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x0119,
L"USA-19QW PDA"
},
{
0x06cd,
L"Keyspan",
0x011a,
L"USA-49Wlc serial adapter [no firmware]"
},
{
0x06cd,
L"Keyspan",
0x011b,
L"MPR Serial Preloader (MPRQI)"
},
{
0x06cd,
L"Keyspan",
0x011c,
L"MPR Serial (MPRQI)"
},
{
0x06cd,
L"Keyspan",
0x011d,
L"MPR Serial Preloader (MPRQ)"
},
{
0x06cd,
L"Keyspan",
0x011e,
L"MPR Serial (MPRQ)"
},
{
0x06cd,
L"Keyspan",
0x0121,
L"USA-19hs serial adapter"
},
{
0x06cd,
L"Keyspan",
0x012a,
L"USA-49Wlc serial adapter"
},
{
0x06cd,
L"Keyspan",
0x0201,
L"UIA-10 Digital Media Remote [Cypress AN2131SC]"
},
{
0x06cd,
L"Keyspan",
0x0202,
L"UIA-11 Digital Media Remote"
},
{
0x06ce,
L"Contec",
0x8311,
L"COM-1(USB)H"
},
{
0x06cf,
L"SpheronVR AG",
0x1010,
L"PanoCam 10"
},
{
0x06cf,
L"SpheronVR AG",
0x1012,
L"PanoCam 12/12X"
},
{
0x06d0,
L"LapLink, Inc.",
0x0622,
L"LapLink Gold USB-USB Bridge [net1080]"
},
{
0x06d1,
L"Daewoo Electronics Co., Ltd",
0x0,
L"0"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0284,
L"FX-USB-AW/-BD RS482 Converters"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0380,
L"CP8000D Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0381,
L"CP770D Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0385,
L"CP900D Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0387,
L"CP980D Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x038b,
L"CP3020D Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x038c,
L"CP900DW(ID) Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0393,
L"CP9500D/DW Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0394,
L"CP9000D/DW Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x0398,
L"P93D"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03a1,
L"CP9550D/DW Port"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03a5,
L"CP9550DW-S"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03a9,
L"CP-9600DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03aa,
L"CP3020DA"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03ad,
L"CP-9800D/DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x03ae,
L"CP-9800DW-S"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b10,
L"P95D"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b21,
L"CP-9810D/DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b30,
L"CP-D70DW / CP-D707DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b31,
L"CP-K60DW-S"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b36,
L"CP-D80DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b50,
L"CP-W5000DW"
},
{
0x06d3,
L"Mitsubishi Electric Corp.",
0x3b60,
L"CP-D90DW"
},
{
0x06d4,
L"Cisco Systems",
0x0,
L"0"
},
{
0x06d5,
L"Toshiba",
0x4000,
L"Japanese Keyboard"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0025,
L"Gamepad"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0026,
L"Predator TH 400 Gamepad"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x002d,
L"Trust PowerC@m 350FT"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x002e,
L"Trust PowerC@m 350FS"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0030,
L"Trust 710 LCD POWERC@M ZOOM - MSD"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0031,
L"Trust 610/710 LCD POWERC@M ZOOM"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x003a,
L"Trust PowerC@m 770Z (mass storage mode)"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x003b,
L"Trust PowerC@m 770Z (webcam mode)"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x003c,
L"Trust 910z PowerC@m"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x003f,
L"Trust 735S POWERC@M ZOOM, WDM DSC Bulk Driver"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0050,
L"Trust 738AV LCD PV Digital Camera"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0062,
L"TRUST 782AV LCD P. V. Video Capture"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0066,
L"TRUST Digital PCTV and Movie Editor"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x0067,
L"Trust 350FS POWERC@M FLASH"
},
{
0x06d6,
L"Aashima Technology B.V.",
0x006b,
L"TRUST AUDIO VIDEO EDITOR"
},
{
0x06d7,
L"Network Computing Devices (NCD)",
0x0,
L"0"
},
{
0x06d8,
L"Technical Marketing Research, Inc.",
0x0,
L"0"
},
{
0x06da,
L"Phoenixtec Power Co., Ltd",
0x0002,
L"UPS"
},
{
0x06da,
L"Phoenixtec Power Co., Ltd",
0x0003,
L"1300VA UPS"
},
{
0x06db,
L"Paradyne",
0x0,
L"0"
},
{
0x06dc,
L"Foxlink Image Technology Co., Ltd",
0x0012,
L"Scan 1200c Scanner"
},
{
0x06dc,
L"Foxlink Image Technology Co., Ltd",
0x0014,
L"Prolink Winscan Pro 2448U"
},
{
0x06de,
L"Heisei Electronics Co., Ltd",
0x0,
L"0"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0x0319,
L"MT9234ZBA-USB MultiModem ZBA"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0xf101,
L"MT5634ZBA-USB MultiModemUSB (old firmware)"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0xf103,
L"MT5634MU MultiMobileUSB"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0xf104,
L"MT5634ZBA-USB MultiModemUSB (new firmware)"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0xf107,
L"MT5634ZBA-USB-V92 MultiModemUSB"
},
{
0x06e0,
L"Multi-Tech Systems, Inc.",
0xf120,
L"MT9234ZBA-USB-CDC-ACM-XR MultiModem ZBA CDC-ACM-XR"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0x0008,
L"UBS-10BT Ethernet [klsi]"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0x0009,
L"UBS-10BT Ethernet"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0x0833,
L"Mass Storage Device"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa155,
L"FM Radio Receiver/Instant FM Music (RDX-155-EF)"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa160,
L"Instant Video-To-Go RDX-160 (no firmware)"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa161,
L"Instant Video-To-Go RDX-160"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa190,
L"Instand VCD Capture"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa191,
L"Instant VideoXpress"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa337,
L"Mini DigitalTV"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa701,
L"DVD Xpress"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xa708,
L"saa7114H video input card (Instant VideoMPX)"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xb337,
L"Mini DigitalTV"
},
{
0x06e1,
L"ADS Technologies, Inc.",
0xb701,
L"DVD Xpress B"
},
{
0x06e4,
L"Alcatel Microelectronics",
0x0,
L"0"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0200,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0201,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0202,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0203,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0210,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0211,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x0212,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x031c,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x031d,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x031e,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x3200,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x3201,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x3202,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x3203,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x7200,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x7210,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x7250,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x825c,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x831c,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x831d,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0x831e,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb200,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb201,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb202,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb210,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb211,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb212,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb250,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb251,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xb252,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc200,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc201,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc202,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc203,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc210,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc211,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc212,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc213,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc25c,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc290,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc291,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc292,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc293,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc31c,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc39c,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc39d,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc39e,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc39f,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc700,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc701,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc702,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc703,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc710,
L"VoIP Combo Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc711,
L"VoIP Combo"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc712,
L"VoIP Combo Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xc713,
L"VoIP Combo Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xcf00,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xcf01,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xcf02,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xcf03,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd210,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd211,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd212,
L"PPG Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd213,
L"Personal PhoneGateway"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd700,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd701,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd702,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd703,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd710,
L"VoIP Combo"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd711,
L"VoIP Combo Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd712,
L"VoIP Combo"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xd713,
L"VoIP Combo"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xdf00,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xdf01,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xdf02,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xdf03,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf200,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf201,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf202,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf203,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf210,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf250,
L"Composite Device"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf252,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf310,
L"Internet Phone"
},
{
0x06e6,
L"Tiger Jet Network, Inc.",
0xf350,
L"Composite Device"
},
{
0x06ea,
L"Sirius Technologies",
0x0001,
L"NetCom Roadster II 56k"
},
{
0x06ea,
L"Sirius Technologies",
0x0002,
L"Roadster II 56k"
},
{
0x06eb,
L"PC Expert Tech. Co., Ltd",
0x0,
L"0"
},
{
0x06ef,
L"I.A.C. Geometrische Ingenieurs B.V.",
0x0,
L"0"
},
{
0x06f0,
L"T.N.C Industrial Co., Ltd",
0xde01,
L"DualCam Video Camera"
},
{
0x06f0,
L"T.N.C Industrial Co., Ltd",
0xde02,
L"DualCam Still Camera"
},
{
0x06f1,
L"Opcode Systems, Inc.",
0xa011,
L"SonicPort"
},
{
0x06f1,
L"Opcode Systems, Inc.",
0xa021,
L"SonicPort Optical"
},
{
0x06f2,
L"Emine Technology Co.",
0x0011,
L"KVM Switch Keyboard"
},
{
0x06f6,
L"Wintrend Technology Co., Ltd",
0x0,
L"0"
},
{
0x06f7,
L"Wailly Technology Ltd",
0x0003,
L"USB->Din 4 Adaptor"
},
{
0x06f8,
L"Guillemot Corp.",
0x3002,
L"Hercules Blog Webcam"
},
{
0x06f8,
L"Guillemot Corp.",
0x3004,
L"Hercules Classic Silver"
},
{
0x06f8,
L"Guillemot Corp.",
0x3005,
L"Hercules Dualpix Exchange"
},
{
0x06f8,
L"Guillemot Corp.",
0x3007,
L"Hercules Dualpix Chat and Show"
},
{
0x06f8,
L"Guillemot Corp.",
0x3020,
L"Hercules Webcam EC300"
},
{
0x06f8,
L"Guillemot Corp.",
0xa300,
L"Dual Analog Leader GamePad"
},
{
0x06f8,
L"Guillemot Corp.",
0xb000,
L"Hercules DJ Console"
},
{
0x06f8,
L"Guillemot Corp.",
0xb121,
L"Hercules P32 DJ"
},
{
0x06f8,
L"Guillemot Corp.",
0xc000,
L"Hercules Muse Pocket"
},
{
0x06f8,
L"Guillemot Corp.",
0xd002,
L"Hercules DJ Console"
},
{
0x06f8,
L"Guillemot Corp.",
0xe000,
L"HWGUSB2-54 WLAN"
},
{
0x06f8,
L"Guillemot Corp.",
0xe010,
L"HWGUSB2-54-LB"
},
{
0x06f8,
L"Guillemot Corp.",
0xe020,
L"HWGUSB2-54V2-AP"
},
{
0x06f8,
L"Guillemot Corp.",
0xe031,
L"Hercules HWNUm-300 Wireless N mini [Realtek RTL8191SU]"
},
{
0x06f8,
L"Guillemot Corp.",
0xe032,
L"HWGUm-54 [Hercules Wireless G Ultra Mini Key]"
},
{
0x06f8,
L"Guillemot Corp.",
0xe033,
L"Hercules HWNUp-150 802.11n Wireless N Pico [Realtek RTL8188CUS]"
},
{
0x06f9,
L"ASYST electronic d.o.o.",
0x0,
L"0"
},
{
0x06fa,
L"HSD S.r.L",
0x0,
L"0"
},
{
0x06fc,
L"Motorola Semiconductor Products Sector",
0x0,
L"0"
},
{
0x06fd,
L"Boston Acoustics",
0x0101,
L"Audio Device"
},
{
0x06fd,
L"Boston Acoustics",
0x0102,
L"Audio Device"
},
{
0x06fd,
L"Boston Acoustics",
0x0201,
L"2-piece Audio Device"
},
{
0x06fe,
L"Gallant Computer, Inc.",
0x0,
L"0"
},
{
0x0701,
L"Supercomal Wire & Cable SDN. BHD.",
0x0,
L"0"
},
{
0x0703,
L"Bvtech Industry, Inc.",
0x0,
L"0"
},
{
0x0705,
L"NKK Corp.",
0x0,
L"0"
},
{
0x0706,
L"Ariel Corp.",
0x0,
L"0"
},
{
0x0707,
L"Standard Microsystems Corp.",
0x0100,
L"2202 Ethernet [klsi]"
},
{
0x0707,
L"Standard Microsystems Corp.",
0x0200,
L"2202 Ethernet [pegasus]"
},
{
0x0707,
L"Standard Microsystems Corp.",
0x0201,
L"EZ Connect USB Ethernet"
},
{
0x0707,
L"Standard Microsystems Corp.",
0xee04,
L"SMCWUSB32 802.11b Wireless LAN Card"
},
{
0x0707,
L"Standard Microsystems Corp.",
0xee06,
L"SMC2862W-G v1 EZ Connect 802.11g Adapter [Intersil ISL3886]"
},
{
0x0707,
L"Standard Microsystems Corp.",
0xee13,
L"SMC2862W-G v2 EZ Connect 802.11g Adapter [Intersil ISL3887]"
},
{
0x0708,
L"Putercom Co., Ltd",
0x047e,
L"USB-1284 BRIDGE"
},
{
0x0709,
L"Silicon Systems, Ltd (SSL)",
0x0,
L"0"
},
{
0x070a,
L"Oki Electric Industry Co., Ltd",
0x4002,
L"Bluetooth Device"
},
{
0x070a,
L"Oki Electric Industry Co., Ltd",
0x4003,
L"Bluetooth Device"
},
{
0x070d,
L"Comoss Electronic Co., Ltd",
0x0,
L"0"
},
{
0x070e,
L"Excel Cell Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0710,
L"Connect Tech, Inc.",
0x0001,
L"WhiteHeat (fake ID)"
},
{
0x0710,
L"Connect Tech, Inc.",
0x8001,
L"WhiteHeat"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0100,
L"Hub"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0180,
L"IRXpress Infrared Device"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0181,
L"IRXpress Infrared Device"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0200,
L"BAY-3U1S1P Serial Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0210,
L"MCT1S Serial Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0230,
L"MCT-232 Serial Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0231,
L"PS/2 Mouse Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0232,
L"Serial On Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0240,
L"PS/2 to USB Converter"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0300,
L"BAY-3U1S1P Parallel Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0302,
L"Parallel Port"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x0900,
L"SVGA Adapter"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x5001,
L"Trigger UV-002BD[Startech USBVGAE]"
},
{
0x0711,
L"Magic Control Technology Corp.",
0x5100,
L"Magic Control Technology Corp. (USB2VGA dongle)"
},
{
0x0713,
L"Interval Research Corp.",
0x0,
L"0"
},
{
0x0714,
L"NewMotion, Inc.",
0x0003,
L"ADB converter"
},
{
0x0717,
L"ZNK Corp.",
0x0,
L"0"
},
{
0x0718,
L"Imation Corp.",
0x0002,
L"SuperDisk 120MB"
},
{
0x0718,
L"Imation Corp.",
0x0003,
L"SuperDisk 120MB (Authenticated)"
},
{
0x0718,
L"Imation Corp.",
0x0060,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0061,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0062,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0063,
L"Swivel Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0064,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0065,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0066,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0067,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0068,
L"Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0084,
L"Flash Drive Mini"
},
{
0x0718,
L"Imation Corp.",
0x043c,
L"Flash drive 16GB [Nano Pro]"
},
{
0x0718,
L"Imation Corp.",
0x0582,
L"Revo Flash Drive"
},
{
0x0718,
L"Imation Corp.",
0x0622,
L"TDK Trans-It 4GB"
},
{
0x0718,
L"Imation Corp.",
0x0624,
L"TDK Trans-It 16GB"
},
{
0x0718,
L"Imation Corp.",
0x1120,
L"RDX External dock (redbud)"
},
{
0x0718,
L"Imation Corp.",
0x4006,
L"8x Slim DVD Multi-Format Recorder External"
},
{
0x0718,
L"Imation Corp.",
0xd000,
L"Disc Stakka CD/DVD Manager"
},
{
0x0719,
L"Tremon Enterprises Co., Ltd",
0x0,
L"0"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x0002,
L"DTI-56362-USB Digital Interface Unit"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x0101,
L"Audio4-USB DSP Data Acquisition Unit"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x0184,
L"Archos 2 8GB EM184RB"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x0201,
L"Audio4-5410 DSP Data Acquisition Unit"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x0301,
L"SB-USB JTAG Emulator"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x3203,
L"Rockchip Media Player"
},
{
0x071b,
L"Domain Technologies, Inc.",
0x32bb,
L"Music Mediatouch"
},
{
0x071c,
L"Xionics Document Technologies, Inc.",
0x0,
L"0"
},
{
0x071d,
L"Eicon Networks Corp.",
0x1000,
L"Diva 2.01 S/T [PSB2115F]"
},
{
0x071d,
L"Eicon Networks Corp.",
0x1003,
L"Diva ISDN 2.0"
},
{
0x071d,
L"Eicon Networks Corp.",
0x1005,
L"Diva ISDN 4.0 [HFC-S]"
},
{
0x071d,
L"Eicon Networks Corp.",
0x2000,
L"Teledat Surf"
},
{
0x071e,
L"Ariston Technologies",
0x0,
L"0"
},
{
0x0720,
L"Keyence Corp.",
0x8001,
L"LJ-V7001"
},
{
0x0723,
L"Centillium Communications Corp.",
0x0002,
L"Palladia 300/400 Adsl Modem"
},
{
0x0726,
L"Vanguard International Semiconductor-America",
0x0,
L"0"
},
{
0x0729,
L"Amitm",
0x1000,
L"USC-1000 Serial Port"
},
{
0x072e,
L"Sunix Co., Ltd",
0x0,
L"0"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0001,
L"AC1030-based SmartCard Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0008,
L"ACR 80 Smart Card Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0100,
L"AET65"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0101,
L"AET65"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0102,
L"AET62"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0103,
L"AET62"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x0901,
L"ACR1281U-C4 (BSI)"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x1000,
L"PLDT Drive"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x1001,
L"PLDT Drive"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2011,
L"ACR88U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2100,
L"ACR128U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2200,
L"ACR122U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x220a,
L"ACR1281U-C5 (BSI)"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x220c,
L"ACR1283 Bootloader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x220f,
L"ACR1281U-C2 (qPBOC)"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2211,
L"ACR1261 1S Dual Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2214,
L"ACR1222 1SAM PICC Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2215,
L"ACR1281 2S CL Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x221a,
L"ACR1251U-A1"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x221b,
L"ACR1251U-C"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2224,
L"ACR1281 1S Dual Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x222b,
L"ACR1222U-C8"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x222c,
L"ACR1283L-D2"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x222d,
L"[OEM Reader]"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x222e,
L"ACR123U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x2242,
L"ACR1251 1S Dual Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8002,
L"AET63 BioTRUSTKey"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8003,
L"ACR120"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8103,
L"ACR120"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8201,
L"APG8201"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8900,
L"ACR89U-A1"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8901,
L"ACR89U-A2"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x8902,
L"ACR89U-A3"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x9000,
L"ACR38 AC1038-based Smart Card Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x9006,
L"CryptoMate"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90cc,
L"ACR38 SmartCard Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90ce,
L"[OEM Reader]"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90cf,
L"ACR38 SAM Smart Card Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90d0,
L"PertoSmart EMV - Card Reader"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90d2,
L"ACR83U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90d8,
L"ACR3801"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0x90db,
L"CryptoMate64"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb000,
L"ACR3901U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb100,
L"ACR39U"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb101,
L"ACR39K"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb102,
L"ACR39T"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb103,
L"ACR39F"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb104,
L"ACR39U-SAM"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb106,
L"ACOS5T2"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb200,
L"ACOS5T1"
},
{
0x072f,
L"Advanced Card Systems, Ltd",
0xb301,
L"ACR32-A1"
},
{
0x0731,
L"Susteen, Inc.",
0x0528,
L"SonyEricsson DCU-11 Cable"
},
{
0x0732,
L"Goldfull Electronics & Telecommunications Corp.",
0x0,
L"0"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0101,
L"Digital Video Camera"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0110,
L"VQ110 Video Camera"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0401,
L"CS330 Webcam"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0402,
L"M-318B Webcam"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0430,
L"Intel Pro Share Webcam"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0630,
L"VQ630 Dual Mode Digital Camera(Bulk)"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0631,
L"Hercules Dualpix"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x0780,
L"Smart Cam Deluxe(composite)"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x1310,
L"Epsilon 1.3/Jenoptik JD C1.3/UMAX AstraPix 470 (mass storage mode)"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x1311,
L"Epsilon 1.3/Jenoptik JD C1.3/UMAX AstraPix 470 (PC Cam mode)"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x1314,
L"Mercury 2.1MEG Deluxe Classic Cam"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x2211,
L"Jenoptik jdc 21 LCD Camera"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x2221,
L"Mercury Digital Pro 3.1p"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x3261,
L"Concord 3045 spca536a Camera"
},
{
0x0733,
L"ViewQuest Technologies, Inc.",
0x3281,
L"Cyberpix S550V"
},
{
0x0734,
L"Lasat Communications A/S",
0x0001,
L"560V Modem"
},
{
0x0734,
L"Lasat Communications A/S",
0x0002,
L"Lasat 560V Modem"
},
{
0x0734,
L"Lasat Communications A/S",
0x043a,
L"DVS Audio"
},
{
0x0734,
L"Lasat Communications A/S",
0x043b,
L"3DeMon USB Capture"
},
{
0x0735,
L"Asuscom Network",
0x2100,
L"ISDN Adapter"
},
{
0x0735,
L"Asuscom Network",
0x2101,
L"ISDN Adapter"
},
{
0x0735,
L"Asuscom Network",
0x6694,
L"ISDNlink 128K"
},
{
0x0735,
L"Asuscom Network",
0xc541,
L"ISDN TA 280"
},
{
0x0736,
L"Lorom Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4507,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4516,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4520,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4526,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4536,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4540,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4556,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4566,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4576,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4586,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x4588,
L"XBox Device"
},
{
0x0738,
L"Mad Catz, Inc.",
0x8818,
L"Street Fighter IV Arcade FightStick (PS3)"
},
{
0x073a,
L"Chaplet Systems, Inc.",
0x2230,
L"infrared dongle for remote"
},
{
0x073b,
L"Suncom Technologies",
0x0,
L"0"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0305,
L"Pole Display (PC305-3415  2 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0322,
L"Pole Display (PC322-3415  2 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0324,
L"Pole Display (LB324-USB   4 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0330,
L"Pole Display (P330-3415   2 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0424,
L"Pole Display (SP324-4415  4 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0450,
L"Pole Display (L450-USB   Graphic Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0505,
L"Pole Display (SPC505-3415 2 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0522,
L"Pole Display (SPC522-3415 2 x 20 Line Display)"
},
{
0x073c,
L"Industrial Electronic Engineers, Inc.",
0x0624,
L"Pole Display (SP324-3415  4 x 20 Line Display)"
},
{
0x073d,
L"Eutron S.p.a.",
0x0005,
L"Crypto Token"
},
{
0x073d,
L"Eutron S.p.a.",
0x0007,
L"CryptoIdentity CCID"
},
{
0x073d,
L"Eutron S.p.a.",
0x0025,
L"SmartKey 3"
},
{
0x073d,
L"Eutron S.p.a.",
0x0c00,
L"Pocket Reader"
},
{
0x073d,
L"Eutron S.p.a.",
0x0d00,
L"StarSign Bio Token 3.0 EU"
},
{
0x073e,
L"NEC, Inc.",
0x0301,
L"Game Pad"
},
{
0x0742,
L"Stollmann",
0x2008,
L"ISDN TA [HFC-S]"
},
{
0x0742,
L"Stollmann",
0x2009,
L"ISDN TA [HFC-S]"
},
{
0x0742,
L"Stollmann",
0x200a,
L"ISDN TA [HFC-S]"
},
{
0x0745,
L"Syntech Information Co., Ltd",
0x0,
L"0"
},
{
0x0746,
L"Onkyo Corp.",
0x5500,
L"SE-U55 Audio Device"
},
{
0x0747,
L"Labway Corp.",
0x0,
L"0"
},
{
0x0748,
L"Strong Man Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0749,
L"EVer Electronics Corp.",
0x0,
L"0"
},
{
0x074a,
L"Ming Fortune Industry Co., Ltd",
0x0,
L"0"
},
{
0x074b,
L"Polestar Tech. Corp.",
0x0,
L"0"
},
{
0x074c,
L"C-C-C Group PLC",
0x0,
L"0"
},
{
0x074d,
L"Micronas GmbH",
0x3553,
L"Composite USB-Device"
},
{
0x074d,
L"Micronas GmbH",
0x3554,
L"Composite USB-Device"
},
{
0x074d,
L"Micronas GmbH",
0x3556,
L"Composite USB-Device"
},
{
0x074e,
L"Digital Stream Corp.",
0x0001,
L"PS/2 Adapter"
},
{
0x074e,
L"Digital Stream Corp.",
0x0002,
L"PS/2 Adapter"
},
{
0x0755,
L"Aureal Semiconductor",
0x0,
L"0"
},
{
0x0757,
L"Network Technologies, Inc.",
0x0,
L"0"
},
{
0x0758,
L"Carl Zeiss Microscopy GmbH",
0x0,
L"0"
},
{
0x075b,
L"Sophisticated Circuits, Inc.",
0x0001,
L"Kick-off! Watchdog"
},
{
0x0763,
L"M-Audio",
0x0115,
L"O2 / KeyRig 25"
},
{
0x0763,
L"M-Audio",
0x0117,
L"Trigger Finger"
},
{
0x0763,
L"M-Audio",
0x0119,
L"MidAir"
},
{
0x0763,
L"M-Audio",
0x0150,
L"M-Audio Uno"
},
{
0x0763,
L"M-Audio",
0x0160,
L"M-Audio 1x1"
},
{
0x0763,
L"M-Audio",
0x0192,
L"M-Audio Keystation 88es"
},
{
0x0763,
L"M-Audio",
0x0193,
L"ProKeys 88"
},
{
0x0763,
L"M-Audio",
0x0194,
L"ProKeys 88sx"
},
{
0x0763,
L"M-Audio",
0x0195,
L"Oxygen 8 v2"
},
{
0x0763,
L"M-Audio",
0x0196,
L"Oxygen 49"
},
{
0x0763,
L"M-Audio",
0x0197,
L"Oxygen 61"
},
{
0x0763,
L"M-Audio",
0x0198,
L"Axiom 25"
},
{
0x0763,
L"M-Audio",
0x0199,
L"Axiom 49"
},
{
0x0763,
L"M-Audio",
0x019a,
L"Axiom 61"
},
{
0x0763,
L"M-Audio",
0x019b,
L"KeyRig 49"
},
{
0x0763,
L"M-Audio",
0x019c,
L"KeyStudio"
},
{
0x0763,
L"M-Audio",
0x1001,
L"MidiSport 2x2"
},
{
0x0763,
L"M-Audio",
0x1002,
L"MidiSport 2x2"
},
{
0x0763,
L"M-Audio",
0x1003,
L"MidiSport 2x2"
},
{
0x0763,
L"M-Audio",
0x1010,
L"MidiSport 1x1"
},
{
0x0763,
L"M-Audio",
0x1011,
L"MidiSport 1x1"
},
{
0x0763,
L"M-Audio",
0x1014,
L"M-Audio Keystation Loader"
},
{
0x0763,
L"M-Audio",
0x1015,
L"M-Audio Keystation"
},
{
0x0763,
L"M-Audio",
0x1020,
L"Midisport 4x4"
},
{
0x0763,
L"M-Audio",
0x1021,
L"MidiSport 4x4"
},
{
0x0763,
L"M-Audio",
0x1030,
L"M-Audio MIDISPORT 8x8"
},
{
0x0763,
L"M-Audio",
0x1031,
L"MidiSport 8x8/s Loader"
},
{
0x0763,
L"M-Audio",
0x1033,
L"MidiSport 8x8/s"
},
{
0x0763,
L"M-Audio",
0x1040,
L"M-Audio MidiSport 2x4 Loader"
},
{
0x0763,
L"M-Audio",
0x1041,
L"M-Audio MidiSport 2x4"
},
{
0x0763,
L"M-Audio",
0x1110,
L"MidiSport 1x1"
},
{
0x0763,
L"M-Audio",
0x2001,
L"M Audio Quattro"
},
{
0x0763,
L"M-Audio",
0x2002,
L"M Audio Duo"
},
{
0x0763,
L"M-Audio",
0x2003,
L"M Audio AudioPhile"
},
{
0x0763,
L"M-Audio",
0x2004,
L"M-Audio MobilePre"
},
{
0x0763,
L"M-Audio",
0x2006,
L"M-Audio Transit"
},
{
0x0763,
L"M-Audio",
0x2007,
L"M-Audio Sonica Theater"
},
{
0x0763,
L"M-Audio",
0x2008,
L"M-Audio Ozone"
},
{
0x0763,
L"M-Audio",
0x200d,
L"M-Audio OmniStudio"
},
{
0x0763,
L"M-Audio",
0x200f,
L"M-Audio MobilePre"
},
{
0x0763,
L"M-Audio",
0x2010,
L"M-Audio Fast Track"
},
{
0x0763,
L"M-Audio",
0x2012,
L"M-Audio Fast Track Pro"
},
{
0x0763,
L"M-Audio",
0x2013,
L"M-Audio JamLab"
},
{
0x0763,
L"M-Audio",
0x2015,
L"M-Audio RunTime DFU"
},
{
0x0763,
L"M-Audio",
0x2016,
L"M-Audio RunTime DFU"
},
{
0x0763,
L"M-Audio",
0x2019,
L"M-Audio Ozone Academic"
},
{
0x0763,
L"M-Audio",
0x201a,
L"M-Audio Micro"
},
{
0x0763,
L"M-Audio",
0x201b,
L"M-Audio RunTime DFU"
},
{
0x0763,
L"M-Audio",
0x201d,
L"M-Audio Producer"
},
{
0x0763,
L"M-Audio",
0x2024,
L"M-Audio Fast Track MKII"
},
{
0x0763,
L"M-Audio",
0x2080,
L"M-Audio Fast Track Ultra"
},
{
0x0763,
L"M-Audio",
0x2081,
L"M-Audio RunTime DFU / Fast Track Ultra 8R"
},
{
0x0763,
L"M-Audio",
0x2803,
L"M-Audio Audiophile DFU"
},
{
0x0763,
L"M-Audio",
0x2804,
L"M-Audio MobilePre DFU"
},
{
0x0763,
L"M-Audio",
0x2806,
L"M-Audio Transit DFU"
},
{
0x0763,
L"M-Audio",
0x2815,
L"M-Audio DFU"
},
{
0x0763,
L"M-Audio",
0x2816,
L"M-Audio DFU"
},
{
0x0763,
L"M-Audio",
0x281b,
L"M-Audio DFU"
},
{
0x0763,
L"M-Audio",
0x2880,
L"M-Audio DFU"
},
{
0x0763,
L"M-Audio",
0x2881,
L"M-Audio DFU"
},
{
0x0764,
L"Cyber Power System, Inc.",
0x0005,
L"Cyber Power UPS"
},
{
0x0764,
L"Cyber Power System, Inc.",
0x0501,
L"CP1500 AVR UPS"
},
{
0x0764,
L"Cyber Power System, Inc.",
0x0601,
L"PR1500LCDRT2U UPS"
},
{
0x0765,
L"X-Rite, Inc.",
0x5001,
L"Huey PRO Colorimeter"
},
{
0x0765,
L"X-Rite, Inc.",
0x5010,
L"X-Rite Pantone Color Sensor"
},
{
0x0765,
L"X-Rite, Inc.",
0x5020,
L"i1 Display Pro"
},
{
0x0765,
L"X-Rite, Inc.",
0x6003,
L"ColorMunki Smile"
},
{
0x0765,
L"X-Rite, Inc.",
0xd094,
L"X-Rite DTP94 [Quato Silver Haze Pro]"
},
{
0x0766,
L"Jess-Link Products Co., Ltd",
0x001b,
L"Packard Bell Go"
},
{
0x0766,
L"Jess-Link Products Co., Ltd",
0x0204,
L"TopSpeed Cyberlink Remote Control"
},
{
0x0767,
L"Tokheim Corp.",
0x0,
L"0"
},
{
0x0768,
L"Camtel Technology Corp.",
0x0006,
L"Camtel Technology USB TV Genie Pro FM Model TVB330"
},
{
0x0768,
L"Camtel Technology Corp.",
0x0023,
L"eHome Infrared Receiver"
},
{
0x0769,
L"Surecom Technology Corp.",
0x11f2,
L"EP-9001-g 802.11g 54M WLAN Adapter"
},
{
0x0769,
L"Surecom Technology Corp.",
0x11f3,
L"RT2570"
},
{
0x0769,
L"Surecom Technology Corp.",
0x11f7,
L"802.11g 54M WLAN Adapter"
},
{
0x0769,
L"Surecom Technology Corp.",
0x31f3,
L"RT2573"
},
{
0x076a,
L"Smart Technology Enablers, Inc.",
0x0,
L"0"
},
{
0x076b,
L"OmniKey AG",
0x0596,
L"CardMan 2020"
},
{
0x076b,
L"OmniKey AG",
0x1021,
L"CardMan 1021"
},
{
0x076b,
L"OmniKey AG",
0x1221,
L"CardMan 1221"
},
{
0x076b,
L"OmniKey AG",
0x1784,
L"CardMan 6020"
},
{
0x076b,
L"OmniKey AG",
0x3021,
L"CardMan 3121"
},
{
0x076b,
L"OmniKey AG",
0x3022,
L"CardMan 3021"
},
{
0x076b,
L"OmniKey AG",
0x3610,
L"CardMan 3620"
},
{
0x076b,
L"OmniKey AG",
0x3621,
L"CardMan 3621"
},
{
0x076b,
L"OmniKey AG",
0x3821,
L"CardMan 3821"
},
{
0x076b,
L"OmniKey AG",
0x4321,
L"CardMan 4321"
},
{
0x076b,
L"OmniKey AG",
0x5121,
L"CardMan 5121"
},
{
0x076b,
L"OmniKey AG",
0x5125,
L"CardMan 5125"
},
{
0x076b,
L"OmniKey AG",
0x5321,
L"CardMan 5321"
},
{
0x076b,
L"OmniKey AG",
0x5340,
L"CardMan 5021 CL"
},
{
0x076b,
L"OmniKey AG",
0x6622,
L"CardMan 6121"
},
{
0x076b,
L"OmniKey AG",
0xa011,
L"CCID Smart Card Reader Keyboard"
},
{
0x076b,
L"OmniKey AG",
0xa021,
L"CCID Smart Card Reader"
},
{
0x076b,
L"OmniKey AG",
0xa022,
L"CardMan Smart@Link"
},
{
0x076b,
L"OmniKey AG",
0xc000,
L"CardMan 3x21 CS"
},
{
0x076b,
L"OmniKey AG",
0xc001,
L"CardMan 5121 CS"
},
{
0x076c,
L"Partner Tech",
0x0,
L"0"
},
{
0x076d,
L"Denso Corp.",
0x0,
L"0"
},
{
0x076e,
L"Kuan Tech Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x076f,
L"Jhen Vei Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0770,
L"Welch Allyn, Inc - Medical Division",
0x0,
L"0"
},
{
0x0771,
L"Observator Instruments BV",
0x4455,
L"OMC45III"
},
{
0x0771,
L"Observator Instruments BV",
0xae0f,
L"OMC45III"
},
{
0x0772,
L"Your data Our Care",
0x0,
L"0"
},
{
0x0774,
L"AmTRAN Technology Co., Ltd",
0x0,
L"0"
},
{
0x0775,
L"Longshine Electronics Corp.",
0x0,
L"0"
},
{
0x0776,
L"Inalways Corp.",
0x0,
L"0"
},
{
0x0777,
L"Comda Enterprise Corp.",
0x0,
L"0"
},
{
0x0778,
L"Volex, Inc.",
0x0,
L"0"
},
{
0x0779,
L"Fairchild Semiconductor",
0x0,
L"0"
},
{
0x077a,
L"Sankyo Seiki Mfg. Co., Ltd",
0x0,
L"0"
},
{
0x077b,
L"Linksys",
0x08be,
L"BEFCMU10 v4 Cable Modem"
},
{
0x077b,
L"Linksys",
0x2219,
L"WUSB11 V2.6 802.11b Adapter"
},
{
0x077b,
L"Linksys",
0x2226,
L"USB200M 100baseTX Adapter"
},
{
0x077b,
L"Linksys",
0x2227,
L"Network Everywhere NWU11B"
},
{
0x077c,
L"Forward Electronics Co., Ltd",
0x0005,
L"NEC Keyboard"
},
{
0x077d,
L"Griffin Technology",
0x0223,
L"IMic Audio In/Out"
},
{
0x077d,
L"Griffin Technology",
0x0405,
L"iMate, ADB Adapter"
},
{
0x077d,
L"Griffin Technology",
0x0410,
L"PowerMate"
},
{
0x077d,
L"Griffin Technology",
0x041a,
L"PowerWave"
},
{
0x077d,
L"Griffin Technology",
0x04aa,
L"SoundKnob"
},
{
0x077d,
L"Griffin Technology",
0x07af,
L"iMic"
},
{
0x077d,
L"Griffin Technology",
0x1016,
L"AirClick"
},
{
0x077d,
L"Griffin Technology",
0x627a,
L"Radio SHARK"
},
{
0x077f,
L"Well Excellent & Most Corp.",
0x0,
L"0"
},
{
0x0780,
L"Sagem Monetel GmbH",
0x1202,
L"ORGA 900 Smart Card Terminal Virtual Com Port"
},
{
0x0780,
L"Sagem Monetel GmbH",
0x1302,
L"ORGA 6000 Smart Card Terminal Virtual Com Port"
},
{
0x0780,
L"Sagem Monetel GmbH",
0x1303,
L"ORGA 6000 Smart Card Terminal USB RNDIS"
},
{
0x0780,
L"Sagem Monetel GmbH",
0xdf55,
L"ORGA 900/6000 Smart Card Terminal DFU"
},
{
0x0781,
L"SanDisk Corp.",
0x0001,
L"SDDR-05a ImageMate CompactFlash Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0002,
L"SDDR-31 ImageMate II CompactFlash Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0005,
L"SDDR-05b (CF II) ImageMate CompactFlash Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0100,
L"ImageMate SDDR-12"
},
{
0x0781,
L"SanDisk Corp.",
0x0200,
L"SDDR-09 (SSFDC) ImageMate SmartMedia Reader [eusb]"
},
{
0x0781,
L"SanDisk Corp.",
0x0400,
L"SecureMate SD/MMC Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0621,
L"SDDR-86 Imagemate 6-in-1 Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0720,
L"Sansa C200 series in recovery mode"
},
{
0x0781,
L"SanDisk Corp.",
0x0729,
L"Sansa E200 series in recovery mode"
},
{
0x0781,
L"SanDisk Corp.",
0x0810,
L"SDDR-75 ImageMate CF-SM Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x0830,
L"ImageMate CF/MMC/SD Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x1234,
L"Cruzer Mini Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x5150,
L"SDCZ2 Cruzer Mini Flash Drive (thin)"
},
{
0x0781,
L"SanDisk Corp.",
0x5151,
L"Cruzer Micro Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x5153,
L"Cruzer Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x5204,
L"Cruzer Crossfire"
},
{
0x0781,
L"SanDisk Corp.",
0x5402,
L"U3 Cruzer Micro"
},
{
0x0781,
L"SanDisk Corp.",
0x5406,
L"Cruzer Micro U3"
},
{
0x0781,
L"SanDisk Corp.",
0x5408,
L"Cruzer Titanium U3"
},
{
0x0781,
L"SanDisk Corp.",
0x540e,
L"Cruzer Contour Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x5530,
L"Cruzer"
},
{
0x0781,
L"SanDisk Corp.",
0x5567,
L"Cruzer Blade"
},
{
0x0781,
L"SanDisk Corp.",
0x556b,
L"Cruzer Edge"
},
{
0x0781,
L"SanDisk Corp.",
0x556c,
L"Ultra"
},
{
0x0781,
L"SanDisk Corp.",
0x556d,
L"Memory Vault"
},
{
0x0781,
L"SanDisk Corp.",
0x5571,
L"Cruzer Fit"
},
{
0x0781,
L"SanDisk Corp.",
0x5575,
L"Cruzer Glide"
},
{
0x0781,
L"SanDisk Corp.",
0x5576,
L"Cruzer Facet"
},
{
0x0781,
L"SanDisk Corp.",
0x5577,
L"Cruzer Pop (8GB)"
},
{
0x0781,
L"SanDisk Corp.",
0x557d,
L"Cruzer Force (64GB)"
},
{
0x0781,
L"SanDisk Corp.",
0x5580,
L"SDCZ80 Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x5581,
L"Ultra"
},
{
0x0781,
L"SanDisk Corp.",
0x5583,
L"Ultra Fit"
},
{
0x0781,
L"SanDisk Corp.",
0x5590,
L"Ultra Dual"
},
{
0x0781,
L"SanDisk Corp.",
0x5591,
L"Ultra Flair"
},
{
0x0781,
L"SanDisk Corp.",
0x5e10,
L"Encrypted"
},
{
0x0781,
L"SanDisk Corp.",
0x6100,
L"Ultra II SD Plus 2GB"
},
{
0x0781,
L"SanDisk Corp.",
0x7100,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7101,
L"Pen Flash"
},
{
0x0781,
L"SanDisk Corp.",
0x7102,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7103,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7104,
L"Cruzer Micro Mini 256MB Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x7105,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7106,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7112,
L"Cruzer Micro 128MB Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x7113,
L"Cruzer Micro 256MB Flash Drive"
},
{
0x0781,
L"SanDisk Corp.",
0x7114,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7115,
L"Cruzer Mini"
},
{
0x0781,
L"SanDisk Corp.",
0x7301,
L"Sansa e100 series (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7302,
L"Sansa e100 series (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7400,
L"Sansa M200 series (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7401,
L"Sansa M200 series (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7420,
L"Sansa E200 series (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7421,
L"Sansa E200 Series (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7422,
L"Sansa E200 series v2 (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7423,
L"Sansa E200 series v2 (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7430,
L"Sansa M200 series"
},
{
0x0781,
L"SanDisk Corp.",
0x7431,
L"Sansa M200 series V4 (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7432,
L"Sansa Clip (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7433,
L"Sansa Clip (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7434,
L"Sansa Clip V2 (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x7435,
L"Sansa Clip V2 (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x7450,
L"Sansa C250"
},
{
0x0781,
L"SanDisk Corp.",
0x7451,
L"Sansa C240"
},
{
0x0781,
L"SanDisk Corp.",
0x7460,
L"Sansa Express"
},
{
0x0781,
L"SanDisk Corp.",
0x7480,
L"Sansa Connect"
},
{
0x0781,
L"SanDisk Corp.",
0x7481,
L"Sansa Connect (in recovery mode)"
},
{
0x0781,
L"SanDisk Corp.",
0x74b0,
L"Sansa View (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x74b1,
L"Sansa View (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x74c0,
L"Sansa Fuze (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x74c1,
L"Sansa Fuze (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x74c2,
L"Sansa Fuze V2 (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x74c3,
L"Sansa Fuze V2 (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x74d0,
L"Sansa Clip+ (mtp)"
},
{
0x0781,
L"SanDisk Corp.",
0x74d1,
L"Sansa Clip+ (msc)"
},
{
0x0781,
L"SanDisk Corp.",
0x74e5,
L"Sansa Clip Zip"
},
{
0x0781,
L"SanDisk Corp.",
0x8181,
L"Pen Flash"
},
{
0x0781,
L"SanDisk Corp.",
0x8183,
L"Hi-Speed Mass Storage Device"
},
{
0x0781,
L"SanDisk Corp.",
0x8185,
L"SDCZ2 Cruzer Mini Flash Drive (older, thick)"
},
{
0x0781,
L"SanDisk Corp.",
0x8888,
L"Card Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x8889,
L"SDDR-88 Imagemate 8-in-1 Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x8919,
L"Card Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x8989,
L"ImageMate 12-in-1 Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x9191,
L"ImageMate CF"
},
{
0x0781,
L"SanDisk Corp.",
0x9219,
L"Card Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x9292,
L"ImageMate CF Reader/Writer"
},
{
0x0781,
L"SanDisk Corp.",
0x9393,
L"ImageMate SD-MMC"
},
{
0x0781,
L"SanDisk Corp.",
0x9595,
L"ImageMate xD-SM"
},
{
0x0781,
L"SanDisk Corp.",
0x9797,
L"ImageMate MS-PRO"
},
{
0x0781,
L"SanDisk Corp.",
0x9919,
L"Card Reader"
},
{
0x0781,
L"SanDisk Corp.",
0x9999,
L"SDDR-99 5-in-1 Reader"
},
{
0x0781,
L"SanDisk Corp.",
0xa7c1,
L"Storage device (SD card reader)"
},
{
0x0781,
L"SanDisk Corp.",
0xa7e8,
L"SDDR-113 MicroMate SDHC Reader"
},
{
0x0781,
L"SanDisk Corp.",
0xb2b3,
L"SDDR-103 MobileMate SD+ Reader"
},
{
0x0781,
L"SanDisk Corp.",
0xb4b5,
L"SDDR-89 V4 ImageMate 12-in-1 Reader"
},
{
0x0781,
L"SanDisk Corp.",
0xb6ba,
L"CF SDDR-289"
},
{
0x0782,
L"Trackerball",
0x0,
L"0"
},
{
0x0783,
L"C3PO",
0x0003,
L"LTC31 SmartCard Reader"
},
{
0x0783,
L"C3PO",
0x0006,
L"LTC31v2"
},
{
0x0783,
L"C3PO",
0x0009,
L"KBR36"
},
{
0x0783,
L"C3PO",
0x0010,
L"LTC32"
},
{
0x0784,
L"Vivitar, Inc.",
0x0100,
L"Vivicam 2655"
},
{
0x0784,
L"Vivitar, Inc.",
0x1310,
L"Vivicam 3305"
},
{
0x0784,
L"Vivitar, Inc.",
0x1688,
L"Vivicam 3665"
},
{
0x0784,
L"Vivitar, Inc.",
0x1689,
L"Gateway DC-M42/Labtec DC-505/Vivitar Vivicam 3705"
},
{
0x0784,
L"Vivitar, Inc.",
0x2620,
L"AOL Photocam Plus"
},
{
0x0784,
L"Vivitar, Inc.",
0x2888,
L"Polaroid DC700"
},
{
0x0784,
L"Vivitar, Inc.",
0x3330,
L"Nytec ND-3200 Camera"
},
{
0x0784,
L"Vivitar, Inc.",
0x4300,
L"Traveler D1"
},
{
0x0784,
L"Vivitar, Inc.",
0x5260,
L"Werlisa Sport PX 100 / JVC GC-A33 Camera"
},
{
0x0784,
L"Vivitar, Inc.",
0x5300,
L"Pretec dc530"
},
{
0x0785,
L"NTT-ME",
0x0001,
L"MN128mini-V ISDN TA"
},
{
0x0785,
L"NTT-ME",
0x0003,
L"MN128mini-J ISDN TA"
},
{
0x0789,
L"Logitec Corp.",
0x0026,
L"LHD Device"
},
{
0x0789,
L"Logitec Corp.",
0x0033,
L"DVD Multi-plus unit LDR-H443SU2"
},
{
0x0789,
L"Logitec Corp.",
0x0063,
L"LDR Device"
},
{
0x0789,
L"Logitec Corp.",
0x0064,
L"LDR-R Device"
},
{
0x0789,
L"Logitec Corp.",
0x00b3,
L"DVD Multi-plus unit LDR-H443U2"
},
{
0x0789,
L"Logitec Corp.",
0x0105,
L"LAN-TX/U1H2 10/100 Ethernet Adapter [pegasus II]"
},
{
0x0789,
L"Logitec Corp.",
0x010c,
L"Realtek RTL8187 Wireless 802.11g 54Mbps Network Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0160,
L"LAN-GTJ/U2A"
},
{
0x0789,
L"Logitec Corp.",
0x0162,
L"LAN-WN22/U2 Wireless LAN Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0163,
L"LAN-WN12/U2 Wireless LAN Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0164,
L"LAN-W150/U2M Wireless LAN Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0166,
L"LAN-W300N/U2 Wireless LAN Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0168,
L"LAN-W150N/U2 Wireless LAN Adapter"
},
{
0x0789,
L"Logitec Corp.",
0x0170,
L"LAN-W300AN/U2 Wireless LAN Adapter"
},
{
0x078b,
L"Happ Controls, Inc.",
0x0010,
L"Driving UGCI"
},
{
0x078b,
L"Happ Controls, Inc.",
0x0020,
L"Flying UGCI"
},
{
0x078b,
L"Happ Controls, Inc.",
0x0030,
L"Fighting UGCI"
},
{
0x078c,
L"GTCO/CalComp",
0x0090,
L"Tablet Adapter"
},
{
0x078c,
L"GTCO/CalComp",
0x0100,
L"Tablet Adapter"
},
{
0x078c,
L"GTCO/CalComp",
0x0200,
L"Tablet Adapter"
},
{
0x078c,
L"GTCO/CalComp",
0x0300,
L"Tablet Adapter"
},
{
0x078c,
L"GTCO/CalComp",
0x0400,
L"Digitizer (Whiteboard)"
},
{
0x078e,
L"Brincom, Inc.",
0x0,
L"0"
},
{
0x0790,
L"Pro-Image Manufacturing Co., Ltd",
0x0,
L"0"
},
{
0x0791,
L"Copartner Wire and Cable Mfg. Corp.",
0x0,
L"0"
},
{
0x0792,
L"Axis Communications AB",
0x0,
L"0"
},
{
0x0793,
L"Wha Yu Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0794,
L"ABL Electronics Corp.",
0x0,
L"0"
},
{
0x0795,
L"RealChip, Inc.",
0x0,
L"0"
},
{
0x0796,
L"Certicom Corp.",
0x0,
L"0"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x6801,
L"Flatbed Scanner"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x6802,
L"InkJet Color Printer"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x8001,
L"SmartCam"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x801a,
L"Typhoon StyloCam"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x801c,
L"Meade Binoculars/Camera"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x8901,
L"ScanHex SX-35a"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x8909,
L"ScanHex SX-35b"
},
{
0x0797,
L"Grandtech Semiconductor Corp.",
0x8911,
L"ScanHex SX-35c"
},
{
0x0798,
L"Optelec",
0x0001,
L"Braille Voyager"
},
{
0x0798,
L"Optelec",
0x0640,
L"BC640"
},
{
0x0798,
L"Optelec",
0x0680,
L"BC680"
},
{
0x0799,
L"Altera",
0x7651,
L"Programming Unit"
},
{
0x079b,
L"Sagem",
0x0024,
L"MSO300/MSO301 Fingerprint Sensor"
},
{
0x079b,
L"Sagem",
0x0026,
L"MSO350/MSO351 Fingerprint Sensor & SmartCard Reader"
},
{
0x079b,
L"Sagem",
0x0027,
L"USB-Serial Controller"
},
{
0x079b,
L"Sagem",
0x002f,
L"Mobile"
},
{
0x079b,
L"Sagem",
0x0030,
L"Mobile Communication Device"
},
{
0x079b,
L"Sagem",
0x0042,
L"Mobile"
},
{
0x079b,
L"Sagem",
0x0047,
L"CBM/MSO1300 Fingerprint Sensor"
},
{
0x079b,
L"Sagem",
0x004a,
L"XG-760A 802.11bg"
},
{
0x079b,
L"Sagem",
0x004b,
L"Wi-Fi 11g adapter"
},
{
0x079b,
L"Sagem",
0x0052,
L"MSO1350 Fingerprint Sensor & SmartCard Reader"
},
{
0x079b,
L"Sagem",
0x0056,
L"Agfa AP1100 Photo Printer"
},
{
0x079b,
L"Sagem",
0x005d,
L"Mobile Mass Storage"
},
{
0x079b,
L"Sagem",
0x0062,
L"XG-76NA 802.11bg"
},
{
0x079b,
L"Sagem",
0x0078,
L"Laser Pro Monochrome MFP"
},
{
0x079d,
L"Alfadata Computer Corp.",
0x0201,
L"GamePort Adapter"
},
{
0x07a1,
L"Digicom S.p.A.",
0xd952,
L"Palladio USB V.92 Modem"
},
{
0x07a2,
L"National Technical Systems",
0x0,
L"0"
},
{
0x07a3,
L"Onnto Corp.",
0x0,
L"0"
},
{
0x07a4,
L"Be, Inc.",
0x0,
L"0"
},
{
0x07a6,
L"ADMtek, Inc.",
0x07c2,
L"AN986A Ethernet"
},
{
0x07a6,
L"ADMtek, Inc.",
0x0986,
L"AN986 Pegasus Ethernet"
},
{
0x07a6,
L"ADMtek, Inc.",
0x8266,
L"Infineon WildCard-USB Wireless LAN Adapter"
},
{
0x07a6,
L"ADMtek, Inc.",
0x8511,
L"ADM8511 Pegasus II Ethernet"
},
{
0x07a6,
L"ADMtek, Inc.",
0x8513,
L"AN8513 Ethernet"
},
{
0x07a6,
L"ADMtek, Inc.",
0x8515,
L"AN8515 Ethernet"
},
{
0x07aa,
L"Corega K.K.",
0x0001,
L"Ether USB-T Ethernet [klsi]"
},
{
0x07aa,
L"Corega K.K.",
0x0004,
L"FEther USB-TX Ethernet [pegasus]"
},
{
0x07aa,
L"Corega K.K.",
0x000c,
L"WirelessLAN USB-11"
},
{
0x07aa,
L"Corega K.K.",
0x000d,
L"FEther USB-TXS"
},
{
0x07aa,
L"Corega K.K.",
0x0011,
L"Wireless LAN USB-11 mini"
},
{
0x07aa,
L"Corega K.K.",
0x0012,
L"Stick-11 802.11b Adapter"
},
{
0x07aa,
L"Corega K.K.",
0x0017,
L"FEther USB2-TX"
},
{
0x07aa,
L"Corega K.K.",
0x0018,
L"Wireless LAN USB-11 mini 2"
},
{
0x07aa,
L"Corega K.K.",
0x001a,
L"ULUSB-11 Key"
},
{
0x07aa,
L"Corega K.K.",
0x001c,
L"CG-WLUSB2GT 802.11g Wireless Adapter [Intersil ISL3880]"
},
{
0x07aa,
L"Corega K.K.",
0x0020,
L"CG-WLUSB2GTST 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x07aa,
L"Corega K.K.",
0x002e,
L"CG-WLUSB2GPX [Ralink RT2571W]"
},
{
0x07aa,
L"Corega K.K.",
0x002f,
L"CG-WLUSB2GNL"
},
{
0x07aa,
L"Corega K.K.",
0x0031,
L"CG-WLUSB2GS 802.11bg [Atheros AR5523]"
},
{
0x07aa,
L"Corega K.K.",
0x003c,
L"CG-WLUSB2GNL"
},
{
0x07aa,
L"Corega K.K.",
0x003f,
L"CG-WLUSB300AGN"
},
{
0x07aa,
L"Corega K.K.",
0x0041,
L"CG-WLUSB300GNS"
},
{
0x07aa,
L"Corega K.K.",
0x0042,
L"CG-WLUSB300GNM"
},
{
0x07aa,
L"Corega K.K.",
0x0043,
L"CG-WLUSB300N rev A2 [Realtek RTL8192U]"
},
{
0x07aa,
L"Corega K.K.",
0x0047,
L"CG-WLUSBNM"
},
{
0x07aa,
L"Corega K.K.",
0x0051,
L"CG-WLUSB300NM"
},
{
0x07aa,
L"Corega K.K.",
0x7613,
L"Stick-11 V2 802.11b Adapter"
},
{
0x07aa,
L"Corega K.K.",
0x9601,
L"FEther USB-TXC"
},
{
0x07ab,
L"Freecom Technologies",
0xfc01,
L"IDE bridge"
},
{
0x07ab,
L"Freecom Technologies",
0xfc02,
L"Cable II USB-2"
},
{
0x07ab,
L"Freecom Technologies",
0xfc03,
L"USB2-IDE IDE bridge"
},
{
0x07ab,
L"Freecom Technologies",
0xfcd6,
L"Freecom HD Classic"
},
{
0x07ab,
L"Freecom Technologies",
0xfcf6,
L"DataBar"
},
{
0x07ab,
L"Freecom Technologies",
0xfcf8,
L"Freecom Classic SL Network Drive"
},
{
0x07ab,
L"Freecom Technologies",
0xfcfe,
L"Hard Drive 80GB"
},
{
0x07af,
L"Microtech",
0x0004,
L"SCSI-DB25 SCSI Bridge [shuttle]"
},
{
0x07af,
L"Microtech",
0x0005,
L"SCSI-HD50 SCSI Bridge [shuttle]"
},
{
0x07af,
L"Microtech",
0x0006,
L"CameraMate SmartMedia and CompactFlash Card Reader [eusb/shuttle]"
},
{
0x07af,
L"Microtech",
0xfc01,
L"Freecom USB-IDE"
},
{
0x07b0,
L"Trust Technologies",
0x0001,
L"ISDN TA"
},
{
0x07b0,
L"Trust Technologies",
0x0002,
L"ISDN TA128 Plus"
},
{
0x07b0,
L"Trust Technologies",
0x0003,
L"ISDN TA128 Deluxe"
},
{
0x07b0,
L"Trust Technologies",
0x0005,
L"ISDN TA128 SE"
},
{
0x07b0,
L"Trust Technologies",
0x0006,
L"ISDN TA 128 [HFC-S]"
},
{
0x07b0,
L"Trust Technologies",
0x0007,
L"ISDN TA [HFC-S]"
},
{
0x07b0,
L"Trust Technologies",
0x0008,
L"ISDN TA"
},
{
0x07b1,
L"IMP, Inc.",
0x0,
L"0"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x0100,
L"SURFboard Voice over IP Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x0900,
L"SURFboard Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x0950,
L"SURFboard SBG950 Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x1000,
L"SURFboard SBG1000 Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x4100,
L"SurfBoard SB4100 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x4200,
L"SurfBoard SB4200 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x4210,
L"SurfBoard 4210 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x4220,
L"SURFboard SB4220 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x4500,
L"CG4500 Communications Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x450b,
L"CG4501 Communications Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x450e,
L"CG4500E Communications Gateway"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x5100,
L"SurfBoard SB5100 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x5101,
L"SurfBoard SB5101 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x5120,
L"SurfBoard SB5120 Cable Modem (RNDIS)"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x5121,
L"Surfboard 5121 Cable Modem"
},
{
0x07b2,
L"Motorola BCS, Inc.",
0x7030,
L"WU830G 802.11bg Wireless Adapter [Envara WiND512]"
},
{
0x07b3,
L"Plustek, Inc.",
0x0001,
L"OpticPro 1212U Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0003,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0010,
L"OpticPro U12 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0011,
L"OpticPro U24 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0013,
L"OpticPro UT12 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0014,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0015,
L"OpticPro U24 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0017,
L"OpticPro UT12/16/24 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0204,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0400,
L"OpticPro 1248U Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0401,
L"OpticPro 1248U Scanner #2"
},
{
0x07b3,
L"Plustek, Inc.",
0x0403,
L"OpticPro U16B Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0404,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0405,
L"A8 Namecard-s Controller"
},
{
0x07b3,
L"Plustek, Inc.",
0x0406,
L"A8 Namecard-D Controller"
},
{
0x07b3,
L"Plustek, Inc.",
0x0410,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0412,
L"Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0413,
L"OpticSlim 1200 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0601,
L"OpticPro ST24 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0800,
L"OpticPro ST48 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0900,
L"OpticBook 3600 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x090c,
L"OpticBook 3600 Plus Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0a06,
L"TVcam VD100"
},
{
0x07b3,
L"Plustek, Inc.",
0x0b00,
L"SmartPhoto F50"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c00,
L"OpticPro ST64 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c03,
L"OpticPro ST64+ Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c04,
L"Optic Film 7200i scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c0c,
L"PL806 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c26,
L"OpticBook 4600 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0c2b,
L"Mobile Office D428 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x0e08,
L"OpticBook A300 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x1300,
L"OpticBook 3800 Scanner"
},
{
0x07b3,
L"Plustek, Inc.",
0x1301,
L"OpticBook 4800 Scanner"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0100,
L"Camedia C-2100/C-3000 Ultra Zoom Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0102,
L"Camedia E-10/C-220/C-50 Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0105,
L"Camedia C-310Z/C-700/C-750UZ/C-755/C-765UZ/C-3040/C-4000/C-5050Z/D-560/C-3020Z Zoom Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0109,
L"C-370Z/C-500Z/D-535Z/X-450"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x010a,
L"MAUSB-10 xD and SmartMedia Card Reader"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0112,
L"MAUSB-100 xD Card Reader"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0113,
L"Mju 500 / Stylus Digital Camera (PTP)"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0114,
L"C-350Z Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0118,
L"Mju Mini Digital/Mju Digital 500 Camera / Stylus 850 SW"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0125,
L"Tough TG-1 Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0126,
L"VR340/D750 Digital Camera"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0184,
L"P-S100 port"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0202,
L"Foot Switch RS-26"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0203,
L"Digital Voice Recorder DW-90"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0206,
L"Digital Voice Recorder DS-330"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0207,
L"Digital Voice Recorder & Camera W-10"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0209,
L"Digital Voice Recorder DM-20"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x020b,
L"Digital Voice Recorder DS-4000"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x020d,
L"Digital Voice Recorder VN-240PC"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0211,
L"Digital Voice Recorder DS-2300"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0218,
L"Foot Switch RS-28"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0244,
L"Digital Voice Recorder VN-8500PC"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x024f,
L"Digital Voice Recorder DS-7000"
},
{
0x07b4,
L"Olympus Optical Co., Ltd",
0x0280,
L"m:robe 100"
},
{
0x07b5,
L"Mega World International, Ltd",
0x0017,
L"Joystick"
},
{
0x07b5,
L"Mega World International, Ltd",
0x0213,
L"Thrustmaster Firestorm Digital 3 Gamepad"
},
{
0x07b5,
L"Mega World International, Ltd",
0x0312,
L"Gamepad"
},
{
0x07b5,
L"Mega World International, Ltd",
0x9902,
L"GamePad"
},
{
0x07b6,
L"Marubun Corp.",
0x0,
L"0"
},
{
0x07b7,
L"TIME Interconnect, Ltd",
0x0,
L"0"
},
{
0x07b8,
L"AboCom Systems Inc",
0x110c,
L"XX1"
},
{
0x07b8,
L"AboCom Systems Inc",
0x1201,
L"IEEE 802.11b Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x200c,
L"XX2"
},
{
0x07b8,
L"AboCom Systems Inc",
0x2573,
L"Wireless LAN Card"
},
{
0x07b8,
L"AboCom Systems Inc",
0x2770,
L"802.11n/b/g Mini Wireless LAN USB2.0 Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x2870,
L"802.11n/b/g Wireless LAN USB2.0 Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x3070,
L"802.11n/b/g Mini Wireless LAN USB2.0 Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x3071,
L"802.11n/b/g Mini Wireless LAN USB2.0 Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x3072,
L"802.11n/b/g Mini Wireless LAN USB2.0 Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4000,
L"DU-E10 Ethernet [klsi]"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4002,
L"DU-E100 Ethernet [pegasus]"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4003,
L"1/10/100 Ethernet Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4004,
L"XX4"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4007,
L"XX5"
},
{
0x07b8,
L"AboCom Systems Inc",
0x400b,
L"XX6"
},
{
0x07b8,
L"AboCom Systems Inc",
0x400c,
L"XX7"
},
{
0x07b8,
L"AboCom Systems Inc",
0x401a,
L"RTL8151"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4102,
L"USB 1.1 10/100M Fast Ethernet Adapter"
},
{
0x07b8,
L"AboCom Systems Inc",
0x4104,
L"XX9"
},
{
0x07b8,
L"AboCom Systems Inc",
0x420a,
L"UF200 Ethernet"
},
{
0x07b8,
L"AboCom Systems Inc",
0x5301,
L"GW-US54ZGL 802.11bg"
},
{
0x07b8,
L"AboCom Systems Inc",
0x6001,
L"WUG2690 802.11bg Wireless Module [ZyDAS ZD1211+AL2230]"
},
{
0x07b8,
L"AboCom Systems Inc",
0x8188,
L"AboCom Systems Inc [WN2001 Prolink Wireless-N Nano Adapter]"
},
{
0x07b8,
L"AboCom Systems Inc",
0xa001,
L"WUG2200 802.11g Wireless Adapter [Envara WiND512]"
},
{
0x07b8,
L"AboCom Systems Inc",
0xabc1,
L"DU-E10 Ethernet [pegasus]"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb000,
L"BWU613"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb02a,
L"AboCom Bluetooth Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb02b,
L"Bluetooth dongle"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb02c,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb02d,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb02e,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb030,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb031,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb032,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb033,
L"BCM92045DG-Flash with trace filter"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21a,
L"WUG2400 802.11g Wireless Adapter [Texas Instruments TNETW1450]"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21b,
L"HWU54DM"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21c,
L"RT2573"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21d,
L"RT2573"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21e,
L"RT2573"
},
{
0x07b8,
L"AboCom Systems Inc",
0xb21f,
L"WUG2700"
},
{
0x07b8,
L"AboCom Systems Inc",
0xd011,
L"MP3 Player"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe001,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe002,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe003,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe004,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe005,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe006,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe007,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe008,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe009,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe00a,
L"Mass Storage Device"
},
{
0x07b8,
L"AboCom Systems Inc",
0xe4f0,
L"Card Reader Driver"
},
{
0x07b8,
L"AboCom Systems Inc",
0xf101,
L"DSB-560 Modem [atlas]"
},
{
0x07bc,
L"Canon Computer Systems, Inc.",
0x0,
L"0"
},
{
0x07bd,
L"Webgear, Inc.",
0x0,
L"0"
},
{
0x07be,
L"Veridicom",
0x0,
L"0"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1113,
L"JoyWarrior24F8"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1116,
L"JoyWarrior24F14"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1121,
L"The Claw"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1500,
L"IO-Warrior 40"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1501,
L"IO-Warrior 24"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1502,
L"IO-Warrior 48"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1503,
L"IO-Warrior 28"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1511,
L"IO-Warrior 24 Power Vampire"
},
{
0x07c0,
L"Code Mercenaries Hard- und Software GmbH",
0x1512,
L"IO-Warrior 24 Power Vampire"
},
{
0x07c1,
L"Keisokugiken",
0x0068,
L"HKS-0200 USBDAQ"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0x0102,
L"USB to LS120"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0x0103,
L"USB to IDE"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0x1234,
L"USB to ATAPI"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa000,
L"CompactFlash Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa001,
L"CompactFlash & SmartMedia Card Reader [eusb]"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa002,
L"Disk Drive"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa003,
L"Datafab-based Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa004,
L"USB to MMC Class Drive"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa005,
L"CompactFlash & SmartMedia Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa006,
L"SmartMedia Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa007,
L"Memory Stick Class Drive"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa103,
L"MDSM-B reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa107,
L"USB to Memory Stick (LC1) Drive"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa109,
L"LC1 CompactFlash & SmartMedia Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa10b,
L"USB to CF+MS(LC1)"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa200,
L"DF-UT-06 Hama MMC/SD Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa400,
L"CompactFlash & Microdrive Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa600,
L"Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xa604,
L"12-in-1 Card Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xad01,
L"Mass Storage Device"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xae01,
L"Mass Storage Device"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xaf01,
L"Mass Storage Device"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb000,
L"USB to CF(LC1)"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb001,
L"USB to CF+PCMCIA"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb004,
L"MMC/SD Reader"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb006,
L"USB to PCMCIA"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb00a,
L"USB to CF+SD Drive(LC1)"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xb00b,
L"USB to Memory Stick(LC1)"
},
{
0x07c4,
L"Datafab Systems, Inc.",
0xc010,
L"Kingston FCR-HS2/ATA Card Reader"
},
{
0x07c5,
L"APG Cash Drawer",
0x0500,
L"Cash Drawer"
},
{
0x07c6,
L"ShareWave, Inc.",
0x0002,
L"Bodega Wireless Access Point"
},
{
0x07c6,
L"ShareWave, Inc.",
0x0003,
L"Bodega Wireless Network Adapter"
},
{
0x07c7,
L"Powertech Industrial Co., Ltd",
0x0,
L"0"
},
{
0x07c8,
L"B.U.G., Inc.",
0x0202,
L"MN128-SOHO PAL"
},
{
0x07c9,
L"Allied Telesyn International",
0xb100,
L"AT-USB100"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x0002,
L"AVerTV PVR USB/EZMaker Pro Device"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x0026,
L"AVerTV"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x0337,
L"A867 DVB-T dongle"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x0837,
L"H837 Hybrid ATSC/QAM"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x1228,
L"MPEG-2 Capture Device (M038)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x1830,
L"AVerTV Volar Video Capture (H830)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x3835,
L"AVerTV Volar Green HD (A835B)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x850a,
L"AverTV Volar Black HD (A850)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0x850b,
L"AverTV Red HD+ (A850T)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xa309,
L"AVerTV DVB-T (A309)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xa801,
L"AVerTV DVB-T (A800)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xa815,
L"AVerTV DVB-T Volar X (A815)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xa827,
L"AVerTV Hybrid Volar HX (A827)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xa867,
L"AVerTV DVB-T (A867)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xb300,
L"A300 DVB-T TV receiver"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xb800,
L"MR800 FM Radio"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xe880,
L"MPEG-2 Capture Device (E880)"
},
{
0x07ca,
L"AVerMedia Technologies, Inc.",
0xe882,
L"MPEG-2 Capture Device (E882)"
},
{
0x07cb,
L"Kingmax Technology, Inc.",
0x0,
L"0"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0000,
L"CF Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0001,
L"Reader (UICSE)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0002,
L"Reader (UIS)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0003,
L"SM Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0004,
L"SM/CF/PCMCIA Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0005,
L"Reader (UISA2SE)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0006,
L"SM/CF/PCMCIA Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0007,
L"Reader (UISA6SE)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x000c,
L"SM/CF Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x000d,
L"SM/CF Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x000e,
L"Reader (UISDA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x000f,
L"Reader (UICLIK)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0010,
L"Reader (UISMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0012,
L"Reader (UISC6SE-FLASH)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0014,
L"Litronic Fortezza Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0030,
L"Mass Storage (UISDMC12S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0040,
L"Mass Storage (UISDMC13S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0100,
L"Reader (UID)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0101,
L"Reader (UIM)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0102,
L"Reader (UISDMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0103,
L"Reader (UISDMC)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0104,
L"Reader (UISDM)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0200,
L"6-in-1 Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0201,
L"Mass Storage (UISDMC1S & UISDMC3S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0202,
L"Mass Storage (UISDMC5S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0203,
L"Mass Storage (UISMC5S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0204,
L"Mass Storage (UIM4/5S & UIM7S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0205,
L"Mass Storage (UIS4/5S & UIS7S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0206,
L"Mass Storage (UISDMC10S & UISDMC11S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0207,
L"Mass Storage (UPIDMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0208,
L"Mass Storage (UCFC II)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0210,
L"Mass Storage (UPIXXA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0213,
L"Mass Storage (UPIDA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0214,
L"Mass Storage (UPIMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0215,
L"Mass Storage (UPISA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0217,
L"Mass Storage (UPISDMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0223,
L"Mass Storage (UCIDA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0224,
L"Mass Storage (UCIMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0225,
L"Mass Storage (UIS7S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0227,
L"Mass Storage (UCIDMA)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0234,
L"Mass Storage (UIM7S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0235,
L"Mass Storage (UIS4S-S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0237,
L"Velper (UISDMC4S)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0300,
L"6-in-1 Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0301,
L"6-in-1 Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0303,
L"Mass Storage (UID10W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0304,
L"Mass Storage (UIM10W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0305,
L"Mass Storage (UIS10W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0308,
L"Mass Storage (UIC10W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0309,
L"Mass Storage (UISC3W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0310,
L"Mass Storage (UISDMA2W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0311,
L"Mass Storage (UISDMC14W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0320,
L"Mass Storage (UISDMC4W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0321,
L"Mass Storage (UISDMC37W)"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0330,
L"WINTERREADER Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0350,
L"9-in-1 Card Reader"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0500,
L"Mass Storage"
},
{
0x07cc,
L"Carry Computer Eng., Co., Ltd",
0x0501,
L"Mass Storage"
},
{
0x07cd,
L"Elektor",
0x0001,
L"USBuart Serial Port"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1001,
L"QV-8000SX/5700/3000EX Digicam; Exilim EX-M20"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1003,
L"Exilim EX-S500"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1004,
L"Exilim EX-Z120"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1011,
L"USB-CASIO PC CAMERA"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1116,
L"EXILIM EX-Z19"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1125,
L"Exilim EX-H10 Digital Camera (mass storage mode)"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1133,
L"Exilim EX-Z350 Digital Camera (mass storage mode)"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1225,
L"Exilim EX-H10 Digital Camera (PictBridge mode)"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x1233,
L"Exilim EX-Z350 Digital Camera (PictBridge mode)"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x2002,
L"E-125 Cassiopeia Pocket PC"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x3801,
L"WMP-1 MP3-Watch"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x4001,
L"Label Printer KL-P1000"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x4007,
L"CW50 Device"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x4104,
L"Cw75 Device"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x4107,
L"CW-L300 Device"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x4500,
L"LV-20 Digital Camera"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x6101,
L"fx-9750gII"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x6102,
L"fx-CP400"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x6801,
L"PL-40R"
},
{
0x07cf,
L"Casio Computer Co., Ltd",
0x6802,
L"MIDI Keyboard"
},
{
0x07d0,
L"Dazzle",
0x0001,
L"Digital Video Creator I"
},
{
0x07d0,
L"Dazzle",
0x0002,
L"Global Village VideoFX Grabber"
},
{
0x07d0,
L"Dazzle",
0x0003,
L"Fusion Model DVC-50 Rev 1 (NTSC)"
},
{
0x07d0,
L"Dazzle",
0x0004,
L"DVC-800 (PAL) Grabber"
},
{
0x07d0,
L"Dazzle",
0x0005,
L"Fusion Video and Audio Ports"
},
{
0x07d0,
L"Dazzle",
0x0006,
L"DVC 150 Loader Device"
},
{
0x07d0,
L"Dazzle",
0x0007,
L"DVC 150"
},
{
0x07d0,
L"Dazzle",
0x0327,
L"Fusion Digital Media Reader"
},
{
0x07d0,
L"Dazzle",
0x1001,
L"DM-FLEX DFU Adapter"
},
{
0x07d0,
L"Dazzle",
0x1002,
L"DMHS2 DFU Adapter"
},
{
0x07d0,
L"Dazzle",
0x1102,
L"CF Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x1103,
L"SD Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x1104,
L"SM Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x1105,
L"MS Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x1106,
L"xD/SM Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x1202,
L"MultiSlot Reader/Writer"
},
{
0x07d0,
L"Dazzle",
0x2000,
L"FX2 DFU Adapter"
},
{
0x07d0,
L"Dazzle",
0x2001,
L"eUSB CompactFlash Reader"
},
{
0x07d0,
L"Dazzle",
0x4100,
L"Kingsun SF-620 Infrared Adapter"
},
{
0x07d0,
L"Dazzle",
0x4101,
L"Connectivity Cable (CA-42 clone)"
},
{
0x07d0,
L"Dazzle",
0x4959,
L"Kingsun KS-959 Infrared Adapter"
},
{
0x07d1,
L"D-Link System",
0x13ec,
L"VvBus for Helium 2xx"
},
{
0x07d1,
L"D-Link System",
0x13ed,
L"VvBus for Helium 2xx"
},
{
0x07d1,
L"D-Link System",
0x13f1,
L"DSL-302G Modem"
},
{
0x07d1,
L"D-Link System",
0x13f2,
L"DSL-502G Router"
},
{
0x07d1,
L"D-Link System",
0x3300,
L"DWA-130 802.11n Wireless N Adapter(rev.E) [Realtek RTL8191SU]"
},
{
0x07d1,
L"D-Link System",
0x3302,
L"DWA-130 802.11n Wireless N Adapter(rev.C2) [Realtek RTL8191SU]"
},
{
0x07d1,
L"D-Link System",
0x3303,
L"DWA-131 802.11n Wireless N Nano Adapter(rev.A1) [Realtek RTL8192SU]"
},
{
0x07d1,
L"D-Link System",
0x3304,
L"FR-300USB 802.11bgn Wireless Adapter"
},
{
0x07d1,
L"D-Link System",
0x3a07,
L"WUA-2340 RangeBooster G Adapter(rev.A) [Atheros AR5523]"
},
{
0x07d1,
L"D-Link System",
0x3a08,
L"WUA-2340 RangeBooster G Adapter(rev.A) (no firmware) [Atheros AR5523]"
},
{
0x07d1,
L"D-Link System",
0x3a09,
L"DWA-160 802.11abgn Xtreme N Dual Band Adapter(rev.A2) [Atheros AR9170+AR9104]"
},
{
0x07d1,
L"D-Link System",
0x3a0d,
L"DWA-120 802.11g Wireless 108G Adapter [Atheros AR5523]"
},
{
0x07d1,
L"D-Link System",
0x3a0f,
L"DWA-130 802.11n Wireless N Adapter(rev.D) [Atheros AR9170+AR9102]"
},
{
0x07d1,
L"D-Link System",
0x3a10,
L"DWA-126 802.11n Wireless Adapter [Atheros AR9271]"
},
{
0x07d1,
L"D-Link System",
0x3b01,
L"AirPlus G DWL-G122 Wireless Adapter(rev.D) [Marvell 88W8338+88W8010]"
},
{
0x07d1,
L"D-Link System",
0x3b10,
L"DWA-142 RangeBooster N Adapter [Marvell 88W8362+88W8060]"
},
{
0x07d1,
L"D-Link System",
0x3b11,
L"DWA-130 802.11n Wireless N Adapter(rev.A1) [Marvell 88W8362+88W8060]"
},
{
0x07d1,
L"D-Link System",
0x3c03,
L"AirPlus G DWL-G122 Wireless Adapter(rev.C1) [Ralink RT2571W]"
},
{
0x07d1,
L"D-Link System",
0x3c04,
L"WUA-1340"
},
{
0x07d1,
L"D-Link System",
0x3c05,
L"EH103 Wireless G Adapter"
},
{
0x07d1,
L"D-Link System",
0x3c06,
L"DWA-111 802.11bg Wireless Adapter [Ralink RT2571W]"
},
{
0x07d1,
L"D-Link System",
0x3c07,
L"DWA-110 Wireless G Adapter(rev.A1) [Ralink RT2571W]"
},
{
0x07d1,
L"D-Link System",
0x3c09,
L"DWA-140 RangeBooster N Adapter(rev.B1) [Ralink RT2870]"
},
{
0x07d1,
L"D-Link System",
0x3c0a,
L"DWA-140 RangeBooster N Adapter(rev.B2) [Ralink RT3072]"
},
{
0x07d1,
L"D-Link System",
0x3c0b,
L"DWA-110 Wireless G Adapter(rev.B) [Ralink RT2870]"
},
{
0x07d1,
L"D-Link System",
0x3c0d,
L"DWA-125 Wireless N 150 Adapter(rev.A1) [Ralink RT3070]"
},
{
0x07d1,
L"D-Link System",
0x3c0e,
L"WUA-2340 RangeBooster G Adapter(rev.B) [Ralink RT2070]"
},
{
0x07d1,
L"D-Link System",
0x3c0f,
L"AirPlus G DWL-G122 Wireless Adapter(rev.E1) [Ralink RT2070]"
},
{
0x07d1,
L"D-Link System",
0x3c10,
L"DWA-160 802.11abgn Xtreme N Dual Band Adapter(rev.A1) [Atheros AR9170+AR9104]"
},
{
0x07d1,
L"D-Link System",
0x3c11,
L"DWA-160 Xtreme N Dual Band USB Adapter(rev.B) [Ralink RT2870]"
},
{
0x07d1,
L"D-Link System",
0x3c13,
L"DWA-130 802.11n Wireless N Adapter(rev.B) [Ralink RT2870]"
},
{
0x07d1,
L"D-Link System",
0x3c15,
L"DWA-140 RangeBooster N Adapter(rev.B3) [Ralink RT2870]"
},
{
0x07d1,
L"D-Link System",
0x3c16,
L"DWA-125 Wireless N 150 Adapter(rev.A2) [Ralink RT3070]"
},
{
0x07d1,
L"D-Link System",
0x3e02,
L"DWM-156 3.75G HSUPA Adapter"
},
{
0x07d1,
L"D-Link System",
0x5100,
L"Remote NDIS Device"
},
{
0x07d1,
L"D-Link System",
0xa800,
L"DWM-152 3.75G HSUPA Adapter"
},
{
0x07d1,
L"D-Link System",
0xf101,
L"DBT-122 Bluetooth"
},
{
0x07d1,
L"D-Link System",
0xfc01,
L"DBT-120 Bluetooth Adapter"
},
{
0x07d2,
L"Aptio Products, Inc.",
0x0,
L"0"
},
{
0x07d3,
L"Cyberdata Corp.",
0x0,
L"0"
},
{
0x07d5,
L"Radiant Systems",
0x0,
L"0"
},
{
0x07d7,
L"GCC Technologies, Inc.",
0x0,
L"0"
},
{
0x07da,
L"Arasan Chip Systems",
0x0,
L"0"
},
{
0x07de,
L"Diamond Multimedia",
0x2820,
L"VC500 Video Capture Dongle"
},
{
0x07df,
L"David Electronics Co., Ltd",
0x0,
L"0"
},
{
0x07e0,
L"NCP engineering GmbH",
0x4742,
L"VPN GovNet Box"
},
{
0x07e1,
L"Ambient Technologies, Inc.",
0x5201,
L"V.90 Modem"
},
{
0x07e2,
L"Elmeg GmbH & Co., Ltd",
0x0,
L"0"
},
{
0x07e3,
L"Planex Communications, Inc.",
0x0,
L"0"
},
{
0x07e4,
L"Movado Enterprise Co., Ltd",
0x0967,
L"SCard R/W CSR-145"
},
{
0x07e4,
L"Movado Enterprise Co., Ltd",
0x0968,
L"SCard R/W CSR-145"
},
{
0x07e5,
L"QPS, Inc.",
0x05c2,
L"IDE-to-USB2.0 PCA"
},
{
0x07e5,
L"QPS, Inc.",
0x5c01,
L"Que! CDRW"
},
{
0x07e6,
L"Allied Cable Corp.",
0x0,
L"0"
},
{
0x07e7,
L"Mirvo Toys, Inc.",
0x0,
L"0"
},
{
0x07e8,
L"Labsystems",
0x0,
L"0"
},
{
0x07ea,
L"Iwatsu Electric Co., Ltd",
0x0,
L"0"
},
{
0x07eb,
L"Double-H Technology Co., Ltd",
0x0,
L"0"
},
{
0x07ec,
L"Taiyo Electric Wire & Cable Co., Ltd",
0x0,
L"0"
},
{
0x07ee,
L"Torex Retail (formerly Logware)",
0x0002,
L"Cash Drawer I/F"
},
{
0x07ef,
L"STSN",
0x0001,
L"Internet Access Device"
},
{
0x07f2,
L"Microcomputer Applications, Inc.",
0x0001,
L"KEYLOK II"
},
{
0x07f6,
L"Circuit Assembly Corp.",
0x0,
L"0"
},
{
0x07f7,
L"Century Corp.",
0x0005,
L"ScanLogic/Century Corporation uATA"
},
{
0x07f7,
L"Century Corp.",
0x011e,
L"Century USB Disk Enclosure"
},
{
0x07f9,
L"Dotop Technology, Inc.",
0x0,
L"0"
},
{
0x07fa,
L"DrayTek Corp.",
0x0778,
L"miniVigor 128 ISDN TA"
},
{
0x07fa,
L"DrayTek Corp.",
0x0846,
L"ISDN TA [HFC-S]"
},
{
0x07fa,
L"DrayTek Corp.",
0x0847,
L"ISDN TA [HFC-S]"
},
{
0x07fa,
L"DrayTek Corp.",
0x1012,
L"BeWAN ADSL USB ST (grey)"
},
{
0x07fa,
L"DrayTek Corp.",
0x1196,
L"BWIFI-USB54AR 802.11bg"
},
{
0x07fa,
L"DrayTek Corp.",
0xa904,
L"BeWAN ADSL"
},
{
0x07fa,
L"DrayTek Corp.",
0xa905,
L"BeWAN ADSL ST"
},
{
0x07fc,
L"Thomann",
0x1113,
L"SWISSONIC EasyKeys61 Midikeyboard"
},
{
0x07fd,
L"Mark of the Unicorn",
0x0000,
L"FastLane MIDI Interface"
},
{
0x07fd,
L"Mark of the Unicorn",
0x0001,
L"MIDI Interface"
},
{
0x07fd,
L"Mark of the Unicorn",
0x0002,
L"MOTU Audio for 64 bit"
},
{
0x07ff,
L"Unknown",
0x00ff,
L"Portable Hard Drive"
},
{
0x0801,
L"MagTek",
0x0001,
L"Mini Swipe Reader (Keyboard Emulation)"
},
{
0x0801,
L"MagTek",
0x0002,
L"Mini Swipe Reader"
},
{
0x0801,
L"MagTek",
0x0003,
L"Magstripe Insert Reader"
},
{
0x0802,
L"Mako Technologies, LLC",
0x0,
L"0"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x1300,
L"V92 Faxmodem"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x3095,
L"V.92 56K Mini External Modem Model 3095"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x4310,
L"4410a Wireless-G Adapter [Intersil ISL3887]"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x4410,
L"4410b Wireless-G Adapter [ZyDAS ZD1211B]"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x5241,
L"Cable Modem"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x5551,
L"DSL Modem"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x9700,
L"2986L FaxModem"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0x9800,
L"Cable Modem"
},
{
0x0803,
L"Zoom Telephonics, Inc.",
0xa312,
L"Wireless-G"
},
{
0x0809,
L"Genicom Technology, Inc.",
0x0,
L"0"
},
{
0x080a,
L"Evermuch Technology Co., Ltd",
0x0,
L"0"
},
{
0x080b,
L"Cross Match Technologies",
0x0002,
L"Fingerprint Scanner (After ReNumeration)"
},
{
0x080b,
L"Cross Match Technologies",
0x0010,
L"300LC Series Fingerprint Scanner (Before ReNumeration)"
},
{
0x080c,
L"Datalogic S.p.A.",
0x0300,
L"Gryphon D120 Barcode Scanner"
},
{
0x080c,
L"Datalogic S.p.A.",
0x0400,
L"Gryphon D120 Barcode Scanner"
},
{
0x080c,
L"Datalogic S.p.A.",
0x0500,
L"Gryphon D120 Barcode Scanner"
},
{
0x080c,
L"Datalogic S.p.A.",
0x0600,
L"Gryphon M100 Barcode Scanner"
},
{
0x080d,
L"Teco Image Systems Co., Ltd",
0x0102,
L"Hercules Scan@home 48"
},
{
0x080d,
L"Teco Image Systems Co., Ltd",
0x0104,
L"3.2Slim"
},
{
0x080d,
L"Teco Image Systems Co., Ltd",
0x0110,
L"UMAX AstraSlim 1200 Scanner"
},
{
0x0810,
L"Personal Communication Systems, Inc.",
0x0001,
L"Dual PSX Adaptor"
},
{
0x0810,
L"Personal Communication Systems, Inc.",
0x0002,
L"Dual PCS Adaptor"
},
{
0x0810,
L"Personal Communication Systems, Inc.",
0x0003,
L"PlayStation Gamepad"
},
{
0x0810,
L"Personal Communication Systems, Inc.",
0xe001,
L"Twin controller"
},
{
0x0810,
L"Personal Communication Systems, Inc.",
0xe501,
L"SNES Gamepad"
},
{
0x0813,
L"Mattel, Inc.",
0x0001,
L"Intel Play QX3 Microscope"
},
{
0x0813,
L"Mattel, Inc.",
0x0002,
L"Dual Mode Camera Plus"
},
{
0x0819,
L"eLicenser",
0x0101,
L"License Management and Copy Protection"
},
{
0x081a,
L"MG Logic",
0x1000,
L"Duo Pen Tablet"
},
{
0x081b,
L"Indigita Corp.",
0x0600,
L"Storage Adapter"
},
{
0x081b,
L"Indigita Corp.",
0x0601,
L"Storage Adapter"
},
{
0x081c,
L"Mipsys",
0x0,
L"0"
},
{
0x081e,
L"AlphaSmart, Inc.",
0xdf00,
L"Handheld"
},
{
0x0822,
L"Reudo Corp.",
0x2001,
L"IRXpress Infrared Device"
},
{
0x0825,
L"GC Protronics",
0x0,
L"0"
},
{
0x0826,
L"Data Transit",
0x0,
L"0"
},
{
0x0827,
L"BroadLogic, Inc.",
0x0,
L"0"
},
{
0x0828,
L"Sato Corp.",
0x0,
L"0"
},
{
0x0829,
L"DirecTV Broadband, Inc. (Telocity)",
0x0,
L"0"
},
{
0x082d,
L"Handspring",
0x0100,
L"Visor"
},
{
0x082d,
L"Handspring",
0x0200,
L"Treo"
},
{
0x082d,
L"Handspring",
0x0300,
L"Treo 600"
},
{
0x082d,
L"Handspring",
0x0400,
L"Handheld"
},
{
0x082d,
L"Handspring",
0x0500,
L"Handheld"
},
{
0x082d,
L"Handspring",
0x0600,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0001,
L"m500"
},
{
0x0830,
L"Palm, Inc.",
0x0002,
L"m505"
},
{
0x0830,
L"Palm, Inc.",
0x0003,
L"m515"
},
{
0x0830,
L"Palm, Inc.",
0x0004,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0005,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0006,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0010,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0011,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0012,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0013,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0014,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0020,
L"i705"
},
{
0x0830,
L"Palm, Inc.",
0x0021,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0022,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0023,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0024,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0030,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0031,
L"Tungsten W"
},
{
0x0830,
L"Palm, Inc.",
0x0032,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0033,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0034,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0040,
L"m125"
},
{
0x0830,
L"Palm, Inc.",
0x0041,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0042,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0043,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0044,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0050,
L"m130"
},
{
0x0830,
L"Palm, Inc.",
0x0051,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0052,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0053,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0054,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0060,
L"Tungsten C/E/T/T2/T3 / Zire 71"
},
{
0x0830,
L"Palm, Inc.",
0x0061,
L"Lifedrive / Treo 650/680 / Tunsten E2/T5/TX / Centro / Zire 21/31/72 / Z22"
},
{
0x0830,
L"Palm, Inc.",
0x0062,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0063,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0064,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0070,
L"Zire"
},
{
0x0830,
L"Palm, Inc.",
0x0071,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0072,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0080,
L"Serial Adapter [for Palm III]"
},
{
0x0830,
L"Palm, Inc.",
0x0081,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x0082,
L"Handheld"
},
{
0x0830,
L"Palm, Inc.",
0x00a0,
L"Treo 800w"
},
{
0x0830,
L"Palm, Inc.",
0x0101,
L"Pre"
},
{
0x0832,
L"Kouwell Electronics Corp.",
0x5850,
L"Cable"
},
{
0x0833,
L"Sourcenext Corp.",
0x012e,
L"KeikaiDenwa 8 with charger"
},
{
0x0833,
L"Sourcenext Corp.",
0x039f,
L"KeikaiDenwa 8"
},
{
0x0835,
L"Action Star Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0836,
L"TrekStor",
0x2836,
L"i.Beat mood"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x0005,
L"Digimax Camera"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x0008,
L"Digimax 230 Camera"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x0009,
L"Digimax 340"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x000a,
L"Digimax 410"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x000e,
L"Digimax 360"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x0010,
L"Digimax 300"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1003,
L"Digimax 210SE"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1005,
L"Digimax 220"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1009,
L"Digimax V4"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1012,
L"6500 Document Camera"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1058,
L"S730 Camera"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1064,
L"Digimax D830 Camera"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x1542,
L"Digimax 50 Duo"
},
{
0x0839,
L"Samsung Techwin Co., Ltd",
0x3000,
L"Digimax 35 MP3"
},
{
0x083a,
L"Accton Technology Corp.",
0x1046,
L"10/100 Ethernet [pegasus]"
},
{
0x083a,
L"Accton Technology Corp.",
0x1060,
L"HomeLine Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x1f4d,
L"SMC8013WG Broadband Remote NDIS Device"
},
{
0x083a,
L"Accton Technology Corp.",
0x3046,
L"10/100 Series Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x3060,
L"1/10/100 Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x3501,
L"2664W"
},
{
0x083a,
L"Accton Technology Corp.",
0x3502,
L"WN3501D Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x3503,
L"T-Sinus 111 Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x4501,
L"T-Sinus 154data"
},
{
0x083a,
L"Accton Technology Corp.",
0x4502,
L"Siemens S30853-S1016-R107 802.11g Wireless Adapter [Intersil ISL3886]"
},
{
0x083a,
L"Accton Technology Corp.",
0x4505,
L"SMCWUSB-G 802.11bg"
},
{
0x083a,
L"Accton Technology Corp.",
0x4507,
L"SMCWUSBT-G2 802.11g Wireless Adapter [Atheros AR5523]"
},
{
0x083a,
L"Accton Technology Corp.",
0x4521,
L"Siemens S30863-S1016-R107-2 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x083a,
L"Accton Technology Corp.",
0x4531,
L"T-Com Sinus 154 data II [Intersil ISL3887]"
},
{
0x083a,
L"Accton Technology Corp.",
0x5046,
L"SpeedStream 10/100 Ethernet [pegasus]"
},
{
0x083a,
L"Accton Technology Corp.",
0x5501,
L"Wireless Adapter 11g"
},
{
0x083a,
L"Accton Technology Corp.",
0x6500,
L"Cable Modem"
},
{
0x083a,
L"Accton Technology Corp.",
0x6618,
L"802.11n Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x7511,
L"Arcadyan 802.11N Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x7512,
L"Arcadyan 802.11N Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x7522,
L"Arcadyan 802.11N Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x8522,
L"Arcadyan 802.11N Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0x8541,
L"WN4501F 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x083a,
L"Accton Technology Corp.",
0xa512,
L"Arcadyan 802.11N Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xa618,
L"SMCWUSBS-N EZ Connect N Draft 11n Wireless Adapter [Ralink RT2870]"
},
{
0x083a,
L"Accton Technology Corp.",
0xa701,
L"SMCWUSBS-N3 EZ Connect N Wireless Adapter [Ralink RT3070]"
},
{
0x083a,
L"Accton Technology Corp.",
0xb004,
L"CPWUE001 USB/Ethernet Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xb522,
L"SMCWUSBS-N2 EZ Connect N Wireless Adapter [Ralink RT2870]"
},
{
0x083a,
L"Accton Technology Corp.",
0xbb01,
L"BlueExpert Bluetooth Device"
},
{
0x083a,
L"Accton Technology Corp.",
0xc003,
L"802.11b Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xc501,
L"Zoom 4410 Wireless-G [Intersil ISL3887]"
},
{
0x083a,
L"Accton Technology Corp.",
0xc561,
L"802.11a/g Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xd522,
L"Speedport W 102 Stick IEEE 802.11n USB 2.0 Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xe501,
L"ZD1211B"
},
{
0x083a,
L"Accton Technology Corp.",
0xe503,
L"Arcadyan WN4501 802.11b/g"
},
{
0x083a,
L"Accton Technology Corp.",
0xe506,
L"WUS-201 802.11bg"
},
{
0x083a,
L"Accton Technology Corp.",
0xf501,
L"802.11g Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xf502,
L"802.11g Wireless Adapter"
},
{
0x083a,
L"Accton Technology Corp.",
0xf522,
L"Arcadyan WN7512 802.11n"
},
{
0x083f,
L"Global Village",
0xb100,
L"TelePort V.90 Fax/Modem"
},
{
0x0840,
L"Argosy Research, Inc.",
0x0060,
L"Storage Adapter Bridge Module"
},
{
0x0841,
L"Rioport.com, Inc.",
0x0001,
L"Rio 500"
},
{
0x0844,
L"Welland Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0846,
L"NetGear, Inc.",
0x1001,
L"EA101 10 Mbps 10BASE-T Ethernet [Kawasaki LSI KL5KLUSB101B]"
},
{
0x0846,
L"NetGear, Inc.",
0x1002,
L"Ethernet"
},
{
0x0846,
L"NetGear, Inc.",
0x1020,
L"FA101 Fast Ethernet USB 1.1"
},
{
0x0846,
L"NetGear, Inc.",
0x1040,
L"FA120 Fast Ethernet USB 2.0 [Asix AX88172 / AX8817x]"
},
{
0x0846,
L"NetGear, Inc.",
0x1100,
L"Managed Switch M4100 series, M5300 series, M7100 series"
},
{
0x0846,
L"NetGear, Inc.",
0x4110,
L"MA111(v1) 802.11b Wireless [Intersil Prism 3.0]"
},
{
0x0846,
L"NetGear, Inc.",
0x4200,
L"WG121(v1) 54 Mbps Wireless [Intersil ISL3886]"
},
{
0x0846,
L"NetGear, Inc.",
0x4210,
L"WG121(v2) 54 Mbps Wireless [Intersil ISL3886]"
},
{
0x0846,
L"NetGear, Inc.",
0x4220,
L"WG111(v1) 54 Mbps Wireless [Intersil ISL3886]"
},
{
0x0846,
L"NetGear, Inc.",
0x4230,
L"MA111(v2) 802.11b Wireless [SIS SIS 162]"
},
{
0x0846,
L"NetGear, Inc.",
0x4240,
L"WG111(v1) rev 2 54 Mbps Wireless [Intersil ISL3887]"
},
{
0x0846,
L"NetGear, Inc.",
0x4260,
L"WG111v3 54 Mbps Wireless [realtek RTL8187B]"
},
{
0x0846,
L"NetGear, Inc.",
0x4300,
L"WG111U Double 108 Mbps Wireless [Atheros AR5004X / AR5005UX]"
},
{
0x0846,
L"NetGear, Inc.",
0x4301,
L"WG111U (no firmware) Double 108 Mbps Wireless [Atheros AR5004X / AR5005UX]"
},
{
0x0846,
L"NetGear, Inc.",
0x5f00,
L"WPN111 802.11g Wireless Adapter [Atheros AR5523]"
},
{
0x0846,
L"NetGear, Inc.",
0x6a00,
L"WG111v2 54 Mbps Wireless [RealTek RTL8187L]"
},
{
0x0846,
L"NetGear, Inc.",
0x7100,
L"WN121T RangeMax Next Wireless-N [Marvell TopDog]"
},
{
0x0846,
L"NetGear, Inc.",
0x9000,
L"WN111(v1) RangeMax Next Wireless [Marvell 88W8362+88W8060]"
},
{
0x0846,
L"NetGear, Inc.",
0x9001,
L"WN111(v2) RangeMax Next Wireless [Atheros AR9170+AR9101]"
},
{
0x0846,
L"NetGear, Inc.",
0x9010,
L"WNDA3100v1 802.11abgn [Atheros AR9170+AR9104]"
},
{
0x0846,
L"NetGear, Inc.",
0x9011,
L"WNDA3100v2 802.11abgn [Broadcom BCM4323]"
},
{
0x0846,
L"NetGear, Inc.",
0x9012,
L"WNDA4100 802.11abgn 3x3:3 [Ralink RT3573]"
},
{
0x0846,
L"NetGear, Inc.",
0x9014,
L"WNDA3100v3 802.11abgn 2x2:2 [MediaTek MT7632U]"
},
{
0x0846,
L"NetGear, Inc.",
0x9018,
L"WNDA3200 802.11abgn Wireless Adapter [Atheros AR7010+AR9280]"
},
{
0x0846,
L"NetGear, Inc.",
0x9020,
L"WNA3100(v1) Wireless-N 300 [Broadcom BCM43231]"
},
{
0x0846,
L"NetGear, Inc.",
0x9021,
L"WNA3100M(v1) Wireless-N 300 [Realtek RTL8192CU]"
},
{
0x0846,
L"NetGear, Inc.",
0x9030,
L"WNA1100 Wireless-N 150 [Atheros AR9271]"
},
{
0x0846,
L"NetGear, Inc.",
0x9040,
L"WNA1000 Wireless-N 150 [Atheros AR9170+AR9101]"
},
{
0x0846,
L"NetGear, Inc.",
0x9041,
L"WNA1000M 802.11bgn [Realtek RTL8188CUS]"
},
{
0x0846,
L"NetGear, Inc.",
0x9042,
L"On Networks N150MA 802.11bgn [Realtek RTL8188CUS]"
},
{
0x0846,
L"NetGear, Inc.",
0x9043,
L"WNA1000Mv2 802.11bgn [Realtek RTL8188CUS?]"
},
{
0x0846,
L"NetGear, Inc.",
0x9050,
L"A6200 802.11a/b/g/n/ac Wireless Adapter [Broadcom BCM43526]"
},
{
0x0846,
L"NetGear, Inc.",
0x9051,
L"A6200v2 802.11a/b/g/n/ac (2x2) Wireless Adapter [Realtek RTL8812AU]"
},
{
0x0846,
L"NetGear, Inc.",
0x9052,
L"A6100 AC600 DB Wireless Adapter [Realtek RTL8811AU]"
},
{
0x0846,
L"NetGear, Inc.",
0xa001,
L"PA101 10 Mbps HPNA Home Phoneline RJ-1"
},
{
0x0846,
L"NetGear, Inc.",
0xf001,
L"On Networks N300MA 802.11bgn [Realtek RTL8192CU]"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0001,
L"Jenoptik JD800i"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0003,
L"S-Cam F5/D-Link DSC-350 Digital Camera"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0011,
L"Argus DC3500 Digital Camera"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0014,
L"Praktica DC 32"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0019,
L"Praktica DPix3000"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x0025,
L"Praktica DC 60"
},
{
0x084d,
L"Minton Optic Industry Co., Inc.",
0x1001,
L"ScanHex SX-35d"
},
{
0x084e,
L"KB Gear",
0x0001,
L"JamCam Camera"
},
{
0x084e,
L"KB Gear",
0x1001,
L"Jam Studio Tablet"
},
{
0x084e,
L"KB Gear",
0x1002,
L"Pablo Tablet"
},
{
0x084f,
L"Empeg",
0x0001,
L"Empeg-Car Mark I/II Player"
},
{
0x0850,
L"Fast Point Technologies, Inc.",
0x0,
L"0"
},
{
0x0851,
L"Macronix International Co., Ltd",
0x1542,
L"SiPix Blink"
},
{
0x0851,
L"Macronix International Co., Ltd",
0x1543,
L"Maxell WS30 Slim Digital Camera, or Pandigital PI8004W01 digital photo frame"
},
{
0x0851,
L"Macronix International Co., Ltd",
0xa168,
L"MXIC"
},
{
0x0852,
L"CSEM",
0x0,
L"0"
},
{
0x0853,
L"Topre Corporation",
0x0100,
L"HHKB Professional"
},
{
0x0854,
L"ActiveWire, Inc.",
0x0100,
L"I/O Board"
},
{
0x0854,
L"ActiveWire, Inc.",
0x0101,
L"I/O Board, rev1"
},
{
0x0856,
L"B&B Electronics",
0xac01,
L"uLinks USOTL4 RS422/485 Adapter"
},
{
0x0858,
L"Hitachi Maxell, Ltd",
0x3102,
L"Bluetooth Device"
},
{
0x0858,
L"Hitachi Maxell, Ltd",
0xffff,
L"Maxell module with BlueCore in DFU mode"
},
{
0x0859,
L"Minolta Systems Laboratory, Inc.",
0x0,
L"0"
},
{
0x085a,
L"Xircom",
0x0001,
L"Portstation Dual Serial Port"
},
{
0x085a,
L"Xircom",
0x0003,
L"Portstation Paraller Port"
},
{
0x085a,
L"Xircom",
0x0008,
L"Ethernet"
},
{
0x085a,
L"Xircom",
0x0009,
L"Ethernet"
},
{
0x085a,
L"Xircom",
0x000b,
L"Portstation Dual PS/2 Port"
},
{
0x085a,
L"Xircom",
0x0021,
L"1 port to Serial Converter"
},
{
0x085a,
L"Xircom",
0x0022,
L"Parallel Port"
},
{
0x085a,
L"Xircom",
0x0023,
L"2 port to Serial Converter"
},
{
0x085a,
L"Xircom",
0x0024,
L"Parallel Port"
},
{
0x085a,
L"Xircom",
0x0026,
L"PortGear SCSI"
},
{
0x085a,
L"Xircom",
0x0027,
L"1 port to Serial Converter"
},
{
0x085a,
L"Xircom",
0x0028,
L"PortGear to SCSI Converter"
},
{
0x085a,
L"Xircom",
0x0032,
L"PortStation SCSI Module"
},
{
0x085a,
L"Xircom",
0x003c,
L"Bluetooth Adapter"
},
{
0x085a,
L"Xircom",
0x0299,
L"Colorvision, Inc. Monitor Spyder"
},
{
0x085a,
L"Xircom",
0x8021,
L"1 port to Serial"
},
{
0x085a,
L"Xircom",
0x8023,
L"2 port to Serial"
},
{
0x085a,
L"Xircom",
0x8027,
L"PGSDB9 Serial Port"
},
{
0x085c,
L"ColorVision, Inc.",
0x0100,
L"Spyder 1"
},
{
0x085c,
L"ColorVision, Inc.",
0x0200,
L"Spyder 2"
},
{
0x085c,
L"ColorVision, Inc.",
0x0300,
L"Spyder 3"
},
{
0x085c,
L"ColorVision, Inc.",
0x0400,
L"Spyder 4"
},
{
0x0862,
L"Teletrol Systems, Inc.",
0x0,
L"0"
},
{
0x0863,
L"Filanet Corp.",
0x0,
L"0"
},
{
0x0864,
L"NetGear, Inc.",
0x4100,
L"MA101 802.11b Adapter"
},
{
0x0864,
L"NetGear, Inc.",
0x4102,
L"MA101 802.11b Adapter"
},
{
0x0867,
L"Data Translation, Inc.",
0x9812,
L"ECON Data acquisition unit"
},
{
0x0867,
L"Data Translation, Inc.",
0x9816,
L"DT9816 ECON data acquisition module"
},
{
0x0867,
L"Data Translation, Inc.",
0x9836,
L"DT9836 data acquisition card"
},
{
0x086a,
L"Emagic Soft- und Hardware GmbH",
0x0001,
L"Unitor8"
},
{
0x086a,
L"Emagic Soft- und Hardware GmbH",
0x0002,
L"AMT8"
},
{
0x086a,
L"Emagic Soft- und Hardware GmbH",
0x0003,
L"MT4"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1001,
L"Eumex 504PC ISDN TA"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1002,
L"Eumex 504PC (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1003,
L"TA33 ISDN TA"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1004,
L"TA33 (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1005,
L"Eumex 604PC HomeNet"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1006,
L"Eumex 604PC HomeNet (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1007,
L"Eumex 704PC DSL"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1008,
L"Eumex 704PC DSL (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1009,
L"Eumex 724PC DSL"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x100a,
L"Eumex 724PC DSL (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x100b,
L"OpenCom 30"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x100c,
L"OpenCom 30 (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x100d,
L"BeeTel Home 100"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x100e,
L"BeeTel Home 100 (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1011,
L"USB2DECT"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1012,
L"USB2DECT (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1013,
L"Eumex 704PC LAN"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1014,
L"Eumex 704PC LAN (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1019,
L"Eumex 504 SE"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x101a,
L"Eumex 504 SE (Flash-Mode)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1021,
L"OpenCom 40"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1022,
L"OpenCom 40 (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1023,
L"OpenCom 45"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1024,
L"OpenCom 45 (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1025,
L"Sinus 61 data"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1029,
L"dect BOX"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x102c,
L"Eumex 604PC HomeNet [FlashLoad]"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1030,
L"Eumex 704PC DSL [FlashLoad]"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1032,
L"OpenCom 40 [FlashLoad]"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1033,
L"OpenCom 30 plus"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1034,
L"OpenCom 30 plus (FlashLoad)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1041,
L"Eumex 220PC"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1042,
L"Eumex 220PC (FlashMode)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1055,
L"Eumex 220 Version 2 ISDN TA"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x1056,
L"Eumex 220 Version 2 ISDN TA (Flash-Mode)"
},
{
0x086c,
L"DeTeWe - Deutsche Telephonwerke AG & Co.",
0x2000,
L"OpenCom 1000"
},
{
0x086e,
L"System TALKS, Inc.",
0x1920,
L"SGC-X2UL"
},
{
0x086f,
L"MEC IMEX, Inc.",
0x0,
L"0"
},
{
0x0870,
L"Metricom",
0x0001,
L"Ricochet GS"
},
{
0x0871,
L"SanDisk, Inc.",
0x0001,
L"SDDR-01 Compact Flash Reader"
},
{
0x0871,
L"SanDisk, Inc.",
0x0002,
L"SDDR-31 Compact Flash Reader"
},
{
0x0871,
L"SanDisk, Inc.",
0x0005,
L"SDDR-05 Compact Flash Reader"
},
{
0x0873,
L"Xpeed, Inc.",
0x0,
L"0"
},
{
0x0874,
L"A-Tec Subsystem, Inc.",
0x0,
L"0"
},
{
0x0879,
L"Comtrol Corp.",
0x0,
L"0"
},
{
0x087c,
L"Adesso/Kbtek America, Inc.",
0x0,
L"0"
},
{
0x087d,
L"Jaton Corp.",
0x5704,
L"Ethernet"
},
{
0x087e,
L"Fujitsu Computer Products of America",
0x0,
L"0"
},
{
0x087f,
L"QualCore Logic Inc.",
0x0,
L"0"
},
{
0x0880,
L"APT Technologies, Inc.",
0x0,
L"0"
},
{
0x0883,
L"Recording Industry Association of America (RIAA)",
0x0,
L"0"
},
{
0x0885,
L"Boca Research, Inc.",
0x0,
L"0"
},
{
0x0886,
L"XAC Automation Corp.",
0x0630,
L"Intel PC Camera CS630"
},
{
0x0887,
L"Hannstar Electronics Corp.",
0x0,
L"0"
},
{
0x088a,
L"TechTools",
0x1002,
L"DigiView DV3100"
},
{
0x088b,
L"MassWorks, Inc.",
0x4944,
L"MassWorks ID-75 TouchScreen"
},
{
0x088c,
L"Swecoin AB",
0x2030,
L"Ticket Printer TTP 2030"
},
{
0x088e,
L"iLok",
0x5036,
L"Portable secure storage for software licenses"
},
{
0x0892,
L"DioGraphy, Inc.",
0x0101,
L"Smartdio Reader/Writer"
},
{
0x0894,
L"TSI Incorporated",
0x0010,
L"Remote NDIS Network Device"
},
{
0x0897,
L"Lauterbach",
0x0001,
L"ICE In-Circuit Emulator"
},
{
0x0897,
L"Lauterbach",
0x0002,
L"Power Debug/Power Debug II"
},
{
0x0897,
L"Lauterbach",
0x0004,
L"PowerDebug"
},
{
0x0897,
L"Lauterbach",
0x0005,
L"PowerDebug PRO"
},
{
0x089c,
L"United Technologies Research Cntr.",
0x0,
L"0"
},
{
0x089d,
L"Icron Technologies Corp.",
0x0,
L"0"
},
{
0x089e,
L"NST Co., Ltd",
0x0,
L"0"
},
{
0x089f,
L"Primex Aerospace Co.",
0x0,
L"0"
},
{
0x08a5,
L"e9, Inc.",
0x0,
L"0"
},
{
0x08a6,
L"Toshiba TEC",
0x0051,
L"B-SV4"
},
{
0x08a8,
L"Andrea Electronics",
0x0,
L"0"
},
{
0x08a9,
L"CWAV Inc.",
0x0005,
L"USBee ZX"
},
{
0x08a9,
L"CWAV Inc.",
0x0009,
L"USBee SX"
},
{
0x08a9,
L"CWAV Inc.",
0x0012,
L"USBee AX-Standard"
},
{
0x08a9,
L"CWAV Inc.",
0x0013,
L"USBee AX-Plus"
},
{
0x08a9,
L"CWAV Inc.",
0x0014,
L"USBee AX-Pro"
},
{
0x08a9,
L"CWAV Inc.",
0x0015,
L"USBee DX"
},
{
0x08ac,
L"Macraigor Systems LLC",
0x2024,
L"usbWiggler"
},
{
0x08ae,
L"Macally (Mace Group, Inc.)",
0x0,
L"0"
},
{
0x08b0,
L"Metrohm",
0x0006,
L"814 Sample Processor"
},
{
0x08b0,
L"Metrohm",
0x0015,
L"857 Titrando"
},
{
0x08b0,
L"Metrohm",
0x001a,
L"852 Titrando"
},
{
0x08b4,
L"Sorenson Vision, Inc.",
0x0,
L"0"
},
{
0x08b7,
L"NATSU",
0x0001,
L"Playstation adapter"
},
{
0x08b8,
L"J. Gordon Electronic Design, Inc.",
0x01f4,
L"USBSIMM1"
},
{
0x08b9,
L"RadioShack Corp. (Tandy)",
0x0,
L"0"
},
{
0x08bb,
L"Texas Instruments",
0x2702,
L"PCM2702 16-bit stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x2704,
L"PCM2704 16-bit stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x2705,
L"PCM2705 stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x2706,
L"PCM2706 stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x2707,
L"PCM2707 stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x27c4,
L"PCM2704C stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x27c5,
L"PCM2705C stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x27c6,
L"PCM2706C stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x27c7,
L"PCM2707C stereo audio DAC"
},
{
0x08bb,
L"Texas Instruments",
0x2900,
L"PCM2900 Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x2901,
L"PCM2901 Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x2902,
L"PCM2902 Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x2904,
L"PCM2904 Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x2910,
L"PCM2912 Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x2912,
L"PCM2912A Audio Codec"
},
{
0x08bb,
L"Texas Instruments",
0x29b0,
L"PCM2900B Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29b2,
L"PCM2902 Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29b3,
L"PCM2903B Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29b6,
L"PCM2906B Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29c0,
L"PCM2900C Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29c2,
L"PCM2902C Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29c3,
L"PCM2903C Audio CODEC"
},
{
0x08bb,
L"Texas Instruments",
0x29c6,
L"PCM2906C Audio CODEC"
},
{
0x08bd,
L"Citizen Watch Co., Ltd",
0x0208,
L"CLP-521 Label Printer"
},
{
0x08bd,
L"Citizen Watch Co., Ltd",
0x1100,
L"X1-USB Floppy"
},
{
0x08c3,
L"Precise Biometrics",
0x0001,
L"100 SC"
},
{
0x08c3,
L"Precise Biometrics",
0x0002,
L"100 A"
},
{
0x08c3,
L"Precise Biometrics",
0x0003,
L"100 SC BioKeyboard"
},
{
0x08c3,
L"Precise Biometrics",
0x0006,
L"100 A BioKeyboard"
},
{
0x08c3,
L"Precise Biometrics",
0x0100,
L"100 MC ISP"
},
{
0x08c3,
L"Precise Biometrics",
0x0101,
L"100 MC FingerPrint and SmartCard Reader"
},
{
0x08c3,
L"Precise Biometrics",
0x0300,
L"100 AX"
},
{
0x08c3,
L"Precise Biometrics",
0x0400,
L"100 SC"
},
{
0x08c3,
L"Precise Biometrics",
0x0401,
L"150 MC"
},
{
0x08c3,
L"Precise Biometrics",
0x0402,
L"200 MC FingerPrint and SmartCard Reader"
},
{
0x08c3,
L"Precise Biometrics",
0x0404,
L"100 SC Upgrade"
},
{
0x08c3,
L"Precise Biometrics",
0x0405,
L"150 MC Upgrade"
},
{
0x08c3,
L"Precise Biometrics",
0x0406,
L"100 MC Upgrade"
},
{
0x08c4,
L"Proxim, Inc.",
0x0100,
L"Skyline 802.11b Wireless Adapter"
},
{
0x08c4,
L"Proxim, Inc.",
0x02f2,
L"Farallon Home Phoneline Adapter"
},
{
0x08c7,
L"Key Nice Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x08c8,
L"2Wire, Inc.",
0x0,
L"0"
},
{
0x08c9,
L"Nippon Telegraph and Telephone Corp.",
0x0,
L"0"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0001,
L"Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0010,
L"Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0020,
L"APT-6000U Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0021,
L"APT-2 Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0022,
L"Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0023,
L"Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0024,
L"Tablet"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0100,
L"Pen Drive"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0102,
L"DualCam"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0103,
L"Pocket DV Digital Camera"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0104,
L"Pocket DVII"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0105,
L"Mega DV(Disk)"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0106,
L"Pocket DV3100+"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0107,
L"Pocket DV3100"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0109,
L"Nisis DV4 Digital Camera"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x010a,
L"Trust 738AV LCD PV Mass Storage"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x0111,
L"PenCam VGA Plus"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2008,
L"Mini PenCam 2"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2010,
L"Pocket CAM 3 Mega (webcam)"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2011,
L"Pocket CAM 3 Mega (storage)"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2016,
L"PocketCam 2 Mega"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2018,
L"Pencam SD 2M"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2019,
L"Pencam SD 2M (mass storage mode)"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2020,
L"Slim 3000F"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2022,
L"Slim 3200"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2024,
L"Pocket DV3500"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2028,
L"Pocket Cam4M"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2040,
L"Pocket DV4100M"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2042,
L"Pocket DV5100M Composite Device"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2043,
L"Pocket DV5100M (Disk)"
},
{
0x08ca,
L"Aiptek International, Inc.",
0x2060,
L"Pocket DV5300"
},
{
0x08cd,
L"Jue Hsun Ind. Corp.",
0x0,
L"0"
},
{
0x08ce,
L"Long Well Electronics Corp.",
0x0,
L"0"
},
{
0x08cf,
L"Productivity Enhancement Products",
0x0,
L"0"
},
{
0x08d1,
L"smartBridges, Inc.",
0x0001,
L"smartNIC Ethernet [catc]"
},
{
0x08d1,
L"smartBridges, Inc.",
0x0003,
L"smartNIC 2 PnP Ethernet"
},
{
0x08d3,
L"Virtual Ink",
0x0,
L"0"
},
{
0x08d4,
L"Fujitsu Siemens Computers",
0x0009,
L"SCR SmartCard Reader"
},
{
0x08d8,
L"IXXAT Automation GmbH",
0x0002,
L"USB-to-CAN compact"
},
{
0x08d8,
L"IXXAT Automation GmbH",
0x0003,
L"USB-to-CAN II"
},
{
0x08d8,
L"IXXAT Automation GmbH",
0x0100,
L"USB-to-CAN"
},
{
0x08d9,
L"Increment P Corp.",
0x0,
L"0"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x0112,
L"Wireless LAN Adapter"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x0113,
L"Wireless LAN Adapter"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x0986,
L"USB-100N Ethernet [pegasus]"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x0987,
L"USBLP-100 HomePNA Ethernet [pegasus]"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x0988,
L"USBEL-100 Ethernet [pegasus]"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x1986,
L"10/100 LAN Adapter"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x2103,
L"DVB-T TV-Tuner Card-R"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x8511,
L"USBE-100 Ethernet [pegasus2]"
},
{
0x08dd,
L"Billionton Systems, Inc.",
0x90ff,
L"USB2AR Ethernet"
},
{
0x08de,
L"?",
0x7a01,
L"802.11b Adapter"
},
{
0x08df,
L"Spyrus, Inc.",
0x0001,
L"Rosetta Token V1"
},
{
0x08df,
L"Spyrus, Inc.",
0x0002,
L"Rosetta Token V2"
},
{
0x08df,
L"Spyrus, Inc.",
0x0003,
L"Rosetta Token V3"
},
{
0x08df,
L"Spyrus, Inc.",
0x0a00,
L"Lynks Interface"
},
{
0x08e3,
L"Olitec, Inc.",
0x0002,
L"USB-RS232 Bridge"
},
{
0x08e3,
L"Olitec, Inc.",
0x0100,
L"Interface ADSL"
},
{
0x08e3,
L"Olitec, Inc.",
0x0101,
L"Interface ADSL"
},
{
0x08e3,
L"Olitec, Inc.",
0x0102,
L"ADSL"
},
{
0x08e3,
L"Olitec, Inc.",
0x0301,
L"RNIS ISDN TA [HFC-S]"
},
{
0x08e4,
L"Pioneer Corp.",
0x0184,
L"DDJ-WeGO"
},
{
0x08e4,
L"Pioneer Corp.",
0x0185,
L"DDJ-WeGO2"
},
{
0x08e5,
L"Litronic",
0x0,
L"0"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x0001,
L"GemPC-Touch 430"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x0430,
L"GemPC430 SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x0432,
L"GemPC432 SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x0435,
L"GemPC435 SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x0437,
L"GemPC433 SL SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x1359,
L"UA SECURE STORAGE TOKEN"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x2202,
L"Gem e-Seal Pro Token"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x3437,
L"GemPC Twin SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x3438,
L"GemPC Key SmartCard Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x3478,
L"PinPad Smart Card Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x34ec,
L"Compact Smart Card Reader Writer"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x4433,
L"GemPC433-Swap"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x5501,
L"GemProx-PU Contactless Smart Card Reader"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0x5503,
L"Prox-DU Contactless Interface"
},
{
0x08e6,
L"Gemalto (was Gemplus)",
0xace0,
L"UA HYBRID TOKEN"
},
{
0x08e7,
L"Pan-International Wire & Cable",
0x0,
L"0"
},
{
0x08e8,
L"Integrated Memory Logic",
0x0,
L"0"
},
{
0x08e9,
L"Extended Systems, Inc.",
0x0100,
L"XTNDAccess IrDA Dongle"
},
{
0x08ea,
L"Ericsson, Inc., Blue Ridge Labs",
0x00c9,
L"ADSL Modem HM120dp Loader"
},
{
0x08ea,
L"Ericsson, Inc., Blue Ridge Labs",
0x00ca,
L"ADSL WAN Modem HM120dp"
},
{
0x08ea,
L"Ericsson, Inc., Blue Ridge Labs",
0x00ce,
L"HM230d Virtual Bus for Helium"
},
{
0x08ea,
L"Ericsson, Inc., Blue Ridge Labs",
0xabba,
L"USB Driver for Bluetooth Wireless Technology"
},
{
0x08ea,
L"Ericsson, Inc., Blue Ridge Labs",
0xabbb,
L"Bluetooth Device in DFU State"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0001,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0002,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0005,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0008,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0010,
L"DiskOnKey"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0011,
L"DiskOnKey"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0012,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0014,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0015,
L"Kingston DataTraveler ELITE"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0016,
L"Kingston DataTraveler U3"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0020,
L"TravelDrive Intuix U3 2GB"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0021,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0022,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0023,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0024,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0025,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0026,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0027,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0028,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0029,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0030,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0822,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0832,
L"Hi-Speed Mass Storage Device"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0834,
L"M-Disk 220"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0998,
L"Kingston Data Traveler2.0 Disk Driver"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x0999,
L"Kingston Data Traveler2.0 Disk Driver"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x1000,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x2000,
L"TravelDrive 2C"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x2038,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x2039,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x204a,
L"TravelDrive"
},
{
0x08ec,
L"M-Systems Flash Disk Pioneers",
0x204b,
L"TravelDrive"
},
{
0x08ed,
L"MediaTek Inc.",
0x0002,
L"CECT M800 memory card"
},
{
0x08ee,
L"CCSI/Hesso",
0x0,
L"0"
},
{
0x08f0,
L"Corex Technologies",
0x0005,
L"CardScan 800c"
},
{
0x08f1,
L"CTI Electronics Corp.",
0x0,
L"0"
},
{
0x08f2,
L"Gotop Information Inc.",
0x007f,
L"Super Q2 Tablet"
},
{
0x08f5,
L"SysTec Co., Ltd",
0x0,
L"0"
},
{
0x08f6,
L"Logic 3 International, Ltd",
0x0,
L"0"
},
{
0x08f7,
L"Vernier",
0x0001,
L"LabPro"
},
{
0x08f7,
L"Vernier",
0x0002,
L"EasyTemp/Go!Temp"
},
{
0x08f7,
L"Vernier",
0x0003,
L"Go!Link"
},
{
0x08f7,
L"Vernier",
0x0004,
L"Go!Motion"
},
{
0x08f8,
L"Keen Top International Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x08f9,
L"Wipro Technologies",
0x0,
L"0"
},
{
0x08fa,
L"Caere",
0x0,
L"0"
},
{
0x08fb,
L"Socket Communications",
0x0,
L"0"
},
{
0x08fc,
L"Sicon Cable Technology Co., Ltd",
0x0,
L"0"
},
{
0x08fd,
L"Digianswer A/S",
0x0001,
L"Bluetooth Device"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x1600,
L"AES1600"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x1610,
L"AES1600"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x1660,
L"AES1660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x1680,
L"AES1660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x168f,
L"AES1660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2500,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2501,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2502,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2503,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2504,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2505,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2506,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2507,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2508,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2509,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250a,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250b,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250c,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250d,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250e,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x250f,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2510,
L"AES2510"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2550,
L"AES2550 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2580,
L"AES2501 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2588,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2589,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258a,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258b,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258c,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258d,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258e,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x258f,
L"AES2501"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2660,
L"AES2660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2680,
L"AES2660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x268f,
L"AES2660 Fingerprint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x2810,
L"AES2810"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3400,
L"AES3400 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3401,
L"AES3400 Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3402,
L"AES3400 Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3403,
L"AES3400 Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3404,
L"AES3400 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3405,
L"AES3400 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3406,
L"AES3400 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x3407,
L"AES3400 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x4902,
L"BioMV with TruePrint AES3500"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x4903,
L"BioMV with TruePrint AES3400"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5500,
L"AES4000"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5501,
L"AES4000 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5503,
L"AES4000 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5505,
L"AES4000 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5507,
L"AES4000 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x55ff,
L"AES4000 TruePrint Sensor."
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5700,
L"AES3500 Fingerprint Reader"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5701,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5702,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5703,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5704,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5705,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5706,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5707,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5710,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5711,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5712,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5713,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5714,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5715,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5716,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5717,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5730,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5731,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5732,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5733,
L"AES3500 TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5734,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5735,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5736,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0x5737,
L"AES3500-BZ TruePrint Sensor"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xafe3,
L"FingerLoc Sensor Module (Anchor)"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xafe4,
L"FingerLoc Sensor Module (Anchor)"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xafe5,
L"FingerLoc Sensor Module (Anchor)"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xafe6,
L"FingerLoc Sensor Module (Anchor)"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xfffd,
L"AES2510 Sensor (USB Emulator)"
},
{
0x08ff,
L"AuthenTec, Inc.",
0xffff,
L"Sensor (Emulator)"
},
{
0x0900,
L"Pinnacle Systems, Inc.",
0x0,
L"0"
},
{
0x0901,
L"VST Technologies",
0x0001,
L"Hard Drive Adapter (TPP)"
},
{
0x0901,
L"VST Technologies",
0x0002,
L"SigmaDrive Adapter (TPP)"
},
{
0x0906,
L"Faraday Technology Corp.",
0x0,
L"0"
},
{
0x0908,
L"Siemens AG",
0x01f4,
L"SIMATIC NET CP 5711"
},
{
0x0908,
L"Siemens AG",
0x01fe,
L"SIMATIC NET PC Adapter A2"
},
{
0x0908,
L"Siemens AG",
0x04b1,
L"MediSET"
},
{
0x0908,
L"Siemens AG",
0x04b2,
L"NC interface"
},
{
0x0908,
L"Siemens AG",
0x04b3,
L"keyboard front panel Cockpit"
},
{
0x0908,
L"Siemens AG",
0x04b4,
L"SCR_CCID"
},
{
0x0908,
L"Siemens AG",
0x2701,
L"ShenZhen SANZHAI Technology Co.,Ltd Spy Pen VGA"
},
{
0x0909,
L"Audio-Technica Corp.",
0x0,
L"0"
},
{
0x090a,
L"Trumpion Microelectronics, Inc.",
0x1001,
L"T33520 Flash Card Controller"
},
{
0x090a,
L"Trumpion Microelectronics, Inc.",
0x1100,
L"Comotron C3310 MP3 player"
},
{
0x090a,
L"Trumpion Microelectronics, Inc.",
0x1200,
L"MP3 player"
},
{
0x090a,
L"Trumpion Microelectronics, Inc.",
0x1540,
L"Digitex Container Flash Disk"
},
{
0x090b,
L"Neurosmith",
0x0,
L"0"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x0371,
L"Silicon Motion SM371 Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x0373,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x037a,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x037b,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x037c,
L"300k Pixel Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x1000,
L"Flash Drive"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x1132,
L"5-in-1 Card Reader"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x337b,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x3710,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x3720,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x37bc,
L"HP Webcam-101 Integrated Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x37c0,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x6000,
L"SD/SDHC Card Reader (SG365 / FlexiDrive XC+)"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x6200,
L"microSD card reader"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x71b3,
L"SM731 Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x837b,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0x937b,
L"Silicon Motion Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0xb370,
L"Silicon Motion SM370 Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0xb371,
L"Silicon Motion SM371 Camera"
},
{
0x090c,
L"Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)",
0xf37d,
L"Endoscope camera"
},
{
0x090d,
L"Multiport Computer Vertriebs GmbH",
0x0,
L"0"
},
{
0x090e,
L"Shining Technology, Inc.",
0x0,
L"0"
},
{
0x090f,
L"Fujitsu Devices, Inc.",
0x0,
L"0"
},
{
0x0910,
L"Alation Systems, Inc.",
0x0,
L"0"
},
{
0x0911,
L"Philips Speech Processing",
0x149a,
L"SpeechMike II Pro Plus LFH5276"
},
{
0x0911,
L"Philips Speech Processing",
0x2512,
L"SpeechMike Pro"
},
{
0x0912,
L"Voquette, Inc.",
0x0,
L"0"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x0001,
L"DSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x0002,
L"ADSL ATM Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x0005,
L"LAN Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x2000,
L"802.11 Adapter"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x2002,
L"802.11 Adapter"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8000,
L"ADSL LAN Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8005,
L"DSL-302G Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8101,
L"ADSL WAN Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8102,
L"DSL-200 ADSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8103,
L"DSL-200 ADSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8104,
L"DSL-200 Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8400,
L"DSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8401,
L"DSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8402,
L"DSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8500,
L"DSL Modem"
},
{
0x0915,
L"GlobeSpan, Inc.",
0x8501,
L"DSL Modem"
},
{
0x0917,
L"SmartDisk Corp.",
0x0001,
L"eFilm Reader-11 SM/CF"
},
{
0x0917,
L"SmartDisk Corp.",
0x0002,
L"eFilm Reader-11 SM"
},
{
0x0917,
L"SmartDisk Corp.",
0x0003,
L"eFilm Reader-11 CF"
},
{
0x0917,
L"SmartDisk Corp.",
0x0200,
L"FireFly"
},
{
0x0917,
L"SmartDisk Corp.",
0x0201,
L"FireLite"
},
{
0x0917,
L"SmartDisk Corp.",
0x0202,
L"STORAGE ADAPTER (FirePower)"
},
{
0x0917,
L"SmartDisk Corp.",
0x0204,
L"FlashTrax Storage"
},
{
0x0917,
L"SmartDisk Corp.",
0x0205,
L"STORAGE ADAPTER (CrossFire)"
},
{
0x0917,
L"SmartDisk Corp.",
0x0206,
L"FireFly 20G HDD"
},
{
0x0917,
L"SmartDisk Corp.",
0x0207,
L"FireLite"
},
{
0x0917,
L"SmartDisk Corp.",
0x020f,
L"STORAGE ADAPTER (FireLite)"
},
{
0x0917,
L"SmartDisk Corp.",
0xda01,
L"eFilm Reader-11 Test"
},
{
0x0917,
L"SmartDisk Corp.",
0xffff,
L"eFilm Reader-11 (Class/PDR)"
},
{
0x0919,
L"Tiger Electronics",
0x0100,
L"Fast Flicks Digital Camera"
},
{
0x091e,
L"Garmin International",
0x0003,
L"GPS (various models)"
},
{
0x091e,
L"Garmin International",
0x0004,
L"iQue 3600"
},
{
0x091e,
L"Garmin International",
0x0200,
L"Data Card Programmer (install)"
},
{
0x091e,
L"Garmin International",
0x086e,
L"Forerunner 735XT"
},
{
0x091e,
L"Garmin International",
0x097f,
L"Forerunner 235"
},
{
0x091e,
L"Garmin International",
0x1200,
L"Data Card Programmer"
},
{
0x091e,
L"Garmin International",
0x21a5,
L"etrex Cx (msc)"
},
{
0x091e,
L"Garmin International",
0x2236,
L"nuvi 360"
},
{
0x091e,
L"Garmin International",
0x2271,
L"Edge 605/705"
},
{
0x091e,
L"Garmin International",
0x2295,
L"Colorado 300"
},
{
0x091e,
L"Garmin International",
0x22b6,
L"eTrex Vista HCx (Mass Storage mode)"
},
{
0x091e,
L"Garmin International",
0x231b,
L"Oregon 400t"
},
{
0x091e,
L"Garmin International",
0x2353,
L"Nüvi 205T"
},
{
0x091e,
L"Garmin International",
0x2380,
L"Oregon series"
},
{
0x091e,
L"Garmin International",
0x23cc,
L"nüvi 1350"
},
{
0x091e,
L"Garmin International",
0x2459,
L"GPSmap 62/78 series"
},
{
0x091e,
L"Garmin International",
0x2491,
L"Edge 800"
},
{
0x091e,
L"Garmin International",
0x2519,
L"eTrex 30"
},
{
0x091e,
L"Garmin International",
0x2535,
L"Edge 800"
},
{
0x091e,
L"Garmin International",
0x253c,
L"GPSmap 62sc"
},
{
0x091e,
L"Garmin International",
0x255b,
L"Nuvi 2505LM"
},
{
0x091e,
L"Garmin International",
0x26a1,
L"Nuvi 55"
},
{
0x091e,
L"Garmin International",
0x47fb,
L"nuviCam"
},
{
0x0920,
L"Echelon Co.",
0x7500,
L"Network Interface"
},
{
0x0921,
L"GoHubs, Inc.",
0x1001,
L"GoCOM232 Serial"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x0007,
L"LabelWriter 330"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x0009,
L"LabelWriter 310"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x0019,
L"LabelWriter 400"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x001a,
L"LabelWriter 400 Turbo"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x0020,
L"LabelWriter 450"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x1001,
L"LabelManager PnP"
},
{
0x0922,
L"Dymo-CoStar Corp.",
0x8004,
L"M25 Digital Postal Scale"
},
{
0x0923,
L"IC Media Corp.",
0x010f,
L"SIIG MobileCam"
},
{
0x0924,
L"Xerox",
0x23dd,
L"DocuPrint M760 (X760_USB)"
},
{
0x0924,
L"Xerox",
0x3ce8,
L"Phaser 3428 Printer"
},
{
0x0924,
L"Xerox",
0x3cea,
L"Phaser 3125"
},
{
0x0924,
L"Xerox",
0x3cec,
L"Phaser 3250"
},
{
0x0924,
L"Xerox",
0x3d5b,
L"Phaser 6115MFP TWAIN Scanner"
},
{
0x0924,
L"Xerox",
0x3d6d,
L"WorkCentre 6015N/NI"
},
{
0x0924,
L"Xerox",
0x420f,
L"WorkCentre PE220 Series"
},
{
0x0924,
L"Xerox",
0x421f,
L"M20 Scanner"
},
{
0x0924,
L"Xerox",
0x423b,
L"Printing Support"
},
{
0x0924,
L"Xerox",
0x4274,
L"Xerox Phaser 3635MFPX"
},
{
0x0924,
L"Xerox",
0xffef,
L"WorkCenter M15"
},
{
0x0924,
L"Xerox",
0xfffb,
L"DocuPrint M750 (X750_USB)"
},
{
0x0925,
L"Lakeview Research",
0x0005,
L"Gamtec.,Ltd SmartJoy PLUS Adapter"
},
{
0x0925,
L"Lakeview Research",
0x03e8,
L"Wii Classic Controller Adapter"
},
{
0x0925,
L"Lakeview Research",
0x3881,
L"Saleae Logic"
},
{
0x0925,
L"Lakeview Research",
0x8101,
L"Phidgets, Inc., 1-Motor PhidgetServo v2.0"
},
{
0x0925,
L"Lakeview Research",
0x8104,
L"Phidgets, Inc., 4-Motor PhidgetServo v2.0"
},
{
0x0925,
L"Lakeview Research",
0x8800,
L"WiseGroup Ltd, MP-8800 Quad Joypad"
},
{
0x0925,
L"Lakeview Research",
0x8866,
L"WiseGroup Ltd, MP-8866 Dual Joypad"
},
{
0x0927,
L"Summus, Ltd",
0x0,
L"0"
},
{
0x0928,
L"PLX Technology, Inc. (formerly Oxford Semiconductor, Ltd)",
0x8000,
L"Firmware uploader"
},
{
0x0928,
L"PLX Technology, Inc. (formerly Oxford Semiconductor, Ltd)",
0xffff,
L"Blank Oxford Device"
},
{
0x0929,
L"American Biometric Co.",
0x0,
L"0"
},
{
0x092a,
L"Toshiba Information & Industrial Sys. And Services",
0x0,
L"0"
},
{
0x092b,
L"Sena Technologies, Inc.",
0x0,
L"0"
},
{
0x092f,
L"Northern Embedded Science/CAVNEX",
0x0004,
L"JTAG-4"
},
{
0x092f,
L"Northern Embedded Science/CAVNEX",
0x0005,
L"JTAG-5"
},
{
0x0930,
L"Toshiba Corp.",
0x0009,
L"Gigabeat F/X (HDD audio player)"
},
{
0x0930,
L"Toshiba Corp.",
0x000c,
L"Gigabeat F (mtp)"
},
{
0x0930,
L"Toshiba Corp.",
0x0010,
L"Gigabeat S (mtp)"
},
{
0x0930,
L"Toshiba Corp.",
0x01bf,
L"2.5 External Hard Disk"
},
{
0x0930,
L"Toshiba Corp.",
0x0200,
L"Integrated Bluetooth (Taiyo Yuden)"
},
{
0x0930,
L"Toshiba Corp.",
0x021c,
L"Atheros AR3012 Bluetooth"
},
{
0x0930,
L"Toshiba Corp.",
0x0301,
L"PCX1100U Cable Modem (WDM)"
},
{
0x0930,
L"Toshiba Corp.",
0x0302,
L"PCX2000 Cable Modem (WDM)"
},
{
0x0930,
L"Toshiba Corp.",
0x0305,
L"Cable Modem PCX3000"
},
{
0x0930,
L"Toshiba Corp.",
0x0307,
L"Cable Modem PCX2500"
},
{
0x0930,
L"Toshiba Corp.",
0x0308,
L"PCX2200 Cable Modem (WDM)"
},
{
0x0930,
L"Toshiba Corp.",
0x0309,
L"PCX5000 Cable Modem (WDM)"
},
{
0x0930,
L"Toshiba Corp.",
0x030b,
L"Cable Modem PCX2600"
},
{
0x0930,
L"Toshiba Corp.",
0x0501,
L"Bluetooth Controller"
},
{
0x0930,
L"Toshiba Corp.",
0x0502,
L"Integrated Bluetooth"
},
{
0x0930,
L"Toshiba Corp.",
0x0503,
L"Bluetooth Controller"
},
{
0x0930,
L"Toshiba Corp.",
0x0505,
L"Integrated Bluetooth"
},
{
0x0930,
L"Toshiba Corp.",
0x0506,
L"Integrated Bluetooth"
},
{
0x0930,
L"Toshiba Corp.",
0x0507,
L"Bluetooth Adapter"
},
{
0x0930,
L"Toshiba Corp.",
0x0508,
L"Integrated Bluetooth HCI"
},
{
0x0930,
L"Toshiba Corp.",
0x0509,
L"BT EDR Dongle"
},
{
0x0930,
L"Toshiba Corp.",
0x0706,
L"PocketPC e740"
},
{
0x0930,
L"Toshiba Corp.",
0x0707,
L"Pocket PC e330 Series"
},
{
0x0930,
L"Toshiba Corp.",
0x0708,
L"Pocket PC e350 Series"
},
{
0x0930,
L"Toshiba Corp.",
0x0709,
L"Pocket PC e750 Series"
},
{
0x0930,
L"Toshiba Corp.",
0x070a,
L"Pocket PC e400 Series"
},
{
0x0930,
L"Toshiba Corp.",
0x070b,
L"Pocket PC e800 Series"
},
{
0x0930,
L"Toshiba Corp.",
0x0a07,
L"WLM-10U1 802.11abgn Wireless Adapter [Ralink RT3572]"
},
{
0x0930,
L"Toshiba Corp.",
0x0a08,
L"WLM-20U2/GN-1080 802.11abgn Wireless Adapter [Atheros AR7010+AR9280]"
},
{
0x0930,
L"Toshiba Corp.",
0x0a0b,
L"WLU5053 802.11abgn Wireless Module [Broadcom BCM43236B]"
},
{
0x0930,
L"Toshiba Corp.",
0x0a13,
L"AX88179 Gigabit Ethernet [Toshiba]"
},
{
0x0930,
L"Toshiba Corp.",
0x0b05,
L"PX1220E-1G25 External hard drive"
},
{
0x0930,
L"Toshiba Corp.",
0x0b09,
L"PX1396E-3T01 External hard drive"
},
{
0x0930,
L"Toshiba Corp.",
0x0b1a,
L"STOR.E ALU 2S"
},
{
0x0930,
L"Toshiba Corp.",
0x1300,
L"Wireless Broadband (CDMA EV-DO) SM-Bus Minicard Status Port"
},
{
0x0930,
L"Toshiba Corp.",
0x1301,
L"Wireless Broadband (CDMA EV-DO) Minicard Status Port"
},
{
0x0930,
L"Toshiba Corp.",
0x1302,
L"Wireless Broadband (3G HSDPA) SM-Bus Minicard Status Port"
},
{
0x0930,
L"Toshiba Corp.",
0x1303,
L"Wireless Broadband (3G HSDPA) Minicard Status Port"
},
{
0x0930,
L"Toshiba Corp.",
0x1308,
L"Broadband (3G HSDPA) SM-Bus Minicard Diagnostics Port"
},
{
0x0930,
L"Toshiba Corp.",
0x130b,
L"F3507g Mobile Broadband Module"
},
{
0x0930,
L"Toshiba Corp.",
0x130c,
L"F3607gw Mobile Broadband Module"
},
{
0x0930,
L"Toshiba Corp.",
0x1311,
L"F3607gw v2 Mobile Broadband Module"
},
{
0x0930,
L"Toshiba Corp.",
0x1400,
L"Memory Stick 2GB"
},
{
0x0930,
L"Toshiba Corp.",
0x642f,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6506,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6507,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6508,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6509,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6510,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6517,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6518,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6519,
L"Kingston DataTraveler 2.0 USB Stick"
},
{
0x0930,
L"Toshiba Corp.",
0x651a,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x651b,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x651c,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x651d,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x651e,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x651f,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6520,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6521,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6522,
L"TravelDrive 2C"
},
{
0x0930,
L"Toshiba Corp.",
0x6523,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6524,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6525,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6526,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6527,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6528,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6529,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x652a,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x652b,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x652c,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x652d,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x652f,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6530,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6531,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x6532,
L"256M Stick"
},
{
0x0930,
L"Toshiba Corp.",
0x6533,
L"512M Stick"
},
{
0x0930,
L"Toshiba Corp.",
0x6534,
L"TravelDrive"
},
{
0x0930,
L"Toshiba Corp.",
0x653c,
L"Kingston DataTraveler 2.0 Stick (512M)"
},
{
0x0930,
L"Toshiba Corp.",
0x653d,
L"Kingston DataTraveler 2.0 Stick (1GB)"
},
{
0x0930,
L"Toshiba Corp.",
0x653e,
L"Flash Memory"
},
{
0x0930,
L"Toshiba Corp.",
0x6540,
L"TransMemory Flash Memory"
},
{
0x0930,
L"Toshiba Corp.",
0x6544,
L"TransMemory-Mini / Kingston DataTraveler 2.0 Stick"
},
{
0x0930,
L"Toshiba Corp.",
0x6545,
L"Kingston DataTraveler 102/2.0 / HEMA Flash Drive 2 GB / PNY Attache 4GB Stick"
},
{
0x0931,
L"Harmonic Data Systems, Ltd",
0x0,
L"0"
},
{
0x0932,
L"Crescentec Corp.",
0x0300,
L"VideoAdvantage"
},
{
0x0932,
L"Crescentec Corp.",
0x0302,
L"Syntek DC-112X"
},
{
0x0932,
L"Crescentec Corp.",
0x0320,
L"VideoAdvantage"
},
{
0x0932,
L"Crescentec Corp.",
0x0482,
L"USB2.0 TVBOX"
},
{
0x0932,
L"Crescentec Corp.",
0x1100,
L"DC-1100 Video Enhamcement Device"
},
{
0x0932,
L"Crescentec Corp.",
0x1112,
L"Veo Web Camera"
},
{
0x0932,
L"Crescentec Corp.",
0xa311,
L"Video Enhancement Device"
},
{
0x0933,
L"Quantum Corp.",
0x0,
L"0"
},
{
0x0934,
L"Spirent Communications",
0x0,
L"0"
},
{
0x0936,
L"NuTesla",
0x000a,
L"Moebius"
},
{
0x0936,
L"NuTesla",
0x000b,
L"iMoebius"
},
{
0x0936,
L"NuTesla",
0x000c,
L"Rhythmedics 6 BioData Integrator"
},
{
0x0936,
L"NuTesla",
0x000d,
L"Hypurius"
},
{
0x0936,
L"NuTesla",
0x000e,
L"Millennius"
},
{
0x0936,
L"NuTesla",
0x000f,
L"Purius"
},
{
0x0936,
L"NuTesla",
0x0030,
L"Composite Device, Mass Storage Device (Flash Drive) amd HID"
},
{
0x0936,
L"NuTesla",
0x003c,
L"Rhythmedics HID Bootloader"
},
{
0x0939,
L"Lumberg, Inc.",
0x0b15,
L"Toshiba Stor.E Alu 2"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x0007,
L"CMOS 100K-R Rev. 1.90"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x010e,
L"Digital camera, CD302N/Elta Medi@ digi-cam/HE-501A"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x010f,
L"Argus DC-1610/DC-1620/Emprex PCD3600/Philips P44417B keychain camera/Precision Mini,Model HA513A/Vivitar Vivicam 55"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x020f,
L"Bullet Line Photo Viewer"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x050f,
L"Mars-Semi Pc-Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2460,
L"Q-TEC WEBCAM 100"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2468,
L"SoC PC-Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2470,
L"SoC PC-Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2471,
L"SoC PC-Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2500,
L"USB Optical Mouse"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2510,
L"Optical Mouse"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2521,
L"Optical Mouse"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2600,
L"Typhoon Easycam USB 330K (newer)/Typhoon Easycam USB 2.0 VGA 1.3M/Sansun SN-508"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2601,
L"SPC 610NC Laptop Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2603,
L"PAC7312 Camera"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2608,
L"PAC7311 Trust WB-3300p"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x260e,
L"PAC7311 Gigaware VGA PC Camera:Trust WB-3350p:SIGMA cam 2350"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x260f,
L"PAC7311 SnakeCam"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2621,
L"PAC731x Trust Webcam"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2622,
L"Webcam Genius"
},
{
0x093a,
L"Pixart Imaging, Inc.",
0x2624,
L"Webcam"
},
{
0x093b,
L"Plextor Corp.",
0x0010,
L"Storage Adapter"
},
{
0x093b,
L"Plextor Corp.",
0x0011,
L"PlexWriter 40/12/40U"
},
{
0x093b,
L"Plextor Corp.",
0x0041,
L"PX-708A DVD RW"
},
{
0x093b,
L"Plextor Corp.",
0x0042,
L"PX-712UF DVD RW"
},
{
0x093b,
L"Plextor Corp.",
0xa002,
L"ConvertX M402U XLOADER"
},
{
0x093b,
L"Plextor Corp.",
0xa003,
L"ConvertX AV100U A/V Capture Audio"
},
{
0x093b,
L"Plextor Corp.",
0xa004,
L"ConvertX TV402U XLOADER"
},
{
0x093b,
L"Plextor Corp.",
0xa005,
L"ConvertX TV100U A/V Capture"
},
{
0x093b,
L"Plextor Corp.",
0xa102,
L"ConvertX M402U A/V Capture"
},
{
0x093b,
L"Plextor Corp.",
0xa104,
L"ConvertX PX-TV402U/NA"
},
{
0x093c,
L"Intrepid Control Systems, Inc.",
0x0601,
L"ValueCAN"
},
{
0x093c,
L"Intrepid Control Systems, Inc.",
0x0701,
L"NeoVI Blue vehicle bus interface"
},
{
0x093d,
L"InnoSync, Inc.",
0x0,
L"0"
},
{
0x093e,
L"J.S.T. Mfg. Co., Ltd",
0x0,
L"0"
},
{
0x093f,
L"Olympia Telecom Vertriebs GmbH",
0x0,
L"0"
},
{
0x0940,
L"Japan Storage Battery Co., Ltd",
0x0,
L"0"
},
{
0x0941,
L"Photobit Corp.",
0x0,
L"0"
},
{
0x0942,
L"i2Go.com, LLC",
0x0,
L"0"
},
{
0x0943,
L"HCL Technologies India Private, Ltd",
0x0,
L"0"
},
{
0x0944,
L"KORG, Inc.",
0x0001,
L"PXR4 4-Track Digital Recorder"
},
{
0x0944,
L"KORG, Inc.",
0x0020,
L"KAOSS Pad KP3 Dynamic Effect/Sampler"
},
{
0x0944,
L"KORG, Inc.",
0x0023,
L"KAOSSILATOR PRO Dynamic Phrase Synthesizer"
},
{
0x0944,
L"KORG, Inc.",
0x010d,
L"nanoKEY MIDI keyboard"
},
{
0x0944,
L"KORG, Inc.",
0x010e,
L"nanoPAD pad controller"
},
{
0x0944,
L"KORG, Inc.",
0x010f,
L"nanoKONTROL studio controller"
},
{
0x0944,
L"KORG, Inc.",
0x0117,
L"nanoKONTROL2 MIDI Controller"
},
{
0x0944,
L"KORG, Inc.",
0x0f03,
L"K-Series K61P MIDI studio controller"
},
{
0x0945,
L"Pasco Scientific",
0x0,
L"0"
},
{
0x0948,
L"Kronauer music in digital",
0x0301,
L"USB Pro (24/48)"
},
{
0x0948,
L"Kronauer music in digital",
0x0302,
L"USB Pro (24/96 playback)"
},
{
0x0948,
L"Kronauer music in digital",
0x0303,
L"USB Pro (24/96 record)"
},
{
0x0948,
L"Kronauer music in digital",
0x0304,
L"USB Pro (16/48)"
},
{
0x0948,
L"Kronauer music in digital",
0x1105,
L"USB One"
},
{
0x094b,
L"Linkup Systems Corp.",
0x0001,
L"neonode N2"
},
{
0x094d,
L"Cable Television Laboratories",
0x0,
L"0"
},
{
0x094f,
L"Yano",
0x0101,
L"U640MO-03"
},
{
0x094f,
L"Yano",
0x05fc,
L"METALWEAR-HDD"
},
{
0x0951,
L"Kingston Technology",
0x0008,
L"Ethernet"
},
{
0x0951,
L"Kingston Technology",
0x000a,
L"KNU101TX 100baseTX Ethernet"
},
{
0x0951,
L"Kingston Technology",
0x1600,
L"DataTraveler II Pen Drive"
},
{
0x0951,
L"Kingston Technology",
0x1601,
L"DataTraveler II+ Pen Drive"
},
{
0x0951,
L"Kingston Technology",
0x1602,
L"DataTraveler Mini"
},
{
0x0951,
L"Kingston Technology",
0x1603,
L"DataTraveler 1GB/2GB Pen Drive"
},
{
0x0951,
L"Kingston Technology",
0x1606,
L"Eee PC 701 SD Card Reader [ENE UB6225]"
},
{
0x0951,
L"Kingston Technology",
0x1607,
L"DataTraveler 100"
},
{
0x0951,
L"Kingston Technology",
0x160b,
L"DataTraveler 2.0 (2GB)"
},
{
0x0951,
L"Kingston Technology",
0x160d,
L"DataTraveler Vault Privacy"
},
{
0x0951,
L"Kingston Technology",
0x160e,
L"DT110P/1GB Capless"
},
{
0x0951,
L"Kingston Technology",
0x1613,
L"DataTraveler DT101C Flash Drive"
},
{
0x0951,
L"Kingston Technology",
0x1616,
L"DataTraveler Locker 4GB"
},
{
0x0951,
L"Kingston Technology",
0x161a,
L"Dell HyperVisor internal flash drive"
},
{
0x0951,
L"Kingston Technology",
0x1621,
L"DataTraveler 150 (32GB)"
},
{
0x0951,
L"Kingston Technology",
0x1624,
L"DataTraveler G2"
},
{
0x0951,
L"Kingston Technology",
0x1625,
L"DataTraveler 101 II"
},
{
0x0951,
L"Kingston Technology",
0x162a,
L"DataTraveler 112 4GB Pen Drive"
},
{
0x0951,
L"Kingston Technology",
0x162b,
L"DataTraveler HyperX 3.0"
},
{
0x0951,
L"Kingston Technology",
0x162d,
L"DataTraveler 102"
},
{
0x0951,
L"Kingston Technology",
0x1630,
L"DataTraveler 200 (32GB)"
},
{
0x0951,
L"Kingston Technology",
0x1642,
L"DT101 G2"
},
{
0x0951,
L"Kingston Technology",
0x1643,
L"DataTraveler G3"
},
{
0x0951,
L"Kingston Technology",
0x1653,
L"Data Traveler 100 G2 8 GiB"
},
{
0x0951,
L"Kingston Technology",
0x1656,
L"DataTraveler Ultimate G2"
},
{
0x0951,
L"Kingston Technology",
0x1660,
L"Data Traveller 108"
},
{
0x0951,
L"Kingston Technology",
0x1665,
L"Digital DataTraveler SE9 64GB"
},
{
0x0951,
L"Kingston Technology",
0x1666,
L"DataTraveler 100 G3/G4/SE9 G2"
},
{
0x0951,
L"Kingston Technology",
0x1689,
L"DataTraveler SE9"
},
{
0x0951,
L"Kingston Technology",
0x168a,
L"DataTraveler Micro"
},
{
0x0951,
L"Kingston Technology",
0x168c,
L"DT Elite 3.0"
},
{
0x0951,
L"Kingston Technology",
0x16b3,
L"HyperX Savage"
},
{
0x0954,
L"RPM Systems Corp.",
0x0,
L"0"
},
{
0x0955,
L"NVIDIA Corp.",
0x7018,
L"T186 [Tegra Parker]"
},
{
0x0955,
L"NVIDIA Corp.",
0x701a,
L"U-Boot running on Tegra"
},
{
0x0955,
L"NVIDIA Corp.",
0x7020,
L"L4T (Linux for Tegra) running on Tegra"
},
{
0x0955,
L"NVIDIA Corp.",
0x7030,
L"T30 [Tegra 3] recovery mode"
},
{
0x0955,
L"NVIDIA Corp.",
0x7100,
L"Tegra Device"
},
{
0x0955,
L"NVIDIA Corp.",
0x7140,
L"T124 [Tegra K1/Logan 32-bit]"
},
{
0x0955,
L"NVIDIA Corp.",
0x7210,
L"SHIELD Controller"
},
{
0x0955,
L"NVIDIA Corp.",
0x7721,
L"T210 [Tegra Erista]"
},
{
0x0955,
L"NVIDIA Corp.",
0x7820,
L"T20 [Tegra 2] recovery mode"
},
{
0x0955,
L"NVIDIA Corp.",
0xb400,
L"SHIELD (debug)"
},
{
0x0955,
L"NVIDIA Corp.",
0xb401,
L"SHIELD"
},
{
0x0955,
L"NVIDIA Corp.",
0xcf05,
L"SHIELD Tablet (debug)"
},
{
0x0955,
L"NVIDIA Corp.",
0xcf06,
L"SHIELD Tablet"
},
{
0x0955,
L"NVIDIA Corp.",
0xcf07,
L"SHIELD Tablet"
},
{
0x0955,
L"NVIDIA Corp.",
0xcf08,
L"SHIELD Tablet"
},
{
0x0955,
L"NVIDIA Corp.",
0xcf09,
L"SHIELD Tablet"
},
{
0x0956,
L"BSquare Corp.",
0x0,
L"0"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x0200,
L"E-Video DC-350 Camera"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x0202,
L"E-Video DC-350 Camera"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x0407,
L"33220A Waveform Generator"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x0518,
L"82357B GPIB Interface"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x0a07,
L"34411A Multimeter"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x1507,
L"33210A Waveform Generator"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x1745,
L"Test and Measurement Device (IVI)"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0x2918,
L"U2702A oscilloscope"
},
{
0x0957,
L"Agilent Technologies, Inc.",
0xfb18,
L"LC Device"
},
{
0x0958,
L"CompuLink Research, Inc.",
0x0,
L"0"
},
{
0x0959,
L"Cologne Chip AG",
0x2bd0,
L"Intelligent ISDN (Ver. 3.60.04) [HFC-S]"
},
{
0x095a,
L"Portsmith",
0x3003,
L"Express Ethernet"
},
{
0x095b,
L"Medialogic Corp.",
0x0,
L"0"
},
{
0x095c,
L"K-Tec Electronics",
0x0,
L"0"
},
{
0x095d,
L"Polycom, Inc.",
0x0001,
L"Polycom ViaVideo"
},
{
0x0964,
L"BITRAN",
0x0,
L"0"
},
{
0x0967,
L"Acer NeWeb Corp.",
0x0204,
L"WarpLink 802.11b Adapter"
},
{
0x0968,
L"Catalyst Enterprises, Inc.",
0x0,
L"0"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0005,
L"ePass2000"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0120,
L"Microcosm Ltd Dinkey"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0305,
L"ePass2000Auto"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0309,
L"ePass3000GM"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0401,
L"ePass3000"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0702,
L"ePass3003"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0703,
L"ePass3003Auto"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0802,
L"ePass2000 (G&D STARCOS SPK 2.4)"
},
{
0x096e,
L"Feitian Technologies, Inc.",
0x0807,
L"ePass2003"
},
{
0x0971,
L"Gretag-Macbeth AG",
0x2000,
L"i1 Pro"
},
{
0x0971,
L"Gretag-Macbeth AG",
0x2001,
L"i1 Monitor"
},
{
0x0971,
L"Gretag-Macbeth AG",
0x2003,
L"Eye-One display"
},
{
0x0971,
L"Gretag-Macbeth AG",
0x2005,
L"Huey"
},
{
0x0971,
L"Gretag-Macbeth AG",
0x2007,
L"ColorMunki Photo"
},
{
0x0973,
L"Schlumberger",
0x0001,
L"e-gate Smart Card"
},
{
0x0974,
L"Datagraphix, a business unit of Anacomp",
0x0,
L"0"
},
{
0x0975,
L"OL E Communications, Inc.",
0x0,
L"0"
},
{
0x0976,
L"Adirondack Wire & Cable",
0x0,
L"0"
},
{
0x0977,
L"Lightsurf Technologies",
0x0,
L"0"
},
{
0x0978,
L"Beckhoff GmbH",
0x0,
L"0"
},
{
0x0979,
L"Jeilin Technology Corp., Ltd",
0x0222,
L"Keychain Display"
},
{
0x0979,
L"Jeilin Technology Corp., Ltd",
0x0224,
L"JL2005A Toy Camera"
},
{
0x0979,
L"Jeilin Technology Corp., Ltd",
0x0226,
L"JL2005A Toy Camera"
},
{
0x0979,
L"Jeilin Technology Corp., Ltd",
0x0227,
L"JL2005B/C/D Toy Camera"
},
{
0x097a,
L"Minds At Work LLC",
0x0001,
L"Digital Wallet"
},
{
0x097b,
L"Knudsen Engineering, Ltd",
0x0,
L"0"
},
{
0x097c,
L"Marunix Co., Ltd",
0x0,
L"0"
},
{
0x097d,
L"Rosun Technologies, Inc.",
0x0,
L"0"
},
{
0x097e,
L"Biopac Systems Inc.",
0x0035,
L"MP35 v1.0"
},
{
0x097f,
L"Barun Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0981,
L"Oak Technology, Ltd",
0x0,
L"0"
},
{
0x0984,
L"Apricorn",
0x0040,
L"SATA Wire (2.5)"
},
{
0x0984,
L"Apricorn",
0x0200,
L"Hard Drive Storage (TPP)"
},
{
0x0985,
L"cab Produkttechnik GmbH & Co KG",
0x0045,
L"Mach4/200 Label Printer"
},
{
0x0985,
L"cab Produkttechnik GmbH & Co KG",
0x00a3,
L"A3/200 or A3/300 Label Printer"
},
{
0x0986,
L"Matsushita Electric Works, Ltd.",
0x0,
L"0"
},
{
0x098c,
L"Vitana Corp.",
0x0,
L"0"
},
{
0x098d,
L"INDesign",
0x0,
L"0"
},
{
0x098e,
L"Integrated Intellectual Property, Inc.",
0x0,
L"0"
},
{
0x098f,
L"Kenwood TMI Corp.",
0x0,
L"0"
},
{
0x0993,
L"Gemstar eBook Group, Ltd",
0x0001,
L"REB1100 eBook Reader"
},
{
0x0993,
L"Gemstar eBook Group, Ltd",
0x0002,
L"eBook"
},
{
0x0996,
L"Integrated Telecom Express, Inc.",
0x0,
L"0"
},
{
0x099a,
L"Zippy Technology Corp.",
0x0638,
L"Sanwa Supply Inc. Small Keyboard"
},
{
0x099a,
L"Zippy Technology Corp.",
0x610c,
L"EL-610 Super Mini Electron luminescent Keyboard"
},
{
0x099a,
L"Zippy Technology Corp.",
0x713a,
L"WK-713 Multimedia Keyboard"
},
{
0x099a,
L"Zippy Technology Corp.",
0x7160,
L"Hyper Slim Keyboard"
},
{
0x099e,
L"Trimble Navigation, Ltd",
0x0,
L"0"
},
{
0x09a3,
L"PairGain Technologies",
0x0,
L"0"
},
{
0x09a4,
L"Contech Research, Inc.",
0x0,
L"0"
},
{
0x09a5,
L"VCON Telecommunications",
0x0,
L"0"
},
{
0x09a6,
L"Poinchips",
0x8001,
L"Mass Storage Device"
},
{
0x09a7,
L"Data Transmission Network Corp.",
0x0,
L"0"
},
{
0x09a8,
L"Lin Shiung Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x09a9,
L"Smart Card Technologies Co., Ltd",
0x0,
L"0"
},
{
0x09aa,
L"Intersil Corp.",
0x1000,
L"Prism GT 802.11b/g Adapter"
},
{
0x09aa,
L"Intersil Corp.",
0x3642,
L"Prism 2.x 802.11b Adapter"
},
{
0x09ab,
L"Japan Cash Machine Co., Ltd.",
0x0,
L"0"
},
{
0x09ae,
L"Tripp Lite",
0x0,
L"0"
},
{
0x09b2,
L"Franklin Electronic Publishers, Inc.",
0x0001,
L"eBookman Palm Computer"
},
{
0x09b3,
L"Altius Solutions, Inc.",
0x0,
L"0"
},
{
0x09b4,
L"MDS Telephone Systems",
0x0,
L"0"
},
{
0x09b5,
L"Celltrix Technology Co., Ltd",
0x0,
L"0"
},
{
0x09bc,
L"Grundig",
0x0002,
L"MPaxx MP150 MP3 Player"
},
{
0x09be,
L"MySmart.Com",
0x0001,
L"MySmartPad"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00c0,
L"COMpact 2104 ISDN PBX"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00db,
L"COMpact 4410/2206 ISDN"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00dc,
L"COMpact 4406 DSL (PBX)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00dd,
L"COMpact 2204 (PBX)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00de,
L"COMpact 2104 (Rev.2 PBX)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00e0,
L"COMmander Business (PBX)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00e2,
L"COMmander Basic.2 (PBX)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00f1,
L"COMfort 2000 (System telephone)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00f2,
L"COMfort 1200 (System telephone)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x00f5,
L"COMfortel 2500 (System telephone)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x8000,
L"COMpact 2104 DSL (DSL modem)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x8001,
L"COMpact 4406 DSL (DSL modem)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x8002,
L"Analog/ISDN Converter (Line converter)"
},
{
0x09bf,
L"Auerswald GmbH & Co. KG",
0x8005,
L"WG-640 (Automatic event dialer)"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0136,
L"Axon CNS, MultiClamp 700B"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0202,
L"8PSK DVB-S tuner"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0203,
L"Skywalker-1 DVB-S tuner"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0204,
L"Skywalker-CW3K DVB-S tuner"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0205,
L"Skywalker-CW3K DVB-S tuner"
},
{
0x09c0,
L"Genpix Electronics, LLC",
0x0206,
L"Skywalker-2 DVB-S tuner"
},
{
0x09c1,
L"Arris Interactive LLC",
0x1337,
L"TOUCHSTONE DEVICE"
},
{
0x09c2,
L"Nisca Corp.",
0x0,
L"0"
},
{
0x09c3,
L"HID Global",
0x0007,
L"Reader V2"
},
{
0x09c3,
L"HID Global",
0x0008,
L"ZFG-9800-AC SmartCard Reader"
},
{
0x09c3,
L"HID Global",
0x0014,
L"ActivIdentity ActivKey SIM USB Token"
},
{
0x09c3,
L"HID Global",
0x0028,
L"Crescendo Key"
},
{
0x09c3,
L"HID Global",
0x0029,
L"Crescendo Key"
},
{
0x09c3,
L"HID Global",
0x002a,
L"Crescendo Key"
},
{
0x09c3,
L"HID Global",
0x002b,
L"Crescendo Key"
},
{
0x09c3,
L"HID Global",
0x002c,
L"Crescendo Key"
},
{
0x09c3,
L"HID Global",
0x002e,
L"Crescendo Key"
},
{
0x09c4,
L"ACTiSYS Corp.",
0x0011,
L"ACT-IR2000U IrDA Dongle"
},
{
0x09c5,
L"Memory Corp.",
0x0,
L"0"
},
{
0x09ca,
L"BMC Messsysteme GmbH",
0x5544,
L"PIO"
},
{
0x09cb,
L"FLIR Systems",
0x1001,
L"Network Adapter"
},
{
0x09cb,
L"FLIR Systems",
0x1002,
L"Ex-Series RNDIS interface"
},
{
0x09cb,
L"FLIR Systems",
0x1004,
L"Ex-Series UVC interface"
},
{
0x09cb,
L"FLIR Systems",
0x1005,
L"Ex-Series RNDIS and UVC interface"
},
{
0x09cb,
L"FLIR Systems",
0x1006,
L"Ex-Series RNDIS and MSD interface"
},
{
0x09cb,
L"FLIR Systems",
0x1007,
L"Ex-Series UVC and MSD interface"
},
{
0x09cb,
L"FLIR Systems",
0x1008,
L"Serial Port"
},
{
0x09cb,
L"FLIR Systems",
0x1996,
L"FLIR ONE Camera"
},
{
0x09cc,
L"Workbit Corp.",
0x0404,
L"BAFO USB-ATA/ATAPI Bridge Controller"
},
{
0x09cd,
L"Psion Dacom Home Networks, Ltd",
0x2001,
L"Psion WaveFinder DAB radio receiver"
},
{
0x09ce,
L"City Electronics, Ltd",
0x0,
L"0"
},
{
0x09cf,
L"Electronics Testing Center, Taiwan",
0x0,
L"0"
},
{
0x09d1,
L"NeoMagic, Inc.",
0x0,
L"0"
},
{
0x09d2,
L"Vreelin Engineering, Inc.",
0x0,
L"0"
},
{
0x09d3,
L"Com One",
0x0001,
L"ISDN TA / Light Rider 128K"
},
{
0x09d3,
L"Com One",
0x000b,
L"Bluetooth Adapter class 1 [BlueLight]"
},
{
0x09d7,
L"NovAtel Inc.",
0x0100,
L"NovAtel FlexPack GPS receiver"
},
{
0x09d8,
L"ELATEC",
0x0406,
L"TWN4 MIFARE NFC"
},
{
0x09d9,
L"KRF Tech, Ltd",
0x0,
L"0"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x0006,
L"Optical Mouse WOP-35 / Trust 450L Optical Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x000a,
L"Optical Mouse Opto 510D / OP-620D"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x000e,
L"X-F710F Optical Mouse 3xFire Gaming Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x0018,
L"Trust Human Interface Device"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x001a,
L"Wireless Mouse & RXM-15 Receiver"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x002a,
L"Wireless Optical Mouse NB-30"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x022b,
L"Wireless Mouse (Battery Free)"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x024f,
L"RF Receiver and G6-20D Wireless Optical Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x0260,
L"KV-300H Isolation Keyboard"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x032b,
L"Wireless Mouse (Battery Free)"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x1068,
L"Bloody A90 Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x8090,
L"X-718BK Oscar Optical Gaming Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x9033,
L"X-718BK Optical Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x9066,
L"F3 V-Track Gaming Mouse"
},
{
0x09da,
L"A4Tech Co., Ltd.",
0x9090,
L"XL-730K / XL-750BK / XL-755BK Mice"
},
{
0x09db,
L"Measurement Computing Corp.",
0x0075,
L"MiniLab 1008"
},
{
0x09db,
L"Measurement Computing Corp.",
0x0076,
L"PMD-1024"
},
{
0x09db,
L"Measurement Computing Corp.",
0x007a,
L"PMD-1208LS"
},
{
0x09db,
L"Measurement Computing Corp.",
0x0081,
L"USB-1616FS"
},
{
0x09db,
L"Measurement Computing Corp.",
0x0082,
L"USB-1208FS"
},
{
0x09db,
L"Measurement Computing Corp.",
0x0088,
L"USB-1616FS internal hub"
},
{
0x09dc,
L"Aimex Corp.",
0x0,
L"0"
},
{
0x09dd,
L"Fellowes, Inc.",
0x0,
L"0"
},
{
0x09df,
L"Addonics Technologies Corp.",
0x0,
L"0"
},
{
0x09e1,
L"Intellon Corp.",
0x5121,
L"MicroLink dLAN"
},
{
0x09e5,
L"Jo-Dan International, Inc.",
0x0,
L"0"
},
{
0x09e6,
L"Silutia, Inc.",
0x0,
L"0"
},
{
0x09e7,
L"Real 3D, Inc.",
0x0,
L"0"
},
{
0x09e8,
L"AKAI  Professional M.I. Corp.",
0x0062,
L"MPD16 MIDI Pad Controller Unit"
},
{
0x09e8,
L"AKAI  Professional M.I. Corp.",
0x006d,
L"EWI electronic wind instrument"
},
{
0x09e8,
L"AKAI  Professional M.I. Corp.",
0x0071,
L"MPK25 MIDI Keyboard"
},
{
0x09e8,
L"AKAI  Professional M.I. Corp.",
0x0076,
L"LPK25 MIDI Keyboard"
},
{
0x09e9,
L"Chen-Source, Inc.",
0x0,
L"0"
},
{
0x09eb,
L"IM Networks, Inc.",
0x4331,
L"iRhythm Tuner Remote"
},
{
0x09ef,
L"Xitel",
0x0101,
L"MD-Port DG2 MiniDisc Interface"
},
{
0x09f3,
L"GoFlight, Inc.",
0x0018,
L"GF-46 Multi-Mode Display Module"
},
{
0x09f3,
L"GoFlight, Inc.",
0x0028,
L"RP-48 Combination Pushbutton-Rotary Module"
},
{
0x09f3,
L"GoFlight, Inc.",
0x0048,
L"LGTII - Landing Gear and Trim Control Module"
},
{
0x09f3,
L"GoFlight, Inc.",
0x0064,
L"MCPPro - Airliner Mode Control Panel (Autopilot)"
},
{
0x09f3,
L"GoFlight, Inc.",
0x0300,
L"EFIS - Electronic Flight Information System"
},
{
0x09f5,
L"AresCom",
0x0168,
L"Network Adapter"
},
{
0x09f5,
L"AresCom",
0x0188,
L"LAN Adapter"
},
{
0x09f5,
L"AresCom",
0x0850,
L"Adapter"
},
{
0x09f6,
L"RocketChips, Inc.",
0x0,
L"0"
},
{
0x09f7,
L"Edu-Science (H.K.), Ltd",
0x0,
L"0"
},
{
0x09f8,
L"SoftConnex Technologies, Inc.",
0x0,
L"0"
},
{
0x09f9,
L"Bay Associates",
0x0,
L"0"
},
{
0x09fa,
L"Mtek Vision",
0x0,
L"0"
},
{
0x09fb,
L"Altera",
0x6001,
L"Blaster"
},
{
0x09ff,
L"Gain Technology Corp.",
0x0,
L"0"
},
{
0x0a00,
L"Liquid Audio",
0x0,
L"0"
},
{
0x0a01,
L"ViA, Inc.",
0x0,
L"0"
},
{
0x0a05,
L"Unknown Manufacturer",
0x0001,
L"Hub"
},
{
0x0a05,
L"Unknown Manufacturer",
0x7211,
L"hub"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x0064,
L"ADU100 Data Acquisition Interface"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x0078,
L"ADU120 Data Acquisition Interface"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x0082,
L"ADU130 Data Acquisition Interface"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x00c8,
L"ADU200 Relay I/O Interface"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x00d0,
L"ADU208 Relay I/O Interface"
},
{
0x0a07,
L"Ontrak Control Systems Inc.",
0x00da,
L"ADU218 Solid-State Relay I/O Interface"
},
{
0x0a0b,
L"Cybex Computer Products Co.",
0x0,
L"0"
},
{
0x0a0d,
L"Servergy, Inc",
0x2514,
L"CTS-1000 Internal Hub"
},
{
0x0a11,
L"Xentec, Inc.",
0x0,
L"0"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0001,
L"Bluetooth Dongle (HCI mode)"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0002,
L"Frontline Test Equipment Bluetooth Device"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0003,
L"Nanosira"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0004,
L"Nanosira WHQL Reference Radio"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0005,
L"Nanosira-Multimedia"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0006,
L"Nanosira-Multimedia WHQL Reference Radio"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0007,
L"Nanosira3-ROM"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0008,
L"Nanosira3-ROM"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0009,
L"Nanosira4-EDR WHQL Reference Radio"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x000a,
L"Nanosira4-EDR-ROM"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x000b,
L"Nanosira5-ROM"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0042,
L"SPI Converter"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0043,
L"Bluetooth Device"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0100,
L"Casira with BlueCore2-External Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0101,
L"Casira with BlueCore2-Flash Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0102,
L"Casira with BlueCore3-Multimedia Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0103,
L"Casira with BlueCore3-Flash Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0104,
L"Casira with BlueCore4-External Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x0105,
L"Casira with BlueCore4-Multimedia Module"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x1000,
L"Bluetooth Dongle (HID proxy mode)"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x1010,
L"Bluetooth Device"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x1011,
L"Bluetooth Device"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0x1012,
L"Bluetooth Device"
},
{
0x0a12,
L"Cambridge Silicon Radio, Ltd",
0xffff,
L"USB Bluetooth Device in DFU State"
},
{
0x0a13,
L"Telebyte, Inc.",
0x0,
L"0"
},
{
0x0a14,
L"Spacelabs Medical, Inc.",
0x0,
L"0"
},
{
0x0a15,
L"Scalar Corp.",
0x0,
L"0"
},
{
0x0a16,
L"Trek Technology (S) PTE, Ltd",
0x1111,
L"ThumbDrive"
},
{
0x0a16,
L"Trek Technology (S) PTE, Ltd",
0x8888,
L"IBM USB Memory Key"
},
{
0x0a16,
L"Trek Technology (S) PTE, Ltd",
0x9988,
L"Trek2000 TD-G2"
},
{
0x0a17,
L"Pentax Corp.",
0x0004,
L"Optio 330"
},
{
0x0a17,
L"Pentax Corp.",
0x0006,
L"Optio S / S4"
},
{
0x0a17,
L"Pentax Corp.",
0x0007,
L"Optio 550"
},
{
0x0a17,
L"Pentax Corp.",
0x0009,
L"Optio 33WR"
},
{
0x0a17,
L"Pentax Corp.",
0x000a,
L"Optio 555"
},
{
0x0a17,
L"Pentax Corp.",
0x000c,
L"Optio 43WR (mass storage mode)"
},
{
0x0a17,
L"Pentax Corp.",
0x000d,
L"Optio 43WR"
},
{
0x0a17,
L"Pentax Corp.",
0x0015,
L"Optio S40/S5i"
},
{
0x0a17,
L"Pentax Corp.",
0x003b,
L"Optio 50 (mass storage mode)"
},
{
0x0a17,
L"Pentax Corp.",
0x003d,
L"Optio S55"
},
{
0x0a17,
L"Pentax Corp.",
0x0041,
L"Optio S5z"
},
{
0x0a17,
L"Pentax Corp.",
0x0043,
L"*ist DL"
},
{
0x0a17,
L"Pentax Corp.",
0x0047,
L"Optio S60"
},
{
0x0a17,
L"Pentax Corp.",
0x0052,
L"Optio 60 Digital Camera"
},
{
0x0a17,
L"Pentax Corp.",
0x006e,
L"K10D"
},
{
0x0a17,
L"Pentax Corp.",
0x0070,
L"K100D"
},
{
0x0a17,
L"Pentax Corp.",
0x0093,
L"K200D"
},
{
0x0a17,
L"Pentax Corp.",
0x00a7,
L"Optio E50"
},
{
0x0a17,
L"Pentax Corp.",
0x1001,
L"EI2000 Camera powered by Digita!"
},
{
0x0a18,
L"Heidelberger Druckmaschinen AG",
0x0,
L"0"
},
{
0x0a19,
L"Hua Geng Technologies, Inc.",
0x0,
L"0"
},
{
0x0a21,
L"Medtronic Physio Control Corp.",
0x8001,
L"MMT-7305WW [Medtronic Minimed CareLink]"
},
{
0x0a22,
L"Century Semiconductor USA, Inc.",
0x0,
L"0"
},
{
0x0a27,
L"Datacard Group",
0x0102,
L"SP35"
},
{
0x0a2c,
L"AK-Modul-Bus Computer GmbH",
0x0008,
L"GPIO Ports"
},
{
0x0a34,
L"TG3 Electronics, Inc.",
0x0101,
L"TG82tp"
},
{
0x0a34,
L"TG3 Electronics, Inc.",
0x0110,
L"Deck 82-key backlit keyboard"
},
{
0x0a35,
L"Radikal Technologies",
0x002a,
L"SAC - Software Assigned Controller"
},
{
0x0a35,
L"Radikal Technologies",
0x008a,
L"SAC Hub"
},
{
0x0a39,
L"Gilat Satellite Networks, Ltd",
0x0,
L"0"
},
{
0x0a3a,
L"PentaMedia Co., Ltd",
0x0163,
L"KN-W510U 1.0 Wireless LAN Adapter"
},
{
0x0a3c,
L"NTT DoCoMo, Inc.",
0x0,
L"0"
},
{
0x0a3d,
L"Varo Vision",
0x0,
L"0"
},
{
0x0a3f,
L"Swissonic AG",
0x0,
L"0"
},
{
0x0a43,
L"Boca Systems, Inc.",
0x0,
L"0"
},
{
0x0a46,
L"Davicom Semiconductor, Inc.",
0x0268,
L"ST268"
},
{
0x0a46,
L"Davicom Semiconductor, Inc.",
0x6688,
L"ZT6688 Fast Ethernet Adapter"
},
{
0x0a46,
L"Davicom Semiconductor, Inc.",
0x8515,
L"ADMtek ADM8515 NIC"
},
{
0x0a46,
L"Davicom Semiconductor, Inc.",
0x9000,
L"DM9000E Fast Ethernet Adapter"
},
{
0x0a46,
L"Davicom Semiconductor, Inc.",
0x9601,
L"DM9601 Fast Ethernet Adapter"
},
{
0x0a47,
L"Hirose Electric",
0x0,
L"0"
},
{
0x0a48,
L"I/O Interconnect",
0x3233,
L"Multimedia Card Reader"
},
{
0x0a48,
L"I/O Interconnect",
0x3239,
L"Multimedia Card Reader"
},
{
0x0a48,
L"I/O Interconnect",
0x3258,
L"Dane Elec zMate SD Reader"
},
{
0x0a48,
L"I/O Interconnect",
0x3259,
L"Dane Elec zMate CF Reader"
},
{
0x0a48,
L"I/O Interconnect",
0x5000,
L"MediaGear xD-SM"
},
{
0x0a48,
L"I/O Interconnect",
0x500a,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x500f,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5010,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5011,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5014,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5020,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5021,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5022,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5023,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5024,
L"Mass Storage Device"
},
{
0x0a48,
L"I/O Interconnect",
0x5025,
L"Mass Storage Device"
},
{
0x0a4a,
L"Ploytec GmbH",
0x0,
L"0"
},
{
0x0a4b,
L"Fujitsu Media Devices, Ltd",
0x0,
L"0"
},
{
0x0a4c,
L"Computex Co., Ltd",
0x15d9,
L"OPTICAL MOUSE"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0064,
L"MK-225 Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0065,
L"MK-225C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0066,
L"MK-225C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0067,
L"MK-425C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0078,
L"MK-37 Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0079,
L"MK-37C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x007a,
L"MK-37C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x008c,
L"TerraTec MIDI MASTER"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x008d,
L"MK-249C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x008e,
L"MK-249C MIDI Keyboard"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x008f,
L"MK-449C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0090,
L"Keystation 49e Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x0091,
L"Keystation 61es Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00a0,
L"MK-361 Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00a1,
L"MK-361C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00a2,
L"MK-361C Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00a3,
L"MK-461C MIDI Keyboard"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00b5,
L"Keystation Pro 88 Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00d2,
L"E-Keys Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00f0,
L"UC-16 Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00f1,
L"X-Session Driver"
},
{
0x0a4d,
L"Evolution Electronics, Ltd",
0x00f5,
L"UC-33e MIDI Controller"
},
{
0x0a4e,
L"Steinberg Soft-und Hardware GmbH",
0x0,
L"0"
},
{
0x0a4f,
L"Litton Systems, Inc.",
0x0,
L"0"
},
{
0x0a50,
L"Mimaki Engineering Co., Ltd",
0x0,
L"0"
},
{
0x0a51,
L"Sony Electronics, Inc.",
0x0,
L"0"
},
{
0x0a52,
L"Jebsee Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x1000,
L"Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2000,
L"Q-Scan A6 Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2001,
L"Q-Scan A6 Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2013,
L"Media Drive A6 Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2014,
L"Media Drive A6 Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2015,
L"BizCardReader 600C"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x2016,
L"BizCardReader 600C"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x202a,
L"Scanshell-CSSN"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x3000,
L"Q-Scan A8 Scanner"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x3002,
L"Q-Scan A8 Reader"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x3015,
L"BizCardReader 300G"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x302a,
L"LM9832 - PA570 Mini Business Card Scanner [Targus]"
},
{
0x0a53,
L"Portable Peripheral Co., Ltd",
0x5001,
L"BizCardReader 900C"
},
{
0x0a5a,
L"Electronics For Imaging, Inc.",
0x0,
L"0"
},
{
0x0a5b,
L"EAsics NV",
0x0,
L"0"
},
{
0x0a5c,
L"Broadcom Corp.",
0x0201,
L"iLine10(tm) Network Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2000,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2001,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2009,
L"BCM2035 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x200a,
L"BCM2035 Bluetooth dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x200f,
L"Bluetooth Controller"
},
{
0x0a5c,
L"Broadcom Corp.",
0x201d,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x201e,
L"IBM Integrated Bluetooth IV"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2020,
L"Bluetooth dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2021,
L"BCM2035B3 Bluetooth Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2033,
L"BCM2033 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2035,
L"BCM2035 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2038,
L"Blutonium Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2039,
L"BCM2045 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2045,
L"Bluetooth Controller"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2046,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2047,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x205e,
L"Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2100,
L"Bluetooth 2.0+eDR dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2101,
L"BCM2045 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2102,
L"ANYCOM Blue USB-200/250"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2110,
L"BCM2045B (BDC-2) [Bluetooth Controller]"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2111,
L"ANYCOM Blue USB-UHE 200/250"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2120,
L"2045 Bluetooth 2.0 USB-UHE Device with trace filter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2121,
L"BCM2210 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2122,
L"Bluetooth 2.0+EDR dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2123,
L"Bluetooth dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2130,
L"2045 Bluetooth 2.0 USB-UHE Device with trace filter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2131,
L"2045 Bluetooth 2.0 Device with trace filter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2145,
L"BCM2045B (BDC-2.1) [Bluetooth Controller]"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2148,
L"BCM92046DG-CL1ROM Bluetooth 2.1 Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2150,
L"BCM2046 Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2151,
L"Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2154,
L"BCM92046DG-CL1ROM Bluetooth 2.1 UHE Dongle"
},
{
0x0a5c,
L"Broadcom Corp.",
0x216a,
L"BCM43142A0 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x216c,
L"BCM43142A0 Bluetooth Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x216d,
L"BCM43142A0 Bluetooth 4.0"
},
{
0x0a5c,
L"Broadcom Corp.",
0x216f,
L"BCM20702A0 Bluetooth"
},
{
0x0a5c,
L"Broadcom Corp.",
0x217d,
L"HP Bluethunder"
},
{
0x0a5c,
L"Broadcom Corp.",
0x217f,
L"BCM2045B (BDC-2.1)"
},
{
0x0a5c,
L"Broadcom Corp.",
0x2198,
L"Bluetooth 3.0 Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x219b,
L"Bluetooth 2.1 Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21b1,
L"HP Bluetooth Module"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21b4,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21b9,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21ba,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21bb,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21bc,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21bd,
L"BCM2070 Bluetooth 2.1 + EDR"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21d7,
L"BCM43142 Bluetooth 4.0"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21e1,
L"HP Portable SoftSailing"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21e3,
L"HP Portable Valentine"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21e6,
L"BCM20702 Bluetooth 4.0 [ThinkPad]"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21e8,
L"BCM20702A0 Bluetooth 4.0"
},
{
0x0a5c,
L"Broadcom Corp.",
0x21f1,
L"HP Portable Bumble Bee"
},
{
0x0a5c,
L"Broadcom Corp.",
0x22be,
L"BCM2070 Bluetooth 3.0 + HS"
},
{
0x0a5c,
L"Broadcom Corp.",
0x4500,
L"BCM2046B1 USB 2.0 Hub (part of BCM2046 Bluetooth)"
},
{
0x0a5c,
L"Broadcom Corp.",
0x4502,
L"Keyboard (Boot Interface Subclass)"
},
{
0x0a5c,
L"Broadcom Corp.",
0x4503,
L"Mouse (Boot Interface Subclass)"
},
{
0x0a5c,
L"Broadcom Corp.",
0x5800,
L"BCM5880 Secure Applications Processor"
},
{
0x0a5c,
L"Broadcom Corp.",
0x5801,
L"BCM5880 Secure Applications Processor with fingerprint swipe sensor"
},
{
0x0a5c,
L"Broadcom Corp.",
0x5802,
L"BCM5880 Secure Applications Processor with fingerprint touch sensor"
},
{
0x0a5c,
L"Broadcom Corp.",
0x5803,
L"BCM5880 Secure Applications Processor with secure keyboard"
},
{
0x0a5c,
L"Broadcom Corp.",
0x5804,
L"BCM5880 Secure Applications Processor with fingerprint swipe sensor"
},
{
0x0a5c,
L"Broadcom Corp.",
0x6300,
L"Pirelli Remote NDIS Device"
},
{
0x0a5c,
L"Broadcom Corp.",
0x6410,
L"BCM20703A1 Bluetooth 4.1 + LE"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd11,
L"BCM4320 802.11bg Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd12,
L"BCM4326U 802.11bg Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd13,
L"BCM4323 802.11abgn Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd16,
L"BCM4319 802.11bgn Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd17,
L"BCM43236 802.11abgn Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd1d,
L"BCM43526 802.11a/b/g/n/ac (2x2) Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd1e,
L"BCM43143 802.11bgn (1x1) Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xbd1f,
L"BCM43242 802.11abgn Wireless Adapter"
},
{
0x0a5c,
L"Broadcom Corp.",
0xd11b,
L"Eminent EM4045 [Broadcom 4320 USB]"
},
{
0x0a5d,
L"Diatrend Corp.",
0x0,
L"0"
},
{
0x0a5f,
L"Zebra",
0x0009,
L"LP2844 Printer"
},
{
0x0a5f,
L"Zebra",
0x0081,
L"GK420t Label Printer"
},
{
0x0a5f,
L"Zebra",
0x008b,
L"HC100 wristbands Printer"
},
{
0x0a5f,
L"Zebra",
0x008c,
L"ZP 450 Printer"
},
{
0x0a5f,
L"Zebra",
0x00d1,
L"Zebra GC420d Label Printer"
},
{
0x0a5f,
L"Zebra",
0x930a,
L"Printer"
},
{
0x0a62,
L"MPMan",
0x0010,
L"MPMan MP-F40 MP3 Player"
},
{
0x0a66,
L"ClearCube Technology",
0x0,
L"0"
},
{
0x0a67,
L"Medeli Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0a68,
L"Comaide Corp.",
0x0,
L"0"
},
{
0x0a69,
L"Chroma ate, Inc.",
0x0,
L"0"
},
{
0x0a6b,
L"Green House Co., Ltd",
0x0001,
L"Compact Flash R/W with MP3 player"
},
{
0x0a6b,
L"Green House Co., Ltd",
0x000f,
L"FlashDisk"
},
{
0x0a6c,
L"Integrated Circuit Systems, Inc.",
0x0,
L"0"
},
{
0x0a6d,
L"UPS Manufacturing",
0x0,
L"0"
},
{
0x0a6e,
L"Benwin",
0x0,
L"0"
},
{
0x0a6f,
L"Core Technology, Inc.",
0x0400,
L"Xanboo"
},
{
0x0a70,
L"International Game Technology",
0x0,
L"0"
},
{
0x0a71,
L"VIPColor Technologies USA, Inc.",
0x0001,
L"VP485 Printer"
},
{
0x0a72,
L"Sanwa Denshi",
0x0,
L"0"
},
{
0x0a73,
L"Mackie Designs",
0x0002,
L"XD-2 [Spike]"
},
{
0x0a7d,
L"NSTL, Inc.",
0x0,
L"0"
},
{
0x0a7e,
L"Octagon Systems Corp.",
0x0,
L"0"
},
{
0x0a80,
L"Rexon Technology Corp., Ltd",
0x0,
L"0"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0x0101,
L"Keyboard"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0x0103,
L"Keyboard"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0x0203,
L"Mouse"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0x0205,
L"PS/2 Keyboard+Mouse Adapter"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0x0701,
L"USB Missile Launcher"
},
{
0x0a81,
L"Chesen Electronics Corp.",
0xff01,
L"Wireless Missile Launcher"
},
{
0x0a82,
L"Syscan",
0x4600,
L"TravelScan 460/464"
},
{
0x0a83,
L"NextComm, Inc.",
0x0,
L"0"
},
{
0x0a84,
L"Maui Innovative Peripherals",
0x0,
L"0"
},
{
0x0a85,
L"Idexx Labs",
0x0,
L"0"
},
{
0x0a86,
L"NITGen Co., Ltd",
0x0,
L"0"
},
{
0x0a89,
L"Aktiv",
0x0001,
L"Guardant Stealth/Net"
},
{
0x0a89,
L"Aktiv",
0x0002,
L"Guardant ID"
},
{
0x0a89,
L"Aktiv",
0x0003,
L"Guardant Stealth 2"
},
{
0x0a89,
L"Aktiv",
0x0004,
L"Rutoken"
},
{
0x0a89,
L"Aktiv",
0x0005,
L"Guardant Fidus"
},
{
0x0a89,
L"Aktiv",
0x0006,
L"Guardant Stealth 3"
},
{
0x0a89,
L"Aktiv",
0x0007,
L"Guardant Stealth 2"
},
{
0x0a89,
L"Aktiv",
0x0008,
L"Guardant Stealth 3 Sign/Time"
},
{
0x0a89,
L"Aktiv",
0x0009,
L"Guardant Code"
},
{
0x0a89,
L"Aktiv",
0x000a,
L"Guardant Sign Pro"
},
{
0x0a89,
L"Aktiv",
0x000b,
L"Guardant Sign Pro HID"
},
{
0x0a89,
L"Aktiv",
0x000c,
L"Guardant Stealth 3 Sign/Time"
},
{
0x0a89,
L"Aktiv",
0x000d,
L"Guardant Code HID"
},
{
0x0a89,
L"Aktiv",
0x000f,
L"Guardant System Firmware Update"
},
{
0x0a89,
L"Aktiv",
0x0020,
L"Rutoken S"
},
{
0x0a89,
L"Aktiv",
0x0025,
L"Rutoken lite"
},
{
0x0a89,
L"Aktiv",
0x0026,
L"Rutoken lite HID"
},
{
0x0a89,
L"Aktiv",
0x002a,
L"Rutoken Mass Storage"
},
{
0x0a89,
L"Aktiv",
0x002b,
L"Guardant Mass Storage"
},
{
0x0a89,
L"Aktiv",
0x0030,
L"Rutoken ECP"
},
{
0x0a89,
L"Aktiv",
0x0040,
L"Rutoken ECP HID"
},
{
0x0a89,
L"Aktiv",
0x0060,
L"Rutoken Magistra"
},
{
0x0a89,
L"Aktiv",
0x0061,
L"Rutoken Magistra"
},
{
0x0a89,
L"Aktiv",
0x0069,
L"Reader"
},
{
0x0a89,
L"Aktiv",
0x0080,
L"Rutoken PinPad Ex"
},
{
0x0a89,
L"Aktiv",
0x0081,
L"Rutoken PinPad In"
},
{
0x0a89,
L"Aktiv",
0x0082,
L"Rutoken PinPad 2"
},
{
0x0a8d,
L"Picturetel",
0x0,
L"0"
},
{
0x0a8e,
L"Japan Aviation Electronics Industry, Ltd",
0x2011,
L"Filter Driver For JAE XMC R/W"
},
{
0x0a90,
L"Candy Technology Co., Ltd",
0x0,
L"0"
},
{
0x0a91,
L"Globlink Technology, Inc.",
0x3801,
L"Targus PAKP003 Mouse"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0011,
L"SYS WaveTerminal U2A"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0021,
L"GIGAPort"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0031,
L"GIGAPortAG"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0053,
L"AudioTrak Optoplay"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0061,
L"Waveterminal U24"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0071,
L"MAYA EX7"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x0091,
L"Maya 44"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x00b1,
L"MAYA EX5"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x1000,
L"MIDI Mate"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x1010,
L"RoMI/O"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x1020,
L"M4U"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x1030,
L"M8U"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x1090,
L"KeyControl49"
},
{
0x0a92,
L"EGO SYStems, Inc.",
0x10a0,
L"KeyControl25"
},
{
0x0a93,
L"C Technologies AB",
0x0002,
L"C-Pen 10"
},
{
0x0a93,
L"C Technologies AB",
0x0005,
L"MyPen Light"
},
{
0x0a93,
L"C Technologies AB",
0x000d,
L"Input Pen"
},
{
0x0a93,
L"C Technologies AB",
0x0010,
L"C-Pen 20"
},
{
0x0a93,
L"C Technologies AB",
0x0a93,
L"PayPen"
},
{
0x0a94,
L"Intersense",
0x0,
L"0"
},
{
0x0aa3,
L"Lava Computer Mfg., Inc.",
0x0,
L"0"
},
{
0x0aa4,
L"Develco Elektronik",
0x0,
L"0"
},
{
0x0aa5,
L"First International Digital",
0x0002,
L"irock! 500 Series"
},
{
0x0aa5,
L"First International Digital",
0x0801,
L"MP3 Player"
},
{
0x0aa6,
L"Perception Digital, Ltd",
0x0101,
L"Hercules Jukebox"
},
{
0x0aa6,
L"Perception Digital, Ltd",
0x1501,
L"Store 'n' Go HD Drive"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0100,
L"POS Keyboard, TA58P-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0101,
L"POS Keyboard, TA85P-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0102,
L"POS Keyboard, TA59-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0103,
L"POS Keyboard, TA60-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0104,
L"SNIkey Keyboard, SNIKey-KB-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0200,
L"Operator Display, BA63-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0201,
L"Operator Display, BA66-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0202,
L"Operator Display & Scanner, XiCheck-BA63"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0203,
L"Operator Display & Scanner, XiCheck-BA66"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0204,
L"Graphics Operator Display, BA63GV"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0300,
L"POS Printer (printer class mode), TH210"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0301,
L"POS Printer (native mode), TH210"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0302,
L"POS Printer (printer class mode), TH220"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0303,
L"POS Printer (native mode), TH220"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0304,
L"POS Printer, TH230"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0305,
L"Lottery Printer, XiPrintPlus"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0306,
L"POS Printer (printer class mode), TH320"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0307,
L"POS Printer (native mode), TH320"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0308,
L"POS Printer (printer class mode), TH420"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0309,
L"POS Printer (native mode), TH420"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x030a,
L"POS Printer, TH200B"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0400,
L"Lottery Scanner, Xiscan S"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0401,
L"Lottery Scanner, Xiscan 3"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0402,
L"Programmable Magnetic Swipe Card Reader, MSRP-USB"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0500,
L"IDE Adapter"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0501,
L"Hub Printer Interface"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x0502,
L"Hub SNIKey Keyboard"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x4304,
L"Banking Printer TP07"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x4305,
L"Banking Printer TP07c"
},
{
0x0aa7,
L"Wincor Nixdorf International GmbH",
0x4500,
L"WN Central Special Electronics"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0x0060,
L"TG 11Mbps WLAN Mini Adapter"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0x1001,
L"DreamComboM4100"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0x3002,
L"InkJet Color Printer"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0x8001,
L"TG_iMON"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0x8002,
L"TG_KLOSS"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0xa001,
L"TG_X2"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0xa002,
L"TGVFD_KLOSS"
},
{
0x0aa8,
L"TriGem Computer, Inc.",
0xffda,
L"iMON_VFD"
},
{
0x0aa9,
L"Baromtec Co.",
0xf01b,
L"Medion MD 6242 MP3 Player"
},
{
0x0aaa,
L"Japan CBM Corp.",
0x0,
L"0"
},
{
0x0aab,
L"Vision Shape Europe SA",
0x0,
L"0"
},
{
0x0aac,
L"iCompression, Inc.",
0x0,
L"0"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0003,
L"NRP-Z21"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x000c,
L"NRP-Z11"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0013,
L"NRP-Z22"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0014,
L"NRP-Z23"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0015,
L"NRP-Z24"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0016,
L"NRP-Z51"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0017,
L"NRP-Z52"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0018,
L"NRP-Z55"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0019,
L"NRP-Z56"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0021,
L"NRP-Z91"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0023,
L"NRP-Z81"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x002c,
L"NRP-Z31"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x002d,
L"NRP-Z37"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x002f,
L"NRP-Z27"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0051,
L"NRP-Z28"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0052,
L"NRP-Z98"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0062,
L"NRP-Z92"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0070,
L"NRP-Z57"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0083,
L"NRP-Z85"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0095,
L"NRP-Z86"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0117,
L"HMF / HMP / HMS-X / HMO series Oscilloscopes"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0118,
L"HMF / HMP / HMS-X / HMO series Oscilloscopes"
},
{
0x0aad,
L"Rohde & Schwarz GmbH & Co. KG",
0x0119,
L"HMF / HMP / HMS-X / HMO series Oscilloscopes"
},
{
0x0aae,
L"NEC infrontia Corp. (Nitsuko)",
0x0,
L"0"
},
{
0x0aaf,
L"Digitalway Co., Ltd",
0x0,
L"0"
},
{
0x0ab0,
L"Arrow Strong Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0ab1,
L"FEIG ELECTRONIC GmbH",
0x0002,
L"OBID RFID-Reader"
},
{
0x0ab1,
L"FEIG ELECTRONIC GmbH",
0x0004,
L"OBID classic-pro"
},
{
0x0aba,
L"Ellisys",
0x8001,
L"Tracker 110 Protocol Analyzer"
},
{
0x0aba,
L"Ellisys",
0x8002,
L"Explorer 200 Protocol Analyzer"
},
{
0x0abe,
L"Stereo-Link",
0x0101,
L"SL1200 DAC"
},
{
0x0abf,
L"Diolan",
0x3370,
L"I2C/SPI Adapter - U2C-12"
},
{
0x0ac3,
L"Sanyo Semiconductor Company Micro",
0x0,
L"0"
},
{
0x0ac4,
L"Leco Corp.",
0x0,
L"0"
},
{
0x0ac5,
L"I & C Corp.",
0x0,
L"0"
},
{
0x0ac6,
L"Singing Electrons, Inc.",
0x0,
L"0"
},
{
0x0ac7,
L"Panwest Corp.",
0x0,
L"0"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0301,
L"Web Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0302,
L"ZC0302 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0321,
L"Vimicro generic vc0321 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0323,
L"Luxya WC-1200 USB 2.0 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0328,
L"A4Tech PK-130MG"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x0336,
L"Elecom UCAM-DLQ30"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x301b,
L"ZC0301 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x303b,
L"ZC0303 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x305b,
L"ZC0305 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x307b,
L"USB 1.1 Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x332d,
L"Vega USB 2.0 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x3343,
L"Sirius USB 2.0 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x3370,
L"Traveler TV 6500 SF Dia-scanner"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0x3420,
L"Venus USB2.0 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc001,
L"Sony embedded vimicro Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc002,
L"Visual Communication Camera VGP-VCC1"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc302,
L"Vega USB 2.0 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc303,
L"Saturn USB 2.0 Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc326,
L"Namuga 1.3M Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc33f,
L"Webcam"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc429,
L"Lenovo ThinkCentre Web Camera"
},
{
0x0ac8,
L"Z-Star Microelectronics Corp.",
0xc42d,
L"Lenovo IdeaCentre Web Camera"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0000,
L"Backpack CD-ReWriter"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0001,
L"BACKPACK  2 Cable"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0010,
L"BACKPACK"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0011,
L"Backpack 40GB Hard Drive"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0110,
L"BACKPACK"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x0111,
L"BackPack"
},
{
0x0ac9,
L"Micro Solutions, Inc.",
0x1234,
L"BACKPACK"
},
{
0x0aca,
L"OPEN Networks Ltd",
0x1060,
L"OPEN NT1 Plus II"
},
{
0x0acc,
L"Koga Electronics Co.",
0x0,
L"0"
},
{
0x0acd,
L"ID Tech",
0x0300,
L"IDT1221U RS-232 Adapter"
},
{
0x0acd,
L"ID Tech",
0x0401,
L"Spectrum III Hybrid Smartcard Reader"
},
{
0x0acd,
L"ID Tech",
0x0630,
L"Spectrum III Mag-Only Insert Reader (SPT3-355 Series) USB-CDC"
},
{
0x0acd,
L"ID Tech",
0x0810,
L"SecurePIN (IDPA-506100Y) PIN Pad"
},
{
0x0acd,
L"ID Tech",
0x2030,
L"ValueMag Magnetic Stripe Reader"
},
{
0x0acd,
L"ID Tech",
0x3710,
L"ViVOpay Kiosk III"
},
{
0x0ace,
L"ZyDAS",
0x1201,
L"ZD1201 802.11b"
},
{
0x0ace,
L"ZyDAS",
0x1211,
L"ZD1211 802.11g"
},
{
0x0ace,
L"ZyDAS",
0x1215,
L"ZD1211B 802.11g"
},
{
0x0ace,
L"ZyDAS",
0x1221,
L"ZD1221 802.11n"
},
{
0x0ace,
L"ZyDAS",
0x1602,
L"ZyXEL Omni FaxModem 56K"
},
{
0x0ace,
L"ZyDAS",
0x1608,
L"ZyXEL Omni FaxModem 56K UNO"
},
{
0x0ace,
L"ZyDAS",
0x1611,
L"ZyXEL Omni FaxModem 56K Plus"
},
{
0x0ace,
L"ZyDAS",
0x2011,
L"Virtual media for 802.11bg"
},
{
0x0ace,
L"ZyDAS",
0x20ff,
L"Virtual media for 802.11bg"
},
{
0x0ace,
L"ZyDAS",
0xa211,
L"ZD1211 802.11b/g Wireless Adapter"
},
{
0x0ace,
L"ZyDAS",
0xb215,
L"802.11bg"
},
{
0x0acf,
L"Intoto, Inc.",
0x0,
L"0"
},
{
0x0ad0,
L"Intellix Corp.",
0x0,
L"0"
},
{
0x0ad1,
L"Remotec Technology, Ltd",
0x0,
L"0"
},
{
0x0ad2,
L"Service & Quality Technology Co., Ltd",
0x0,
L"0"
},
{
0x0ada,
L"Data Encryption Systems Ltd.",
0x0005,
L"DK2"
},
{
0x0ae3,
L"Allion Computer, Inc.",
0x0,
L"0"
},
{
0x0ae4,
L"Taito Corp.",
0x0,
L"0"
},
{
0x0ae7,
L"Neodym Systems, Inc.",
0x0,
L"0"
},
{
0x0ae8,
L"System Support Co., Ltd",
0x0,
L"0"
},
{
0x0ae9,
L"North Shore Circuit Design L.L.P.",
0x0,
L"0"
},
{
0x0aea,
L"SciEssence, LLC",
0x0,
L"0"
},
{
0x0aeb,
L"TTP Communications, Ltd",
0x0,
L"0"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2101,
L"SmartMedia Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2102,
L"CompactFlash Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2103,
L"MMC/SD Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2104,
L"MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2201,
L"SmartMedia+CompactFlash Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2202,
L"SmartMedia+MMC/SD Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2203,
L"SmartMedia+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2204,
L"CompactFlash+MMC/SD Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2205,
L"CompactFlash+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2206,
L"MMC/SD+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2301,
L"SmartMedia+CompactFlash+MMC/SD Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2302,
L"SmartMedia+CompactFlash+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2303,
L"SmartMedia+MMC/SD+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x2304,
L"CompactFlash+MMC/SD+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3016,
L"MMC/SD+Memory Stick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3050,
L"ND3050 8-in-1 Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3060,
L"1.1 FS Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3101,
L"MMC/SD Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3102,
L"MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3201,
L"MMC/SD+MemoryStick Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3216,
L"HS Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x3260,
L"7-in-1 Card Reader"
},
{
0x0aec,
L"Neodio Technologies Corp.",
0x5010,
L"ND5010 Card Reader"
},
{
0x0af0,
L"Option",
0x5000,
L"UMTS Card"
},
{
0x0af0,
L"Option",
0x6000,
L"GlobeTrotter 3G datacard"
},
{
0x0af0,
L"Option",
0x6300,
L"GT 3G Quad UMTS/GPRS Card"
},
{
0x0af0,
L"Option",
0x6600,
L"GlobeTrotter 3G+ datacard"
},
{
0x0af0,
L"Option",
0x6711,
L"GlobeTrotter Express 7.2 v2"
},
{
0x0af0,
L"Option",
0x6971,
L"Globetrotter HSDPA Modem"
},
{
0x0af0,
L"Option",
0x7251,
L"Globetrotter HSUPA Modem (aka iCON HSUPA E)"
},
{
0x0af0,
L"Option",
0x7501,
L"Globetrotter HSUPA Modem (icon 411 aka Vodafone K3760)"
},
{
0x0af0,
L"Option",
0x7601,
L"Globetrotter MO40x 3G Modem (GTM 382)"
},
{
0x0af0,
L"Option",
0x7701,
L"Globetrotter HSUPA Modem (aka icon 451)"
},
{
0x0af0,
L"Option",
0xd055,
L"Globetrotter GI0505 [iCON 505]"
},
{
0x0af6,
L"Silver I Co., Ltd",
0x0,
L"0"
},
{
0x0af7,
L"B2C2, Inc.",
0x0101,
L"Digital TV USB Receiver (DVB-S/T/C / ATSC)"
},
{
0x0af9,
L"Hama, Inc.",
0x0010,
L"USB SightCam 100"
},
{
0x0af9,
L"Hama, Inc.",
0x0011,
L"Micro Innovations IC50C Webcam"
},
{
0x0afa,
L"DMC Co., Ltd.",
0x07d2,
L"Controller Board for Projected Capacitive Touch Screen DUS3000"
},
{
0x0afc,
L"Zaptronix Ltd",
0x0,
L"0"
},
{
0x0afd,
L"Tateno Dennou, Inc.",
0x0,
L"0"
},
{
0x0afe,
L"Cummins Engine Co.",
0x0,
L"0"
},
{
0x0aff,
L"Jump Zone Network Products, Inc.",
0x0,
L"0"
},
{
0x0b00,
L"INGENICO",
0x0,
L"0"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x0001,
L"MeMO Pad HD 7 (CD-ROM mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x0301,
L"MyPal A696 GPS PDA"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1101,
L"Mass Storage (UISDMC4S)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1706,
L"WL-167G v1 802.11g Adapter [Ralink RT2571]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1707,
L"WL-167G v1 802.11g Adapter [Ralink RT2571]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1708,
L"Mass Storage Device"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x170b,
L"Multi card reader"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x170c,
L"WL-159g 802.11bg [ZyDAS ZD1211B+AL2230]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x170d,
L"802.11b/g Wireless Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1712,
L"BT-183 Bluetooth 2.0+EDR adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1715,
L"2045 Bluetooth 2.0 Device with trace filter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1716,
L"Bluetooth Device"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1717,
L"WL169gE 802.11g Adapter [Broadcom 4320 USB]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x171b,
L"A9T wireless 802.11bg"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x171c,
L"802.11b/g Wireless Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x171f,
L"My Cinema U3000 Mini [DiBcom DiB7700P]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1723,
L"WL-167G v2 802.11g Adapter [Ralink RT2571W]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1724,
L"RT2573"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1726,
L"Laptop OLED Display"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x172a,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x172b,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1731,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1732,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1734,
L"AF-200"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x173c,
L"BT-183 Bluetooth 2.0"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x173f,
L"My Cinema U3100 Mini"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1742,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1743,
L"Xonar U1 Audio Station"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1751,
L"BT-253 Bluetooth Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x175b,
L"Laptop OLED Display"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1760,
L"802.11n Network Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1761,
L"USB-N11 802.11n Network Adapter [Ralink RT2870]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1774,
L"Gobi Wireless Modem (QDL mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1776,
L"Gobi Wireless Modem"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1779,
L"My Cinema U3100 Mini Plus [AF9035A]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1784,
L"USB-N13 802.11n Network Adapter (rev. A1) [Ralink RT3072]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1786,
L"USB-N10 802.11n Network Adapter [Realtek RTL8188SU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1788,
L"BT-270 Bluetooth Adapter"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1791,
L"WL-167G v3 802.11n Adapter [Realtek RTL8188SU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x179d,
L"USB-N53 802.11abgn Network Adapter [Ralink RT3572]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x179e,
L"Eee Note EA800 (network mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x179f,
L"Eee Note EA800 (tablet mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17a0,
L"Xonar U3 sound card"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17a1,
L"Eee Note EA800 (mass storage mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17ab,
L"USB-N13 802.11n Network Adapter (rev. B1) [Realtek RTL8192CU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17ba,
L"N10 Nano 802.11n Network Adapter [Realtek RTL8192CU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17c7,
L"WL-330NUL"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17c9,
L"USB-AC53 802.11a/b/g/n/ac Wireless Adapter [Broadcom BCM43526]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17cb,
L"Broadcom BCM20702A0 Bluetooth"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17d1,
L"AC51 802.11a/b/g/n/ac Wireless Adapter [Mediatek MT7610U]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17d2,
L"USB-AC56 802.11a/b/g/n/ac Wireless Adapter [Realtek RTL8812AU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17d3,
L"USB-N10 v2 802.11b/g/n Wireless Adapter [MediaTek MT7601U]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17db,
L"USB-AC50 802.11a/b/g/n/ac (1x1) Wireless Adapter [MediaTek MT7610U]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17e8,
L"USB-N14 802.11b/g/n (2x2) Wireless Adapter [Ralink RT5372]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x17eb,
L"USB-AC55 802.11a/b/g/n/ac Wireless Adapter [MediaTek MT7612U]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x180a,
L"Broadcom BCM20702 Single-Chip Bluetooth 4.0 + LE"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1817,
L"USB-AC68 802.11a/b/g/n/ac (4x4) Wireless Adapter [Realtek RTL8814AU]"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x1825,
L"Qualcomm Bluetooth 4.1"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4c80,
L"Transformer Pad TF300TG"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4c90,
L"Transformer Pad Infinity TF700"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4c91,
L"Transformer Pad Infinity TF700 (Debug mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4ca0,
L"Transformer Pad TF701T"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4ca1,
L"Transformer Pad TF701T (Debug mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4d00,
L"Transformer Prime TF201"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4d01,
L"Transformer Prime TF201 (debug mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x4daf,
L"Transformer Pad Infinity TF700 (Fastboot)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x5410,
L"MeMO Pad HD 7 (MTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x5412,
L"MeMO Pad HD 7 (PTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x550f,
L"Fonepad 7"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x6101,
L"Cable Modem"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x620a,
L"Remote NDIS Device"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7772,
L"Zenfone GO (ZB500KL) (MTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7773,
L"Zenfone GO (ZB500KL) (Debug, MTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7774,
L"Zenfone GO (ZB500KL) (RNDIS mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7775,
L"Zenfone GO (ZB500KL) (Debug, RNDIS mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7776,
L"Zenfone GO (ZB500KL) (PTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0x7777,
L"Zenfone GO (ZB500KL) (Debug, PTP mode)"
},
{
0x0b05,
L"ASUSTek Computer, Inc.",
0xb700,
L"Broadcom Bluetooth 2.1"
},
{
0x0b0b,
L"Datamax-O'Neil",
0x106e,
L"Datamax E-4304"
},
{
0x0b0c,
L"Todos AB",
0x0009,
L"Todos Argos Mini II Smart Card Reader"
},
{
0x0b0c,
L"Todos AB",
0x001e,
L"e.dentifier2 (ABN AMRO electronic banking card reader NL)"
},
{
0x0b0c,
L"Todos AB",
0x002e,
L"C200 smartcard controller (Nordea card reader)"
},
{
0x0b0c,
L"Todos AB",
0x003f,
L"Todos C400 smartcard controller (Handelsbanken card reader)"
},
{
0x0b0c,
L"Todos AB",
0x0050,
L"Argos Mini II Smart Card Reader (CCID)"
},
{
0x0b0d,
L"ProjectLab",
0x0000,
L"CenturyCD"
},
{
0x0b0e,
L"GN Netcom",
0x0348,
L"Jabra UC VOICE 550a MS"
},
{
0x0b0e,
L"GN Netcom",
0x034c,
L"Jabra UC Voice 750 MS"
},
{
0x0b0e,
L"GN Netcom",
0x0410,
L"Jabra SPEAK 410"
},
{
0x0b0e,
L"GN Netcom",
0x0420,
L"Jabra SPEAK 510"
},
{
0x0b0e,
L"GN Netcom",
0x094d,
L"GN Netcom / Jabra REVO Wireless"
},
{
0x0b0e,
L"GN Netcom",
0x1017,
L"Jabra PRO 930"
},
{
0x0b0e,
L"GN Netcom",
0x1022,
L"Jabra PRO 9450, Type 9400BS (DECT Headset)"
},
{
0x0b0e,
L"GN Netcom",
0x1041,
L"Jabra PRO 9460"
},
{
0x0b0e,
L"GN Netcom",
0x1900,
L"Jabra Biz 1900"
},
{
0x0b0e,
L"GN Netcom",
0x2007,
L"GN 2000 Stereo Corded Headset"
},
{
0x0b0e,
L"GN Netcom",
0x620c,
L"Jabra BT620s"
},
{
0x0b0e,
L"GN Netcom",
0x9330,
L"Jabra GN9330 Headset"
},
{
0x0b0f,
L"AVID Technology",
0x0,
L"0"
},
{
0x0b10,
L"Pcally",
0x0,
L"0"
},
{
0x0b11,
L"I Tech Solutions Co., Ltd",
0x0,
L"0"
},
{
0x0b1e,
L"Electronic Warfare Assoc., Inc. (EWA)",
0x8007,
L"Blackhawk USB560-BP JTAG Emulator"
},
{
0x0b1f,
L"Insyde Software Corp.",
0x0,
L"0"
},
{
0x0b20,
L"TransDimension, Inc.",
0x0,
L"0"
},
{
0x0b21,
L"Yokogawa Electric Corp.",
0x0,
L"0"
},
{
0x0b22,
L"Japan System Development Co., Ltd",
0x0,
L"0"
},
{
0x0b23,
L"Pan-Asia Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0b24,
L"Link Evolution Corp.",
0x0,
L"0"
},
{
0x0b27,
L"Ritek Corp.",
0x0,
L"0"
},
{
0x0b28,
L"Kenwood Corp.",
0x0,
L"0"
},
{
0x0b2c,
L"Village Center, Inc.",
0x0,
L"0"
},
{
0x0b30,
L"PNY Technologies, Inc.",
0x0006,
L"SM Media-Shuttle Card Reader"
},
{
0x0b33,
L"Contour Design, Inc.",
0x0020,
L"ShuttleXpress"
},
{
0x0b33,
L"Contour Design, Inc.",
0x0030,
L"ShuttlePro v2"
},
{
0x0b33,
L"Contour Design, Inc.",
0x0401,
L"RollerMouse Free 2"
},
{
0x0b33,
L"Contour Design, Inc.",
0x0700,
L"RollerMouse Pro"
},
{
0x0b37,
L"Hitachi ULSI Systems Co., Ltd",
0x0,
L"0"
},
{
0x0b38,
L"Gear Head",
0x0003,
L"Keyboard"
},
{
0x0b38,
L"Gear Head",
0x0010,
L"107-Key Keyboard"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0001,
L"Composite USB PS2 Converter"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0109,
L"USB TO Ethernet"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0421,
L"Serial"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0801,
L"USB-Parallel Bridge"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0901,
L"OCT To Fast Ethernet Converter"
},
{
0x0b39,
L"Omnidirectional Control Technology, Inc.",
0x0c03,
L"LAN DOCK Serial Converter"
},
{
0x0b3a,
L"IPaxess",
0x0,
L"0"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x0163,
L"TL-WN320G 1.0 WLAN Adapter"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1601,
L"Allnet 0193 802.11b Adapter"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1602,
L"ZyXEL ZyAIR B200 802.11b Adapter"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1612,
L"AIR.Mate 2@net 802.11b Adapter"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1613,
L"802.11b Wireless LAN Adapter"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1620,
L"Allnet Wireless Network Adapter [Envara WiND512]"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x1630,
L"QuickWLAN 802.11bg"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x5630,
L"802.11bg"
},
{
0x0b3b,
L"Tekram Technology Co., Ltd",
0x6630,
L"ZD1211"
},
{
0x0b3c,
L"Olivetti Techcenter",
0xa010,
L"Simple_Way Printer/Scanner/Copier"
},
{
0x0b3c,
L"Olivetti Techcenter",
0xc000,
L"Olicard 100"
},
{
0x0b3c,
L"Olivetti Techcenter",
0xc700,
L"Olicard 100 (Mass Storage mode)"
},
{
0x0b3e,
L"Kikusui Electronics Corp.",
0x0,
L"0"
},
{
0x0b41,
L"Hal Corp.",
0x0011,
L"Crossam2+USB IR commander"
},
{
0x0b43,
L"Play.com, Inc.",
0x0003,
L"PS2 Controller Converter"
},
{
0x0b43,
L"Play.com, Inc.",
0x0005,
L"GameCube Adaptor"
},
{
0x0b47,
L"Sportbug.com, Inc.",
0x0,
L"0"
},
{
0x0b48,
L"TechnoTrend AG",
0x1003,
L"Technotrend/Hauppauge USB-Nova"
},
{
0x0b48,
L"TechnoTrend AG",
0x1004,
L"TT-PCline"
},
{
0x0b48,
L"TechnoTrend AG",
0x1005,
L"Technotrend/Hauppauge USB-Nova"
},
{
0x0b48,
L"TechnoTrend AG",
0x1006,
L"Technotrend/Hauppauge DEC3000-s"
},
{
0x0b48,
L"TechnoTrend AG",
0x1007,
L"TT-micro plus Device"
},
{
0x0b48,
L"TechnoTrend AG",
0x1008,
L"Technotrend/Hauppauge DEC2000-t"
},
{
0x0b48,
L"TechnoTrend AG",
0x1009,
L"Technotrend/Hauppauge DEC2540-t"
},
{
0x0b48,
L"TechnoTrend AG",
0x3001,
L"DVB-S receiver"
},
{
0x0b48,
L"TechnoTrend AG",
0x3002,
L"DVB-C receiver"
},
{
0x0b48,
L"TechnoTrend AG",
0x3003,
L"DVB-T receiver"
},
{
0x0b48,
L"TechnoTrend AG",
0x3004,
L"TT TV-Stick"
},
{
0x0b48,
L"TechnoTrend AG",
0x3005,
L"TT TV-Stick (8kB EEPROM)"
},
{
0x0b48,
L"TechnoTrend AG",
0x3006,
L"TT-connect S-2400 DVB-S receiver"
},
{
0x0b48,
L"TechnoTrend AG",
0x3007,
L"TT-connect S2-3600"
},
{
0x0b48,
L"TechnoTrend AG",
0x3008,
L"TT-connect"
},
{
0x0b48,
L"TechnoTrend AG",
0x3009,
L"TT-connect S-2400 DVB-S receiver (8kB EEPROM)"
},
{
0x0b48,
L"TechnoTrend AG",
0x300a,
L"TT-connect S2-3650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x300b,
L"TT-connect C-3650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x300c,
L"TT-connect T-3650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x300d,
L"TT-connect CT-3650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x300e,
L"TT-connect C-2400"
},
{
0x0b48,
L"TechnoTrend AG",
0x3011,
L"TT-connect S2-4600"
},
{
0x0b48,
L"TechnoTrend AG",
0x3012,
L"TT-connect CT2-4650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x3014,
L"TT-TVStick CT2-4400"
},
{
0x0b48,
L"TechnoTrend AG",
0x3015,
L"TT-connect CT2-4650 CI"
},
{
0x0b48,
L"TechnoTrend AG",
0x3017,
L"TT-connect S2-4650 CI"
},
{
0x0b49,
L"ASCII Corp.",
0x064f,
L"Trance Vibrator"
},
{
0x0b4b,
L"Pine Corp. Ltd.",
0x0100,
L"D'music MP3 Player"
},
{
0x0b4d,
L"Graphtec America, Inc.",
0x110a,
L"Graphtec CC200-20"
},
{
0x0b4e,
L"Musical Electronics, Ltd",
0x6500,
L"MP3 Player"
},
{
0x0b4e,
L"Musical Electronics, Ltd",
0x8028,
L"MP3 Player"
},
{
0x0b4e,
L"Musical Electronics, Ltd",
0x8920,
L"MP3 Player"
},
{
0x0b50,
L"Dumpries Co., Ltd",
0x0,
L"0"
},
{
0x0b51,
L"Comfort Keyboard Co.",
0x0020,
L"Comfort Keyboard"
},
{
0x0b52,
L"Colorado MicroDisplay, Inc.",
0x0,
L"0"
},
{
0x0b54,
L"Sinbon Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0b56,
L"TYI Systems, Ltd",
0x0,
L"0"
},
{
0x0b57,
L"Beijing HanwangTechnology Co., Ltd",
0x0,
L"0"
},
{
0x0b59,
L"Lake Communications, Ltd",
0x0,
L"0"
},
{
0x0b5a,
L"Corel Corp.",
0x0,
L"0"
},
{
0x0b5f,
L"Green Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0b60,
L"Nsine, Ltd",
0x0,
L"0"
},
{
0x0b61,
L"NEC Viewtechnology, Ltd",
0x0,
L"0"
},
{
0x0b62,
L"Orange Micro, Inc.",
0x000b,
L"Bluetooth Device"
},
{
0x0b62,
L"Orange Micro, Inc.",
0x0059,
L"iBOT2 Webcam"
},
{
0x0b63,
L"ADLink Technology, Inc.",
0x0,
L"0"
},
{
0x0b64,
L"Wonderful Wire Cable Co., Ltd",
0x0,
L"0"
},
{
0x0b65,
L"Expert Magnetics Corp.",
0x0,
L"0"
},
{
0x0b66,
L"Cybiko Inc.",
0x0041,
L"Xtreme"
},
{
0x0b67,
L"Fairbanks Scales",
0x555e,
L"SCB-R9000"
},
{
0x0b69,
L"CacheVision",
0x0,
L"0"
},
{
0x0b6a,
L"Maxim Integrated Products",
0xa132,
L"WUP-005 [Nintendo Wii U Pro Controller]"
},
{
0x0b6f,
L"Nagano Japan Radio Co., Ltd",
0x0,
L"0"
},
{
0x0b70,
L"PortalPlayer, Inc.",
0x00ba,
L"iRiver H10 20GB"
},
{
0x0b71,
L"SHIN-EI Sangyo Co., Ltd",
0x0,
L"0"
},
{
0x0b72,
L"Embedded Wireless Technology Co., Ltd",
0x0,
L"0"
},
{
0x0b73,
L"Computone Corp.",
0x0,
L"0"
},
{
0x0b75,
L"Roland DG Corp.",
0x0,
L"0"
},
{
0x0b79,
L"Sunrise Telecom, Inc.",
0x0,
L"0"
},
{
0x0b7a,
L"Zeevo, Inc.",
0x07d0,
L"Bluetooth Dongle"
},
{
0x0b7b,
L"Taiko Denki Co., Ltd",
0x0,
L"0"
},
{
0x0b7c,
L"ITRAN Communications, Ltd",
0x0,
L"0"
},
{
0x0b7d,
L"Astrodesign, Inc.",
0x0,
L"0"
},
{
0x0b81,
L"id3 Technologies",
0x0001,
L"Biothentic II smartcard reader with fingerprint sensor"
},
{
0x0b81,
L"id3 Technologies",
0x0002,
L"DFU-Enabled Devices (DFU)"
},
{
0x0b81,
L"id3 Technologies",
0x0012,
L"BioPAD biometric module (DFU + CDC)"
},
{
0x0b81,
L"id3 Technologies",
0x0102,
L"Certis V1 fingerprint reader"
},
{
0x0b81,
L"id3 Technologies",
0x0103,
L"Certis V2 fingerprint reader"
},
{
0x0b81,
L"id3 Technologies",
0x0200,
L"CL1356T / CL1356T5 / CL1356A smartcard readers (CCID)"
},
{
0x0b81,
L"id3 Technologies",
0x0201,
L"CL1356T / CL1356T5 / CL1356A smartcard readers (DFU + CCID)"
},
{
0x0b81,
L"id3 Technologies",
0x0220,
L"CL1356A FFPJP smartcard reader (CCID + HID)"
},
{
0x0b81,
L"id3 Technologies",
0x0221,
L"CL1356A smartcard reader (DFU + CCID + HID)"
},
{
0x0b84,
L"Rextron Technology, Inc.",
0x0,
L"0"
},
{
0x0b85,
L"Elkat Electronics, Sdn., Bhd.",
0x0,
L"0"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5100,
L"XMC5100 Zippy Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5110,
L"XMC5110 Flash Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5200,
L"XMC5200 Zippy Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5201,
L"XMC5200 Zippy Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5202,
L"XMC5200 Zippy Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0x5280,
L"XMC5280 Storage Drive"
},
{
0x0b86,
L"Exputer Systems, Inc.",
0xfff0,
L"ISP5200 Debugger"
},
{
0x0b87,
L"Plus-One I & T, Inc.",
0x0,
L"0"
},
{
0x0b88,
L"Sigma Koki Co., Ltd, Technology Center",
0x0,
L"0"
},
{
0x0b89,
L"Advanced Digital Broadcast, Ltd",
0x0,
L"0"
},
{
0x0b8c,
L"SMART Technologies Inc.",
0x0001,
L"Interactive Whiteboard Controller (SB6) (HID)"
},
{
0x0b8c,
L"SMART Technologies Inc.",
0x00c3,
L"Sympodium ID350"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x1720,
L"10/100 Ethernet"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x1780,
L"AX88178"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x1790,
L"AX88179 Gigabit Ethernet"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x7720,
L"AX88772"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x772a,
L"AX88772A Fast Ethernet"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x772b,
L"AX88772B"
},
{
0x0b95,
L"ASIX Electronics Corp.",
0x7e2b,
L"AX88772B Fast Ethernet Controller"
},
{
0x0b96,
L"Sewon Telecom",
0x0,
L"0"
},
{
0x0b97,
L"O2 Micro, Inc.",
0x7732,
L"Smart Card Reader"
},
{
0x0b97,
L"O2 Micro, Inc.",
0x7761,
L"Oz776 1.1 Hub"
},
{
0x0b97,
L"O2 Micro, Inc.",
0x7762,
L"Oz776 SmartCard Reader"
},
{
0x0b97,
L"O2 Micro, Inc.",
0x7772,
L"OZ776 CCID Smartcard Reader"
},
{
0x0b98,
L"Playmates Toys, Inc.",
0x0,
L"0"
},
{
0x0b99,
L"Audio International, Inc.",
0x0,
L"0"
},
{
0x0b9b,
L"Dipl.-Ing. Stefan Kunde",
0x4012,
L"Reflex RC-controller Interface"
},
{
0x0b9d,
L"Softprotec Co.",
0x0,
L"0"
},
{
0x0b9f,
L"Chippo Technologies",
0x0,
L"0"
},
{
0x0baf,
L"U.S. Robotics",
0x00e5,
L"USR6000"
},
{
0x0baf,
L"U.S. Robotics",
0x00eb,
L"USR1120 802.11b Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x00ec,
L"56K Faxmodem"
},
{
0x0baf,
L"U.S. Robotics",
0x00f1,
L"SureConnect ADSL ATM Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x00f2,
L"SureConnect ADSL Loader"
},
{
0x0baf,
L"U.S. Robotics",
0x00f5,
L"SureConnect ADSL ATM Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x00f6,
L"SureConnect ADSL Loader"
},
{
0x0baf,
L"U.S. Robotics",
0x00f7,
L"SureConnect ADSL ATM Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x00f8,
L"SureConnect ADSL Loader"
},
{
0x0baf,
L"U.S. Robotics",
0x00f9,
L"SureConnect ADSL ATM Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x00fa,
L"SureConnect ADSL Loader"
},
{
0x0baf,
L"U.S. Robotics",
0x00fb,
L"SureConnect ADSL Ethernet/USB Router"
},
{
0x0baf,
L"U.S. Robotics",
0x0111,
L"USR5420 802.11g Adapter [Broadcom 4320 USB]"
},
{
0x0baf,
L"U.S. Robotics",
0x0118,
L"U5 802.11g Adapter"
},
{
0x0baf,
L"U.S. Robotics",
0x011b,
L"Wireless MAXg Adapter [Broadcom 4320]"
},
{
0x0baf,
L"U.S. Robotics",
0x0121,
L"USR5423 802.11bg Wireless Adapter [ZyDAS ZD1211B]"
},
{
0x0baf,
L"U.S. Robotics",
0x0303,
L"USR5637 56K Faxmodem"
},
{
0x0baf,
L"U.S. Robotics",
0x6112,
L"FaxModem Model 5633"
},
{
0x0bb0,
L"Concord Camera Corp.",
0x0100,
L"Sound Vision Stream"
},
{
0x0bb0,
L"Concord Camera Corp.",
0x5007,
L"3340z/Rollei DC3100"
},
{
0x0bb1,
L"Infinilink Corp.",
0x0,
L"0"
},
{
0x0bb2,
L"Ambit Microsystems Corp.",
0x0302,
L"U10H010 802.11b Wireless Adapter [Intersil PRISM 3]"
},
{
0x0bb2,
L"Ambit Microsystems Corp.",
0x6098,
L"USB Cable Modem"
},
{
0x0bb3,
L"Ofuji Technology",
0x0,
L"0"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0001,
L"Android Phone via mass storage [Wiko Cink Peax 2]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x00ce,
L"mmO2 XDA GSM/GPRS Pocket PC"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x00cf,
L"SPV C500 Smart Phone"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a01,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a02,
L"Himalaya GSM/GPRS Pocket PC"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a03,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a04,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a05,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a06,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a07,
L"Magician PocketPC SmartPhone / O2 XDA"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a08,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a09,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0a,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0b,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0c,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0d,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0e,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a0f,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a10,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a11,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a12,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a13,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a14,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a15,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a16,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a17,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a18,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a19,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1a,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1b,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1c,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1d,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1e,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a1f,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a20,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a21,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a22,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a23,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a24,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a25,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a26,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a27,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a28,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a29,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2a,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2b,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2c,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2d,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2e,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a2f,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a30,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a31,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a32,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a33,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a34,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a35,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a36,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a37,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a38,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a39,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3a,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3b,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3c,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3d,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3e,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a3f,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a40,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a41,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a42,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a43,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a44,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a45,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a46,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a47,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a48,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a49,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4a,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4b,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4c,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4d,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4e,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a4f,
L"PocketPC Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a50,
L"SmartPhone (MTP)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a51,
L"SPV C400 / T-Mobile SDA GSM/GPRS Pocket PC"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a52,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a53,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a54,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a55,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a56,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a57,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a58,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a59,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5a,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5b,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5c,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5d,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5e,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a5f,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a60,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a61,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a62,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a63,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a64,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a65,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a66,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a67,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a68,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a69,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6a,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6b,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6c,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6d,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6e,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a6f,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a70,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a71,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a72,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a73,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a74,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a75,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a76,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a77,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a78,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a79,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7a,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7b,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7c,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7d,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7e,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a7f,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a80,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a81,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a82,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a83,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a84,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a85,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a86,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a87,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a88,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a89,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8a,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8b,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8c,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8d,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8e,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a8f,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a90,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a91,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a92,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a93,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a94,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a95,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a96,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a97,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a98,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a99,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9a,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9b,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9c,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9d,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9e,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0a9f,
L"SmartPhone Sync"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b03,
L"Ozone Mobile Broadband"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b04,
L"Hermes / TyTN / T-Mobile MDA Vario II / O2 Xda Trion"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b05,
L"P3600"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b06,
L"Athena / Advantage x7500 / Dopod U1000 / T-Mobile AMEO"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b0c,
L"Elf / Touch / P3450 / T-Mobile MDA Touch / O2 Xda Nova / Dopod S1"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b1f,
L"Sony Ericsson XPERIA X1"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b2f,
L"Rhodium"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0b51,
L"Qtek 8310 mobile phone [Tornado Noble]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0bce,
L"Vario MDA"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c01,
L"Dream / ADP1 / G1 / Magic / Tattoo"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c02,
L"Dream / ADP1 / G1 / Magic / Tattoo (Debug)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c03,
L"Android Phone [Fairphone First Edition (FP1)]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c13,
L"Diamond"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c1f,
L"Sony Ericsson XPERIA X1"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c5f,
L"Snap"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c86,
L"Sensation"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c87,
L"Desire (debug)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c8d,
L"EVO 4G (debug)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c91,
L"Vision"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c94,
L"Vision"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c97,
L"Legend"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c99,
L"Desire (debug)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0c9e,
L"Incredible"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0ca2,
L"Desire HD (debug mode)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0ca5,
L"Android Phone [Evo Shift 4G]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0cae,
L"T-Mobile MyTouch 4G Slide [Doubleshot]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0de5,
L"One (M7)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0dea,
L"M7_UL [HTC One]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0f25,
L"One M8"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0f63,
L"Desire 610 Via MTP"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0f64,
L"Desire 601"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0fb4,
L"Remote NDIS based Device"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0ff8,
L"Desire HD (Tethering Mode)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0ff9,
L"Desire / Desire HD / Hero / Thunderbolt (Charge Mode)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0ffe,
L"Desire HD (modem mode)"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x0fff,
L"Android Fastboot Bootloader"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x2008,
L"Android Phone via MTP [Wiko Cink Peax 2]"
},
{
0x0bb4,
L"HTC (High Tech Computer Corp.)",
0x200b,
L"Android Phone via PTP [Wiko Cink Peax 2]"
},
{
0x0bb5,
L"Murata Manufacturing Co., Ltd",
0x0,
L"0"
},
{
0x0bb6,
L"Network Alchemy",
0x0,
L"0"
},
{
0x0bb7,
L"Joytech Computer Co., Ltd",
0x0,
L"0"
},
{
0x0bb8,
L"Hitachi Semiconductor and Devices Sales Co., Ltd",
0x0,
L"0"
},
{
0x0bb9,
L"Eiger M&C Co., Ltd",
0x0,
L"0"
},
{
0x0bba,
L"ZAccess Systems",
0x0,
L"0"
},
{
0x0bbb,
L"General Meters Corp.",
0x0,
L"0"
},
{
0x0bbc,
L"Assistive Technology, Inc.",
0x0,
L"0"
},
{
0x0bbd,
L"System Connection, Inc.",
0x0,
L"0"
},
{
0x0bc0,
L"Knilink Technology, Inc.",
0x0,
L"0"
},
{
0x0bc1,
L"Fuw Yng Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x0502,
L"ST3300601CB-RK 300 GB External Hard Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x0503,
L"ST3250824A [Barracuda 7200.9]"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2000,
L"Storage Adapter V3 (TPP)"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2100,
L"FreeAgent Go"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2200,
L"FreeAgent Go FW"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2300,
L"Expansion Portable"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x231a,
L"Expansion Portable"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2320,
L"USB 3.0 bridge [Portable Expansion Drive]"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2321,
L"Expansion Portable"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2322,
L"SRD0NF1 Expansion Portable (STEA)"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x2340,
L"FreeAgent External Hard Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3000,
L"FreeAgent Desktop"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3008,
L"FreeAgent Desk 1TB"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3101,
L"FreeAgent XTreme 640GB"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3312,
L"SRD00F2 Expansion Desktop Drive (STBV)"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3320,
L"SRD00F2 [Expansion Desktop Drive]"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3322,
L"SRD0NF2 [Expansion Desktop Drive]"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x3332,
L"Expansion"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5020,
L"FreeAgent GoFlex"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5021,
L"FreeAgent GoFlex USB 2.0"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5030,
L"FreeAgent GoFlex Upgrade Cable STAE104"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5031,
L"FreeAgent GoFlex USB 3.0"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5032,
L"SATA cable"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5070,
L"FreeAgent GoFlex Desk"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5071,
L"FreeAgent GoFlex Desk"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x50a1,
L"FreeAgent GoFlex Desk"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x50a5,
L"FreeAgent GoFlex Desk USB 3.0"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5121,
L"FreeAgent GoFlex"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x5161,
L"FreeAgent GoFlex dock"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x6126,
L"Maxtor D3 Station 5TB"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x61b6,
L"Maxtor HX-M101TCB/GM [M3 Portable 1TB]"
},
{
0x0bc2,
L"Seagate RSS LLC",
0x61b7,
L"Maxtor M3 Portable"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xa003,
L"Backup Plus"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xa0a1,
L"Backup Plus Desktop"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xa0a4,
L"Backup Plus Desktop Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab00,
L"Slim Portable Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab1e,
L"Backup Plus Portable Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab20,
L"Backup Plus Portable Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab21,
L"Backup Plus Slim"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab24,
L"Backup Plus Portable Drive"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab26,
L"Backup Plus Slim Portable Drive 1 TB"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab31,
L"Backup Plus Desktop Drive (5TB)"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab34,
L"Backup Plus"
},
{
0x0bc2,
L"Seagate RSS LLC",
0xab38,
L"Backup Plus Hub"
},
{
0x0bc3,
L"IPWireless, Inc.",
0x0001,
L"UMTS-TDD (TD-CDMA) modem"
},
{
0x0bc4,
L"Microcube Corp.",
0x0,
L"0"
},
{
0x0bc5,
L"JCN Co., Ltd",
0x0,
L"0"
},
{
0x0bc6,
L"ExWAY, Inc.",
0x0,
L"0"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0001,
L"ActiveHome (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0002,
L"Firecracker Interface (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0003,
L"VGA Video Sender (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0004,
L"X10 Receiver"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0005,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0006,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0007,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0008,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x0009,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000a,
L"Wireless Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000b,
L"Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000c,
L"Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000d,
L"Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000e,
L"Transceiver (ACPI-compliant)"
},
{
0x0bc7,
L"X10 Wireless Technology, Inc.",
0x000f,
L"Transceiver (ACPI-compliant)"
},
{
0x0bc8,
L"Telmax Communications",
0x0,
L"0"
},
{
0x0bc9,
L"ECI Telecom, Ltd",
0x0,
L"0"
},
{
0x0bca,
L"Startek Engineering, Inc.",
0x0,
L"0"
},
{
0x0bcb,
L"Perfect Technic Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0bd7,
L"Andrew Pargeter & Associates",
0xa021,
L"Amptek DP4 multichannel signal analyzer"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0103,
L"USB 2.0 Card Reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0104,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0106,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0107,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0108,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0109,
L"microSDXC Card Reader [Hama 00091047]"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0111,
L"RTS5111 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0113,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0115,
L"Mass Storage Device (Multicard Reader)"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0116,
L"RTS5116 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0117,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0118,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0119,
L"Storage Device (SD card reader)"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0129,
L"RTS5129 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0138,
L"RTS5138 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0139,
L"RTS5139 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0151,
L"Mass Storage Device (Multicard Reader)"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0152,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0153,
L"3-in-1 (SD/SDHC/SDXC) Card Reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0156,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0157,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0158,
L"USB 2.0 multicard reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0159,
L"RTS5159 Card Reader Controller"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0161,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0168,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0169,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0171,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0176,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0178,
L"Mass Storage Device"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0179,
L"RTL8188ETV Wireless LAN 802.11n Network Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0184,
L"RTS5182 Card Reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0186,
L"Card Reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0301,
L"multicard reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0307,
L"Card Reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x0326,
L"Card reader"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x1724,
L"RTL8723AU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x2831,
L"RTL2831U DVB-T"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x2832,
L"RTL2832U DVB-T"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x2838,
L"RTL2838 DVB-T"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x5401,
L"RTL 8153 USB 3.0 hub with gigabit ethernet"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x570c,
L"Asus laptop camera"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x5730,
L"HP 2.0MP High Definition Webcam"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x5751,
L"Integrated Webcam"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x5775,
L"HP Truevision HD laptop camera"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x57b3,
L"Acer 640 × 480 laptop camera"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x57da,
L"Built-In Video Camera"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x58c8,
L"Integrated Webcam HD"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8150,
L"RTL8150 Fast Ethernet Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8151,
L"RTL8151 Adapteon Business Mobile Networks BV"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8152,
L"RTL8152 Fast Ethernet Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8153,
L"RTL8153 Gigabit Ethernet Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8171,
L"RTL8188SU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8172,
L"RTL8191SU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8174,
L"RTL8192SU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8176,
L"RTL8188CUS 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8178,
L"RTL8192CU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8179,
L"RTL8188EUS 802.11n Wireless Network Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x817f,
L"RTL8188RU 802.11n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8187,
L"RTL8187 Wireless Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8189,
L"RTL8187B Wireless 802.11g 54Mbps Network Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x818b,
L"RTL8192EU 802.11b/g/n WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8192,
L"RTL8191SU 802.11n Wireless Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8193,
L"RTL8192DU 802.11an WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8197,
L"RTL8187B Wireless Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8198,
L"RTL8187B Wireless Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8199,
L"RTL8187SU 802.11g WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8812,
L"RTL8812AU 802.11a/b/g/n/ac 2T2R DB WLAN Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0x8813,
L"RTL8814AU 802.11a/b/g/n/ac Wireless Adapter"
},
{
0x0bda,
L"Realtek Semiconductor Corp.",
0xa811,
L"RTL8811AU 802.11a/b/g/n/ac WLAN Adapter"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1000,
L"BV Bluetooth Device"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1002,
L"Bluetooth Device 1.2"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1049,
L"C3607w Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1900,
L"F3507g Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1902,
L"F3507g v2 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1904,
L"F3607gw Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1905,
L"F3607gw v2 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1906,
L"F3607gw v3 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1909,
L"F3307 v2 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x190a,
L"F3307 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x190b,
L"C3607w v2 Mobile Broadband Module"
},
{
0x0bdb,
L"Ericsson Business Mobile Networks BV",
0x1926,
L"H5321 gw Mobile Broadband Driver"
},
{
0x0bdc,
L"Y Media Corp.",
0x0,
L"0"
},
{
0x0bdd,
L"Orange PCS",
0x0,
L"0"
},
{
0x0be2,
L"Kanda Tsushin Kogyo Co., Ltd",
0x0,
L"0"
},
{
0x0be3,
L"TOYO Corp.",
0x0,
L"0"
},
{
0x0be4,
L"Elka International, Ltd",
0x0,
L"0"
},
{
0x0be5,
L"DOME imaging systems, Inc.",
0x0,
L"0"
},
{
0x0be6,
L"Dong Guan Humen Wonderful Wire Cable Factory",
0x0,
L"0"
},
{
0x0bed,
L"MEI",
0x1100,
L"CASHFLOW SC"
},
{
0x0bed,
L"MEI",
0x1101,
L"Series 2000 Combo Acceptor"
},
{
0x0bee,
L"LTK Industries, Ltd",
0x0,
L"0"
},
{
0x0bef,
L"Way2Call Communications",
0x0,
L"0"
},
{
0x0bf0,
L"Pace Micro Technology PLC",
0x0,
L"0"
},
{
0x0bf1,
L"Intracom S.A.",
0x0001,
L"netMod Driver Ver 2.4.17 (CAPI)"
},
{
0x0bf1,
L"Intracom S.A.",
0x0002,
L"netMod Driver Ver 2.4 (CAPI)"
},
{
0x0bf1,
L"Intracom S.A.",
0x0003,
L"netMod Driver Ver 2.4 (CAPI)"
},
{
0x0bf2,
L"Konexx",
0x0,
L"0"
},
{
0x0bf6,
L"Addonics Technologies, Inc.",
0x0103,
L"Storage Device"
},
{
0x0bf6,
L"Addonics Technologies, Inc.",
0x1234,
L"Storage Device"
},
{
0x0bf6,
L"Addonics Technologies, Inc.",
0xa000,
L"Cable 205 (TPP)"
},
{
0x0bf6,
L"Addonics Technologies, Inc.",
0xa001,
L"Cable 205"
},
{
0x0bf6,
L"Addonics Technologies, Inc.",
0xa002,
L"IDE Bridge"
},
{
0x0bf7,
L"Sunny Giken, Inc.",
0x0,
L"0"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x1001,
L"Fujitsu Pocket Loox 600 PDA"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x1006,
L"SmartCard Reader 2A"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x1007,
L"Connect2Air E-5400 802.11g Wireless Adapter"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x1009,
L"Connect2Air E-5400 D1700 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x100c,
L"Keyboard FSC KBPC PX"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x100f,
L"miniCard D2301 802.11bg Wireless Module [SiS 163U]"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x1017,
L"Keyboard KB SCR"
},
{
0x0bf8,
L"Fujitsu Siemens Computers",
0x101f,
L"Fujitsu Full HD Pro Webcam"
},
{
0x0bfd,
L"Kvaser AB",
0x0004,
L"USBcan II"
},
{
0x0bfd,
L"Kvaser AB",
0x000b,
L"Leaf Light HS"
},
{
0x0bfd,
L"Kvaser AB",
0x000e,
L"Leaf SemiPro HS"
},
{
0x0c00,
L"FireFly Mouse Mat",
0x1607,
L"Apex M500"
},
{
0x0c04,
L"MOTO Development Group, Inc.",
0x0,
L"0"
},
{
0x0c05,
L"Appian Graphics",
0x0,
L"0"
},
{
0x0c06,
L"Hasbro Games, Inc.",
0x0,
L"0"
},
{
0x0c07,
L"Infinite Data Storage, Ltd",
0x0,
L"0"
},
{
0x0c08,
L"Agate",
0x0378,
L"Q 16MB Storage Device"
},
{
0x0c09,
L"Comjet Information System",
0xa5a5,
L"Litto Version USB2.0"
},
{
0x0c0a,
L"Highpoint Technologies, Inc.",
0x0,
L"0"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27cb,
L"6-in-1 Flash Reader and Writer"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27d7,
L"Multi Memory reader/writer MD-005"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27da,
L"Multi Memory reader/writer MD-005"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27dc,
L"Multi Memory reader/writer MD-005"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27e7,
L"3,5'' HDD case MD-231"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x27ee,
L"3,5'' HDD case MD-231"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x2814,
L"3,5'' HDD case MD-231"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x2815,
L"3,5'' HDD case MD-231"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x281d,
L"3,5'' HDD case MD-231"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0x5fab,
L"Storage Adaptor"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0xa109,
L"CF/SM Reader and Writer"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0xa10c,
L"SD/MS Reader and Writer"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0xb001,
L"USB 2.0 Mass Storage IDE adapter"
},
{
0x0c0b,
L"Dura Micro, Inc. (Acomdata)",
0xb004,
L"MMC/SD Reader and Writer"
},
{
0x0c12,
L"Zeroplus",
0x0005,
L"PSX Vibration Feedback Converter"
},
{
0x0c12,
L"Zeroplus",
0x0030,
L"PSX Vibration Feedback Converter"
},
{
0x0c12,
L"Zeroplus",
0x700e,
L"Logic Analyzer (LAP-C-16032)"
},
{
0x0c12,
L"Zeroplus",
0x8801,
L"Xbox Controller"
},
{
0x0c12,
L"Zeroplus",
0x8802,
L"Xbox Controller"
},
{
0x0c12,
L"Zeroplus",
0x8809,
L"Red Octane Ignition Xbox DDR Pad"
},
{
0x0c12,
L"Zeroplus",
0x880a,
L"Pelican Eclipse PL-2023"
},
{
0x0c12,
L"Zeroplus",
0x8810,
L"Xbox Controller"
},
{
0x0c12,
L"Zeroplus",
0x9902,
L"VibraX"
},
{
0x0c15,
L"Iris Graphics",
0x0,
L"0"
},
{
0x0c16,
L"Gyration, Inc.",
0x0002,
L"RF Technology Receiver"
},
{
0x0c16,
L"Gyration, Inc.",
0x0003,
L"RF Technology Receiver"
},
{
0x0c16,
L"Gyration, Inc.",
0x0008,
L"RF Technology Receiver"
},
{
0x0c16,
L"Gyration, Inc.",
0x0080,
L"eHome Infrared Receiver"
},
{
0x0c16,
L"Gyration, Inc.",
0x0081,
L"eHome Infrared Receiver"
},
{
0x0c17,
L"Cyberboard A/S",
0x0,
L"0"
},
{
0x0c18,
L"SynerTek Korea, Inc.",
0x0,
L"0"
},
{
0x0c19,
L"cyberPIXIE, Inc.",
0x0,
L"0"
},
{
0x0c1a,
L"Silicon Motion, Inc.",
0x0,
L"0"
},
{
0x0c1b,
L"MIPS Technologies",
0x0,
L"0"
},
{
0x0c1c,
L"Hang Zhou Silan Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0c22,
L"Tally Printer Corp.",
0x0,
L"0"
},
{
0x0c23,
L"Lernout + Hauspie",
0x0,
L"0"
},
{
0x0c24,
L"Taiyo Yuden",
0x0001,
L"Bluetooth Adaptor"
},
{
0x0c24,
L"Taiyo Yuden",
0x0002,
L"Bluetooth Device2"
},
{
0x0c24,
L"Taiyo Yuden",
0x0005,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x000b,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x000c,
L"Bluetooth Adaptor"
},
{
0x0c24,
L"Taiyo Yuden",
0x000e,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x000f,
L"Bluetooth Device (V2.0+EDR)"
},
{
0x0c24,
L"Taiyo Yuden",
0x0010,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x0012,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x0018,
L"Bluetooth Device(BC04-External)"
},
{
0x0c24,
L"Taiyo Yuden",
0x0019,
L"Bluetooth Device"
},
{
0x0c24,
L"Taiyo Yuden",
0x0021,
L"Bluetooth Device (V2.1+EDR)"
},
{
0x0c24,
L"Taiyo Yuden",
0x0c24,
L"Bluetooth Device(SAMPLE)"
},
{
0x0c24,
L"Taiyo Yuden",
0xffff,
L"Bluetooth module with BlueCore in DFU mode"
},
{
0x0c25,
L"Sampo Corp.",
0x0310,
L"Scream Cam"
},
{
0x0c26,
L"Prolific Technology Inc.",
0x0018,
L"USB-Serial Controller [Icom Inc. OPC-478UC]"
},
{
0x0c27,
L"RFIDeas, Inc",
0x3bfa,
L"pcProx Card Reader"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0007,
L"Metrologic MS7120 Barcode Scanner (IBM SurePOS mode)"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0200,
L"MS7120 Barcode Scanner"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0204,
L"Metrologic MS7120 Barcode Scanner (keyboard mode)"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0206,
L"Metrologic MS4980 Barcode Scanner"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0700,
L"Metrologic MS7120 Barcode Scanner (uni-directional serial mode)"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0720,
L"Metrologic MS7120 Barcode Scanner (bi-directional serial mode)"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0b61,
L"Vuquest 3310g"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0b6a,
L"Vuquest 3310 Area-Imaging Scanner"
},
{
0x0c2e,
L"Metrologic Instruments",
0x0b81,
L"Barcode scanner Voyager 1400g Series"
},
{
0x0c30,
L"Mutoh Industries Ltd",
0x6010,
L"Kona 1400 Cutting Plotter"
},
{
0x0c35,
L"Eagletron, Inc.",
0x0,
L"0"
},
{
0x0c36,
L"E Ink Corp.",
0x0,
L"0"
},
{
0x0c37,
L"e.Digital",
0x0,
L"0"
},
{
0x0c38,
L"Der An Electric Wire & Cable Co., Ltd",
0x0,
L"0"
},
{
0x0c39,
L"IFR",
0x0,
L"0"
},
{
0x0c3a,
L"Furui Precise Component (Kunshan) Co., Ltd",
0x0,
L"0"
},
{
0x0c3b,
L"Komatsu, Ltd",
0x0,
L"0"
},
{
0x0c3c,
L"Radius Co., Ltd",
0x0,
L"0"
},
{
0x0c3d,
L"Innocom, Inc.",
0x0,
L"0"
},
{
0x0c3e,
L"Nextcell, Inc.",
0x0,
L"0"
},
{
0x0c44,
L"Motorola iDEN",
0x0021,
L"iDEN P2k0 Device"
},
{
0x0c44,
L"Motorola iDEN",
0x0022,
L"iDEN P2k1 Device"
},
{
0x0c44,
L"Motorola iDEN",
0x03a2,
L"iDEN Smartphone"
},
{
0x0c44,
L"Motorola iDEN",
0x41d9,
L"i1 phone"
},
{
0x0c45,
L"Microdia",
0x0011,
L"EBUDDY"
},
{
0x0c45,
L"Microdia",
0x0520,
L"MaxTrack Wireless Mouse"
},
{
0x0c45,
L"Microdia",
0x1018,
L"Compact Flash storage memory card reader"
},
{
0x0c45,
L"Microdia",
0x1020,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1028,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1030,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1031,
L"Sonix Mass Storage Device"
},
{
0x0c45,
L"Microdia",
0x1032,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1033,
L"Sonix Mass Storage Device"
},
{
0x0c45,
L"Microdia",
0x1034,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1035,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1036,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1037,
L"Sonix Mass Storage Device"
},
{
0x0c45,
L"Microdia",
0x1050,
L"CF Card Reader"
},
{
0x0c45,
L"Microdia",
0x1058,
L"HDD Reader"
},
{
0x0c45,
L"Microdia",
0x1060,
L"iFlash SM-Direct Card Reader"
},
{
0x0c45,
L"Microdia",
0x1061,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1062,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1063,
L"Sonix Mass Storage Device"
},
{
0x0c45,
L"Microdia",
0x1064,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1065,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1066,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1067,
L"Mass Storage Reader"
},
{
0x0c45,
L"Microdia",
0x1158,
L"A56AK"
},
{
0x0c45,
L"Microdia",
0x184c,
L"VoIP Phone"
},
{
0x0c45,
L"Microdia",
0x6001,
L"Genius VideoCAM NB"
},
{
0x0c45,
L"Microdia",
0x6005,
L"Sweex Mini Webcam"
},
{
0x0c45,
L"Microdia",
0x6007,
L"VideoCAM Eye"
},
{
0x0c45,
L"Microdia",
0x6009,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x600d,
L"TwinkleCam USB camera"
},
{
0x0c45,
L"Microdia",
0x6011,
L"PC Camera (SN9C102)"
},
{
0x0c45,
L"Microdia",
0x6019,
L"PC Camera (SN9C102)"
},
{
0x0c45,
L"Microdia",
0x6024,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x6025,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x6028,
L"Typhoon Easycam USB 330K (older)"
},
{
0x0c45,
L"Microdia",
0x6029,
L"Triplex i-mini PC Camera"
},
{
0x0c45,
L"Microdia",
0x602a,
L"Meade ETX-105EC Camera"
},
{
0x0c45,
L"Microdia",
0x602b,
L"VideoCAM NB 300"
},
{
0x0c45,
L"Microdia",
0x602c,
L"Clas Ohlson TWC-30XOP Webcam"
},
{
0x0c45,
L"Microdia",
0x602d,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x602e,
L"VideoCAM Messenger"
},
{
0x0c45,
L"Microdia",
0x6030,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x603f,
L"VideoCAM ExpressII"
},
{
0x0c45,
L"Microdia",
0x6040,
L"CCD PC Camera (PC390A)"
},
{
0x0c45,
L"Microdia",
0x606a,
L"CCD PC Camera (PC390A)"
},
{
0x0c45,
L"Microdia",
0x607a,
L"CCD PC Camera (PC390A)"
},
{
0x0c45,
L"Microdia",
0x607b,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x607c,
L"CCD PC Camera (PC390A)"
},
{
0x0c45,
L"Microdia",
0x607e,
L"CCD PC Camera (PC390A)"
},
{
0x0c45,
L"Microdia",
0x6080,
L"Audio (Microphone)"
},
{
0x0c45,
L"Microdia",
0x6082,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x6083,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x608c,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x608e,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x608f,
L"PC Camera (SN9C103 + OV7630)"
},
{
0x0c45,
L"Microdia",
0x60a8,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x60aa,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x60ab,
L"PC Camera"
},
{
0x0c45,
L"Microdia",
0x60af,
L"VideoCAM Look"
},
{
0x0c45,
L"Microdia",
0x60b0,
L"Genius VideoCam Look"
},
{
0x0c45,
L"Microdia",
0x60c0,
L"PC Camera with Mic (SN9C105)"
},
{
0x0c45,
L"Microdia",
0x60c8,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x60cc,
L"PC Camera with Mic (SN9C105)"
},
{
0x0c45,
L"Microdia",
0x60ec,
L"PC Camera with Mic (SN9C105)"
},
{
0x0c45,
L"Microdia",
0x60ef,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x60fa,
L"PC Camera with Mic (SN9C105)"
},
{
0x0c45,
L"Microdia",
0x60fb,
L"Composite Device"
},
{
0x0c45,
L"Microdia",
0x60fc,
L"PC Camera with Mic (SN9C105)"
},
{
0x0c45,
L"Microdia",
0x60fe,
L"Audio (Microphone)"
},
{
0x0c45,
L"Microdia",
0x6108,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x6122,
L"PC Camera (SN9C110)"
},
{
0x0c45,
L"Microdia",
0x6123,
L"PC Camera (SN9C110)"
},
{
0x0c45,
L"Microdia",
0x6128,
L"PC Camera (SN9C325 + OM6802)"
},
{
0x0c45,
L"Microdia",
0x612a,
L"PC Camera (SN9C325)"
},
{
0x0c45,
L"Microdia",
0x612c,
L"PC Camera (SN9C110)"
},
{
0x0c45,
L"Microdia",
0x612e,
L"PC Camera (SN9C110)"
},
{
0x0c45,
L"Microdia",
0x612f,
L"PC Camera (SN9C110)"
},
{
0x0c45,
L"Microdia",
0x6130,
L"PC Camera (SN9C120)"
},
{
0x0c45,
L"Microdia",
0x6138,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x613a,
L"PC Camera (SN9C120)"
},
{
0x0c45,
L"Microdia",
0x613b,
L"Win2 PC Camera"
},
{
0x0c45,
L"Microdia",
0x613c,
L"PC Camera (SN9C120)"
},
{
0x0c45,
L"Microdia",
0x613e,
L"PC Camera (SN9C120)"
},
{
0x0c45,
L"Microdia",
0x6143,
L"PC Camera (SN9C120 + SP80708)"
},
{
0x0c45,
L"Microdia",
0x6240,
L"PC Camera (SN9C201 + MI1300)"
},
{
0x0c45,
L"Microdia",
0x6242,
L"PC Camera (SN9C201 + MI1310)"
},
{
0x0c45,
L"Microdia",
0x6243,
L"PC Camera (SN9C201 + S5K4AAFX)"
},
{
0x0c45,
L"Microdia",
0x6248,
L"PC Camera (SN9C201 + OV9655)"
},
{
0x0c45,
L"Microdia",
0x624b,
L"PC Camera (SN9C201 + CX1332)"
},
{
0x0c45,
L"Microdia",
0x624c,
L"PC Camera (SN9C201 + MI1320)"
},
{
0x0c45,
L"Microdia",
0x624e,
L"PC Camera (SN9C201 + SOI968)"
},
{
0x0c45,
L"Microdia",
0x624f,
L"PC Camera (SN9C201 + OV9650)"
},
{
0x0c45,
L"Microdia",
0x6251,
L"PC Camera (SN9C201 + OV9650)"
},
{
0x0c45,
L"Microdia",
0x6253,
L"PC Camera (SN9C201 + OV9650)"
},
{
0x0c45,
L"Microdia",
0x6260,
L"PC Camera (SN9C201 + OV7670ISP)"
},
{
0x0c45,
L"Microdia",
0x6262,
L"PC Camera (SN9C201 + OM6802)"
},
{
0x0c45,
L"Microdia",
0x6270,
L"PC Camera (SN9C201 + MI0360/MT9V011 or MI0360SOC/MT9V111) U-CAM PC Camera NE878, Whitcom WHC017, ..."
},
{
0x0c45,
L"Microdia",
0x627a,
L"PC Camera (SN9C201 + S5K53BEB)"
},
{
0x0c45,
L"Microdia",
0x627b,
L"PC Camera (SN9C201 + OV7660)"
},
{
0x0c45,
L"Microdia",
0x627c,
L"PC Camera (SN9C201 + HV7131R)"
},
{
0x0c45,
L"Microdia",
0x627f,
L"PC Camera (SN9C201 + OV965x + EEPROM)"
},
{
0x0c45,
L"Microdia",
0x6280,
L"PC Camera with Microphone (SN9C202 + MI1300)"
},
{
0x0c45,
L"Microdia",
0x6282,
L"PC Camera with Microphone (SN9C202 + MI1310)"
},
{
0x0c45,
L"Microdia",
0x6283,
L"PC Camera with Microphone (SN9C202 + S5K4AAFX)"
},
{
0x0c45,
L"Microdia",
0x6288,
L"PC Camera with Microphone (SN9C202 + OV9655)"
},
{
0x0c45,
L"Microdia",
0x628a,
L"PC Camera with Microphone (SN9C202 + ICM107)"
},
{
0x0c45,
L"Microdia",
0x628b,
L"PC Camera with Microphone (SN9C202 + CX1332)"
},
{
0x0c45,
L"Microdia",
0x628c,
L"PC Camera with Microphone (SN9C202 + MI1320)"
},
{
0x0c45,
L"Microdia",
0x628e,
L"PC Camera with Microphone (SN9C202 + SOI968)"
},
{
0x0c45,
L"Microdia",
0x628f,
L"PC Camera with Microphone (SN9C202 + OV9650)"
},
{
0x0c45,
L"Microdia",
0x62a0,
L"PC Camera with Microphone (SN9C202 + OV7670ISP)"
},
{
0x0c45,
L"Microdia",
0x62a2,
L"PC Camera with Microphone (SN9C202 + OM6802)"
},
{
0x0c45,
L"Microdia",
0x62b0,
L"PC Camera with Microphone (SN9C202 + MI0360/MT9V011 or MI0360SOC/MT9V111)"
},
{
0x0c45,
L"Microdia",
0x62b3,
L"PC Camera with Microphone (SN9C202 + OV9655)"
},
{
0x0c45,
L"Microdia",
0x62ba,
L"PC Camera with Microphone (SN9C202 + S5K53BEB)"
},
{
0x0c45,
L"Microdia",
0x62bb,
L"PC Camera with Microphone (SN9C202 + OV7660)"
},
{
0x0c45,
L"Microdia",
0x62bc,
L"PC Camera with Microphone (SN9C202 + HV7131R)"
},
{
0x0c45,
L"Microdia",
0x62be,
L"PC Camera with Microphone (SN9C202 + OV7663)"
},
{
0x0c45,
L"Microdia",
0x62c0,
L"Sonix USB 2.0 Camera"
},
{
0x0c45,
L"Microdia",
0x62e0,
L"MSI Starcam Racer"
},
{
0x0c45,
L"Microdia",
0x6300,
L"PC Microscope camera"
},
{
0x0c45,
L"Microdia",
0x6310,
L"Sonix USB 2.0 Camera"
},
{
0x0c45,
L"Microdia",
0x6340,
L"Camera"
},
{
0x0c45,
L"Microdia",
0x6341,
L"Defender G-Lens 2577 HD720p Camera"
},
{
0x0c45,
L"Microdia",
0x63e0,
L"Sonix Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x63f1,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x63f8,
L"Sonix Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x6409,
L"Webcam"
},
{
0x0c45,
L"Microdia",
0x6413,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x6417,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x6419,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x641d,
L"1.3 MPixel Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x6433,
L"Laptop Integrated Webcam HD (Composite Device)"
},
{
0x0c45,
L"Microdia",
0x643f,
L"Dell Integrated HD Webcam"
},
{
0x0c45,
L"Microdia",
0x644d,
L"1.3 MPixel Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x6480,
L"Sonix 1.3 MP Laptop Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x648b,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x64bd,
L"Sony Visual Communication Camera"
},
{
0x0c45,
L"Microdia",
0x64d0,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x64d2,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x651b,
L"HP Webcam"
},
{
0x0c45,
L"Microdia",
0x6705,
L"Integrated HD Webcam"
},
{
0x0c45,
L"Microdia",
0x6710,
L"Integrated Webcam"
},
{
0x0c45,
L"Microdia",
0x7401,
L"TEMPer Temperature Sensor"
},
{
0x0c45,
L"Microdia",
0x7402,
L"TEMPerHUM Temperature & Humidity Sensor"
},
{
0x0c45,
L"Microdia",
0x7403,
L"Foot Switch"
},
{
0x0c45,
L"Microdia",
0x7404,
L"Foot switch FS1-P"
},
{
0x0c45,
L"Microdia",
0x8000,
L"DC31VC"
},
{
0x0c45,
L"Microdia",
0x8006,
L"Dual Mode Camera (8006 VGA)"
},
{
0x0c45,
L"Microdia",
0x800a,
L"Vivitar Vivicam3350B"
},
{
0x0c46,
L"WaveRider Communications, Inc.",
0x0,
L"0"
},
{
0x0c4a,
L"ALGE-TIMING GmbH",
0x0889,
L"Timy"
},
{
0x0c4a,
L"ALGE-TIMING GmbH",
0x088a,
L"Timy 2"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0100,
L"cyberJack e-com/pinpad"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0300,
L"cyberJack pinpad(a)"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0400,
L"cyberJack e-com(a)"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0401,
L"cyberJack pinpad(a2)"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0500,
L"cyberJack RFID standard dual interface smartcard reader"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0501,
L"cyberJack RFID comfort dual interface smartcard reader"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0502,
L"cyberJack compact"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0504,
L"cyberJack go / go plus"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x0505,
L"cyberJack wave"
},
{
0x0c4b,
L"Reiner SCT Kartensysteme GmbH",
0x9102,
L"cyberJack RFID basis contactless smartcard reader"
},
{
0x0c4c,
L"Needham's Electronics",
0x0021,
L"EMP-21 Universal Programmer"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2101,
L"SeaLINK+232"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2102,
L"SeaLINK+485"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2103,
L"SeaLINK+232I"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2104,
L"SeaLINK+485I"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2211,
L"SeaPORT+2/232 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2212,
L"SeaPORT+2/485 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2213,
L"SeaPORT+2 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2221,
L"SeaPORT+2/232 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2222,
L"SeaPORT+2/485 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2223,
L"SeaPORT+2 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2411,
L"SeaPORT+4/232 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2412,
L"SeaPORT+4/485 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2413,
L"SeaPORT+4 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2421,
L"SeaPORT+4/232 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2422,
L"SeaPORT+4/485 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2423,
L"SeaPORT+4 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2431,
L"SeaPORT+4/232 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2432,
L"SeaPORT+4/485 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2433,
L"SeaPORT+4 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2441,
L"SeaPORT+4/232 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2442,
L"SeaPORT+4/485 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2443,
L"SeaPORT+4 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2811,
L"SeaLINK+8/232 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2812,
L"SeaLINK+8/485 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2813,
L"SeaLINK+8 (Port 1)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2821,
L"SeaLINK+8/232 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2822,
L"SeaLINK+8/485 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2823,
L"SeaLINK+8 (Port 2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2831,
L"SeaLINK+8/232 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2832,
L"SeaLINK+8/485 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2833,
L"SeaLINK+8 (Port 3)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2841,
L"SeaLINK+8/232 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2842,
L"SeaLINK+8/485 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2843,
L"SeaLINK+8 (Port 4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2851,
L"SeaLINK+8/232 (Port 5)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2852,
L"SeaLINK+8/485 (Port 5)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2853,
L"SeaLINK+8 (Port 5)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2861,
L"SeaLINK+8/232 (Port 6)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2862,
L"SeaLINK+8/485 (Port 6)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2863,
L"SeaLINK+8 (Port 6)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2871,
L"SeaLINK+8/232 (Port 7)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2872,
L"SeaLINK+8/485 (Port 7)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2873,
L"SeaLINK+8 (Port 7)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2881,
L"SeaLINK+8/232 (Port 8)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2882,
L"SeaLINK+8/485 (Port 8)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x2883,
L"SeaLINK+8 (Port 8)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0x9020,
L"SeaLINK+422"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0xa02a,
L"SeaLINK+8 (Port 1+2)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0xa02b,
L"SeaLINK+8 (Port 3+4)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0xa02c,
L"SeaLINK+8 (Port 5+6)"
},
{
0x0c52,
L"Sealevel Systems, Inc.",
0xa02d,
L"SeaLINK+8 (Port 7+8)"
},
{
0x0c53,
L"ViewPLUS, Inc.",
0x0,
L"0"
},
{
0x0c54,
L"Glory, Ltd",
0x0,
L"0"
},
{
0x0c55,
L"Spectrum Digital, Inc.",
0x0510,
L"Spectrum Digital XDS510 JTAG Debugger"
},
{
0x0c55,
L"Spectrum Digital, Inc.",
0x0540,
L"SPI540"
},
{
0x0c55,
L"Spectrum Digital, Inc.",
0x5416,
L"TMS320C5416 DSK"
},
{
0x0c55,
L"Spectrum Digital, Inc.",
0x6416,
L"TMS320C6416 DDB"
},
{
0x0c56,
L"Billion Bright, Ltd",
0x0,
L"0"
},
{
0x0c57,
L"Imaginative Design Operation Co., Ltd",
0x0,
L"0"
},
{
0x0c58,
L"Vidar Systems Corp.",
0x0,
L"0"
},
{
0x0c59,
L"Dong Guan Shinko Wire Co., Ltd",
0x0,
L"0"
},
{
0x0c5a,
L"TRS International Mfg., Inc.",
0x0,
L"0"
},
{
0x0c5e,
L"Xytronix Research & Design",
0x0,
L"0"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0001,
L"MiniMe"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0002,
L"MiniDAC"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0003,
L"ONE"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0004,
L"GiO"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0007,
L"Duet"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x0009,
L"Jam"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x000a,
L"Jam Bootloader"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x000b,
L"MiC"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x000c,
L"MiC Bootloader"
},
{
0x0c60,
L"Apogee Electronics Corp.",
0x8007,
L"Duet DFU Mode"
},
{
0x0c62,
L"Chant Sincere Co., Ltd",
0x0,
L"0"
},
{
0x0c63,
L"Toko, Inc.",
0x0,
L"0"
},
{
0x0c64,
L"Signality System Engineering Co., Ltd",
0x0,
L"0"
},
{
0x0c65,
L"Eminence Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0c66,
L"Rexon Electronics Corp.",
0x0,
L"0"
},
{
0x0c67,
L"Concept Telecom, Ltd",
0x0,
L"0"
},
{
0x0c6a,
L"ACS",
0x0005,
L"Color 320 x 240 LCD Display Terminal with Touchscreen"
},
{
0x0c6c,
L"JETI Technische Instrumente GmbH",
0x04b2,
L"Specbos 1201"
},
{
0x0c70,
L"MCT Elektronikladen",
0x0000,
L"USB08 Development board"
},
{
0x0c70,
L"MCT Elektronikladen",
0x0747,
L"Eye Movement Recorder [Visagraph]/[ReadAlyzer]"
},
{
0x0c72,
L"PEAK System",
0x000c,
L"PCAN-USB"
},
{
0x0c72,
L"PEAK System",
0x000d,
L"PCAN Pro"
},
{
0x0c74,
L"Optronic Laboratories Inc.",
0x0002,
L"OL 700-30 Goniometer"
},
{
0x0c76,
L"JMTek, LLC.",
0x0001,
L"Mass Storage Controller"
},
{
0x0c76,
L"JMTek, LLC.",
0x0002,
L"Mass Storage Controller"
},
{
0x0c76,
L"JMTek, LLC.",
0x0003,
L"USBdisk"
},
{
0x0c76,
L"JMTek, LLC.",
0x0004,
L"Mass Storage Controller"
},
{
0x0c76,
L"JMTek, LLC.",
0x0005,
L"Transcend Flash disk"
},
{
0x0c76,
L"JMTek, LLC.",
0x0006,
L"Transcend JetFlash"
},
{
0x0c76,
L"JMTek, LLC.",
0x0007,
L"Mass Storage Device"
},
{
0x0c76,
L"JMTek, LLC.",
0x1600,
L"Ion Quick Play LP turntable"
},
{
0x0c76,
L"JMTek, LLC.",
0x1605,
L"SSS Headphone Set"
},
{
0x0c76,
L"JMTek, LLC.",
0x1607,
L"audio controller"
},
{
0x0c77,
L"Sipix Group, Ltd",
0x1001,
L"SiPix Web2"
},
{
0x0c77,
L"Sipix Group, Ltd",
0x1002,
L"SiPix SC2100"
},
{
0x0c77,
L"Sipix Group, Ltd",
0x1010,
L"SiPix Snap"
},
{
0x0c77,
L"Sipix Group, Ltd",
0x1011,
L"SiPix Blink 2"
},
{
0x0c77,
L"Sipix Group, Ltd",
0x1015,
L"SiPix CAMeleon"
},
{
0x0c78,
L"Detto Corp.",
0x0,
L"0"
},
{
0x0c79,
L"NuConnex Technologies Pte., Ltd",
0x0,
L"0"
},
{
0x0c7a,
L"Wing-Span Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0c86,
L"NDA Technologies, Inc.",
0x0,
L"0"
},
{
0x0c88,
L"Kyocera Wireless Corp.",
0x0021,
L"Handheld"
},
{
0x0c88,
L"Kyocera Wireless Corp.",
0x17da,
L"Qualcomm Kyocera CDMA Technologies MSM"
},
{
0x0c89,
L"Honda Tsushin Kogyo Co., Ltd",
0x0,
L"0"
},
{
0x0c8a,
L"Pathway Connectivity, Inc.",
0x0,
L"0"
},
{
0x0c8b,
L"Wavefly Corp.",
0x0,
L"0"
},
{
0x0c8c,
L"Coactive Networks",
0x0,
L"0"
},
{
0x0c8d,
L"Tempo",
0x0,
L"0"
},
{
0x0c8e,
L"Cesscom Co., Ltd",
0x6000,
L"Luxian Series"
},
{
0x0c8f,
L"Applied Microsystems",
0x0,
L"0"
},
{
0x0c94,
L"Cryptera",
0xa000,
L"EPP 1217"
},
{
0x0c98,
L"Berkshire Products, Inc.",
0x1140,
L"USB PC Watchdog"
},
{
0x0c99,
L"Innochips Co., Ltd",
0x0,
L"0"
},
{
0x0c9a,
L"Hanwool Robotics Corp.",
0x0,
L"0"
},
{
0x0c9b,
L"Jobin Yvon, Inc.",
0x0,
L"0"
},
{
0x0c9d,
L"SemTek",
0x0170,
L"3873 Manual Insert card reader"
},
{
0x0ca2,
L"Zyfer",
0x0,
L"0"
},
{
0x0ca3,
L"Sega Corp.",
0x0,
L"0"
},
{
0x0ca4,
L"ST&T Instrument Corp.",
0x0,
L"0"
},
{
0x0ca5,
L"BAE Systems Canada, Inc.",
0x0,
L"0"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x0010,
L"EZUSB PC/SC Smart Card Reader"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x0050,
L"EZ220PU Reader Controller"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x1077,
L"Bludrive Family Smart Card Reader"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x107e,
L"Reader Controller"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x2010,
L"myPad110 PC/SC Smart Card Reader"
},
{
0x0ca6,
L"Castles Technology Co., Ltd",
0x3050,
L"EZ710 Smart Card Reader"
},
{
0x0ca7,
L"Information Systems Laboratories",
0x0,
L"0"
},
{
0x0cad,
L"Motorola CGISS",
0x1007,
L"APX Series Consolette"
},
{
0x0cad,
L"Motorola CGISS",
0x1020,
L"MOTOTRBO Series Radio (Portable)"
},
{
0x0cad,
L"Motorola CGISS",
0x1030,
L"APX Series Radio (Portable)"
},
{
0x0cad,
L"Motorola CGISS",
0x1031,
L"APX Series Radio (Mobile)"
},
{
0x0cad,
L"Motorola CGISS",
0x1602,
L"IMPRES Battery Data Reader"
},
{
0x0cad,
L"Motorola CGISS",
0x9001,
L"PowerPad Pocket PC Device"
},
{
0x0cae,
L"Ascom Business Systems, Ltd",
0x0,
L"0"
},
{
0x0caf,
L"Buslink",
0x2507,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x0caf,
L"Buslink",
0x2515,
L"Flash Disk Embedded Hub"
},
{
0x0caf,
L"Buslink",
0x2516,
L"Flash Disk Security Device"
},
{
0x0caf,
L"Buslink",
0x2517,
L"Flash Disk Mass Storage Device"
},
{
0x0caf,
L"Buslink",
0x25c7,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x0caf,
L"Buslink",
0x3a00,
L"Hard Drive"
},
{
0x0caf,
L"Buslink",
0x3a20,
L"Mass Storage Device"
},
{
0x0caf,
L"Buslink",
0x3acd,
L"Mass Storage Device"
},
{
0x0cb0,
L"Flying Pig Systems",
0x0,
L"0"
},
{
0x0cb1,
L"Innovonics, Inc.",
0x0,
L"0"
},
{
0x0cb6,
L"Celestix Networks, Pte., Ltd",
0x0,
L"0"
},
{
0x0cb7,
L"Singatron Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0cb8,
L"Opticis Co., Ltd",
0x0,
L"0"
},
{
0x0cba,
L"Trust Electronic (Shanghai) Co., Ltd",
0x0,
L"0"
},
{
0x0cbb,
L"Shanghai Darong Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0cbc,
L"Palmax Technology Co., Ltd",
0x0101,
L"Pocket PC P6C"
},
{
0x0cbc,
L"Palmax Technology Co., Ltd",
0x0201,
L"Personal Digital Assistant"
},
{
0x0cbc,
L"Palmax Technology Co., Ltd",
0x0301,
L"Personal Digital Assistant P6M+"
},
{
0x0cbc,
L"Palmax Technology Co., Ltd",
0x0401,
L"Pocket PC"
},
{
0x0cbd,
L"Pentel Co., Ltd (Electronics Equipment Div.)",
0x0,
L"0"
},
{
0x0cbe,
L"Keryx Technologies, Inc.",
0x0,
L"0"
},
{
0x0cbf,
L"Union Genius Computer Co., Ltd",
0x0,
L"0"
},
{
0x0cc0,
L"Kuon Yi Industrial Corp.",
0x0,
L"0"
},
{
0x0cc1,
L"Given Imaging, Ltd",
0x0,
L"0"
},
{
0x0cc2,
L"Timex Corp.",
0x0,
L"0"
},
{
0x0cc3,
L"Rimage Corp.",
0x0,
L"0"
},
{
0x0cc4,
L"emsys GmbH",
0x0,
L"0"
},
{
0x0cc5,
L"Sendo",
0x0,
L"0"
},
{
0x0cc6,
L"Intermagic Corp.",
0x0,
L"0"
},
{
0x0cc8,
L"Technotools Corp.",
0x0,
L"0"
},
{
0x0cc9,
L"BroadMAX Technologies, Inc.",
0x0,
L"0"
},
{
0x0cca,
L"Amphenol",
0x0,
L"0"
},
{
0x0ccb,
L"SKNet Co., Ltd",
0x0,
L"0"
},
{
0x0ccc,
L"Domex Technology Corp.",
0x0,
L"0"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0012,
L"PHASE 26"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0013,
L"PHASE 26"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0014,
L"PHASE 26"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0015,
L"Flash Update for TerraTec PHASE 26"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0021,
L"Cameo Grabster 200"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0023,
L"Mystify Claw"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0028,
L"Aureon 5.1 MkII"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0032,
L"MIDI HUBBLE"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0035,
L"Miditech Play'n Roll"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0036,
L"Cinergy 250 Audio"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0037,
L"Cinergy 250 Audio"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0038,
L"Cinergy T² DVB-T Receiver"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0039,
L"Grabster AV 400"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x003b,
L"Cinergy 400"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x003c,
L"Grabster AV 250"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0042,
L"Cinergy Hybrid T XS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0043,
L"Cinergy T XS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x004e,
L"Cinergy T XS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x004f,
L"Cinergy Analog XS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0055,
L"Cinergy T XE (Version 1, AF9005)"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x005c,
L"Cinergy T²"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0069,
L"Cinergy T XE (Version 2, AF9015)"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x006b,
L"Cinergy HT PVR (EU)"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0072,
L"Cinergy Hybrid T"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0077,
L"Aureon Dual USB"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0078,
L"Cinergy T XXS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0086,
L"Cinergy Hybrid XE"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x008e,
L"Cinergy HTC XS"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0096,
L"Grabby"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0097,
L"Cinergy T RC MKII"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0099,
L"AfaTech 9015 [Cinergy T Stick Dual]"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x00a5,
L"Cinergy Hybrid Stick"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x00a9,
L"RTL2838 DVB-T COFDM Demodulator [TerraTec Cinergy T Stick Black]"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x00b3,
L"NOXON DAB/DAB+ Stick"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x00e0,
L"NOXON DAB/DAB+ Stick V2"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0102,
L"Cinergy S2 Stick"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x0105,
L"Cinergy S2 Box"
},
{
0x0ccd,
L"TerraTec Electronic GmbH",
0x10a7,
L"TerraTec G3"
},
{
0x0cd4,
L"Bang Olufsen",
0x0101,
L"BeolinkPC2"
},
{
0x0cd5,
L"LabJack Corporation",
0x0003,
L"U3"
},
{
0x0cd5,
L"LabJack Corporation",
0x0009,
L"UE9"
},
{
0x0cd6,
L"Scheidt & Bachmann",
0x000c,
L"S&B TPU"
},
{
0x0cd6,
L"Scheidt & Bachmann",
0x000e,
L"S&B BKV"
},
{
0x0cd6,
L"Scheidt & Bachmann",
0x0011,
L"Money Coin Unit"
},
{
0x0cd7,
L"NewChip S.r.l.",
0x0,
L"0"
},
{
0x0cd8,
L"JS Digitech, Inc.",
0x2007,
L"Smart Card Reader/JSTU-9700"
},
{
0x0cd9,
L"Hitachi Shin Din Cable, Ltd",
0x0,
L"0"
},
{
0x0cde,
L"Z-Com",
0x0001,
L"XI-750 802.11b Wireless Adapter [Atmel AT76C503A]"
},
{
0x0cde,
L"Z-Com",
0x0002,
L"XI-725/726 Prism2.5 802.11b Adapter"
},
{
0x0cde,
L"Z-Com",
0x0003,
L"Sagem 802.11b Dongle"
},
{
0x0cde,
L"Z-Com",
0x0004,
L"Sagem 802.11b Dongle"
},
{
0x0cde,
L"Z-Com",
0x0005,
L"XI-735 Prism3 802.11b Adapter"
},
{
0x0cde,
L"Z-Com",
0x0006,
L"XG-300 802.11b Adapter"
},
{
0x0cde,
L"Z-Com",
0x0008,
L"XG-703A 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x0cde,
L"Z-Com",
0x0009,
L"(ZD1211)IEEE 802.11b+g Adapter"
},
{
0x0cde,
L"Z-Com",
0x0011,
L"ZD1211"
},
{
0x0cde,
L"Z-Com",
0x0012,
L"AR5523"
},
{
0x0cde,
L"Z-Com",
0x0013,
L"AR5523 driver (no firmware)"
},
{
0x0cde,
L"Z-Com",
0x0014,
L"NB 802.11g Wireless LAN Adapter(3887A)"
},
{
0x0cde,
L"Z-Com",
0x0015,
L"XG-705A 802.11g Wireless Adapter [Intersil ISL3887]"
},
{
0x0cde,
L"Z-Com",
0x0016,
L"NB 802.11g Wireless LAN Adapter(3887A)"
},
{
0x0cde,
L"Z-Com",
0x0018,
L"NB 802.11a/b/g Wireless LAN Adapter(3887A)"
},
{
0x0cde,
L"Z-Com",
0x001a,
L"802.11bg"
},
{
0x0cde,
L"Z-Com",
0x001c,
L"802.11b/g Wireless Network Adapter"
},
{
0x0cde,
L"Z-Com",
0x0020,
L"AG-760A 802.11abg Wireless Adapter [ZyDAS ZD1211B]"
},
{
0x0cde,
L"Z-Com",
0x0022,
L"802.11b/g/n Wireless Network Adapter"
},
{
0x0cde,
L"Z-Com",
0x0023,
L"UB81 802.11bgn"
},
{
0x0cde,
L"Z-Com",
0x0025,
L"802.11b/g/n USB Wireless Network Adapter"
},
{
0x0cde,
L"Z-Com",
0x0026,
L"UB82 802.11abgn"
},
{
0x0cde,
L"Z-Com",
0x0027,
L"Sphairon Homelink 1202 802.11n Wireless Adapter [Atheros AR9170]"
},
{
0x0ce5,
L"Validation Technologies International",
0x0003,
L"Matrix"
},
{
0x0ce9,
L"Pico Technology",
0x1001,
L"PicoScope3000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1007,
L"PicoScope 2000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1008,
L"PicoScope 5000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1009,
L"PicoScope 4000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x100e,
L"PicoScope 6000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1012,
L"PicoScope 3000A series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1016,
L"PicoScope 2000A series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1018,
L"PicoScope 4000A series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1200,
L"PicoScope 2000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1201,
L"PicoScope 3000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1202,
L"PicoScope 4000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1203,
L"PicoScope 5000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1204,
L"PicoScope 6000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1211,
L"PicoScope 3000 series PC Oscilloscope"
},
{
0x0ce9,
L"Pico Technology",
0x1212,
L"PicoScope 4000 series PC Oscilloscope"
},
{
0x0cf1,
L"e-Conn Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0cf2,
L"ENE Technology, Inc.",
0x6220,
L"SD Card Reader (SG361)"
},
{
0x0cf2,
L"ENE Technology, Inc.",
0x6225,
L"SD card reader (UB6225)"
},
{
0x0cf2,
L"ENE Technology, Inc.",
0x6230,
L"SD Card Reader (UB623X)"
},
{
0x0cf2,
L"ENE Technology, Inc.",
0x6250,
L"SD card reader (UB6250)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0001,
L"AR5523"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0002,
L"AR5523 (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0003,
L"AR5523"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0004,
L"AR5523 (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0005,
L"AR5523"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x0006,
L"AR5523 (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x1001,
L"Thomson TG121N [Atheros AR9001U-(2)NG]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x1002,
L"TP-Link TL-WN821N v2 / TL-WN822N v1 802.11n [Atheros AR9170]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x1006,
L"TP-Link TL-WN322G v3 / TL-WN422G v2 802.11g [Atheros AR9271]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x1010,
L"3Com 3CRUSBN275 802.11abgn Wireless Adapter [Atheros AR9170]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x20ff,
L"AR7010 (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3000,
L"AR3011 Bluetooth (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3002,
L"AR3011 Bluetooth"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3004,
L"AR3012 Bluetooth 4.0"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3005,
L"AR3011 Bluetooth"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3007,
L"AR3012 Bluetooth 4.0 (no firmware)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x3008,
L"Bluetooth (AR3011)"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x311f,
L"AR3012 Bluetooth"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x7015,
L"TP-Link TL-WN821N v3 / TL-WN822N v2 802.11n [Atheros AR7010+AR9287]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x9170,
L"AR9170 802.11n"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0x9271,
L"AR9271 802.11n"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0xb002,
L"Ubiquiti WiFiStation 802.11n [Atheros AR9271]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0xb003,
L"Ubiquiti WiFiStationEXT 802.11n [Atheros AR9271]"
},
{
0x0cf3,
L"Qualcomm Atheros Communications",
0xe006,
L"Dell Wireless 1802 Bluetooth 4.0 LE"
},
{
0x0cf4,
L"Fomtex Corp.",
0x0,
L"0"
},
{
0x0cf5,
L"Cellink Co., Ltd",
0x0,
L"0"
},
{
0x0cf6,
L"Compucable Corp.",
0x0,
L"0"
},
{
0x0cf7,
L"ishoni Networks",
0x0,
L"0"
},
{
0x0cf8,
L"Clarisys, Inc.",
0x0750,
L"Claritel-i750 - vp"
},
{
0x0cf9,
L"Central System Research Co., Ltd",
0x0,
L"0"
},
{
0x0cfa,
L"Inviso, Inc.",
0x0,
L"0"
},
{
0x0cfc,
L"Minolta-QMS, Inc.",
0x2301,
L"Magicolor 2300 DL"
},
{
0x0cfc,
L"Minolta-QMS, Inc.",
0x2350,
L"Magicolor 2350EN/3300"
},
{
0x0cfc,
L"Minolta-QMS, Inc.",
0x3100,
L"Magicolor 3100"
},
{
0x0cfc,
L"Minolta-QMS, Inc.",
0x7300,
L"Magicolor 5450/5550"
},
{
0x0cff,
L"SAFA MEDIA Co., Ltd.",
0x0320,
L"SR-380N"
},
{
0x0d06,
L"telos EDV Systementwicklung GmbH",
0x0,
L"0"
},
{
0x0d08,
L"UTStarcom",
0x0602,
L"DV007 [serial]"
},
{
0x0d08,
L"UTStarcom",
0x0603,
L"DV007 [storage]"
},
{
0x0d0b,
L"Contemporary Controls",
0x0,
L"0"
},
{
0x0d0c,
L"Astron Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0d0d,
L"MKNet Corp.",
0x0,
L"0"
},
{
0x0d0e,
L"Hybrid Networks, Inc.",
0x0,
L"0"
},
{
0x0d0f,
L"Feng Shin Cable Co., Ltd",
0x0,
L"0"
},
{
0x0d10,
L"Elastic Networks",
0x0001,
L"StormPort (WDM)"
},
{
0x0d11,
L"Maspro Denkoh Corp.",
0x0,
L"0"
},
{
0x0d12,
L"Hansol Electronics, Inc.",
0x0,
L"0"
},
{
0x0d13,
L"BMF Corp.",
0x0,
L"0"
},
{
0x0d14,
L"Array Comm, Inc.",
0x0,
L"0"
},
{
0x0d15,
L"OnStream b.v.",
0x0,
L"0"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0001,
L"PhotoShuttle"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0002,
L"Photo Printer 730 series"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0004,
L"Photo Printer 63xPL/PS"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x000e,
L"P910L"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0100,
L"Photo Printer 63xPL/PS"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0102,
L"Photo Printer 64xPS"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0103,
L"Photo Printer 730 series"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0104,
L"Photo Printer 63xPL/PS"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0105,
L"Photo Printer 64xPS"
},
{
0x0d16,
L"Hi-Touch Imaging Technologies Co., Ltd",
0x0200,
L"Photo Printer 64xDL"
},
{
0x0d17,
L"NALTEC, Inc.",
0x0,
L"0"
},
{
0x0d18,
L"coaXmedia",
0x0,
L"0"
},
{
0x0d19,
L"Hank Connection Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0d28,
L"NXP",
0x0204,
L"ARM mbed"
},
{
0x0d32,
L"Leo Hui Electric Wire & Cable Co., Ltd",
0x0,
L"0"
},
{
0x0d33,
L"AirSpeak, Inc.",
0x0,
L"0"
},
{
0x0d34,
L"Rearden Steel Technologies",
0x0,
L"0"
},
{
0x0d35,
L"Dah Kun Co., Ltd",
0x0,
L"0"
},
{
0x0d3a,
L"Posiflex Technologies, Inc.",
0x0206,
L"Series 3xxx Cash Drawer"
},
{
0x0d3a,
L"Posiflex Technologies, Inc.",
0x0207,
L"Series 3xxx Cash Drawer"
},
{
0x0d3a,
L"Posiflex Technologies, Inc.",
0x0500,
L"Magnetic Stripe Reader"
},
{
0x0d3c,
L"Sri Cable Technology, Ltd",
0x0,
L"0"
},
{
0x0d3d,
L"Tangtop Technology Co., Ltd",
0x0001,
L"HID Keyboard"
},
{
0x0d3d,
L"Tangtop Technology Co., Ltd",
0x0040,
L"PS/2 Adapter"
},
{
0x0d3e,
L"Fitcom, inc.",
0x0,
L"0"
},
{
0x0d3f,
L"MTS Systems Corp.",
0x0,
L"0"
},
{
0x0d40,
L"Ascor, Inc.",
0x0,
L"0"
},
{
0x0d41,
L"Ta Yun Terminals Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0d42,
L"Full Der Co., Ltd",
0x0,
L"0"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x2012,
L"KAAN Standard Plus (Smartcard reader)"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x3003,
L"mIDentity Light / KAAN SIM III"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x3014,
L"Smart Token"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x4000,
L"mIDentity (mass storage)"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x4001,
L"mIDentity Basic/Classic (composite device)"
},
{
0x0d46,
L"Kobil Systems GmbH",
0x4081,
L"mIDentity Basic/Classic (installationless)"
},
{
0x0d48,
L"Promethean Limited",
0x0001,
L"ACTIVboard"
},
{
0x0d48,
L"Promethean Limited",
0x0004,
L"ACTIVboard"
},
{
0x0d48,
L"Promethean Limited",
0x0100,
L"Audio"
},
{
0x0d49,
L"Maxtor",
0x3000,
L"Drive"
},
{
0x0d49,
L"Maxtor",
0x3010,
L"3000LE Drive"
},
{
0x0d49,
L"Maxtor",
0x3100,
L"Hi-Speed USB-IDE Bridge Controller"
},
{
0x0d49,
L"Maxtor",
0x3200,
L"Personal Storage 3200"
},
{
0x0d49,
L"Maxtor",
0x5000,
L"5000XT Drive"
},
{
0x0d49,
L"Maxtor",
0x5010,
L"5000LE Drive"
},
{
0x0d49,
L"Maxtor",
0x5020,
L"Mobile Hard Disk Drive"
},
{
0x0d49,
L"Maxtor",
0x7000,
L"OneTouch"
},
{
0x0d49,
L"Maxtor",
0x7010,
L"OneTouch"
},
{
0x0d49,
L"Maxtor",
0x7100,
L"OneTouch II 300GB External Hard Disk"
},
{
0x0d49,
L"Maxtor",
0x7310,
L"OneTouch 4"
},
{
0x0d49,
L"Maxtor",
0x7410,
L"Mobile Hard Disk Drive (1TB)"
},
{
0x0d49,
L"Maxtor",
0x7450,
L"Basics Portable USB Device"
},
{
0x0d4a,
L"NF Corp.",
0x0,
L"0"
},
{
0x0d4b,
L"Grape Systems, Inc.",
0x0,
L"0"
},
{
0x0d4c,
L"Tedas AG",
0x0,
L"0"
},
{
0x0d4d,
L"Coherent, Inc.",
0x0,
L"0"
},
{
0x0d4e,
L"Agere Systems Netherland BV",
0x047a,
L"WLAN Card"
},
{
0x0d4e,
L"Agere Systems Netherland BV",
0x1000,
L"Wireless Card Model 0801"
},
{
0x0d4e,
L"Agere Systems Netherland BV",
0x1001,
L"Wireless Card Model 0802"
},
{
0x0d4f,
L"EADS Airbus France",
0x0,
L"0"
},
{
0x0d50,
L"Cleware GmbH",
0x0011,
L"USB-Temp2 Thermometer"
},
{
0x0d50,
L"Cleware GmbH",
0x0040,
L"F4 foot switch"
},
{
0x0d51,
L"Volex (Asia) Pte., Ltd",
0x0,
L"0"
},
{
0x0d53,
L"HMI Co., Ltd",
0x0,
L"0"
},
{
0x0d54,
L"Holon Corp.",
0x0,
L"0"
},
{
0x0d55,
L"ASKA Technologies, Inc.",
0x0,
L"0"
},
{
0x0d56,
L"AVLAB Technology, Inc.",
0x0,
L"0"
},
{
0x0d57,
L"Solomon Microtech, Ltd",
0x0,
L"0"
},
{
0x0d5c,
L"SMC Networks, Inc.",
0xa001,
L"SMC2662W (v1) EZ Connect 802.11b Wireless Adapter [Atmel AT76C503A]"
},
{
0x0d5c,
L"SMC Networks, Inc.",
0xa002,
L"SMC2662W v2 / SMC2662W-AR / Belkin F5D6050 [Atmel at76c503a]"
},
{
0x0d5e,
L"Myacom, Ltd",
0x2346,
L"BT Digital Access adapter"
},
{
0x0d5f,
L"CSI, Inc.",
0x0,
L"0"
},
{
0x0d60,
L"IVL Technologies, Ltd",
0x0,
L"0"
},
{
0x0d61,
L"Meilu Electronics (Shenzhen) Co., Ltd",
0x0,
L"0"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x0003,
L"Smartcard Reader"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x0004,
L"Keyboard"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x001b,
L"Keyboard"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x001c,
L"Benq X120 Internet Keyboard Pro"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x0306,
L"M530 Mouse"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x0800,
L"Magic Wheel"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x2021,
L"AM805 Keyboard"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x2026,
L"TECOM Bluetooth Device"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x2050,
L"Mouse"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0x2106,
L"Dell L20U Multimedia Keyboard"
},
{
0x0d62,
L"Darfon Electronics Corp.",
0xa100,
L"Optical Mouse"
},
{
0x0d63,
L"Fritz Gegauf AG",
0x0,
L"0"
},
{
0x0d64,
L"DXG Technology Corp.",
0x0105,
L"Dual Mode Digital Camera 1.3M"
},
{
0x0d64,
L"DXG Technology Corp.",
0x0107,
L"Horus MT-409 Camera"
},
{
0x0d64,
L"DXG Technology Corp.",
0x0108,
L"Dual Mode Digital Camera"
},
{
0x0d64,
L"DXG Technology Corp.",
0x0202,
L"Dual Mode Video Camera Device"
},
{
0x0d64,
L"DXG Technology Corp.",
0x0303,
L"DXG-305V Camera"
},
{
0x0d64,
L"DXG Technology Corp.",
0x1001,
L"SiPix Stylecam/UMAX AstraPix 320s"
},
{
0x0d64,
L"DXG Technology Corp.",
0x1002,
L"Fashion Cam 01 Dual-Mode DSC (Video Camera)"
},
{
0x0d64,
L"DXG Technology Corp.",
0x1003,
L"Fashion Cam Dual-Mode DSC (Controller)"
},
{
0x0d64,
L"DXG Technology Corp.",
0x1021,
L"D-Link DSC 350F"
},
{
0x0d64,
L"DXG Technology Corp.",
0x1208,
L"Dual Mode Still Camera Device"
},
{
0x0d64,
L"DXG Technology Corp.",
0x2208,
L"Mass Storage"
},
{
0x0d64,
L"DXG Technology Corp.",
0x3105,
L"Dual Mode Digital Camera Disk"
},
{
0x0d64,
L"DXG Technology Corp.",
0x3108,
L"Digicam Mass Storage Device"
},
{
0x0d64,
L"DXG Technology Corp.",
0x5566,
L"Contour Roam Model 1600"
},
{
0x0d65,
L"KMJP Co., Ltd",
0x0,
L"0"
},
{
0x0d66,
L"TMT",
0x0,
L"0"
},
{
0x0d67,
L"Advanet, Inc.",
0x0,
L"0"
},
{
0x0d68,
L"Super Link Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0d69,
L"NSI",
0x0,
L"0"
},
{
0x0d6a,
L"Megapower International Corp.",
0x0,
L"0"
},
{
0x0d6b,
L"And-Or Logic",
0x0,
L"0"
},
{
0x0d70,
L"Try Computer Co., Ltd",
0x0,
L"0"
},
{
0x0d71,
L"Hirakawa Hewtech Corp.",
0x0,
L"0"
},
{
0x0d72,
L"Winmate Communication, Inc.",
0x0,
L"0"
},
{
0x0d73,
L"Hit's Communications, Inc.",
0x0,
L"0"
},
{
0x0d76,
L"MFP Korea, Inc.",
0x0,
L"0"
},
{
0x0d77,
L"Power Sentry/Newpoint",
0x0,
L"0"
},
{
0x0d78,
L"Japan Distributor Corp.",
0x0,
L"0"
},
{
0x0d7a,
L"MARX Datentechnik GmbH",
0x0001,
L"CrypToken"
},
{
0x0d7b,
L"Wellco Technology Co., Ltd",
0x0,
L"0"
},
{
0x0d7c,
L"Taiwan Line Tek Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x0100,
L"PS1001/1011/1006/1026 Flash Disk"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x0110,
L"Gigabyte FlexDrive"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x0120,
L"Disk Pro 64MB"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x0124,
L"GIGABYTE Disk"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x0240,
L"I/O-Magic/Transcend 6-in-1 Card Reader"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x110e,
L"NEC uPD720121/130 USB-ATA/ATAPI Bridge"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1240,
L"Apacer 6-in-1 Card Reader 2.0"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1270,
L"Wolverine SixPac 6000"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1300,
L"Flash Disk"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1320,
L"PS2031 Flash Disk"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1400,
L"Attache 256MB USB 2.0 Flash Drive"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1420,
L"PS2044 Pen Drive"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1470,
L"Vosonic X's-Drive II+ VP2160"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1620,
L"USB Disk Pro"
},
{
0x0d7d,
L"Phison Electronics Corp.",
0x1900,
L"USB Thumb Drive"
},
{
0x0d7e,
L"American Computer & Digital Components",
0x2507,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x0d7e,
L"American Computer & Digital Components",
0x2517,
L"Hi-Speed Mass Storage Device"
},
{
0x0d7e,
L"American Computer & Digital Components",
0x25c7,
L"Hi-Speed USB-to-IDE Bridge Controller"
},
{
0x0d7f,
L"Essential Reality LLC",
0x0100,
L"P5 Glove glove controller"
},
{
0x0d80,
L"H.R. Silvine Electronics, Inc.",
0x0,
L"0"
},
{
0x0d81,
L"TechnoVision",
0x0,
L"0"
},
{
0x0d83,
L"Think Outside, Inc.",
0x0,
L"0"
},
{
0x0d87,
L"Dolby Laboratories Inc.",
0x0,
L"0"
},
{
0x0d89,
L"Oz Software",
0x0,
L"0"
},
{
0x0d8a,
L"King Jim Co., Ltd",
0x0101,
L"TEPRA PRO"
},
{
0x0d8b,
L"Ascom Telecommunications, Ltd",
0x0,
L"0"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0001,
L"Audio Device"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0002,
L"Composite Device"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0003,
L"Sound Device"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0005,
L"Blue Snowball"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0006,
L"Storm HP-USB500 5.1 Headset"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x000c,
L"Audio Adapter"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x000d,
L"Composite Device"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x000e,
L"Audio Adapter (Planet UP-100, Genius G-Talk)"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0014,
L"Audio Adapter (Unitek Y-247A)"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x001f,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0102,
L"CM106 Like Sound Device"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0103,
L"CM102-A+/102S+ Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0104,
L"CM103+ Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0105,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0107,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x010f,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0115,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0139,
L"Multimedia Headset [Gigaware by Ignition L.P.]"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x013c,
L"CM108 Audio Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x0201,
L"CM6501"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x5000,
L"Mass Storage Controller"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0x5200,
L"Mass Storage Controller(0D8C,5200)"
},
{
0x0d8c,
L"C-Media Electronics, Inc.",
0xb213,
L"USB Phone CM109 (aka CT2000,VPT1000)"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0234,
L"V-234 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0550,
L"V-550 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0551,
L"V-551 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0552,
L"V-552 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0651,
L"V-651 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0652,
L"V-652 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0653,
L"V-653 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0654,
L"V-654 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0655,
L"V-655 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0656,
L"V-656 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0657,
L"V-657 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0658,
L"V-658 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0659,
L"V-659 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0660,
L"V-660 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0661,
L"V-661 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0662,
L"V-662 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0850,
L"V-850 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0851,
L"V-851 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0852,
L"V-852 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0901,
L"V-901 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0902,
L"V-902 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x0903,
L"V-903 Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0x4754,
L"Voyager DMP Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb00,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb01,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb02,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb03,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb04,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xbb05,
L"Bloomberg Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xfffe,
L"Global Tuner Composite Device"
},
{
0x0d8d,
L"Promotion & Display Technology, Ltd",
0xffff,
L"Voyager DMP Composite Device"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x0163,
L"802.11g 54 Mbps Wireless Dongle"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x1621,
L"802.11b Wireless Adapter"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x3762,
L"Cohiba 802.11g Wireless Mini adapter [Intersil ISL3887]"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x3763,
L"802.11g Wireless dongle"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7100,
L"802.11b Adapter"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7110,
L"WL-210 / WU210P 802.11b Wireless Adapter [Atmel AT76C503A]"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7605,
L"TRENDnet TEW-224UB 802.11b Wireless Adapter [Atmel AT76C503A]"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7801,
L"AR5523"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7802,
L"AR5523 (no firmware)"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7811,
L"AR5523"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7812,
L"AR5523 (no firmware)"
},
{
0x0d8e,
L"Global Sun Technology, Inc.",
0x7a01,
L"PRISM25 802.11b Adapter"
},
{
0x0d8f,
L"Pitney Bowes",
0x0,
L"0"
},
{
0x0d90,
L"Sure-Fire Electrical Corp.",
0x0,
L"0"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x0000,
L"Jenoptik JD350 video"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x3300,
L"SX330z Camera"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x4100,
L"SX410z Camera"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x4102,
L"MD 9700 Camera"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x4104,
L"Jenoptik JD-4100z3s"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x410a,
L"Medion 9801/Novatech SX-410z"
},
{
0x0d96,
L"Skanhex Technology, Inc.",
0x5200,
L"SX-520z Camera"
},
{
0x0d97,
L"Santa Barbara Instrument Group",
0x0001,
L"SBIG Astronomy Camera (without firmware)"
},
{
0x0d97,
L"Santa Barbara Instrument Group",
0x0101,
L"SBIG Astronomy Camera (with firmware)"
},
{
0x0d98,
L"Mars Semiconductor Corp.",
0x0300,
L"Avaya Wireless Card"
},
{
0x0d98,
L"Mars Semiconductor Corp.",
0x1007,
L"Discovery Kids Digital Camera"
},
{
0x0d99,
L"Trazer Technologies, Inc.",
0x0,
L"0"
},
{
0x0d9a,
L"RTX AS",
0x0001,
L"Bluetooth Device"
},
{
0x0d9b,
L"Tat Shing Electrical Co.",
0x0,
L"0"
},
{
0x0d9c,
L"Chee Chen Hi-Technology Co., Ltd",
0x0,
L"0"
},
{
0x0d9d,
L"Sanwa Supply, Inc.",
0x0,
L"0"
},
{
0x0d9e,
L"Avaya",
0x0300,
L"Wireless Card"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x0001,
L"Uninterruptible Power Supply"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x0002,
L"Black Knight PRO / WOW Uninterruptible Power Supply (Cypress HID->COM RS232)"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x00a2,
L"Imperial Uninterruptible Power Supply (HID PDC)"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x00a3,
L"Smart King PRO Uninterruptible Power Supply (HID PDC)"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x00a4,
L"WOW Uninterruptible Power Supply (HID PDC)"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x00a5,
L"Vanguard Uninterruptible Power Supply (HID PDC)"
},
{
0x0d9f,
L"Powercom Co., Ltd",
0x00a6,
L"Black Knight PRO Uninterruptible Power Supply (HID PDC)"
},
{
0x0da0,
L"Danger Research",
0x0,
L"0"
},
{
0x0da1,
L"Suzhou Peter's Precise Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0da2,
L"Land Instruments International, Ltd",
0x0,
L"0"
},
{
0x0da3,
L"Nippon Electro-Sensory Devices Corp.",
0x0,
L"0"
},
{
0x0da4,
L"Polar Electro Oy",
0x0001,
L"Interface"
},
{
0x0da4,
L"Polar Electro Oy",
0x0008,
L"Loop"
},
{
0x0da7,
L"IOGear, Inc.",
0x0,
L"0"
},
{
0x0da8,
L"softDSP Co., Ltd",
0x0001,
L"SDS 200A Oscilloscope"
},
{
0x0dab,
L"Cubig Group",
0x0100,
L"DVR/CVR-M140 MP3 Player"
},
{
0x0dad,
L"Westover Scientific",
0x0,
L"0"
},
{
0x0db0,
L"Micro Star International",
0x1020,
L"PC2PC WLAN Card"
},
{
0x0db0,
L"Micro Star International",
0x1967,
L"Bluetooth Dongle"
},
{
0x0db0,
L"Micro Star International",
0x3713,
L"Primo 73"
},
{
0x0db0,
L"Micro Star International",
0x3801,
L"Motorola Bluetooth 2.1+EDR Device"
},
{
0x0db0,
L"Micro Star International",
0x3870,
L"MS-3870 802.11bgn Wireless Module [Ralink RT3070]"
},
{
0x0db0,
L"Micro Star International",
0x3871,
L"MS-3871 802.11bgn Wireless Module [Ralink RT8070]"
},
{
0x0db0,
L"Micro Star International",
0x4011,
L"Medion Flash XL V2.0 Card Reader"
},
{
0x0db0,
L"Micro Star International",
0x4023,
L"Lexar Mobile Card Reader"
},
{
0x0db0,
L"Micro Star International",
0x4600,
L"802.11b/g Turbo Wireless Adapter"
},
{
0x0db0,
L"Micro Star International",
0x5501,
L"Mass Storage Device"
},
{
0x0db0,
L"Micro Star International",
0x5502,
L"Mass Storage Device"
},
{
0x0db0,
L"Micro Star International",
0x5513,
L"MP3 Player"
},
{
0x0db0,
L"Micro Star International",
0x5515,
L"MP3 Player"
},
{
0x0db0,
L"Micro Star International",
0x5516,
L"MP3 Player"
},
{
0x0db0,
L"Micro Star International",
0x5580,
L"Mega Sky 580 DVB-T Tuner [M902x]"
},
{
0x0db0,
L"Micro Star International",
0x5581,
L"Mega Sky 580 DVB-T Tuner [GL861]"
},
{
0x0db0,
L"Micro Star International",
0x6823,
L"UB11B/MS-6823 802.11b Wi-Fi adapter"
},
{
0x0db0,
L"Micro Star International",
0x6826,
L"IEEE 802.11g Wireless Network Adapter"
},
{
0x0db0,
L"Micro Star International",
0x6855,
L"Bluetooth Device"
},
{
0x0db0,
L"Micro Star International",
0x6861,
L"MSI-6861 802.11g WiFi adapter"
},
{
0x0db0,
L"Micro Star International",
0x6865,
L"RT2570"
},
{
0x0db0,
L"Micro Star International",
0x6869,
L"RT2570"
},
{
0x0db0,
L"Micro Star International",
0x6874,
L"RT2573"
},
{
0x0db0,
L"Micro Star International",
0x6877,
L"RT2573"
},
{
0x0db0,
L"Micro Star International",
0x6881,
L"Bluetooth Class I EDR Device"
},
{
0x0db0,
L"Micro Star International",
0x688a,
L"Bluetooth Class I EDR Device"
},
{
0x0db0,
L"Micro Star International",
0x6899,
L"802.11bgn 1T1R Mini Card Wireless Adapter"
},
{
0x0db0,
L"Micro Star International",
0x6970,
L"MS-6970 BToes Bluetooth adapter"
},
{
0x0db0,
L"Micro Star International",
0x697a,
L"Bluetooth Dongle"
},
{
0x0db0,
L"Micro Star International",
0x6982,
L"Medion Flash XL Card Reader"
},
{
0x0db0,
L"Micro Star International",
0xa861,
L"RT2573"
},
{
0x0db0,
L"Micro Star International",
0xa874,
L"RT2573"
},
{
0x0db0,
L"Micro Star International",
0xa970,
L"Bluetooth dongle"
},
{
0x0db0,
L"Micro Star International",
0xa97a,
L"Bluetooth EDR Device"
},
{
0x0db0,
L"Micro Star International",
0xb970,
L"Bluetooth EDR Device"
},
{
0x0db0,
L"Micro Star International",
0xb97a,
L"Bluetooth EDR Device"
},
{
0x0db1,
L"Wen Te Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0db2,
L"Shian Hwi Plug Parts, Plastic Factory",
0x0,
L"0"
},
{
0x0db3,
L"Tekram Technology Co., Ltd",
0x0,
L"0"
},
{
0x0db4,
L"Chung Fu Chen Yeh Enterprise Corp.",
0x0,
L"0"
},
{
0x0db5,
L"Access IS",
0x0139,
L"Barcode Module - CDC serial"
},
{
0x0db5,
L"Access IS",
0x013a,
L"Barcode Module - Virtual Keyboard"
},
{
0x0db5,
L"Access IS",
0x013b,
L"Barcode Module - HID"
},
{
0x0db5,
L"Access IS",
0x0160,
L"NFC and Smartcard Module (NSM)"
},
{
0x0db7,
L"ELCON Systemtechnik",
0x0002,
L"Goldpfeil P-LAN"
},
{
0x0dba,
L"Digidesign",
0x1000,
L"Mbox 1 [Mbox]"
},
{
0x0dba,
L"Digidesign",
0x3000,
L"Mbox 2"
},
{
0x0dba,
L"Digidesign",
0xb011,
L"Eleven Rack"
},
{
0x0dbc,
L"A&D Medical",
0x0003,
L"AND Serial Cable [AND Smart Cable]"
},
{
0x0dbe,
L"Jiuh Shiuh Precision Industry Co., Ltd",
0x0,
L"0"
},
{
0x0dbf,
L"Jess-Link International",
0x0002,
L"SmartDongle Security Key"
},
{
0x0dbf,
L"Jess-Link International",
0x0200,
L"HDD Storage Solution"
},
{
0x0dbf,
L"Jess-Link International",
0x021b,
L"USB-2.0 IDE Adapter"
},
{
0x0dbf,
L"Jess-Link International",
0x0300,
L"Storage Adapter"
},
{
0x0dbf,
L"Jess-Link International",
0x0333,
L"Storage Adapter"
},
{
0x0dbf,
L"Jess-Link International",
0x0502,
L"FSC Storagebird XL hard disk"
},
{
0x0dbf,
L"Jess-Link International",
0x0707,
L"ZIV Drive"
},
{
0x0dc0,
L"G7 Solutions (formerly Great Notions)",
0x0,
L"0"
},
{
0x0dc1,
L"Tamagawa Seiki Co., Ltd",
0x0,
L"0"
},
{
0x0dc3,
L"Athena Smartcard Solutions, Inc.",
0x0801,
L"ASEDrive III"
},
{
0x0dc3,
L"Athena Smartcard Solutions, Inc.",
0x0802,
L"ASEDrive IIIe"
},
{
0x0dc3,
L"Athena Smartcard Solutions, Inc.",
0x1104,
L"ASEDrive IIIe KB"
},
{
0x0dc3,
L"Athena Smartcard Solutions, Inc.",
0x1701,
L"ASEKey"
},
{
0x0dc3,
L"Athena Smartcard Solutions, Inc.",
0x1702,
L"ASEKey"
},
{
0x0dc4,
L"inXtron, Inc.",
0x0040,
L"Mass Storage Device"
},
{
0x0dc4,
L"inXtron, Inc.",
0x0041,
L"Mass Storage Device"
},
{
0x0dc4,
L"inXtron, Inc.",
0x0042,
L"Mass Storage Device"
},
{
0x0dc4,
L"inXtron, Inc.",
0x0101,
L"Hi-Speed Mass Storage Device"
},
{
0x0dc4,
L"inXtron, Inc.",
0x0209,
L"SK-3500 S2"
},
{
0x0dc4,
L"inXtron, Inc.",
0x020a,
L"Oyen Digital MiniPro 2.5 hard drive enclosure"
},
{
0x0dc5,
L"SDK Co., Ltd",
0x0,
L"0"
},
{
0x0dc6,
L"Precision Squared Technology Corp.",
0x2301,
L"Wireless Touchpad Keyboard"
},
{
0x0dc7,
L"First Cable Line, Inc.",
0x0,
L"0"
},
{
0x0dcd,
L"NetworkFab Corp.",
0x0001,
L"Remote Interface Adapter"
},
{
0x0dcd,
L"NetworkFab Corp.",
0x0002,
L"High Bandwidth Codec"
},
{
0x0dd0,
L"Access Solutions",
0x1002,
L"Triple Talk Speech Synthesizer"
},
{
0x0dd1,
L"Contek Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0dd2,
L"Power Quotient International Co., Ltd",
0x0003,
L"Mass Storage (P)"
},
{
0x0dd3,
L"MediaQ",
0x0,
L"0"
},
{
0x0dd4,
L"Custom Engineering SPA",
0x0,
L"0"
},
{
0x0dd5,
L"California Micro Devices",
0x0,
L"0"
},
{
0x0dd7,
L"Kocom Co., Ltd",
0x0,
L"0"
},
{
0x0dd8,
L"Netac Technology Co., Ltd",
0x1060,
L"USB-CF-Card"
},
{
0x0dd8,
L"Netac Technology Co., Ltd",
0xe007,
L"OnlyDisk U222 Pendrive"
},
{
0x0dd8,
L"Netac Technology Co., Ltd",
0xf607,
L"OnlyDisk U208 1G flash drive [U-SAFE]"
},
{
0x0dd9,
L"HighSpeed Surfing",
0x0,
L"0"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0001,
L"Multi-Card Reader 6in1"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0002,
L"Multi-Card Reader 7in1"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0003,
L"Flash Disk"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0005,
L"Internal Multi-Card Reader 6in1"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0008,
L"SD single card reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0009,
L"MS single card reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x000a,
L"MS+SD Dual Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x000b,
L"SM single card reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0101,
L"All-In-One Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0102,
L"All-In-One Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0301,
L"MP3 Player"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x0302,
L"Multi-Card MP3 Player"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x1001,
L"Multi-Flash Disk"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2001,
L"Multi-Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2002,
L"Q018 default PID"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2003,
L"Multi-Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2005,
L"Datalux DLX-1611 16in1 Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2006,
L"All-In-One Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2007,
L"USB to ATAPI bridge"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2008,
L"All-In-One Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2013,
L"SD/MS Combo Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2014,
L"SD/MS Single Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2023,
L"card reader SD/MS DEMO board with ICSI brand name (MaskROM version)"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2024,
L"card reader SD/MS DEMO board with Generic brand name (MaskROM version)"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2026,
L"USB2.0 Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2027,
L"USB 2.0 Card Reader"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2315,
L"UFD MP3 player (model 2)"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2318,
L"UFD MP3 player (model 1)"
},
{
0x0dda,
L"Integrated Circuit Solution, Inc.",
0x2321,
L"UFD MP3 player"
},
{
0x0ddb,
L"Tamarack, Inc.",
0x0,
L"0"
},
{
0x0ddd,
L"Datelink Technology Co., Ltd",
0x0,
L"0"
},
{
0x0dde,
L"Ubicom, Inc.",
0x0,
L"0"
},
{
0x0de0,
L"BD Consumer Healthcare",
0x0,
L"0"
},
{
0x0de7,
L"USBmicro",
0x0191,
L"U401 Interface card"
},
{
0x0de7,
L"USBmicro",
0x01a5,
L"U421 interface card"
},
{
0x0de7,
L"USBmicro",
0x01c3,
L"U451 relay interface card"
},
{
0x0dea,
L"UTECH Electronic (D.G.) Co., Ltd.",
0x0,
L"0"
},
{
0x0ded,
L"Novasonics",
0x0,
L"0"
},
{
0x0dee,
L"Lifetime Memory Products",
0x4010,
L"Storage Adapter"
},
{
0x0def,
L"Full Rise Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0df4,
L"NET&SYS",
0x0201,
L"MNG-2005"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0001,
L"C-Media VOIP Device"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0004,
L"Bluetooth 2.0 Adapter 100m"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0007,
L"Bluetooth 2.0 Adapter 10m"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x000b,
L"Bluetooth 2.0 Adapter DFU"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x000d,
L"WL-168 Wireless Network Adapter 54g"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0017,
L"WL-182 Wireless-N Network USB Card"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0019,
L"Bluetooth 2.0 adapter 10m CN-512v2 001"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x001a,
L"Bluetooth 2.0 adapter 100m CN-521v2 001 "
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x002b,
L"WL-188 Wireless Network 300N USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x002c,
L"WL-301 Wireless Network 300N USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x002d,
L"WL-302 Wireless Network 300N USB dongle "
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0036,
L"WL-603 Wireless Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0039,
L"WL-315 Wireless-N USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x003b,
L"WL-321 Wireless USB Gaming Adapter 300N"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x003c,
L"WL-323 Wireless-N USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x003d,
L"WL-324 Wireless USB Adapter 300N"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x003e,
L"WL-343 Wireless USB Adapter 150N X1"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x003f,
L"WL-608 Wireless USB Adapter 54g"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0040,
L"WL-344 Wireless Adapter 300N X2 [Ralink RT3071]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0041,
L"WL-329 Wireless Dualband USB adapter 300N"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0042,
L"WL-345 Wireless USB adapter 300N X3"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0045,
L"WL-353 Wireless USB Adapter 150N Nano"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0047,
L"WL-352v1 Wireless USB Adapter 300N 002"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0048,
L"WL-349v1 Wireless Adapter 150N 002 [Ralink RT3070]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0049,
L"WL-356 Wireless Adapter 300N"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x004a,
L"WL-358v1 Wireless Micro USB Adapter 300N X3 002"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x004b,
L"WL-349v3 Wireless Micro Adapter 150N X1 [Realtek RTL8192SU]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x004c,
L"WL-352 802.11n Adapter [Realtek RTL8191SU]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0050,
L"WL-349v4 Wireless Micro Adapter 150N X1 [Ralink RT3370]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0056,
L"LN-031 10/100/1000 Ethernet Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x005d,
L"WLA-2000 v1.001 WLAN [RTL8191SU]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0060,
L"WLA-4000 802.11bgn [Ralink RT3072]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0062,
L"WLA-5000 802.11abgn [Ralink RT3572]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x006f,
L"WLA-5100"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x0072,
L"AX88179 Gigabit Ethernet [Sitecom]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x061c,
L"LN-028 Network USB 2.0 Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x214a,
L"IDE/SATA Combo Adapter [CN-330]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x21f4,
L"44 St Bluetooth Device"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x2200,
L"Sitecom bluetooth2.0 class 2 dongle CN-512"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x2208,
L"Sitecom bluetooth2.0 class 2 dongle CN-520"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x2209,
L"Sitecom bluetooth2.0 class 1 dongle CN-521"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x3068,
L"DC-104v2 ISDN Adapter [HFC-S]"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x9071,
L"WL-113 rev 1 Wireless Network USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x9075,
L"WL-117 Hi-Speed USB Adapter"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x90ac,
L"WL-172 Wireless Network USB Adapter 54g Turbo"
},
{
0x0df6,
L"Sitecom Europe B.V.",
0x9712,
L"WL-113 rev 2 Wireless Network USB Adapter"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0620,
L"MA-620 Infrared Adapter"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0700,
L"MA-700 Bluetooth Adapter"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0720,
L"MA-720 Bluetooth Adapter"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0722,
L"Bluetooth Dongle"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0730,
L"MA-730/MA-730G Bluetooth Adapter"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0800,
L"Data Cable"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0820,
L"Data Cable"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x0900,
L"MA i-gotU Travel Logger GPS"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x1800,
L"Generic Card Reader"
},
{
0x0df7,
L"Mobile Action Technology, Inc.",
0x1802,
L"Card Reader"
},
{
0x0dfa,
L"Toyo Communication Equipment Co., Ltd",
0x0,
L"0"
},
{
0x0dfc,
L"GeneralTouch Technology Co., Ltd",
0x0001,
L"Touchscreen"
},
{
0x0dfc,
L"GeneralTouch Technology Co., Ltd",
0x0101,
L"5-point Touch Screen"
},
{
0x0e03,
L"Nippon Systemware Co., Ltd",
0x0,
L"0"
},
{
0x0e08,
L"Winbest Technology Co., Ltd",
0x0,
L"0"
},
{
0x0e0b,
L"Amigo Technology Inc.",
0x9031,
L"802.11n Wireless USB Card"
},
{
0x0e0b,
L"Amigo Technology Inc.",
0x9041,
L"802.11n Wireless USB Card"
},
{
0x0e0c,
L"Gesytec",
0x0101,
L"LonUSB LonTalk Network Adapter"
},
{
0x0e0d,
L"PicoQuant GmbH",
0x0003,
L"PicoHarp 300"
},
{
0x0e0f,
L"VMware, Inc.",
0x0001,
L"Device"
},
{
0x0e0f,
L"VMware, Inc.",
0x0002,
L"Virtual USB Hub"
},
{
0x0e0f,
L"VMware, Inc.",
0x0003,
L"Virtual Mouse"
},
{
0x0e0f,
L"VMware, Inc.",
0x0004,
L"Virtual CCID"
},
{
0x0e0f,
L"VMware, Inc.",
0x0005,
L"Virtual Mass Storage"
},
{
0x0e0f,
L"VMware, Inc.",
0x0006,
L"Virtual Keyboard"
},
{
0x0e0f,
L"VMware, Inc.",
0x8001,
L"Root Hub"
},
{
0x0e0f,
L"VMware, Inc.",
0x8002,
L"Root Hub"
},
{
0x0e0f,
L"VMware, Inc.",
0x8003,
L"Root Hub"
},
{
0x0e0f,
L"VMware, Inc.",
0xf80a,
L"Smoker FX2"
},
{
0x0e16,
L"JMTek, LLC",
0x0,
L"0"
},
{
0x0e17,
L"Walex Electronic, Ltd",
0x0,
L"0"
},
{
0x0e1a,
L"Unisys",
0x0,
L"0"
},
{
0x0e1b,
L"Crewave",
0x0,
L"0"
},
{
0x0e20,
L"Pegasus Technologies Ltd.",
0x0101,
L"NoteTaker"
},
{
0x0e20,
L"Pegasus Technologies Ltd.",
0x0200,
L"Seiko Instruments InkLink Handwriting System"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0300,
L"iAudio CW200"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0400,
L"MP3 Player"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0500,
L"iAudio M3"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0510,
L"iAudio X5, subpack USB port"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0513,
L"iAudio X5, side USB port"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0520,
L"iAudio M5, side USB port"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0601,
L"iAudio G3"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0681,
L"iAUDIO E2"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0700,
L"iAudio U3"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0751,
L"iAudio 7"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0760,
L"iAUDIO U5 / iAUDIO G2"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0800,
L"Cowon D2 (UMS mode)"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0801,
L"Cowon D2 (MTP mode)"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0910,
L"iAUDIO 9"
},
{
0x0e21,
L"Cowon Systems, Inc.",
0x0920,
L"J3"
},
{
0x0e22,
L"Symbian Ltd.",
0x0,
L"0"
},
{
0x0e23,
L"Liou Yuane Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0e25,
L"VinChip Systems, Inc.",
0x0,
L"0"
},
{
0x0e26,
L"J-Phone East Co., Ltd",
0x0,
L"0"
},
{
0x0e30,
L"HeartMath LLC",
0x0,
L"0"
},
{
0x0e34,
L"Micro Computer Control Corp.",
0x0,
L"0"
},
{
0x0e35,
L"3Pea Technologies, Inc.",
0x0,
L"0"
},
{
0x0e36,
L"TiePie engineering",
0x0009,
L"Handyscope HS3"
},
{
0x0e36,
L"TiePie engineering",
0x000b,
L"Handyscope HS4"
},
{
0x0e36,
L"TiePie engineering",
0x000f,
L"Handyscope HS4-DIFF (br)"
},
{
0x0e36,
L"TiePie engineering",
0x0010,
L"Handyscope HS2"
},
{
0x0e36,
L"TiePie engineering",
0x0011,
L"TiePieSCOPE HS805 (br)"
},
{
0x0e36,
L"TiePie engineering",
0x0012,
L"TiePieSCOPE HS805"
},
{
0x0e36,
L"TiePie engineering",
0x0013,
L"Handyprobe HP3"
},
{
0x0e36,
L"TiePie engineering",
0x0014,
L"Handyprobe HP3"
},
{
0x0e36,
L"TiePie engineering",
0x0018,
L"Handyprobe HP2"
},
{
0x0e36,
L"TiePie engineering",
0x001b,
L"Handyscope HS5"
},
{
0x0e36,
L"TiePie engineering",
0x0042,
L"TiePieSCOPE HS801"
},
{
0x0e36,
L"TiePie engineering",
0x00fd,
L"USB To Parallel adapter"
},
{
0x0e36,
L"TiePie engineering",
0x00fe,
L"USB To Parallel adapter"
},
{
0x0e38,
L"Stratitec, Inc.",
0x0,
L"0"
},
{
0x0e39,
L"Smart Modular Technologies, Inc.",
0x0137,
L"Bluetooth Device"
},
{
0x0e3a,
L"Neostar Technology Co., Ltd",
0x1100,
L"CW-1100 Wireless Network Adapter"
},
{
0x0e3b,
L"Mansella, Ltd",
0x0,
L"0"
},
{
0x0e41,
L"Line6, Inc.",
0x4147,
L"TonePort GX"
},
{
0x0e41,
L"Line6, Inc.",
0x414d,
L"Pod HD500"
},
{
0x0e41,
L"Line6, Inc.",
0x4156,
L"POD HD Desktop"
},
{
0x0e41,
L"Line6, Inc.",
0x4250,
L"BassPODxt"
},
{
0x0e41,
L"Line6, Inc.",
0x4252,
L"BassPODxt Pro"
},
{
0x0e41,
L"Line6, Inc.",
0x4642,
L"BassPODxt Live"
},
{
0x0e41,
L"Line6, Inc.",
0x4650,
L"PODxt Live"
},
{
0x0e41,
L"Line6, Inc.",
0x4750,
L"GuitarPort"
},
{
0x0e41,
L"Line6, Inc.",
0x5044,
L"PODxt"
},
{
0x0e41,
L"Line6, Inc.",
0x5050,
L"PODxt Pro"
},
{
0x0e41,
L"Line6, Inc.",
0x534d,
L"SeaMonkey"
},
{
0x0e44,
L"Sun-Riseful Technology Co., Ltd.",
0x0,
L"0"
},
{
0x0e48,
L"Julia Corp., Ltd",
0x0100,
L"CardPro SmartCard Reader"
},
{
0x0e4a,
L"Shenzhen Bao Hing Electric Wire & Cable Mfr. Co.",
0x0,
L"0"
},
{
0x0e4c,
L"Radica Games, Ltd",
0x1097,
L"Gamester Controller"
},
{
0x0e4c,
L"Radica Games, Ltd",
0x2390,
L"Games Jtech Controller"
},
{
0x0e4c,
L"Radica Games, Ltd",
0x7288,
L"funkey reader"
},
{
0x0e50,
L"TechnoData Interware",
0x0001,
L"Matrix USB-Key"
},
{
0x0e50,
L"TechnoData Interware",
0x0002,
L"Matrixlock Dongle (HID)"
},
{
0x0e55,
L"Speed Dragon Multimedia, Ltd",
0x110a,
L"Tanic S110-SG1 + ISSC IS1002N [Slow Infra-Red (SIR) & Bluetooth 1.2 (Class 2) Adapter]"
},
{
0x0e55,
L"Speed Dragon Multimedia, Ltd",
0x110b,
L"MS3303H USB-to-Serial Bridge"
},
{
0x0e56,
L"Kingston Technology Company, Inc.",
0x6021,
L"K-PEX 100"
},
{
0x0e5a,
L"Active Co., Ltd",
0x0,
L"0"
},
{
0x0e5b,
L"Union Power Information Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0e5c,
L"Bitland Information Technology Co., Ltd",
0x6118,
L"LCD Device"
},
{
0x0e5c,
L"Bitland Information Technology Co., Ltd",
0x6119,
L"remote receive and control device"
},
{
0x0e5c,
L"Bitland Information Technology Co., Ltd",
0x6441,
L"C-Media Sound Device"
},
{
0x0e5d,
L"Neltron Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0e5e,
L"Conwise Technology Co., Ltd.",
0x6622,
L"CW6622"
},
{
0x0e66,
L"Hawking Technologies",
0x0001,
L"HWUN1 Hi-Gain Wireless-300N Adapter w/ Upgradable Antenna [Ralink RT2870]"
},
{
0x0e66,
L"Hawking Technologies",
0x0003,
L"HWDN1 Hi-Gain Wireless-300N Dish Adapter [Ralink RT2870]"
},
{
0x0e66,
L"Hawking Technologies",
0x0009,
L"HWUN2 Hi-Gain Wireless-150N Adapter w/ Upgradable Antenna [Ralink RT2770]"
},
{
0x0e66,
L"Hawking Technologies",
0x000b,
L"HWDN2 Hi-Gain Wireless-150N Dish Adapter [Ralink RT2770]"
},
{
0x0e66,
L"Hawking Technologies",
0x0013,
L"HWUN3 Hi-Gain Wireless-N Adapter [Ralink RT3070]"
},
{
0x0e66,
L"Hawking Technologies",
0x0015,
L"HWDN2 Rev. E Hi-Gain Wireless-150N Dish Adapter [Realtek RTL8191SU]"
},
{
0x0e66,
L"Hawking Technologies",
0x0017,
L"HAWNU1 Hi-Gain Wireless-150N Network Adapter with Range Amplifier [Ralink RT3070]"
},
{
0x0e66,
L"Hawking Technologies",
0x0018,
L"Wireless-N Network Adapter [Ralink RT2870]"
},
{
0x0e66,
L"Hawking Technologies",
0x400b,
L"UF100 10/100 Network Adapter"
},
{
0x0e66,
L"Hawking Technologies",
0x400c,
L"UF100 Ethernet [pegasus2]"
},
{
0x0e67,
L"Fossil, Inc.",
0x0002,
L"Wrist PDA"
},
{
0x0e6a,
L"Megawin Technology Co., Ltd",
0x0101,
L"MA100 [USB-UART Bridge IC]"
},
{
0x0e6a,
L"Megawin Technology Co., Ltd",
0x030b,
L"Truly Ergonomic Computer Keyboard (Device Firmware Update mode)"
},
{
0x0e6a,
L"Megawin Technology Co., Ltd",
0x030c,
L"Truly Ergonomic Computer Keyboard"
},
{
0x0e6a,
L"Megawin Technology Co., Ltd",
0x6001,
L"GEMBIRD Flexible keyboard KB-109F-B-DE"
},
{
0x0e6a,
L"Megawin Technology Co., Ltd",
0x7f5c,
L"BPF-015 Key Chain Photo Frame"
},
{
0x0e6f,
L"Logic3",
0x0003,
L"Freebird wireless Controller"
},
{
0x0e6f,
L"Logic3",
0x0005,
L"Eclipse wireless Controller"
},
{
0x0e6f,
L"Logic3",
0x0006,
L"Edge wireless Controller"
},
{
0x0e6f,
L"Logic3",
0x0128,
L"Wireless PS3 Controller"
},
{
0x0e70,
L"Tokyo Electronic Industry Co., Ltd",
0x0,
L"0"
},
{
0x0e72,
L"Hsi-Chin Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0e75,
L"TVS Electronics, Ltd",
0x0,
L"0"
},
{
0x0e79,
L"Archos, Inc.",
0x1106,
L"Pocket Media Assistant - PMA400"
},
{
0x0e79,
L"Archos, Inc.",
0x1204,
L"Gmini XS 200"
},
{
0x0e79,
L"Archos, Inc.",
0x1306,
L"504 Portable Multimedia Player"
},
{
0x0e79,
L"Archos, Inc.",
0x1330,
L"5 Tablet"
},
{
0x0e79,
L"Archos, Inc.",
0x1332,
L"5 IMT"
},
{
0x0e79,
L"Archos, Inc.",
0x1416,
L"32 IT"
},
{
0x0e79,
L"Archos, Inc.",
0x1417,
L"A43 IT"
},
{
0x0e79,
L"Archos, Inc.",
0x14ad,
L"97 Titanium HD"
},
{
0x0e79,
L"Archos, Inc.",
0x150e,
L"80 G9"
},
{
0x0e79,
L"Archos, Inc.",
0x3001,
L"40 Titanium"
},
{
0x0e7b,
L"On-Tech Industry Co., Ltd",
0x0,
L"0"
},
{
0x0e7e,
L"Gmate, Inc.",
0x0001,
L"Yopy 3000 PDA"
},
{
0x0e7e,
L"Gmate, Inc.",
0x1001,
L"YP3X00 PDA"
},
{
0x0e82,
L"Ching Tai Electric Wire & Cable Co., Ltd",
0x0,
L"0"
},
{
0x0e83,
L"Shin An Wire & Cable Co.",
0x0,
L"0"
},
{
0x0e8c,
L"Well Force Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0e8d,
L"MediaTek Inc.",
0x0003,
L"MT6227 phone"
},
{
0x0e8d,
L"MediaTek Inc.",
0x0004,
L"MT6227 phone"
},
{
0x0e8d,
L"MediaTek Inc.",
0x0023,
L"S103"
},
{
0x0e8d,
L"MediaTek Inc.",
0x00a5,
L"GSM modem [Medion Surfstick Model:S4222]"
},
{
0x0e8d,
L"MediaTek Inc.",
0x1806,
L"Samsung SE-208 Slim Portable DVD Writer"
},
{
0x0e8d,
L"MediaTek Inc.",
0x1836,
L"Samsung SE-S084 Super WriteMaster Slim External DVD writer"
},
{
0x0e8d,
L"MediaTek Inc.",
0x1956,
L"Samsung SE-506 Portable BluRay Disc Writer"
},
{
0x0e8d,
L"MediaTek Inc.",
0x2000,
L"MT65xx Preloader"
},
{
0x0e8d,
L"MediaTek Inc.",
0x3329,
L"Qstarz BT-Q1000XT"
},
{
0x0e8d,
L"MediaTek Inc.",
0x763e,
L"MT7630e Bluetooth Adapter"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0003,
L"MaxFire Blaze2"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0012,
L"Joystick/Gamepad"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0016,
L"4 port USB 1.1 hub UH-174"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0020,
L"USB to PS/2 Adapter"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0021,
L"Multimedia Keyboard Controller"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0022,
L"multimedia keyboard controller"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x0201,
L"SmartJoy Frag Xpad/PS2 adaptor"
},
{
0x0e8f,
L"GreenAsia Inc.",
0x300a,
L"steering Wheel"
},
{
0x0e90,
L"WiebeTech, LLC",
0x0100,
L"Storage Adapter V1"
},
{
0x0e91,
L"VTech Engineering Canada, Ltd",
0x0,
L"0"
},
{
0x0e92,
L"C's Glory Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0e93,
L"eM Technics Co., Ltd",
0x0,
L"0"
},
{
0x0e95,
L"Future Technology Co., Ltd",
0x0,
L"0"
},
{
0x0e96,
L"Aplux Communications, Ltd",
0xc001,
L"TRUST 380 USB2 SPACEC@M"
},
{
0x0e97,
L"Fingerworks, Inc.",
0x0908,
L"Composite HID (Keyboard and Mouse)"
},
{
0x0e98,
L"Advanced Analogic Technologies, Inc.",
0x0,
L"0"
},
{
0x0e99,
L"Parallel Dice Co., Ltd",
0x0,
L"0"
},
{
0x0e9a,
L"TA HSING Industries, Ltd",
0x0,
L"0"
},
{
0x0e9b,
L"ADTEC Corp.",
0x0,
L"0"
},
{
0x0e9c,
L"Streamzap, Inc.",
0x0000,
L"Streamzap Remote Control"
},
{
0x0e9f,
L"Tamura Corp.",
0x0,
L"0"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x2126,
L"7-in-1 Card Reader"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x2153,
L"SD Card Reader Key"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x2168,
L"Transcend JetFlash 2.0 / Astone USB Drive / Intellegent Stick 2.0"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x6803,
L"OTI-6803 Flash Disk"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x6808,
L"OTI-6808 Flash Disk"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x6828,
L"OTI-6828 Flash Disk"
},
{
0x0ea0,
L"Ours Technology, Inc.",
0x6858,
L"OTi-6858 serial adapter"
},
{
0x0ea6,
L"Nihon Computer Co., Ltd",
0x0,
L"0"
},
{
0x0ea7,
L"MSL Enterprises Corp.",
0x0,
L"0"
},
{
0x0ea8,
L"CenDyne, Inc.",
0x0,
L"0"
},
{
0x0ead,
L"Humax Co., Ltd",
0x0,
L"0"
},
{
0x0eb0,
L"NovaTech",
0x9020,
L"NovaTech NV-902W"
},
{
0x0eb0,
L"NovaTech",
0x9021,
L"RT2573"
},
{
0x0eb1,
L"WIS Technologies, Inc.",
0x6666,
L"WinFast WalkieTV TV Loader"
},
{
0x0eb1,
L"WIS Technologies, Inc.",
0x6668,
L"WinFast WalkieTV TV Loader"
},
{
0x0eb1,
L"WIS Technologies, Inc.",
0x7007,
L"WinFast WalkieTV WDM Capture"
},
{
0x0eb2,
L"Y-S Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0eb3,
L"Saint Technology Corp.",
0x0,
L"0"
},
{
0x0eb7,
L"Endor AG",
0x0,
L"0"
},
{
0x0eb8,
L"Mettler Toledo",
0x2200,
L"Ariva Scale"
},
{
0x0eb8,
L"Mettler Toledo",
0xf000,
L"PS60 Scale"
},
{
0x0ebb,
L"Thermo Fisher Scientific",
0x0002,
L"FT-IR Spectrometer"
},
{
0x0ebe,
L"VWeb Corp.",
0x0,
L"0"
},
{
0x0ebf,
L"Omega Technology of Taiwan, Inc.",
0x0,
L"0"
},
{
0x0ec0,
L"LHI Technology (China) Co., Ltd",
0x0,
L"0"
},
{
0x0ec1,
L"Abit Computer Corp.",
0x0,
L"0"
},
{
0x0ec2,
L"Sweetray Industrial, Ltd",
0x0,
L"0"
},
{
0x0ec3,
L"Axell Co., Ltd",
0x0,
L"0"
},
{
0x0ec4,
L"Ballracing Developments, Ltd",
0x0,
L"0"
},
{
0x0ec5,
L"GT Information System Co., Ltd",
0x0,
L"0"
},
{
0x0ec6,
L"InnoVISION Multimedia, Ltd",
0x0,
L"0"
},
{
0x0ec7,
L"Theta Link Corp.",
0x1008,
L"So., Show 301 Digital Camera"
},
{
0x0ecd,
L"Lite-On IT Corp.",
0x1400,
L"CD\RW 40X"
},
{
0x0ecd,
L"Lite-On IT Corp.",
0xa100,
L"LDW-411SX DVD/CD Rewritable Drive"
},
{
0x0ece,
L"TaiSol Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0ecf,
L"Phogenix Imaging, LLC",
0x0,
L"0"
},
{
0x0ed1,
L"WinMaxGroup",
0x6660,
L"Flash Disk 64M-C"
},
{
0x0ed1,
L"WinMaxGroup",
0x6680,
L"Flash Disk 64M-B"
},
{
0x0ed1,
L"WinMaxGroup",
0x7634,
L"MP3 Player"
},
{
0x0ed2,
L"Kyoto Micro Computer Co., Ltd",
0x0,
L"0"
},
{
0x0ed3,
L"Wing-Tech Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0ed5,
L"Fiberbyte",
0xe000,
L"USB-inSync Device"
},
{
0x0ed5,
L"Fiberbyte",
0xf000,
L"Fiberbyte USB-inSync Device"
},
{
0x0ed5,
L"Fiberbyte",
0xf201,
L"Fiberbyte USB-inSync DAQ-2500X"
},
{
0x0eda,
L"Noriake Itron Corp.",
0x0,
L"0"
},
{
0x0edf,
L"e-MDT Co., Ltd",
0x2060,
L"FID irock! 100 Series"
},
{
0x0ee0,
L"Shima Seiki Mfg., Ltd",
0x0,
L"0"
},
{
0x0ee1,
L"Sarotech Co., Ltd",
0x0,
L"0"
},
{
0x0ee2,
L"AMI Semiconductor, Inc.",
0x0,
L"0"
},
{
0x0ee3,
L"ComTrue Technology Corp.",
0x1000,
L"Image Tank 1.5"
},
{
0x0ee4,
L"Sunrich Technology, Ltd",
0x0690,
L"SATA 3 Adapter"
},
{
0x0eee,
L"Digital Stream Technology, Inc.",
0x8810,
L"Mass Storage Drive"
},
{
0x0eef,
L"D-WAV Scientific Co., Ltd",
0x0001,
L"eGalax TouchScreen"
},
{
0x0eef,
L"D-WAV Scientific Co., Ltd",
0x0002,
L"Touchscreen Controller(Professional)"
},
{
0x0eef,
L"D-WAV Scientific Co., Ltd",
0x7200,
L"Touchscreen Controller"
},
{
0x0eef,
L"D-WAV Scientific Co., Ltd",
0xa802,
L"eGalaxTouch EXC7920"
},
{
0x0ef0,
L"Hitachi Cable, Ltd",
0x0,
L"0"
},
{
0x0ef1,
L"Aichi Micro Intelligent Corp.",
0x0,
L"0"
},
{
0x0ef2,
L"I/O Magic Corp.",
0x0,
L"0"
},
{
0x0ef3,
L"Lynn Products, Inc.",
0x0,
L"0"
},
{
0x0ef4,
L"DSI Datotech",
0x0,
L"0"
},
{
0x0ef5,
L"PointChips",
0x2202,
L"Flash Disk"
},
{
0x0ef5,
L"PointChips",
0x2366,
L"Flash Disk"
},
{
0x0ef6,
L"Yield Microelectronics Corp.",
0x0,
L"0"
},
{
0x0ef7,
L"SM Tech Co., Ltd (Tulip)",
0x0,
L"0"
},
{
0x0efd,
L"Oasis Semiconductor",
0x0,
L"0"
},
{
0x0efe,
L"Wem Technology, Inc.",
0x0,
L"0"
},
{
0x0f03,
L"Unitek UPS Systems",
0x0001,
L"Alpha 1200Sx"
},
{
0x0f06,
L"Visual Frontier Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x0f08,
L"CSL Wire & Plug (Shen Zhen) Co.",
0x0,
L"0"
},
{
0x0f0c,
L"CAS Corp.",
0x0,
L"0"
},
{
0x0f0d,
L"Hori Co., Ltd",
0x0011,
L"Real Arcade Pro 3"
},
{
0x0f0e,
L"Energy Full Corp.",
0x0,
L"0"
},
{
0x0f0f,
L"Silego Technology Inc",
0x0006,
L"GreenPak Universal Dev Board (Active Mode)"
},
{
0x0f0f,
L"Silego Technology Inc",
0x8006,
L"GreenPak Universal Dev Board (Reset Mode)"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1000,
L"CASSY-S"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1010,
L"Pocket-CASSY"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1020,
L"Mobile-CASSY"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1080,
L"Joule and Wattmeter"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1081,
L"Digital Multimeter P"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1090,
L"UMI P"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1100,
L"X-Ray Apparatus"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1101,
L"X-Ray Apparatus"
},
{
0x0f11,
L"LD Didactic GmbH",
0x1200,
L"VideoCom"
},
{
0x0f11,
L"LD Didactic GmbH",
0x2000,
L"COM3LAB"
},
{
0x0f11,
L"LD Didactic GmbH",
0x2010,
L"Terminal Adapter"
},
{
0x0f11,
L"LD Didactic GmbH",
0x2020,
L"Network Analyser"
},
{
0x0f11,
L"LD Didactic GmbH",
0x2030,
L"Converter Control Unit"
},
{
0x0f11,
L"LD Didactic GmbH",
0x2040,
L"Machine Test System"
},
{
0x0f12,
L"Mars Engineering Corp.",
0x0,
L"0"
},
{
0x0f13,
L"Acetek Technology Co., Ltd",
0x0,
L"0"
},
{
0x0f14,
L"Ingenico",
0x0012,
L"Vital'Act 3S"
},
{
0x0f14,
L"Ingenico",
0x0038,
L"XIRING Smart Card Terminal LEO V2"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x0002,
L"CCD"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x0006,
L"Focuser"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x0007,
L"Filter Wheel"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x000a,
L"ProLine CCD"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x000b,
L"Color Filter Wheel 4"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x000c,
L"PDF2"
},
{
0x0f18,
L"Finger Lakes Instrumentation",
0x000d,
L"Guider"
},
{
0x0f19,
L"Oracom Co., Ltd",
0x0,
L"0"
},
{
0x0f1b,
L"Onset Computer Corp.",
0x0,
L"0"
},
{
0x0f1c,
L"Funai Electric Co., Ltd",
0x0,
L"0"
},
{
0x0f1d,
L"Iwill Corp.",
0x0,
L"0"
},
{
0x0f21,
L"IOI Technology Corp.",
0x0,
L"0"
},
{
0x0f22,
L"Senior Industries, Inc.",
0x0,
L"0"
},
{
0x0f23,
L"Leader Tech Manufacturer Co., Ltd",
0x0,
L"0"
},
{
0x0f24,
L"Flex-P Industries, Snd., Bhd.",
0x0,
L"0"
},
{
0x0f2d,
L"ViPower, Inc.",
0x0,
L"0"
},
{
0x0f2e,
L"Geniality Maple Technology Co., Ltd",
0x0,
L"0"
},
{
0x0f2f,
L"Priva Design Services",
0x0,
L"0"
},
{
0x0f30,
L"Jess Technology Co., Ltd",
0x001c,
L"PS3 Guitar Controller Dongle"
},
{
0x0f30,
L"Jess Technology Co., Ltd",
0x0110,
L"Dual Analog Rumble Pad"
},
{
0x0f30,
L"Jess Technology Co., Ltd",
0x0111,
L"Colour Rumble Pad"
},
{
0x0f30,
L"Jess Technology Co., Ltd",
0x0208,
L"Xbox & PC Gamepad"
},
{
0x0f31,
L"Chrysalis Development",
0x0,
L"0"
},
{
0x0f32,
L"YFC-BonEagle Electric Co., Ltd",
0x0,
L"0"
},
{
0x0f37,
L"Kokuyo Co., Ltd",
0x0,
L"0"
},
{
0x0f38,
L"Nien-Yi Industrial Corp.",
0x0,
L"0"
},
{
0x0f39,
L"TG3 Electronics",
0x0876,
L"Keyboard [87 Francium Pro]"
},
{
0x0f39,
L"TG3 Electronics",
0x1086,
L"DK2108SZ Keyboard [Ducky Zero]"
},
{
0x0f3d,
L"Airprime, Incorporated",
0x0112,
L"CDMA 1xEVDO PC Card, PC 5220"
},
{
0x0f41,
L"RDC Semiconductor Co., Ltd",
0x0,
L"0"
},
{
0x0f42,
L"Nital Consulting Services, Inc.",
0x0,
L"0"
},
{
0x0f44,
L"Polhemus",
0xef11,
L"Patriot (firmware not loaded)"
},
{
0x0f44,
L"Polhemus",
0xef12,
L"Patriot"
},
{
0x0f44,
L"Polhemus",
0xff11,
L"Liberty (firmware not loaded)"
},
{
0x0f44,
L"Polhemus",
0xff12,
L"Liberty"
},
{
0x0f4b,
L"St. John Technology Co., Ltd",
0x0,
L"0"
},
{
0x0f4c,
L"WorldWide Cable Opto Corp.",
0x0,
L"0"
},
{
0x0f4d,
L"Microtune, Inc.",
0x1000,
L"Bluetooth Dongle"
},
{
0x0f4e,
L"Freedom Scientific",
0x0,
L"0"
},
{
0x0f52,
L"Wing Key Electrical Co., Ltd",
0x0,
L"0"
},
{
0x0f53,
L"Dongguan White Horse Cable Factory, Ltd",
0x0,
L"0"
},
{
0x0f54,
L"Kawai Musical Instruments Mfg. Co., Ltd",
0x0101,
L"MP6 Stage Piano"
},
{
0x0f55,
L"AmbiCom, Inc.",
0x0,
L"0"
},
{
0x0f5c,
L"Prairiecomm, Inc.",
0x0,
L"0"
},
{
0x0f5d,
L"NewAge International, LLC",
0x9455,
L"Compact Drive"
},
{
0x0f5f,
L"Key Technology Corp.",
0x0,
L"0"
},
{
0x0f60,
L"NTK, Ltd",
0x0,
L"0"
},
{
0x0f61,
L"Varian, Inc.",
0x0,
L"0"
},
{
0x0f62,
L"Acrox Technologies Co., Ltd",
0x1001,
L"Targus Mini Trackball Optical Mouse"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0010,
L"Leapster Explorer"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0022,
L"Leap Reader"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0500,
L"Fly Fusion"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0600,
L"Leap Port Turbo"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0700,
L"POGO"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0800,
L"Didj"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0900,
L"TAGSchool"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0a00,
L"Leapster 2"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0b00,
L"Crammer"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0c00,
L"Tag Jr"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0d00,
L"My Pal Scout"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0e00,
L"Tag32"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x0f00,
L"Tag64"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x1000,
L"Kiwi16"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x1100,
L"Leapster L2x"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x1111,
L"Fly Fusion"
},
{
0x0f63,
L"LeapFrog Enterprises",
0x1300,
L"Didj UK/France (Leapster Advance)"
},
{
0x0f68,
L"Kobe Steel, Ltd",
0x0,
L"0"
},
{
0x0f69,
L"Dionex Corp.",
0x0,
L"0"
},
{
0x0f6a,
L"Vibren Technologies, Inc.",
0x0,
L"0"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0100,
L"GameBoy Color Emulator"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0201,
L"GameBoy Advance Flash Gang Writer"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0202,
L"GameBoy Advance Capture"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0300,
L"Gamecube DOL Viewer"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0400,
L"NDS Emulator"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0401,
L"NDS UIC"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0402,
L"NDS Writer"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0403,
L"NDS Capture"
},
{
0x0f6e,
L"INTELLIGENT SYSTEMS",
0x0404,
L"NDS Emulator (Lite)"
},
{
0x0f73,
L"DFI",
0x0,
L"0"
},
{
0x0f78,
L"Guntermann & Drunck GmbH",
0x0,
L"0"
},
{
0x0f7c,
L"DQ Technology, Inc.",
0x0,
L"0"
},
{
0x0f7d,
L"NetBotz, Inc.",
0x0,
L"0"
},
{
0x0f7e,
L"Fluke Corp.",
0x0,
L"0"
},
{
0x0f88,
L"VTech Holdings, Ltd",
0x3012,
L"RT2570"
},
{
0x0f88,
L"VTech Holdings, Ltd",
0x3014,
L"ZD1211B"
},
{
0x0f8b,
L"Yazaki Corp.",
0x0,
L"0"
},
{
0x0f8c,
L"Young Generation International Corp.",
0x0,
L"0"
},
{
0x0f8d,
L"Uniwill Computer Corp.",
0x0,
L"0"
},
{
0x0f8e,
L"Kingnet Technology Co., Ltd",
0x0,
L"0"
},
{
0x0f8f,
L"Soma Networks",
0x0,
L"0"
},
{
0x0f97,
L"CviLux Corp.",
0x0,
L"0"
},
{
0x0f98,
L"CyberBank Corp.",
0x0,
L"0"
},
{
0x0f9c,
L"Hyun Won, Inc.",
0x0301,
L"M-Any Premium DAH-610 MP3/WMA Player"
},
{
0x0f9c,
L"Hyun Won, Inc.",
0x0332,
L"mobiBLU DAH-1200 MP3/Ogg Player"
},
{
0x0f9e,
L"Lucent Technologies",
0x0,
L"0"
},
{
0x0fa3,
L"Starconn Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0fa4,
L"ATL Technology",
0x0,
L"0"
},
{
0x0fa5,
L"Sotec Co., Ltd",
0x0,
L"0"
},
{
0x0fa7,
L"Epox Computer Co., Ltd",
0x0,
L"0"
},
{
0x0fa8,
L"Logic Controls, Inc.",
0x0,
L"0"
},
{
0x0faf,
L"Winpoint Electronic Corp.",
0x0,
L"0"
},
{
0x0fb0,
L"Haurtian Wire & Cable Co., Ltd",
0x0,
L"0"
},
{
0x0fb1,
L"Inclose Design, Inc.",
0x0,
L"0"
},
{
0x0fb2,
L"Juan-Chern Industrial Co., Ltd",
0x0,
L"0"
},
{
0x0fb6,
L"Heber Ltd",
0x3fc3,
L"Firefly X10i I/O Board (with firmware)"
},
{
0x0fb6,
L"Heber Ltd",
0x3fc4,
L"Firefly X10i I/O Board (without firmware)"
},
{
0x0fb8,
L"Wistron Corp.",
0x0002,
L"eHome Infrared Receiver"
},
{
0x0fb9,
L"AACom Corp.",
0x0,
L"0"
},
{
0x0fba,
L"San Shing Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0fbb,
L"Bitwise Systems, Inc.",
0x0,
L"0"
},
{
0x0fc1,
L"Mitac Internatinal Corp.",
0x0,
L"0"
},
{
0x0fc2,
L"Plug and Jack Industrial, Inc.",
0x0,
L"0"
},
{
0x0fc5,
L"Delcom Engineering",
0x1222,
L"I/O Development Board"
},
{
0x0fc6,
L"Dataplus Supplies, Inc.",
0x0,
L"0"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x0001,
L"Blackberry Handheld"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x0004,
L"Blackberry Handheld"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x0006,
L"Blackberry Pearl"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x0008,
L"Blackberry Pearl"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8001,
L"Blackberry Handheld"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8004,
L"Blackberry"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8007,
L"Blackberry Handheld"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8010,
L"Blackberry Playbook (Connect to Windows mode)"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8011,
L"Blackberry Playbook (Connect to Mac mode)"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8020,
L"Blackberry Playbook (CD-Rom mode)"
},
{
0x0fca,
L"Research In Motion, Ltd.",
0x8037,
L"Blackberry PRIV"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0076,
L"W910i (Multimedia mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x00af,
L"V640i Phone [PTP Camera]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x00d4,
L"C902 [MTP]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x00d9,
L"C702 Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0112,
L"W995 Walkman Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x014e,
L"J108i Cedar (MTP mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x015a,
L"Xperia Pro [Media Transfer Protocol]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0166,
L"Xperia Mini Pro"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0167,
L"ST15i (Xperia mini)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0169,
L"Xperia S"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0172,
L"Xperia P"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0177,
L"Xperia Ion [Mass Storage]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0188,
L"ST26i"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x019c,
L"C6833"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x019e,
L"C6903"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x01a5,
L"SO-04F"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x01a7,
L"D5503"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x01ba,
L"D6603 [Xperia Z3]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x01bb,
L"D5803 [Xperia Z3 Compact] (MTP mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x0dde,
L"Xperia Mini Pro Bootloader"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x1010,
L"WMC Modem"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x10af,
L"V640i Phone [PictBridge]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x10d4,
L"C902 Phone [PictBridge]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x2105,
L"W715 Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x2137,
L"Xperia X10 mini (USB debug)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x2138,
L"Xperia X10 mini pro (Debug)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x2149,
L"Xperia X8 (debug)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x214e,
L"J108i Cedar (Windows-driver mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x3137,
L"Xperia X10 mini"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x3138,
L"Xperia X10 mini pro"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x3149,
L"Xperia X8"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x514f,
L"Xperia arc S [Adb-Enable Mode]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x5169,
L"Xperia S [Adb-Enable Mode]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x5177,
L"Xperia Ion [Debug Mode]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x518c,
L"C1605 [Xperia E dual] MTD mode"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x51a7,
L"D5503 (Xperia Z1 Compact)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x614f,
L"Xperia X12 (debug mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x6166,
L"Xperia Mini Pro"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x618c,
L"C1605 [Xperia E dual] MSC mode"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x715a,
L"Xperia Pro [Tethering]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x7166,
L"Xperia Mini Pro (Tethering mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x7177,
L"Xperia Ion [Tethering]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0x8004,
L"9000 Phone [Mass Storage]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xadde,
L"C2005 (Xperia M dual) in service mode"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd008,
L"V800-Vodafone 802SE Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd016,
L"K750i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd017,
L"K608i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd019,
L"VDC EGPRS Modem"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd025,
L"520 WMC Data Modem"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd028,
L"W800i"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd038,
L"W850i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd039,
L"K800i (phone mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd041,
L"K510i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd042,
L"W810i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd043,
L"V630i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd046,
L"K610i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd065,
L"W960i Phone (PC Suite)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd076,
L"W910i (Phone mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd089,
L"W580i Phone (mass storage)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd0a1,
L"K810"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd0af,
L"V640i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd0cf,
L"MD300 Mobile Broadband Modem"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd0d4,
L"C902 Phone [Modem]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd0e1,
L"MD400 Mobile Broadband Modem"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd12a,
L"U100i Yari Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd12e,
L"Xperia X10"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xd14e,
L"J108i Cedar (modem mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe000,
L"K810 (PictBridge mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe039,
L"K800i (msc mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe042,
L"W810i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe043,
L"V630i Phone [Mass Storage]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe075,
L"K850i"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe076,
L"W910i (Mass storage)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe089,
L"W580i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe090,
L"W200 Phone (Mass Storage)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0a1,
L"K810 (Mass Storage mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0a3,
L"W660i"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0af,
L"V640i Phone [Mass Storage]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0d4,
L"C902 Phone [Mass Storage] "
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0ef,
L"C905 Phone [Mass Storage]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe0f3,
L"W595"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe105,
L"W705"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe112,
L"W995 Phone (Mass Storage)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe12e,
L"X10i Phone"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe133,
L"Vivaz"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe14e,
L"J108i Cedar (mass-storage mode)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe14f,
L"Xperia Arc/X12"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe15a,
L"Xperia Pro [Mass Storage Class]"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe161,
L"Xperia Ray"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe166,
L"Xperia Mini Pro"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe167,
L"XPERIA mini"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe19b,
L"C2005 [Xperia M dual] (Mass Storage)"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1a9,
L"D5303"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1aa,
L"D2303"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1ad,
L"D5103"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1b0,
L"D6708"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1b5,
L"D2004"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1ba,
L"D6683"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1bb,
L"SO-02G"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1bc,
L"D2203"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1c0,
L"SGP621"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1c2,
L"D2533"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1c9,
L"E6553"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xe1cf,
L"SGP771"
},
{
0x0fce,
L"Sony Ericsson Mobile Communications AB",
0xf0fa,
L"MN800 / Smartwatch 2 (DFU mode)"
},
{
0x0fcf,
L"Dynastream Innovations, Inc.",
0x1003,
L"ANT Development Board"
},
{
0x0fcf,
L"Dynastream Innovations, Inc.",
0x1004,
L"ANTUSB Stick"
},
{
0x0fcf,
L"Dynastream Innovations, Inc.",
0x1006,
L"ANT Development Board"
},
{
0x0fcf,
L"Dynastream Innovations, Inc.",
0x1008,
L"ANTUSB2 Stick"
},
{
0x0fcf,
L"Dynastream Innovations, Inc.",
0x1009,
L"ANTUSB-m Stick"
},
{
0x0fd0,
L"Tulip Computers B.V.",
0x0,
L"0"
},
{
0x0fd1,
L"Giant Electronics Ltd.",
0x0,
L"0"
},
{
0x0fd2,
L"Seac Banche",
0x0001,
L"RDS 6000"
},
{
0x0fd4,
L"Tenovis GmbH & Co., KG",
0x0,
L"0"
},
{
0x0fd5,
L"Direct Access Technology, Inc.",
0x0,
L"0"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0011,
L"EyeTV Diversity"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0018,
L"EyeTV Hybrid"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0020,
L"EyeTV DTT Deluxe"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0021,
L"EyeTV DTT"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x002a,
L"EyeTV Sat"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x002c,
L"EyeTV DTT Deluxe v2"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0033,
L"Video Capture"
},
{
0x0fd9,
L"Elgato Systems GmbH",
0x0037,
L"Video Capture v2"
},
{
0x0fda,
L"Quantec Networks GmbH",
0x0100,
L"quanton flight control"
},
{
0x0fdc,
L"Micro Plus",
0x0,
L"0"
},
{
0x0fde,
L"Oregon Scientific",
0xca01,
L"WMRS200 weather station"
},
{
0x0fde,
L"Oregon Scientific",
0xca05,
L"CM160"
},
{
0x0fe0,
L"Osterhout Design Group",
0x0100,
L"Bluetooth Mouse"
},
{
0x0fe0,
L"Osterhout Design Group",
0x0101,
L"Bluetooth IMU"
},
{
0x0fe0,
L"Osterhout Design Group",
0x0200,
L"Bluetooth Keypad"
},
{
0x0fe2,
L"Air Techniques",
0x0,
L"0"
},
{
0x0fe4,
L"IN-Tech Electronics, Ltd",
0x0,
L"0"
},
{
0x0fe5,
L"Greenconn (U.S.A.), Inc.",
0x0,
L"0"
},
{
0x0fe6,
L"ICS Advent",
0x8101,
L"DM9601 Fast Ethernet Adapter"
},
{
0x0fe6,
L"ICS Advent",
0x811e,
L"Parallel Adapter"
},
{
0x0fe6,
L"ICS Advent",
0x9700,
L"DM9601 Fast Ethernet Adapter"
},
{
0x0fe9,
L"DVICO",
0x4020,
L"TViX M-6500"
},
{
0x0fe9,
L"DVICO",
0x9010,
L"FusionRemote IR receiver"
},
{
0x0fe9,
L"DVICO",
0xdb00,
L"FusionHDTV DVB-T (MT352+LgZ201) (uninitialized)"
},
{
0x0fe9,
L"DVICO",
0xdb01,
L"FusionHDTV DVB-T (MT352+LgZ201) (initialized)"
},
{
0x0fe9,
L"DVICO",
0xdb10,
L"FusionHDTV DVB-T (MT352+Thomson7579) (uninitialized)"
},
{
0x0fe9,
L"DVICO",
0xdb11,
L"FusionHDTV DVB-T (MT352+Thomson7579) (initialized)"
},
{
0x0fe9,
L"DVICO",
0xdb78,
L"FusionHDTV DVB-T Dual Digital 4 (ZL10353+xc2028/xc3028) (initialized)"
},
{
0x0fea,
L"United Computer Accessories",
0x0,
L"0"
},
{
0x0feb,
L"CRS Electronic Co., Ltd",
0x0,
L"0"
},
{
0x0fec,
L"UMC Electronics Co., Ltd",
0x0,
L"0"
},
{
0x0fed,
L"Access Co., Ltd",
0x0,
L"0"
},
{
0x0fee,
L"Xsido Corp.",
0x0,
L"0"
},
{
0x0fef,
L"MJ Research, Inc.",
0x0,
L"0"
},
{
0x0ff6,
L"Core Valley Co., Ltd",
0x0,
L"0"
},
{
0x0ff7,
L"CHI SHING Computer Accessories Co., Ltd",
0x0,
L"0"
},
{
0x0ffc,
L"Clavia DMI AB",
0x0021,
L"Nord Stage 2"
},
{
0x0ffd,
L"EarlySense",
0xff00,
L"OEM"
},
{
0x0fff,
L"Aopen, Inc.",
0x0,
L"0"
},
{
0x1000,
L"Speed Tech Corp.",
0x153b,
L"TerraTec Electronic GmbH"
},
{
0x1001,
L"Ritronics Components (S) Pte., Ltd",
0x0,
L"0"
},
{
0x1003,
L"Sigma Corp.",
0x0003,
L"SD14"
},
{
0x1003,
L"Sigma Corp.",
0x0100,
L"SD9/SD10"
},
{
0x1004,
L"LG Electronics, Inc.",
0x1fae,
L"U8120 3G Cellphone"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6000,
L"Various Mobile Phones"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6005,
L"T5100"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6018,
L"GM360/GD510/GW520/KP501"
},
{
0x1004,
L"LG Electronics, Inc.",
0x618e,
L"Ally/Optimus One/Vortex (debug mode)"
},
{
0x1004,
L"LG Electronics, Inc.",
0x618f,
L"Ally/Optimus One"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61c5,
L"P880 / Charge only"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61c6,
L"Vortex (msc)"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61cc,
L"Optimus S"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61da,
L"G2 Android Phone [tethering mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61f1,
L"Optimus Android Phone [LG Software mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61f9,
L"Optimus (Various Models) MTP Mode"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61fc,
L"Optimus 3"
},
{
0x1004,
L"LG Electronics, Inc.",
0x61fe,
L"Optimus Android Phone [USB tethering mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x627f,
L"G3 (VS985) Android Phone (MTP/Download mode)"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6300,
L"G2/Optimus Android Phone [Charge mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x631c,
L"G2/Optimus Android Phone [MTP mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x631d,
L"Optimus Android Phone (Camera/PTP Mode)"
},
{
0x1004,
L"LG Electronics, Inc.",
0x631e,
L"G2/Optimus Android Phone [Camera/PTP mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x631f,
L"Optimus Android Phone (Charge Mode)"
},
{
0x1004,
L"LG Electronics, Inc.",
0x633a,
L"Ultimate 2 Android Phone L41C"
},
{
0x1004,
L"LG Electronics, Inc.",
0x633e,
L"G2/G3 Android Phone [MTP/PTP/Download mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6344,
L"G2 Android Phone [tethering mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6356,
L"Optimus Android Phone [Virtual CD mode]"
},
{
0x1004,
L"LG Electronics, Inc.",
0x6800,
L"CDMA Modem"
},
{
0x1004,
L"LG Electronics, Inc.",
0x7000,
L"LG LDP-7024D(LD)USB"
},
{
0x1004,
L"LG Electronics, Inc.",
0x91c8,
L"P880 / USB tethering"
},
{
0x1004,
L"LG Electronics, Inc.",
0xa400,
L"Renoir (KC910)"
},
{
0x1005,
L"Apacer Technology, Inc.",
0x1001,
L"MP3 Player"
},
{
0x1005,
L"Apacer Technology, Inc.",
0x1004,
L"MP3 Player"
},
{
0x1005,
L"Apacer Technology, Inc.",
0x1006,
L"MP3 Player"
},
{
0x1005,
L"Apacer Technology, Inc.",
0xb113,
L"Handy Steno/AH123 / Handy Steno 2.0/HT203"
},
{
0x1005,
L"Apacer Technology, Inc.",
0xb223,
L"CD-RW + 6in1 Card Reader Digital Storage / Converter"
},
{
0x1006,
L"iRiver, Ltd.",
0x3001,
L"iHP-100"
},
{
0x1006,
L"iRiver, Ltd.",
0x3002,
L"iHP-120/140 MP3 Player"
},
{
0x1006,
L"iRiver, Ltd.",
0x3003,
L"H320/H340"
},
{
0x1006,
L"iRiver, Ltd.",
0x3004,
L"H340 (mtp)"
},
{
0x1009,
L"Emuzed, Inc.",
0x000e,
L"eHome Infrared Receiver"
},
{
0x1009,
L"Emuzed, Inc.",
0x0013,
L"Angel MPEG Device"
},
{
0x1009,
L"Emuzed, Inc.",
0x0015,
L"Lumanate Wave PAL SECAM DVBT Device"
},
{
0x1009,
L"Emuzed, Inc.",
0x0016,
L"Lumanate Wave NTSC/ATSC Combo Device"
},
{
0x100a,
L"AV Chaseway, Ltd",
0x2402,
L"MP3 Player"
},
{
0x100a,
L"AV Chaseway, Ltd",
0x2404,
L"MP3 Player"
},
{
0x100a,
L"AV Chaseway, Ltd",
0x2405,
L"MP3 Player"
},
{
0x100a,
L"AV Chaseway, Ltd",
0x2406,
L"MP3 Player"
},
{
0x100a,
L"AV Chaseway, Ltd",
0xa0c0,
L"MP3 Player"
},
{
0x100b,
L"Chou Chin Industrial Co., Ltd",
0x0,
L"0"
},
{
0x100d,
L"Netopia, Inc.",
0x3342,
L"Cayman 3352 DSL Modem"
},
{
0x100d,
L"Netopia, Inc.",
0x3382,
L"3380 Series Network Interface"
},
{
0x100d,
L"Netopia, Inc.",
0x6072,
L"DSL Modem"
},
{
0x100d,
L"Netopia, Inc.",
0x9031,
L"Motorola 802.11n Dualband USB Wireless Adapter"
},
{
0x100d,
L"Netopia, Inc.",
0x9032,
L"Motorola 802.11n 5G USB Wireless Adapter"
},
{
0x100d,
L"Netopia, Inc.",
0xcb01,
L"Cayman 3341 Ethernet DSL Router"
},
{
0x1010,
L"Fukuda Denshi Co., Ltd",
0x0,
L"0"
},
{
0x1011,
L"Mobile Media Tech.",
0x0001,
L"AccFast Mp3"
},
{
0x1012,
L"SDKM Fibres, Wires & Cables Berhad",
0x0,
L"0"
},
{
0x1013,
L"TST-Touchless Sensor Technology AG",
0x0,
L"0"
},
{
0x1014,
L"Densitron Technologies PLC",
0x0,
L"0"
},
{
0x1015,
L"Softronics Pty., Ltd",
0x0,
L"0"
},
{
0x1016,
L"Xiamen Hung's Enterprise Co., Ltd",
0x0,
L"0"
},
{
0x1017,
L"Speedy Industrial Supplies, Pte., Ltd",
0x0,
L"0"
},
{
0x1019,
L"Elitegroup Computer Systems (ECS)",
0x0c55,
L"Flash Reader, Desknote UCR-61S2B"
},
{
0x1019,
L"Elitegroup Computer Systems (ECS)",
0x0f38,
L"Infrared Receiver"
},
{
0x1020,
L"Labtec",
0x0006,
L"Wireless Keyboard"
},
{
0x1020,
L"Labtec",
0x000a,
L"Wireless Optical Mouse"
},
{
0x1020,
L"Labtec",
0x0106,
L"Wireless Optical Mouse"
},
{
0x1022,
L"Shinko Shoji Co., Ltd",
0x0,
L"0"
},
{
0x1025,
L"Hyper-Paltek",
0x005e,
L"USB DVB-T device"
},
{
0x1025,
L"Hyper-Paltek",
0x005f,
L"USB DVB-T device"
},
{
0x1025,
L"Hyper-Paltek",
0x0300,
L"MP3 Player"
},
{
0x1025,
L"Hyper-Paltek",
0x0350,
L"MP3 Player"
},
{
0x1026,
L"Newly Corp.",
0x0,
L"0"
},
{
0x1027,
L"Time Domain",
0x0,
L"0"
},
{
0x1028,
L"Inovys Corp.",
0x0,
L"0"
},
{
0x1029,
L"Atlantic Coast Telesys",
0x0,
L"0"
},
{
0x102a,
L"Ramos Technology Co., Ltd",
0x0,
L"0"
},
{
0x102b,
L"Infotronic America, Inc.",
0x0,
L"0"
},
{
0x102c,
L"Etoms Electronics Corp.",
0x6151,
L"Q-Cam Sangha CIF"
},
{
0x102c,
L"Etoms Electronics Corp.",
0x6251,
L"Q-Cam VGA"
},
{
0x102d,
L"Winic Corp.",
0x0,
L"0"
},
{
0x1031,
L"Comax Technology, Inc.",
0x0,
L"0"
},
{
0x1032,
L"C-One Technology Corp.",
0x0,
L"0"
},
{
0x1033,
L"Nucam Corp.",
0x0068,
L"3,5'' HDD case MD-231"
},
{
0x1038,
L"SteelSeries ApS",
0x0100,
L"Ideazon Zboard"
},
{
0x1038,
L"SteelSeries ApS",
0x1361,
L"Ideazon Sensei"
},
{
0x1039,
L"devolo AG",
0x0824,
L"1866 802.11bg [Texas Instruments TNETW1450]"
},
{
0x1039,
L"devolo AG",
0x2140,
L"dsl+ 1100 duo"
},
{
0x103a,
L"PSA",
0xf000,
L"Actia Evo XS"
},
{
0x103d,
L"Stanton",
0x0100,
L"ScratchAmp"
},
{
0x103d,
L"Stanton",
0x0101,
L"ScratchAmp"
},
{
0x1043,
L"iCreate Technologies Corp.",
0x160f,
L"Wireless Network Adapter"
},
{
0x1043,
L"iCreate Technologies Corp.",
0x4901,
L"AV-836 Video Capture Device"
},
{
0x1043,
L"iCreate Technologies Corp.",
0x8006,
L"Flash Disk 32-256 MB"
},
{
0x1043,
L"iCreate Technologies Corp.",
0x8012,
L"Flash Disk 256 MB"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x7001,
L"Gigabyte U7000 DVB-T tuner"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x7002,
L"Gigabyte U8000 DVB-T tuner"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x7004,
L"Gigabyte U7100 DVB-T tuner"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x7005,
L"Gigabyte U7200 DVB-T tuner [AF9035]"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x7006,
L"Gigabyte U6000 DVB-T tuner [em2863]"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8001,
L"GN-54G"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8002,
L"GN-BR402W"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8003,
L"GN-WLBM101"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8004,
L"GN-WLBZ101 802.11b Adapter"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8005,
L"GN-WLBZ201 802.11b Adapter"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8006,
L"GN-WBZB-M 802.11b Adapter"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8007,
L"GN-WBKG"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x8008,
L"GN-WB01GS"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x800a,
L"GN-WI05GS"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x800b,
L"GN-WB30N 802.11n WLAN Card"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x800c,
L"GN-WB31N 802.11n USB WLAN Card"
},
{
0x1044,
L"Chu Yuen Enterprise Co., Ltd",
0x800d,
L"GN-WB32L 802.11n USB WLAN Card"
},
{
0x1046,
L"Winbond Electronics Corp. [hex]",
0x6694,
L"Generic W6694 USB"
},
{
0x1046,
L"Winbond Electronics Corp. [hex]",
0x8901,
L"Bluetooth Device"
},
{
0x1046,
L"Winbond Electronics Corp. [hex]",
0x9967,
L"W9967CF/W9968CF Webcam IC"
},
{
0x1048,
L"Targus Group International",
0x2010,
L"4-Port hub"
},
{
0x104b,
L"Mylex / Buslogic",
0x0,
L"0"
},
{
0x104c,
L"AMCO TEC International, Inc.",
0x0,
L"0"
},
{
0x104d,
L"Newport Corporation",
0x1003,
L"Model-52 LED Light Source Power Supply and Driver"
},
{
0x104f,
L"WB Electronics",
0x0001,
L"Infinity Phoenix"
},
{
0x104f,
L"WB Electronics",
0x0002,
L"Smartmouse"
},
{
0x104f,
L"WB Electronics",
0x0003,
L"FunProgrammer"
},
{
0x104f,
L"WB Electronics",
0x0004,
L"Infinity Unlimited"
},
{
0x104f,
L"WB Electronics",
0x0006,
L"Infinity Smart"
},
{
0x104f,
L"WB Electronics",
0x0007,
L"Infinity Smart module"
},
{
0x104f,
L"WB Electronics",
0x0008,
L"Infinity CryptoKey"
},
{
0x104f,
L"WB Electronics",
0x0009,
L"RE-BL PlayStation 3 IR-to-Bluetooth converter"
},
{
0x1050,
L"Yubico.com",
0x0010,
L"Yubikey (v1 or v2)"
},
{
0x1050,
L"Yubico.com",
0x0110,
L"Yubikey NEO(-N) OTP"
},
{
0x1050,
L"Yubico.com",
0x0111,
L"Yubikey NEO(-N) OTP+CCID"
},
{
0x1050,
L"Yubico.com",
0x0112,
L"Yubikey NEO(-N) CCID"
},
{
0x1050,
L"Yubico.com",
0x0113,
L"Yubikey NEO(-N) U2F"
},
{
0x1050,
L"Yubico.com",
0x0114,
L"Yubikey NEO(-N) OTP+U2F"
},
{
0x1050,
L"Yubico.com",
0x0115,
L"Yubikey NEO(-N) U2F+CCID"
},
{
0x1050,
L"Yubico.com",
0x0116,
L"Yubikey NEO(-N) OTP+U2F+CCID"
},
{
0x1050,
L"Yubico.com",
0x0120,
L"Yubikey Touch U2F Security Key"
},
{
0x1050,
L"Yubico.com",
0x0200,
L"Gnubby U2F"
},
{
0x1050,
L"Yubico.com",
0x0211,
L"Gnubby"
},
{
0x1050,
L"Yubico.com",
0x0401,
L"Yubikey 4 OTP"
},
{
0x1050,
L"Yubico.com",
0x0402,
L"Yubikey 4 U2F"
},
{
0x1050,
L"Yubico.com",
0x0403,
L"Yubikey 4 OTP+U2F"
},
{
0x1050,
L"Yubico.com",
0x0404,
L"Yubikey 4 CCID"
},
{
0x1050,
L"Yubico.com",
0x0405,
L"Yubikey 4 OTP+CCID"
},
{
0x1050,
L"Yubico.com",
0x0406,
L"Yubikey 4 U2F+CCID"
},
{
0x1050,
L"Yubico.com",
0x0407,
L"Yubikey 4 OTP+U2F+CCID"
},
{
0x1050,
L"Yubico.com",
0x0410,
L"Yubikey plus OTP+U2F"
},
{
0x1053,
L"Immanuel Electronics Co., Ltd",
0x0,
L"0"
},
{
0x1054,
L"BMS International Beheer N.V.",
0x5004,
L"DSL 7420 Loader"
},
{
0x1054,
L"BMS International Beheer N.V.",
0x5005,
L"DSL 7420 LAN Modem"
},
{
0x1055,
L"Complex Micro Interconnection Co., Ltd",
0x0,
L"0"
},
{
0x1056,
L"Hsin Chen Ent Co., Ltd",
0x0,
L"0"
},
{
0x1057,
L"ON Semiconductor",
0x0,
L"0"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0200,
L"FireWire USB Combo"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0400,
L"External HDD"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0500,
L"hub"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0701,
L"WD Passport (WDXMS)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0702,
L"WD Passport (WDXMS)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0704,
L"My Passport Essential (WDME)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0705,
L"My Passport Elite (WDML)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x070a,
L"My Passport Essential (WDBAAA), My Passport for Mac (WDBAAB), My Passport Essential SE (WDBABM), My Passport SE for Mac (WDBABW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x070b,
L"My Passport Elite (WDBAAC)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x070c,
L"My Passport Studio (WDBAAE)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x071a,
L"My Passport Essential (WDBAAA)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x071d,
L"My Passport Studio (WDBALG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0730,
L"My Passport Essential (WDBACY)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0732,
L"My Passport Essential SE (WDBGYS)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0740,
L"My Passport Essential (WDBACY)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0741,
L"My Passport Ultra"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0742,
L"My Passport Essential SE (WDBGYS)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0748,
L"My Passport (WDBKXH, WDBY8L)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x07a8,
L"My Passport (WDBBEP), My Passport for Mac (WDBLUZ)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x07ae,
L"My Passport Edge for Mac (WDBJBH)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x07ba,
L"PiDrive (WDLB)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0810,
L"My Passport Ultra (WDBZFP)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0816,
L"My Passport Air (WDBBLW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0820,
L"My Passport Ultra (WDBMWV, WDBZFP)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0822,
L"My Passport Ultra (WDBBUZ)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0824,
L"My Passport Slim (WDBPDZ)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0830,
L"My Passport Ultra (WDBZFP)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0837,
L"My Passport Ultra (WDBBKD)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0900,
L"MyBook Essential External HDD"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0901,
L"My Book Essential Edition (Green Ring) (WDG1U)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0902,
L"My Book Pro Edition (WDG1T)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0903,
L"My Book Premium Edition"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0905,
L"My Book Pro Edition II (WD10000C033-001)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x0910,
L"My Book Essential Edition (Green Ring) (WDG1U)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1001,
L"Elements Desktop (WDE1U)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1003,
L"WD Elements Desktop (WDE1UBK)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1010,
L"Elements Portable (WDBAAR)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1021,
L"Elements Desktop (WDBAAU)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1023,
L"Elements SE Portable (WDBABV)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1042,
L"Elements SE Portable (WDBPCK)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1048,
L"Elements Portable (WDBU6Y)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1078,
L"Elements Portable (WDBUZG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x107c,
L"Elements Desktop (WDBWLG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x10a2,
L"Elements SE Portable (WDBPCK)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x10a8,
L"Elements Portable (WDBUZG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x10b8,
L"Elements Portable (WDBU6Y, WDBUZG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1100,
L"My Book Essential Edition 2.0 (WDH1U)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1102,
L"My Book Home Edition (WDH1CS)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1103,
L"My Book Studio"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1104,
L"My Book Mirror Edition (WDH2U)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1105,
L"My Book Studio II"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1110,
L"My Book Essential (WDBAAF), My Book for Mac (WDBAAG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1111,
L"My Book Elite (WDBAAH)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1112,
L"My Book Studio (WDBAAJ), My Book Studio LX (WDBACH)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1123,
L"My Book 3.0 (WDBABP)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1130,
L"My Book Essential (WDBACW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1140,
L"My Book Essential (WDBACW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1230,
L"My Book (WDBFJK)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x1235,
L"My Book (WDBFJK0040HBK)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x2599,
L"My Passport Ultra (WD40NMZW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x259d,
L"My Passport Ultra (WDBBKD)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x259f,
L"My Passport Ultra (WD10JMVW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x25a1,
L"Elements / My Passport (WD20NMVW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x25a2,
L"Elements 25A2"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x25a3,
L"Elements Desktop (WDBWLG)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x25e2,
L"My Passport (WD40NMZW)"
},
{
0x1058,
L"Western Digital Technologies, Inc.",
0x30a0,
L"SATA adapter cable"
},
{
0x1059,
L"Giesecke & Devrient GmbH",
0x000b,
L"StarSign Bio Token 3.0"
},
{
0x105b,
L"Foxconn International, Inc.",
0xe065,
L"BCM43142A0 Bluetooth module"
},
{
0x105c,
L"Hong Ji Electric Wire & Cable (Dongguan) Co., Ltd",
0x0,
L"0"
},
{
0x105d,
L"Delkin Devices, Inc.",
0x0,
},