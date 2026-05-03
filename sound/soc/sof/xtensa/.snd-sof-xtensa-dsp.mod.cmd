cmd_sound/soc/sof/xtensa/snd-sof-xtensa-dsp.mod := printf '%s\n'   core.o | awk '!x[$$0]++ { print("sound/soc/sof/xtensa/"$$0) }' > sound/soc/sof/xtensa/snd-sof-xtensa-dsp.mod
