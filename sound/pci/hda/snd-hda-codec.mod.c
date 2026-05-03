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

SYMBOL_CRC(snd_hda_codec_set_name, 0xb4dbb34a, "_gpl");
SYMBOL_CRC(__hda_codec_driver_register, 0xb6fbc735, "_gpl");
SYMBOL_CRC(hda_codec_driver_unregister, 0x23ecc290, "_gpl");
SYMBOL_CRC(snd_hda_codec_configure, 0xf0cd18a3, "_gpl");
SYMBOL_CRC(snd_hda_sequence_write, 0xea75db15, "_gpl");
SYMBOL_CRC(snd_hda_get_conn_list, 0x46ca5e8e, "_gpl");
SYMBOL_CRC(snd_hda_get_connections, 0xeff1d54e, "_gpl");
SYMBOL_CRC(snd_hda_override_conn_list, 0xb95e6aa4, "_gpl");
SYMBOL_CRC(snd_hda_get_conn_index, 0x824e7680, "_gpl");
SYMBOL_CRC(snd_hda_get_num_devices, 0x82ce95cc, "_gpl");
SYMBOL_CRC(snd_hda_get_dev_select, 0x0e71cf77, "_gpl");
SYMBOL_CRC(snd_hda_set_dev_select, 0xad5d3636, "_gpl");
SYMBOL_CRC(snd_hda_codec_set_pincfg, 0xae1c1abb, "_gpl");
SYMBOL_CRC(snd_hda_codec_get_pincfg, 0xa2119a42, "_gpl");
SYMBOL_CRC(snd_hda_codec_set_pin_target, 0x3fb9184e, "_gpl");
SYMBOL_CRC(snd_hda_codec_get_pin_target, 0xe6f3fc6f, "_gpl");
SYMBOL_CRC(snd_hda_shutup_pins, 0x64e4539a, "_gpl");
SYMBOL_CRC(snd_hda_codec_pcm_put, 0x3350f950, "_gpl");
SYMBOL_CRC(snd_hda_codec_pcm_new, 0x5f149a12, "_gpl");
SYMBOL_CRC(snd_hda_codec_cleanup_for_unbind, 0xdb96c4e0, "_gpl");
SYMBOL_CRC(snd_hda_codec_register, 0x3c8bc564, "_gpl");
SYMBOL_CRC(snd_hda_codec_unregister, 0xa00c2072, "_gpl");
SYMBOL_CRC(snd_hda_codec_device_init, 0x4843ffbb, "_gpl");
SYMBOL_CRC(snd_hda_codec_new, 0x722a0c05, "_gpl");
SYMBOL_CRC(snd_hda_codec_device_new, 0xc0eb3baf, "_gpl");
SYMBOL_CRC(snd_hda_codec_update_widgets, 0xbcb5e995, "_gpl");
SYMBOL_CRC(snd_hda_codec_setup_stream, 0xf5035496, "_gpl");
SYMBOL_CRC(__snd_hda_codec_cleanup_stream, 0xd1ff05c0, "_gpl");
SYMBOL_CRC(query_amp_caps, 0xa5b0421f, "_gpl");
SYMBOL_CRC(snd_hda_check_amp_caps, 0x9d61ae9a, "_gpl");
SYMBOL_CRC(snd_hda_override_amp_caps, 0x4ef38936, "_gpl");
SYMBOL_CRC(snd_hda_codec_amp_update, 0xafdce921, "_gpl");
SYMBOL_CRC(snd_hda_codec_amp_stereo, 0x268d4513, "_gpl");
SYMBOL_CRC(snd_hda_codec_amp_init, 0xb31d8ba0, "_gpl");
SYMBOL_CRC(snd_hda_codec_amp_init_stereo, 0x96b4a69d, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_volume_info, 0xabdd15db, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_volume_get, 0x6e4886dc, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_volume_put, 0xb207abdc, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_tlv, 0x43f30597, "_gpl");
SYMBOL_CRC(snd_hda_set_vmaster_tlv, 0xaffac498, "_gpl");
SYMBOL_CRC(snd_hda_find_mixer_ctl, 0xa459d506, "_gpl");
SYMBOL_CRC(snd_hda_ctl_add, 0x55fecfa9, "_gpl");
SYMBOL_CRC(snd_hda_add_nid, 0xc0104bc0, "_gpl");
SYMBOL_CRC(snd_hda_lock_devices, 0x17d56c2d, "_gpl");
SYMBOL_CRC(snd_hda_unlock_devices, 0xb27cc2be, "_gpl");
SYMBOL_CRC(__snd_hda_add_vmaster, 0x93ed929b, "_gpl");
SYMBOL_CRC(snd_hda_add_vmaster_hook, 0x855d3def, "_gpl");
SYMBOL_CRC(snd_hda_sync_vmaster_hook, 0x2954e419, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_switch_info, 0x0fb0dfbc, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_switch_get, 0xca254cbb, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_switch_put, 0x166a61bb, "_gpl");
SYMBOL_CRC(snd_hda_create_dig_out_ctls, 0xe9a655ee, "_gpl");
SYMBOL_CRC(snd_hda_spdif_out_of_nid, 0xc7c01d92, "_gpl");
SYMBOL_CRC(snd_hda_spdif_ctls_unassign, 0x6ddea0cc, "_gpl");
SYMBOL_CRC(snd_hda_spdif_ctls_assign, 0x61e58a17, "_gpl");
SYMBOL_CRC(snd_hda_create_spdif_share_sw, 0x7689c932, "_gpl");
SYMBOL_CRC(snd_hda_create_spdif_in_ctls, 0x1801cfbf, "_gpl");
SYMBOL_CRC(snd_hda_codec_set_power_to_all, 0xf9476385, "_gpl");
SYMBOL_CRC(snd_hda_codec_eapd_power_filter, 0x186da89e, "_gpl");
SYMBOL_CRC(snd_pcm_2_1_chmaps, 0xe118de5d, "_gpl");
SYMBOL_CRC(snd_hda_codec_build_controls, 0xc892fd3f, "_gpl");
SYMBOL_CRC(snd_hda_codec_prepare, 0x28c6a544, "_gpl");
SYMBOL_CRC(snd_hda_codec_cleanup, 0xd7788f53, "_gpl");
SYMBOL_CRC(snd_hda_codec_parse_pcms, 0x0dab35c7, "_gpl");
SYMBOL_CRC(snd_hda_add_new_ctls, 0x5fac42a7, "_gpl");
SYMBOL_CRC(snd_hda_codec_set_power_save, 0xe452551c, "_gpl");
SYMBOL_CRC(snd_hda_set_power_save, 0x02439b4c, "_gpl");
SYMBOL_CRC(snd_hda_check_amp_list_power, 0x909cc91c, "_gpl");
SYMBOL_CRC(snd_hda_input_mux_info, 0xf8dc35ac, "_gpl");
SYMBOL_CRC(snd_hda_input_mux_put, 0x97d9aef2, "_gpl");
SYMBOL_CRC(snd_hda_enum_helper_info, 0x9e5ff294, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_dig_open, 0x3eae8f97, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_dig_prepare, 0x0cd0a492, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_dig_cleanup, 0xb3849b2e, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_dig_close, 0x5feaf12f, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_analog_open, 0xd35f2026, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_analog_prepare, 0xec49b87d, "_gpl");
SYMBOL_CRC(snd_hda_multi_out_analog_cleanup, 0xba2dc96d, "_gpl");
SYMBOL_CRC(snd_hda_get_default_vref, 0xcf05dd59, "_gpl");
SYMBOL_CRC(snd_hda_correct_pin_ctl, 0xe7629ac0, "_gpl");
SYMBOL_CRC(_snd_hda_set_pin_ctl, 0x115c4b12, "_gpl");
SYMBOL_CRC(snd_hda_add_imux_item, 0x5b89bc1d, "_gpl");
SYMBOL_CRC(snd_print_pcm_bits, 0xeda3a721, "_gpl");
SYMBOL_CRC(is_jack_detectable, 0xdb35ec35, "_gpl");
SYMBOL_CRC(snd_hda_jack_tbl_get_mst, 0xa037e828, "_gpl");
SYMBOL_CRC(snd_hda_jack_tbl_get_from_tag, 0x9f644c3c, "_gpl");
SYMBOL_CRC(snd_hda_jack_set_dirty_all, 0xe93be6de, "_gpl");
SYMBOL_CRC(snd_hda_jack_pin_sense, 0xd1dc9ea3, "_gpl");
SYMBOL_CRC(snd_hda_jack_detect_state_mst, 0x52670599, "_gpl");
SYMBOL_CRC(snd_hda_jack_detect_enable_callback_mst, 0xdac1d056, "_gpl");
SYMBOL_CRC(snd_hda_jack_detect_enable, 0xfed81b69, "_gpl");
SYMBOL_CRC(snd_hda_jack_set_gating_jack, 0xd08dabe0, "_gpl");
SYMBOL_CRC(snd_hda_jack_bind_keymap, 0x570286f4, "_gpl");
SYMBOL_CRC(snd_hda_jack_set_button_state, 0x68f05206, "_gpl");
SYMBOL_CRC(snd_hda_jack_report_sync, 0xa605f753, "_gpl");
SYMBOL_CRC(snd_hda_jack_add_kctl_mst, 0x097e884b, "_gpl");
SYMBOL_CRC(snd_hda_jack_add_kctls, 0x53eb5089, "_gpl");
SYMBOL_CRC(snd_hda_jack_unsol_event, 0x2f7097b9, "_gpl");
SYMBOL_CRC(snd_hda_jack_poll_all, 0xf5cdf9e7, "_gpl");
SYMBOL_CRC(snd_hda_parse_pin_defcfg, 0x060b239f, "_gpl");
SYMBOL_CRC(snd_hda_get_input_pin_attr, 0x0676f5ac, "_gpl");
SYMBOL_CRC(hda_get_autocfg_input_label, 0xb2a2a574, "_gpl");
SYMBOL_CRC(snd_hda_get_pin_label, 0x288f93c8, "_gpl");
SYMBOL_CRC(snd_hda_add_verbs, 0x1fd8ba51, "_gpl");
SYMBOL_CRC(snd_hda_apply_verbs, 0x23786682, "_gpl");
SYMBOL_CRC(snd_hda_apply_pincfgs, 0x60d7a1bf, "_gpl");
SYMBOL_CRC(__snd_hda_apply_fixup, 0x911d99a1, "_gpl");
SYMBOL_CRC(snd_hda_apply_fixup, 0x93470395, "_gpl");
SYMBOL_CRC(snd_hda_pick_pin_fixup, 0xc356733e, "_gpl");
SYMBOL_CRC(snd_hda_pick_fixup, 0x76558aed, "_gpl");
SYMBOL_CRC(snd_hda_get_hint, 0x0a58f010, "_gpl");
SYMBOL_CRC(snd_hda_get_bool_hint, 0x6a7f7c51, "_gpl");
SYMBOL_CRC(snd_hda_get_int_hint, 0xdc8d6f8e, "_gpl");
SYMBOL_CRC(snd_hda_load_patch, 0xe4d4d486, "_gpl");
SYMBOL_CRC(azx_get_pos_lpib, 0xb00edb14, "_gpl");
SYMBOL_CRC(azx_get_pos_posbuf, 0x9eb98760, "_gpl");
SYMBOL_CRC(azx_get_position, 0xb1d772bc, "_gpl");
SYMBOL_CRC(azx_init_chip, 0xc092ff9c, "_gpl");
SYMBOL_CRC(azx_stop_all_streams, 0x8721f3be, "_gpl");
SYMBOL_CRC(azx_stop_chip, 0x1a7dd138, "_gpl");
SYMBOL_CRC(azx_interrupt, 0x38ce402b, "_gpl");
SYMBOL_CRC(azx_bus_init, 0x19113437, "_gpl");
SYMBOL_CRC(azx_probe_codecs, 0x1ca22499, "_gpl");
SYMBOL_CRC(azx_codec_configure, 0x18461855, "_gpl");
SYMBOL_CRC(azx_init_streams, 0xbed14ed1, "_gpl");
SYMBOL_CRC(azx_free_streams, 0xaeea33a8, "_gpl");
SYMBOL_CRC(snd_hda_enable_beep_device, 0xa8dc0489, "_gpl");
SYMBOL_CRC(snd_hda_attach_beep_device, 0x7fc4350d, "_gpl");
SYMBOL_CRC(snd_hda_detach_beep_device, 0x1d75aee6, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_switch_get_beep, 0xadeda77a, "_gpl");
SYMBOL_CRC(snd_hda_mixer_amp_switch_put_beep, 0xa9fe9077, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe03436e8, "input_allocate_device" },
	{ 0xd4e38dc7, "snd_hdac_stream_release" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4abba320, "snd_hdac_get_connections" },
	{ 0x94de455b, "snd_hdac_power_up_pm" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc3e755bf, "bpf_trace_run4" },
	{ 0x78b887ed, "vsprintf" },
	{ 0xa38bf624, "snd_hdac_bus_send_cmd" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x17c3f69f, "snd_hdac_sync_power_state" },
	{ 0xc36561f7, "snd_ctl_apply_vmaster_followers" },
	{ 0xa5626a0c, "snd_ctl_add" },
	{ 0x97c500a0, "snd_hdac_is_supported_format" },
	{ 0x41051382, "snd_hdac_regmap_read_raw" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb0e602eb, "memmove" },
	{ 0x960c5d52, "snd_hdac_bus_get_response" },
	{ 0xf4bff886, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b33cb1, "snd_jack_report" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x1d216d32, "snd_hdac_bus_update_rirb" },
	{ 0xc37934ca, "snd_hdac_power_down" },
	{ 0xb3fdccc2, "snd_pcm_add_chmap_ctls" },
	{ 0x2867a259, "snd_card_register" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0x87807ff0, "snd_hdac_codec_write" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4c193033, "snd_hdac_regmap_init" },
	{ 0x684f06de, "snd_pcm_hw_constraint_minmax" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xdc5b7316, "get_device_system_crosststamp" },
	{ 0x424e4030, "snd_hdac_codec_modalias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x2e7eb736, "snd_hdac_bus_stop_chip" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a93a7e1, "snd_hdac_query_supported_pcm" },
	{ 0xac0e14af, "snd_card_rw_proc_new" },
	{ 0x81951fa6, "snd_ctl_add_vmaster_hook" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x305fa421, "regcache_mark_dirty" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x8ed4875e, "snd_hdac_refresh_widgets" },
	{ 0xb0bb20f0, "snd_ctl_sync_vmaster" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbec57b33, "snd_ctl_remove" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x492bfb38, "snd_ctl_find_id" },
	{ 0x15951749, "snd_pcm_set_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbc7fb3c0, "snd_hdac_stream_timecounter_init" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x1504f819, "input_free_device" },
	{ 0x73076315, "snd_pci_quirk_lookup_id" },
	{ 0xe17dde74, "snd_ctl_new1" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x41b75b54, "device_reprobe" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x9e167704, "_snd_hdac_read_parm" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x211fcf87, "put_device" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xfb638ee9, "snd_hdac_bus_exec_verb_unlocked" },
	{ 0xa99e434d, "snd_hdac_override_parm" },
	{ 0x6d0582c8, "snd_component_add" },
	{ 0x69d58385, "snd_hdac_device_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1481924b, "snd_hdac_regmap_update_raw" },
	{ 0x7ec6bf8a, "snd_ctl_make_virtual_master" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xd78f9ee9, "snd_hdac_bus_init_chip" },
	{ 0xc6cbbc89, "capable" },
	{ 0x62d0238e, "snd_hdac_stream_stop" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x454ead1f, "snd_hdac_stream_cleanup" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x9954f250, "snd_hdac_bus_init" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x63c3d48, "snd_ctl_boolean_mono_info" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x6ef4e38b, "snd_hdac_read_parm_uncached" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xb334290c, "down_write" },
	{ 0x4aead488, "snd_hdac_stream_init" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0x73914e1c, "snd_hdac_device_unregister" },
	{ 0x5ed828c2, "snd_hdac_device_init" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xc6fe7caa, "snd_hdac_stream_assign" },
	{ 0x28b52a08, "snd_jack_new" },
	{ 0xbf78a120, "snd_hwdep_new" },
	{ 0x118d5cf7, "snd_hdac_read" },
	{ 0x8362f559, "device_attach" },
	{ 0xa0317c3e, "snd_hdac_power_down_pm" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5194511, "snd_hdac_device_set_chip_name" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x889b1c60, "snd_hdac_codec_link_down" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xc34c85b4, "snd_pcm_set_ops" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x983c11a6, "snd_hdac_bus_stop_cmd_io" },
	{ 0x5ea25059, "snd_hdac_stream_sync" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x4c8e616a, "_snd_ctl_add_follower" },
	{ 0x11089ac7, "_ctype" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x892ff71c, "snd_hdac_regmap_write_raw" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0x282d33ef, "snd_pcm_set_managed_buffer_all" },
	{ 0xc3e52780, "convert_art_to_tsc" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x711b75d2, "snd_hdac_display_power" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x27e2c489, "snd_hdac_regmap_exit" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x54543a5e, "snd_hdac_check_power_state" },
	{ 0x1db2f75, "snd_jack_set_key" },
	{ 0xbc7dc11a, "snd_pcm_suspend_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed99ff21, "snd_hda_bus_type" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ae4d12, "snd_pcm_hw_constraint_integer" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1d92885b, "pm_runtime_forbid" },
	{ 0x88aee2f2, "snd_hdac_device_exit" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x7e941f79, "current_work" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x7425eae2, "snd_hdac_stream_setup" },
	{ 0x299d9be3, "snd_hdac_stream_set_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a6928ae, "snd_hdac_get_sub_nodes" },
	{ 0xa1aacba3, "snd_device_disconnect" },
	{ 0xf31a7b79, "snd_hdac_bus_handle_stream_irq" },
	{ 0xdb38267d, "pm_runtime_force_resume" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x6c3eb8ff, "snd_pci_quirk_lookup" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x8e2b66d, "snd_hdac_regmap_update_raw_once" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x90780e51, "snd_hdac_stream_sync_trigger" },
	{ 0x6049c649, "snd_device_free" },
	{ 0xd8035304, "snd_hdac_stream_reset" },
	{ 0xa65fdc63, "snd_pcm_period_elapsed" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x85d15047, "snd_pcm_hw_constraint_step" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5a6da20, "device_release_driver" },
	{ 0x754d539c, "strlen" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x5cf7cb07, "snd_hdac_codec_read" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xeeb54737, "pm_runtime_force_suspend" },
	{ 0x59a7328c, "driver_register" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x85eefa00, "snd_hdac_stop_streams" },
	{ 0x19148790, "snd_hdac_codec_link_up" },
	{ 0xf9a482f9, "msleep" },
	{ 0x44e6b292, "snd_hdac_stream_start" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e73c6b3, "snd_hdac_regmap_sync" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9224eeb2, "snd_hdac_power_up" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core,snd-pcm,snd,snd-hwdep");


MODULE_INFO(srcversion, "CCDEDA294C837ECB5993607");
