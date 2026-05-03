cmd_crypto/authencesn.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o;  true
