cmd_arch/x86/platform/pvh/built-in.a := rm -f arch/x86/platform/pvh/built-in.a;  printf "arch/x86/platform/pvh/%s " enlighten.o head.o | xargs ar cDPrST arch/x86/platform/pvh/built-in.a
