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

SYMBOL_CRC(snd_soc_acpi_find_machine, 0x3dd9f961, "_gpl");
SYMBOL_CRC(snd_soc_acpi_find_package_from_hid, 0x5c512782, "_gpl");
SYMBOL_CRC(snd_soc_acpi_codec_list, 0x9b1aadfd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0xdd64e639, "strscpy" },
	{ 0x110984ed, "acpi_fetch_acpi_dev" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "574436D7D85577C578D496A");
