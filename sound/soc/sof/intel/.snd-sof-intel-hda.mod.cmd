cmd_sound/soc/sof/intel/snd-sof-intel-hda.mod := printf '%s\n'   hda-codec.o | awk '!x[$$0]++ { print("sound/soc/sof/intel/"$$0) }' > sound/soc/sof/intel/snd-sof-intel-hda.mod
