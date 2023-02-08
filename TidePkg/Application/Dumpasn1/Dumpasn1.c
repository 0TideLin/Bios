#include "Dumpasn1.h"

typedef struct {
	int id;						/* Tag class + primitive/constructed */
	int tag;					/* Tag */
	long length;				/* Data length */
	int indefinite;				/* Item has indefinite length */
	int nonCanonical;			/* Non-canonical length encoding used */
	BYTE header[ 16 ];			/* Tag+length data */
	int headerSize;				/* Size of tag+length */
	} ASN1_ITEM;

static int fPos = 0;				/* Absolute position in data */

/* Get an ASN.1 object's tag and length.  Returns TRUE for an item
   available, FALSE for end-of-data, and a negative value for an invalid
   data */

static int getItem( FILE *inFile, ASN1_ITEM *item )
	{
	int tag, length, index = 0;

	memset( item, 0, sizeof( ASN1_ITEM ) );
	item->indefinite = FALSE;
	tag = item->header[ index++ ] = fgetc( inFile );
	if( tag == EOF )
		return( FALSE );
	fPos++;
	item->id = tag & ~TAG_MASK;
	tag &= TAG_MASK;
	if( tag == TAG_MASK )
		{
		int value;

		/* Long tag encoded as sequence of 7-bit values.  This doesn't try to
		   handle tags > INT_MAX, it'd be pretty peculiar ASN.1 if it had to
		   use tags this large */
		tag = 0;
		do
			{
			value = fgetc( inFile );
			if( value == EOF )
				return( FALSE );
			tag = ( tag << 7 ) | ( value & 0x7F );
			item->header[ index++ ] = value;
			fPos++;
			}
		while( value & LEN_XTND && index < 5 && !feof( inFile ) );
		if( index >= 5 )
			return( FALSE );
		}
	item->tag = tag;
	length = fgetc( inFile );
	if( length == EOF )
		return( FALSE );
	fPos++;
	item->header[ index++ ] = length;
	item->headerSize = index;
	if( length & LEN_XTND )
		{
		const int lengthStart = index;
		int i;

		length &= LEN_MASK;
		if( length > 4 )
			{
			/* Impossible length value, probably because we've run into
			   the weeds */
			return( -1 );
			}
		item->headerSize += length;
		item->length = 0;
		if( !length )
			item->indefinite = TRUE;
		for( i = 0; i < length; i++ )
			{
			int ch = fgetc( inFile );

			if( ch == EOF )
				{
				fPos += length - i;
				return( FALSE );
				}
			item->length = ( item->length << 8 ) | ch;
			item->header[ i + index ] = ch;
			}
		fPos += length;

		/* Check for the length being less then 128, which means it
		   shouldn't be encoded as a long length */
		if( !item->indefinite && item->length < 128 )
			item->nonCanonical = lengthStart;

		/* Check for the first 9 bits of the length being identical and
		   if they are, remember where the encoded non-canonical length
		   starts */
		if( item->headerSize - lengthStart > 1 )
			{
			if( ( item->header[ lengthStart ] == 0x00 ) && \
				( ( item->header[ lengthStart + 1 ] & 0x80 ) == 0x00 ) )
				item->nonCanonical = lengthStart - 1;
			if( ( item->header[ lengthStart ] == 0xFF ) && \
				( ( item->header[ lengthStart + 1 ] & 0x80 ) == 0x80 ) )
				item->nonCanonical = lengthStart - 1;
			}
		}
	else
		item->length = length;

	return( TRUE );
	}

/**
  Read file content into BufferPtr, the size of the allocate buffer
  is *FileSize plus AddtionAllocateSize.

  @param[in]       FileHandle            The file to be read.
  @param[in, out]  BufferPtr             Pointers to the pointer of allocated buffer.
  @param[out]      FileSize              Size of input file
  @param[in]       AddtionAllocateSize   Addtion size the buffer need to be allocated.
                                         In case the buffer need to contain others besides the file content.

  @retval   EFI_SUCCESS                  The file was read into the buffer.
  @retval   EFI_INVALID_PARAMETER        A parameter was invalid.
  @retval   EFI_OUT_OF_RESOURCES         A memory allocation failed.
  @retval   others                       Unexpected error.

**/
EFI_STATUS
ReadFileContent (
  IN      SHELL_FILE_HANDLE  FileHandle,
  IN OUT  VOID             **BufferPtr,
  OUT  UINTN               *FileSize,
  IN      UINTN            AddtionAllocateSize
  )

{
  UINTN       BufferSize;
  VOID        *Buffer;
  EFI_STATUS  Status;


  if ((FileHandle == NULL) || (FileSize == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  Buffer = NULL;

  //
  // Get the file size
  //
  BufferSize = 2000;
  Buffer     = AllocateZeroPool (BufferSize);
  Status     = ShellReadFile(FileHandle, &BufferSize, &Buffer);
  if (Status == EFI_BUFFER_TOO_SMALL) {
    FreePool(Buffer);
    Buffer = AllocateZeroPool(BufferSize);
    Status     = ShellReadFile(FileHandle, &BufferSize, &Buffer);
  }
  if(EFI_ERROR(Status)){
    return Status;
  }

  *BufferPtr = Buffer;
  return Status;
}

EFI_STATUS
EFIAPI
Dumpasn1Run(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS          Status;
  SHELL_FILE_HANDLE   FileHandle;
  UINTN               *SigData;
  UINTN               SigDataSize;
  FILE                *SigFile;
  ASN1_ITEM item;

  SigFile = fopen("grb.sig", "r");
  if(SigFile == NULL){
    Print(L"%d\n", __LINE__);
    return 0;
  }

  // ShellOpenFileByName(L"grb.sig", &FileHandle, EFI_FILE_MODE_READ, 0);
  // Status = ReadFileContent(
  //           FileHandle,
  //           &SigData,
  //           &SigDataSize,
  //           0
  // );
  // if(EFI_ERROR(Status)){
  //   Print(L"%d\n", __LINE__);
  //   return Status;
  // }

  Status = getItem(SigFile, &item);


  return Status;
}