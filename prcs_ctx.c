#include<linux/init.h>
#include<linux/module.h>
#include<linux/sched.h>
static int process_ctx(void)
{
printk(KERN_ALERT "%s\n",current->comm);
printk(KERN_ALERT "%d\n",current->pid);
printk(KERN_ALERT "%d\n",current->tgid);
return 0;
}
static void process_exit(void)
{
printk(KERN_ALERT "Exited\n");
}
module_init(process_ctx);
module_exit(process_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("NIKHITHA G");
