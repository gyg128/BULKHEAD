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

SYMBOL_CRC(amd_sof_acp_suspend, 0x07737a60, "");
SYMBOL_CRC(amd_sof_acp_resume, 0xf2c7d561, "");
SYMBOL_CRC(amd_sof_acp_probe, 0x9f7c6473, "");
SYMBOL_CRC(amd_sof_acp_remove, 0x0414b794, "");
SYMBOL_CRC(acp_dsp_block_read, 0xf5204597, "");
SYMBOL_CRC(acp_dsp_block_write, 0x64758d7a, "");
SYMBOL_CRC(acp_get_bar_index, 0x968e2807, "");
SYMBOL_CRC(acp_dsp_pre_fw_run, 0x5b6945f3, "");
SYMBOL_CRC(acp_sof_dsp_run, 0xd034dcae, "");
SYMBOL_CRC(acp_mailbox_write, 0x4e095634, "");
SYMBOL_CRC(acp_mailbox_read, 0xc21ffd9b, "");
SYMBOL_CRC(acp_sof_ipc_send_msg, 0xfdd5cd6b, "");
SYMBOL_CRC(acp_sof_ipc_irq_thread, 0x35fb27dd, "");
SYMBOL_CRC(acp_sof_ipc_msg_data, 0x60a35d69, "");
SYMBOL_CRC(acp_sof_ipc_get_mailbox_offset, 0xf9dc756c, "");
SYMBOL_CRC(acp_sof_ipc_get_window_offset, 0x4a96c072, "");
SYMBOL_CRC(acp_pcm_hw_params, 0xc2e16696, "");
SYMBOL_CRC(acp_pcm_open, 0x790915a1, "");
SYMBOL_CRC(acp_pcm_close, 0x4872ff10, "");
SYMBOL_CRC(acp_dsp_stream_get, 0x6cbbcbc5, "");
SYMBOL_CRC(acp_dsp_stream_put, 0x87f80467, "");
SYMBOL_CRC(acp_dsp_stream_init, 0xe263507f, "");
SYMBOL_CRC(acp_sof_trace_release, 0xf292d7fe, "");
SYMBOL_CRC(acp_sof_trace_init, 0x07d19b43, "");
SYMBOL_CRC(acp_dai_probe, 0x6960d03a, "");
SYMBOL_CRC(sof_acp_common_ops, 0x9a0a000e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0x36c35fdd, "pci_get_device" },
	{ 0xe2e61f2a, "devm_ioremap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6e5de758, "snd_sgbuf_get_addr" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x2740c925, "___ratelimit" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x3dd9f961, "snd_soc_acpi_find_machine" },
	{ 0x6a0eab3c, "snd_sof_dsp_update_bits" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x3f8b3469, "sof_io_read" },
	{ 0x9487f7e9, "snd_sof_ipc_reply" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x7ac291f, "sof_machine_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xeaf73317, "snd_sof_load_firmware_memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0x4e4325fb, "sof_io_write" },
	{ 0x48dc092f, "sof_machine_register" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-acpi,snd-sof");


MODULE_INFO(srcversion, "647CD83A6664DC1EC4EAB6B");
