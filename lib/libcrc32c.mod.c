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

SYMBOL_CRC(crc32c, 0xb15b4109, "");
SYMBOL_CRC(crc32c_impl, 0x89a0cd52, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9417f004, "crypto_shash_update" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xfef7115a, "crypto_alloc_shash" },
	{ 0x10d24ad4, "crypto_destroy_tfm" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F5ECE6FF560470A2A03FA9");
