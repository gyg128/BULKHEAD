cmd_drivers/video/fbdev/core/syscopyarea.mod := printf '%s\n'   syscopyarea.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/syscopyarea.mod
