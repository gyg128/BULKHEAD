cmd_arch/x86/coco/built-in.a := rm -f arch/x86/coco/built-in.a;  printf "arch/x86/coco/%s " core.o tdx/built-in.a | xargs ar cDPrST arch/x86/coco/built-in.a
