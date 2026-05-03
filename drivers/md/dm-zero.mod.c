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
	{ 0x1c008f5f, "dm_register_target" },
	{ 0x308e69ef, "dm_zero_entry_gid" },
	{ 0x92997ed8, "_printk" },
	{ 0xebe78c72, "dm_zero_exit_gid" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x9d14205c, "cr4_read_shadow" },
	{ 0x68cfd143, "dm_unregister_target" },
	{ 0xcf4ab763, "zero_fill_bio" },
	{ 0x9c0e3c47, "bio_endio" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E80AAA54CE813BC5A4545BA");
