cmd_drivers/net/ppp/built-in.a := rm -f drivers/net/ppp/built-in.a;  printf "drivers/net/ppp/%s " ppp_generic.o | xargs ar cDPrST drivers/net/ppp/built-in.a
