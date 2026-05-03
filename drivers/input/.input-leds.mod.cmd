cmd_drivers/input/input-leds.mod := printf '%s\n'   input-leds.o | awk '!x[$$0]++ { print("drivers/input/"$$0) }' > drivers/input/input-leds.mod
