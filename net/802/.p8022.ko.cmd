cmd_net/802/p8022.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/802/p8022.ko net/802/p8022.o net/802/p8022.mod.o;  true
