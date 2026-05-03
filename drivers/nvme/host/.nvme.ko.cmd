cmd_drivers/nvme/host/nvme.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/nvme/host/nvme.ko drivers/nvme/host/nvme.o drivers/nvme/host/nvme.mod.o;  true
