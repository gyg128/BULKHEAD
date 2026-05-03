cmd_drivers/usb/host/xhci-pci-renesas.mod := printf '%s\n'   xhci-pci-renesas.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/xhci-pci-renesas.mod
