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

SYMBOL_CRC(sof_renoir_ops, 0xb9f27f3f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6d0c89bb, "snd_soc_acpi_amd_sof_machines" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x6960d03a, "acp_dai_probe" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xb0602ad3, "sof_pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xe7c8c1bc, "sof_pci_remove" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x9a0a000e, "sof_acp_common_ops" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xeb7f4e89, "snd_amd_acp_find_config" },
	{ 0xa047958e, "sof_pci_pm" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-acp-config,snd-sof-amd-acp,snd-sof-pci");

MODULE_ALIAS("pci:v00001022d000015E2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC08FCA94F4B6B348C5AFC7");
