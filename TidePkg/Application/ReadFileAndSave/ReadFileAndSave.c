#include "ReadFileAndSave.h"

EFI_STATUS
EFIAPI
ReadFileAndSaveMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
) {
  EFI_STATUS               Status;
  EFI_DEVICE_PATH_PROTOCOL *ReadFilePath;
  EFI_FILE_PROTOCOL        *ReadFileHandle;
  UINT64                   SourceFileSize;
  UINTN                    BufferSize;
  VOID                     *Buffer;
  CHAR8                    *Output;

  Status = ChooseFile(NULL, NULL, NULL, &ReadFilePath); //Specified read file
  EfiOpenFileByDevicePath(&ReadFilePath, &ReadFileHandle, EFI_FILE_MODE_READ, 0);
  Status = ReadFileHandle->SetPosition( ReadFileHandle, (UINT64) -1);
  if (EFI_ERROR(Status)){
    Print(L"SetPosition %r\n", Status);
    return Status;
  }

  Status = ReadFileHandle->GetPosition(ReadFileHandle, &SourceFileSize);
  if (EFI_ERROR(Status)){
    Print(L"GetPosition %r\n", Status);
    return Status;
  }

  Status = ReadFileHandle->SetPosition(ReadFileHandle, 0);
  if (EFI_ERROR(Status)){
    Print(L"SetPosition2 %r\n", Status);
    return Status;
  }

  BufferSize = (UINTN) SourceFileSize ;
  Status = ReadFileHandle->Read(ReadFileHandle, &BufferSize, Buffer);
  if (EFI_ERROR(Status) ){
    Print(L"Read %r\n", Status);
    return Status;
  }
  Output = Buffer;
  for(UINTN Index = 0; Index < BufferSize; Index++){
    Print(L"%02x ", Output[Index]);
  }
  Print(L"\n");

  ReadFileHandle->Close(ReadFileHandle);

  return Status;

}