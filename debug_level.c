#include<linux/init.h>
#include<linux/module.h>
int debug_level;

modle_param(debug_level,int,0664);

static int debug_init(void)
{
  switch(debug_level)
    {
      case 1:printk(KERN_INFO "low debug verbosity\n");
      break;
      case 2:printk(KERN_INFO "medium debug verbosity\n");
      break;
      case 3:printk(KERN_INFO "hign debug verbosity\n");
      break;
      default:printk(KERN_INFO "no debug message\n");
      break;
    }
  return 0;
}

static void debug_exit(void)
{
  printk(KERN_INFO "Exited\n");
}

module_init(debug_init);
module_exit(debug_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("NIKHITHA G");
