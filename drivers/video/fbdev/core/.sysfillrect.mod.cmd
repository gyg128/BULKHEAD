cmd_drivers/video/fbdev/core/sysfillrect.mod := printf '%s\n'   sysfillrect.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/sysfillrect.mod
