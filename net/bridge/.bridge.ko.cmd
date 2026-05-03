cmd_net/bridge/bridge.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o;  true
