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

SYMBOL_CRC(nf_ct_nat_ext_add, 0x4346c840, "_gpl");
SYMBOL_CRC(nf_nat_setup_info, 0x8dac19c7, "");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0xf8f6e8c7, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0xb9620c33, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0xc958b614, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0x41c837a2, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0xb6477b33, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0xf76e3dd8, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0xe88190f6, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0x175bf67e, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0x21b05211, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0x938fc54e, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0x41268120, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0xee795b6c, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0x46746e1d, "");
SYMBOL_CRC(nf_nat_follow_master, 0xa90c8234, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0xe8108b75, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0x7b06a552, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x6d1b5cc4, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0x09ec212c, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0xef9b3d51, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4479cb1, "nf_ct_ext_add" },
	{ 0x4e1d58b7, "__do_once_done" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x29355b74, "nf_ip6_checksum" },
	{ 0x3cba3a74, "nf_hook_entries_insert_raw" },
	{ 0xea1c2b5c, "xfrm_lookup" },
	{ 0x7ade11ca, "nf_ct_seqadj_set" },
	{ 0x7e239fe9, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x83da2d63, "nf_ct_helper_expectfn_unregister" },
	{ 0x511a5609, "__xfrm_decode_session" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x38229e0d, "nf_ct_helper_expectfn_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x31149784, "_raw_read_unlock_bh" },
	{ 0xcbb04e08, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa7aed26d, "pskb_expand_head" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x6a204a16, "nf_conntrack_tuple_taken" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xb6684d8, "nf_ct_iterate_cleanup_net" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0xc8adc4fb, "ipv6_skip_exthdr" },
	{ 0x2296abdd, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xd6d399e9, "nf_ipv6_ops" },
	{ 0x339178ad, "module_put" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x8044367b, "nf_ct_expect_related_report" },
	{ 0xa20a142c, "nf_conntrack_alter_reply" },
	{ 0x36307b2d, "ip_route_me_harder" },
	{ 0x5a0d1a0f, "nf_hook_entries_delete_raw" },
	{ 0x566c0145, "skb_ensure_writable" },
	{ 0x9e269fa9, "nf_unregister_net_hooks" },
	{ 0xae9c7ca8, "inet_select_addr" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x17073019, "skb_checksum" },
	{ 0x709c929, "lock_acquire" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9af0a615, "lock_release" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xfd8d2931, "nf_ip_checksum" },
	{ 0x85429ba4, "nf_ct_iterate_destroy" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xd517857a, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x91b08da5, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7056c3f9, "__skb_checksum" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x720a2922, "inet_proto_csum_replace4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x472c9e17, "dst_release" },
	{ 0x233b3a9, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xf8bcdd94, "nf_nat_hook" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "65316081B51EF2B948F701F");
