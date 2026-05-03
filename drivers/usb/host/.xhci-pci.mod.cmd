cmd_drivers/usb/host/xhci-pci.mod := printf '%s\n'   xhci-pci.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/xhci-pci.mod
