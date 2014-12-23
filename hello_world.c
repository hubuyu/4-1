#include <linux/module.h> 
#include <linux/init.h>   

static int __init hello_init(void){
	printk("Hello driver world\n");
	return 0;
}
	 
static void __exit hello_exit(void){
	printk("Goodbye driver world\n");
}

module_init(hello_init);
module_exit(hello_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("hubuyu");
MODULE_DESCRIPTION("Lesson 4-1 : hello world");

