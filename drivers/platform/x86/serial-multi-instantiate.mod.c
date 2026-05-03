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
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0x3f037aae, "device_get_match_data" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x6d8cbc22, "i2c_unregister_device" },
	{ 0x5726a75a, "spi_unregister_device" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0x5499dd65, "i2c_acpi_client_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x89b2ac8f, "acpi_dev_gpio_irq_wake_get_by" },
	{ 0xdf623c75, "platform_get_irq" },
	{ 0xb2d8c5ec, "dev_err_probe" },
	{ 0x1e42e51c, "dev_fwnode" },
	{ 0x7f26f988, "i2c_acpi_new_device_by_fwnode" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x6f24d5af, "acpi_spi_count_resources" },
	{ 0x18962c5f, "acpi_spi_device_alloc" },
	{ 0xf7e559d7, "spi_add_device" },
	{ 0x211fcf87, "put_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BSG1160:*");
MODULE_ALIAS("acpi*:BSG2150:*");
MODULE_ALIAS("acpi*:CSC3551:*");
MODULE_ALIAS("acpi*:INT3515:*");
MODULE_ALIAS("acpi*:CLSA0100:*");
MODULE_ALIAS("acpi*:CLSA0101:*");

MODULE_INFO(srcversion, "BF7F269432B6FFA428595F3");
