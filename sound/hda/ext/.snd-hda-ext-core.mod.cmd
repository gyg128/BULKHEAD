cmd_sound/hda/ext/snd-hda-ext-core.mod := printf '%s\n'   hdac_ext_bus.o hdac_ext_controller.o hdac_ext_stream.o | awk '!x[$$0]++ { print("sound/hda/ext/"$$0) }' > sound/hda/ext/snd-hda-ext-core.mod
