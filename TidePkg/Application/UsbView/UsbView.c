#include "UsbView.h"


CHAR16                           *mFormat;
CHAR8                            *mLanguage;
UINTN                            mSelectPort;
EFI_DEVICE_PATH_TO_TEXT_PROTOCOL *mDevice2TextProtocol;
EFI_HII_HANDLE                   *mUsbViewHiiHandle;
UINT16                            mMaxLevel;

STATIC CONST SHELL_PARAM_ITEM ParamList[] = {
  {L"-a",  TypeFlag},
  {L"-s",  TypeValue},
  {NULL, TypeValue}
};

EFI_STATUS
EFIAPI
InitmVariable()
{
  EFI_STATUS Status;

  mFormat = AllocatePool( sizeof(CHAR16) * 20 );
  UnicodeSPrint(mFormat, 20, L"  ");

  mLanguage = AllocatePool(10);
  AsciiSPrint(mLanguage, 10, "en-us");


  Status = gBS->LocateProtocol(
                        &gEfiDevicePathToTextProtocolGuid,
                        NULL,
                        (VOID**)&mDevice2TextProtocol);

  return Status;
}

EFI_HII_HANDLE
InitializeHiiPackage( EFI_HANDLE ImageHandle)
{
  EFI_STATUS                        Status;
  EFI_HII_PACKAGE_LIST_HEADER       *PackageList;
  EFI_HII_HANDLE                    HiiHandle;

  //
  //Retrieve HII package list from ImageHandle
  //
  Status = gBS->OpenProtocol(
                        ImageHandle,
                        &gEfiHiiPackageListProtocolGuid,
                        (VOID**)&PackageList,
                        ImageHandle,
                        NULL,
                        EFI_OPEN_PROTOCOL_GET_PROTOCOL
                        );
  ASSERT_EFI_ERROR(Status);

  if(EFI_ERROR(Status)){
    // Print(L"Retrieve HII package list %r\n", Status);
    return NULL;
  }

  //
  //Publish HII package list to HII Database.
  //
  Status = gHiiDatabase->NewPackageList(
                              gHiiDatabase,
                              PackageList,
                              NULL,
                              &HiiHandle
                              );
  ASSERT_EFI_ERROR( Status);
  if(EFI_ERROR(Status)) {
    return NULL;
  }

  return HiiHandle;
}

EFI_STATUS
EFIAPI
PrintDeviceDesc(IN CONST EFI_HANDLE Handle, BOOLEAN AllDisplay)
{
  EFI_STATUS                    Status;
  EFI_USB_IO_PROTOCOL           *UsbIo;
  EFI_USB_DEVICE_DESCRIPTOR     DeviceDesc;
  EFI_USB_CONFIG_DESCRIPTOR     ConfigDesc;
  EFI_USB_INTERFACE_DESCRIPTOR  InterfaceDesc;
  EFI_USB_ENDPOINT_DESCRIPTOR   EndpointDesc;
  CHAR16                        *Manufacturer;
  UINT16                        *LangIdTable;
  UINT16                        TableSize;
  UINT16                        FormatCount = 0;
  Status = gBS->HandleProtocol(Handle,
                              &gEfiUsbIoProtocolGuid,
                              (VOID**)&UsbIo);
  //
  //Only UsbIo protocol can get the Desc
  //
  if(UsbIo == NULL || EFI_ERROR(Status) ){
    return Status;
  }


  Status = UsbIo->UsbGetSupportedLanguages(UsbIo, &LangIdTable, &TableSize);
  Status = UsbIo->UsbGetDeviceDescriptor(UsbIo, &DeviceDesc);

  if (EFI_ERROR (Status) || (TableSize == 0) || (LangIdTable == NULL)) {
    Manufacturer = L"??";
  }
  UsbIo->UsbGetStringDescriptor(UsbIo,
                                LangIdTable[0],
                                DeviceDesc.StrManufacturer,
                                &Manufacturer);

  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 20, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_DEVICE_DESC), mUsbViewHiiHandle,
                mFormat,Manufacturer,
                mFormat,DeviceDesc.DeviceClass,
                mFormat,DeviceDesc.DeviceSubClass,
                mFormat,DeviceDesc.DeviceProtocol,
                mFormat,DeviceDesc.BcdUSB,
                mFormat,DeviceDesc.BcdDevice,
                mFormat,DeviceDesc.MaxPacketSize0);
  }
  if( !AllDisplay )
  {
    goto DisReturn;
  }

  Status = UsbIo->UsbGetConfigDescriptor(UsbIo, &ConfigDesc);
  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 20, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_CONFIG_DESC), mUsbViewHiiHandle,
                mFormat,ConfigDesc.ConfigurationValue,
                mFormat,ConfigDesc.MaxPower*2,
                mFormat,ConfigDesc.NumInterfaces,
                mFormat,ConfigDesc.Attributes);
  }

  Status = UsbIo->UsbGetInterfaceDescriptor(UsbIo, &InterfaceDesc);
  if(!EFI_ERROR (Status)){
    UnicodeSPrint(mFormat, 20, L"%s  ", mFormat);FormatCount++;
    ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_INTERFACE_DESC), mUsbViewHiiHandle,
                mFormat,InterfaceDesc.InterfaceNumber,
                mFormat,InterfaceDesc.InterfaceClass,
                mFormat,InterfaceDesc.InterfaceSubClass,
                mFormat,InterfaceDesc.InterfaceProtocol);

    UnicodeSPrint(mFormat, 20, L"%s  ", mFormat);FormatCount++;
    for(UINT16 EpIndex = 0; EpIndex < InterfaceDesc.NumEndpoints; EpIndex++)
    {
      UsbIo->UsbGetEndpointDescriptor(UsbIo, EpIndex, &EndpointDesc);
      ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_ENDPOINT_DESC), mUsbViewHiiHandle,
                  mFormat,EpIndex,
                  mFormat,EndpointDesc.EndpointAddress,
                  mFormat,EndpointDesc.Interval,
                  mFormat,EndpointDesc.MaxPacketSize,
                  mFormat,EndpointDesc.Attributes);
    }
  }

