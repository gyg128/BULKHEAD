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

SYMBOL_CRC(xfrm_msg_min, 0x4a0c7516, "_gpl");
SYMBOL_CRC(xfrma_policy, 0xa57433de, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x870f00ee, "xfrm_register_km" },
	{ 0x4acf80b7, "xfrm_unregister_km" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x342eb2fe, "__netlink_kernel_create" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x58888741, "netlink_kernel_release" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xaf927c1e, "netlink_rcv_skb" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x17545144, "netlink_net_capable" },
	{ 0xa9b1739f, "current_task" },
	{ 0x5bc89051, "__netlink_dump_start" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x38933801, "xfrm_state_alloc" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xab7d64d9, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x69f2084b, "__xfrm_init_state" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xcfc6f6da, "xfrm_init_replay" },
	{ 0x67b628cf, "xfrm_state_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xeed2bb92, "xfrm_state_update" },
	{ 0x45f9a329, "xfrm_audit_state_add" },
	{ 0x534d6e12, "km_state_notify" },
	{ 0x27f51c2d, "xfrm_state_lookup" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x53503eb6, "xfrm_state_delete" },
	{ 0x81cec504, "xfrm_audit_state_delete" },
	{ 0x89a8ef, "xfrm_state_lookup_byaddr" },
	{ 0x592a65dc, "__alloc_skb" },
	{ 0xcf20d572, "netlink_unicast" },
	{ 0x9120fba0, "xfrm_state_walk" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xc1a7d6ee, "xfrm_state_walk_done" },
	{ 0x762a1c3a, "xfrm_policy_insert" },
	{ 0xd31706d8, "xfrm_audit_policy_add" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0xc442660, "km_policy_notify" },
	{ 0x6e6a4ff3, "xfrm_policy_destroy" },
	{ 0x29fecde3, "xfrm_policy_byid" },
	{ 0x9ab31bf5, "xfrm_audit_policy_delete" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x1998a7f7, "xfrm_policy_bysel_ctx" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xfdbb9105, "xfrm_policy_walk" },
	{ 0xfd9e6915, "xfrm_policy_walk_done" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x57c797e6, "xfrm_find_acq_byseq" },
	{ 0x9cb489da, "xfrm_find_acq" },
	{ 0xa81b582c, "xfrm_alloc_spi" },
	{ 0xcb3007d6, "xfrm_state_free" },
	{ 0x58c57c63, "km_query" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x22908730, "km_state_expired" },
	{ 0x932ef2e, "__xfrm_state_delete" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0xaa1fdaa0, "xfrm_policy_delete" },
	{ 0xdb8c8488, "km_policy_expired" },
	{ 0x23391695, "xfrm_state_flush" },
	{ 0xa44e159f, "xfrm_policy_flush" },
	{ 0x11ad83a, "__nlmsg_put" },
	{ 0x4d02a314, "xfrm_sad_getinfo" },
	{ 0xf4807663, "nla_put" },
	{ 0x3d215d67, "skb_trim" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xad43d934, "xfrm_policy_hash_rebuild" },
	{ 0xd78e5d33, "xfrm_spd_getinfo" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xacc13958, "__fib6_flush_trees" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0x9d738fb9, "netlink_broadcast" },
	{ 0xfb578fc5, "memset" },
	{ 0x6f12b95, "nla_put_64bit" },
	{ 0xc9ce5076, "nla_reserve" },
	{ 0x127d83ea, "security_locked_down" },
	{ 0x9166fada, "strncpy" },
	{ 0xdb330f94, "xfrm_policy_alloc" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0xe73eb62b, "netlink_has_listeners" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "63A2D052CB9B688932F3AD0");
