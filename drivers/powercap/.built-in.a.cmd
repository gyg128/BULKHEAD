cmd_drivers/powercap/built-in.a := rm -f drivers/powercap/built-in.a;  printf "drivers/powercap/%s " powercap_sys.o idle_inject.o | xargs ar cDPrST drivers/powercap/built-in.a
