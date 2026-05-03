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

SYMBOL_CRC(register_pstore_zone, 0xdbd0be85, "_gpl");
SYMBOL_CRC(unregister_pstore_zone, 0xc177e921, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc8dcc62a, "krealloc" },
	{ 0x4b23bbf6, "pstore_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x4ef6978d, "flush_delayed_work" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xfb578fc5, "memset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xa5d7c388, "pstore_type_to_name" },
	{ 0x882de3c5, "pstore_unregister" },
	{ 0x989074ff, "kmsg_dump_reason_str" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4B5AAAA76AF44AB93ABAA86");
