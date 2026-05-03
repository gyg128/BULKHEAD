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
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x2523e3b2, "acpi_bus_register_driver" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xcebeb713, "acpi_bus_unregister_driver" },
	{ 0x2494cb7e, "device_create_file" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xcef07d04, "device_remove_file" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xc42dcb99, "acpi_evaluate_ost" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x92997ed8, "_printk" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf3e7427d, "kthread_create_on_node" },
	{ 0xf6687cb9, "wake_up_process" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xed05fcd6, "kthread_stop" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa9b1739f, "current_task" },
	{ 0xfd5a3a18, "sched_set_fifo_low" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xfb578fc5, "memset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x439c645f, "set_cpus_allowed_ptr" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xbfe5616d, "tick_broadcast_oneshot_control" },
	{ 0x10ddd0cb, "__SCT__perf_lopwr_cb" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x5c5a1b16, "tick_broadcast_control" },
	{ 0x2b67b6b7, "mds_idle_clear" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x1000e51, "schedule" },
	{ 0x96848186, "scnprintf" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000C:*");

MODULE_INFO(srcversion, "7AE9D74DD34A56ACFBE5531");
