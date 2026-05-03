cmd_drivers/macintosh/mac_hid.mod := printf '%s\n'   mac_hid.o | awk '!x[$$0]++ { print("drivers/macintosh/"$$0) }' > drivers/macintosh/mac_hid.mod
