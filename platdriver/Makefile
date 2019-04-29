obj-m:=chrdrv_udev.o
obj-m+=platform.o

KDIR= /lib/modules/$(shell uname -r)/build

install:
	$(MAKE) -C $(KDIR) M=$(PWD) modules_install
	
all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean
