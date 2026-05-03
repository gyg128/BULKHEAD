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
	{ 0xad8f030b, "nft_register_expr" },
	{ 0x41ec5791, "nft_unregister_expr" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xc00fb906, "nf_ct_netns_get" },
	{ 0x94fa1562, "nf_ct_netns_put" },
	{ 0xf4807663, "nla_put" },
	{ 0xd6b37098, "nft_dump_register" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x6c0cc22e, "nft_chain_validate_dependency" },
	{ 0x115aea8c, "nft_chain_validate_hooks" },
	{ 0x8dac19c7, "nf_nat_setup_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "C2A726B66FF0E78CFF0EDAC");
