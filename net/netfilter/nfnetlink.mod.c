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

SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0xd4709fd6, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0x738266b8, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0x337c741f, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0x16d8d551, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0x107ed091, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0xa62c278d, "_gpl");
SYMBOL_CRC(nfnetlink_broadcast, 0x67b925d0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xe73eb62b, "netlink_has_listeners" },
	{ 0x2f4f7b6a, "nlmsg_notify" },
	{ 0x7ff7d817, "netlink_set_err" },
	{ 0xcf20d572, "netlink_unicast" },
	{ 0x9d738fb9, "netlink_broadcast" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x342eb2fe, "__netlink_kernel_create" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x58888741, "netlink_kernel_release" },
	{ 0x17545144, "netlink_net_capable" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x28016b2b, "skb_pull" },
	{ 0xfef1b37a, "netlink_ack" },
	{ 0xaf927c1e, "netlink_rcv_skb" },
	{ 0x7b0976e2, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xa9b1739f, "current_task" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x339178ad, "module_put" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D3BAD538B56B20A29AB056");
