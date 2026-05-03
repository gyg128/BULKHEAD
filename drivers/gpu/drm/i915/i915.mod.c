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

SYMBOL_CRC(i915_read_mch_val, 0x500858b9, "_gpl");
SYMBOL_CRC(i915_gpu_raise, 0x08a7896d, "_gpl");
SYMBOL_CRC(i915_gpu_lower, 0x402468e9, "_gpl");
SYMBOL_CRC(i915_gpu_busy, 0x05876c69, "_gpl");
SYMBOL_CRC(i915_gpu_turbo_disable, 0xe7237b0b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x22bd9a11, "vga_switcheroo_client_probe_defer" },
	{ 0xb0b0fde9, "ttm_bo_vm_dummy_page" },
	{ 0x842245ff, "drm_mode_is_420_also" },
	{ 0x392a838b, "drm_dp_downstream_max_dotclock" },
	{ 0xc59e19c9, "xa_erase" },
	{ 0x99d2ea2f, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0x24c44a11, "drm_atomic_state_init" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x40b48d8a, "drm_atomic_set_fb_for_plane" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0x2349b131, "sysfs_create_link" },
	{ 0xcad7a969, "drm_is_current_master" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7a4db058, "drm_dp_downstream_debug" },
	{ 0xeec2d659, "drm_atomic_helper_setup_commit" },
	{ 0x5fec7683, "drm_modeset_lock_all_ctx" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6515e72b, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0x8e6914e4, "pwm_apply_state" },
	{ 0x6542c446, "relay_file_operations" },
	{ 0x479979a9, "drm_fb_helper_setcmap" },
	{ 0x5b456a8b, "dma_fence_end_signalling" },
	{ 0x805e9404, "drm_atomic_helper_update_plane" },
	{ 0xa1054e9f, "dma_resv_iter_first" },
	{ 0x999e8297, "vfree" },
	{ 0xbc7c3c86, "drm_hdmi_avi_infoframe_colorimetry" },
	{ 0xcb37d11b, "drm_dp_mst_connector_late_register" },
	{ 0x715ac5e, "del_timer" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0xbf4d1dd5, "drm_crtc_vblank_reset" },
	{ 0x1bc689a1, "drm_atomic_helper_disable_all" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x7259ea3c, "drm_atomic_helper_wait_for_dependencies" },
	{ 0x4ef6978d, "flush_delayed_work" },
	{ 0x5aead210, "dma_resv_init" },
	{ 0x1a36d5ab, "drm_crtc_handle_vblank" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x76c7ae3e, "anon_inode_getfile" },
	{ 0x9cc79afc, "drm_mode_create_aspect_ratio_property" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x17a458b3, "dma_resv_reserve_fences" },
	{ 0x2a0a0d8c, "dma_fence_begin_signalling" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x9a8252e0, "drm_scdc_read" },
	{ 0x257b21f1, "drm_get_edid" },
	{ 0xe259f8a1, "pinctrl_lookup_state" },
	{ 0x36d6e507, "drm_mode_duplicate" },
	{ 0x78f37380, "drm_plane_create_rotation_property" },
	{ 0xbd37ecca, "drm_property_blob_put" },
	{ 0x96c7d7e, "drm_connector_attach_encoder" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x2edac134, "ttm_resource_init" },
	{ 0x89773046, "drm_connector_update_privacy_screen" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0xfda9a3f1, "intel_gmch_enable_gtt" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x9af9ed38, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0xe3ff2c41, "get_random_u64" },
	{ 0x6b5ae1f3, "dma_fence_signal_locked" },
	{ 0x940c266, "drm_atomic_set_mode_for_crtc" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0xa7675aeb, "drm_atomic_set_crtc_for_connector" },
	{ 0xa2b773c6, "drm_crtc_from_index" },
	{ 0x575b05ea, "hrtimer_try_to_cancel" },
	{ 0x9b46a22a, "drm_fb_helper_unregister_fbi" },
	{ 0xf156fcb, "drm_vma_offset_remove" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7fefdd4, "kmem_cache_free" },
	{ 0x87b8798d, "sg_next" },
	{ 0x13110488, "ww_mutex_unlock" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x31f91bfc, "drm_dp_set_subconnector_property" },
	{ 0xf01e63e3, "drm_dp_mst_atomic_check" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8e180985, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0x1b7bd316, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x2d9e9583, "drm_buddy_print" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7068ce66, "ttm_bo_vm_reserve" },
	{ 0xcbc46888, "zap_vma_ptes" },
	{ 0xf2d8e7da, "drm_modeset_unlock_all" },
	{ 0x57e2ac67, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x2fa94ef2, "drm_dp_downstream_444_to_420_conversion" },
	{ 0x8d7392d5, "acpi_dev_get_resources" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf51a45d6, "perf_pmu_migrate_context" },
	{ 0x4bbae65a, "__tracepoint_mmap_lock_released" },
	{ 0x35d3af83, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa174ad2c, "pwm_put" },
	{ 0xcb970751, "stop_machine" },
	{ 0x5be7edbe, "drm_property_create_enum" },
	{ 0x99fb1220, "sync_file_create" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96848186, "scnprintf" },
	{ 0xed30e27c, "drm_fb_helper_set_suspend" },
	{ 0x7c19dae7, "generic_file_llseek" },
	{ 0xf3ab7ce2, "dma_map_sg_attrs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x871ab41a, "drm_rect_intersect" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x598a43a4, "drm_fb_helper_fini" },
	{ 0x938b0615, "drm_syncobj_create" },
	{ 0xb110bb51, "pci_disable_device" },
	{ 0x6ce04a45, "kmem_cache_destroy" },
	{ 0xa7d2444b, "bpf_trace_run5" },
	{ 0xc8fb3ca7, "drm_atomic_get_crtc_state" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x30273cb9, "vga_get" },
	{ 0x3d63b43f, "drm_crtc_wait_one_vblank" },
	{ 0xcba6cf56, "dma_fence_add_callback" },
	{ 0xb274f5b0, "radix_tree_delete" },
	{ 0xabc9d2e2, "dma_fence_signal" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0x2d393f48, "intel_soc_pmic_exec_mipi_pmic_seq_element" },
	{ 0x9dc7ad80, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b269403, "drm_vma_node_is_allowed" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0xa41e8811, "dma_fence_remove_callback" },
	{ 0x7053fa72, "drm_dp_get_pcon_max_frl_bw" },
	{ 0x3de81a47, "dma_resv_iter_next" },
	{ 0x48d27375, "__bitmap_intersects" },
	{ 0xaed9935d, "drm_modeset_lock" },
	{ 0x6fa8a2f8, "dma_map_sgtable" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3e755bf, "bpf_trace_run4" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x66e12100, "drm_prime_gem_destroy" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x9ad7a582, "iosf_mbi_assert_punit_acquired" },
	{ 0xea7bbde7, "component_add_typed" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc07504e8, "reservation_ww_class" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf30965ac, "iosf_mbi_register_pmic_bus_access_notifier" },
	{ 0xa095c20f, "mipi_dsi_dcs_write_buffer" },
	{ 0xbb91671e, "__folio_put" },
	{ 0x8677d6eb, "lock_unpin_lock" },
	{ 0x13aae0e8, "drm_kms_helper_connector_hotplug_event" },
	{ 0xbd20cc26, "drm_dp_read_channel_eq_delay" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0xcf203250, "vm_mmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd2820b5b, "__devm_request_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x87df32bb, "fwnode_handle_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7991ed2, "dma_resv_test_signaled" },
	{ 0x9ccc57b2, "drm_dp_mst_atomic_setup_commit" },
	{ 0x9b95c885, "drm_mode_match" },
	{ 0x7087fb47, "get_fs_type" },
	{ 0x44a638, "drm_crtc_vblank_on" },
	{ 0x5c700806, "unregister_sysctl_table" },
	{ 0x7c56e19b, "shmem_file_setup" },
	{ 0x7aaaff8c, "unpin_user_pages" },
	{ 0x1da345de, "synchronize_srcu_expedited" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x77bc13a0, "strim" },
	{ 0x2ce3ce2d, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x1556d355, "dma_fence_wait_timeout" },
	{ 0x99f04906, "drm_dp_read_lttpr_phy_caps" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x50e331ea, "vma_set_file" },
	{ 0x1fb90735, "dma_resv_iter_next_unlocked" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0x3d56b3f6, "backlight_device_get_by_name" },
	{ 0x65d652c2, "perf_pmu_unregister" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x739e4541, "cleanup_srcu_struct" },
	{ 0xfb578fc5, "memset" },
	{ 0xece784c2, "rb_first" },
	{ 0xcd035937, "idr_get_next" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0x28a9cce0, "pin_user_pages_fast" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x1c4bba9, "drm_dp_lttpr_max_link_rate" },
	{ 0x21a82188, "alloc_pages" },
	{ 0xdd7b34c2, "perf_event_sysfs_show" },
	{ 0x18f33ce7, "drm_vma_offset_lookup_locked" },
	{ 0x78490e50, "cpufreq_cpu_put" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x5780002c, "drm_dp_pcon_frl_enable" },
	{ 0xb00c911e, "mmu_interval_notifier_insert" },
	{ 0x38a4f93d, "single_open" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x97de2b83, "debug_locks_silent" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x68ff69db, "vga_switcheroo_register_client" },
	{ 0x9b17ad62, "drm_dp_pcon_frl_prepare" },
	{ 0xb524851e, "device_remove_bin_file" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0xb4018726, "drm_crtc_vblank_restore" },
	{ 0x1ebf6c2a, "pci_power_names" },
	{ 0x6e583dad, "gpiod_set_value_cansleep" },
	{ 0x82226c53, "pinctrl_unregister_mappings" },
	{ 0x497ca1a3, "idr_for_each" },
	{ 0x9179be39, "fwnode_handle_get" },
	{ 0xa61b5310, "__drm_atomic_helper_connector_reset" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x3a8063f3, "drm_dp_dsc_sink_supported_input_bpcs" },
	{ 0x5c8942ba, "request_firmware" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x9b86a879, "drm_plane_create_blend_mode_property" },
	{ 0x25de0e48, "hrtimer_init" },
	{ 0xa9094fbb, "ttm_bo_init_reserved" },
	{ 0xafdd0188, "drm_gem_prime_handle_to_fd" },
	{ 0xc2e64204, "drm_connector_attach_vrr_capable_property" },
	{ 0x188128e, "drm_atomic_commit" },
	{ 0x6b53e216, "drm_dp_downstream_max_tmds_clock" },
	{ 0x1f8e561f, "prepare_to_wait" },
	{ 0xd8b2e188, "register_shrinker" },
	{ 0x5e9859e6, "drm_lspcon_set_mode" },
	{ 0xf863feb6, "try_wait_for_completion" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x1a16c928, "vga_switcheroo_client_fb_set" },
	{ 0x2c8c6c76, "pci_map_rom" },
	{ 0x9c67677b, "relay_close" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x2e85002, "i2c_acpi_find_adapter_by_handle" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x5875d957, "drm_mode_crtc_set_gamma_size" },
	{ 0x3b6cb18, "__var_waitqueue" },
	{ 0x5e1978dd, "ttm_bo_vm_access" },
	{ 0x156d1d9c, "drm_fb_helper_alloc_fbi" },
	{ 0xe4c48923, "xa_find" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x7893ffaf, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xabd2b236, "drm_dp_mst_root_conn_atomic_check" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0xe9a5e67f, "intel_graphics_stolen_res" },
	{ 0x5a921311, "strncmp" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5fb4416a, "drm_gem_free_mmap_offset" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x5f7985a5, "drm_mm_scan_remove_block" },
	{ 0x2fff8b9e, "page_mapped" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x49e96999, "cond_synchronize_rcu" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0xa66400cf, "dma_buf_put" },
	{ 0xe01913f0, "ww_mutex_trylock" },
	{ 0x1aa95fc7, "drm_modeset_lock_single_interruptible" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0x869337d3, "drm_mode_create_dp_colorspace_property" },
	{ 0x66987da4, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x4942e732, "drm_atomic_helper_prepare_planes" },
	{ 0x67ddae9b, "_atomic_dec_and_lock_irqsave" },
	{ 0x7ed58c8c, "sysfs_merge_group" },
	{ 0x4e99805b, "drm_open" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0xd1aaf8d4, "acpi_video_get_backlight_type" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x84c1f2a7, "acpi_find_child_device" },
	{ 0xb2397060, "dma_resv_wait_timeout" },
	{ 0x81d585eb, "shmem_read_mapping_page_gfp" },
	{ 0x8d6b8b34, "drm_dp_mst_get_port_malloc" },
	{ 0x800473f, "__cond_resched" },
	{ 0x5a290250, "hdmi_drm_infoframe_pack_only" },
	{ 0xfb1890f7, "drm_gem_prime_fd_to_handle" },
	{ 0x12b824a2, "up_read" },
	{ 0x9f984513, "strrchr" },
	{ 0xc3adc185, "drm_scdc_set_scrambling" },
	{ 0x415269cf, "mas_find" },
	{ 0x6797d568, "intel_gmch_gtt_get" },
	{ 0xcdd1f1e8, "ttm_tt_init" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0x6888b4cf, "drm_atomic_helper_disable_plane" },
	{ 0xb999182e, "drm_crtc_vblank_off" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0xcc23002a, "hdmi_infoframe_pack_only" },
	{ 0x9ac65f17, "drm_atomic_add_affected_connectors" },
	{ 0x107624b1, "mipi_dsi_dcs_nop" },
	{ 0x1bb1702a, "up_write" },
	{ 0x959e4f02, "drm_dp_add_payload_part2" },
	{ 0x56a72369, "drm_dp_add_payload_part1" },
	{ 0x8823ef75, "intel_gmch_gtt_insert_page" },
	{ 0xd2b0a37a, "pci_unmap_rom" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x81fd654a, "dma_buf_attach" },
	{ 0x9d1f73df, "ttm_resource_fini" },
	{ 0x94115c54, "drm_dp_dpcd_read_link_status" },
	{ 0xa1718393, "__pagevec_release" },
	{ 0x8ad5df02, "cpufreq_cpu_get" },
	{ 0xfab054b, "ttm_bo_eviction_valuable" },
	{ 0xa598626d, "drm_dev_put" },
	{ 0x3853033e, "pinctrl_select_state" },
	{ 0x1605d0ed, "drm_dp_lttpr_max_lane_count" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x686ae80c, "relay_switch_subbuf" },
	{ 0x2d3bed30, "sysfs_create_file_ns" },
	{ 0xe2acc200, "__drm_atomic_helper_plane_state_reset" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x345629dc, "__SCK__tp_func_dma_fence_signaled" },
	{ 0x4b5e3a47, "__get_user_nocheck_1" },
	{ 0x96ea4381, "hdmi_infoframe_log" },
	{ 0x634cace2, "drm_helper_mode_fill_fb_struct" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf0ae4b9d, "drm_dp_pcon_hdmi_link_active" },
	{ 0xed56cdfa, "vga_switcheroo_unregister_client" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0x71cd5960, "drm_mode_object_get" },
	{ 0x4600ffc8, "__drm_dev_dbg" },
	{ 0xf75aa19d, "drm_fb_helper_pan_display" },
	{ 0xd91ec603, "drm_dp_downstream_mode" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9bf7dd62, "drm_connector_list_iter_end" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x58538aeb, "xa_destroy" },
	{ 0xbb0a80d8, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x3fbb6158, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x47c4508f, "drm_invalid_op" },
	{ 0xdfc5c11c, "vfs_kern_mount" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x22d53779, "drm_buddy_free_list" },
	{ 0x54eb443, "drm_helper_hpd_irq_event" },
	{ 0xcc46293b, "cpu_latency_qos_remove_request" },
	{ 0x689ada78, "drm_mode_object_put" },
	{ 0x1e8ac2f6, "drm_hdcp_check_ksvs_revoked" },
	{ 0x28779e52, "drm_printf" },
	{ 0xb14bce72, "idr_remove" },
	{ 0x567b6330, "drm_crtc_arm_vblank_event" },
	{ 0x7e9d9e25, "drm_modeset_backoff" },
	{ 0x263c3152, "bcmp" },
	{ 0xbbbc544b, "__tracepoint_mmap_lock_start_locking" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0xa8ce81ce, "drm_gem_handle_create" },
	{ 0x9f44c898, "drm_buddy_init" },
	{ 0x37899f47, "drm_poll" },
	{ 0xf045e883, "pci_bus_read_config_byte" },
	{ 0x149416, "drm_atomic_helper_commit_duplicated_state" },
	{ 0x8ca2d9e4, "drm_dp_calc_pbn_mode" },
	{ 0x56badf19, "ttm_pool_alloc" },
	{ 0x21be37e1, "hdmi_avi_infoframe_check" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0x7f3fd4ff, "dma_resv_fini" },
	{ 0xa70cb1b6, "drm_fb_helper_prepare" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x855ed5e9, "irq_work_sync" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xc045f7a5, "drm_property_replace_blob" },
	{ 0xdc7d3123, "drm_edp_backlight_enable" },
	{ 0x51945430, "sync_file_get_fence" },
	{ 0x35d4b56d, "drm_atomic_get_new_mst_topology_state" },
	{ 0x6c75321b, "ttm_bo_validate" },
	{ 0x3ac0a8e9, "__cpuhp_state_add_instance" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0x6998cd43, "drm_dp_read_desc" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0x460cf483, "radix_tree_lookup" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x32e923af, "drm_dev_get" },
	{ 0xad130f6f, "ttm_tt_fini" },
	{ 0x4dfb5955, "drm_fb_helper_check_var" },
	{ 0x9b28df57, "ttm_resource_free" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3af1b767, "relay_flush" },
	{ 0xc5e74216, "release_resource" },
	{ 0x33354027, "seq_putc" },
	{ 0x828a2049, "drm_ioctl_kernel" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x2e7a17d4, "vmap_pfn" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xdae90bd2, "i2c_add_adapter" },
	{ 0xc8fe2422, "drm_syncobj_add_point" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xb0b05ff5, "drm_clflush_sg" },
	{ 0xa0e0ba73, "drm_dp_pcon_convert_rgb_to_ycbcr" },
	{ 0xb84727f3, "drm_helper_move_panel_connectors_to_head" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x7d207d35, "unlock_page" },
	{ 0xb8565dfb, "pci_get_class" },
	{ 0xa812b0b9, "debugfs_create_file_unsafe" },
	{ 0xccf54d5e, "drm_dp_get_adjust_tx_ffe_preset" },
	{ 0xe0a4baf9, "ww_mutex_lock_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x211fcf87, "put_device" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0x999de621, "drm_dp_mst_atomic_wait_for_dependencies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb4250b27, "ttm_resource_manager_init" },
	{ 0xb3bfeb3, "drm_noop" },
	{ 0x16d3b2ac, "drm_dp_mst_connector_early_unregister" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0xc631580a, "console_unlock" },
	{ 0xb1520ce2, "drm_vblank_work_schedule" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x349cba85, "strchr" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xc5fa421f, "device_get_next_child_node" },
	{ 0xcf785fc, "dma_fence_init" },
	{ 0x823c19ea, "iosf_mbi_unregister_pmic_bus_access_notifier_unlocked" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0x37fd63eb, "drm_fb_helper_debug_leave" },
	{ 0x5e3f4008, "drm_atomic_get_plane_state" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xafdd8c43, "drm_atomic_helper_page_flip" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x1aaad040, "drm_dp_dual_mode_max_tmds_clock" },
	{ 0x1c21c478, "gpiod_set_value" },
	{ 0x61de2bf2, "pci_d3cold_enable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x34d80bc4, "drm_connector_set_path_property" },
	{ 0x69d908c7, "dma_resv_iter_first_unlocked" },
	{ 0xcca81f00, "register_sysctl" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x70a21ce, "sysfs_remove_bin_file" },
	{ 0xfa696339, "kobject_init" },
	{ 0x6df31390, "intel_gmch_gtt_clear_range" },
	{ 0xb053adda, "drm_rect_rotate" },
	{ 0x6c932a66, "init_uts_ns" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x3b45e8ab, "dma_fence_enable_sw_signaling" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x7b3d904b, "drm_dp_aux_register" },
	{ 0xe05ee637, "relay_buf_full" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xf51306ec, "drm_framebuffer_init" },
	{ 0xa178d36b, "ww_mutex_lock" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xa7308915, "drm_color_lut_check" },
	{ 0xa248afde, "drm_detect_monitor_audio" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x4b3b007b, "pci_rebar_get_possible_sizes" },
	{ 0x1395cc3d, "drm_mode_probed_add" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x592c4841, "devm_gpiod_get_index" },
	{ 0xf20878ad, "i2c_get_adapter" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0x29eba37f, "current_is_async" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x87706d4e, "__put_user_nocheck_8" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa0644749, "devm_pinctrl_get" },
	{ 0x40d04664, "console_trylock" },
	{ 0xe0b7f0d1, "drm_connector_set_link_status_property" },
	{ 0x77358855, "iomem_resource" },
	{ 0x750c2a0a, "dma_buf_unmap_attachment" },
	{ 0xcb7baabb, "mipi_dsi_picture_parameter_set" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x13521664, "drm_atomic_helper_cleanup_planes" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x27ca31f8, "drm_dp_pcon_pps_override_param" },
	{ 0x45b61916, "acpi_video_register_backlight" },
	{ 0xff748b76, "drm_buddy_alloc_blocks" },
	{ 0x90f5403e, "drm_connector_attach_scaling_mode_property" },
	{ 0x2d4c773a, "hdmi_spd_infoframe_init" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2a543966, "_raw_spin_trylock" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x68b55364, "drm_calc_timestamping_constants" },
	{ 0xa9bff41d, "check_move_unevictable_pages" },
	{ 0xa72f765, "drm_clflush_virt_range" },
	{ 0xcf6eb517, "radix_tree_iter_delete" },
	{ 0xb13d6576, "queue_rcu_work" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c69e900, "drm_connector_cleanup" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x94bad0b4, "ttm_bo_move_accel_cleanup" },
	{ 0x7f30c988, "drm_helper_probe_single_connector_modes" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x1b0a1fdc, "drm_dp_lttpr_voltage_swing_level_3_supported" },
	{ 0x89ccaf99, "sysfs_create_bin_file" },
	{ 0xaa571ccb, "drm_connector_attach_max_bpc_property" },
	{ 0x2247854b, "sysfs_create_files" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xffcd7f49, "iosf_mbi_punit_acquire" },
	{ 0x1a0a801a, "default_llseek" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9a263a59, "drm_property_add_enum" },
	{ 0x5bb6a100, "component_del" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x511279be, "drm_dp_read_clock_recovery_delay" },
	{ 0xe3e57b96, "i2c_del_adapter" },
	{ 0xfcd1819a, "hdmi_spd_infoframe_check" },
	{ 0x79901831, "drm_connector_attach_content_type_property" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xceb897bf, "drm_connector_unregister" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x84ce055a, "drmm_kmalloc" },
	{ 0xdc5b4ec9, "ttm_bo_wait" },
	{ 0x220131b4, "drm_crtc_set_max_vblank_count" },
	{ 0xdeb1a952, "firmware_request_nowarn" },
	{ 0x614e08d, "drm_atomic_helper_shutdown" },
	{ 0x301304c2, "__get_user_nocheck_8" },
	{ 0xf6a0e018, "drm_crtc_vblank_helper_get_vblank_timestamp_internal" },
	{ 0xaf976845, "pid_task" },
	{ 0x689ca65e, "mipi_dsi_dcs_write" },
	{ 0x53edfdd4, "pci_bus_alloc_resource" },
	{ 0x2f9e82e9, "drm_plane_create_alpha_property" },
	{ 0x97e3b149, "ttm_bo_put" },
	{ 0x34aaafea, "drm_dp_read_sink_count" },
	{ 0x40edb64e, "drm_dp_dpcd_read_phy_link_status" },
	{ 0xf03e570f, "down_read" },
	{ 0x4a546d56, "device_link_remove" },
	{ 0xe5360b84, "drm_dp_pcon_dsc_max_slices" },
	{ 0x37bb9154, "drm_dp_aux_init" },
	{ 0x6ad43c0f, "backlight_device_unregister" },
	{ 0xf7b274d2, "fput" },
	{ 0xc9368a13, "drm_debugfs_create_files" },
	{ 0xf2ed0f0d, "__init_srcu_struct" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x4ee2fcee, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x5976abb, "drm_dp_pcon_frl_configure_1" },
	{ 0xbf39f826, "relay_open" },
	{ 0x5407ae9e, "drm_dp_get_dual_mode_type_name" },
	{ 0xfb237447, "drm_vblank_work_flush" },
	{ 0x21ba8fe0, "drm_connector_init" },
	{ 0x2a962499, "drm_mm_scan_init_with_range" },
	{ 0x2a116f0e, "hrtimer_active" },
	{ 0x994f1fe2, "drm_plane_create_scaling_filter_property" },
	{ 0xfab2812d, "__devm_drm_dev_alloc" },
	{ 0xafc79e39, "drm_dp_pcon_frl_configure_2" },
	{ 0x2e03e419, "kobject_create_and_add" },
	{ 0xf380f4b1, "i2c_bit_algo" },
	{ 0xd4ad7de2, "drm_ioctl" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0x96b589f0, "mipi_dsi_set_maximum_return_packet_size" },
	{ 0x6615069e, "drm_dp_dsc_sink_max_slice_count" },
	{ 0x5e4acfe0, "drm_any_plane_has_format" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0x49ce04c2, "drm_vblank_init" },
	{ 0xe9ce5474, "mutex_trylock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x997e90cf, "intel_gmch_gtt_insert_sg_entries" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x7de51035, "drm_atomic_state_default_release" },
	{ 0xef6c3f70, "round_jiffies_up_relative" },
	{ 0xcb1e07c7, "__xa_alloc_cyclic" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0x17e6b85a, "__mmap_lock_do_trace_start_locking" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x568c03e1, "irq_work_queue" },
	{ 0xd09dc2d9, "drm_dp_set_phy_test_pattern" },
	{ 0xdb4a8f82, "drm_connector_set_panel_orientation_with_quirk" },
	{ 0x107742a9, "drm_get_subpixel_order_name" },
	{ 0xd2423f76, "i2c_acpi_get_i2c_resource" },
	{ 0xaf267620, "drm_dp_lttpr_count" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xad50a8bd, "radix_tree_next_chunk" },
	{ 0xdb3bf5af, "drm_dp_mst_topology_mgr_suspend" },
	{ 0x9e9bcb43, "drm_crtc_create_scaling_filter_property" },
	{ 0xf6687cb9, "wake_up_process" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc020c0c1, "drm_dp_pcon_dsc_max_slice_width" },
	{ 0xdf101b3, "idr_find" },
	{ 0x99fd20aa, "drm_rect_clip_scaled" },
	{ 0xa105b2d4, "drm_vblank_work_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a368d91, "drm_dp_vsc_sdp_log" },
	{ 0x220c3889, "mmu_interval_read_begin" },
	{ 0x3f007cc0, "vga_client_register" },
	{ 0xc30d71cc, "drm_buddy_block_print" },
	{ 0xbf5d0761, "drm_atomic_get_connector_state" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0xcdb99cc9, "drm_mode_init" },
	{ 0x7a81541b, "async_synchronize_cookie" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x644b5a86, "drm_dp_read_mst_cap" },
	{ 0xf689ad25, "drm_dp_downstream_420_passthrough" },
	{ 0x68fa4016, "shmem_truncate_range" },
	{ 0x18c9486b, "mark_page_accessed" },
	{ 0xb64e150b, "dma_fence_chain_walk" },
	{ 0xa0a44085, "drm_kms_helper_poll_init" },
	{ 0xb1a9b52e, "drm_dp_pcon_hdmi_frl_link_error_count" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0xf4d98852, "vga_put" },
	{ 0xef2827e6, "__xa_alloc" },
	{ 0x9c00382c, "hrtimer_forward" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0x90675e11, "drm_atomic_helper_check_modeset" },
	{ 0x6ea2d3c0, "drm_fb_helper_ioctl" },
	{ 0x575face7, "ttm_bo_move_sync_cleanup" },
	{ 0x7af55cf4, "dma_fence_array_ops" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0x873c4aab, "pci_bus_read_config_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4279d75b, "drm_vma_node_revoke" },
	{ 0xea4901a5, "__put_devmap_managed_page_refs" },
	{ 0xc20bb5d5, "drm_modeset_acquire_fini" },
	{ 0xedf1d4b6, "_raw_spin_lock_nested" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xf1b6b728, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x38eaa5e6, "vmap" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x92b9835e, "drm_dp_128b132b_cds_interlane_align_done" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x7002bbdc, "drm_dp_atomic_find_time_slots" },
	{ 0x24334f25, "backlight_device_register" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xef76d976, "find_vma" },
	{ 0x2c1a9d62, "irq_set_chip_and_handler_name" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x4ffffc01, "drm_atomic_set_crtc_for_plane" },
	{ 0x13aa02d5, "drm_crtc_send_vblank_event" },
	{ 0xb1515cbe, "unmap_mapping_range" },
	{ 0xf3e1c04d, "kobject_init_and_add" },
	{ 0x45dd008b, "drm_fb_helper_fill_info" },
	{ 0x23961837, "drm_dp_downstream_max_bpc" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xfde248f5, "__drm_atomic_helper_crtc_state_reset" },
	{ 0x76fa3172, "ttm_resource_manager_debug" },
	{ 0xb526a680, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0x7eec48ac, "drm_dp_mst_dump_topology" },
	{ 0xdfa4f8f9, "ttm_tt_populate" },
	{ 0x47dfa1a3, "drm_gem_dmabuf_release" },
	{ 0xdfda77df, "drm_lspcon_get_mode" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x51d37445, "seq_read" },
	{ 0xc57c238a, "pci_save_state" },
	{ 0xfc068282, "drm_dev_enter" },
	{ 0xde80cd09, "ioremap" },
	{ 0x3f22b0d4, "xa_load" },
	{ 0x7ad1ded1, "pinctrl_register_mappings" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0xecf8bf0f, "drm_property_create" },
	{ 0xea354c85, "dma_fence_array_first" },
	{ 0xfd85395c, "cpu_latency_qos_request_active" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xa265b99e, "drm_dp_send_power_updown_phy" },
	{ 0x501eb69c, "drm_dev_unplug" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe397244e, "kernel_param_unlock" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xbb4ef5b6, "drm_clflush_pages" },
	{ 0x11d89109, "drm_gem_dmabuf_export" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x7c48d831, "unregister_shrinker" },
	{ 0xa1fefe6a, "drm_dp_psr_setup_time" },
	{ 0xc575c737, "debug_locks_off" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x2d9c7d46, "drm_crtc_add_crc_entry" },
	{ 0xbb8e169a, "vga_switcheroo_handler_flags" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x391c47e2, "__xa_store" },
	{ 0xf8ba36e0, "dma_unmap_sg_attrs" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xc2fab212, "drm_mode_config_cleanup" },
	{ 0x83395c1a, "_raw_write_lock" },
	{ 0xa9462f69, "_raw_read_lock" },
	{ 0x7651ceac, "ttm_kmap_iter_tt_init" },
	{ 0x257f2892, "gpiod_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x817d55d1, "drm_gem_unmap_dma_buf" },
	{ 0xc39ec2ae, "down_write_killable" },
	{ 0x640e5d20, "intel_gmch_probe" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xfe56ad31, "drm_encoder_cleanup" },
	{ 0x6f797d7d, "drm_connector_attach_colorspace_property" },
	{ 0x1c8d8d56, "kobject_uevent_env" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x1ef18614, "pci_d3cold_disable" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x53eacc8c, "drm_helper_probe_detect" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc5e68ab9, "drm_property_create_blob" },
	{ 0x19c0d259, "drm_dp_remove_payload" },
	{ 0x236d9514, "drm_object_attach_property" },
	{ 0x8b2173db, "drm_gem_prime_mmap" },
	{ 0xa0d3456d, "nr_swap_pages" },
	{ 0x86be4af0, "__srcu_read_lock" },
	{ 0x80317290, "drm_mode_create_tv_properties" },
	{ 0x81ab6129, "drm_dp_dpcd_write" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0xcb3d4877, "drm_fb_helper_initial_config" },
	{ 0xe091c977, "list_sort" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xd31327cf, "drm_connector_list_iter_begin" },
	{ 0xc5b59dc6, "drm_vma_offset_add" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9af0a615, "lock_release" },
	{ 0xbc6d9452, "drm_dp_dpcd_read" },
	{ 0x3b039b6c, "drm_atomic_helper_commit_hw_done" },
	{ 0xfd8ef4a8, "set_page_dirty" },
	{ 0x26446bb3, "dma_fence_free" },
	{ 0xbab23ad0, "drm_mode_is_420_only" },
	{ 0x88bbb545, "handle_simple_irq" },
	{ 0x6b7820f8, "drm_atomic_get_mst_payload_state" },
	{ 0xdeb9a6d3, "pci_set_power_state" },
	{ 0x1ba5da41, "drm_plane_enable_fb_damage_clips" },
	{ 0xc8b6a8ae, "drm_dp_128b132b_lane_channel_eq_done" },
	{ 0x651a4139, "test_taint" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8b22f5cb, "simple_attr_write" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0x5a7874e4, "ttm_kmap_iter_iomap_init" },
	{ 0x7edf470b, "drm_edid_duplicate" },
	{ 0x5cdfa44d, "apply_to_page_range" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc8edcc95, "fd_install" },
	{ 0x1a5bf3ca, "drm_dsc_dp_rc_buffer_size" },
	{ 0xb3011acd, "drm_probe_ddc" },
	{ 0x76307547, "drm_property_blob_get" },
	{ 0xa23ed958, "drm_connector_init_with_ddc" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x76ff6644, "drm_dp_lttpr_pre_emphasis_level_3_supported" },
	{ 0x165481e3, "drm_universal_plane_init" },
	{ 0x8ec751ca, "drm_crtc_enable_color_mgmt" },
	{ 0xd4a804b8, "drm_dp_mst_get_edid" },
	{ 0x82d165a5, "drm_dp_mst_topology_mgr_init" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xbba44474, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xd9485bd8, "pagecache_get_page" },
	{ 0x2d50570f, "drm_rect_calc_hscale" },
	{ 0x820bcb24, "drm_atomic_state_default_clear" },
	{ 0xcb83bddd, "drm_fb_helper_cfb_fillrect" },
	{ 0x7bf8c44b, "put_pid" },
	{ 0x230a8c0d, "perf_pmu_register" },
	{ 0x3b89f1fc, "pm_runtime_get_if_active" },
	{ 0x3d9de5d8, "mipi_dsi_generic_write" },
	{ 0x3853d8c1, "drm_atomic_add_affected_planes" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfa150882, "drm_buddy_fini" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd5a95eae, "drm_dp_128b132b_lane_symbol_locked" },
	{ 0x280b1f27, "drm_dp_mst_topology_mgr_resume" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xd88b5c4e, "auxiliary_device_init" },
	{ 0x97d06ce5, "drm_atomic_helper_commit_cleanup_done" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0xf2fc798f, "kmem_cache_create" },
	{ 0xe31b9301, "intel_gmch_gtt_flush" },
	{ 0xa0ebd437, "hdmi_drm_infoframe_check" },
	{ 0x5a097bcc, "drm_connector_update_edid_property" },
	{ 0x6bf1dca, "drm_edp_backlight_disable" },
	{ 0x747973ef, "pci_iounmap" },
	{ 0xa9b1739f, "current_task" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0x5fafd726, "drm_dp_aux_unregister" },
	{ 0x1f3e72f5, "hrtimer_cancel" },
	{ 0x48043f3d, "drm_atomic_helper_suspend" },
	{ 0x99ade407, "drm_dp_dpcd_probe" },
	{ 0x72ee6b83, "dma_fence_default_wait" },
	{ 0xabb5a026, "drm_buddy_block_trim" },
	{ 0x91fec1cc, "drm_rect_calc_vscale" },
	{ 0x7410aba2, "strreplace" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x69b211c, "__cond_resched_lock" },
	{ 0xeedeac99, "cpu_latency_qos_update_request" },
	{ 0xcb387aa3, "shmem_file_setup_with_mnt" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xaaa73626, "drm_crtc_cleanup" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x41a4c874, "xa_find_after" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x51922a03, "dma_fence_array_create" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xc52012ee, "drm_atomic_helper_duplicate_state" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xdc490450, "drm_atomic_state_alloc" },
	{ 0x37bb91cb, "drm_dp_get_phy_test_pattern" },
	{ 0x1fdf28d0, "single_open_size" },
	{ 0xcb2340b8, "drm_rect_debug_print" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x114a0d95, "idr_destroy" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xa80cf34e, "drm_dp_mst_put_port_malloc" },
	{ 0xacc4e97e, "drm_kms_helper_poll_enable" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x275f3d49, "hdmi_vendor_infoframe_check" },
	{ 0x600e81d9, "drm_connector_attach_dp_subconnector_property" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x6bf6d949, "devm_pinctrl_put" },
	{ 0xe25a391b, "drm_modeset_unlock" },
	{ 0x3b7da8d, "_raw_write_unlock" },
	{ 0x538c7455, "device_del" },
	{ 0x1000e51, "schedule" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xe3feba56, "tasklet_unlock_spin_wait" },
	{ 0xe5987132, "radix_tree_insert" },
	{ 0x7ed6c9cc, "drm_dp_dual_mode_set_tmds_output" },
	{ 0x615174ef, "device_link_add" },
	{ 0xdf3f760d, "drm_mm_scan_color_evict" },
	{ 0xad1ab0bf, "dma_max_mapping_size" },
	{ 0x88120e26, "drm_crtc_accurate_vblank_count" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0xd0d23422, "get_task_pid" },
	{ 0x6f104f6c, "drm_vma_node_allow" },
	{ 0xd7e6f85d, "drm_dp_atomic_release_time_slots" },
	{ 0x65111394, "drm_modeset_acquire_init" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0xadbeed61, "mipi_dsi_packet_format_is_long" },
	{ 0x296b227f, "dma_fence_array_next" },
	{ 0xe384857b, "mmu_interval_notifier_remove" },
	{ 0xe1a81f79, "drm_dp_mst_hpd_irq" },
	{ 0x1227e3db, "drm_atomic_state_clear" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0xe175803d, "debugfs_create_bool" },
	{ 0x2754dad8, "drm_mm_reserve_node" },
	{ 0xf39d89d9, "__drmm_add_action_or_reset" },
	{ 0x1057a279, "bsearch" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe85e1dd8, "drm_atomic_helper_swap_state" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x56aa52fd, "_mutex_lock_nest_lock" },
	{ 0x3d11cb96, "kmem_cache_alloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xffaff97f, "kobject_add" },
	{ 0xca2e084b, "wait_for_completion_interruptible" },
	{ 0x9eb404cb, "__cpuhp_state_remove_instance" },
	{ 0xd335b378, "cancel_delayed_work" },
	{ 0x7a45377b, "acpi_video_unregister" },
	{ 0x2769f6ef, "__irq_alloc_descs" },
	{ 0xb19b445, "ioread8" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0xfbff0daa, "simple_attr_open" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3b9bdc73, "pci_disable_msi" },
	{ 0x4c81cefd, "pci_enable_device" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x59f27ed7, "drm_dp_pcon_enc_is_dsc_1_2" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x18bc4aeb, "drm_fb_helper_restore_fbdev_mode_unlocked" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xfb1a7a5a, "drm_dp_downstream_rgb_to_ycbcr_conversion" },
	{ 0x148653, "vsnprintf" },
	{ 0x8e4598b7, "idr_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xecd73d5e, "pci_resize_resource" },
	{ 0x99e1f06c, "drm_plane_create_color_properties" },
	{ 0xc512626a, "__supported_pte_mask" },
	{ 0xdd375113, "mipi_dsi_compression_mode" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x92f31cb6, "drm_dp_dual_mode_detect" },
	{ 0x8c0e366d, "proc_dointvec_minmax" },
	{ 0xe6f983f6, "refcount_dec_and_lock_irqsave" },
	{ 0x28a0559, "drm_hdcp_update_content_protection" },
	{ 0x18a4e40, "drm_dp_mst_detect_port" },
	{ 0x37e5852d, "flush_work" },
	{ 0xb4468bbd, "lock_pin_lock" },
	{ 0x83f00eb9, "refcount_dec_and_lock" },
	{ 0x4a909828, "simple_attr_release" },
	{ 0x423c49af, "drm_get_edid_switcheroo" },
	{ 0x69353664, "__drm_debug" },
	{ 0x25daad93, "__drm_mm_interval_first" },
	{ 0x599f6f9e, "dma_resv_reset_max_fences" },
	{ 0xbe375910, "dma_resv_add_fence" },
	{ 0x475a9e2b, "drm_dp_read_dpcd_caps" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xaae3d088, "drm_encoder_init" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x14f6463, "drm_atomic_get_mst_topology_state" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xfdd4216d, "pcibios_align_resource" },
	{ 0x76776184, "mutex_destroy" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xf9a482f9, "msleep" },
	{ 0x40694856, "ttm_device_init" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x2183c08c, "drm_mm_scan_add_block" },
	{ 0x63a477fb, "drm_dp_downstream_min_tmds_clock" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x7f6d7bad, "mod_delayed_work_on" },
	{ 0x688d8b18, "__mmap_lock_do_trace_released" },
	{ 0x2b6c77a2, "sysfs_remove_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x648d953b, "drm_dsc_dp_pps_header_init" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4c810aa9, "drm_dp_pcon_is_frl_ready" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x6f52fa5f, "ttm_device_fini" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x35595e4a, "simple_open" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xb9c3ea86, "pm_runtime_no_callbacks" },
	{ 0x93e4810, "pci_write_config_word" },
	{ 0x141f38bf, "ktime_get_raw_fast_ns" },
	{ 0xbd68905e, "drm_dp_check_act_status" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xf6bab080, "drm_fb_helper_blank" },
	{ 0x64547775, "drm_dev_printk" },
	{ 0x5082950c, "__srcu_read_unlock" },
	{ 0x2d1bce9, "pci_get_domain_bus_and_slot" },
	{ 0x6e30ba8e, "drm_rect_rotate_inv" },
	{ 0x1f872618, "drm_fb_helper_set_par" },
	{ 0xbb498b4e, "_dev_printk" },
	{ 0x98f9a249, "drm_edp_backlight_init" },
	{ 0xed1d38dc, "mipi_dsi_attach" },
	{ 0xf56cafa, "kernel_param_lock" },
	{ 0xc52137ab, "fs_reclaim_release" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x1c4f6ec8, "drm_plane_create_zpos_immutable_property" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0xa52a7cb3, "drm_fb_helper_hotplug_event" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x3cb0d0af, "drm_framebuffer_remove" },
	{ 0xbf90fa63, "pci_iomap_range" },
	{ 0x5a2c427e, "_raw_spin_lock_irqsave_nested" },
	{ 0x658123cb, "drm_mode_create" },
	{ 0x9a9d552, "sg_alloc_table_from_pages_segment" },
	{ 0x357a001a, "drm_fb_helper_cfb_imageblit" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x1380c3b6, "ttm_bo_vm_fault_reserved" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xb7c69a63, "unregister_vmap_purge_notifier" },
	{ 0x91f31500, "drm_connector_attach_content_protection_property" },
	{ 0x81188c30, "match_string" },
	{ 0xff35189d, "drm_dp_mst_update_slots" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x3a2ba9d7, "drm_scdc_set_high_tmds_clock_ratio" },
	{ 0x38d5e539, "drm_connector_list_iter_next" },
	{ 0x557dbaca, "drm_atomic_helper_damage_merged" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x161e6ed9, "pci_release_resource" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3d7aad05, "drm_dev_register" },
	{ 0xd6f3f681, "ttm_pool_free" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xd12671b6, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x70fb11b7, "drm_modeset_drop_locks" },
	{ 0xe163a684, "fs_reclaim_acquire" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa4b4252d, "pci_assign_unassigned_bus_resources" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0xe1c99947, "drm_gem_private_object_init" },
	{ 0x254548b, "__free_pages" },
	{ 0x192ea14f, "__SCT__tp_func_dma_fence_signaled" },
	{ 0x5a86f411, "drm_dp_phy_name" },
	{ 0x6c49551, "drm_dp_dsc_sink_line_buf_depth" },
	{ 0xd1caa75f, "drm_dp_get_vc_payload_bw" },
	{ 0xbcc582dd, "drm_framebuffer_cleanup" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0x26ed2186, "register_vmap_purge_notifier" },
	{ 0xd9f6698c, "drm_atomic_helper_set_config" },
	{ 0x709c929, "lock_acquire" },
	{ 0xb8341da7, "drm_dp_read_downstream_info" },
	{ 0x333411ee, "drm_dp_read_sink_count_cap" },
	{ 0xabce3324, "drm_plane_from_index" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x6e22b30b, "dma_resv_get_singleton" },
	{ 0x38690d99, "drm_detect_hdmi_monitor" },
	{ 0x3b6663fd, "anon_inode_getfd" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x1946a4c4, "drm_crtc_vblank_put" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x183ab494, "__i2c_transfer" },
	{ 0xb58842c6, "pci_bus_write_config_byte" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x94961283, "vunmap" },
	{ 0xcea9fa41, "_raw_read_unlock" },
	{ 0x714fbca2, "drm_edp_backlight_set_level" },
	{ 0x224e7c5a, "drm_fb_helper_init" },
	{ 0x95b91b00, "__auxiliary_device_add" },
	{ 0x687367ce, "drm_mode_object_find" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x39044a58, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x863c907c, "bit_waitqueue" },
	{ 0x4d924f20, "memremap" },
	{ 0x92790fa0, "drmm_mode_config_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5cccee4f, "clear_page_dirty_for_io" },
	{ 0x96e14be0, "drm_dp_pcon_hdmi_link_mode" },
	{ 0x4ea80ac5, "drm_compat_ioctl" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x72fbe402, "__tracepoint_dma_fence_signaled" },
	{ 0xb165025, "drm_mode_destroy" },
	{ 0xcc961dee, "drm_crtc_init_with_planes" },
	{ 0xc624b289, "debug_check_no_locks_freed" },
	{ 0x63be55a8, "drm_read" },
	{ 0x4603c416, "drm_dp_pcon_dsc_bpp_incr" },
	{ 0x6d2d417c, "pci_enable_msi" },
	{ 0xf3808cb1, "get_state_synchronize_rcu" },
	{ 0x2ff20b58, "drm_property_create_range" },
	{ 0x3292cf60, "ttm_bo_move_to_lru_tail" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeaee3eee, "_dev_notice" },
	{ 0x1a71d30c, "ttm_move_memcpy" },
	{ 0xf7ef9a79, "iosf_mbi_punit_release" },
	{ 0xa57360aa, "drm_kms_helper_poll_disable" },
	{ 0x48600176, "gpiod_get" },
	{ 0xf3c3712b, "seq_write" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebb692b2, "dma_buf_detach" },
	{ 0xe40976c0, "pnp_range_reserved" },
	{ 0xa8d0f07f, "dma_buf_map_attachment" },
	{ 0x26afc049, "__xa_erase" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x550ce709, "pat_enabled" },
	{ 0x4d8afa47, "drm_plane_cleanup" },
	{ 0x754d539c, "strlen" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0xd5cad7b4, "pci_bus_resource_n" },
	{ 0x1aa2b145, "i2c_transfer" },
	{ 0xa7359f71, "kern_unmount" },
	{ 0x6a4df8c5, "drm_dp_128b132b_eq_interlane_align_done" },
	{ 0xc447f644, "drm_hdmi_avi_infoframe_content_type" },
	{ 0xadf4a0df, "drm_modeset_lock_all" },
	{ 0xf8c4460, "drm_dp_128b132b_read_aux_rd_interval" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x6aacee47, "drm_dp_128b132b_link_training_failed" },
	{ 0x15e21fa9, "drm_dp_read_lttpr_common_caps" },
	{ 0x9f1403f5, "drm_syncobj_replace_fence" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xb2f74fb6, "intel_gmch_remove" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xa3b6e70d, "kobject_put" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x537fc01d, "drm_connector_set_vrr_capable_property" },
	{ 0x8d446d99, "drm_crtc_vblank_waitqueue" },
	{ 0x3155b23d, "ida_free" },
	{ 0xadd7e0d8, "drm_syncobj_find" },
	{ 0xb9478d90, "hdmi_drm_infoframe_unpack_only" },
	{ 0x8d72789e, "drm_edid_is_valid" },
	{ 0xa981c59e, "drm_framebuffer_plane_height" },
	{ 0xce2cb28f, "simple_attr_read" },
	{ 0x2f12ffed, "single_release" },
	{ 0x81d1c836, "cpu_latency_qos_add_request" },
	{ 0x8da06445, "drm_crtc_vblank_get" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x65ee81e6, "ttm_resource_manager_evict_all" },
	{ 0xedc03953, "iounmap" },
	{ 0xf3c240e7, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0x18ad04d5, "device_create_bin_file" },
	{ 0x96f498dd, "drm_mode_config_reset" },
	{ 0x1952790e, "finish_wait" },
	{ 0x5d602f8b, "drm_av_sync_delay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf8ffb638, "drm_kms_helper_poll_fini" },
	{ 0x44530961, "i2c_put_adapter" },
	{ 0x521ad6d0, "drm_puts" },
	{ 0x2b878fb1, "drm_kms_helper_hotplug_event" },
	{ 0x7af8cd4e, "drm_fb_helper_cfb_copyarea" },
	{ 0xa8bd1fb1, "pwm_get" },
	{ 0xf8c41329, "drm_mode_create_hdmi_colorspace_property" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfca39e26, "drm_add_edid_modes" },
	{ 0x2abcb250, "drm_fb_helper_debug_enter" },
	{ 0xe3ad20ad, "drm_release_noglobal" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x266a4b08, "tasklet_unlock" },
	{ 0xdb2e8ca9, "hrtimer_start_range_ns" },
	{ 0xccdc986d, "xa_store" },
	{ 0xfc8eb50a, "kobj_sysfs_ops" },
	{ 0x4f453cb1, "ttm_bo_unmap_virtual" },
	{ 0xf540cc43, "dma_fence_chain_find_seqno" },
	{ 0x98e60eaa, "dma_fence_chain_ops" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xab17113b, "acpi_video_backlight_use_native" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x294cdd05, "mipi_dsi_dcs_read" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "ttm,drm,drm_display_helper,drm_kms_helper,drm_buddy,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001636sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001632sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003184sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003185sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E93sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E99sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E91sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E96sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E98sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E94sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA7sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087CAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BE6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BF6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009B21sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BAAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BACsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009B41sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BCAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BCCsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A50sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A52sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A53sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A54sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A56sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A57sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A58sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A70sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A71sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004541sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004551sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004555sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004557sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004571sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E55sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E57sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E61sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E71sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A60sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A68sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A70sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A49sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A78sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AD9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AF8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C80sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004680sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004682sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004688sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000468Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000468Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004690sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004692sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004693sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046AAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004628sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004905sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004907sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004909sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A780sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A781sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A782sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A783sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A788sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A789sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A78Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A78Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A720sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A721sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005690sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005691sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005692sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005693sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005694sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005695sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005698sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005696sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005697sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056C1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D60sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D45sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D55sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007DD5sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "5A3E55FDFB61B2CBFD95E11");
