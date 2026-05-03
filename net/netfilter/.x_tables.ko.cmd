cmd_net/netfilter/x_tables.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/x_tables.ko net/netfilter/x_tables.o net/netfilter/x_tables.mod.o;  true
