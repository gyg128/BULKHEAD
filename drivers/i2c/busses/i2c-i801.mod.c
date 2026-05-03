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
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xde80cd09, "ioremap" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a303d4d, "check_signature" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0x5094d097, "set_primary_fwnode" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0x946dbe16, "pcim_pin_device" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x73f5cff7, "pcim_iomap_regions" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0xeaee3eee, "_dev_notice" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0xf4c15224, "p2sb_bar" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdae90bd2, "i2c_add_adapter" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xef993821, "i2c_new_client_device" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8e07a04e, "i2c_register_spd" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xe3e57b96, "i2c_del_adapter" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbe2a2765, "complete" },
	{ 0xfb83dfea, "i2c_handle_smbus_host_notify" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0x754d539c, "strlen" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x72f14ff7, "acpi_get_object_info" },
	{ 0x81188c30, "match_string" },
	{ 0x37a0cba, "kfree" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "i2c-smbus");

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BC9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E22sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E4087DD0643037796B13DFA");
