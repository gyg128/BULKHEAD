cmd_sound/soc/sof/amd/snd-sof-amd-renoir.mod := printf '%s\n'   pci-rn.o renoir.o | awk '!x[$$0]++ { print("sound/soc/sof/amd/"$$0) }' > sound/soc/sof/amd/snd-sof-amd-renoir.mod
