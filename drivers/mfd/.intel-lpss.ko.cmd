cmd_drivers/mfd/intel-lpss.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/mfd/intel-lpss.ko drivers/mfd/intel-lpss.o drivers/mfd/intel-lpss.mod.o;  true
