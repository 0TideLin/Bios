#!/usr/bin/env bash

echo `[[ -f `which build`] == 1 ]`

if  [[ ! -f `which build` ||  ! -f `which GenFv` ]]; #此处是``，不是‘’, 沙比了
then
  #build the tools if they don't yet exist. Bin scheme
  echo Building tools as they are not in the path
elif [[ ( -f `which build` || -f `which GenFv`) && ! -d $EDK_TOOLS_PATH/Source/C/bin ]];
then
  #build the tools if they don't yet exist. BinWrapper scheme
  echo Building tools no $EDK_TOOLS_PATH/Source/C/bin directory
else
  echo using prebuilt tools
fi