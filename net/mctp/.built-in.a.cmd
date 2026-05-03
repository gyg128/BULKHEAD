cmd_net/mctp/built-in.a := rm -f net/mctp/built-in.a;  printf "net/mctp/%s " af_mctp.o device.o route.o neigh.o | xargs ar cDPrST net/mctp/built-in.a
