cmd_drivers/dma/idma64.mod := printf '%s\n'   idma64.o | awk '!x[$$0]++ { print("drivers/dma/"$$0) }' > drivers/dma/idma64.mod
