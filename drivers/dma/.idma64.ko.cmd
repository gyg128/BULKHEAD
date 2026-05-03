cmd_drivers/dma/idma64.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/dma/idma64.ko drivers/dma/idma64.o drivers/dma/idma64.mod.o;  true
