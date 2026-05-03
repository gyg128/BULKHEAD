cmd_drivers/mfd/intel-lpss.mod := printf '%s\n'   intel-lpss.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/intel-lpss.mod
