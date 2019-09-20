#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init driver_init(void)
{
	printk("init: My First driver in linux kernel\n");
	return 0;
}

static void __exit driver_exit(void)
{
	printk("exit: driver program exit\n");

}

module_init(driver_init);
module_exit(driver_exit);
