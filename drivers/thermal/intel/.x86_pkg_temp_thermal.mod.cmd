cmd_drivers/thermal/intel/x86_pkg_temp_thermal.mod := printf '%s\n'   x86_pkg_temp_thermal.o | awk '!x[$$0]++ { print("drivers/thermal/intel/"$$0) }' > drivers/thermal/intel/x86_pkg_temp_thermal.mod
