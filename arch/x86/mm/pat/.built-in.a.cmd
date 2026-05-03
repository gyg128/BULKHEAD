cmd_arch/x86/mm/pat/built-in.a := rm -f arch/x86/mm/pat/built-in.a;  printf "arch/x86/mm/pat/%s " set_memory.o memtype.o memtype_interval.o | xargs ar cDPrST arch/x86/mm/pat/built-in.a
