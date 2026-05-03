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

SYMBOL_CRC(sdw_bus_type, 0x2c9ec1c0, "_gpl");
SYMBOL_CRC(__sdw_register_driver, 0x2deba19c, "_gpl");
SYMBOL_CRC(sdw_unregister_driver, 0x870bb534, "_gpl");
SYMBOL_CRC(sdw_bus_master_add, 0x2b747381, "");
SYMBOL_CRC(sdw_bus_master_delete, 0x20165f61, "");
SYMBOL_CRC(sdw_show_ping_status, 0x692ecefe, "");
SYMBOL_CRC(sdw_write_no_pm, 0xd61f5f58, "");
SYMBOL_CRC(sdw_bread_no_pm_unlocked, 0xb4ada2bb, "");
SYMBOL_CRC(sdw_bwrite_no_pm_unlocked, 0x8e0e70d9, "");
SYMBOL_CRC(sdw_read_no_pm, 0xca460bcf, "");
SYMBOL_CRC(sdw_update_no_pm, 0x70d0438d, "");
SYMBOL_CRC(sdw_update, 0x4c484074, "");
SYMBOL_CRC(sdw_nread, 0xaab2f67d, "");
SYMBOL_CRC(sdw_nwrite, 0x3b11654f, "");
SYMBOL_CRC(sdw_read, 0x63ddcb2d, "");
SYMBOL_CRC(sdw_write, 0xd6942d44, "");
SYMBOL_CRC(sdw_compare_devid, 0xb50ddad1, "");
SYMBOL_CRC(sdw_extract_slave_id, 0x450b4f46, "");
SYMBOL_CRC(sdw_bus_prep_clk_stop, 0x35cd8207, "");
SYMBOL_CRC(sdw_bus_clk_stop, 0x1d1183ae, "");
SYMBOL_CRC(sdw_bus_exit_clk_stop, 0x5179f615, "");
SYMBOL_CRC(sdw_handle_slave_status, 0x161df9eb, "");
SYMBOL_CRC(sdw_clear_slave_status, 0x278ae7b0, "");
SYMBOL_CRC(sdw_slave_add, 0x61c0ea39, "");
SYMBOL_CRC(sdw_master_read_prop, 0x574ba8c1, "");
SYMBOL_CRC(sdw_slave_read_prop, 0xff688b52, "");
SYMBOL_CRC(sdw_rows, 0xf53ba0b8, "");
SYMBOL_CRC(sdw_cols, 0xba54b904, "");
SYMBOL_CRC(sdw_find_col_index, 0x60e31fbb, "");
SYMBOL_CRC(sdw_find_row_index, 0x1deee061, "");
SYMBOL_CRC(sdw_prepare_stream, 0x16d1706b, "");
SYMBOL_CRC(sdw_enable_stream, 0xbbec2c2e, "");
SYMBOL_CRC(sdw_disable_stream, 0x4cde88bf, "");
SYMBOL_CRC(sdw_deprepare_stream, 0x71891d59, "");
SYMBOL_CRC(sdw_alloc_stream, 0x9e122d79, "");
SYMBOL_CRC(sdw_startup_stream, 0x3b0a8582, "");
SYMBOL_CRC(sdw_shutdown_stream, 0x6f95b16b, "");
SYMBOL_CRC(sdw_release_stream, 0xda5bce09, "");
SYMBOL_CRC(sdw_stream_add_master, 0x52eada2a, "");
SYMBOL_CRC(sdw_stream_remove_master, 0x6f9ea56d, "");
SYMBOL_CRC(sdw_stream_add_slave, 0xb206e9ab, "");
SYMBOL_CRC(sdw_stream_remove_slave, 0xbc505f9c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x7d9e722b, "device_property_present" },
	{ 0x5ad2c887, "devm_device_add_groups" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbe2a2765, "complete" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x5e575929, "dev_pm_domain_attach" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x6e571f3b, "devm_device_add_group" },
	{ 0x371fcfba, "device_for_each_child" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xde2ea796, "pm_generic_runtime_resume" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0xd6f2498a, "device_property_read_u32_array" },
	{ 0xac864d6f, "fwnode_property_read_u32_array" },
	{ 0x3394ebff, "dev_pm_domain_detach" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x8ca4f3a4, "pm_generic_runtime_suspend" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x3155b23d, "ida_free" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x59554d57, "device_register" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x51d37445, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x73e310b3, "fwnode_property_present" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x16eade20, "device_get_named_child_node" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x2f12ffed, "single_release" },
	{ 0x650d049e, "acpi_dev_for_each_child" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x38a4f93d, "single_open" },
	{ 0x76776184, "mutex_destroy" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x59a7328c, "driver_register" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x4786d9cb, "bus_register" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB8228A570FC757F3E7A6D6");
