cmd_sound/soundcore.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/soundcore.ko sound/soundcore.o sound/soundcore.mod.o;  true
