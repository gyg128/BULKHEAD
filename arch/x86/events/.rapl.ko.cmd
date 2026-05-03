cmd_arch/x86/events/rapl.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o arch/x86/events/rapl.ko arch/x86/events/rapl.o arch/x86/events/rapl.mod.o;  true
