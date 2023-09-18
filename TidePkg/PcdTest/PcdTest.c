#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/PcdLib.h>

EFI_STATUS
DoNothing()
{
  if(PcdGetBool(TidePcdFeatureFlag)||
  PcdGetBool(TidePcdFixedAtBuild)||
  PcdGetBool(TidePcdPatchAbleInModule)||
  PcdGetBool(TidePcdDynamic)||
  PcdGetBool(TidePcdDynamicEx)){}

  return EFI_SUCCESS;
}