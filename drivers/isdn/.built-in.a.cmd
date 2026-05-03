cmd_drivers/isdn/built-in.a := rm -f drivers/isdn/built-in.a;  printf "drivers/isdn/%s " hardware/built-in.a | xargs ar cDPrST drivers/isdn/built-in.a
