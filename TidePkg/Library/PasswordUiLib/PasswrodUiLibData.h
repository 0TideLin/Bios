#ifndef _PASSWORD_UI_LIB_DATA_H__
#define _PASSWORD_UI_LIB_DATA_H__

#define PASSWORD_STORAGE_SIZE 20
#define USER_STORAGE_SIZE     20


typedef struct _PASSWORD_UI_IFR_NVDATA
{
  UINT16 Status;
  CHAR16 User[USER_STORAGE_SIZE];
  CHAR16 Password[PASSWORD_STORAGE_SIZE];
}PASSWORD_UI_IFR_NVDATA;

#endif