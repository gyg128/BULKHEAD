cmd_arch/x86/boot/bioscall.o := clang -Wp,-MMD,arch/x86/boot/.bioscall.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -m16 -g -Os -DDISABLE_BRANCH_PROFILING -D__DISABLE_EXPORTS -Wall -Wstrict-prototypes -march=i386 -mregparm=3 -fno-strict-aliasing -fomit-frame-pointer -fno-pic -mno-mmx -mno-sse -fcf-protection=none -ffreestanding -fno-stack-protector -Wno-address-of-packed-member -mstack-alignment=4 --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -D_SETUP -D__ASSEMBLY__ -DSVGA_MODE=NORMAL_VGA    -c -o arch/x86/boot/bioscall.o arch/x86/boot/bioscall.S 

source_arch/x86/boot/bioscall.o := arch/x86/boot/bioscall.S

deps_arch/x86/boot/bioscall.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \

arch/x86/boot/bioscall.o: $(deps_arch/x86/boot/bioscall.o)

$(deps_arch/x86/boot/bioscall.o):
