BASEINCLUDE ?= /lib/modules/5.15.0-52-generic/build

mytest-objs := my_test.o
obj-m  := mytest.o

all:
	$(MAKE) -C $(BASEINCLUDE) M=$(PWD) modules;

clean:
	$(MAKE) -C $(BASEINCLUDE) M=$(PWD) clean;
	rm -f *.ko;
