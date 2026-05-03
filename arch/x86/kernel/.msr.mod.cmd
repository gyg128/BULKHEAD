cmd_arch/x86/kernel/msr.mod := printf '%s\n'   msr.o | awk '!x[$$0]++ { print("arch/x86/kernel/"$$0) }' > arch/x86/kernel/msr.mod
