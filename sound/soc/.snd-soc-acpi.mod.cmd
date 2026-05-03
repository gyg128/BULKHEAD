cmd_sound/soc/snd-soc-acpi.mod := printf '%s\n'   soc-acpi.o | awk '!x[$$0]++ { print("sound/soc/"$$0) }' > sound/soc/snd-soc-acpi.mod
