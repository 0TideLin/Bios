#
#add export
#
export WORKSPACE=$PWD
export PACKAGES_PATH=$PWD/edk2:$PWD/TidePkg
export IASL_PREFIX=$PWD/TidePkg/ToolChain/acpica/
echo WORKSPACE:$WORKSPACE
echo PACKAGES_PATH:$PACKAGES_PATH
echo IASL_PREFIX:$IASL_PREFIX