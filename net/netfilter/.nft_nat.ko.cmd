cmd_net/netfilter/nft_nat.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_nat.ko net/netfilter/nft_nat.o net/netfilter/nft_nat.mod.o;  true
