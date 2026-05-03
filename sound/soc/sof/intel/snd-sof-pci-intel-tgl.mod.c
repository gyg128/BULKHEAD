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
	{ 0x13430765, "snd_soc_acpi_intel_adl_machines" },
	{ 0x659eb785, "snd_soc_acpi_intel_rpl_machines" },
	{ 0xe94e0e18, "tgl_chip_info" },
	{ 0x333bbde2, "snd_soc_acpi_intel_tgl_sdw_machines" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xa63ba66b, "adls_chip_info" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcddbb938, "snd_soc_acpi_intel_ehl_machines" },
	{ 0x5a5565e1, "snd_soc_acpi_intel_adl_sdw_machines" },
	{ 0xbf22bfeb, "hda_pci_intel_probe" },
	{ 0xd974c666, "snd_soc_acpi_intel_tgl_machines" },
	{ 0xe7c8c1bc, "sof_pci_remove" },
	{ 0xd035eb86, "tglh_chip_info" },
	{ 0xc484b592, "snd_soc_acpi_intel_rpl_sdw_machines" },
	{ 0x35830637, "ehl_chip_info" },
	{ 0xa35d24ce, "hda_ops_free" },
	{ 0x734e97af, "sof_pci_shutdown" },
	{ 0xaf320706, "sof_tgl_ops" },
	{ 0xa047958e, "sof_pci_pm" },
	{ 0x779a286e, "sof_tgl_ops_init" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-sof-intel-hda-common,snd-sof-pci");

MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "087EA28B37CC922E3DBCE50");
