#include<linux/module.h>
#include<linux/init.h>
#include<linux/platform_device.h>

struct platform_device *pdev;

int dummy_init(void)
{
int ret;
pdev=platform_device_alloc("sample",-1);
ret=platform_device_add(pdev);
return 0;
}

void dummy_exit(void)
{
pr_err("print exit\n");
}

module_init(dummy_init);
module_exit(dummy_exit);
MODULE_AUTHOR("VIJAY");
MODULE_LICENSE("GPL");
