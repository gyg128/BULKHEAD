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
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x1d445100, "device_set_wakeup_capable" },
	{ 0xdd3c3459, "device_wakeup_enable" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x5fc49ca, "device_wakeup_disable" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x349cba85, "strchr" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000E:*");

MODULE_INFO(srcversion, "F10642FE3B38EDD0177FF1C");
