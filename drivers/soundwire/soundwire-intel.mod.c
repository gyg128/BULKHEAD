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

SYMBOL_CRC(sdw_intel_enable_irq, 0x5af438eb, "");
SYMBOL_CRC(sdw_intel_thread, 0xaa52eba1, "");
SYMBOL_CRC(sdw_intel_probe, 0xd003a018, "");
SYMBOL_CRC(sdw_intel_startup, 0x5c9be4d7, "");
SYMBOL_CRC(sdw_intel_exit, 0x84b02b0c, "");
SYMBOL_CRC(sdw_intel_process_wakeen_event, 0x4bf8763e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c46de3, "sdw_cdns_pdi_init" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xfbff0daa, "simple_attr_open" },
	{ 0x70c2bd50, "cdns_reset_page_addr" },
	{ 0xc2660abe, "debugfs_attr_write" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xd88b5c4e, "auxiliary_device_init" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf198f02, "sdw_cdns_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c84a38d, "sdw_cdns_clock_restart" },
	{ 0x1b34a095, "sdw_cdns_debugfs_init" },
	{ 0x2b747381, "sdw_bus_master_add" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x42da2f09, "sdw_cdns_enable_interrupt" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dedb480, "sdw_cdns_is_clock_stop" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x371fcfba, "device_for_each_child" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe82f4021, "sdw_cdns_config_stream" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0x29edcefd, "auxiliary_driver_unregister" },
	{ 0x648e19e, "devm_snd_soc_register_component" },
	{ 0xf556c862, "cdns_bus_conf" },
	{ 0x2740c925, "___ratelimit" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x2f9566fd, "cdns_set_sdw_stream" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0xac864d6f, "fwnode_property_read_u32_array" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x278ae7b0, "sdw_clear_slave_status" },
	{ 0x73e9ad3e, "debugfs_attr_read" },
	{ 0x6f9ea56d, "sdw_stream_remove_master" },
	{ 0xa1358fbd, "sdw_cdns_exit_reset" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4a909828, "simple_attr_release" },
	{ 0x95b91b00, "__auxiliary_device_add" },
	{ 0x95171432, "sdw_cdns_alloc_pdi" },
	{ 0x9464be43, "sdw_cdns_clock_stop" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x7cf56bd0, "cdns_xfer_msg_defer" },
	{ 0xdf4e63b3, "cdns_xfer_msg" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x538c7455, "device_del" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x51d37445, "seq_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x52eada2a, "sdw_stream_add_master" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xc693f2f4, "cdns_read_ping_status" },
	{ 0x110984ed, "acpi_fetch_acpi_dev" },
	{ 0x16eade20, "device_get_named_child_node" },
	{ 0x9037f741, "sdw_cdns_probe" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x20165f61, "sdw_bus_master_delete" },
	{ 0x2f12ffed, "single_release" },
	{ 0x7b3d04ac, "__auxiliary_driver_register" },
	{ 0xbc1a2ea3, "sdw_cdns_check_self_clearing_bits" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0x38a4f93d, "single_open" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x574ba8c1, "sdw_master_read_prop" },
	{ 0x8eb05cdc, "sdw_compute_params" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "soundwire-cadence,soundwire-bus,snd-soc-core,soundwire-generic-allocation,snd-pcm");

MODULE_ALIAS("auxiliary:soundwire_intel.link");

MODULE_INFO(srcversion, "B053FD8916212B47F52FBE1");
