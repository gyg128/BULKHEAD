cmd_arch/x86/net/built-in.a := rm -f arch/x86/net/built-in.a;  printf "arch/x86/net/%s " bpf_jit_comp.o | xargs ar cDPrST arch/x86/net/built-in.a
