cmd_net/rfkill/built-in.a := rm -f net/rfkill/built-in.a;  printf "net/rfkill/%s " core.o input.o | xargs ar cDPrST net/rfkill/built-in.a
