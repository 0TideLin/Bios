#include <linux/module.h>
#include <linux/init.h>
#include "ShareSymbol.h"


static int mytest = 100;
module_param(mytest, int, 0644);//定义参数，在安装的时候可以向module提供参数值
MODULE_PARM_DESC(mytest, "test for module parameter");

void TideFun1(int a, int b)
{
  printk("__FUNCTION__:%d %d\n", a, b);
}
EXPORT_SYMBOL_GPL(TideFun1);//对其他module提供接口

void TideFun2(int a, int b)
{
  printk("__FUNCTION__:%d %d\n", a, b);
}
EXPORT_SYMBOL_GPL(TideFun2);//对其他module提供接口

static int __init my_test_init(void)
{
	printk("my share symbol kernel module init\n");
	printk("module parameter=%d\n", mytest);
	return 0;
}

static void __exit my_test_exit(void)
{
	printk("share symbol goodbye\n");
}

module_init(my_test_init);
module_exit(my_test_exit);

MODULE_LICENSE("GPL");//强制性开源协议

//
//以下为modules信息，可通过modinfo命令查看
//
MODULE_AUTHOR("Tide");
MODULE_DESCRIPTION("my share symbol kernel module");
MODULE_ALIAS("mysharesymbol");