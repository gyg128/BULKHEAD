cmd_drivers/spi/spi-intel.mod := printf '%s\n'   spi-intel.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-intel.mod