DisReturn:
  mFormat[ StrLen(mFormat) - (FormatCount*2) ] = L'\0';
  return Status;
}

VOID
EFIAPI
PrintMessage(IN CONST EFI_HANDLE Handle, BOOLEAN AllDisplay, BOOLEAN Select)
{
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;
  CHAR16                    *UsbDevicePathString;
  CHAR16                    *StringPath;
  CHAR16                    *DeviceName;

  DevicePath = DevicePathFromHandle( Handle );

  UsbDevicePathString = AllocateZeroPool( sizeof(CHAR16)*100 );
  GetUsbParentPortAndInterface(DevicePath, UsbDevicePathString);

  if( DevicePath == NULL ){
    StringPath = L"NULL";
  }else{
    StringPath = mDevice2TextProtocol->ConvertDevicePathToText(DevicePath, TRUE, TRUE);
  }

  gEfiShellProtocol->GetDeviceName(Handle,
                                  EFI_DEVICE_NAME_USE_COMPONENT_NAME|EFI_DEVICE_NAME_USE_DEVICE_PATH,
                                  mLanguage,
                                  &DeviceName);
  if( DeviceName == NULL )
  {
    DeviceName = L"Device";
  }
  ShellPrintHiiEx(-1, -1, NULL, STRING_TOKEN(STR_DEVICE_AND_PATH),mUsbViewHiiHandle,
                                mFormat, ConvertHandleToHandleIndex( Handle ),
                                StrCmp(DeviceName, StringPath) == 0 ? L"Device" : DeviceName,
                                UsbDevicePathString);
  //
  //Show Usb Io Device Info.
  //

  PrintDeviceDesc( Handle , AllDisplay);

  SHELL_FREE_NON_NULL(StringPath);
  SHELL_FREE_NON_NULL(UsbDevicePathString);

  return;
}


