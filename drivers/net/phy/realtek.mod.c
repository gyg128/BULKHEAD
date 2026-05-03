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
	{ 0xe8ab3036, "phy_drivers_register" },
	{ 0xb2e80e24, "phy_drivers_unregister" },
	{ 0xae48e45b, "__mdiobus_read" },
	{ 0x195cf8e0, "__mdiobus_write" },
	{ 0x73a7fbd9, "phy_write_paged" },
	{ 0x5671910f, "mdiobus_read" },
	{ 0x7657ca6a, "phy_trigger_machine" },
	{ 0x7d845be1, "phy_error" },
	{ 0x3b157e31, "__genphy_config_aneg" },
	{ 0x7aca4d89, "mdiobus_write" },
	{ 0x6ac20129, "genphy_suspend" },
	{ 0x845cb73f, "genphy_resume" },
	{ 0x5c03f46d, "phy_modify" },
	{ 0x825a2e, "phy_select_page" },
	{ 0xe645a528, "__phy_modify" },
	{ 0x1ee5a0e8, "phy_restore_page" },
	{ 0xb99c8675, "phy_modify_paged_changed" },
	{ 0xad8a97cf, "phy_modify_paged" },
	{ 0x74a9698, "genphy_soft_reset" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x87847ce3, "phy_read_paged" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4f4dc47, "genphy_read_status" },
	{ 0xa47bd5c8, "genphy_read_abilities" },
	{ 0xeb8fc127, "phy_modify_changed" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x9159ea09, "genphy_update_link" },
	{ 0x9259c307, "genphy_read_mmd_unsupported" },
	{ 0xa3009d6b, "genphy_write_mmd_unsupported" },
	{ 0x2b27942e, "genphy_handle_interrupt_no_ack" },
	{ 0x9f9c7781, "phy_basic_t1_features" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "C3F61739B11C8319F09EEFD");
