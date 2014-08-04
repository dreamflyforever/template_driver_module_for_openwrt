#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* function will call when insmod module */
static int __init hello_init(void)
{
	printk("Module init.\n");
	return 0;
}
/* function will rmmove when rmmod module */
static void __exit hello_exit(void)
{
	printk("Module end.\n");
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Shanjin Yang");
