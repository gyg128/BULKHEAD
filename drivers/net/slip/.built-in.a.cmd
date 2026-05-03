cmd_drivers/net/slip/built-in.a := rm -f drivers/net/slip/built-in.a;  printf "drivers/net/slip/%s " slhc.o | xargs ar cDPrST drivers/net/slip/built-in.a
