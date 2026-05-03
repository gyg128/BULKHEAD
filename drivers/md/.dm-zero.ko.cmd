cmd_drivers/md/dm-zero.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-zero.ko drivers/md/dm-zero.o drivers/md/dm-zero.mod.o;  true
