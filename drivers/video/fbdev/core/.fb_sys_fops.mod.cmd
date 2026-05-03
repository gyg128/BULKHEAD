cmd_drivers/video/fbdev/core/fb_sys_fops.mod := printf '%s\n'   fb_sys_fops.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/fb_sys_fops.mod
