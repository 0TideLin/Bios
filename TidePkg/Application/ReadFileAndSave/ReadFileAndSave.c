#include "ReadFileAndSave.h"

EFI_STATUS
EFIAPI
ReadFileAndSaveMain(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
) {
  EFI_STATUS               Status;
  Status = EFI_SUCCESS;

  EFI_DEVICE_PATH_PROTOCOL *ReadFilePath;
  EFI_FILE_PROTOCOL        *ReadFileHandle;
  EFI_DEVICE_PATH_PROTOCOL *WriteFilePath;
  EFI_FILE_PROTOCOL        *WriteFileHandle;
  UINT64                   SourceFileSize;
  UINTN                    BufferSize;
  VOID                     *Buffer;
  UINT8                    *Output;

  Status = ChooseFile(NULL, NULL, NULL, &ReadFilePath); //Specified read file
  EfiOpenFileByDevicePath(&ReadFilePath, &ReadFileHandle, EFI_FILE_MODE_READ, 0);
  Status = ReadFileHandle->SetPosition( ReadFileHandle, (UINT64) -1);
  if (EFI_ERROR(Status)){
    Print(L"SetPosition %r\n", Status);
    return Status;
  }

  Status = ReadFileHandle->GetPosition(ReadFileHandle, &SourceFileSize);
  Print(L"SourceFileSize:%d\n", SourceFileSize);
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
  // CopyMem(Output, Buffer, BufferSize);
  // Print(L"BufferSize:%d\n", BufferSize);
  Output = (UINT8*)Buffer;
  for(UINTN Index = 0; Index < BufferSize; Index++)
  {
    Print(L"0x%x ", (*(Output + Index))  );
  }
  Print(L"\n---------------------------------------------\n");

  ReadFileHandle->Close(ReadFileHandle);

  return Status;

  Status = ChooseFile(NULL, NULL, NULL, &WriteFilePath);
  EfiOpenFileByDevicePath(&WriteFilePath, &WriteFileHandle, EFI_FILE_MODE_READ|EFI_FILE_MODE_WRITE, 0);
  Status = WriteFileHandle->SetPosition(ReadFileHandle, 0);
  if (EFI_ERROR(Status)){
    Print(L"SetPosition2 %r\n", Status);
    return Status;
  }

  Status = WriteFileHandle->Write(WriteFileHandle, &BufferSize, (VOID*)Output);
  if (EFI_ERROR(Status) ){
    Print(L"Write %r\n", Status);
    return Status;
  }
  WriteFileHandle->Close(WriteFileHandle);
  return Status;

}