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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(sst_alloc_drv_context, 0x472ba933, "_gpl");
SYMBOL_CRC(sst_context_init, 0x4a475257, "_gpl");
SYMBOL_CRC(sst_context_cleanup, 0x61a46acb, "_gpl");
SYMBOL_CRC(sst_configure_runtime_pm, 0x8a79dbcd, "_gpl");
SYMBOL_CRC(intel_sst_pm, 0xfb7fff3c, "_gpl");
SYMBOL_CRC(relocate_imr_addr_mrfld, 0x709cd25f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc46293b, "cpu_latency_qos_remove_request" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x1952790e, "finish_wait" },
	{ 0x5c8942ba, "request_firmware" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x69acdf38, "memcpy" },
	{ 0x81d1c836, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2dba276a, "__iowrite32_copy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x2db53ddc, "request_firmware_nowait" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeedeac99, "cpu_latency_qos_update_request" },
	{ 0x5a921311, "strncmp" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0xefbe919c, "sst_unregister_dsp" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x41043481, "sst_register_dsp" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-sst-atom-hifi2-platform");


MODULE_INFO(srcversion, "3FB6515D4FE3340777530BF");
