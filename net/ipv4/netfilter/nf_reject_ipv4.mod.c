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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0x8639a575, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0x78d96710, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0x27731da1, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0x89a7244e, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0xd442aeb6, "_gpl");
SYMBOL_CRC(nf_send_reset, 0x76b79039, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0x48806d06, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x592a65dc, "__alloc_skb" },
	{ 0x7e239fe9, "skb_put" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xfd8d2931, "nf_ip_checksum" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0xa4761bbb, "pskb_trim_rcsum_slow" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x648c16f, "nf_ip_route" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0x36307b2d, "ip_route_me_harder" },
	{ 0x1e7f6e8c, "ipv4_mtu" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xfc09b521, "nf_ct_attach" },
	{ 0x94d93036, "__dev_queue_xmit" },
	{ 0x2cb21886, "ip_local_out" },
	{ 0x2bc8ad6e, "__icmp_send" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F5C43C164D56D502C9BFB0");
