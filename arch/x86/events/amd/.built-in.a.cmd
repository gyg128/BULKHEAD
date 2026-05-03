cmd_arch/x86/events/amd/built-in.a := rm -f arch/x86/events/amd/built-in.a;  printf "arch/x86/events/amd/%s " core.o lbr.o brs.o ibs.o iommu.o | xargs ar cDPrST arch/x86/events/amd/built-in.a
