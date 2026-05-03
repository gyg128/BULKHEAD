cmd_drivers/i2c/i2c-smbus.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/i2c/i2c-smbus.ko drivers/i2c/i2c-smbus.o drivers/i2c/i2c-smbus.mod.o;  true
