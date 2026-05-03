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

SYMBOL_CRC(sdw_cdns_debugfs_init, 0x1b34a095, "_gpl");
SYMBOL_CRC(cdns_xfer_msg, 0xdf4e63b3, "");
SYMBOL_CRC(cdns_xfer_msg_defer, 0x7cf56bd0, "");
SYMBOL_CRC(cdns_reset_page_addr, 0x70c2bd50, "");
SYMBOL_CRC(cdns_read_ping_status, 0xc693f2f4, "");
SYMBOL_CRC(sdw_cdns_irq, 0x34712074, "");
SYMBOL_CRC(sdw_cdns_check_self_clearing_bits, 0xbc1a2ea3, "");
SYMBOL_CRC(sdw_cdns_exit_reset, 0xa1358fbd, "");
SYMBOL_CRC(sdw_cdns_enable_interrupt, 0x42da2f09, "");
SYMBOL_CRC(sdw_cdns_pdi_init, 0x03c46de3, "");
SYMBOL_CRC(sdw_cdns_init, 0x0f198f02, "");
SYMBOL_CRC(cdns_bus_conf, 0xf556c862, "");
SYMBOL_CRC(sdw_cdns_is_clock_stop, 0x9dedb480, "");
SYMBOL_CRC(sdw_cdns_clock_stop, 0x9464be43, "");
SYMBOL_CRC(sdw_cdns_clock_restart, 0x5c84a38d, "");
SYMBOL_CRC(sdw_cdns_probe, 0x9037f741, "");
SYMBOL_CRC(cdns_set_sdw_stream, 0x2f9566fd, "");
SYMBOL_CRC(sdw_cdns_config_stream, 0xe82f4021, "");
SYMBOL_CRC(sdw_cdns_alloc_pdi, 0x95171432, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x35cd8207, "sdw_bus_prep_clk_stop" },
	{ 0xfbff0daa, "simple_attr_open" },
	{ 0xc2660abe, "debugfs_attr_write" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbe2a2765, "complete" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x1d1183ae, "sdw_bus_clk_stop" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x1deee061, "sdw_find_row_index" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x161df9eb, "sdw_handle_slave_status" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2740c925, "___ratelimit" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x73e9ad3e, "debugfs_attr_read" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4a909828, "simple_attr_release" },
	{ 0x51d37445, "seq_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x60e31fbb, "sdw_find_col_index" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x2f12ffed, "single_release" },
	{ 0xb4ada2bb, "sdw_bread_no_pm_unlocked" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x38a4f93d, "single_open" },
	{ 0x5179f615, "sdw_bus_exit_clk_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "soundwire-bus");


MODULE_INFO(srcversion, "0568ACA2406A423E08D4FAF");
