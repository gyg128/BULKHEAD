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

SYMBOL_CRC(renesas_xhci_check_request_fw, 0x8e370e35, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0xf0d6caf5, "pci_dev_get" },
	{ 0xdeb1a952, "firmware_request_nowarn" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C0601C6339CF3E24E3E611");
