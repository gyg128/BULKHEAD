cmd_arch/x86/events/rapl.mod := printf '%s\n'   rapl.o | awk '!x[$$0]++ { print("arch/x86/events/"$$0) }' > arch/x86/events/rapl.mod
