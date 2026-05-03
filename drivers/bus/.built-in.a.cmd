cmd_drivers/bus/built-in.a := rm -f drivers/bus/built-in.a;  printf "drivers/bus/%s " mhi/built-in.a | xargs ar cDPrST drivers/bus/built-in.a
