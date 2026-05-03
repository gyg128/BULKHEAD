cmd_drivers/ata/acard-ahci.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/ata/acard-ahci.ko drivers/ata/acard-ahci.o drivers/ata/acard-ahci.mod.o;  true
