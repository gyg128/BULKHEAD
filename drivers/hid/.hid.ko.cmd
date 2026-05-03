cmd_drivers/hid/hid.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hid/hid.ko drivers/hid/hid.o drivers/hid/hid.mod.o;  true
