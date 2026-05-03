cmd_drivers/firmware/efi/efi-pstore.mod := printf '%s\n'   efi-pstore.o | awk '!x[$$0]++ { print("drivers/firmware/efi/"$$0) }' > drivers/firmware/efi/efi-pstore.mod
