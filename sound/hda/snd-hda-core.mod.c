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

SYMBOL_CRC(hdac_get_device_id, 0x29a807ee, "_gpl");
SYMBOL_CRC(snd_hda_bus_type, 0xed99ff21, "_gpl");
SYMBOL_CRC(snd_hdac_bus_init, 0x9954f250, "_gpl");
SYMBOL_CRC(snd_hdac_bus_exit, 0xf5eead66, "_gpl");
SYMBOL_CRC(snd_hdac_bus_exec_verb_unlocked, 0xfb638ee9, "_gpl");
SYMBOL_CRC(snd_hdac_codec_link_up, 0x19148790, "_gpl");
SYMBOL_CRC(snd_hdac_codec_link_down, 0x889b1c60, "_gpl");
SYMBOL_CRC(snd_hdac_device_init, 0x5ed828c2, "_gpl");
SYMBOL_CRC(snd_hdac_device_exit, 0x88aee2f2, "_gpl");
SYMBOL_CRC(snd_hdac_device_register, 0x69d58385, "_gpl");
SYMBOL_CRC(snd_hdac_device_unregister, 0x73914e1c, "_gpl");
SYMBOL_CRC(snd_hdac_device_set_chip_name, 0xd5194511, "_gpl");
SYMBOL_CRC(snd_hdac_codec_modalias, 0x424e4030, "_gpl");
SYMBOL_CRC(snd_hdac_read, 0x118d5cf7, "_gpl");
SYMBOL_CRC(_snd_hdac_read_parm, 0x9e167704, "_gpl");
SYMBOL_CRC(snd_hdac_read_parm_uncached, 0x6ef4e38b, "_gpl");
SYMBOL_CRC(snd_hdac_override_parm, 0xa99e434d, "_gpl");
SYMBOL_CRC(snd_hdac_get_sub_nodes, 0x4a6928ae, "_gpl");
SYMBOL_CRC(snd_hdac_refresh_widgets, 0x8ed4875e, "_gpl");
SYMBOL_CRC(snd_hdac_get_connections, 0x4abba320, "_gpl");
SYMBOL_CRC(snd_hdac_power_up, 0x9224eeb2, "_gpl");
SYMBOL_CRC(snd_hdac_power_down, 0xc37934ca, "_gpl");
SYMBOL_CRC(snd_hdac_power_up_pm, 0x94de455b, "_gpl");
SYMBOL_CRC(snd_hdac_power_down_pm, 0xa0317c3e, "_gpl");
SYMBOL_CRC(snd_hdac_calc_stream_format, 0x5c07cb49, "_gpl");
SYMBOL_CRC(snd_hdac_query_supported_pcm, 0x6a93a7e1, "_gpl");
SYMBOL_CRC(snd_hdac_is_supported_format, 0x97c500a0, "_gpl");
SYMBOL_CRC(snd_hdac_codec_read, 0x5cf7cb07, "_gpl");
SYMBOL_CRC(snd_hdac_codec_write, 0x87807ff0, "_gpl");
SYMBOL_CRC(snd_hdac_check_power_state, 0x54543a5e, "_gpl");
SYMBOL_CRC(snd_hdac_sync_power_state, 0x17c3f69f, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_init, 0x4c193033, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_exit, 0x27e2c489, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_add_vendor_verb, 0x44a068f0, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_write_raw, 0x892ff71c, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_read_raw, 0x41051382, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_update_raw, 0x1481924b, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_update_raw_once, 0x08e2b66d, "_gpl");
SYMBOL_CRC(snd_hdac_regmap_sync, 0x6e73c6b3, "_gpl");
SYMBOL_CRC(snd_hdac_bus_init_cmd_io, 0x1714def2, "_gpl");
SYMBOL_CRC(snd_hdac_bus_stop_cmd_io, 0x983c11a6, "_gpl");
SYMBOL_CRC(snd_hdac_bus_send_cmd, 0xa38bf624, "_gpl");
SYMBOL_CRC(snd_hdac_bus_update_rirb, 0x1d216d32, "_gpl");
SYMBOL_CRC(snd_hdac_bus_get_response, 0x960c5d52, "_gpl");
SYMBOL_CRC(snd_hdac_bus_parse_capabilities, 0xdeb11cbf, "_gpl");
SYMBOL_CRC(snd_hdac_bus_enter_link_reset, 0x337c50a9, "_gpl");
SYMBOL_CRC(snd_hdac_bus_exit_link_reset, 0xb77255f0, "_gpl");
SYMBOL_CRC(snd_hdac_bus_reset_link, 0x2e5cac5a, "_gpl");
SYMBOL_CRC(snd_hdac_bus_init_chip, 0xd78f9ee9, "_gpl");
SYMBOL_CRC(snd_hdac_bus_stop_chip, 0x2e7eb736, "_gpl");
SYMBOL_CRC(snd_hdac_bus_handle_stream_irq, 0xf31a7b79, "_gpl");
SYMBOL_CRC(snd_hdac_bus_alloc_stream_pages, 0x4b7bdb2f, "_gpl");
SYMBOL_CRC(snd_hdac_bus_free_stream_pages, 0x51ba1ada, "_gpl");
SYMBOL_CRC(snd_hdac_bus_link_power, 0x8b842184, "_gpl");
SYMBOL_CRC(snd_hdac_get_stream_stripe_ctl, 0xb940a17f, "_gpl");
SYMBOL_CRC(snd_hdac_stream_init, 0x4aead488, "_gpl");
SYMBOL_CRC(snd_hdac_stream_start, 0x44e6b292, "_gpl");
SYMBOL_CRC(snd_hdac_stream_stop, 0x62d0238e, "_gpl");
SYMBOL_CRC(snd_hdac_stop_streams, 0x85eefa00, "_gpl");
SYMBOL_CRC(snd_hdac_stop_streams_and_chip, 0xa6699f81, "_gpl");
SYMBOL_CRC(snd_hdac_stream_reset, 0xd8035304, "_gpl");
SYMBOL_CRC(snd_hdac_stream_setup, 0x7425eae2, "_gpl");
SYMBOL_CRC(snd_hdac_stream_cleanup, 0x454ead1f, "_gpl");
SYMBOL_CRC(snd_hdac_stream_assign, 0xc6fe7caa, "_gpl");
SYMBOL_CRC(snd_hdac_stream_release_locked, 0xc6c770ea, "_gpl");
SYMBOL_CRC(snd_hdac_stream_release, 0xd4e38dc7, "_gpl");
SYMBOL_CRC(snd_hdac_get_stream, 0x669518ca, "_gpl");
SYMBOL_CRC(snd_hdac_stream_setup_periods, 0xa712542b, "_gpl");
SYMBOL_CRC(snd_hdac_stream_set_params, 0x299d9be3, "_gpl");
SYMBOL_CRC(snd_hdac_stream_timecounter_init, 0xbc7fb3c0, "_gpl");
SYMBOL_CRC(snd_hdac_stream_sync_trigger, 0x90780e51, "_gpl");
SYMBOL_CRC(snd_hdac_stream_sync, 0x5ea25059, "_gpl");
SYMBOL_CRC(snd_array_new, 0xbe7dd7dc, "_gpl");
SYMBOL_CRC(snd_array_free, 0x9a8e1877, "_gpl");
SYMBOL_CRC(snd_hdac_print_channel_allocation, 0xe4e07754, "_gpl");
SYMBOL_CRC(snd_hdac_chmap_to_spk_mask, 0x77c754a8, "_gpl");
SYMBOL_CRC(snd_hdac_spk_to_chmap, 0x67bfe791, "_gpl");
SYMBOL_CRC(snd_hdac_setup_channel_mapping, 0x0aac32e8, "_gpl");
SYMBOL_CRC(snd_hdac_get_active_channels, 0x3bd544c2, "_gpl");
SYMBOL_CRC(snd_hdac_get_ch_alloc_from_ca, 0x4c7ec4b6, "_gpl");
SYMBOL_CRC(snd_hdac_channel_allocation, 0x1ed87ba2, "_gpl");
SYMBOL_CRC(snd_hdac_register_chmap_ops, 0x8e64eadb, "_gpl");
SYMBOL_CRC(snd_hdac_add_chmap_ctls, 0x450c7722, "_gpl");
SYMBOL_CRC(snd_hdac_set_codec_wakeup, 0x3f411ce0, "_gpl");
SYMBOL_CRC(snd_hdac_display_power, 0x711b75d2, "_gpl");
SYMBOL_CRC(snd_hdac_sync_audio_rate, 0x19b78f3e, "_gpl");
SYMBOL_CRC(snd_hdac_acomp_get_eld, 0xf41f6145, "_gpl");
SYMBOL_CRC(snd_hdac_acomp_register_notifier, 0x017f79f6, "_gpl");
SYMBOL_CRC(snd_hdac_acomp_init, 0x3091886d, "_gpl");
SYMBOL_CRC(snd_hdac_acomp_exit, 0x0bef986d, "_gpl");
SYMBOL_CRC(snd_hdac_i915_set_bclk, 0x6ded4e74, "_gpl");
SYMBOL_CRC(snd_hdac_i915_init, 0x392ee931, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3e27850c, "regcache_cache_only" },
	{ 0x92942b37, "regcache_sync" },
	{ 0x86e9fa35, "regmap_write" },
	{ 0x8b205642, "snd_dma_alloc_dir_pages" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x46fa6d88, "component_master_add_with_match" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0xb3fdccc2, "snd_pcm_add_chmap_ctls" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0x36c35fdd, "pci_get_device" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x5f47a05, "devres_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3b89f1fc, "pm_runtime_get_if_active" },
	{ 0xfa696339, "kobject_init" },
	{ 0xb6028004, "device_initialize" },
	{ 0x1f8e561f, "prepare_to_wait" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x6e5de758, "snd_sgbuf_get_addr" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x447b37c, "snd_sgbuf_get_chunk_size" },
	{ 0x86055fa8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xca43db69, "snd_dma_free_pages" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x6901079d, "__pm_runtime_set_status" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xba722c83, "component_match_add_typed" },
	{ 0x800473f, "__cond_resched" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xffaff97f, "kobject_add" },
	{ 0x65b486c1, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xeaae0ec0, "__regmap_init" },
	{ 0x538c7455, "device_del" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xf9a1f89e, "complete_all" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2e03e419, "kobject_create_and_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9470bdbe, "component_master_del" },
	{ 0xeb72931a, "regmap_read" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8036f6bd, "wait_for_completion_killable_timeout" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x80cc4d40, "component_bind_all" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x159fa960, "kobject_uevent" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0xf48a8aee, "devres_find" },
	{ 0xe0039cac, "regmap_update_bits_base" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x6d4bf609, "regmap_exit" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xae431256, "component_unbind_all" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x578434ab, "pci_bus_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4786d9cb, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa3b6e70d, "kobject_put" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "EF8F7ED24E712B016887B23");
