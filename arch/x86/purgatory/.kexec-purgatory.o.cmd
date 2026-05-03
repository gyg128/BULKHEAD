cmd_arch/x86/purgatory/kexec-purgatory.o := clang -Wp,-MMD,arch/x86/purgatory/.kexec-purgatory.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -m64 -DCC_USING_NOP_MCOUNT -DCC_USING_FENTRY -g -gdwarf-5    -c -o arch/x86/purgatory/kexec-purgatory.o arch/x86/purgatory/kexec-purgatory.S 

source_arch/x86/purgatory/kexec-purgatory.o := arch/x86/purgatory/kexec-purgatory.S

deps_arch/x86/purgatory/kexec-purgatory.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \

arch/x86/purgatory/kexec-purgatory.o: $(deps_arch/x86/purgatory/kexec-purgatory.o)

$(deps_arch/x86/purgatory/kexec-purgatory.o):
