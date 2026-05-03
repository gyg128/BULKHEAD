cmd_drivers/input/joydev.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o;  true
