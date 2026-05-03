cmd_kernel/entry/built-in.a := rm -f kernel/entry/built-in.a;  printf "kernel/entry/%s " common.o syscall_user_dispatch.o kvm.o | xargs ar cDPrST kernel/entry/built-in.a
