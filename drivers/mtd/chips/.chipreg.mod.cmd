cmd_drivers/mtd/chips/chipreg.mod := printf '%s\n'   chipreg.o | awk '!x[$$0]++ { print("drivers/mtd/chips/"$$0) }' > drivers/mtd/chips/chipreg.mod
