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

SYMBOL_CRC(xt_register_target, 0x27e52010, "");
SYMBOL_CRC(xt_unregister_target, 0xbbce158d, "");
SYMBOL_CRC(xt_register_targets, 0xc5d2c4eb, "");
SYMBOL_CRC(xt_unregister_targets, 0x85e93381, "");
SYMBOL_CRC(xt_register_match, 0x4b508e8c, "");
SYMBOL_CRC(xt_unregister_match, 0x7a72f33a, "");
SYMBOL_CRC(xt_register_matches, 0xc840ce4f, "");
SYMBOL_CRC(xt_unregister_matches, 0x2cbcc2a5, "");
SYMBOL_CRC(xt_find_match, 0xbab27a34, "");
SYMBOL_CRC(xt_request_find_match, 0x0a4cacf1, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x4716fc62, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0xf15d06cc, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0xc06ceaf3, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_match, 0x26aa7d6a, "_gpl");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_compat_add_offset, 0x823edea5, "_gpl");
SYMBOL_CRC(xt_compat_flush_offsets, 0x04e27719, "_gpl");
SYMBOL_CRC(xt_compat_calc_jump, 0xc7fae024, "_gpl");
SYMBOL_CRC(xt_compat_init_offsets, 0x50873741, "");
SYMBOL_CRC(xt_compat_match_offset, 0x33d200fd, "_gpl");
SYMBOL_CRC(xt_compat_match_from_user, 0xfae525b0, "_gpl");
SYMBOL_CRC(xt_compat_match_to_user, 0xbfc3aac5, "_gpl");
SYMBOL_CRC(xt_compat_check_entry_offsets, 0xa25fc115, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_check_target, 0x76b33b4b, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_compat_target_offset, 0x15985039, "_gpl");
SYMBOL_CRC(xt_compat_target_from_user, 0xa58a06a8, "_gpl");
SYMBOL_CRC(xt_compat_target_to_user, 0xe928944e, "_gpl");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_find_table, 0xb368a35a, "");
SYMBOL_CRC(xt_find_table_lock, 0x06879b57, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0x53fbc3a0, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0x77f9b1e6, "_gpl");
SYMBOL_CRC(xt_compat_lock, 0xa7c94f1d, "_gpl");
SYMBOL_CRC(xt_compat_unlock, 0xd1e246a2, "_gpl");
SYMBOL_CRC(xt_recseq, 0x744621fc, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0xd3fcc511, "_gpl");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_replace_table, 0xf3d6c403, "_gpl");
SYMBOL_CRC(xt_register_table, 0xad7842df, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0x4954c6ae, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0xd6f3b11e, "_gpl");
SYMBOL_CRC(xt_register_template, 0x03e7e730, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0xe5659bd4, "_gpl");
SYMBOL_CRC(xt_proto_init, 0xfab0cbb2, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0x1596d86b, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xa916b694, "strnlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbecab81f, "clear_user_erms" },
	{ 0x185d46d5, "clear_user_rep_good" },
	{ 0xf0e52e56, "clear_user_original" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x754d539c, "strlen" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x349cba85, "strchr" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x999e8297, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdd64e639, "strscpy" },
	{ 0x339178ad, "module_put" },
	{ 0x9166fada, "strncpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa9b1739f, "current_task" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x800473f, "__cond_resched" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x9a1dba47, "make_kuid" },
	{ 0xa97e3c35, "make_kgid" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x72f6b74f, "proc_create_net_data" },
	{ 0x46358f44, "proc_set_user" },
	{ 0xaa5181d7, "proc_create_seq_private" },
	{ 0x7df835f2, "remove_proc_entry" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xaaa7300, "seq_printf" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C1E903E7AAF558F7B4C469");
