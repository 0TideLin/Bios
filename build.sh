#!/usr/bin/env bash
#
#导入环境变量
#
function ExportBuildEnv()
{
  export WORKSPACE=$PWD  #Build出来的文件会在这个路径下

  #
  #edk2的build工具需要这两个PATH才能在这里调用
  #
  export PACKAGES_PATH=$PWD/edk2:$PWD/TidePkg
  export EDK_TOOLS_PATH=$WORKSPACE/edk2/BaseTools

  #
  #iasl工具
  #
  export IASL_PREFIX=$PWD/TidePkg/ToolChain/acpica/  

  echo WORKSPACE:$WORKSPACE
  echo PACKAGES_PATH:$PACKAGES_PATH
  echo EDK_TOOLS_PATH:$EDK_TOOLS_PATH
  echo IASL_PREFIX:$IASL_PREFIX
  source $WORKSPACE/edk2/edksetup.sh BaseTools
}

function BuildCode()
{
  #启动edk2环境
  source $WORKSPACE/edk2/edksetup.sh

  if  [[  ! -f `which build` ||  ! -f `which GenFv` ]]; #此处是``，不是‘’, 沙比了
  then
    #build the tools if they don't yet exist. Bin scheme
    echo Building tools as they are not in the path 
    make -C $EDK_TOOLS_PATH
  elif [[ ( -f `which build` || -f `which GenFv`) && ! -d $EDK_TOOLS_PATH/Source/C/bin ]];
  then 
    #build the tools if they don't yet exist. BinWrapper scheme
    echo Building tools no $EDK_TOOLS_PATH/Source/C/bin directory
    make -C $EDK_TOOLS_PATH
  else
    echo using prebuilt tools
  fi
  echo $@
  if [ "$@" == "clean" ];then
    build clean
  elif [ "$@" == "cleanall"];then
    build cleanall
  else
    #选择编译的包或者模块
    build -p $WORKSPACE/TidePkg/TidePkg.dsc  -a AARCH64 -t GCC5
  fi
}



ExportBuildEnv
BuildCode $@