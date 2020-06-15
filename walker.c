#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

int walk=0;
module_param(walk,int,0);

static int walk_init(void)
{
  if(0<=walk<=3)
    printk(KERN_INFO "%d\n",walk);
  else
  return 0;
}
static void walk_exit(void)
{
  printk(KERN_INFO "Exited\n");
}

module_init(walk_init);
module_exit(walk_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("NIKHITHA G");  
