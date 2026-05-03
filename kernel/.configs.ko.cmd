cmd_kernel/configs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o;  true
