cmd_drivers/platform/x86/wmi-bmof.mod := printf '%s\n'   wmi-bmof.o | awk '!x[$$0]++ { print("drivers/platform/x86/"$$0) }' > drivers/platform/x86/wmi-bmof.mod
