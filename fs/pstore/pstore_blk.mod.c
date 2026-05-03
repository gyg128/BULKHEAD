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

SYMBOL_CRC(register_pstore_device, 0x3a95f951, "_gpl");
SYMBOL_CRC(unregister_pstore_device, 0x95643953, "_gpl");
SYMBOL_CRC(pstore_blk_get_config, 0x43cc3d4b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa641eb2b, "filp_open" },
	{ 0xfc442470, "param_ops_long" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xb8fcdeda, "I_BDEV" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xf7b274d2, "fput" },
	{ 0xdbd0be85, "register_pstore_zone" },
	{ 0x9166fada, "strncpy" },
	{ 0xefed4a3c, "kernel_read" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0x847b1d31, "param_ops_string" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc177e921, "unregister_pstore_zone" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x3afd38fc, "kernel_write" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "pstore_zone");


MODULE_INFO(srcversion, "6662ED1E3C78451085DB8C2");
