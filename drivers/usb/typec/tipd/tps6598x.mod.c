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
	{ 0x4bc0207c, "typec_register_partner" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x17eea942, "regmap_raw_read" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1e42e51c, "dev_fwnode" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf16b0803, "fwnode_usb_role_switch_get" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x5bf0b28d, "devm_power_supply_register" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xd44c509e, "__devm_regmap_init_i2c" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x50720bc3, "typec_unregister_partner" },
	{ 0x261fd11d, "typec_set_pwr_opmode" },
	{ 0xf70b9f19, "typec_set_orientation" },
	{ 0x40c9911d, "i2c_register_driver" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x9fc9135c, "typec_set_vconn_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x8f61e464, "typec_set_data_role" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xf8467644, "typec_unregister_port" },
	{ 0x77795db6, "power_supply_get_drvdata" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xd352ef64, "typec_register_port" },
	{ 0xdb2abd50, "power_supply_changed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x16eade20, "device_get_named_child_node" },
	{ 0xa3306f1, "typec_get_drvdata" },
	{ 0x3c3dc1f8, "typec_partner_set_identity" },
	{ 0x80b43c92, "fw_devlink_purge_absent_suppliers" },
	{ 0x51454c6, "typec_set_pwr_role" },
	{ 0x81188c30, "match_string" },
	{ 0x8f22a520, "i2c_del_driver" },
	{ 0x87df32bb, "fwnode_handle_put" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x10ce671f, "regmap_raw_write" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "typec");

MODULE_ALIAS("of:N*T*Cti,tps6598x");
MODULE_ALIAS("of:N*T*Cti,tps6598xC*");
MODULE_ALIAS("of:N*T*Capple,cd321x");
MODULE_ALIAS("of:N*T*Capple,cd321xC*");
MODULE_ALIAS("i2c:tps6598x");

MODULE_INFO(srcversion, "A77B8A7730FB9782029D12A");
