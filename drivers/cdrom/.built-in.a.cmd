cmd_drivers/cdrom/built-in.a := rm -f drivers/cdrom/built-in.a;  printf "drivers/cdrom/%s " cdrom.o | xargs ar cDPrST drivers/cdrom/built-in.a
