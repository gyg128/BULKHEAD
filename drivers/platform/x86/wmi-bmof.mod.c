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
	{ 0x74d29a93, "__wmi_driver_register" },
	{ 0xf2016ec9, "wmi_driver_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x90766032, "wmidev_block_query" },
	{ 0x89ccaf99, "sysfs_create_bin_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x70a21ce, "sysfs_remove_bin_file" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("wmi:05901221-D566-11D1-B2F0-00A0C9062910");

MODULE_INFO(srcversion, "672FB75672F9534812DD402");
