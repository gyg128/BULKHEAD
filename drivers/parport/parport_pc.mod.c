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

SYMBOL_CRC(parport_pc_probe_port, 0xd0a6497a, "");
SYMBOL_CRC(parport_pc_unregister_port, 0x4bb51cb8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x64b966d6, "parport_register_port" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x123244e2, "parport_del_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x55ce03a2, "parport_announce_port" },
	{ 0x72b243d4, "free_dma" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa95cb5e2, "parport_ieee1284_write_compat" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e6754c1, "parport_wait_peripheral" },
	{ 0xd6bd247e, "parport_ieee1284_ecp_write_data" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x58e7c868, "parport_remove_port" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xfbfc66bd, "pnp_unregister_driver" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0xbc4ef506, "platform_bus_type" },
	{ 0xabdc439, "cc_platform_has" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xa9b1739f, "current_task" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5ff407ab, "dma_map_page_attrs" },
	{ 0x45e4a032, "dma_spin_lock" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xf07299d6, "parport_wait_event" },
	{ 0x800473f, "__cond_resched" },
	{ 0x47174133, "dma_unmap_page_attrs" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xd042c6dc, "pnp_register_driver" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x36c35fdd, "pci_get_device" },
	{ 0x2fa0c306, "pci_match_id" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0x34dd9417, "pnp_get_resource" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x4c81cefd, "pci_enable_device" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x655dbb62, "parport_ieee1284_epp_write_data" },
	{ 0xb6f6da74, "parport_ieee1284_epp_read_data" },
	{ 0xbfc03916, "parport_ieee1284_epp_write_addr" },
	{ 0xa448e621, "parport_ieee1284_epp_read_addr" },
	{ 0x7a3f05f4, "parport_ieee1284_ecp_read_data" },
	{ 0xc20a60a, "parport_ieee1284_ecp_write_addr" },
	{ 0xdc4c0e11, "parport_ieee1284_read_nibble" },
	{ 0x4b680a82, "parport_ieee1284_read_byte" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C11Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009900sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009901sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000135Cd00000278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003050sv00001C00sd00003050bc*sc*i*");
MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("acpi*:PNP0400:*");
MODULE_ALIAS("pnp:dPNP0401*");
MODULE_ALIAS("acpi*:PNP0401:*");

MODULE_INFO(srcversion, "B71362A34BE4E11C44EAF6E");
