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

SYMBOL_CRC(nf_fwd_netdev_egress, 0xbf8b6871, "_gpl");
SYMBOL_CRC(nf_dup_netdev_egress, 0x801f00a2, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0xcea76afd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe000b703, "dev_get_by_index_rcu" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x94d93036, "__dev_queue_xmit" },
	{ 0xa7aed26d, "pskb_expand_head" },
	{ 0x5940cbab, "skb_push" },
	{ 0x7b0976e2, "skb_clone" },
	{ 0x50c83cf9, "dev_get_by_index" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F59154AE8C5199DA992F066");