VOID
EFIAPI
SetUnionSetpIndx(USB_UNION_SET *UnionSet ,UINT16 NumOfHandles, UINT16 Level)
{
  UINT16 Index;

  if(Level >= mMaxLevel) return;

  for (Index = 0; Index < NumOfHandles; Index++)
  {
    if( (UnionSet + Index)->Level == Level )
    {
      //
      //Find the Parent port and set the pIndex to parent port's index.
      //
      if( Level >= 2 )
      {
        for( UINT16 HandleIndex = 0; HandleIndex < NumOfHandles; HandleIndex++ )
        {
          if( (UnionSet + HandleIndex)->ParAndIf[Level - 2].ParentPort == (UnionSet + Index)->ParAndIf[Level -2].ParentPort &&
               (HandleIndex != Index ) &&
               (UnionSet + HandleIndex)->Level == (Level - 1) )
          {
            (UnionSet + Index)->pIndex = HandleIndex;
          }
        }
      }

      //
      //The same port but not the Interface 0, set it's pIndex to the Interface 0's index.
      //
      if( (UnionSet + Index)->ParAndIf[Level -1].Interface != 0  )
      {
        for( UINT16 HandleIndex = 0; HandleIndex < NumOfHandles; HandleIndex++ )
        {
          if( (UnionSet + HandleIndex)->Level == Level && (HandleIndex != Index ) &&
              (UnionSet + HandleIndex)->ParAndIf[ Level-1 ].ParentPort == (UnionSet + Index)->ParAndIf[Level-1].ParentPort)
          {
            (UnionSet + Index)->pIndex = HandleIndex;
          }
        }
      }

    }//end if
  }//end for

  return SetUnionSetpIndx(UnionSet, NumOfHandles, Level+1);

}

EFI_STATUS
EFIAPI
PrintRootHubDesc(IN CONST EFI_HANDLE Handle)
{
  EFI_STATUS Status;
  EFI_USB2_HC_PROTOCOL  *Usb2Hc;
  UINT8 MaxSpeed;
  UINT8 PortNumber;
  UINT8 Is64Bit;
  Status = gBS->HandleProtocol(Handle,
                    &gEfiUsb2HcProtocolGuid,
                    (VOID**)&Usb2Hc);
  Status = Usb2Hc->GetCapability(Usb2Hc, &MaxSpeed, &PortNumber, &Is64Bit);
  ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_ROOT_CAPABILITY), mUsbViewHiiHandle,
                                                                    MaxSpeed,
                                                                    PortNumber,
                                                                    Is64Bit);
  //
  //Get info by Pci io?
  //
  return Status;
}

VOID
UnionSetParentPortAndInterface(
   EFI_DEVICE_PATH_PROTOCOL* DevPath,
   USB_UNION_SET            *UnionSet
   )
{
  USB_DEVICE_PATH           *UsbDevicePath;
  EFI_DEVICE_PATH_PROTOCOL  *pDevPath=DevPath;
  UnionSet->Level = 0;
  if(DevPath == NULL){
    UnionSet->Level = 0;
    return ;
  }


  while(!IsDevicePathEnd(pDevPath)){
    if(pDevPath->Type == MESSAGING_DEVICE_PATH && pDevPath->SubType == MSG_USB_DP){
      UsbDevicePath = (USB_DEVICE_PATH*)pDevPath;
      UnionSet->ParAndIf[UnionSet->Level].ParentPort = UsbDevicePath->ParentPortNumber;
      UnionSet->ParAndIf[UnionSet->Level].Interface  = UsbDevicePath->InterfaceNumber;
      UnionSet->Level ++;
    }
    pDevPath = NextDevicePathNode(pDevPath);
  }

  mMaxLevel = (mMaxLevel > UnionSet->Level) ? mMaxLevel : UnionSet->Level;
  return ;
}

VOID
GetUsbParentPortAndInterface(
   EFI_DEVICE_PATH_PROTOCOL* DevPath,
   CHAR16             *String
   )
{
  USB_DEVICE_PATH           *UsbDevicePath;
  EFI_DEVICE_PATH_PROTOCOL  *pDevPath=DevPath;
  if(DevPath == NULL){
    String = L"None";
    return ;
  }

  while(!IsDevicePathEnd(pDevPath)){

    if(pDevPath->Type == MESSAGING_DEVICE_PATH && pDevPath->SubType == MSG_USB_DP){
      UsbDevicePath = (USB_DEVICE_PATH*)pDevPath;
      UnicodeSPrint(String + StrLen(String), 100, L"||Port%d-If%d", UsbDevicePath->ParentPortNumber, UsbDevicePath->InterfaceNumber);
    }
    pDevPath = NextDevicePathNode(pDevPath);
  }
  return ;
}

VOID
FindChildDevice(EFI_HANDLE *HandleBuffer,
                USB_UNION_SET *UnionSet,
                UINT16 ParentIndex,
                BOOLEAN AllDisplay,
                BOOLEAN Select,
                UINT8 Level,
                UINTN NumOfHandles)
{
  UINT16  Index;
  for( Index = 0; Index < NumOfHandles; Index++ )
  {

  }
}

