cmd_drivers/eisa/built-in.a := rm -f drivers/eisa/built-in.a;  printf "drivers/eisa/%s " eisa-bus.o pci_eisa.o virtual_root.o | xargs ar cDPrST drivers/eisa/built-in.a
