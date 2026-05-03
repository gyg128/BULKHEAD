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

SYMBOL_CRC(ipt_alloc_initial_table, 0xed3f7c1d, "_gpl");
SYMBOL_CRC(ipt_register_table, 0x04f11cb2, "");
SYMBOL_CRC(ipt_unregister_table_pre_exit, 0xd35ce8fc, "");
SYMBOL_CRC(ipt_unregister_table_exit, 0x99ff7ab4, "");
SYMBOL_CRC(ipt_do_table, 0xc149f0f0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x744621fc, "xt_recseq" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xad7842df, "xt_register_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2296abdd, "nf_register_net_hooks" },
	{ 0x4954c6ae, "xt_unregister_table" },
	{ 0x339178ad, "module_put" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x263c3152, "bcmp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xa4cacf1, "xt_request_find_match" },
	{ 0x26aa7d6a, "xt_check_match" },
	{ 0x4716fc62, "xt_request_find_target" },
	{ 0x76b33b4b, "xt_check_target" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0xb368a35a, "xt_find_table" },
	{ 0x9e269fa9, "nf_unregister_net_hooks" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0xc5d2c4eb, "xt_register_targets" },
	{ 0xc840ce4f, "xt_register_matches" },
	{ 0xd5fa0e53, "nf_register_sockopt" },
	{ 0x2cbcc2a5, "xt_unregister_matches" },
	{ 0x85e93381, "xt_unregister_targets" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0xe7207106, "nf_unregister_sockopt" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xfab0cbb2, "xt_proto_init" },
	{ 0x1596d86b, "xt_proto_fini" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x8b4a74c2, "ns_capable" },
	{ 0xa9b1739f, "current_task" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0x6879b57, "xt_find_table_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x77f9b1e6, "xt_table_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x33d200fd, "xt_compat_match_offset" },
	{ 0x15985039, "xt_compat_target_offset" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xfb578fc5, "memset" },
	{ 0xfae525b0, "xt_compat_match_from_user" },
	{ 0xa58a06a8, "xt_compat_target_from_user" },
	{ 0x53fbc3a0, "xt_request_find_table_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf15d06cc, "xt_match_to_user" },
	{ 0xc06ceaf3, "xt_target_to_user" },
	{ 0xbfc3aac5, "xt_compat_match_to_user" },
	{ 0xe928944e, "xt_compat_target_to_user" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0xf3d6c403, "xt_replace_table" },
	{ 0x800473f, "__cond_resched" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A01497A93C75F551917781D");
