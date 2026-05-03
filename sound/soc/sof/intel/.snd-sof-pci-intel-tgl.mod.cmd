cmd_sound/soc/sof/intel/snd-sof-pci-intel-tgl.mod := printf '%s\n'   pci-tgl.o | awk '!x[$$0]++ { print("sound/soc/sof/intel/"$$0) }' > sound/soc/sof/intel/snd-sof-pci-intel-tgl.mod
