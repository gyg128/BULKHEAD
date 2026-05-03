cmd_net/netfilter/xt_mark.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_mark.ko net/netfilter/xt_mark.o net/netfilter/xt_mark.mod.o;  true
