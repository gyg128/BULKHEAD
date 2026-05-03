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

SYMBOL_CRC(intel_lpss_probe, 0x891f7622, "_gpl");
SYMBOL_CRC(intel_lpss_remove, 0xee4fd829, "_gpl");
SYMBOL_CRC(intel_lpss_prepare, 0x680d2708, "_gpl");
SYMBOL_CRC(intel_lpss_suspend, 0xe6a5b123, "_gpl");
SYMBOL_CRC(intel_lpss_resume, 0x81a6beec, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xf78af473, "devm_ioremap_uc" },
	{ 0xc4775fd4, "devm_kmemdup" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x44818ad8, "clk_register_fixed_rate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x7a964032, "clk_register_gate" },
	{ 0x37c3a78a, "clk_register_fractional_divider" },
	{ 0x86b427ce, "clkdev_create" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x678bacb8, "dev_pm_qos_expose_latency_tolerance" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xfce5ebab, "debugfs_create_x32" },
	{ 0xe1241b68, "mfd_add_devices" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x21a13d41, "dev_pm_qos_hide_latency_tolerance" },
	{ 0x65464c16, "clkdev_drop" },
	{ 0x3155b23d, "ida_free" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xd3f76a12, "mfd_remove_devices" },
	{ 0x355a4e20, "device_for_each_child_reverse" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0xf37fc324, "ida_destroy" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E515B8FC06ADC0BF1AED508");
