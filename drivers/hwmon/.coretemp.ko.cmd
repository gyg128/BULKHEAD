cmd_drivers/hwmon/coretemp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hwmon/coretemp.ko drivers/hwmon/coretemp.o drivers/hwmon/coretemp.mod.o;  true