//
//Device
//
EFI_STATUS
EnumerUsbDevieInfo(IN CONST EFI_HANDLE *HandleBuffer, UINTN NumOfHandles, BOOLEAN AllDisplay, BOOLEAN Select )
{
  EFI_STATUS                Status;
  UINT16                    Index;
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;

  USB_UNION_SET             *UnionSet;
  UnionSet = AllocateZeroPool(sizeof(USB_UNION_SET) * NumOfHandles );

  for( Index = 0; Index < NumOfHandles; Index++ )
  {
    DevicePath = DevicePathFromHandle( HandleBuffer[Index] );
    UnionSetParentPortAndInterface(DevicePath, (UnionSet + Index) );
    (UnionSet + Index)->pIndex = Index;
  }

  SetUnionSetpIndx(UnionSet, NumOfHandles, 1);


  for( Index = 0; Index < NumOfHandles; Index++ )
  {
    if( (UnionSet + Index)->pIndex == Index && (UnionSet + Index)->Level == 1)
    {
      //
      //If select the handle index, only print the select one detail message. Otherwise, print all device's message.
      //
      if( !Select || ( Select && ConvertHandleToHandleIndex( HandleBuffer[Index] ) == mSelectPort ) )
      {
        PrintMessage(HandleBuffer[Index], AllDisplay, Select);

        if(Select)
        {
          return Status;
        }
      }

      //
      //Find child device
      //
      FindChildDevice( HandleBuffer, UnionSet, Index, AllDisplay, Select, 1, NumOfHandles);
    }

  }

  return Status;
}


//
//Roothub
//
EFI_STATUS
EnumerUsbRootInfo(IN CONST EFI_HANDLE *HandleBuffer, UINTN NumOfHandles, BOOLEAN AllDisplay, BOOLEAN Select)
{
  EFI_STATUS                Status;
  UINT16                    Index;
  EFI_DEVICE_PATH_PROTOCOL  *DevicePath;
  CHAR16                    *StringPath;
  CHAR16                    *DeviceName;
  EFI_HANDLE                *ChildControllerHandleBuffer;
  UINTN                     ChildControllerHandleCount;
  // //for debug
  // EFI_USB_IO_PROTOCOL        *UsbIo;
  // UINTN                      NumOfUsbIoHandles;
  // EFI_HANDLE                 *UsbIoHandleBuffer;
  // Status = gBS->LocateHandleBuffer( ByProtocol,
  //                                   &gEfiUsbIoProtocolGuid,
  //                                   NULL,
  //                                   &NumOfUsbIoHandles,
  //                                   &UsbIoHandleBuffer);
  // for( UINT16 UsbIoIndex = 0; UsbIoIndex < NumOfUsbIoHandles; UsbIoIndex++ )
  // {
  //   Status = gBS->HandleProtocol( UsbIoHandleBuffer[UsbIoIndex],
  //                                 &gEfiUsbIoProtocolGuid,
  //                                 (VOID**)&UsbIo);
  //   Print(L"[%02x] ", ConvertHandleToHandleIndex( UsbIoHandleBuffer[UsbIoIndex] ) );
  // }
  // Print(L"\n");

  //
  //Enumerate all Roothub and Roothub's child device
  //
  for( Index = 0; Index < NumOfHandles; Index++)
  {
    //
    //Get the DeviceName and DevicePath text
    //
    DevicePath = DevicePathFromHandle( HandleBuffer[Index] );
    if(DevicePath == NULL){
      Print(L"Root not DevicePath:%r\n", Status);
      continue;
    }
    gEfiShellProtocol->GetDeviceName(HandleBuffer[Index],
                                    EFI_DEVICE_NAME_USE_COMPONENT_NAME|EFI_DEVICE_NAME_USE_DEVICE_PATH,
                                    mLanguage,
                                    &DeviceName);

    StringPath = mDevice2TextProtocol->ConvertDevicePathToText(DevicePath, TRUE, TRUE);

    //
    //Look up the parent-child relationship about the handle.
    //
    ChildControllerHandleBuffer = NULL;
    Status = ParseHandleDatabaseForChildControllers(
                                      HandleBuffer[Index],
                                      &ChildControllerHandleCount,
                                      &ChildControllerHandleBuffer
                                      );
    //
    //If select the handle index, only print the select one detail message. Otherwise, print all device's message.
    //
    if( !Select || ( Select && ConvertHandleToHandleIndex( HandleBuffer[Index] ) == mSelectPort ) )
    {
      ShellPrintHiiEx(-1,-1,NULL,STRING_TOKEN(STR_ROOT_AND_PATH), mUsbViewHiiHandle,
                          ConvertHandleToHandleIndex(HandleBuffer[Index]),
                          (DeviceName != NULL ? DeviceName : L"Unknown"),
                          StringPath);
      //
      //Print detail message
      //
      if( AllDisplay )
      {
        PrintRootHubDesc(HandleBuffer[Index]);
      }

      if( Select )
      {
        return Status;
      }
    }



    //
    //Print child device message.
    //
    if( ChildControllerHandleCount == 0 )
    {

    } else {
      UnicodeSPrint( mFormat, 20, L"%s  ", mFormat );
      EnumerUsbDevieInfo( ChildControllerHandleBuffer,  ChildControllerHandleCount, AllDisplay, Select );
      mFormat[ StrLen( mFormat ) - 2 ] = L'\0';

    }


    SHELL_FREE_NON_NULL(StringPath);
    SHELL_FREE_NON_NULL(ChildControllerHandleBuffer);
  }

  return Status;
}

