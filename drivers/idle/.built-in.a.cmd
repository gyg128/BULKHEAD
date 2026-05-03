cmd_drivers/idle/built-in.a := rm -f drivers/idle/built-in.a;  printf "drivers/idle/%s " intel_idle.o | xargs ar cDPrST drivers/idle/built-in.a
