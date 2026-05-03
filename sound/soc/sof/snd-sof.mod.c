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

SYMBOL_CRC(sof_debug_check_flag, 0x368c6727, "");
SYMBOL_CRC(sof_print_oops_and_stack, 0xcf7ee191, "");
SYMBOL_CRC(sof_set_fw_state, 0x77ccf7e0, "");
SYMBOL_CRC(snd_sof_device_probe, 0xcbb589de, "");
SYMBOL_CRC(snd_sof_device_probe_completed, 0xb49f683c, "");
SYMBOL_CRC(snd_sof_device_remove, 0x6f9fef42, "");
SYMBOL_CRC(snd_sof_device_shutdown, 0xf974ad9f, "");
SYMBOL_CRC(snd_sof_pci_update_bits, 0x80a82cbb, "");
SYMBOL_CRC(snd_sof_dsp_update_bits_unlocked, 0xe2c6ca07, "");
SYMBOL_CRC(snd_sof_dsp_update_bits64_unlocked, 0x3458040a, "");
SYMBOL_CRC(snd_sof_dsp_update_bits, 0x6a0eab3c, "");
SYMBOL_CRC(snd_sof_dsp_update_bits64, 0x53755050, "");
SYMBOL_CRC(snd_sof_dsp_update_bits_forced, 0x44a75672, "");
SYMBOL_CRC(snd_sof_dsp_panic, 0x8093d240, "");
SYMBOL_CRC(snd_sof_load_firmware_raw, 0xe4ec84f8, "");
SYMBOL_CRC(snd_sof_load_firmware_memcpy, 0xeaf73317, "");
SYMBOL_CRC(snd_sof_run_firmware, 0xfc6c6880, "");
SYMBOL_CRC(snd_sof_fw_unload, 0x82d7d554, "");
SYMBOL_CRC(sof_ipc_tx_message, 0x0b138562, "");
SYMBOL_CRC(sof_ipc_tx_message_no_pm, 0xdf0dbaad, "");
SYMBOL_CRC(snd_sof_ipc_get_reply, 0xede61fe2, "");
SYMBOL_CRC(snd_sof_ipc_reply, 0x9487f7e9, "");
SYMBOL_CRC(snd_sof_ipc_init, 0xc38de5ce, "");
SYMBOL_CRC(snd_sof_ipc_free, 0xa6ddcd70, "");
SYMBOL_CRC(snd_sof_pcm_period_elapsed, 0xfc922ca4, "");
SYMBOL_CRC(sof_pcm_dai_link_fixup, 0x383c8ea3, "");
SYMBOL_CRC(snd_sof_runtime_suspend, 0x315c63c7, "");
SYMBOL_CRC(snd_sof_runtime_idle, 0x1c972d6f, "");
SYMBOL_CRC(snd_sof_runtime_resume, 0x00f61152, "");
SYMBOL_CRC(snd_sof_resume, 0x11cd70bc, "");
SYMBOL_CRC(snd_sof_suspend, 0x76ff97d9, "");
SYMBOL_CRC(snd_sof_prepare, 0xb31e89d0, "");
SYMBOL_CRC(snd_sof_complete, 0x1691e448, "");
SYMBOL_CRC(snd_sof_debugfs_add_region_item_iomem, 0xb6785217, "_gpl");
SYMBOL_CRC(snd_sof_debugfs_buf_item, 0x88ebfcfe, "_gpl");
SYMBOL_CRC(snd_sof_dbg_memory_info_init, 0x0044ff8b, "_gpl");
SYMBOL_CRC(snd_sof_dbg_init, 0xfed6c822, "_gpl");
SYMBOL_CRC(snd_sof_free_debug, 0x924a4c7c, "_gpl");
SYMBOL_CRC(snd_sof_dsp_dbg_dump, 0xb8bcb020, "");
SYMBOL_CRC(snd_sof_handle_fw_exception, 0x98bc89ad, "");
SYMBOL_CRC(snd_sof_load_topology, 0xeb07f150, "");
SYMBOL_CRC(sof_io_write, 0x4e4325fb, "");
SYMBOL_CRC(sof_io_read, 0x3f8b3469, "");
SYMBOL_CRC(sof_io_write64, 0x8fee1b67, "");
SYMBOL_CRC(sof_io_read64, 0xc3c25ee4, "");
SYMBOL_CRC(sof_mailbox_write, 0x2a2a563e, "");
SYMBOL_CRC(sof_mailbox_read, 0x8ab73782, "");
SYMBOL_CRC(sof_block_write, 0x2bd14313, "");
SYMBOL_CRC(sof_block_read, 0x9ca22dfa, "");
SYMBOL_CRC(sof_widget_free, 0xe00e806b, "");
SYMBOL_CRC(sof_widget_setup, 0x1859e800, "");
SYMBOL_CRC(snd_sof_dsp_only_d0i3_compatible_stream_active, 0x431f115b, "");
SYMBOL_CRC(sof_dai_get_mclk, 0x6b46ba54, "");
SYMBOL_CRC(sof_dai_get_bclk, 0x24624fc5, "");
SYMBOL_CRC(sof_machine_check, 0x88229231, "");
SYMBOL_CRC(sof_machine_register, 0x48dc092f, "");
SYMBOL_CRC(sof_machine_unregister, 0x07ac291f, "");
SYMBOL_CRC(sof_ipc_msg_data, 0xa7fb9366, "");
SYMBOL_CRC(sof_set_stream_data_offset, 0xa1e51a1e, "");
SYMBOL_CRC(sof_stream_pcm_open, 0x5cb05c23, "");
SYMBOL_CRC(sof_stream_pcm_close, 0x4be1a455, "");
SYMBOL_CRC(sof_ipc4_set_pipeline_state, 0x650d8f28, "");
SYMBOL_CRC(sof_client_dev_register, 0x04bc6b77, "_gpl");
SYMBOL_CRC(sof_client_dev_unregister, 0x71d67788, "_gpl");
SYMBOL_CRC(sof_client_ipc_tx_message, 0x36f4e048, "_gpl");
SYMBOL_CRC(sof_suspend_clients, 0x88277024, "_gpl");
SYMBOL_CRC(sof_resume_clients, 0x916c18dc, "_gpl");
SYMBOL_CRC(sof_client_get_debugfs_root, 0xa6f19554, "_gpl");
SYMBOL_CRC(sof_client_get_dma_dev, 0x8d17371a, "_gpl");
SYMBOL_CRC(sof_client_get_fw_version, 0x67363775, "_gpl");
SYMBOL_CRC(sof_client_get_ipc_max_payload_size, 0xcb04c11c, "_gpl");
SYMBOL_CRC(sof_client_get_ipc_type, 0xa24c07eb, "_gpl");
SYMBOL_CRC(sof_client_core_module_get, 0x8eee64bd, "_gpl");
SYMBOL_CRC(sof_client_core_module_put, 0xd72a83ee, "_gpl");
SYMBOL_CRC(sof_client_register_ipc_rx_handler, 0x1f4b8173, "_gpl");
SYMBOL_CRC(sof_client_unregister_ipc_rx_handler, 0x47d2b6cd, "_gpl");
SYMBOL_CRC(sof_client_register_fw_state_handler, 0x03b30a39, "_gpl");
SYMBOL_CRC(sof_client_unregister_fw_state_handler, 0x3c117c39, "_gpl");
SYMBOL_CRC(sof_client_get_fw_state, 0x08ee5eed, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xadf6d4f4, "dpcm_end_walk_at_be" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x263c3152, "bcmp" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb4ad5090, "snd_soc_dapm_dai_free_widgets" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8b205642, "snd_dma_alloc_dir_pages" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd88b5c4e, "auxiliary_device_init" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfd35a216, "snd_soc_dapm_dai_get_connected_widgets" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0x5c8942ba, "request_firmware" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x2cc609e8, "snd_sof_create_page_table" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xf860f802, "debugfs_file_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x8df9dd10, "guid_null" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xca43db69, "snd_dma_free_pages" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x648e19e, "devm_snd_soc_register_component" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x749ca4ac, "debugfs_file_put" },
	{ 0x339178ad, "module_put" },
	{ 0x359a06fe, "intel_nhlt_get_endpoint_blob" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xa3f78e47, "snd_soc_rtdcom_lookup" },
	{ 0x2dba276a, "__iowrite32_copy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc4775fd4, "devm_kmemdup" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x35595e4a, "simple_open" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x95b91b00, "__auxiliary_device_add" },
	{ 0xa7d2444b, "bpf_trace_run5" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x3155b23d, "ida_free" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xedf8f1c1, "snd_soc_tplg_component_load" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x10c7c598, "snd_pcm_set_managed_buffer" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0x538c7455, "device_del" },
	{ 0x1a0a801a, "default_llseek" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xa0ed55df, "debugfs_create_u32" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x4162a9c7, "snd_soc_tplg_component_remove" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1ffe5360, "snd_ctl_notify_one" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ae4d12, "snd_pcm_hw_constraint_integer" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x8274dffb, "snd_dma_buffer_sync" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0xa65fdc63, "snd_pcm_period_elapsed" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x85d15047, "snd_pcm_hw_constraint_step" },
	{ 0x478cf9eb, "snd_soc_tplg_widget_bind_event" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xbb498b4e, "_dev_printk" },
	{ 0x349cba85, "strchr" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xfaf598c6, "snd_ctl_request_layer" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-sof-utils,snd-intel-dspcfg,snd");


MODULE_INFO(srcversion, "2817CFE0FB21228E4974C6A");
