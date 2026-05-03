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
	{ 0xa3e3b8e6, "ata_print_version" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xcbb64a6c, "pcim_iomap_regions_request_all" },
	{ 0x946dbe16, "pcim_pin_device" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x6d2d417c, "pci_enable_msi" },
	{ 0x12596b74, "pcim_iomap_table" },
	{ 0xc193ebea, "ahci_save_initial_config" },
	{ 0x5e2c7a99, "ahci_set_em_messages" },
	{ 0xa9a4a5c2, "ata_host_alloc_pinfo" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xfd804e89, "ata_port_pbar_desc" },
	{ 0xe52a03f6, "ata_dummy_port_ops" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x92997ed8, "_printk" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x2a7bafe8, "ahci_reset_controller" },
	{ 0x62b118d, "ahci_init_controller" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0x709d5cb8, "ahci_print_info" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x4418649f, "ahci_host_activate" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x904fd0d8, "ata_pci_device_suspend" },
	{ 0x487d4e61, "ata_pci_device_do_resume" },
	{ 0x741226c, "ata_host_resume" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5f74d367, "ahci_fill_cmd_slot" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0xbc479851, "dmam_alloc_attrs" },
	{ 0x4a746e65, "ahci_port_resume" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x111d4ffd, "ata_pci_remove_one" },
	{ 0x910cc21, "ata_scsi_queuecmd" },
	{ 0x4b5b8942, "ata_scsi_ioctl" },
	{ 0x9830b534, "ata_scsi_slave_config" },
	{ 0x892e1041, "ata_scsi_slave_destroy" },
	{ 0x298bb977, "ata_scsi_change_queue_depth" },
	{ 0xb5e99022, "ata_scsi_dma_need_drain" },
	{ 0x14e943de, "ata_std_bios_param" },
	{ 0x40d5f4c5, "ata_scsi_unlock_native_capacity" },
	{ 0xc16fbb52, "ahci_shost_groups" },
	{ 0xfaf81c96, "ahci_sdev_groups" },
	{ 0xb6de5b0c, "ahci_ops" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5B62A96E49D97E7EF4C66B");
