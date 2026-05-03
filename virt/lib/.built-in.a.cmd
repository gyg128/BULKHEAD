cmd_virt/lib/built-in.a := rm -f virt/lib/built-in.a;  printf "virt/lib/%s " irqbypass.o | xargs ar cDPrST virt/lib/built-in.a
