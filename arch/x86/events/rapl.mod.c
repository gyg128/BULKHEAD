#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xf655ab8d, "perf_msr_probe" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0x230a8c0d, "perf_pmu_register" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x65d652c2, "perf_pmu_unregister" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe4ffb648, "cpu_info" },
	{ 0x618911fc, "numa_node" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x265cc1f6, "kmalloc_node_trace" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x25de0e48, "hrtimer_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3c427f67, "cpu_die_map" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf51a45d6, "perf_pmu_migrate_context" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xdb2e8ca9, "hrtimer_start_range_ns" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x1f3e72f5, "hrtimer_cancel" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x9c00382c, "hrtimer_forward" },
	{ 0xdd7b34c2, "perf_event_sysfs_show" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*007D*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");

MODULE_INFO(srcversion, "06BEEBF8CAF3C9858B54045");
