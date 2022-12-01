#ifndef _HTTP_TEST_H_
#define _HTTP_TEST_H_

#include <Uefi.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/HttpLib.h>
#include <Library/NetLib.h>
#include <Library/DebugLib.h>
#include <Library/TimeBaseLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/ShellLib.h>
#include <Library/PrintLib.h>
#include <Pi/PiFirmwareFile.h>
#include <Pi/PiFirmwareVolume.h>
#include <Library/DxeServicesLib.h>
#include <Library/PeCoffLib.h>
#include <Library/FileExplorerLib.h>

#include <Guid/FileSystemVolumeLabelInfo.h>
#include <Guid/FileInfo.h>
#include <Include/Guid/ImageAuthentication.h>
#include <Guid/TlsAuthentication.h>

#include <Protocol/DevicePathToText.h>
#include <Protocol/Http.h>
#include <Protocol/ServiceBinding.h>
#include <Protocol/HttpUtilities.h>
#include <Protocol/Shell.h>
#include <Protocol/LoadFile2.h>
#include <Protocol/FirmwareVolume2.h>
#include <Protocol/PeCoffImageEmulator.h>
#include <Protocol/Runtime.h>


#define LOADED_IMAGE_PRIVATE_DATA_SIGNATURE   SIGNATURE_32('l','d','r','i')

typedef struct {
  UINTN                       Signature;
  /// Image handle
  EFI_HANDLE                  Handle;
  /// Image type
  UINTN                       Type;
  /// If entrypoint has been called
  BOOLEAN                     Started;
  /// The image's entry point
  EFI_IMAGE_ENTRY_POINT       EntryPoint;
  /// loaded image protocol
  EFI_LOADED_IMAGE_PROTOCOL   Info;
  /// Location in memory
  EFI_PHYSICAL_ADDRESS        ImageBasePage;
  /// Number of pages
  UINTN                       NumberOfPages;
  /// Original fixup data
  CHAR8                       *FixupData;
  /// Tpl of started image
  EFI_TPL                     Tpl;
  /// Status returned by started image
  EFI_STATUS                  Status;
  /// Size of ExitData from started image
  UINTN                       ExitDataSize;
  /// Pointer to exit data from started image
  VOID                        *ExitData;
  /// Pointer to pool allocation for context save/restore
  VOID                        *JumpBuffer;
  /// Pointer to buffer for context save/restore
  BASE_LIBRARY_JUMP_BUFFER    *JumpContext;
  /// Machine type from PE image
  UINT16                      Machine;
  /// PE/COFF Image Emulator Protocol pointer
  EDKII_PECOFF_IMAGE_EMULATOR_PROTOCOL  *PeCoffEmu;
  /// Runtime image list
  EFI_RUNTIME_IMAGE_ENTRY     *RuntimeData;
  /// Pointer to Loaded Image Device Path Protocol
  EFI_DEVICE_PATH_PROTOCOL    *LoadedImageDevicePath;
  /// PeCoffLoader ImageContext
  PE_COFF_LOADER_IMAGE_CONTEXT  ImageContext;
  /// Status returned by LoadImage() service.
  EFI_STATUS                  LoadImageStatus;
} LOADED_IMAGE_PRIVATE_DATA;

#define LOADED_IMAGE_PRIVATE_DATA_FROM_THIS(a) \
          CR(a, LOADED_IMAGE_PRIVATE_DATA, Info, LOADED_IMAGE_PRIVATE_DATA_SIGNATURE)


#define DEFAULT_BUF_SIZE  SIZE_32KB
#define MAX_BUF_SIZE      SIZE_4MB

#define IP4_CONFIG2_INTERFACE_INFO_NAME_LENGTH  32


#define HTTP_APP_NAME  L"http"

#define REQ_OK           0
#define REQ_NEED_REPEAT  1

#define USER_AGENT_HDR  "Mozilla/5.0 (EDK2; Linux) Gecko/20100101 Firefox/79.0"

#define TIMER_MAX_TIMEOUT_S  10

#define HTTP_PROGR_FRAME  L"[                                        ]"


//
// Number of steps in the progression slider.
//
#define HTTP_PROGRESS_SLIDER_STEPS  \
  ((sizeof (HTTP_PROGR_FRAME) / sizeof (CHAR16)) - 3)

//
// Size in number of characters plus one (final zero) of the message to
// indicate the progress of an HTTP download. The format is "[(progress slider:
// 40 characters)] (nb of KBytes downloaded so far: 7 characters) Kb". There
// are thus the number of characters in HTTP_PROGR_FRAME[] plus 11 characters
// (2 // spaces, "Kb" and seven characters for the number of KBytes).
//
#define HTTP_PROGRESS_MESSAGE_SIZE  \
  ((sizeof (HTTP_PROGR_FRAME) / sizeof (CHAR16)) + 12)



