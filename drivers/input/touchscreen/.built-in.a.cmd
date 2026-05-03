cmd_drivers/input/touchscreen/built-in.a := rm -f drivers/input/touchscreen/built-in.a;  printf "drivers/input/touchscreen/%s " elants_i2c.o | xargs ar cDPrST drivers/input/touchscreen/built-in.a
