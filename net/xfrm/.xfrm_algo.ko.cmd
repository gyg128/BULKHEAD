cmd_net/xfrm/xfrm_algo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/xfrm/xfrm_algo.ko net/xfrm/xfrm_algo.o net/xfrm/xfrm_algo.mod.o;  true
