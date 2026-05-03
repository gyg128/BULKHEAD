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

SYMBOL_CRC(snd_intel_dsp_driver_probe, 0x154ff067, "_gpl");
SYMBOL_CRC(snd_intel_acpi_dsp_driver_probe, 0x559cdd4a, "_gpl");
SYMBOL_CRC(intel_nhlt_init, 0x4ef1dc36, "_gpl");
SYMBOL_CRC(intel_nhlt_free, 0x4e859456, "_gpl");
SYMBOL_CRC(intel_nhlt_get_dmic_geo, 0x1c8cfa94, "_gpl");
SYMBOL_CRC(intel_nhlt_has_endpoint_type, 0x41a05c36, "");
SYMBOL_CRC(intel_nhlt_ssp_endpoint_mask, 0x66fd6169, "");
SYMBOL_CRC(intel_nhlt_ssp_mclk_mask, 0xb7b836b3, "");
SYMBOL_CRC(intel_nhlt_get_endpoint_blob, 0x359a06fe, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB9380509DB0615EDF2889C");
