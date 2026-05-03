cmd_crypto/cryptd.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o;  true