EFI_STATUS
EFIAPI
RunUsbView(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS              Status;
  LIST_ENTRY              *CheckPackage;
  CHAR16                  *ProblemParam;
  CONST CHAR16            *CommandLine;
  BOOLEAN                 AllDisplay = FALSE;
  BOOLEAN                 Select = FALSE;
  UINTN                   ParamCount;
  UINTN                   NumOfUsbHcHandles;
  EFI_HANDLE              *UsbHcHandleBuffer;

  Status = ShellInitialize();
  if( EFI_ERROR(Status) ){
    return SHELL_ABORTED;
  }

  //
  //Init module variable
  //
  Status = InitmVariable();

  if(EFI_ERROR(Status)){
    Print(L"Init mVariable %r\n", Status);
    return Status;
  }

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
    goto Error;
  }

  //
  //Check the number of parameters
  //
  Status = EFI_INVALID_PARAMETER;
  ParamCount = ShellCommandLineGetCount( CheckPackage);
  // Print(L"Param Count:%d\n", ParamCount);

  if( ParamCount > 2 )
  {
    ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_GEN_TOO_MANY), mUsbViewHiiHandle, L"UsbView" );
    ShellCommandLineFreeVarList( CheckPackage );
    return (SHELL_INVALID_PARAMETER);
  }

  if( ShellCommandLineGetFlag( CheckPackage, L"-a") )
  {
    AllDisplay = TRUE;
  }

  if( ShellCommandLineGetFlag( CheckPackage, L"-s" ) )
  {
    AllDisplay = TRUE;
    Select = TRUE;
    CommandLine = ShellCommandLineGetValue( CheckPackage, L"-s" );
    if( CommandLine == NULL)
    {
      ShellPrintHiiEx( -1, -1, NULL, STRING_TOKEN(STR_GEN_TOO_FEW), mUsbViewHiiHandle, L"-s" );
    }
    Status = ShellConvertStringToUint64( CommandLine, &mSelectPort, TRUE, FALSE );
    // Print(L"%x\n", mSelectPort);
  }


  Status = gBS->LocateHandleBuffer( ByProtocol,
                                    &gEfiUsb2HcProtocolGuid,
                                    NULL,
                                    &NumOfUsbHcHandles,
                                    &UsbHcHandleBuffer
                                  );


  if( EFI_ERROR( Status ) )
  {
    Print(L"HandleBuffer:%r\n", Status);
    return Status;
  }

  // Print(L"Hc Handles:%d\n", NumOfUsbHcHandles);
  mMaxLevel = 0;
  EnumerUsbRootInfo( UsbHcHandleBuffer, NumOfUsbHcHandles, AllDisplay, Select );

Error:
  SHELL_FREE_NON_NULL( UsbHcHandleBuffer );
  SHELL_FREE_NON_NULL( mFormat );
  SHELL_FREE_NON_NULL( mLanguage );
  SHELL_FREE_NON_NULL( mDevice2TextProtocol );
  return Status;
}