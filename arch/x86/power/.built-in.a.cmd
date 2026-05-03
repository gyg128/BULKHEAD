cmd_arch/x86/power/built-in.a := rm -f arch/x86/power/built-in.a;  printf "arch/x86/power/%s " cpu.o hibernate_64.o hibernate_asm_64.o hibernate.o | xargs ar cDPrST arch/x86/power/built-in.a
