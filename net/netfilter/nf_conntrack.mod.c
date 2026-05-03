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

SYMBOL_CRC(nf_conntrack_locks, 0xd4389ac0, "_gpl");
SYMBOL_CRC(nf_conntrack_expect_lock, 0xa0eaec3e, "_gpl");
SYMBOL_CRC(nf_conntrack_hash, 0x28eff409, "_gpl");
SYMBOL_CRC(nf_conntrack_lock, 0x33054e6d, "_gpl");
SYMBOL_CRC(nf_conntrack_htable_size, 0x8ffe7e89, "_gpl");
SYMBOL_CRC(nf_conntrack_max, 0xf38bcdf3, "_gpl");
SYMBOL_CRC(nf_ct_get_tuplepr, 0xf6421398, "_gpl");
SYMBOL_CRC(nf_ct_invert_tuple, 0xfe731af8, "_gpl");
SYMBOL_CRC(nf_ct_get_id, 0x7e7f1208, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_alloc, 0x2ec8adb0, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_free, 0xe5f8830a, "_gpl");
SYMBOL_CRC(nf_ct_destroy, 0x3b08a8f0, "");
SYMBOL_CRC(nf_ct_delete, 0x4c9dcfbd, "_gpl");
SYMBOL_CRC(nf_conntrack_find_get, 0xbec1af9f, "_gpl");
SYMBOL_CRC(nf_conntrack_hash_check_insert, 0x3b855e06, "_gpl");
SYMBOL_CRC(nf_ct_acct_add, 0x4d5d5032, "_gpl");
SYMBOL_CRC(__nf_conntrack_confirm, 0xba2196ed, "_gpl");
SYMBOL_CRC(nf_conntrack_tuple_taken, 0x6a204a16, "_gpl");
SYMBOL_CRC(nf_conntrack_alloc, 0xf0b97fda, "_gpl");
SYMBOL_CRC(nf_conntrack_free, 0x7d4ab644, "_gpl");
SYMBOL_CRC(nf_conntrack_in, 0xe214ee0a, "_gpl");
SYMBOL_CRC(nf_conntrack_alter_reply, 0xa20a142c, "_gpl");
SYMBOL_CRC(__nf_ct_refresh_acct, 0x8ba860ee, "_gpl");
SYMBOL_CRC(nf_ct_kill_acct, 0x0233b3a9, "_gpl");
SYMBOL_CRC(nf_ct_port_tuple_to_nlattr, 0x2c6dcbd7, "_gpl");
SYMBOL_CRC(nf_ct_port_nla_policy, 0x1d7675b8, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_to_tuple, 0xafbd6cf5, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_tuple_size, 0xd505c3e0, "_gpl");
SYMBOL_CRC(nf_ct_iterate_cleanup_net, 0x0b6684d8, "_gpl");
SYMBOL_CRC(nf_ct_iterate_destroy, 0x85429ba4, "_gpl");
SYMBOL_CRC(nf_ct_alloc_hashtable, 0x289c3714, "_gpl");
SYMBOL_CRC(__nf_ct_change_timeout, 0x8cc49c08, "_gpl");
SYMBOL_CRC(__nf_ct_change_status, 0x14b47e65, "_gpl");
SYMBOL_CRC(nf_ct_change_status_common, 0xbeb9ace0, "_gpl");
SYMBOL_CRC(nf_conntrack_count, 0x0aa2e730, "_gpl");
SYMBOL_CRC(nf_ct_expect_hsize, 0xc18ac88d, "_gpl");
SYMBOL_CRC(nf_ct_expect_hash, 0xec8beba6, "_gpl");
SYMBOL_CRC(nf_ct_unlink_expect_report, 0x72d40490, "_gpl");
SYMBOL_CRC(nf_ct_remove_expect, 0x19f26275, "_gpl");
SYMBOL_CRC(__nf_ct_expect_find, 0x33e0a703, "_gpl");
SYMBOL_CRC(nf_ct_expect_find_get, 0x3372b21a, "_gpl");
SYMBOL_CRC(nf_ct_remove_expectations, 0xe4d04b1e, "_gpl");
SYMBOL_CRC(nf_ct_unexpect_related, 0xab6d7333, "_gpl");
SYMBOL_CRC(nf_ct_expect_alloc, 0xd02c0d89, "_gpl");
SYMBOL_CRC(nf_ct_expect_init, 0x55189620, "_gpl");
SYMBOL_CRC(nf_ct_expect_put, 0x1e01ed91, "_gpl");
SYMBOL_CRC(nf_ct_expect_related_report, 0x8044367b, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_destroy, 0x2a64cb48, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_net, 0x425ed7a5, "_gpl");
SYMBOL_CRC(nf_ct_helper_hash, 0x693c3961, "_gpl");
SYMBOL_CRC(nf_ct_helper_hsize, 0xc40f284c, "_gpl");
SYMBOL_CRC(__nf_conntrack_helper_find, 0xe954d77c, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_try_module_get, 0xc2281e94, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_put, 0x46f1fab7, "_gpl");
SYMBOL_CRC(nf_nat_helper_try_module_get, 0x0bc00f80, "_gpl");
SYMBOL_CRC(nf_nat_helper_put, 0x71d94b43, "_gpl");
SYMBOL_CRC(nf_ct_helper_ext_add, 0xea265628, "_gpl");
SYMBOL_CRC(__nf_ct_try_assign_helper, 0xde939a5e, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_register, 0x38229e0d, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_unregister, 0x83da2d63, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_name, 0xd7409c1a, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_symbol, 0x596c8b79, "_gpl");
SYMBOL_CRC(nf_ct_helper_log, 0xb33b40db, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_register, 0xf109ff40, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_unregister, 0xf6fa170e, "_gpl");
SYMBOL_CRC(nf_ct_helper_init, 0x50930377, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_register, 0x9c28d458, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_unregister, 0x19cd2799, "_gpl");
SYMBOL_CRC(nf_nat_helper_register, 0xc3b78919, "_gpl");
SYMBOL_CRC(nf_nat_helper_unregister, 0xb7398e7a, "_gpl");
SYMBOL_CRC(nf_l4proto_log_invalid, 0x21fe2013, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_log_invalid, 0x12cf0f99, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_find, 0x804feb01, "_gpl");
SYMBOL_CRC(nf_confirm, 0xe98acd5a, "_gpl");
SYMBOL_CRC(nf_ct_netns_get, 0xc00fb906, "_gpl");
SYMBOL_CRC(nf_ct_netns_put, 0x94fa1562, "_gpl");
SYMBOL_CRC(nf_ct_bridge_register, 0x9393bdae, "_gpl");
SYMBOL_CRC(nf_ct_bridge_unregister, 0xa1ea4b5f, "_gpl");
SYMBOL_CRC(nf_ct_ext_add, 0x04479cb1, "");
SYMBOL_CRC(__nf_ct_ext_find, 0x414d8c6e, "");
SYMBOL_CRC(nf_ct_seqadj_init, 0xe058820a, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_set, 0x7ade11ca, "_gpl");
SYMBOL_CRC(nf_ct_tcp_seqadj_set, 0xcbbadd54, "_gpl");
SYMBOL_CRC(nf_ct_seq_adjust, 0x07492fe8, "_gpl");
SYMBOL_CRC(nf_ct_seq_offset, 0xbbf59ea7, "_gpl");
SYMBOL_CRC(nf_ct_timeout_hook, 0x7e5a1195, "_gpl");
SYMBOL_CRC(nf_ct_untimeout, 0xf97d9d45, "_gpl");
SYMBOL_CRC(nf_ct_set_timeout, 0x9479672e, "_gpl");
SYMBOL_CRC(nf_ct_destroy_timeout, 0xe90024b8, "_gpl");
SYMBOL_CRC(nf_conn_pernet_ecache, 0xb53bc793, "_gpl");
SYMBOL_CRC(nf_conntrack_eventmask_report, 0xd7952b8f, "_gpl");
SYMBOL_CRC(nf_ct_deliver_cached_events, 0xaf48023b, "_gpl");
SYMBOL_CRC(nf_conntrack_register_notifier, 0x4eecf1fd, "_gpl");
SYMBOL_CRC(nf_conntrack_unregister_notifier, 0x79b5f8b4, "_gpl");
SYMBOL_CRC(nf_ct_ecache_ext_add, 0x9bc67617, "_gpl");
SYMBOL_CRC(nf_connlabels_replace, 0x4e322747, "_gpl");
SYMBOL_CRC(nf_connlabels_get, 0xf16a24bb, "_gpl");
SYMBOL_CRC(nf_connlabels_put, 0x8053dd68, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e1d58b7, "__do_once_done" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x684842fd, "nf_defrag_ipv4_disable" },
	{ 0x29355b74, "nf_ip6_checksum" },
	{ 0xcf2c15f8, "proc_dou8vec_minmax" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0x950e746e, "proc_dointvec_jiffies" },
	{ 0x66b99716, "register_net_sysctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5fa0e53, "nf_register_sockopt" },
	{ 0x6f12b95, "nla_put_64bit" },
	{ 0xbac2cb9, "param_set_uint" },
	{ 0x80c3ca2e, "nf_defrag_ipv4_enable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf2fc798f, "kmem_cache_create" },
	{ 0xd084278e, "nf_ct_hook" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xe7207106, "nf_unregister_sockopt" },
	{ 0xf7a67d72, "param_get_uint" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0xf00ac33e, "nf_defrag_ipv6_disable" },
	{ 0xc8adc4fb, "ipv6_skip_exthdr" },
	{ 0x2296abdd, "nf_register_net_hooks" },
	{ 0x3d11cb96, "kmem_cache_alloc" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0xb77bf0e1, "nf_checksum" },
	{ 0x468d655b, "nf_hooks_lwtunnel_sysctl_handler" },
	{ 0x1e69cdec, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x99f21d77, "add_timer" },
	{ 0x7fefdd4, "kmem_cache_free" },
	{ 0xf4807663, "nla_put" },
	{ 0xe00ff357, "nf_checksum_partial" },
	{ 0x566c0145, "skb_ensure_writable" },
	{ 0x7f6d7bad, "mod_delayed_work_on" },
	{ 0xedf1d4b6, "_raw_spin_lock_nested" },
	{ 0x9e269fa9, "nf_unregister_net_hooks" },
	{ 0xddbf82e7, "lock_sock_nested" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xa9b1739f, "current_task" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xfb578fc5, "memset" },
	{ 0x709c929, "lock_acquire" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9af0a615, "lock_release" },
	{ 0x777643c1, "nf_log_packet" },
	{ 0xfd8d2931, "nf_ip_checksum" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf03e570f, "down_read" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7056c3f9, "__skb_checksum" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x720a2922, "inet_proto_csum_replace4" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x8913acf2, "nf_defrag_ipv6_enable" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x122950ee, "proc_dointvec" },
	{ 0xf8bcdd94, "nf_nat_hook" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xb365a7d9, "unregister_net_sysctl_table" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x715ac5e, "del_timer" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x5030c724, "nf_queue_nf_hook_drop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x12b824a2, "up_read" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0xb7173b10, "net_rwsem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6ce04a45, "kmem_cache_destroy" },
	{ 0xc9c8d5c9, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_defrag_ipv6,libcrc32c");


MODULE_INFO(srcversion, "5329C4E996C0EBF3373853D");
