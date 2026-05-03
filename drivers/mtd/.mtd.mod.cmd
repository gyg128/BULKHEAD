cmd_drivers/mtd/mtd.mod := printf '%s\n'   mtdcore.o mtdsuper.o mtdconcat.o mtdpart.o mtdchar.o | awk '!x[$$0]++ { print("drivers/mtd/"$$0) }' > drivers/mtd/mtd.mod
