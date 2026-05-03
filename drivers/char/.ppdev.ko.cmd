cmd_drivers/char/ppdev.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/ppdev.ko drivers/char/ppdev.o drivers/char/ppdev.mod.o;  true
