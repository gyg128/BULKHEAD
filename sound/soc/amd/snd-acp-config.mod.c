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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(snd_amd_acp_find_config, 0xeb7f4e89, "");
SYMBOL_CRC(snd_soc_acpi_amd_sof_machines, 0x6d0c89bb, "");
SYMBOL_CRC(snd_soc_acpi_amd_rmb_sof_machines, 0xac1705da, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9b1aadfd, "snd_soc_acpi_codec_list" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-acpi");


MODULE_INFO(srcversion, "EF9A20B3748222E02DB5A45");
