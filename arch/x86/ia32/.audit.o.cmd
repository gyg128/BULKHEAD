cmd_arch/x86/ia32/audit.o := clang -Wp,-MMD,arch/x86/ia32/.audit.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -flegacy-pass-manager -Xclang -load -Xclang /home/yg/project/pks-static-analysis/instrument/build/lib/libInstrumentTest.so -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu11 --target=x86_64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mstack-alignment=8 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -Wno-sign-compare -fno-asynchronous-unwind-tables -mretpoline-external-thunk -fno-delete-null-pointer-checks -Wno-frame-address -Wno-address-of-packed-member -O2 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-gnu -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -pg -mfentry -DCC_USING_NOP_MCOUNT -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wcast-function-type -Wimplicit-fallthrough -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-format -Wformat-extra-args -Wformat-invalid-specifier -Wformat-zero-length -Wnonnull -Wformat-insufficient-args -Wno-sign-compare -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -g -gdwarf-5  -fsanitize=array-bounds -fsanitize=shift -fsanitize=bool -fsanitize=enum    -DKBUILD_MODFILE='"arch/x86/ia32/audit"' -DKBUILD_BASENAME='"audit"' -DKBUILD_MODNAME='"audit"' -D__KBUILD_MODNAME=kmod_audit -c -o arch/x86/ia32/audit.o arch/x86/ia32/audit.c   ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --mcount --retpoline --stackval --static-call --uaccess   arch/x86/ia32/audit.o

source_arch/x86/ia32/audit.o := arch/x86/ia32/audit.c

deps_arch/x86/ia32/audit.o := \
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
  include/linux/audit_arch.h \
  arch/x86/include/generated/uapi/asm/unistd_32.h \
  arch/x86/include/asm/audit.h \
  include/asm-generic/audit_dir_write.h \
  include/asm-generic/audit_change_attr.h \
  include/asm-generic/audit_write.h \
  include/asm-generic/audit_read.h \
  include/asm-generic/audit_signal.h \

arch/x86/ia32/audit.o: $(deps_arch/x86/ia32/audit.o)

$(deps_arch/x86/ia32/audit.o):

arch/x86/ia32/audit.o: $(wildcard ./tools/objtool/objtool)
