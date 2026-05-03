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
	{ 0xef99dffd, "register_qdisc" },
	{ 0x50ef939f, "unregister_qdisc" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x87856abd, "tcf_classify" },
	{ 0xb9096c4b, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x52ab0ab, "qdisc_tree_reduce_backlog" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x20604d33, "tcf_block_get" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x94b84ae1, "rtnl_kfree_skbs" },
	{ 0xfb578fc5, "memset" },
	{ 0x344fb634, "tcf_block_put" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf4807663, "nla_put" },
	{ 0x58d86a6b, "gnet_stats_copy_app" },
	{ 0xbf3bee6c, "gnet_stats_copy_queue" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7F8E70CED296B00FFF4D54A");
