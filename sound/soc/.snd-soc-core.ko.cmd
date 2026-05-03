cmd_sound/soc/snd-soc-core.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/soc/snd-soc-core.ko sound/soc/snd-soc-core.o sound/soc/snd-soc-core.mod.o;  true
