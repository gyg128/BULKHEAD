cmd_arch/x86/boot/tools/build := gcc -Wp,-MMD,arch/x86/boot/tools/.build.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement     -I./tools/include -include include/generated/autoconf.h -D__EXPORTED_HEADERS__    -o arch/x86/boot/tools/build arch/x86/boot/tools/build.c   

source_arch/x86/boot/tools/build := arch/x86/boot/tools/build.c

deps_arch/x86/boot/tools/build := \
    $(wildcard include/config/EFI_MIXED) \
    $(wildcard include/config/EFI_STUB) \
    $(wildcard include/config/X86_32) \
    $(wildcard include/config/PHYSICAL_ALIGN) \
    $(wildcard include/config/X86_64) \
  tools/include/tools/le_byteshift.h \

arch/x86/boot/tools/build: $(deps_arch/x86/boot/tools/build)

$(deps_arch/x86/boot/tools/build):
