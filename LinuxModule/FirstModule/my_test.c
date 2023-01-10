#include <linux/init.h>
#include <linux/module.h>

static int __init my_test_init(void)
{
  printk("my first kernel module init\n");
  return 0;
}

static void __exit my_test_exit(void)
{
  printk("exit module\n");
}

module_init(my_test_init);//在系统中插入module时会调用
module_exit(my_test_exit);//在系统中删除module时会调用

MODULE_LICENSE("GPL");//强制性开源协议

//
//以下为modules信息，可通过modinfo命令查看
//
MODULE_AUTHOR("Tide");
MODULE_DESCRIPTION("My test kernel module");
MODULE_ALIAS("mytest");