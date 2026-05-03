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

SYMBOL_CRC(nft_do_chain, 0x968ce8ba, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0xfcd78728, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0x40fdcca5, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0xf8b14540, "_gpl");
SYMBOL_CRC(nft_request_module, 0x9411ee01, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0x6368b596, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x0c94f805, "_gpl");
SYMBOL_CRC(nft_register_expr, 0xad8f030b, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0x41ec5791, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0x0edf3a77, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0xb6844310, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0x289306c2, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0x87f1be52, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0xbf4b7afd, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0x9db44b63, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0xfa20f4cd, "_gpl");
SYMBOL_CRC(nft_set_catchall_gc, 0xb20980a7, "_gpl");
SYMBOL_CRC(nft_register_obj, 0x2ba40518, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0xabb52d07, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0x0afe9789, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0x957f5d02, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0x4748025d, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0xc9d5c621, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0x9193fba2, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0x93cf44a1, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x3251d762, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x6c0cc22e, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0x115aea8c, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_dump_register, 0xd6b37098, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0xe2b8cc13, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0x850b5a25, "_gpl");
SYMBOL_CRC(nft_data_init, 0x71719abf, "_gpl");
SYMBOL_CRC(nft_data_release, 0xa26bb288, "_gpl");
SYMBOL_CRC(nft_data_dump, 0x2bd86c8f, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0x5f00cb6f, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0x41b71e65, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0x2f93774e, "_gpl");
SYMBOL_CRC(nft_set_do_lookup, 0x39009577, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0x5874c128, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0xcf1d7217, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xc015c870, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0x709ae729, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0xd003b277, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0x7d4031e6, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0xe9f30469, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0x661f80a9, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0xb8fa093c, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0x04e27ecb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e1d58b7, "__do_once_done" },
	{ 0x5bc89051, "__netlink_dump_start" },
	{ 0x499cab64, "flow_rule_alloc" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xd7bf5319, "__rht_bucket_nested" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x11ad83a, "__nlmsg_put" },
	{ 0x7e239fe9, "skb_put" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9ce5076, "nla_reserve" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x6f12b95, "nla_put_64bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x59afdeb3, "_raw_write_lock_bh" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0x107ed091, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0xe7ce7f40, "flow_block_cb_free" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x31149784, "_raw_read_unlock_bh" },
	{ 0xd4709fd6, "nfnetlink_subsys_register" },
	{ 0xcbb04e08, "_raw_read_lock_bh" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x18e06e07, "rhashtable_init" },
	{ 0xc62ae1ac, "_raw_write_unlock_bh" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3755d8fa, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xd43276b8, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x33595b49, "__dev_get_by_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x535f9a2b, "__ip_options_compile" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xc21bdb3e, "nf_route" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x592a65dc, "__alloc_skb" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xd6d399e9, "nf_ipv6_ops" },
	{ 0x618911fc, "numa_node" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0x4e2f4864, "nf_unregister_net_hook" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x30ba66c, "nf_register_net_hook" },
	{ 0xb9096c4b, "__skb_get_hash" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0x36307b2d, "ip_route_me_harder" },
	{ 0xac9d2c3, "skb_store_bits" },
	{ 0xe000b703, "dev_get_by_index_rcu" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0xa62c278d, "nfnetlink_unicast" },
	{ 0xf4807663, "nla_put" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x566c0145, "skb_ensure_writable" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xa221ebbf, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xfc6b05aa, "flow_indr_dev_setup_offload" },
	{ 0xa9889153, "rhashtable_walk_stop" },
	{ 0xa9b1739f, "current_task" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd8b3b09c, "rhashtable_free_and_destroy" },
	{ 0x17073019, "skb_checksum" },
	{ 0xfb578fc5, "memset" },
	{ 0x709c929, "lock_acquire" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0x7f3493ca, "rht_bucket_nested_insert" },
	{ 0x16d8d551, "nfnetlink_send" },
	{ 0x182909f, "__get_task_comm" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x9af0a615, "lock_release" },
	{ 0xece784c2, "rb_first" },
	{ 0x738266b8, "nfnetlink_subsys_unregister" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xcc2b290c, "from_kgid_munged" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3d215d67, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x91b08da5, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x36c7d339, "rhashtable_insert_slow" },
	{ 0x8891daf5, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1e7f6e8c, "ipv4_mtu" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0x7056c3f9, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x720a2922, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3a603171, "rhltable_init" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x472c9e17, "dst_release" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x8e56dfa1, "rhashtable_walk_next" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x756bd7d0, "from_kuid_munged" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x6b78251f, "rht_bucket_nested" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x88208813, "rhashtable_walk_exit" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x337c741f, "nfnetlink_has_listeners" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,libcrc32c");


MODULE_INFO(srcversion, "AB8C79FB5D09C5B14F61A4B");
