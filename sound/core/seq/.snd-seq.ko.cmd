cmd_sound/core/seq/snd-seq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/seq/snd-seq.ko sound/core/seq/snd-seq.o sound/core/seq/snd-seq.mod.o;  true
