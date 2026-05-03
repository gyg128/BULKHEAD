cmd_sound/soc/codecs/snd-soc-hdac-hda.mod := printf '%s\n'   hdac_hda.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-hdac-hda.mod
