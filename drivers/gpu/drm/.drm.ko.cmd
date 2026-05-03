cmd_drivers/gpu/drm/drm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/gpu/drm/drm.ko drivers/gpu/drm/drm.o drivers/gpu/drm/drm.mod.o;  true
