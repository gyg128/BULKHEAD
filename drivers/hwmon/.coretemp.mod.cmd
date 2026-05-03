cmd_drivers/hwmon/coretemp.mod := printf '%s\n'   coretemp.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/coretemp.mod
