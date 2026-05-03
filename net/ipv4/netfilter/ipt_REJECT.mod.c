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
	{ 0x27e52010, "xt_register_target" },
	{ 0xbbce158d, "xt_unregister_target" },
	{ 0x48806d06, "nf_send_unreach" },
	{ 0x76b79039, "nf_send_reset" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_reject_ipv4");


MODULE_INFO(srcversion, "700D197092E6912C2DC8716");
