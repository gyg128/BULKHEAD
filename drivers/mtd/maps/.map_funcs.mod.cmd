cmd_drivers/mtd/maps/map_funcs.mod := printf '%s\n'   map_funcs.o | awk '!x[$$0]++ { print("drivers/mtd/maps/"$$0) }' > drivers/mtd/maps/map_funcs.mod
