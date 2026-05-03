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

SYMBOL_CRC(snd_soc_acpi_intel_baytrail_machines, 0x7e9d4e97, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cherrytrail_machines, 0x3e10d45b, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_broadwell_machines, 0x34a14f4e, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_skl_machines, 0x547623bf, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_kbl_machines, 0x784cfb82, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_bxt_machines, 0x8a37e27f, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_glk_machines, 0x5c652038, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cnl_machines, 0x397e67d4, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cnl_sdw_machines, 0x061f0656, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cfl_machines, 0x40dfb2c1, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cfl_sdw_machines, 0x745f1210, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cml_machines, 0x1a04997c, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_cml_sdw_machines, 0x462d8968, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_icl_machines, 0x0218fad4, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_icl_sdw_machines, 0x717808f0, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_tgl_machines, 0xd974c666, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_tgl_sdw_machines, 0x333bbde2, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_ehl_machines, 0xcddbb938, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_jsl_machines, 0xbd17d594, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_adl_machines, 0x13430765, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_adl_sdw_machines, 0x5a5565e1, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_rpl_machines, 0x659eb785, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_rpl_sdw_machines, 0xc484b592, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_mtl_machines, 0x607c51aa, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_mtl_sdw_machines, 0x8d98c309, "_gpl");
SYMBOL_CRC(snd_soc_acpi_intel_hda_machines, 0x8449bbee, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9b1aadfd, "snd_soc_acpi_codec_list" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-acpi");


MODULE_INFO(srcversion, "BC7E7A2437CD141F9A31F72");
