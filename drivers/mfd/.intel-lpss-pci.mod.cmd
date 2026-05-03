cmd_drivers/mfd/intel-lpss-pci.mod := printf '%s\n'   intel-lpss-pci.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/intel-lpss-pci.mod
