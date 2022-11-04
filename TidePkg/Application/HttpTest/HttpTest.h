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

#include <Guid/FileSystemVolumeLabelInfo.h>
#include <Guid/FileInfo.h>

#include <Protocol/DevicePathToText.h>
#include <Protocol/Http.h>
#include <Protocol/ServiceBinding.h>
#include <Protocol/HttpUtilities.h>

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

#endif