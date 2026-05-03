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

SYMBOL_CRC(intel_spi_probe, 0x2e258ed5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x941ca7d6, "__devm_spi_alloc_controller" },
	{ 0x4940c0db, "devm_ioremap_resource" },
	{ 0x3f116c4f, "devm_spi_register_controller" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdaf866fc, "spi_new_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F346FDF5B3C41B6EE23FA7E");
