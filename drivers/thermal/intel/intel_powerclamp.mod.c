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
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf545f11b, "thermal_cooling_device_register" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0xe273e458, "thermal_cooling_device_unregister" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x18108c8d, "kthread_cancel_work_sync" },
	{ 0xd2bef438, "kthread_cancel_delayed_work_sync" },
	{ 0x94bdfc98, "kthread_destroy_worker" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x227ce076, "kthread_create_worker_on_cpu" },
	{ 0x6e970e6c, "sched_set_fifo" },
	{ 0x2fe17205, "kthread_delayed_work_timer_fn" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xac05771b, "kthread_queue_work" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc8a19498, "kthread_queue_delayed_work" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2394899, "play_idle_precise" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x38a4f93d, "single_open" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x31b0d3c2, "param_get_int" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x51d37445, "seq_read" },
	{ 0x2f12ffed, "single_release" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*0083*");

MODULE_INFO(srcversion, "2D026D4362617C815AAB7C2");
