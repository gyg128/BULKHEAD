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

SYMBOL_CRC(hda_pci_intel_probe, 0xbf22bfeb, "");
SYMBOL_CRC(hda_ops_free, 0xa35d24ce, "");
SYMBOL_CRC(sof_skl_ops, 0x1da1656c, "");
SYMBOL_CRC(sof_skl_ops_init, 0x3bfce282, "");
SYMBOL_CRC(skl_chip_info, 0x57e9dde6, "");
SYMBOL_CRC(sof_apl_ops, 0x39109a09, "");
SYMBOL_CRC(sof_apl_ops_init, 0xbb06ccb8, "");
SYMBOL_CRC(apl_chip_info, 0xc22bfc9b, "");
SYMBOL_CRC(sof_cnl_ops, 0x840f8f5e, "");
SYMBOL_CRC(sof_cnl_ops_init, 0x17f265f6, "");
SYMBOL_CRC(cnl_chip_info, 0x35854f75, "");
SYMBOL_CRC(jsl_chip_info, 0x68f87691, "");
SYMBOL_CRC(sof_tgl_ops, 0xaf320706, "");
SYMBOL_CRC(sof_tgl_ops_init, 0x779a286e, "");
SYMBOL_CRC(tgl_chip_info, 0xe94e0e18, "");
SYMBOL_CRC(tglh_chip_info, 0xd035eb86, "");
SYMBOL_CRC(ehl_chip_info, 0x35830637, "");
SYMBOL_CRC(adls_chip_info, 0xa63ba66b, "");
SYMBOL_CRC(sof_icl_ops, 0xbcc307ef, "");
SYMBOL_CRC(sof_icl_ops_init, 0xff1af0c6, "");
SYMBOL_CRC(icl_chip_info, 0xf8bf28b9, "");
SYMBOL_CRC(sof_mtl_ops, 0x565bb7ae, "");
SYMBOL_CRC(sof_mtl_ops_init, 0xf1ce8f91, "");
SYMBOL_CRC(mtl_chip_info, 0xaa57e9f9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x375665fe, "hda_codec_jack_check" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc57c238a, "pci_save_state" },
	{ 0x9ca22dfa, "sof_block_read" },
	{ 0x17e9852a, "snd_hdac_ext_bus_link_power_down_all" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb6785217, "snd_sof_debugfs_add_region_item_iomem" },
	{ 0x2c14feb1, "hda_codec_i915_display_power" },
	{ 0xc3e755bf, "bpf_trace_run4" },
	{ 0x8b205642, "snd_dma_alloc_dir_pages" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xa38bf624, "snd_hdac_bus_send_cmd" },
	{ 0x1c8cfa94, "intel_nhlt_get_dmic_geo" },
	{ 0x960c5d52, "snd_hdac_bus_get_response" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x1d216d32, "snd_hdac_bus_update_rirb" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0x58b201e6, "snd_hdac_ext_link_stream_clear" },
	{ 0x20f55e8a, "hda_codec_probe_bus" },
	{ 0xa66eb881, "snd_hdac_ext_stream_decouple_locked" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8fee1b67, "sof_io_write64" },
	{ 0xedc03953, "iounmap" },
	{ 0x3453444, "hda_codec_jack_wake_enable" },
	{ 0x1b394bd2, "sof_xtensa_arch_ops" },
	{ 0x41a05c36, "intel_nhlt_has_endpoint_type" },
	{ 0xef201be7, "snd_hdac_ext_bus_link_power_up" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1b6fbe1, "snd_hdac_ext_bus_init" },
	{ 0x8518b4c8, "snd_hdac_ext_link_stream_setup" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x650d8f28, "sof_ipc4_set_pipeline_state" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x40242035, "snd_hdac_link_free_all" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x154ff067, "snd_intel_dsp_driver_probe" },
	{ 0xb8c8e83c, "pci_irq_vector" },
	{ 0x6e5de758, "snd_sgbuf_get_addr" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x447b37c, "snd_sgbuf_get_chunk_size" },
	{ 0x5065ce2f, "pci_ioremap_bar" },
	{ 0x5cdd9298, "snd_hdac_ext_bus_device_remove" },
	{ 0xb0602ad3, "sof_pci_probe" },
	{ 0x7a184ef8, "snd_soc_hdac_hda_get_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf0dbaad, "sof_ipc_tx_message_no_pm" },
	{ 0x8079589c, "snd_hdac_ext_link_stream_start" },
	{ 0x498287c5, "hda_codec_i915_exit" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xca43db69, "snd_dma_free_pages" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9341f141, "snd_hdac_ext_bus_exit" },
	{ 0x2bd14313, "sof_block_write" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc3c25ee4, "sof_io_read64" },
	{ 0x431f115b, "snd_sof_dsp_only_d0i3_compatible_stream_active" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x894c68a0, "snd_hdac_ext_bus_link_power" },
	{ 0xb8bcb020, "snd_sof_dsp_dbg_dump" },
	{ 0x2a2a563e, "sof_mailbox_write" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf8f9e9f6, "snd_hdac_ext_bus_link_power_down" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x8ab73782, "sof_mailbox_read" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0x66ad9cd2, "devm_kfree" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x44a75672, "snd_sof_dsp_update_bits_forced" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0xb6cfbf39, "snd_hdac_ext_stream_release" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4bc6b77, "sof_client_dev_register" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x3dd9f961, "snd_soc_acpi_find_machine" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x129883bb, "snd_soc_dpcm_get_substream" },
	{ 0x7f6d7bad, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4e859456, "intel_nhlt_free" },
	{ 0x3d5f2890, "snd_hdac_ext_link_stream_reset" },
	{ 0xe2c6ca07, "snd_sof_dsp_update_bits_unlocked" },
	{ 0xcf7ee191, "sof_print_oops_and_stack" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x983c11a6, "snd_hdac_bus_stop_cmd_io" },
	{ 0xff6104d0, "snd_pcm_rate_bit_to_rate" },
	{ 0xede61fe2, "snd_sof_ipc_get_reply" },
	{ 0x6a0eab3c, "snd_sof_dsp_update_bits" },
	{ 0x9463c005, "pci_restore_state" },
	{ 0x80a82cbb, "snd_sof_pci_update_bits" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x711b75d2, "snd_hdac_display_power" },
	{ 0x368c6727, "sof_debug_check_flag" },
	{ 0xbf1d913e, "pci_alloc_irq_vectors_affinity" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x1714def2, "snd_hdac_bus_init_cmd_io" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3f8b3469, "sof_io_read" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ae4d12, "snd_pcm_hw_constraint_integer" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x9487f7e9, "snd_sof_ipc_reply" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1f741788, "snd_hdac_ext_bus_get_ml_capabilities" },
	{ 0x7ac291f, "sof_machine_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xb9fc3eca, "snd_hdac_ext_link_clear_stream_id" },
	{ 0xe4ec84f8, "snd_sof_load_firmware_raw" },
	{ 0xb2c20b71, "snd_hdac_ext_link_set_stream_id" },
	{ 0x8093d240, "snd_sof_dsp_panic" },
	{ 0x76ff97d9, "snd_sof_suspend" },
	{ 0xdbc90f70, "snd_hdac_ext_bus_link_put" },
	{ 0xb7b836b3, "intel_nhlt_ssp_mclk_mask" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x3f411ce0, "snd_hdac_set_codec_wakeup" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x85d15047, "snd_pcm_hw_constraint_step" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb76b8839, "snd_hdac_ext_bus_get_link" },
	{ 0x754d539c, "strlen" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x4ef1dc36, "intel_nhlt_init" },
	{ 0xbb498b4e, "_dev_printk" },
	{ 0x71d67788, "sof_client_dev_unregister" },
	{ 0x66fd6169, "intel_nhlt_ssp_endpoint_mask" },
	{ 0xfad52d0, "hda_codec_i915_init" },
	{ 0x5cfbfa53, "pci_free_irq_vectors" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x4e4325fb, "sof_io_write" },
	{ 0x48dc092f, "sof_machine_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfc922ca4, "snd_sof_pcm_period_elapsed" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8449bbee, "snd_soc_acpi_intel_hda_machines" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-sof-intel-hda,snd-sof,snd-hda-ext-core,snd-pcm,snd-hda-core,snd-intel-dspcfg,snd-sof-xtensa-dsp,snd-sof-pci,snd-soc-hdac-hda,snd-soc-acpi,snd-soc-core,snd-soc-acpi-intel-match");


MODULE_INFO(srcversion, "48E2F2FE2828C77D0B27C9F");
