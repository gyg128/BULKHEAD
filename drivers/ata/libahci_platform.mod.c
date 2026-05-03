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

SYMBOL_CRC(ahci_platform_ops, 0xa836fda4, "_gpl");
SYMBOL_CRC(ahci_platform_enable_phys, 0xa45f5a44, "_gpl");
SYMBOL_CRC(ahci_platform_disable_phys, 0x0afe0e61, "_gpl");
SYMBOL_CRC(ahci_platform_find_clk, 0x00ca1814, "_gpl");
SYMBOL_CRC(ahci_platform_enable_clks, 0x40027d76, "_gpl");
SYMBOL_CRC(ahci_platform_disable_clks, 0xeea32953, "_gpl");
SYMBOL_CRC(ahci_platform_deassert_rsts, 0xe02cb0ee, "_gpl");
SYMBOL_CRC(ahci_platform_assert_rsts, 0xd9593516, "_gpl");
SYMBOL_CRC(ahci_platform_enable_regulators, 0x5828250d, "_gpl");
SYMBOL_CRC(ahci_platform_disable_regulators, 0xe4ebd689, "_gpl");
SYMBOL_CRC(ahci_platform_enable_resources, 0xb4a8a8e9, "_gpl");
SYMBOL_CRC(ahci_platform_disable_resources, 0x11d83658, "_gpl");
SYMBOL_CRC(ahci_platform_get_resources, 0xf104d41a, "_gpl");
SYMBOL_CRC(ahci_platform_init_host, 0xe9b396c7, "_gpl");
SYMBOL_CRC(ahci_platform_shutdown, 0x2d11ff3d, "_gpl");
SYMBOL_CRC(ahci_platform_suspend_host, 0xd3672c46, "_gpl");
SYMBOL_CRC(ahci_platform_resume_host, 0x96c5b022, "_gpl");
SYMBOL_CRC(ahci_platform_suspend, 0x131af9d0, "_gpl");
SYMBOL_CRC(ahci_platform_resume, 0xd71ac06b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x198482fa, "phy_init" },
	{ 0xde4817ae, "phy_set_mode_ext" },
	{ 0xb496533d, "phy_power_on" },
	{ 0xb19dfd9, "phy_exit" },
	{ 0x93a32913, "phy_power_off" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x5d2bc42a, "reset_control_rearm" },
	{ 0xc65d9512, "regulator_enable" },
	{ 0xa052d894, "regulator_disable" },
	{ 0xc9e8054a, "devres_open_group" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0x86055fa8, "devres_add" },
	{ 0x9be1c798, "platform_get_resource_byname" },
	{ 0x53f09049, "devm_platform_ioremap_resource_byname" },
	{ 0x60be2cd9, "devm_platform_ioremap_resource" },
	{ 0xb4b741d1, "devm_clk_bulk_get_all" },
	{ 0x5e9a014b, "devm_regulator_get" },
	{ 0x74a8b059, "devm_reset_control_array_get" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xd6f4c5, "devm_clk_get_optional" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x137116cc, "devm_of_phy_get" },
	{ 0x3965d539, "regulator_get" },
	{ 0xe93e06ff, "devres_release_group" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x292d7a06, "devres_remove_group" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x5881d5b, "regulator_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdf623c75, "platform_get_irq" },
	{ 0xc193ebea, "ahci_save_initial_config" },
	{ 0x5e2c7a99, "ahci_set_em_messages" },
	{ 0xa9a4a5c2, "ata_host_alloc_pinfo" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xd8356983, "ahci_reset_em" },
	{ 0xe3f67584, "platform_get_resource" },
	{ 0x7dd8f41b, "ata_port_desc" },
	{ 0xe52a03f6, "ata_dummy_port_ops" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x2a7bafe8, "ahci_reset_controller" },
	{ 0x62b118d, "ahci_init_controller" },
	{ 0x709d5cb8, "ahci_print_info" },
	{ 0x4418649f, "ahci_host_activate" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x8d2c8ef2, "ata_host_suspend" },
	{ 0x741226c, "ata_host_resume" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0xb6de5b0c, "ahci_ops" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "2F1A0F4EEE65942E775B7AE");
