cmd_drivers/hid/hid-generic.mod := printf '%s\n'   hid-generic.o | awk '!x[$$0]++ { print("drivers/hid/"$$0) }' > drivers/hid/hid-generic.mod
