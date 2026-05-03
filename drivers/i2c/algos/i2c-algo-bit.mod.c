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

SYMBOL_CRC(i2c_bit_algo, 0xf380f4b1, "");
SYMBOL_CRC(i2c_bit_add_bus, 0xcdf6200b, "");
SYMBOL_CRC(i2c_bit_add_numbered_bus, 0x00d1aadf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x760a0f4f, "yield" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xdae90bd2, "i2c_add_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0xce6cf4bd, "i2c_add_numbered_adapter" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6832E8A2ABAAE53858F0E30");
