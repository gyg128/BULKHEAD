cmd_arch/x86/entry/vdso/vdso-note.o := clang -Wp,-MMD,arch/x86/entry/vdso/.vdso-note.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -m64 -DCC_USING_NOP_MCOUNT -DCC_USING_FENTRY -g -gdwarf-5 -DBUILD_VDSO    -c -o arch/x86/entry/vdso/vdso-note.o arch/x86/entry/vdso/vdso-note.S 

source_arch/x86/entry/vdso/vdso-note.o := arch/x86/entry/vdso/vdso-note.S

deps_arch/x86/entry/vdso/vdso-note.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/build-salt.h \
    $(wildcard include/config/BUILD_SALT) \
  include/linux/elfnote.h \
  include/linux/uts.h \
    $(wildcard include/config/DEFAULT_HOSTNAME) \
  include/generated/uapi/linux/version.h \

arch/x86/entry/vdso/vdso-note.o: $(deps_arch/x86/entry/vdso/vdso-note.o)

$(deps_arch/x86/entry/vdso/vdso-note.o):
