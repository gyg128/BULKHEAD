cmd_drivers/parport/parport_pc.mod := printf '%s\n'   parport_pc.o | awk '!x[$$0]++ { print("drivers/parport/"$$0) }' > drivers/parport/parport_pc.mod
