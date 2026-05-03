cmd_arch/x86/boot/mkcpustr := gcc -Wp,-MMD,arch/x86/boot/.mkcpustr.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement     -I./tools/include -include include/generated/autoconf.h -D__EXPORTED_HEADERS__    -o arch/x86/boot/mkcpustr arch/x86/boot/mkcpustr.c   

source_arch/x86/boot/mkcpustr := arch/x86/boot/mkcpustr.c

deps_arch/x86/boot/mkcpustr := \
  arch/x86/boot/../include/asm/required-features.h \
    $(wildcard include/config/X86_MINIMUM_CPU_FAMILY) \
    $(wildcard include/config/MATH_EMULATION) \
    $(wildcard include/config/X86_PAE) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/X86_CMPXCHG64) \
    $(wildcard include/config/X86_CMOV) \
    $(wildcard include/config/X86_P6_NOP) \
    $(wildcard include/config/MATOM) \
    $(wildcard include/config/PARAVIRT_XXL) \
  arch/x86/boot/../include/asm/disabled-features.h \
    $(wildcard include/config/X86_UMIP) \
    $(wildcard include/config/X86_INTEL_MEMORY_PROTECTION_KEYS) \
    $(wildcard include/config/ARCH_ENABLE_SUPERVISOR_PKEYS) \
    $(wildcard include/config/X86_5LEVEL) \
    $(wildcard include/config/PAGE_TABLE_ISOLATION) \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/RETHUNK) \
    $(wildcard include/config/CPU_UNRET_ENTRY) \
    $(wildcard include/config/INTEL_IOMMU_SVM) \
    $(wildcard include/config/X86_SGX) \
    $(wildcard include/config/INTEL_TDX_GUEST) \
  arch/x86/boot/../include/asm/cpufeatures.h \
    $(wildcard include/config/X86_32) \
  arch/x86/boot/../include/asm/vmxfeatures.h \
  arch/x86/boot/../kernel/cpu/capflags.c \
    $(wildcard include/config/X86_VMX_FEATURE_NAMES) \

arch/x86/boot/mkcpustr: $(deps_arch/x86/boot/mkcpustr)

$(deps_arch/x86/boot/mkcpustr):