#define CLOSE_HTTP_HANDLE(ControllerHandle, HttpChildHandle) \
  do { \
    if (HttpChildHandle) { \
      CloseProtocolAndDestroyServiceChild ( \
        ControllerHandle, \
        &gEfiHttpServiceBindingProtocolGuid, \
        &gEfiHttpProtocolGuid, \
        HttpChildHandle \
        ); \
      HttpChildHandle = NULL; \
    } \
  } while (0)

#define SHELL_FREE_NON_NULL(Pointer)  \
do {                                \
  if ((Pointer) != NULL) {          \
    FreePool((Pointer));            \
    (Pointer) = NULL;               \
  }                                 \
} while(FALSE)


#define NEED_REDIRECTION(Code) \
(((Code >= HTTP_STATUS_300_MULTIPLE_CHOICES) \
&& (Code <= HTTP_STATUS_307_TEMPORARY_REDIRECT)) \
|| (Code == HTTP_STATUS_308_PERMANENT_REDIRECT))

typedef enum {
  HdrHost,
  HdrConn,
  HdrAgent,
  HdrMax
} HDR_TYPE;


//
// String descriptions for server errors.
//
STATIC CONST CHAR16  *ErrStatusDesc[] =
{
  L"400 Bad Request",
  L"401 Unauthorized",
  L"402 Payment required",
  L"403 Forbidden",
  L"404 Not Found",
  L"405 Method not allowed",
  L"406 Not acceptable",
  L"407 Proxy authentication required",
  L"408 Request time out",
  L"409 Conflict",
  L"410 Gone",
  L"411 Length required",
  L"412 Precondition failed",
  L"413 Request entity too large",
  L"414 Request URI to large",
  L"415 Unsupported media type",
  L"416 Requested range not satisfied",
  L"417 Expectation failed",
  L"500 Internal server error",
  L"501 Not implemented",
  L"502 Bad gateway",
  L"503 Service unavailable",
  L"504 Gateway timeout",
  L"505 HTTP version not supported"
};

typedef struct {
  UINTN                   ContentDownloaded;
  UINTN                   ContentLength;
  UINTN                   LastReportedNbOfBytes;
  UINTN                   BufferSize;
  UINTN                   Status;
  UINTN                   Flags;
  UINT8                   *Buffer;
  CHAR16                  *ServerAddrAndProto;
  CHAR16                  *Uri;
  EFI_HTTP_TOKEN          ResponseToken;
  EFI_HTTP_TOKEN          RequestToken;
  EFI_HTTP_PROTOCOL       *Http;
  EFI_HTTP_CONFIG_DATA    HttpConfigData;
} HTTP_DOWNLOAD_CONTEXT;


typedef struct {
  EFI_DEVICE_PATH_PROTOCOL   Header;
  EFI_GUID                   Guid;
}NET_DOWNLOAD_DEVICE_PATH;


typedef struct {
  NET_DOWNLOAD_DEVICE_PATH  NetDownLoadDevicePath;
  VENDOR_DEFINED_DEVICE_PATH VendorDefindDevicePath;
  EFI_DEVICE_PATH_PROTOCOL  End;
} NET_DOWNLOAD_IMAGE_DEVICE_PATH;


NET_DOWNLOAD_IMAGE_DEVICE_PATH  NetDownloadImageDevicePath = {
  {
    {
      0x01,
      0x04,
      {
        (UINT8) (sizeof (NET_DOWNLOAD_DEVICE_PATH) ),
        (UINT8) ((sizeof(NET_DOWNLOAD_DEVICE_PATH)) >> 8 )
      }
    },
    //
    //2fd72997-59ec-4c23-b713-90c079cf77aa
    //
    { 0x2fd72997, 0x59ec, 0x4c23, { 0xb7, 0x13, 0x90, 0xc0, 0x79, 0xcf, 0x77, 0xaa} }
  },
  {
    {
      MEDIA_DEVICE_PATH,
      MEDIA_VENDOR_DP,
      { sizeof (VENDOR_DEVICE_PATH),       0 }
    },
    //
    //be7503d7-8e88-4c12-a999-4f50c34313cf
    //
    { 0xbe7503d7, 0x8e88, 0x4c12, { 0xa9, 0x99, 0x4f, 0x50, 0xc3, 0x43, 0x13, 0xcf} }
  },
  {
    END_DEVICE_PATH_TYPE,
    END_ENTIRE_DEVICE_PATH_SUBTYPE,
    {
      (UINT8) (END_DEVICE_PATH_LENGTH),
      (UINT8) ((END_DEVICE_PATH_LENGTH) >> 8 )
    }
  }

};


#endif