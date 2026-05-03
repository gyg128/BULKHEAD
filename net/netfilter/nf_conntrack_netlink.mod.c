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
	{ 0xd4709fd6, "nfnetlink_subsys_register" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x738266b8, "nfnetlink_subsys_unregister" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbec1af9f, "nf_conntrack_find_get" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4e322747, "nf_connlabels_replace" },
	{ 0xd7952b8f, "nf_conntrack_eventmask_report" },
	{ 0xe954d77c, "__nf_conntrack_helper_find" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xe4d04b1e, "nf_ct_remove_expectations" },
	{ 0x8cc49c08, "__nf_ct_change_timeout" },
	{ 0xbeb9ace0, "nf_ct_change_status_common" },
	{ 0x804feb01, "nf_ct_l4proto_find" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x5bc89051, "__netlink_dump_start" },
	{ 0x592a65dc, "__alloc_skb" },
	{ 0xa62c278d, "nfnetlink_unicast" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x7e7f1208, "nf_ct_get_id" },
	{ 0x4c9dcfbd, "nf_ct_delete" },
	{ 0xb6684d8, "nf_ct_iterate_cleanup_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x11ad83a, "__nlmsg_put" },
	{ 0xaa2e730, "nf_conntrack_count" },
	{ 0xf4807663, "nla_put" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x3d215d67, "skb_trim" },
	{ 0xf0b97fda, "nf_conntrack_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xea265628, "nf_ct_helper_ext_add" },
	{ 0x4479cb1, "nf_ct_ext_add" },
	{ 0x9bc67617, "nf_ct_ecache_ext_add" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3b855e06, "nf_conntrack_hash_check_insert" },
	{ 0x7d4ab644, "nf_conntrack_free" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0xf8bcdd94, "nf_nat_hook" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd4389ac0, "nf_conntrack_locks" },
	{ 0x33054e6d, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x754d539c, "strlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x6f12b95, "nla_put_64bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb53bc793, "nf_conn_pernet_ecache" },
	{ 0xa0eaec3e, "nf_conntrack_expect_lock" },
	{ 0x33e0a703, "__nf_ct_expect_find" },
	{ 0x715ac5e, "del_timer" },
	{ 0x99f21d77, "add_timer" },
	{ 0xd02c0d89, "nf_ct_expect_alloc" },
	{ 0xd7409c1a, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x1e01ed91, "nf_ct_expect_put" },
	{ 0x8044367b, "nf_ct_expect_related_report" },
	{ 0x3372b21a, "nf_ct_expect_find_get" },
	{ 0x425ed7a5, "nf_ct_expect_iterate_net" },
	{ 0x72d40490, "nf_ct_unlink_expect_report" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4e1d58b7, "__do_once_done" },
	{ 0x596c8b79, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4eecf1fd, "nf_conntrack_register_notifier" },
	{ 0x79b5f8b4, "nf_conntrack_unregister_notifier" },
	{ 0x337c741f, "nfnetlink_has_listeners" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0x107ed091, "nfnetlink_set_err" },
	{ 0x16d8d551, "nfnetlink_send" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "E28C580ABFC1E6E0B2A369F");
