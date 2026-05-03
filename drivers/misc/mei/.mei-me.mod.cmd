cmd_drivers/misc/mei/mei-me.mod := printf '%s\n'   pci-me.o hw-me.o | awk '!x[$$0]++ { print("drivers/misc/mei/"$$0) }' > drivers/misc/mei/mei-me.mod
