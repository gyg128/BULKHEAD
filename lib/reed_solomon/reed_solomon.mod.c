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

SYMBOL_CRC(free_rs, 0xfd581da1, "_gpl");
SYMBOL_CRC(init_rs_gfp, 0xeb2f825c, "_gpl");
SYMBOL_CRC(init_rs_non_canonical, 0x561835eb, "_gpl");
SYMBOL_CRC(encode_rs8, 0x63adbf92, "_gpl");
SYMBOL_CRC(decode_rs8, 0x1d29b9e1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xb0e602eb, "memmove" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10919B26B9BB58A5A743D6F");
