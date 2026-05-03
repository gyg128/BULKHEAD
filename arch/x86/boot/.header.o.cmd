cmd_arch/x86/boot/header.o := clang -Wp,-MMD,arch/x86/boot/.header.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -m16 -g -Os -DDISABLE_BRANCH_PROFILING -D__DISABLE_EXPORTS -Wall -Wstrict-prototypes -march=i386 -mregparm=3 -fno-strict-aliasing -fomit-frame-pointer -fno-pic -mno-mmx -mno-sse -fcf-protection=none -ffreestanding -fno-stack-protector -Wno-address-of-packed-member -mstack-alignment=4 --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -D_SETUP -D__ASSEMBLY__ -DSVGA_MODE=NORMAL_VGA -I./arch/x86/boot    -c -o arch/x86/boot/header.o arch/x86/boot/header.S 

source_arch/x86/boot/header.o := arch/x86/boot/header.S

deps_arch/x86/boot/header.o := \
    $(wildcard include/config/EFI_STUB) \
    $(wildcard include/config/X86_32) \
    $(wildcard include/config/EFI_DXE_MEM_ATTRIBUTES) \
    $(wildcard include/config/EFI_MIXED) \
    $(wildcard include/config/PHYSICAL_ALIGN) \
    $(wildcard include/config/RELOCATABLE) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/EFI) \
    $(wildcard include/config/KEXEC_CORE) \
    $(wildcard include/config/X86_5LEVEL) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/pe.h \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/x86/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  arch/x86/include/asm/segment.h \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/XEN_PV) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/x86/include/asm/alternative.h \
  include/linux/stringify.h \
  arch/x86/include/asm/asm.h \
    $(wildcard include/config/KPROBES) \
  arch/x86/include/asm/extable_fixup_types.h \
  arch/x86/include/asm/ibt.h \
    $(wildcard include/config/X86_KERNEL_IBT) \
  arch/x86/include/asm/cache.h \
    $(wildcard include/config/X86_L1_CACHE_SHIFT) \
    $(wildcard include/config/X86_INTERNODE_CACHE_SHIFT) \
    $(wildcard include/config/X86_VSMP) \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/x86/include/asm/linkage.h \
    $(wildcard include/config/X86_ALIGNMENT_16) \
    $(wildcard include/config/RETHUNK) \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/SLS) \
  arch/x86/include/asm/boot.h \
    $(wildcard include/config/PHYSICAL_START) \
    $(wildcard include/config/KERNEL_BZIP2) \
    $(wildcard include/config/KERNEL_ZSTD) \
    $(wildcard include/config/RANDOMIZE_BASE) \
    $(wildcard include/config/X86_VERBOSE_BOOTUP) \
  arch/x86/include/asm/pgtable_types.h \
    $(wildcard include/config/PKK) \
    $(wildcard include/config/X86_INTEL_MEMORY_PROTECTION_KEYS) \
    $(wildcard include/config/ARCH_ENABLE_SUPERVISOR_PKEYS) \
    $(wildcard include/config/X86_PAE) \
    $(wildcard include/config/MEM_SOFT_DIRTY) \
    $(wildcard include/config/HAVE_ARCH_USERFAULTFD_WP) \
    $(wildcard include/config/ASID_SWITCH4PKS) \
    $(wildcard include/config/ISKIOS_XOM) \
    $(wildcard include/config/PGTABLE_LEVELS) \
    $(wildcard include/config/PROC_FS) \
  include/linux/mem_encrypt.h \
    $(wildcard include/config/ARCH_HAS_MEM_ENCRYPT) \
    $(wildcard include/config/AMD_MEM_ENCRYPT) \
  arch/x86/include/asm/page_types.h \
    $(wildcard include/config/DYNAMIC_PHYSICAL_MASK) \
  arch/x86/include/asm/page_64_types.h \
    $(wildcard include/config/KASAN) \
    $(wildcard include/config/DYNAMIC_MEMORY_LAYOUT) \
  arch/x86/include/asm/pgtable_64_types.h \
    $(wildcard include/config/KMSAN) \
    $(wildcard include/config/DEBUG_KMAP_LOCAL_FORCE_MAP) \
  arch/x86/include/asm/sparsemem.h \
    $(wildcard include/config/SPARSEMEM) \
    $(wildcard include/config/NUMA_KEEP_MEMINFO) \
  arch/x86/include/uapi/asm/boot.h \
  arch/x86/include/asm/setup.h \
    $(wildcard include/config/X86_INTEL_MID) \
    $(wildcard include/config/X86_INTEL_CE) \
    $(wildcard include/config/RANDOMIZE_MEMORY) \
  arch/x86/include/uapi/asm/setup.h \
  include/linux/pfn.h \
  arch/x86/include/uapi/asm/bootparam.h \
  arch/x86/boot/boot.h \
  arch/x86/boot/voffset.h \
  arch/x86/boot/zoffset.h \

arch/x86/boot/header.o: $(deps_arch/x86/boot/header.o)

$(deps_arch/x86/boot/header.o):
