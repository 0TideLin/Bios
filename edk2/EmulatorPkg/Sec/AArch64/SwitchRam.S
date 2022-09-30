#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2011, Intel Corporation. All rights reserved.<BR>
# Portions copyright (c) 2011, Apple Inc. All rights reserved.
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
#------------------------------------------------------------------------------


// VOID
// EFIAPI
// SecSwitchStack (
//   VOID  *StackDelta
//   )
//
ASM_GLOBAL ASM_PFX(SecSwitchStack)
ASM_PFX(SecSwitchStack):
    mov   x1, sp
    add   x1, x0, x1
    mov   sp, x1
    ret

