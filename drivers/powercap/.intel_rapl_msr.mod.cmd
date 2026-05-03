cmd_drivers/powercap/intel_rapl_msr.mod := printf '%s\n'   intel_rapl_msr.o | awk '!x[$$0]++ { print("drivers/powercap/"$$0) }' > drivers/powercap/intel_rapl_msr.mod
