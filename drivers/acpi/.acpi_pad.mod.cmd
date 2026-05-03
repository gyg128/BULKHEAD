cmd_drivers/acpi/acpi_pad.mod := printf '%s\n'   acpi_pad.o | awk '!x[$$0]++ { print("drivers/acpi/"$$0) }' > drivers/acpi/acpi_pad.mod
