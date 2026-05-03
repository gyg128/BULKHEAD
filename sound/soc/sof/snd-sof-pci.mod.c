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

SYMBOL_CRC(sof_pci_pm, 0xa047958e, "");
SYMBOL_CRC(sof_pci_probe, 0xb0602ad3, "");
SYMBOL_CRC(sof_pci_remove, 0xe7c8c1bc, "");
SYMBOL_CRC(sof_pci_shutdown, 0x734e97af, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x4ea8cf7a, "pci_request_regions" },
	{ 0x1c972d6f, "snd_sof_runtime_idle" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xb31e89d0, "snd_sof_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xf61152, "snd_sof_runtime_resume" },
	{ 0x6f9fef42, "snd_sof_device_remove" },
	{ 0x1691e448, "snd_sof_complete" },
	{ 0xf974ad9f, "snd_sof_device_shutdown" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x315c63c7, "snd_sof_runtime_suspend" },
	{ 0x11cd70bc, "snd_sof_resume" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xb49f683c, "snd_sof_device_probe_completed" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0xcbb589de, "snd_sof_device_probe" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0x873938dc, "pci_release_regions" },
	{ 0x76ff97d9, "snd_sof_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-sof");


MODULE_INFO(srcversion, "4EC3E45567979A20D0191F6");
