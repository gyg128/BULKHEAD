cmd_drivers/soundwire/soundwire-intel.mod := printf '%s\n'   intel.o intel_init.o dmi-quirks.o | awk '!x[$$0]++ { print("drivers/soundwire/"$$0) }' > drivers/soundwire/soundwire-intel.mod
