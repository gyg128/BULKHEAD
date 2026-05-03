cmd_drivers/misc/mei/mei.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/misc/mei/mei.ko drivers/misc/mei/mei.o drivers/misc/mei/mei.mod.o;  true
