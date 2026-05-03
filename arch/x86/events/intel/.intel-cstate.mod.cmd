cmd_arch/x86/events/intel/intel-cstate.mod := printf '%s\n'   cstate.o | awk '!x[$$0]++ { print("arch/x86/events/intel/"$$0) }' > arch/x86/events/intel/intel-cstate.mod
