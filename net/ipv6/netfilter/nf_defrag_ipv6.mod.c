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

SYMBOL_CRC(nf_defrag_ipv6_enable, 0x8913acf2, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_disable, 0xf00ac33e, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0x30f90f35, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x263c3152, "bcmp" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x950e746e, "proc_dointvec_jiffies" },
	{ 0x66b99716, "register_net_sysctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4e67529a, "inet_frag_queue_insert" },
	{ 0x55b80be, "inet_frags_init" },
	{ 0x28788c6, "inet_frag_pull_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fffeb86, "inet_frag_destroy" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0xc8adc4fb, "ipv6_skip_exthdr" },
	{ 0x124721a5, "inet_frag_reasm_finish" },
	{ 0x2296abdd, "nf_register_net_hooks" },
	{ 0x807b1187, "fqdir_init" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x1e69cdec, "init_net" },
	{ 0xe000b703, "dev_get_by_index_rcu" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x90fe15f1, "inet_frags_fini" },
	{ 0x566244a6, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x9e269fa9, "nf_unregister_net_hooks" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x709c929, "lock_acquire" },
	{ 0xd3ffde6f, "__icmpv6_send" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x9af0a615, "lock_release" },
	{ 0x34f4f93e, "inet_frag_reasm_prepare" },
	{ 0xb64096ac, "inet_frag_find" },
	{ 0xf074a77e, "fqdir_exit" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0x472c9e17, "dst_release" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xb365a7d9, "unregister_net_sysctl_table" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xa4761bbb, "pskb_trim_rcsum_slow" },
	{ 0x58a108f4, "inet_frag_kill" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2789A9089E5AA9488398EA4");
