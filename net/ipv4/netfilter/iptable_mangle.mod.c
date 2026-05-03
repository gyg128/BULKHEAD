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
	{ 0x3e7e730, "xt_register_template" },
	{ 0xd6f3b11e, "xt_hook_ops_alloc" },
	{ 0xe5659bd4, "xt_unregister_template" },
	{ 0x98c5bce1, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0x70b7de23, "unregister_pernet_subsys" },
	{ 0xed3f7c1d, "ipt_alloc_initial_table" },
	{ 0x4f11cb2, "ipt_register_table" },
	{ 0xc149f0f0, "ipt_do_table" },
	{ 0x36307b2d, "ip_route_me_harder" },
	{ 0xd35ce8fc, "ipt_unregister_table_pre_exit" },
	{ 0x99ff7ab4, "ipt_unregister_table_exit" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_tables");


MODULE_INFO(srcversion, "16BE42F9677B058BBAECF20");
