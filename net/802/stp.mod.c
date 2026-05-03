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

SYMBOL_CRC(stp_proto_register, 0x503d433a, "_gpl");
SYMBOL_CRC(stp_proto_unregister, 0xdcf47046, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xda9b713f, "llc_sap_open" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x960acbbe, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "6AEBB72A8A6FF2BF9226E29");
