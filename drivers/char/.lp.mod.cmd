cmd_drivers/char/lp.mod := printf '%s\n'   lp.o | awk '!x[$$0]++ { print("drivers/char/"$$0) }' > drivers/char/lp.mod
