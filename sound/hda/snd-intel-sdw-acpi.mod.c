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

SYMBOL_CRC(sdw_intel_acpi_scan, 0xbb4f9d1f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xac864d6f, "fwnode_property_read_u32_array" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xb189571b, "fwnode_get_named_child_node" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x110984ed, "acpi_fetch_acpi_dev" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x150cdeb6, "fwnode_property_read_u8_array" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C66D32FD381188908EDE134");
