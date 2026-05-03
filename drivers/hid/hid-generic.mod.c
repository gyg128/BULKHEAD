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
	{ 0x9b1fdb8a, "__hid_register_driver" },
	{ 0xedff6918, "hid_unregister_driver" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x53863d76, "hid_bus_type" },
	{ 0xff6a0b41, "bus_for_each_drv" },
	{ 0xc61708a0, "hid_open_report" },
	{ 0xb2ea5902, "hid_hw_start" },
	{ 0x5f7d6aa0, "hid_match_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g*v*p*");

MODULE_INFO(srcversion, "AA4DBCEB2C92FCF8B805A86");
