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
	{ 0x883cf3c0, "ip6t_alloc_initial_table" },
	{ 0x9352adc1, "ip6t_register_table" },
	{ 0xf0f366ad, "ip6t_do_table" },
	{ 0xc4772452, "ip6_route_me_harder" },
	{ 0xe90913d8, "ip6t_unregister_table_pre_exit" },
	{ 0x9d52808d, "ip6t_unregister_table_exit" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,ipv6");


MODULE_INFO(srcversion, "4A79DCF6A622901A961CA83");
