cmd_lib/bch.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/bch.ko lib/bch.o lib/bch.mod.o;  true
