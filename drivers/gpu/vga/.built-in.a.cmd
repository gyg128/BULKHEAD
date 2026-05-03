cmd_drivers/gpu/vga/built-in.a := rm -f drivers/gpu/vga/built-in.a;  printf "drivers/gpu/vga/%s " vga_switcheroo.o | xargs ar cDPrST drivers/gpu/vga/built-in.a
