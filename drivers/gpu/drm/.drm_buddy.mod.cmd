cmd_drivers/gpu/drm/drm_buddy.mod := printf '%s\n'   drm_buddy.o | awk '!x[$$0]++ { print("drivers/gpu/drm/"$$0) }' > drivers/gpu/drm/drm_buddy.mod
