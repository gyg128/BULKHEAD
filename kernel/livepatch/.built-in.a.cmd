cmd_kernel/livepatch/built-in.a := rm -f kernel/livepatch/built-in.a;  printf "kernel/livepatch/%s " core.o patch.o shadow.o state.o transition.o | xargs ar cDPrST kernel/livepatch/built-in.a
