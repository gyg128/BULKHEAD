cmd_arch/x86/realmode/built-in.a := rm -f arch/x86/realmode/built-in.a;  printf "arch/x86/realmode/%s " init.o rmpiggy.o | xargs ar cDPrST arch/x86/realmode/built-in.a
