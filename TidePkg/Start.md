# 一、Edk2环境搭建

## 1、环境配置

 
Python 3.8.10 \
gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 94 \
uuid-dev:arm64 (2.34-0.1ubuntu9.3) \
nasm (2.14.02-1) \
bison (GNU Bison) 3.5.1\
flex 2.6.4 

## 2、工具配置

iasl \
Path：TidePkg/ToolChain/acpica \
Version: 20210930

## 3、编译Edk2工具BaseTools
\<WorkPath>/edk2$ make -C BaseTools/ \
无报错即可

# 二、环境启动

## 1、启动脚本
运行edk2/edksetup.sh     
edk2/conf目录下会生成target.txt和tools_def.txt文件