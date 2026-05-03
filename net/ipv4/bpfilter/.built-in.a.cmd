cmd_net/ipv4/bpfilter/built-in.a := rm -f net/ipv4/bpfilter/built-in.a;  printf "net/ipv4/bpfilter/%s " sockopt.o | xargs ar cDPrST net/ipv4/bpfilter/built-in.a
