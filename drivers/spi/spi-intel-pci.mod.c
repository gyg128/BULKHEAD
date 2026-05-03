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
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xc4775fd4, "devm_kmemdup" },
	{ 0x2e258ed5, "intel_spi_probe" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "spi-intel");

MODULE_ALIAS("pci:v00008086d000002A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BCAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A224sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "685CAD22955D0C79404A465");
