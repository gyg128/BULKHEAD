cmd_arch/x86/kernel/cpu/capflags.o := clang -Wp,-MMD,arch/x86/kernel/cpu/.capflags.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -flegacy-pass-manager -Xclang -load -Xclang /home/yg/project/pks-static-analysis/instrument/build/lib/libInstrumentTest.so -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu11 --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mstack-alignment=8 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -Wno-sign-compare -fno-asynchronous-unwind-tables -mretpoline-external-thunk -fno-delete-null-pointer-checks -Wno-frame-address -Wno-address-of-packed-member -O2 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-gnu -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -pg -mfentry -DCC_USING_NOP_MCOUNT -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wcast-function-type -Wimplicit-fallthrough -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-format -Wformat-extra-args -Wformat-invalid-specifier -Wformat-zero-length -Wnonnull -Wformat-insufficient-args -Wno-sign-compare -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -g -gdwarf-5  -fsanitize=array-bounds -fsanitize=shift -fsanitize=bool -fsanitize=enum    -DKBUILD_MODFILE='"arch/x86/kernel/cpu/capflags"' -DKBUILD_BASENAME='"capflags"' -DKBUILD_MODNAME='"capflags"' -D__KBUILD_MODNAME=kmod_capflags -c -o arch/x86/kernel/cpu/capflags.o arch/x86/kernel/cpu/capflags.c   ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --mcount --retpoline --stackval --static-call --uaccess   arch/x86/kernel/cpu/capflags.o

source_arch/x86/kernel/cpu/capflags.o := arch/x86/kernel/cpu/capflags.c

deps_arch/x86/kernel/cpu/capflags.o := \
    $(wildcard include/config/X86_VMX_FEATURE_NAMES) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-clang.h \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/CLANG_VERSION) \
  arch/x86/include/asm/cpufeatures.h \
    $(wildcard include/config/X86_32) \
  arch/x86/include/asm/required-features.h \
    $(wildcard include/config/X86_MINIMUM_CPU_FAMILY) \
    $(wildcard include/config/MATH_EMULATION) \
    $(wildcard include/config/X86_PAE) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/X86_CMPXCHG64) \
    $(wildcard include/config/X86_CMOV) \
    $(wildcard include/config/X86_P6_NOP) \
    $(wildcard include/config/MATOM) \
    $(wildcard include/config/PARAVIRT_XXL) \
  arch/x86/include/asm/disabled-features.h \
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
  arch/x86/include/asm/vmxfeatures.h \

arch/x86/kernel/cpu/capflags.o: $(deps_arch/x86/kernel/cpu/capflags.o)

$(deps_arch/x86/kernel/cpu/capflags.o):

arch/x86/kernel/cpu/capflags.o: $(wildcard ./tools/objtool/objtool)
