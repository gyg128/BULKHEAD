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

SYMBOL_CRC(ahci_ignore_sss, 0xea50dad3, "_gpl");
SYMBOL_CRC(ahci_shost_groups, 0xc16fbb52, "_gpl");
SYMBOL_CRC(ahci_sdev_groups, 0xfaf81c96, "_gpl");
SYMBOL_CRC(ahci_ops, 0xb6de5b0c, "_gpl");
SYMBOL_CRC(ahci_pmp_retry_srst_ops, 0xbc080afc, "_gpl");
SYMBOL_CRC(ahci_save_initial_config, 0xc193ebea, "_gpl");
SYMBOL_CRC(ahci_start_engine, 0x83b74c52, "_gpl");
SYMBOL_CRC(ahci_stop_engine, 0x72a17d0a, "_gpl");
SYMBOL_CRC(ahci_start_fis_rx, 0x13bf168e, "_gpl");
SYMBOL_CRC(ahci_reset_controller, 0x2a7bafe8, "_gpl");
SYMBOL_CRC(ahci_reset_em, 0xd8356983, "_gpl");
SYMBOL_CRC(ahci_init_controller, 0x062b118d, "_gpl");
SYMBOL_CRC(ahci_dev_classify, 0x5991ef6f, "_gpl");
SYMBOL_CRC(ahci_fill_cmd_slot, 0x5f74d367, "_gpl");
SYMBOL_CRC(ahci_kick_engine, 0xa9ffa24e, "_gpl");
SYMBOL_CRC(ahci_check_ready, 0x938c0a88, "_gpl");
SYMBOL_CRC(ahci_do_softreset, 0x2afde257, "_gpl");
SYMBOL_CRC(ahci_do_hardreset, 0xe881f89c, "_gpl");
SYMBOL_CRC(ahci_handle_port_intr, 0x050096e0, "_gpl");
SYMBOL_CRC(ahci_qc_issue, 0x536be8a7, "_gpl");
SYMBOL_CRC(ahci_error_handler, 0x6db025c8, "_gpl");
SYMBOL_CRC(ahci_port_resume, 0x4a746e65, "_gpl");
SYMBOL_CRC(ahci_print_info, 0x709d5cb8, "_gpl");
SYMBOL_CRC(ahci_set_em_messages, 0x5e2c7a99, "_gpl");
SYMBOL_CRC(ahci_host_activate, 0x4418649f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x53381ff4, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xaffe8b50, "ata_std_qc_defer" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xb7041374, "ata_std_postreset" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xa40125b7, "sata_pmp_error_handler" },
	{ 0x50f5d301, "ata_wait_register" },
	{ 0x78202e84, "sata_link_scr_lpm" },
	{ 0xebd3919e, "ata_msleep" },
	{ 0xe62164ab, "ata_port_freeze" },
	{ 0x147e898e, "acpi_storage_d3" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x1971e91a, "ata_link_next" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbc479851, "dmam_alloc_attrs" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x66ad9cd2, "devm_kfree" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xe52a03f6, "ata_dummy_port_ops" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xf2660614, "ata_port_classify" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x73492690, "ata_wait_after_reset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xb300cfa3, "sata_link_hardreset" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x10cde6fd, "ata_host_activate" },
	{ 0xfa63bbc8, "ata_host_start" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0x7dd8f41b, "ata_port_desc" },
	{ 0xd71baf01, "ata_host_register" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x1bb6509f, "ata_dev_set_feature" },
	{ 0xa10fd013, "sata_lpm_ignore_phy_events" },
	{ 0xf027f5c1, "sata_async_notification" },
	{ 0x30276c39, "ata_ehi_clear_desc" },
	{ 0x6ce34528, "ata_ehi_push_desc" },
	{ 0xfdbd2053, "ata_port_abort" },
	{ 0x24710933, "ata_link_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b51a15, "ata_qc_complete_multiple" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xfda6faa4, "sata_pmp_port_ops" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xb4ee53e5, "dev_attr_link_power_management_policy" },
	{ 0xc9048c3, "dev_attr_em_message_type" },
	{ 0x1d97f3d3, "dev_attr_em_message" },
	{ 0x5ae4f990, "dev_attr_sw_activity" },
	{ 0xda1e8335, "dev_attr_unload_heads" },
	{ 0x2db9ab3c, "dev_attr_ncq_prio_supported" },
	{ 0xd4b38f10, "dev_attr_ncq_prio_enable" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "26E3745DE057148A74EB317");
