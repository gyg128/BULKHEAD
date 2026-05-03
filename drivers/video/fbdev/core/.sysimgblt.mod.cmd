cmd_drivers/video/fbdev/core/sysimgblt.mod := printf '%s\n'   sysimgblt.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/sysimgblt.mod
