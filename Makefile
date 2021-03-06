ifneq ($(KERNELVERSION),)
obj-m	:= ds3231_drv.o


else
KDIR	:= /lib/modules/$(shell uname -r)/build
PWD	:= $(shell pwd)

default: ds3231_drv

ds3231_drv:
	@echo "Building module ..."
	@(cd $(KDIR) && make -C $(KDIR) SUBDIRS=$(PWD) modules)

clean:
	-rm -f *.o *.ko .*.cmd .*.flags *.mod.c Module.symvers modules.order
	-rm -rf .tmp_versions
	-rm -rf *~

reload: ds3231_drv
	-sudo rmmod ds3231_drv
	sudo insmod ds3231_drv.ko

test: reload
	cat /dev/ds3231

endif
