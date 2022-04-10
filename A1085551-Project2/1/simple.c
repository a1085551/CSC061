#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int simple_init (void)
{
	printk(KERN_INFO "Loading Kernel Module A1085551 \n");
	return 0;
}

void simple_exit(void)
{
	printk(KERN_INFO "Removing Kernel Module A1085551 \n");	
}

module_init (simple_init);
module_exit (simple_exit);

MODULE_LICENSE ("GPL");
MODULE_DESCRIPTION ("SIMPLE MODULE");
MODULE_AUTHOR ("SGG");


