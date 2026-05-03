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

SYMBOL_CRC(register_snap_client, 0xa2b19fcf, "");
SYMBOL_CRC(unregister_snap_client, 0x696e7c45, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xda9b713f, "llc_sap_open" },
	{ 0x92997ed8, "_printk" },
	{ 0x960acbbe, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5940cbab, "skb_push" },
	{ 0x5523e481, "llc_build_and_send_ui_pkt" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xc19d23b6, "skb_pull_rcsum" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "2C96DF8FCE99F86E0EEE474");
