rbtree.o: lib/rbtree.c include/linux/compiler-version.h \
  include/linux/kconfig.h include/generated/autoconf.h \
  include/linux/compiler_types.h include/linux/compiler_attributes.h \
  include/linux/compiler-clang.h include/linux/rbtree_augmented.h \
  include/linux/compiler.h arch/x86/include/generated/asm/rwonce.h \
  include/asm-generic/rwonce.h include/linux/kasan-checks.h \
  include/linux/types.h include/uapi/linux/types.h \
  arch/x86/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h include/linux/stddef.h \
  include/uapi/linux/stddef.h arch/x86/include/asm/posix_types.h \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h include/linux/kcsan-checks.h \
  include/linux/rbtree.h include/linux/container_of.h \
  include/linux/build_bug.h include/linux/err.h \
  arch/x86/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h include/uapi/asm-generic/errno-base.h \
  include/linux/rbtree_types.h include/linux/rcupdate.h \
  include/linux/atomic.h arch/x86/include/asm/atomic.h \
  arch/x86/include/asm/alternative.h include/linux/stringify.h \
  arch/x86/include/asm/asm.h arch/x86/include/asm/extable_fixup_types.h \
  arch/x86/include/asm/cmpxchg.h arch/x86/include/asm/cpufeatures.h \
  arch/x86/include/asm/required-features.h \
  arch/x86/include/asm/disabled-features.h \
  arch/x86/include/asm/cmpxchg_64.h arch/x86/include/asm/rmwcc.h \
  arch/x86/include/asm/barrier.h arch/x86/include/asm/nops.h \
  include/asm-generic/barrier.h arch/x86/include/asm/atomic64_64.h \
  include/linux/atomic/atomic-arch-fallback.h \
  include/linux/atomic/atomic-long.h \
  include/linux/atomic/atomic-instrumented.h \
  include/linux/instrumented.h include/linux/kmsan-checks.h \
  include/linux/irqflags.h include/linux/typecheck.h \
  arch/x86/include/asm/irqflags.h arch/x86/include/asm/processor-flags.h \
  arch/x86/include/uapi/asm/processor-flags.h include/linux/const.h \
  include/vdso/const.h include/uapi/linux/const.h \
  include/linux/mem_encrypt.h arch/x86/include/asm/mem_encrypt.h \
  include/linux/init.h include/linux/cc_platform.h \
  arch/x86/include/uapi/asm/bootparam.h include/linux/screen_info.h \
  include/uapi/linux/screen_info.h include/linux/apm_bios.h \
  include/uapi/linux/apm_bios.h include/uapi/linux/ioctl.h \
  arch/x86/include/generated/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h include/uapi/asm-generic/ioctl.h \
  include/linux/edd.h include/uapi/linux/edd.h \
  arch/x86/include/asm/ist.h arch/x86/include/uapi/asm/ist.h \
  include/video/edid.h include/uapi/video/edid.h \
  arch/x86/include/asm/nospec-branch.h include/linux/static_key.h \
  include/linux/jump_label.h arch/x86/include/asm/jump_label.h \
  include/linux/objtool.h include/linux/linkage.h include/linux/export.h \
  arch/x86/include/asm/linkage.h arch/x86/include/asm/ibt.h \
  arch/x86/include/asm/msr-index.h include/linux/bits.h \
  include/vdso/bits.h arch/x86/include/asm/unwind_hints.h \
  arch/x86/include/asm/orc_types.h arch/x86/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h include/linux/swab.h \
  include/uapi/linux/swab.h arch/x86/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h arch/x86/include/asm/percpu.h \
  include/linux/kernel.h include/linux/stdarg.h include/linux/align.h \
  include/linux/limits.h include/uapi/linux/limits.h \
  include/vdso/limits.h include/linux/bitops.h \
  include/uapi/linux/kernel.h include/uapi/linux/sysinfo.h \
  include/asm-generic/bitops/generic-non-atomic.h \
  arch/x86/include/asm/bitops.h include/asm-generic/bitops/sched.h \
  arch/x86/include/asm/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/instrumented-atomic.h \
  include/asm-generic/bitops/instrumented-non-atomic.h \
  include/asm-generic/bitops/instrumented-lock.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/kstrtox.h include/linux/log2.h include/linux/math.h \
  arch/x86/include/asm/div64.h include/asm-generic/div64.h \
  include/linux/minmax.h include/linux/panic.h include/linux/printk.h \
  include/linux/kern_levels.h include/linux/ratelimit_types.h \
  include/uapi/linux/param.h arch/x86/include/generated/uapi/asm/param.h \
  include/asm-generic/param.h include/uapi/asm-generic/param.h \
  include/linux/spinlock_types_raw.h \
  arch/x86/include/asm/spinlock_types.h \
  include/asm-generic/qspinlock_types.h \
  include/asm-generic/qrwlock_types.h include/linux/lockdep_types.h \
  include/linux/once_lite.h include/linux/dynamic_debug.h \
  include/linux/static_call_types.h include/linux/instruction_pointer.h \
  include/asm-generic/percpu.h include/linux/threads.h \
  include/linux/percpu-defs.h arch/x86/include/asm/GEN-for-each-reg.h \
  arch/x86/include/asm/segment.h arch/x86/include/asm/cache.h \
  arch/x86/include/asm/paravirt.h arch/x86/include/asm/pgtable_types.h \
  arch/x86/include/asm/page_types.h arch/x86/include/asm/page_64_types.h \
  arch/x86/include/asm/kaslr.h arch/x86/include/asm/pgtable_64_types.h \
  arch/x86/include/asm/sparsemem.h include/asm-generic/pgtable-nop4d.h \
  arch/x86/include/asm/paravirt_types.h arch/x86/include/asm/desc_defs.h \
  include/linux/bug.h arch/x86/include/asm/bug.h \
  include/linux/instrumentation.h include/asm-generic/bug.h \
  include/linux/cpumask.h include/linux/bitmap.h include/linux/find.h \
  include/linux/string.h include/linux/errno.h \
  include/uapi/linux/errno.h include/uapi/linux/string.h \
  arch/x86/include/asm/string.h arch/x86/include/asm/string_64.h \
  include/linux/gfp_types.h include/linux/numa.h \
  arch/x86/include/asm/frame.h include/linux/preempt.h \
  include/linux/list.h include/linux/poison.h \
  arch/x86/include/asm/preempt.h include/linux/thread_info.h \
  include/linux/restart_block.h include/linux/time64.h \
  include/linux/math64.h include/vdso/math64.h include/vdso/time64.h \
  include/uapi/linux/time.h include/uapi/linux/time_types.h \
  arch/x86/include/asm/current.h arch/x86/include/asm/thread_info.h \
  arch/x86/include/asm/page.h arch/x86/include/asm/page_64.h \
  include/linux/range.h include/asm-generic/memory_model.h \
  include/linux/pfn.h include/asm-generic/getorder.h \
  arch/x86/include/asm/cpufeature.h arch/x86/include/asm/processor.h \
  include/linux/pks-keys.h arch/x86/include/asm/pkeys_common.h \
  include/uapi/asm-generic/mman-common.h arch/x86/include/asm/math_emu.h \
  arch/x86/include/asm/ptrace.h arch/x86/include/uapi/asm/ptrace.h \
  arch/x86/include/uapi/asm/ptrace-abi.h arch/x86/include/asm/proto.h \
  arch/x86/include/uapi/asm/ldt.h arch/x86/include/uapi/asm/sigcontext.h \
  arch/x86/include/asm/msr.h arch/x86/include/asm/cpumask.h \
  arch/x86/include/uapi/asm/msr.h arch/x86/include/asm/shared/msr.h \
  include/linux/tracepoint-defs.h arch/x86/include/asm/special_insns.h \
  arch/x86/include/asm/fpu/types.h arch/x86/include/asm/vmxfeatures.h \
  arch/x86/include/asm/vdso/processor.h include/linux/personality.h \
  include/uapi/linux/personality.h include/linux/cache.h \
  include/linux/bottom_half.h include/linux/lockdep.h \
  include/linux/smp.h include/linux/smp_types.h include/linux/llist.h \
  arch/x86/include/asm/smp.h include/linux/debug_locks.h \
  include/linux/stacktrace.h include/linux/context_tracking_irq.h \
  include/linux/rcutree.h
