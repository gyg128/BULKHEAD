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

SYMBOL_CRC(drm_buddy_init, 0x9f44c898, "");
SYMBOL_CRC(drm_buddy_fini, 0xfa150882, "");
SYMBOL_CRC(drm_get_buddy, 0x40d76a49, "");
SYMBOL_CRC(drm_buddy_free_block, 0xbd5b3bcc, "");
SYMBOL_CRC(drm_buddy_free_list, 0x22d53779, "");
SYMBOL_CRC(drm_buddy_block_trim, 0xabb5a026, "");
SYMBOL_CRC(drm_buddy_alloc_blocks, 0xff748b76, "");
SYMBOL_CRC(drm_buddy_block_print, 0xc30d71cc, "");
SYMBOL_CRC(drm_buddy_print, 0x2d9e9583, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x3d11cb96, "kmem_cache_alloc" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fefdd4, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x800473f, "__cond_resched" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x28779e52, "drm_printf" },
	{ 0xf2fc798f, "kmem_cache_create" },
	{ 0x6ce04a45, "kmem_cache_destroy" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "9E27D3A0492B2873FFFFBF3");
