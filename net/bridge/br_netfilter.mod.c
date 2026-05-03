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
	{ 0x66b99716, "register_net_sysctl" },
	{ 0x9c4738ed, "br_handle_frame_finish" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x31d4a9a2, "__skb_ext_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd418b075, "nf_br_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0xbe82b9d3, "ip_route_output_flow" },
	{ 0xc19d23b6, "skb_pull_rcsum" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa7aed26d, "pskb_expand_head" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2296abdd, "nf_register_net_hooks" },
	{ 0xd6d399e9, "nf_ipv6_ops" },
	{ 0xcdf7779c, "ip_route_input_noref" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xaf815caa, "br_forward_finish" },
	{ 0x1e69cdec, "init_net" },
	{ 0x28016b2b, "skb_pull" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x5940cbab, "skb_push" },
	{ 0x9e269fa9, "nf_unregister_net_hooks" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xed61d9ff, "br_dev_queue_push_xmit" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0x709c929, "lock_acquire" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0x9af0a615, "lock_release" },
	{ 0x480559b5, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x80927ed6, "neigh_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x472c9e17, "dst_release" },
	{ 0x122950ee, "proc_dointvec" },
	{ 0xb7ad366e, "ip_do_fragment" },
	{ 0xb365a7d9, "unregister_net_sysctl_table" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x34912213, "skb_ext_add" },
	{ 0xa4761bbb, "pskb_trim_rcsum_slow" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "029A579E9C4C845BCD2AE7F");
