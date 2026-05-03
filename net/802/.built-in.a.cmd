cmd_net/802/built-in.a := rm -f net/802/built-in.a;  printf "net/802/%s " fc.o fddi.o | xargs ar cDPrST net/802/built-in.a
