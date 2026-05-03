cmd_sound/soc/amd/snd-acp-config.mod := printf '%s\n'   acp-config.o | awk '!x[$$0]++ { print("sound/soc/amd/"$$0) }' > sound/soc/amd/snd-acp-config.mod
