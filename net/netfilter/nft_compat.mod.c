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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xad8f030b, "nft_register_expr" },
	{ 0xd4709fd6, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x41ec5791, "nft_unregister_expr" },
	{ 0x738266b8, "nfnetlink_subsys_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xa4cacf1, "xt_request_find_match" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x339178ad, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xf4807663, "nla_put" },
	{ 0xc9ce5076, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x26aa7d6a, "xt_check_match" },
	{ 0x4716fc62, "xt_request_find_target" },
	{ 0x76b33b4b, "xt_check_target" },
	{ 0x9411ee01, "nft_request_module" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x592a65dc, "__alloc_skb" },
	{ 0x11ad83a, "__nlmsg_put" },
	{ 0x3d215d67, "skb_trim" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0xa62c278d, "nfnetlink_unicast" },
	{ 0x9af0a615, "lock_release" },
	{ 0x709c929, "lock_acquire" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink,x_tables");


MODULE_INFO(srcversion, "932845B6241131C55E31D99");
