cmd_drivers/input/misc/built-in.a := rm -f drivers/input/misc/built-in.a;  printf "drivers/input/misc/%s " uinput.o | xargs ar cDPrST drivers/input/misc/built-in.a
