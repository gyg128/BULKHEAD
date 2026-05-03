cmd_sound/soc/sof/snd-sof-probes.mod := printf '%s\n'   sof-client-probes.o | awk '!x[$$0]++ { print("sound/soc/sof/"$$0) }' > sound/soc/sof/snd-sof-probes.mod
