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

SYMBOL_CRC(register_mtd_chip_driver, 0xc31685f3, "");
SYMBOL_CRC(unregister_mtd_chip_driver, 0x40380df3, "");
SYMBOL_CRC(do_map_probe, 0x7343f63f, "");
SYMBOL_CRC(map_destroy, 0xa75336d6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x339178ad, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7680519B1FE457786231F1E");
