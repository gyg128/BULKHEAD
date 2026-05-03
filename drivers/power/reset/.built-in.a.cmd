cmd_drivers/power/reset/built-in.a := rm -f drivers/power/reset/built-in.a;  printf "drivers/power/reset/%s " restart-poweroff.o | xargs ar cDPrST drivers/power/reset/built-in.a
