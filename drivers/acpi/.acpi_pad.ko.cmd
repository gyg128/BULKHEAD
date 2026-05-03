cmd_drivers/acpi/acpi_pad.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/acpi/acpi_pad.ko drivers/acpi/acpi_pad.o drivers/acpi/acpi_pad.mod.o;  true
