cmd_drivers/thermal/intel/intel_tcc_cooling.mod := printf '%s\n'   intel_tcc_cooling.o | awk '!x[$$0]++ { print("drivers/thermal/intel/"$$0) }' > drivers/thermal/intel/intel_tcc_cooling.mod
