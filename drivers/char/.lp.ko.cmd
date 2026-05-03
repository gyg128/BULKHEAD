cmd_drivers/char/lp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/lp.ko drivers/char/lp.o drivers/char/lp.mod.o;  true
