cmd_sound/soc/sof/snd-sof-pci.mod := printf '%s\n'   sof-pci-dev.o | awk '!x[$$0]++ { print("sound/soc/sof/"$$0) }' > sound/soc/sof/snd-sof-pci.mod
