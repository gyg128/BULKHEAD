cmd_drivers/spi/spi-intel-pci.mod := printf '%s\n'   spi-intel-pci.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-intel-pci.mod
