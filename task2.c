#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/sched/signal.h>

struct task_struct *task;
struct list_head *list;

int module_entry(void)
{
	printk(KERN_INFO "Loading kernel module...");
	printk(" PID \tState \tCMD\n");
	list_for_each(list, &init_task->children)
	{
		task = list_entry(list, struct task_struct, sibling);
		printk("%5d   %4ld   %s\n",Task->pid,Task->state,Task->comm);
	}
	return 0;
}

void module_Exit(void)
{
	printk(KERN_INFO "Removing kernel module...");
}

module_init(module_entry);
module_exit(module_Exit);
MODULE_DESCRIPTION("Process details Module");
MODULE_AUTHOR("SGG");
MODULE_LICENSE("GPL");



