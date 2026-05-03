cmd_sound/soc/intel/atom/sst/snd-intel-sst-acpi.mod := printf '%s\n'   sst_acpi.o | awk '!x[$$0]++ { print("sound/soc/intel/atom/sst/"$$0) }' > sound/soc/intel/atom/sst/snd-intel-sst-acpi.mod
