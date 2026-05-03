cmd_sound/soc/sof/snd-sof-utils.mod := printf '%s\n'   sof-utils.o | awk '!x[$$0]++ { print("sound/soc/sof/"$$0) }' > sound/soc/sof/snd-sof-utils.mod
