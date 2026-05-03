cmd_crypto/authenc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o;  true
