cmd_arch/x86/boot/compressed/mkpiggy := gcc -Wp,-MMD,arch/x86/boot/compressed/.mkpiggy.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement     -I./tools/include    -o arch/x86/boot/compressed/mkpiggy arch/x86/boot/compressed/mkpiggy.c   

source_arch/x86/boot/compressed/mkpiggy := arch/x86/boot/compressed/mkpiggy.c

deps_arch/x86/boot/compressed/mkpiggy := \
  tools/include/tools/le_byteshift.h \

arch/x86/boot/compressed/mkpiggy: $(deps_arch/x86/boot/compressed/mkpiggy)

$(deps_arch/x86/boot/compressed/mkpiggy):
