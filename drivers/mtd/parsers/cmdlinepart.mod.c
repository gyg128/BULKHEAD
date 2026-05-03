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
	{ 0xf70dd60f, "__register_mtd_parser" },
	{ 0xe79be69, "deregister_mtd_parser" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x27864d57, "memparse" },
	{ 0x5a921311, "strncmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "F4573950BD6BE5EA61D4DE9");
