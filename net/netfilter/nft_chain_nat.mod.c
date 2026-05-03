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
	{ 0x6368b596, "nft_register_chain_type" },
	{ 0xc94f805, "nft_unregister_chain_type" },
	{ 0x8891daf5, "ipv6_find_hdr" },
	{ 0x968ce8ba, "nft_do_chain" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x938fc54e, "nf_nat_inet_register_fn" },
	{ 0x41268120, "nf_nat_inet_unregister_fn" },
	{ 0x175bf67e, "nf_nat_ipv6_register_fn" },
	{ 0x21b05211, "nf_nat_ipv6_unregister_fn" },
	{ 0xb6477b33, "nf_nat_ipv4_register_fn" },
	{ 0xf76e3dd8, "nf_nat_ipv4_unregister_fn" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_nat");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
