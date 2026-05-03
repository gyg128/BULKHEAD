cmd_drivers/hid/usbhid/usbhid.mod := printf '%s\n'   hid-core.o hiddev.o hid-pidff.o | awk '!x[$$0]++ { print("drivers/hid/usbhid/"$$0) }' > drivers/hid/usbhid/usbhid.mod
