cmd_lib/libcrc32c.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/libcrc32c.ko lib/libcrc32c.o lib/libcrc32c.mod.o;  true
