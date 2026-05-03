cmd_arch/x86/entry/vdso/vdso2c := gcc -Wp,-MMD,arch/x86/entry/vdso/.vdso2c.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement     -I./tools/include -I./include/uapi -I./arch//include/uapi    -o arch/x86/entry/vdso/vdso2c arch/x86/entry/vdso/vdso2c.c   

source_arch/x86/entry/vdso/vdso2c := arch/x86/entry/vdso/vdso2c.c

deps_arch/x86/entry/vdso/vdso2c := \
  tools/include/tools/le_byteshift.h \
  include/uapi/linux/elf.h \
  tools/include/linux/types.h \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
  include/uapi/linux/elf-em.h \
  tools/include/linux/kernel.h \
  tools/include/linux/build_bug.h \
  tools/include/linux/compiler.h \
  tools/include/linux/compiler_types.h \
  tools/include/linux/compiler-gcc.h \
  tools/include/linux/math.h \
  arch/x86/entry/vdso/vdso2c.h \

arch/x86/entry/vdso/vdso2c: $(deps_arch/x86/entry/vdso/vdso2c)

$(deps_arch/x86/entry/vdso/vdso2c):
