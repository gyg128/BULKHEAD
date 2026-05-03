cmd_drivers/hte/built-in.a := rm -f drivers/hte/built-in.a;  printf "drivers/hte/%s " hte.o | xargs ar cDPrST drivers/hte/built-in.a
