## 1、编译

在当前文件夹目录下的终端输入

```
$ make

make -C /lib/modules/5.15.0-52-generic/build M=/home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule modules;
make[1]: Entering directory '/usr/src/linux-headers-5.15.0-52-generic'
  CC [M]  /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/my_test.o
  LD [M]  /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.o
  MODPOST /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/Module.symvers
  CC [M]  /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.mod.o
  LD [M]  /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.ko
  BTF [M] /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.ko
Skipping BTF generation for /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.ko due to unavailability of vmlinux
make[1]: Leaving directory '/usr/src/linux-headers-5.15.0-52-generic'


```
生成mytest.ko文件，文件名在Makefile文件中的定义，如下：

<u>mytest</u>-objs := my_test.o
obj-m  := <u>mytest</u>.o

与下划线名称同名

## 2、安装

终端插入modules,查看系统log
```
$ sudo insmod mytest.ko
$ dmesg

result:
[11126.797748] my first kernel module init

```

## 3、删除

终端删除modules，查看系统log
```
$ sudo rmmod mytest
$dmesg

result:
[11126.797748] my first kernel module init
[11430.818521] exit module

```
## 4、查看module信息

终端查看mytest.ko信息
```
$ modinfo mytest.ko
filename:       /home/greatwall/Desktop/EDK2Workspace/LinuxModule/FirstModule/mytest.ko
alias:          mytest
description:    My test kernel module
author:         Tide
license:        GPL
srcversion:     6953F884527DEE79939A70B
depends:
name:           mytest
vermagic:       5.15.0-52-generic SMP mod_unload modversions aarch64

```