cmd_sound/soc/sof/snd-sof.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/soc/sof/snd-sof.ko sound/soc/sof/snd-sof.o sound/soc/sof/snd-sof.mod.o;  true
