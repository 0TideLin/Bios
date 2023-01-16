# Linux篇
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


# Windows篇    (Ori:<u>https://github.com/tianocore/tianocore.github.io/wiki/Windows-systems)</u>
This page provides step-by-step instructions or setting up a EDK II build environment on Windows systems.

Table of Contents

    GitHub Help
    How to Setup the EDK II Tree
    Download Checkout EDK II source tree from Github
    Compile Tools Build EDK II BaseTools for Windows
    BUILD EDK II

GitHub Help

GitHub (https://help.github.com/index.html) provides step-by-step instructions for user registration and basic features supported by GitHub.
Git GUI Interface for Windows OS

    Git for Windows OS is available at: (http://git-scm.com/download/win)
    TortoiseGit for windows OS is available at (https://tortoisegit.org/download/)

GitHub EDK II Project Repositories

    The EDK II project repository is available at https://github.com/tianocore/edk2.

Content that is not released under an accepted open source license can be found at https://github.com/tianocore/edk2-non-osi.
 
Note: the steps below will pull the latest code from edk2 master. To work from a stable release, please refer to the Microsoft Windows build steps for UDK2017: https://github.com/tianocore/tianocore.github.io/wiki/UDK2017-How-to-Build#how-to-build-windows-system
Internet proxies

If your network utilizes a firewall with a web proxy, then you may need to configure your proxy information for various command line applications to work. You may need to consult with your network administrator to find out the computer name and port to use for proxy setup. The following commands are common Git Bash examples of how you would configure your proxy by setting an environment variable:

    $ git config --global https.proxy <proxyname>.domain.com:<port>
    $ git config --global http.proxy <proxyname>.domain.com:<port>

How to Setup the EDK II Tree

Note: Some of the following examples use the Multiple Workspace feature to configure the EDK II BaseTools. More information on the Multiple Workspace feature can be found at the following location.

    Multiple_Workspace

Download

Download/Checkout the EDK II source tree from Github
Download Using a Web browser

    Download EDK II Project
        Open https://github.com/tianocore/edk2 in web browser
        Click on the Clone or Download button (Right Green)
        Click on Download ZIP
        Unzip to C:/
        Rename directory “edk2-master” to “edk2”

Continue to Compile Tools
Using Git for Windows Application
Git GUI

    Clone the EDK II project repository
        Open Git GUI
        Use Clone Exiting Repository with Source location https://github.com/tianocore/edk2.git
        Select a Target directory C:/edk2
        Check Recursively clone submodules too
        click Clone button

Continue to Compile Tools section
Git CMD

If you use the command line version, then you can easily checkout the edk2 to the C:\edk2 directory with the following git command: Main repository: https://github.com/tianocore/edk2

    $git clone https://github.com/tianocore/edk2

Continue to Compile Tools and then BUILD sections
Compile Tools
For EDK II project developers on Windows with source BaseTools:

    Create a workspace directory
    Change to the workspace directory
    Clone the EDK II project repository (See Download section above)
        Example: git clone https://github.com/tianocore/edk2
    Install Python37 or late version (https://www.python.org/) to run python tool from source
    Compile BaseTools C source tools

Example:

    Inside Git Bash

     $ git clone https://github.com/tianocore/edk2

Compile BaseTools

Example:

    Open Command prompt and CD C:\edk2:

     C:\edk2> set PYTHON_HOME=C:\Python37
     C:\edk2> edksetup.bat Rebuild

Build

    Set up the Nasm open source assembly compiler
    Set up the ASL Compiler
    Compile Tools above
    Open a Windows CMD prompt:
    Change to the edk2 directory
    Run the edksetup.bat script

      C:\Users\MySid> CD \edk2
      C:\edk2> edksetup

Build MdeModulePkg
Modify Conf files

You will need to edit the Conf\target.txt file. First, change the ACTIVE_PLATFORM to the MdeModulePkg:

C:\edk2> notepad Conf\target.txt

ACTIVE_PLATFORM should look like this in Conf\target.txt:

ACTIVE_PLATFORM       = MdeModulePkg/MdeModulePkg.dsc

Modify TOOL_CHAIN_TAG in target.txt for the toolchain installed on your system. There are many options, so review the tools_def.txt to find the appropriate toolchain for your system. Search for 'Supported Tool Chains' in tools_def.txt to see the valid options for TOOL_CHAIN_TAG.

TOOL_CHAIN_TAG        = VS2015x86

See also: Windows-systems-ToolChain-Matrix for how to change the Tool Chain Tag.

Also, consider if you want to build a different processor architecture by changing the TARGET_ARCH value in target.txt. Please consider that certain toolchains only support building certain processor architectures.
Build Hello World! (and the rest of MdeModulePkg)

Now you should be able to simply run the build command to compile the MdeModulePkg.

C:\edk2> build

As a tangible result of the build, you should have the HelloWorld UEFI application. If you have a UEFI system available to you which matches the processor architecture that you built, then this application should be able to run successfully under the shell.

C:\edk2> dir /s Build\MdeModule\DEBUG_...\IA32\HelloWorld.efi

Build OVMF (OPTIONAL)

Once your build environment is set up you might be interested in building the OVMF platform which is included in the main edk2 source tree. Since OVMF builds a full system firmware image this may be of interest to UEFI system firmware developers.