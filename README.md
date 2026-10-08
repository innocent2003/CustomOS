nasm -f bin boot.asm -o TuanOS.img\n
qemu-system-i386 -drive format=raw,file=D:\TuanOS\TuanOS.img
