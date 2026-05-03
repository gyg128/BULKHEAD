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

SYMBOL_CRC(mei_me_irq_quick_handler, 0x922c6ae5, "_gpl");
SYMBOL_CRC(mei_me_irq_thread_handler, 0xd0eef98f, "_gpl");
SYMBOL_CRC(mei_me_polling_thread, 0x051f202c, "_gpl");
SYMBOL_CRC(mei_me_get_cfg, 0x7a048f76, "_gpl");
SYMBOL_CRC(mei_me_dev_init, 0x1041c0cb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x14dc7949, "__SCT__tp_func_mei_pci_cfg_read" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x731861a6, "dev_pm_domain_set" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x3b0a488d, "__SCT__tp_func_mei_reg_read" },
	{ 0xb2d74b82, "__SCK__tp_func_mei_reg_read" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x1952790e, "finish_wait" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0x3b9bdc73, "pci_disable_msi" },
	{ 0xcd2b713e, "mei_start" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2dc58b7, "mei_cl_all_disconnect" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xa78283bd, "mei_hbm_pg" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x94030fc4, "pci_bus_read_config_dword" },
	{ 0xf865d89e, "mei_deregister" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xc44fecac, "mei_cancel_work" },
	{ 0x16747e9a, "mei_irq_read_handler" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x73f5cff7, "pcim_iomap_regions" },
	{ 0x2baa8cdf, "mei_stop" },
	{ 0xe778c7f2, "mei_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6d2d417c, "pci_enable_msi" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb3d66a1, "__tracepoint_mei_reg_read" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbb25295, "__SCT__tp_func_mei_reg_write" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x29425e3b, "__SCK__tp_func_mei_pci_cfg_read" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3b3a5f92, "mei_irq_compl_handler" },
	{ 0x979af299, "mei_hbm_pg_resume" },
	{ 0x9ef78ba3, "__tracepoint_mei_reg_write" },
	{ 0x8f07b2a, "mei_restart" },
	{ 0x3cf910fc, "__SCK__tp_func_mei_reg_write" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x3baf49c2, "__tracepoint_mei_pci_cfg_read" },
	{ 0x12596b74, "pcim_iomap_table" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x11777c4c, "mei_device_init" },
	{ 0xfadccc2d, "mei_write_is_idle" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xdfed9a0e, "mei_irq_write_handler" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00002974sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002984sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002994sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A74sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001DBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000319Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A68sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B2445E83ECBED11776581DE");
