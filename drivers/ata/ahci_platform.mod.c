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
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0xf104d41a, "ahci_platform_get_resources" },
	{ 0xb4a8a8e9, "ahci_platform_enable_resources" },
	{ 0xb9cd5342, "acpi_device_get_match_data" },
	{ 0xe9b396c7, "ahci_platform_init_host" },
	{ 0x11d83658, "ahci_platform_disable_resources" },
	{ 0xa836fda4, "ahci_platform_ops" },
	{ 0x8a6b8de3, "ata_platform_remove_one" },
	{ 0x2d11ff3d, "ahci_platform_shutdown" },
	{ 0x131af9d0, "ahci_platform_suspend" },
	{ 0xd71ac06b, "ahci_platform_resume" },
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
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "libahci_platform,libahci");

MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Cgeneric-ahciC*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahciC*");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahciC*");
MODULE_ALIAS("acpi*:APMC0D33:*");
MODULE_ALIAS("acpi*:010601:*");

MODULE_INFO(srcversion, "7A807C2AD1BFE537C4AFFE7");
