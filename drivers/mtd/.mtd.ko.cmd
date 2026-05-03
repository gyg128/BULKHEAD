cmd_drivers/mtd/mtd.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/mtd/mtd.ko drivers/mtd/mtd.o drivers/mtd/mtd.mod.o;  true
