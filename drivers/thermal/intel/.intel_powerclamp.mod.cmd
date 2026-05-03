cmd_drivers/thermal/intel/intel_powerclamp.mod := printf '%s\n'   intel_powerclamp.o | awk '!x[$$0]++ { print("drivers/thermal/intel/"$$0) }' > drivers/thermal/intel/intel_powerclamp.mod
