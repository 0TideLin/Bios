/** @file

  Copyright (c) 2008 - 2011, Apple Inc. All rights reserved.<BR>
  Copyright (c) 2011 - 2019, Intel Corporation. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "Host.h"

//
// Reverse (UNIX to EFIAPI) gaskets
//

typedef
UINTN
(EFIAPI *CALL_BACK_1) (
  UINT64 Delta
  );

UINTN
ReverseGasketUint64 (
  UINTN  CallBack,
  UINT64 a
  )
{
  return ((CALL_BACK_1) CallBack) (a);
}

//
// UNIX ABI to EFI ABI call
//

typedef
UINTN
(EFIAPI *CALL_BACK_2) (
  VOID  *Context,
  VOID  *Key
  );

UINTN
ReverseGasketUint64Uint64 (
  VOID      *CallBack,
  VOID      *Context,
  VOID      *Key
  )
{
  return ((CALL_BACK_2) CallBack) (Context, Key);
}
