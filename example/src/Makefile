obj-m :=example.o

KDIR := /usr/src/linux-headers-3.16.0-77-generic

all:
	make -Wall -C $(KDIR) M=$(shell pwd) modules
clean:
	make -Wall -C $(KDIR) M=$(shell pwd) clean 
