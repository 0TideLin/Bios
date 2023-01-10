## 1、模块参数
Linux内核提供module_param(name, type, perm)实现参数传递，MODULE_PARM_DESC(_parm, desc)对参数进行描述。

编译完成该moudle后，在使用insmod命令时可加参数mytest=200,结果ShareSymbol.c中的mytest变为200.
```
$ sudo insmod ShareSymbol.ko mytest=200

[19183.203935] my share symbol kernel module init
[19183.203946] module parameter=200
```

## 2、符号传递

通过EXPORT_SYMBOL()或EXPORT_SYMBOL_GPL()函数对其他module提供接口。我们在ShareSymbol.h中将需要对外提供的接口声明为extern，在ShareSymbol.c中进行定义。

在需要调要的CallSymbol.c中包入ShareSymbol.h，以此来调用。

```
查看ShareSymbol和CallSymbol的moudle信息，可以看到依赖关系

_________________________
filename:       /home/greatwall/Desktop/EDK2Workspace/LinuxModule/ShareSymbol/ShareSymbol.ko
alias:          mysharesymbol
description:    my share symbol kernel module
author:         Tide
license:        GPL
srcversion:     C9348B72C994956B88C16B8
depends:
name:           ShareSymbol
vermagic:       5.15.0-52-generic SMP mod_unload modversions aarch64
parm:           mytest:test for module parameter (int)
_________________________
_________________________
filename:       /home/greatwall/Desktop/EDK2Workspace/LinuxModule/ShareSymbol/CallSymbol.ko
alias:          mycallsymbol
description:    my call symbol kernel module
author:         kylin
license:        GPL
srcversion:     B11C950F6B75DA812A23719
depends:        ShareSymbol
name:           CallSymbol
vermagic:       5.15.0-52-generic SMP mod_unload modversions aarch64
_________________________
```


使用dmesg可以查看到调用情况
```
[19568.691314] my call symbol kernel module init
[19568.691324] __FUNCTION__:1 2
```