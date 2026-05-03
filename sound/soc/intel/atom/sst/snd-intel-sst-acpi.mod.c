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
	{ 0xe914e41e, "strcpy" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0xdf623c75, "platform_get_irq" },
	{ 0xe2e61f2a, "devm_ioremap" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7e9d4e97, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x3e10d45b, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xe3f67584, "platform_get_resource" },
	{ 0x3dd9f961, "snd_soc_acpi_find_machine" },
	{ 0x8a79dbcd, "sst_configure_runtime_pm" },
	{ 0xfb7fff3c, "intel_sst_pm" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x3f0eff53, "acpi_match_device" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0x559cdd4a, "snd_intel_acpi_dsp_driver_probe" },
	{ 0x472ba933, "sst_alloc_drv_context" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x61a46acb, "sst_context_cleanup" },
	{ 0x4a475257, "sst_context_init" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-soc-acpi,snd-intel-sst-core,snd-intel-dspcfg");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "CA48A998FFC0BA8E7984E40");
