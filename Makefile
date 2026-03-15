all:
	nasm -f elf64 boot.asm -o boot.o
	gcc -ffreestanding -c kernel.c -o kernel.o
	ld -T linker.ld -o kernel.bin boot.o kernel.o
