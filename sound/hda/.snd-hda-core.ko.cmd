cmd_sound/hda/snd-hda-core.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/hda/snd-hda-core.ko sound/hda/snd-hda-core.o sound/hda/snd-hda-core.mod.o;  true
