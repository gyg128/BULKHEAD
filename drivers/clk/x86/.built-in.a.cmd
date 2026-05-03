cmd_drivers/clk/x86/built-in.a := rm -f drivers/clk/x86/built-in.a;  printf "drivers/clk/x86/%s " clk-fch.o clk-lpss-atom.o clk-pmc-atom.o | xargs ar cDPrST drivers/clk/x86/built-in.a
