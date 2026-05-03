cmd_arch/x86/purgatory/built-in.a := rm -f arch/x86/purgatory/built-in.a;  printf "arch/x86/purgatory/%s " kexec-purgatory.o | xargs ar cDPrST arch/x86/purgatory/built-in.a
