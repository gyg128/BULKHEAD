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
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0x90de0452, "platform_thermal_package_notify" },
	{ 0x8a7cb9c4, "platform_thermal_package_rate_control" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0xa0ed55df, "debugfs_create_u32" },
	{ 0x37a0cba, "kfree" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe4ffb648, "cpu_info" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x41d2af07, "thermal_zone_device_register" },
	{ 0xd0b4f2d5, "thermal_zone_device_enable" },
	{ 0x8ee4dcdd, "thermal_zone_device_unregister" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xdbf36173, "thermal_zone_device_update" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");

MODULE_INFO(srcversion, "C285865309EF351CDDBFDAF");
