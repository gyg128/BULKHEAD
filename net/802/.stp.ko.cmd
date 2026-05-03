cmd_net/802/stp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o;  true
