cmd_arch/x86/kernel/kprobes/built-in.a := rm -f arch/x86/kernel/kprobes/built-in.a;  printf "arch/x86/kernel/kprobes/%s " core.o opt.o ftrace.o | xargs ar cDPrST arch/x86/kernel/kprobes/built-in.a
