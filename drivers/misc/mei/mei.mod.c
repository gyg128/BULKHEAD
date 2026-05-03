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

SYMBOL_CRC(mei_fw_status2str, 0x90a24af4, "_gpl");
SYMBOL_CRC(mei_cancel_work, 0xc44fecac, "_gpl");
SYMBOL_CRC(mei_reset, 0xbdb1f057, "_gpl");
SYMBOL_CRC(mei_start, 0xcd2b713e, "_gpl");
SYMBOL_CRC(mei_restart, 0x08f07b2a, "_gpl");
SYMBOL_CRC(mei_stop, 0x2baa8cdf, "_gpl");
SYMBOL_CRC(mei_write_is_idle, 0xfadccc2d, "_gpl");
SYMBOL_CRC(mei_device_init, 0x11777c4c, "_gpl");
SYMBOL_CRC(mei_hbm_pg, 0xa78283bd, "_gpl");
SYMBOL_CRC(mei_hbm_pg_resume, 0x979af299, "_gpl");
SYMBOL_CRC(mei_irq_compl_handler, 0x3b3a5f92, "_gpl");
SYMBOL_CRC(mei_irq_read_handler, 0x16747e9a, "_gpl");
SYMBOL_CRC(mei_irq_write_handler, 0xdfed9a0e, "_gpl");
SYMBOL_CRC(mei_cl_all_disconnect, 0xd2dc58b7, "_gpl");
SYMBOL_CRC(mei_register, 0xe778c7f2, "_gpl");
SYMBOL_CRC(mei_deregister, 0xf865d89e, "_gpl");
SYMBOL_CRC(mei_cldev_send_vtag, 0x4eacdac7, "_gpl");
SYMBOL_CRC(mei_cldev_recv_vtag, 0x3183ad34, "_gpl");
SYMBOL_CRC(mei_cldev_recv_nonblock_vtag, 0x954f61ea, "_gpl");
SYMBOL_CRC(mei_cldev_send, 0xd799cb81, "_gpl");
SYMBOL_CRC(mei_cldev_recv, 0xc0d7887e, "_gpl");
SYMBOL_CRC(mei_cldev_recv_nonblock, 0x7d2e4d02, "_gpl");
SYMBOL_CRC(mei_cldev_register_rx_cb, 0xf069701c, "_gpl");
SYMBOL_CRC(mei_cldev_register_notif_cb, 0x04b917e5, "_gpl");
SYMBOL_CRC(mei_cldev_get_drvdata, 0xe8f22285, "_gpl");
SYMBOL_CRC(mei_cldev_set_drvdata, 0xfabe1fc5, "_gpl");
SYMBOL_CRC(mei_cldev_uuid, 0x20f79ada, "_gpl");
SYMBOL_CRC(mei_cldev_ver, 0x1da573d1, "_gpl");
SYMBOL_CRC(mei_cldev_enabled, 0x5860dc7e, "_gpl");
SYMBOL_CRC(mei_cldev_dma_map, 0x6b6cb7e5, "_gpl");
SYMBOL_CRC(mei_cldev_dma_unmap, 0x51321c0b, "_gpl");
SYMBOL_CRC(mei_cldev_enable, 0x8e30ccac, "_gpl");
SYMBOL_CRC(mei_cldev_disable, 0xc142bf89, "_gpl");
SYMBOL_CRC(__mei_cldev_driver_register, 0x4354d084, "_gpl");
SYMBOL_CRC(mei_cldev_driver_unregister, 0x3721be97, "_gpl");
SYMBOL_CRC(__tracepoint_mei_reg_read, 0xdb3d66a1, "");
SYMBOL_CRC(__traceiter_mei_reg_read, 0xd509e31a, "");
SYMBOL_CRC(__SCK__tp_func_mei_reg_read, 0xb2d74b82, "");
SYMBOL_CRC(__SCT__tp_func_mei_reg_read, 0x3b0a488d, "");
SYMBOL_CRC(__tracepoint_mei_reg_write, 0x9ef78ba3, "");
SYMBOL_CRC(__traceiter_mei_reg_write, 0x905fda45, "");
SYMBOL_CRC(__SCK__tp_func_mei_reg_write, 0x3cf910fc, "");
SYMBOL_CRC(__SCT__tp_func_mei_reg_write, 0x0bb25295, "");
SYMBOL_CRC(__tracepoint_mei_pci_cfg_read, 0x3baf49c2, "");
SYMBOL_CRC(__traceiter_mei_pci_cfg_read, 0x2ed41214, "");
SYMBOL_CRC(__SCK__tp_func_mei_pci_cfg_read, 0x29425e3b, "");
SYMBOL_CRC(__SCT__tp_func_mei_pci_cfg_read, 0x14dc7949, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf4db35bc, "stpcpy" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe914e41e, "strcpy" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x189e5b9c, "__init_rwsem" },
	{ 0xc3e755bf, "bpf_trace_run4" },
	{ 0xf3e1306c, "__class_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0xbc479851, "dmam_alloc_attrs" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0xc5c898f, "kill_fasync" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb6028004, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x3755d8fa, "__module_get" },
	{ 0x33a44216, "get_device" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x12b00ce7, "debugfs_read_file_bool" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x2596864a, "sysfs_notify" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xc1c17ede, "debugfs_write_file_bool" },
	{ 0x211fcf87, "put_device" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xd7ef1ab2, "compat_ptr_ioctl" },
	{ 0xddfaee26, "cdev_add" },
	{ 0xb14bce72, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xb334290c, "down_write" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0x35595e4a, "simple_open" },
	{ 0x65b486c1, "device_add" },
	{ 0x8e4598b7, "idr_alloc" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xdd714de9, "fasync_helper" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xa9b1739f, "current_task" },
	{ 0x538c7455, "device_del" },
	{ 0x97a6a609, "dmam_free_coherent" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x726f18e4, "device_match_devt" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xf03e570f, "down_read" },
	{ 0x86fe1f19, "nonseekable_open" },
	{ 0x51d37445, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51ab634, "device_create_with_groups" },
	{ 0xdd64e639, "strscpy" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0x2f12ffed, "single_release" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5a6da20, "device_release_driver" },
	{ 0x754d539c, "strlen" },
	{ 0x38a4f93d, "single_open" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x7c19dae7, "generic_file_llseek" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x12b824a2, "up_read" },
	{ 0x59a7328c, "driver_register" },
	{ 0x4fcbe300, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x378a8904, "cdev_del" },
	{ 0x4786d9cb, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb418b31, "class_find_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F291AD12B56FDDA14D61048");
