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
	{ 0x68f37500, "xhci_init_driver" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0x42cc59a8, "usb_hcd_is_primary_hcd" },
	{ 0x1ef18614, "pci_d3cold_disable" },
	{ 0x86b129ac, "xhci_suspend" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x357e25dc, "usb_enable_intel_xhci_ports" },
	{ 0x41f7da05, "xhci_resume" },
	{ 0x23e52d9d, "xhci_shutdown" },
	{ 0xdeb9a6d3, "pci_set_power_state" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0x101b7c83, "xhci_gen_setup" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x37a0cba, "kfree" },
	{ 0xffd20a05, "pci_set_mwi" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x2fa0c306, "pci_match_id" },
	{ 0x35ec0d85, "xhci_dbg_trace" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xc062adfc, "__tracepoint_xhci_dbg_quirks" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xabf03fc3, "__SCT__tp_func_xhci_dbg_quirks" },
	{ 0x8e370e35, "renesas_xhci_check_request_fw" },
	{ 0x8eb7cb9, "__devm_reset_control_get" },
	{ 0xd1034db7, "usb_hcd_pci_probe" },
	{ 0x83a4ccf7, "usb_create_shared_hcd" },
	{ 0xa87fb906, "xhci_ext_cap_init" },
	{ 0xa5be4824, "usb_add_hcd" },
	{ 0x7d482f48, "usb_put_hcd" },
	{ 0xb1bf7f61, "usb_hcd_pci_remove" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0x1d92885b, "pm_runtime_forbid" },
	{ 0x298ef525, "usb_remove_hcd" },
	{ 0xab4e1a1c, "usb_hcd_pci_shutdown" },
	{ 0x6a048cae, "usb_hcd_pci_pm_ops" },
	{ 0x3fcd36f3, "__SCK__tp_func_xhci_dbg_quirks" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "xhci-pci-renesas");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

MODULE_INFO(srcversion, "38B7E6CE08B417B41321D0F");
