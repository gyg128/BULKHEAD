cmd_drivers/spi/spi-intel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/spi/spi-intel.ko drivers/spi/spi-intel.o drivers/spi/spi-intel.mod.o;  true
