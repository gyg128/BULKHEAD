cmd_drivers/reset/built-in.a := rm -f drivers/reset/built-in.a;  printf "drivers/reset/%s " core.o hisilicon/built-in.a | xargs ar cDPrST drivers/reset/built-in.a
