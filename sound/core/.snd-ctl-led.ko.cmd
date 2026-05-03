cmd_sound/core/snd-ctl-led.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd-ctl-led.ko sound/core/snd-ctl-led.o sound/core/snd-ctl-led.mod.o;  true
