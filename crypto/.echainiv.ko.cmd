cmd_crypto/echainiv.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o;  true
