#DSC(EDK2 platform description) fils is a list of:
# EDK2 Module INF files
# EDK Components
# EDK Libraries(only used by EDK Components)
# EDK2 Library Class Instance Mappings (only used by EDK2 Modules)
# EDK2 PCD Entries
########################################################################################
#Defines
#定义变量，格式：	Name = Value
#				 DEFINE MACRO = Value 定义全局宏，在FDF文件中和！include包含的文件中，可使用$(MACRO)来访问
########################################################################################
[Defines]
	PLATFORM_NAME 				= TidePkg
	PLATFORM_GUID 				= 68855abd-31ef-4431-8371-bfe89b8bbfe4 #生成网址：https://www.guidgenerator.com
	PLATFORM_VERSION 			= 0.01
	DSC_SPECIFICATION			= 0x00010006
	OUTPUT_DIRECTORY			= Build/TidePkg
	SUPPORTED_ARCHITECTURES 	= AARCH64|ARM
	BUILD_TARGETS				= DEBUG|RELEASE|NOOPT
	SKUID_IDENTIFIER			= DEFAULT
	DEFINE DEBUG_ENABLE_OUTPUT	= True

########################################################################################
#LibraryClasses
#提供库入口
#语法格式：[LibraryClasses.$(Arch).$(MODULE_TYPE), LibraryClasses.$(Arch).$(MODULE_TYPE)]
#			LibraryName | Path/LibraryName.inf
#该节在dsc文件中的[Components]下定义，与inf文件联系在一起
########################################################################################
[LibraryClasses]
	BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
	BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
	UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
	!if $(DEBUG_ENABLE_OUTPUT)
	DebugLib|MdePkg/Library/UefiDebugLibConOut/UefiDebugLibConOut.inf
	DebugPrintErrorLevelLib|MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf
	!else   ## DEBUG_ENABLE_OUTPUT
		DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
	!endif  ## DEBUG_ENABLE_OUTPUT
	PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
	MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
	UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
    UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
	DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
	PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
	HiiLib|MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
	UefiHiiServicesLib|MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
	UefiApplicationEntryPoint|MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  ShellCEntryLib|ShellPkg/Library/UefiShellCEntryLib/UefiShellCEntryLib.inf
  UefiDriverEntryPoint|MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
	BaseBmpSupportLib|MdeModulePkg/Library/BaseBmpSupportLib/BaseBmpSupportLib.inf
	SafeIntLib|MdePkg/Library/BaseSafeIntLib/BaseSafeIntLib.inf
	HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
	FileExplorerLib|MdeModulePkg/Library/FileExplorerLib/FileExplorerLib.inf
	PciBusDxe|MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
	CustomizedDisplayLib|MdeModulePkg/Library/CustomizedDisplayLib/CustomizedDisplayLib.inf
	PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
	UefiBootManagerLib|MdeModulePkg/Library/UefiBootManagerLib/UefiBootManagerLib.inf
	DxeServicesTableLib|MdePkg/Library/DxeServicesTableLib/DxeServicesTableLib.inf
	DxeServicesLib|MdePkg/Library/DxeServicesLib/DxeServicesLib.inf
	PeCoffGetEntryPointLib|MdePkg/Library/BasePeCoffGetEntryPointLib/BasePeCoffGetEntryPointLib.inf
	ReportStatusCodeLib|MdePkg/Library/BaseReportStatusCodeLibNull/BaseReportStatusCodeLibNull.inf
	ShellLib|ShellPkg/Library/UefiShellLib/UefiShellLib.inf
	FileHandleLib|MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
	SortLib|MdeModulePkg/Library/UefiSortLib/UefiSortLib.inf
	IoLib|MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic.inf
	RegisterFilterLib|MdePkg/Library/RegisterFilterLibNull/RegisterFilterLibNull.inf
	HandleParsingLib|ShellPkg/Library/UefiHandleParsingLib/UefiHandleParsingLib.inf

########################################################################################
#Components
#定义模块编译的节，通过指定模块.inf文件所在的位置，Build工具编译生成.efi文件
#语法格式： [Components.$(Arch)]
#			Path/and/Filename.inf
#					或
#			[Components.$(Arch)]
#				Path/and/Filename.inf{
#				<LibraryClasses>#嵌套节
#				  LibraryName | Path/LibraryName.inf
#				#可继续嵌套<>、<>
#              }#大括号中的内容仅对当前的INF文件有效
#
########################################################################################
[Components]
	TidePkg/Application/UsbView/UsbViewApp.inf
	TidePkg/Application/PciRead/PciRead.inf
	TidePkg/Application/HttpTest/HttpTest.inf

[BuildOptions.Common]

  *_*_*_CC_FLAGS = -fno-stack-protector  #解决报错堆栈保护

!include StdLib/StdLib.inc  #edk2-libc包解决报错memcpy no define, 编译器C库问题