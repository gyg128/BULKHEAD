cmd_drivers/soundwire/soundwire-cadence.mod := printf '%s\n'   cadence_master.o | awk '!x[$$0]++ { print("drivers/soundwire/"$$0) }' > drivers/soundwire/soundwire-cadence.mod
