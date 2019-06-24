CC=gcc
CFLAGS=-m32 -c
LDFLAGS=-m elf_i386 -T link.ld

all: kasm.o kc.o
	ld $(LDFLAGS) -o rudraOS/boot/kernel.bin kasm.o kc.o

iso: all
	grub-mkrescue -o rudraOS.iso rudraOS/

kasm.o:
	nasm -f elf32 kernel.asm -o kasm.o

kc.o:
	$(CC) $(CFLAGS) kernel.c -o kc.o

clean:
	rm kasm.o kc.o rudraOS/boot/kernel.bin