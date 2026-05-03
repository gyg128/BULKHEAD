cmd_arch/x86/tools/relocs_64.o := gcc -Wp,-MMD,arch/x86/tools/.relocs_64.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement     -I./tools/include  -c -o arch/x86/tools/relocs_64.o arch/x86/tools/relocs_64.c

source_arch/x86/tools/relocs_64.o := arch/x86/tools/relocs_64.c

deps_arch/x86/tools/relocs_64.o := \
  arch/x86/tools/relocs.h \
  tools/include/tools/le_byteshift.h \
  arch/x86/tools/relocs.c \
    $(wildcard include/config/FW_LOADER) \

arch/x86/tools/relocs_64.o: $(deps_arch/x86/tools/relocs_64.o)

$(deps_arch/x86/tools/relocs_64.o):
