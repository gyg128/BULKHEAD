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

SYMBOL_CRC(drm_dp_dual_mode_read, 0xb16e0a56, "");
SYMBOL_CRC(drm_dp_dual_mode_write, 0x4ce9bc34, "");
SYMBOL_CRC(drm_dp_dual_mode_detect, 0x92f31cb6, "");
SYMBOL_CRC(drm_dp_dual_mode_max_tmds_clock, 0x1aaad040, "");
SYMBOL_CRC(drm_dp_dual_mode_get_tmds_output, 0x33ce9787, "");
SYMBOL_CRC(drm_dp_dual_mode_set_tmds_output, 0x7ed6c9cc, "");
SYMBOL_CRC(drm_dp_get_dual_mode_type_name, 0x5407ae9e, "");
SYMBOL_CRC(drm_lspcon_get_mode, 0xdfda77df, "");
SYMBOL_CRC(drm_lspcon_set_mode, 0x5e9859e6, "");
SYMBOL_CRC(drm_dp_channel_eq_ok, 0xedcf81ce, "");
SYMBOL_CRC(drm_dp_clock_recovery_ok, 0x8d701329, "");
SYMBOL_CRC(drm_dp_get_adjust_request_voltage, 0xc5c99a79, "");
SYMBOL_CRC(drm_dp_get_adjust_request_pre_emphasis, 0x582f248e, "");
SYMBOL_CRC(drm_dp_get_adjust_tx_ffe_preset, 0xccf54d5e, "");
SYMBOL_CRC(drm_dp_128b132b_lane_channel_eq_done, 0xc8b6a8ae, "");
SYMBOL_CRC(drm_dp_128b132b_lane_symbol_locked, 0xd5a95eae, "");
SYMBOL_CRC(drm_dp_128b132b_eq_interlane_align_done, 0x6a4df8c5, "");
SYMBOL_CRC(drm_dp_128b132b_cds_interlane_align_done, 0x92b9835e, "");
SYMBOL_CRC(drm_dp_128b132b_link_training_failed, 0x6aacee47, "");
SYMBOL_CRC(drm_dp_read_clock_recovery_delay, 0x511279be, "");
SYMBOL_CRC(drm_dp_read_channel_eq_delay, 0xbd20cc26, "");
SYMBOL_CRC(drm_dp_128b132b_read_aux_rd_interval, 0x0f8c4460, "");
SYMBOL_CRC(drm_dp_link_train_clock_recovery_delay, 0x759d9d80, "");
SYMBOL_CRC(drm_dp_link_train_channel_eq_delay, 0x68f8ced6, "");
SYMBOL_CRC(drm_dp_phy_name, 0x5a86f411, "");
SYMBOL_CRC(drm_dp_lttpr_link_train_clock_recovery_delay, 0x1709ddcf, "");
SYMBOL_CRC(drm_dp_lttpr_link_train_channel_eq_delay, 0x09dad108, "");
SYMBOL_CRC(drm_dp_link_rate_to_bw_code, 0x26815dbc, "");
SYMBOL_CRC(drm_dp_bw_code_to_link_rate, 0x73011db0, "");
SYMBOL_CRC(drm_dp_dpcd_probe, 0x99ade407, "");
SYMBOL_CRC(drm_dp_dpcd_read, 0xbc6d9452, "");
SYMBOL_CRC(drm_dp_dpcd_write, 0x81ab6129, "");
SYMBOL_CRC(drm_dp_dpcd_read_link_status, 0x94115c54, "");
SYMBOL_CRC(drm_dp_dpcd_read_phy_link_status, 0x40edb64e, "");
SYMBOL_CRC(drm_dp_downstream_is_type, 0xc79ecffb, "");
SYMBOL_CRC(drm_dp_downstream_is_tmds, 0x68d8dce7, "");
SYMBOL_CRC(drm_dp_send_real_edid_checksum, 0x9843d784, "");
SYMBOL_CRC(drm_dp_read_dpcd_caps, 0x475a9e2b, "");
SYMBOL_CRC(drm_dp_read_downstream_info, 0xb8341da7, "");
SYMBOL_CRC(drm_dp_downstream_max_dotclock, 0x392a838b, "");
SYMBOL_CRC(drm_dp_downstream_max_tmds_clock, 0x6b53e216, "");
SYMBOL_CRC(drm_dp_downstream_min_tmds_clock, 0x63a477fb, "");
SYMBOL_CRC(drm_dp_downstream_max_bpc, 0x23961837, "");
SYMBOL_CRC(drm_dp_downstream_420_passthrough, 0xf689ad25, "");
SYMBOL_CRC(drm_dp_downstream_444_to_420_conversion, 0x2fa94ef2, "");
SYMBOL_CRC(drm_dp_downstream_rgb_to_ycbcr_conversion, 0xfb1a7a5a, "");
SYMBOL_CRC(drm_dp_downstream_mode, 0xd91ec603, "");
SYMBOL_CRC(drm_dp_downstream_id, 0x95d4682f, "");
SYMBOL_CRC(drm_dp_downstream_debug, 0x7a4db058, "");
SYMBOL_CRC(drm_dp_subconnector_type, 0xf68741fb, "");
SYMBOL_CRC(drm_dp_set_subconnector_property, 0x31f91bfc, "");
SYMBOL_CRC(drm_dp_read_sink_count_cap, 0x333411ee, "");
SYMBOL_CRC(drm_dp_read_sink_count, 0x34aaafea, "");
SYMBOL_CRC(drm_dp_remote_aux_init, 0x7f3ca761, "");
SYMBOL_CRC(drm_dp_aux_init, 0x37bb9154, "");
SYMBOL_CRC(drm_dp_aux_register, 0x7b3d904b, "");
SYMBOL_CRC(drm_dp_aux_unregister, 0x5fafd726, "");
SYMBOL_CRC(drm_dp_psr_setup_time, 0xa1fefe6a, "");
SYMBOL_CRC(drm_dp_start_crc, 0xc5e681ef, "");
SYMBOL_CRC(drm_dp_stop_crc, 0x5a0bf7e1, "");
SYMBOL_CRC(drm_dp_read_desc, 0x6998cd43, "");
SYMBOL_CRC(drm_dp_dsc_sink_max_slice_count, 0x6615069e, "");
SYMBOL_CRC(drm_dp_dsc_sink_line_buf_depth, 0x06c49551, "");
SYMBOL_CRC(drm_dp_dsc_sink_supported_input_bpcs, 0x3a8063f3, "");
SYMBOL_CRC(drm_dp_read_lttpr_common_caps, 0x15e21fa9, "");
SYMBOL_CRC(drm_dp_read_lttpr_phy_caps, 0x99f04906, "");
SYMBOL_CRC(drm_dp_lttpr_count, 0xaf267620, "");
SYMBOL_CRC(drm_dp_lttpr_max_link_rate, 0x01c4bba9, "");
SYMBOL_CRC(drm_dp_lttpr_max_lane_count, 0x1605d0ed, "");
SYMBOL_CRC(drm_dp_lttpr_voltage_swing_level_3_supported, 0x1b0a1fdc, "");
SYMBOL_CRC(drm_dp_lttpr_pre_emphasis_level_3_supported, 0x76ff6644, "");
SYMBOL_CRC(drm_dp_get_phy_test_pattern, 0x37bb91cb, "");
SYMBOL_CRC(drm_dp_set_phy_test_pattern, 0xd09dc2d9, "");
SYMBOL_CRC(drm_dp_vsc_sdp_log, 0x7a368d91, "");
SYMBOL_CRC(drm_dp_get_pcon_max_frl_bw, 0x7053fa72, "");
SYMBOL_CRC(drm_dp_pcon_frl_prepare, 0x9b17ad62, "");
SYMBOL_CRC(drm_dp_pcon_is_frl_ready, 0x4c810aa9, "");
SYMBOL_CRC(drm_dp_pcon_frl_configure_1, 0x05976abb, "");
SYMBOL_CRC(drm_dp_pcon_frl_configure_2, 0xafc79e39, "");
SYMBOL_CRC(drm_dp_pcon_reset_frl_config, 0x99f7fca6, "");
SYMBOL_CRC(drm_dp_pcon_frl_enable, 0x5780002c, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_link_active, 0xf0ae4b9d, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_link_mode, 0x96e14be0, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_frl_link_error_count, 0xb1a9b52e, "");
SYMBOL_CRC(drm_dp_pcon_enc_is_dsc_1_2, 0x59f27ed7, "");
SYMBOL_CRC(drm_dp_pcon_dsc_max_slices, 0xe5360b84, "");
SYMBOL_CRC(drm_dp_pcon_dsc_max_slice_width, 0xc020c0c1, "");
SYMBOL_CRC(drm_dp_pcon_dsc_bpp_incr, 0x4603c416, "");
SYMBOL_CRC(drm_dp_pcon_pps_default, 0x4aa170c2, "");
SYMBOL_CRC(drm_dp_pcon_pps_override_buf, 0xf23af6f4, "");
SYMBOL_CRC(drm_dp_pcon_pps_override_param, 0x27ca31f8, "");
SYMBOL_CRC(drm_dp_pcon_convert_rgb_to_ycbcr, 0xa0e0ba73, "");
SYMBOL_CRC(drm_edp_backlight_set_level, 0x714fbca2, "");
SYMBOL_CRC(drm_edp_backlight_enable, 0xdc7d3123, "");
SYMBOL_CRC(drm_edp_backlight_disable, 0x06bf1dca, "");
SYMBOL_CRC(drm_edp_backlight_init, 0x98f9a249, "");
SYMBOL_CRC(drm_panel_dp_aux_backlight, 0xe0414204, "");
SYMBOL_CRC(drm_dp_mst_get_port_malloc, 0x8d6b8b34, "");
SYMBOL_CRC(drm_dp_mst_put_port_malloc, 0xa80cf34e, "");
SYMBOL_CRC(drm_atomic_get_mst_payload_state, 0x6b7820f8, "");
SYMBOL_CRC(drm_dp_mst_connector_late_register, 0xcb37d11b, "");
SYMBOL_CRC(drm_dp_mst_connector_early_unregister, 0x16d3b2ac, "");
SYMBOL_CRC(drm_dp_send_power_updown_phy, 0xa265b99e, "");
SYMBOL_CRC(drm_dp_send_query_stream_enc_status, 0xfb57d5f0, "");
SYMBOL_CRC(drm_dp_add_payload_part1, 0x56a72369, "");
SYMBOL_CRC(drm_dp_remove_payload, 0x19c0d259, "");
SYMBOL_CRC(drm_dp_add_payload_part2, 0x959e4f02, "");
SYMBOL_CRC(drm_dp_get_vc_payload_bw, 0xd1caa75f, "");
SYMBOL_CRC(drm_dp_read_mst_cap, 0x644b5a86, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_set_mst, 0x99d2ea2f, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_suspend, 0xdb3bf5af, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_resume, 0x280b1f27, "");
SYMBOL_CRC(drm_dp_mst_hpd_irq, 0xe1a81f79, "");
SYMBOL_CRC(drm_dp_mst_detect_port, 0x018a4e40, "");
SYMBOL_CRC(drm_dp_mst_get_edid, 0xd4a804b8, "");
SYMBOL_CRC(drm_dp_atomic_find_time_slots, 0x7002bbdc, "");
SYMBOL_CRC(drm_dp_atomic_release_time_slots, 0xd7e6f85d, "");
SYMBOL_CRC(drm_dp_mst_atomic_setup_commit, 0x9ccc57b2, "");
SYMBOL_CRC(drm_dp_mst_atomic_wait_for_dependencies, 0x999de621, "");
SYMBOL_CRC(drm_dp_mst_root_conn_atomic_check, 0xabd2b236, "");
SYMBOL_CRC(drm_dp_mst_update_slots, 0xff35189d, "");
SYMBOL_CRC(drm_dp_check_act_status, 0xbd68905e, "");
SYMBOL_CRC(drm_dp_calc_pbn_mode, 0x8ca2d9e4, "");
SYMBOL_CRC(drm_dp_mst_dump_topology, 0x7eec48ac, "");
SYMBOL_CRC(drm_dp_mst_add_affected_dsc_crtcs, 0xf1bb16ab, "");
SYMBOL_CRC(drm_dp_mst_atomic_enable_dsc, 0x2a2bb426, "");
SYMBOL_CRC(drm_dp_mst_atomic_check, 0xf01e63e3, "");
SYMBOL_CRC(drm_dp_mst_topology_state_funcs, 0x90b7b08e, "");
SYMBOL_CRC(drm_atomic_get_mst_topology_state, 0x014f6463, "");
SYMBOL_CRC(drm_atomic_get_new_mst_topology_state, 0x35d4b56d, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_init, 0x82d165a5, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_destroy, 0x1b7bd316, "");
SYMBOL_CRC(drm_dp_mst_dsc_aux_for_port, 0xe02c97a9, "");
SYMBOL_CRC(drm_dsc_dp_pps_header_init, 0x648d953b, "");
SYMBOL_CRC(drm_dsc_dp_rc_buffer_size, 0x1a5bf3ca, "");
SYMBOL_CRC(drm_dsc_pps_payload_pack, 0x58d8fcaa, "");
SYMBOL_CRC(drm_dsc_compute_rc_parameters, 0xfe12bcb9, "");
SYMBOL_CRC(drm_hdcp_check_ksvs_revoked, 0x1e8ac2f6, "_gpl");
SYMBOL_CRC(drm_connector_attach_content_protection_property, 0x91f31500, "");
SYMBOL_CRC(drm_hdcp_update_content_protection, 0x028a0559, "");
SYMBOL_CRC(drm_hdmi_infoframe_set_hdr_metadata, 0xf3c240e7, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_colorimetry, 0xbc7c3c86, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_bars, 0x6a21492b, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_content_type, 0xc447f644, "");
SYMBOL_CRC(drm_scdc_read, 0x9a8252e0, "");
SYMBOL_CRC(drm_scdc_write, 0x75864ed5, "");
SYMBOL_CRC(drm_scdc_get_scrambling_status, 0x00ec1289, "");
SYMBOL_CRC(drm_scdc_set_scrambling, 0xc3adc185, "");
SYMBOL_CRC(drm_scdc_set_high_tmds_clock_ratio, 0x3a2ba9d7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2d9c7d46, "drm_crtc_add_crc_entry" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2f22cb4, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x8911482c, "drm_atomic_get_private_obj_state" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x1952790e, "finish_wait" },
	{ 0x85da8388, "drm_atomic_private_obj_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7edf470b, "drm_edid_duplicate" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0xceb897bf, "drm_connector_unregister" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x689ada78, "drm_mode_object_put" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x164f76e, "request_firmware_direct" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x69353664, "__drm_debug" },
	{ 0x81c9e3a9, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2126163b, "drm_atomic_private_obj_fini" },
	{ 0xa916b694, "strnlen" },
	{ 0x5be7edbe, "drm_property_create_enum" },
	{ 0x64547775, "drm_dev_printk" },
	{ 0xe3e57b96, "i2c_del_adapter" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xc8fb3ca7, "drm_atomic_get_crtc_state" },
	{ 0x3d63b43f, "drm_crtc_wait_one_vblank" },
	{ 0xaed9935d, "drm_modeset_lock" },
	{ 0xe25a391b, "drm_modeset_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x1aa95fc7, "drm_modeset_lock_single_interruptible" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x6f7b24b7, "drm_crtc_commit_wait" },
	{ 0xa0b2faad, "drm_atomic_get_new_private_obj_state" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x236d9514, "drm_object_attach_property" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xea593f6, "hdmi_drm_infoframe_init" },
	{ 0x4600ffc8, "__drm_dev_dbg" },
	{ 0xc772e8c, "drm_sysfs_connector_status_event" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe9ce5474, "mutex_trylock" },
	{ 0xdae90bd2, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa248afde, "drm_detect_monitor_audio" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2a8de91f, "drm_object_property_set_value" },
	{ 0x28779e52, "drm_printf" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x2b878fb1, "drm_kms_helper_hotplug_event" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x1aa2b145, "i2c_transfer" },
	{ 0x907e1b2d, "drm_display_mode_from_cea_vic" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xbb498b4e, "_dev_printk" },
	{ 0x76776184, "mutex_destroy" },
	{ 0x257b21f1, "drm_get_edid" },
	{ 0x259e7f18, "devm_backlight_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xbf5d0761, "drm_atomic_get_connector_state" },
	{ 0x7c545285, "drm_edid_get_monitor_name" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "372DE0F71D74FD31F7391C7");
