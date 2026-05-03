cmd_arch/x86/kernel/msr.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o arch/x86/kernel/msr.ko arch/x86/kernel/msr.o arch/x86/kernel/msr.mod.o;  true
