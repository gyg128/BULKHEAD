cmd_security/bpf/built-in.a := rm -f security/bpf/built-in.a;  printf "security/bpf/%s " hooks.o | xargs ar cDPrST security/bpf/built-in.a
