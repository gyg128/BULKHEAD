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

SYMBOL_CRC(typec_altmode_update_active, 0x308daf16, "_gpl");
SYMBOL_CRC(typec_altmode2port, 0x9ad59047, "_gpl");
SYMBOL_CRC(typec_unregister_altmode, 0x79e864cd, "_gpl");
SYMBOL_CRC(typec_partner_set_identity, 0x3c3dc1f8, "_gpl");
SYMBOL_CRC(typec_partner_set_pd_revision, 0x4d63f8be, "_gpl");
SYMBOL_CRC(typec_partner_set_usb_power_delivery, 0xffdd307f, "_gpl");
SYMBOL_CRC(typec_partner_set_num_altmodes, 0xe8fd5293, "_gpl");
SYMBOL_CRC(typec_partner_register_altmode, 0x99ccd2e6, "_gpl");
SYMBOL_CRC(typec_partner_set_svdm_version, 0x30491316, "_gpl");
SYMBOL_CRC(typec_register_partner, 0x4bc0207c, "_gpl");
SYMBOL_CRC(typec_unregister_partner, 0x50720bc3, "_gpl");
SYMBOL_CRC(typec_plug_set_num_altmodes, 0x4645876f, "_gpl");
SYMBOL_CRC(typec_plug_register_altmode, 0x52e05e81, "_gpl");
SYMBOL_CRC(typec_register_plug, 0xcb3bc1a5, "_gpl");
SYMBOL_CRC(typec_unregister_plug, 0x8218e363, "_gpl");
SYMBOL_CRC(typec_cable_get, 0x395a2ef5, "_gpl");
SYMBOL_CRC(typec_cable_put, 0x7c6bd2a7, "_gpl");
SYMBOL_CRC(typec_cable_is_active, 0x485ab824, "_gpl");
SYMBOL_CRC(typec_cable_set_identity, 0x0b1a2b26, "_gpl");
SYMBOL_CRC(typec_register_cable, 0xf7d8e44f, "_gpl");
SYMBOL_CRC(typec_unregister_cable, 0xa8dd6469, "_gpl");
SYMBOL_CRC(typec_port_set_usb_power_delivery, 0xb1e35f27, "_gpl");
SYMBOL_CRC(typec_set_data_role, 0x8f61e464, "_gpl");
SYMBOL_CRC(typec_set_pwr_role, 0x051454c6, "_gpl");
SYMBOL_CRC(typec_set_vconn_role, 0x9fc9135c, "_gpl");
SYMBOL_CRC(typec_set_pwr_opmode, 0x261fd11d, "_gpl");
SYMBOL_CRC(typec_find_pwr_opmode, 0xf1234a8b, "_gpl");
SYMBOL_CRC(typec_find_orientation, 0xa254de98, "_gpl");
SYMBOL_CRC(typec_find_port_power_role, 0xeafc1eb8, "_gpl");
SYMBOL_CRC(typec_find_power_role, 0x2d1e301d, "_gpl");
SYMBOL_CRC(typec_find_port_data_role, 0x9049491e, "_gpl");
SYMBOL_CRC(typec_set_orientation, 0xf70b9f19, "_gpl");
SYMBOL_CRC(typec_get_orientation, 0xa71b3b04, "_gpl");
SYMBOL_CRC(typec_set_mode, 0xf68e10be, "_gpl");
SYMBOL_CRC(typec_get_negotiated_svdm_version, 0xd1b6d76d, "_gpl");
SYMBOL_CRC(typec_get_drvdata, 0x0a3306f1, "_gpl");
SYMBOL_CRC(typec_get_fw_cap, 0xaafcd896, "_gpl");
SYMBOL_CRC(typec_port_register_altmode, 0xecbe2964, "_gpl");
SYMBOL_CRC(typec_port_register_altmodes, 0x70fafd63, "_gpl");
SYMBOL_CRC(typec_register_port, 0xd352ef64, "_gpl");
SYMBOL_CRC(typec_unregister_port, 0xf8467644, "_gpl");
SYMBOL_CRC(fwnode_typec_switch_get, 0xe31cd2b6, "_gpl");
SYMBOL_CRC(typec_switch_put, 0x86521d45, "_gpl");
SYMBOL_CRC(typec_switch_register, 0x23a6eef8, "_gpl");
SYMBOL_CRC(typec_switch_set, 0xd2fa1286, "_gpl");
SYMBOL_CRC(typec_switch_unregister, 0xb9e5d73f, "_gpl");
SYMBOL_CRC(typec_switch_set_drvdata, 0xa29d3bae, "_gpl");
SYMBOL_CRC(typec_switch_get_drvdata, 0x848822ad, "_gpl");
SYMBOL_CRC(fwnode_typec_mux_get, 0x6cda42f2, "_gpl");
SYMBOL_CRC(typec_mux_put, 0xfc8df340, "_gpl");
SYMBOL_CRC(typec_mux_set, 0x6b3d9465, "_gpl");
SYMBOL_CRC(typec_mux_register, 0xcec43a88, "_gpl");
SYMBOL_CRC(typec_mux_unregister, 0xaa489d20, "_gpl");
SYMBOL_CRC(typec_mux_set_drvdata, 0x154ffd1e, "_gpl");
SYMBOL_CRC(typec_mux_get_drvdata, 0x87b50208, "_gpl");
SYMBOL_CRC(typec_altmode_notify, 0x5e74f060, "_gpl");
SYMBOL_CRC(typec_altmode_enter, 0x01cbc0bb, "_gpl");
SYMBOL_CRC(typec_altmode_exit, 0x459b7822, "_gpl");
SYMBOL_CRC(typec_altmode_attention, 0x645245dc, "_gpl");
SYMBOL_CRC(typec_altmode_vdm, 0x097617e3, "_gpl");
SYMBOL_CRC(typec_altmode_get_partner, 0x347b33c8, "_gpl");
SYMBOL_CRC(typec_altmode_get_plug, 0xedb1dc50, "_gpl");
SYMBOL_CRC(typec_altmode_put_plug, 0xb5fb0274, "_gpl");
SYMBOL_CRC(__typec_altmode_register_driver, 0x2af81bcf, "_gpl");
SYMBOL_CRC(typec_altmode_unregister_driver, 0x4b5211d7, "_gpl");
SYMBOL_CRC(typec_match_altmode, 0xc5694bf4, "_gpl");
SYMBOL_CRC(usb_power_delivery_register_capabilities, 0x56e87892, "_gpl");
SYMBOL_CRC(usb_power_delivery_unregister_capabilities, 0xffcec115, "_gpl");
SYMBOL_CRC(usb_power_delivery_register, 0x82f55d7a, "_gpl");
SYMBOL_CRC(usb_power_delivery_unregister, 0xa3bcf55d, "_gpl");
SYMBOL_CRC(usb_power_delivery_link_device, 0xdab090ba, "_gpl");
SYMBOL_CRC(usb_power_delivery_unlink_device, 0x321731e3, "_gpl");
SYMBOL_CRC(fwnode_typec_retimer_get, 0x8b189de9, "_gpl");
SYMBOL_CRC(typec_retimer_put, 0x4127e115, "_gpl");
SYMBOL_CRC(typec_retimer_set, 0x47772f19, "_gpl");
SYMBOL_CRC(typec_retimer_register, 0x48afef3d, "_gpl");
SYMBOL_CRC(typec_retimer_unregister, 0xc438e6cb, "_gpl");
SYMBOL_CRC(typec_retimer_get_drvdata, 0xb38ce56a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0xf37fc324, "ida_destroy" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x46fa6d88, "component_master_add_with_match" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0xfd75fecd, "acpi_bus_for_each_dev" },
	{ 0x1e42e51c, "dev_fwnode" },
	{ 0xb6028004, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0xe187dd6d, "fwnode_connection_find_match" },
	{ 0x69fffe3d, "fwnode_get_next_child_node" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x371fcfba, "device_for_each_child" },
	{ 0x33a44216, "get_device" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x2596864a, "sysfs_notify" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x458e2bae, "device_match_fwnode" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xac864d6f, "fwnode_property_read_u32_array" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2349b131, "sysfs_create_link" },
	{ 0xf2905472, "fwnode_get_name" },
	{ 0x1c8d8d56, "kobject_uevent_env" },
	{ 0x957db7f5, "sysfs_update_group" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4e7c5de7, "__class_register" },
	{ 0x65b486c1, "device_add" },
	{ 0x2b6c77a2, "sysfs_remove_link" },
	{ 0x2661044e, "fwnode_property_read_u16_array" },
	{ 0x3155b23d, "ida_free" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x5a3fccfe, "class_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x26c3a357, "device_find_child" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x59554d57, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a463e92, "fwnode_property_read_string" },
	{ 0x73e310b3, "fwnode_property_present" },
	{ 0x9470bdbe, "component_master_del" },
	{ 0x1766b80c, "component_match_add_release" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x16eade20, "device_get_named_child_node" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x80cc4d40, "component_bind_all" },
	{ 0xda06b65, "device_match_name" },
	{ 0x159fa960, "kobject_uevent" },
	{ 0xf940105a, "fwnode_connection_find_matches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x81188c30, "match_string" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xae431256, "component_unbind_all" },
	{ 0x59a7328c, "driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x4786d9cb, "bus_register" },
	{ 0xb418b31, "class_find_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F6D91390DD2034FF1C977C");
