#include "ShareSymbol.h"
#include <linux/module.h>
#include <linux/init.h>


static int __init my_test_init(void)
{
	printk("my call symbol kernel module init\n");
  TideFun1(1,2);
	return 0;
}

static void __exit my_test_exit(void)
{
	printk("goodbye call symbol\n");
  TideFun2(3,4);
}

module_init(my_test_init);
module_exit(my_test_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kylin");
MODULE_DESCRIPTION("my call symbol kernel module");
MODULE_ALIAS("mycallsymbol");

