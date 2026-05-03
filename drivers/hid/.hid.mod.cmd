cmd_drivers/hid/hid.mod := printf '%s\n'   hid-core.o hid-input.o hid-quirks.o hid-debug.o hidraw.o | awk '!x[$$0]++ { print("drivers/hid/"$$0) }' > drivers/hid/hid.mod
