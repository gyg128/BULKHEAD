cmd_drivers/net/wwan/built-in.a := rm -f drivers/net/wwan/built-in.a;  printf "drivers/net/wwan/%s " wwan_core.o | xargs ar cDPrST drivers/net/wwan/built-in.a
