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

SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_find, 0x6c495e5d, "");
SYMBOL_CRC(llc_sap_open, 0xda9b713f, "");
SYMBOL_CRC(llc_sap_close, 0x960acbbe, "");
SYMBOL_CRC(llc_add_pack, 0x718b0689, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0x8c147aab, "");
SYMBOL_CRC(llc_mac_hdr_init, 0x854f4c34, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0x5523e481, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9b00cf6, "consume_skb" },
	{ 0x66781006, "dev_add_pack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0x1e69cdec, "init_net" },
	{ 0x28016b2b, "skb_pull" },
	{ 0x8ad0f558, "rcu_bh_lock_map" },
	{ 0xa8e1de7f, "dev_remove_pack" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x5940cbab, "skb_push" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x709c929, "lock_acquire" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x9af0a615, "lock_release" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x94d93036, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7b0976e2, "skb_clone" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa4761bbb, "pskb_trim_rcsum_slow" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76622FCE4A942E29D39E769");
