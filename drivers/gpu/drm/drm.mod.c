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

SYMBOL_CRC(devm_aperture_acquire_from_firmware, 0x256570fa, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_framebuffers, 0xd683291a, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_pci_framebuffers, 0x6515e72b, "");
SYMBOL_CRC(drm_is_current_master, 0xcad7a969, "");
SYMBOL_CRC(drm_master_get, 0xc83395fa, "");
SYMBOL_CRC(drm_file_get_master, 0x595b9da4, "");
SYMBOL_CRC(drm_master_put, 0xc790158b, "");
SYMBOL_CRC(drm_master_internal_acquire, 0xad4ef4e0, "");
SYMBOL_CRC(drm_master_internal_release, 0x0c76c18e, "");
SYMBOL_CRC(drm_clflush_pages, 0xbb4ef5b6, "");
SYMBOL_CRC(drm_clflush_sg, 0xb0b05ff5, "");
SYMBOL_CRC(drm_clflush_virt_range, 0x0a72f765, "");
SYMBOL_CRC(drm_need_swiotlb, 0xb6127243, "");
SYMBOL_CRC(drm_memcpy_from_wc, 0xa38c4c94, "");
SYMBOL_CRC(drm_open, 0x4e99805b, "");
SYMBOL_CRC(drm_release, 0xc25ef511, "");
SYMBOL_CRC(drm_release_noglobal, 0xe3ad20ad, "");
SYMBOL_CRC(drm_read, 0x63be55a8, "");
SYMBOL_CRC(drm_poll, 0x37899f47, "");
SYMBOL_CRC(drm_event_reserve_init_locked, 0xf213d3ac, "");
SYMBOL_CRC(drm_event_reserve_init, 0x08833534, "");
SYMBOL_CRC(drm_event_cancel_free, 0xe5c12fb3, "");
SYMBOL_CRC(drm_send_event_timestamp_locked, 0x3e531ad3, "");
SYMBOL_CRC(drm_send_event_locked, 0x026f45be, "");
SYMBOL_CRC(drm_send_event, 0xc340f65b, "");
SYMBOL_CRC(drm_gem_object_init, 0x1947c893, "");
SYMBOL_CRC(drm_gem_private_object_init, 0xe1c99947, "");
SYMBOL_CRC(drm_gem_handle_delete, 0xf0848a9f, "");
SYMBOL_CRC(drm_gem_dumb_map_offset, 0x551564d0, "_gpl");
SYMBOL_CRC(drm_gem_handle_create, 0xa8ce81ce, "");
SYMBOL_CRC(drm_gem_free_mmap_offset, 0x5fb4416a, "");
SYMBOL_CRC(drm_gem_create_mmap_offset_size, 0x7ba4f1fd, "");
SYMBOL_CRC(drm_gem_create_mmap_offset, 0x5c7b4b23, "");
SYMBOL_CRC(drm_gem_get_pages, 0x8e4cf6c7, "");
SYMBOL_CRC(drm_gem_put_pages, 0xb96b9232, "");
SYMBOL_CRC(drm_gem_objects_lookup, 0x57d449c7, "");
SYMBOL_CRC(drm_gem_object_lookup, 0x3fa8ad5f, "");
SYMBOL_CRC(drm_gem_dma_resv_wait, 0x71042edd, "");
SYMBOL_CRC(drm_gem_object_release, 0x68292fe7, "");
SYMBOL_CRC(drm_gem_object_free, 0xd680a377, "");
SYMBOL_CRC(drm_gem_vm_open, 0x46a15120, "");
SYMBOL_CRC(drm_gem_vm_close, 0xf9b8b8dd, "");
SYMBOL_CRC(drm_gem_mmap_obj, 0x1b7e2f9b, "");
SYMBOL_CRC(drm_gem_mmap, 0x53abd5ff, "");
SYMBOL_CRC(drm_gem_vmap, 0x488337e7, "");
SYMBOL_CRC(drm_gem_vunmap, 0x17955737, "");
SYMBOL_CRC(drm_gem_lock_reservations, 0x8b9df257, "");
SYMBOL_CRC(drm_gem_unlock_reservations, 0x1527a9eb, "");
SYMBOL_CRC(drm_gem_lru_init, 0xb96b2ce7, "");
SYMBOL_CRC(drm_gem_lru_remove, 0xcf98c043, "");
SYMBOL_CRC(drm_gem_lru_move_tail, 0x43cc94ba, "");
SYMBOL_CRC(drm_gem_lru_scan, 0x547c2eb5, "");
SYMBOL_CRC(drm_noop, 0x0b3bfeb3, "");
SYMBOL_CRC(drm_invalid_op, 0x47c4508f, "");
SYMBOL_CRC(drm_ioctl_kernel, 0x828a2049, "");
SYMBOL_CRC(drm_ioctl, 0xd4ad7de2, "");
SYMBOL_CRC(drm_ioctl_flags, 0x57b6efe3, "");
SYMBOL_CRC(drm_put_dev, 0x73393340, "");
SYMBOL_CRC(drm_dev_enter, 0xfc068282, "");
SYMBOL_CRC(drm_dev_exit, 0xe8a034df, "");
SYMBOL_CRC(drm_dev_unplug, 0x501eb69c, "");
SYMBOL_CRC(__devm_drm_dev_alloc, 0xfab2812d, "");
SYMBOL_CRC(drm_dev_alloc, 0xe27d5b1d, "");
SYMBOL_CRC(drm_dev_get, 0x32e923af, "");
SYMBOL_CRC(drm_dev_put, 0xa598626d, "");
SYMBOL_CRC(drm_dev_register, 0x3d7aad05, "");
SYMBOL_CRC(drm_dev_unregister, 0x9a55066e, "");
SYMBOL_CRC(drm_dev_set_unique, 0x9b296c6f, "");
SYMBOL_CRC(drm_sysfs_hotplug_event, 0xcc28cbde, "");
SYMBOL_CRC(drm_sysfs_connector_hotplug_event, 0xfda56ba0, "");
SYMBOL_CRC(drm_sysfs_connector_status_event, 0x0c772e8c, "");
SYMBOL_CRC(drm_class_device_register, 0x674b77a6, "_gpl");
SYMBOL_CRC(drm_class_device_unregister, 0xf8b9c154, "_gpl");
SYMBOL_CRC(__drm_mm_interval_first, 0x25daad93, "");
SYMBOL_CRC(drm_mm_reserve_node, 0x2754dad8, "");
SYMBOL_CRC(drm_mm_insert_node_in_range, 0xb4032484, "");
SYMBOL_CRC(drm_mm_remove_node, 0x4b7ebf95, "");
SYMBOL_CRC(drm_mm_replace_node, 0x59056243, "");
SYMBOL_CRC(drm_mm_scan_init_with_range, 0x2a962499, "");
SYMBOL_CRC(drm_mm_scan_add_block, 0x2183c08c, "");
SYMBOL_CRC(drm_mm_scan_remove_block, 0x5f7985a5, "");
SYMBOL_CRC(drm_mm_scan_color_evict, 0xdf3f760d, "");
SYMBOL_CRC(drm_mm_init, 0xf0517d7a, "");
SYMBOL_CRC(drm_mm_takedown, 0x57698a50, "");
SYMBOL_CRC(drm_mm_print, 0x0f7acb66, "");
SYMBOL_CRC(drm_crtc_from_index, 0xa2b773c6, "");
SYMBOL_CRC(drm_crtc_init_with_planes, 0xcc961dee, "");
SYMBOL_CRC(drmm_crtc_init_with_planes, 0x03ab8edd, "");
SYMBOL_CRC(__drmm_crtc_alloc_with_planes, 0xb4e24669, "");
SYMBOL_CRC(drm_crtc_cleanup, 0xaaa73626, "");
SYMBOL_CRC(drm_mode_set_config_internal, 0xeaad3358, "");
SYMBOL_CRC(drm_crtc_check_viewport, 0x841eef92, "");
SYMBOL_CRC(drm_crtc_create_scaling_filter_property, 0x9e9bcb43, "");
SYMBOL_CRC(drm_mode_legacy_fb_format, 0x29f078d1, "");
SYMBOL_CRC(drm_driver_legacy_fb_format, 0x9855496e, "");
SYMBOL_CRC(drm_format_info, 0x55eb38da, "");
SYMBOL_CRC(drm_get_format_info, 0xdae7d00c, "");
SYMBOL_CRC(drm_format_info_block_width, 0x74fc6fbd, "");
SYMBOL_CRC(drm_format_info_block_height, 0x982d09b3, "");
SYMBOL_CRC(drm_format_info_bpp, 0xe633a4cd, "");
SYMBOL_CRC(drm_format_info_min_pitch, 0x6910e4cd, "");
SYMBOL_CRC(drm_mode_debug_printmodeline, 0x2ed3c600, "");
SYMBOL_CRC(drm_mode_create, 0x658123cb, "");
SYMBOL_CRC(drm_mode_destroy, 0x0b165025, "");
SYMBOL_CRC(drm_mode_probed_add, 0x1395cc3d, "");
SYMBOL_CRC(drm_cvt_mode, 0x9b0d19ef, "");
SYMBOL_CRC(drm_gtf_mode_complex, 0x510f2bf5, "");
SYMBOL_CRC(drm_gtf_mode, 0x2667a6fe, "");
SYMBOL_CRC(drm_mode_set_name, 0x4a35d30d, "");
SYMBOL_CRC(drm_mode_vrefresh, 0xf1b5340a, "");
SYMBOL_CRC(drm_mode_get_hv_timing, 0x4403a9c3, "");
SYMBOL_CRC(drm_mode_set_crtcinfo, 0x4575a0ca, "");
SYMBOL_CRC(drm_mode_copy, 0x9ce050be, "");
SYMBOL_CRC(drm_mode_init, 0xcdb99cc9, "");
SYMBOL_CRC(drm_mode_duplicate, 0x36d6e507, "");
SYMBOL_CRC(drm_mode_match, 0x9b95c885, "");
SYMBOL_CRC(drm_mode_equal, 0x0d9b4753, "");
SYMBOL_CRC(drm_mode_equal_no_clocks, 0x3ab87110, "");
SYMBOL_CRC(drm_mode_equal_no_clocks_no_stereo, 0x24d124ac, "");
SYMBOL_CRC(drm_mode_validate_driver, 0x3027719b, "");
SYMBOL_CRC(drm_mode_validate_size, 0xd7a9cf42, "");
SYMBOL_CRC(drm_mode_validate_ycbcr420, 0x8bd5c991, "");
SYMBOL_CRC(drm_mode_prune_invalid, 0xca12bd2d, "");
SYMBOL_CRC(drm_mode_sort, 0xf1421d13, "");
SYMBOL_CRC(drm_connector_list_update, 0xa2e8c5ac, "");
SYMBOL_CRC(drm_mode_parse_command_line_for_connector, 0xea8498da, "");
SYMBOL_CRC(drm_mode_create_from_cmdline_mode, 0xedd3909f, "");
SYMBOL_CRC(drm_mode_is_420_only, 0xbab23ad0, "");
SYMBOL_CRC(drm_mode_is_420_also, 0x842245ff, "");
SYMBOL_CRC(drm_mode_is_420, 0x822c250d, "");
SYMBOL_CRC(drm_edid_header_is_valid, 0x9b9de1c1, "");
SYMBOL_CRC(drm_edid_are_equal, 0x24993e50, "");
SYMBOL_CRC(drm_edid_block_valid, 0xd13f9985, "");
SYMBOL_CRC(drm_edid_is_valid, 0x8d72789e, "");
SYMBOL_CRC(drm_add_override_edid_modes, 0x7f00a51a, "");
SYMBOL_CRC(drm_do_get_edid, 0x231f8745, "_gpl");
SYMBOL_CRC(drm_edid_raw, 0x4489a5e9, "");
SYMBOL_CRC(drm_edid_alloc, 0x79c00fa2, "");
SYMBOL_CRC(drm_edid_dup, 0xb212dc3e, "");
SYMBOL_CRC(drm_edid_free, 0x397c3d27, "");
SYMBOL_CRC(drm_probe_ddc, 0xb3011acd, "");
SYMBOL_CRC(drm_get_edid, 0x257b21f1, "");
SYMBOL_CRC(drm_edid_read_custom, 0xdc3fcdfd, "");
SYMBOL_CRC(drm_edid_read_ddc, 0x4a896b58, "");
SYMBOL_CRC(drm_edid_read, 0xbde9d91a, "");
SYMBOL_CRC(drm_edid_get_panel_id, 0x1ffe52cb, "");
SYMBOL_CRC(drm_get_edid_switcheroo, 0x423c49af, "");
SYMBOL_CRC(drm_edid_duplicate, 0x7edf470b, "");
SYMBOL_CRC(drm_mode_find_dmt, 0x6a533ada, "");
SYMBOL_CRC(drm_match_cea_mode, 0x9b285573, "");
SYMBOL_CRC(drm_display_mode_from_cea_vic, 0x907e1b2d, "");
SYMBOL_CRC(drm_edid_get_monitor_name, 0x7c545285, "");
SYMBOL_CRC(drm_edid_to_sad, 0x6ac01ea8, "");
SYMBOL_CRC(drm_edid_to_speaker_allocation, 0x3cdc37e9, "");
SYMBOL_CRC(drm_av_sync_delay, 0x5d602f8b, "");
SYMBOL_CRC(drm_detect_hdmi_monitor, 0x38690d99, "");
SYMBOL_CRC(drm_detect_monitor_audio, 0xa248afde, "");
SYMBOL_CRC(drm_default_rgb_quant_range, 0x65702bd6, "");
SYMBOL_CRC(drm_edid_connector_update, 0x434e4224, "");
SYMBOL_CRC(drm_connector_update_edid_property, 0x5a097bcc, "");
SYMBOL_CRC(drm_add_edid_modes, 0xfca39e26, "");
SYMBOL_CRC(drm_add_modes_noedid, 0xb26890fb, "");
SYMBOL_CRC(drm_set_preferred_mode, 0x7145470f, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_from_display_mode, 0xd12671b6, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_quant_range, 0x4ee2fcee, "");
SYMBOL_CRC(drm_hdmi_vendor_infoframe_from_display_mode, 0x9af9ed38, "");
SYMBOL_CRC(drm_gem_dmabuf_export, 0x11d89109, "");
SYMBOL_CRC(drm_gem_dmabuf_release, 0x47dfa1a3, "");
SYMBOL_CRC(drm_gem_prime_fd_to_handle, 0xfb1890f7, "");
SYMBOL_CRC(drm_gem_prime_handle_to_fd, 0xafdd0188, "");
SYMBOL_CRC(drm_gem_map_attach, 0x0e99fb79, "");
SYMBOL_CRC(drm_gem_map_detach, 0x51664228, "");
SYMBOL_CRC(drm_gem_map_dma_buf, 0xc88dc96d, "");
SYMBOL_CRC(drm_gem_unmap_dma_buf, 0x817d55d1, "");
SYMBOL_CRC(drm_gem_dmabuf_vmap, 0x3dcd52ef, "");
SYMBOL_CRC(drm_gem_dmabuf_vunmap, 0x2f0b83ec, "");
SYMBOL_CRC(drm_gem_prime_mmap, 0x8b2173db, "");
SYMBOL_CRC(drm_gem_dmabuf_mmap, 0xdee5ad37, "");
SYMBOL_CRC(drm_prime_pages_to_sg, 0x2426507d, "");
SYMBOL_CRC(drm_prime_get_contiguous_size, 0xd05fda43, "");
SYMBOL_CRC(drm_gem_prime_export, 0xd3807304, "");
SYMBOL_CRC(drm_gem_prime_import_dev, 0x3615fd2c, "");
SYMBOL_CRC(drm_gem_prime_import, 0x80f8bc42, "");
SYMBOL_CRC(drm_prime_sg_to_page_array, 0xddc9c6d0, "");
SYMBOL_CRC(drm_prime_sg_to_dma_addr_array, 0x44a2cadb, "");
SYMBOL_CRC(drm_prime_gem_destroy, 0x66e12100, "");
SYMBOL_CRC(drm_vma_offset_manager_init, 0xbce3eda8, "");
SYMBOL_CRC(drm_vma_offset_manager_destroy, 0x5fef5a37, "");
SYMBOL_CRC(drm_vma_offset_lookup_locked, 0x18f33ce7, "");
SYMBOL_CRC(drm_vma_offset_add, 0xc5b59dc6, "");
SYMBOL_CRC(drm_vma_offset_remove, 0x0f156fcb, "");
SYMBOL_CRC(drm_vma_node_allow, 0x6f104f6c, "");
SYMBOL_CRC(drm_vma_node_revoke, 0x4279d75b, "");
SYMBOL_CRC(drm_vma_node_is_allowed, 0x6b269403, "");
SYMBOL_CRC(drm_modeset_lock_all, 0xadf4a0df, "");
SYMBOL_CRC(drm_modeset_unlock_all, 0xf2d8e7da, "");
SYMBOL_CRC(drm_warn_on_modeset_not_all_locked, 0xa36c6026, "");
SYMBOL_CRC(drm_modeset_acquire_init, 0x65111394, "");
SYMBOL_CRC(drm_modeset_acquire_fini, 0xc20bb5d5, "");
SYMBOL_CRC(drm_modeset_drop_locks, 0x70fb11b7, "");
SYMBOL_CRC(drm_modeset_backoff, 0x7e9d9e25, "");
SYMBOL_CRC(drm_modeset_lock_init, 0x8f219995, "");
SYMBOL_CRC(drm_modeset_lock, 0xaed9935d, "");
SYMBOL_CRC(drm_modeset_lock_single_interruptible, 0x1aa95fc7, "");
SYMBOL_CRC(drm_modeset_unlock, 0xe25a391b, "");
SYMBOL_CRC(drm_modeset_lock_all_ctx, 0x5fec7683, "");
SYMBOL_CRC(__drm_crtc_commit_free, 0xae277372, "");
SYMBOL_CRC(drm_crtc_commit_wait, 0x6f7b24b7, "");
SYMBOL_CRC(drm_atomic_state_default_release, 0x7de51035, "");
SYMBOL_CRC(drm_atomic_state_init, 0x24c44a11, "");
SYMBOL_CRC(drm_atomic_state_alloc, 0xdc490450, "");
SYMBOL_CRC(drm_atomic_state_default_clear, 0x820bcb24, "");
SYMBOL_CRC(drm_atomic_state_clear, 0x1227e3db, "");
SYMBOL_CRC(__drm_atomic_state_free, 0xb9cad492, "");
SYMBOL_CRC(drm_atomic_get_crtc_state, 0xc8fb3ca7, "");
SYMBOL_CRC(drm_atomic_get_plane_state, 0x5e3f4008, "");
SYMBOL_CRC(drm_atomic_private_obj_init, 0x85da8388, "");
SYMBOL_CRC(drm_atomic_private_obj_fini, 0x2126163b, "");
SYMBOL_CRC(drm_atomic_get_private_obj_state, 0x8911482c, "");
SYMBOL_CRC(drm_atomic_get_old_private_obj_state, 0xa79a1df1, "");
SYMBOL_CRC(drm_atomic_get_new_private_obj_state, 0xa0b2faad, "");
SYMBOL_CRC(drm_atomic_get_old_connector_for_encoder, 0x7da936eb, "");
SYMBOL_CRC(drm_atomic_get_new_connector_for_encoder, 0x7a81d1b7, "");
SYMBOL_CRC(drm_atomic_get_connector_state, 0xbf5d0761, "");
SYMBOL_CRC(drm_atomic_get_bridge_state, 0xbb9d1830, "");
SYMBOL_CRC(drm_atomic_get_old_bridge_state, 0xe34e2c85, "");
SYMBOL_CRC(drm_atomic_get_new_bridge_state, 0x39e8472d, "");
SYMBOL_CRC(drm_atomic_add_encoder_bridges, 0x99c86f37, "");
SYMBOL_CRC(drm_atomic_add_affected_connectors, 0x9ac65f17, "");
SYMBOL_CRC(drm_atomic_add_affected_planes, 0x3853d8c1, "");
SYMBOL_CRC(drm_atomic_check_only, 0xc89f77a3, "");
SYMBOL_CRC(drm_atomic_commit, 0x0188128e, "");
SYMBOL_CRC(drm_atomic_nonblocking_commit, 0xc67d5de6, "");
SYMBOL_CRC(__drm_atomic_helper_disable_plane, 0x19ad20c6, "");
SYMBOL_CRC(__drm_atomic_helper_set_config, 0xc8e43c44, "");
SYMBOL_CRC(drm_atomic_print_new_state, 0xbd552fc4, "");
SYMBOL_CRC(drm_state_dump, 0x80ee4c69, "");
SYMBOL_CRC(drm_bridge_add, 0x4f5bc33e, "");
SYMBOL_CRC(devm_drm_bridge_add, 0x0dcf4fa9, "");
SYMBOL_CRC(drm_bridge_remove, 0x98970f8e, "");
SYMBOL_CRC(drm_bridge_attach, 0xe933e23c, "");
SYMBOL_CRC(drm_bridge_chain_mode_fixup, 0x4492a532, "");
SYMBOL_CRC(drm_bridge_chain_mode_valid, 0x63122447, "");
SYMBOL_CRC(drm_bridge_chain_disable, 0xee05b963, "");
SYMBOL_CRC(drm_bridge_chain_post_disable, 0xbb763d11, "");
SYMBOL_CRC(drm_bridge_chain_mode_set, 0xc80351b8, "");
SYMBOL_CRC(drm_bridge_chain_pre_enable, 0x9513f049, "");
SYMBOL_CRC(drm_bridge_chain_enable, 0x325ed7f9, "");
SYMBOL_CRC(drm_atomic_bridge_chain_disable, 0x42368123, "");
SYMBOL_CRC(drm_atomic_bridge_chain_post_disable, 0x6ba4cb1a, "");
SYMBOL_CRC(drm_atomic_bridge_chain_pre_enable, 0x121b0b78, "");
SYMBOL_CRC(drm_atomic_bridge_chain_enable, 0x04b17dca, "");
SYMBOL_CRC(drm_atomic_bridge_chain_check, 0xa17ca3ca, "");
SYMBOL_CRC(drm_bridge_detect, 0x2c11c648, "_gpl");
SYMBOL_CRC(drm_bridge_get_modes, 0x376940ea, "_gpl");
SYMBOL_CRC(drm_bridge_get_edid, 0xd4943753, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_enable, 0x98cf6f0d, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_disable, 0x5b339a0e, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_notify, 0x07d6f4a2, "_gpl");
SYMBOL_CRC(drm_framebuffer_init, 0xf51306ec, "");
SYMBOL_CRC(drm_framebuffer_lookup, 0xb37b0954, "");
SYMBOL_CRC(drm_framebuffer_unregister_private, 0x058a3d75, "");
SYMBOL_CRC(drm_framebuffer_cleanup, 0xbcc582dd, "");
SYMBOL_CRC(drm_framebuffer_remove, 0x3cb0d0af, "");
SYMBOL_CRC(drm_framebuffer_plane_width, 0x6190c470, "");
SYMBOL_CRC(drm_framebuffer_plane_height, 0xa981c59e, "");
SYMBOL_CRC(drm_get_connector_type_name, 0xf406e46a, "");
SYMBOL_CRC(drm_connector_init, 0x21ba8fe0, "");
SYMBOL_CRC(drm_connector_init_with_ddc, 0xa23ed958, "");
SYMBOL_CRC(drmm_connector_init, 0xea86df3e, "");
SYMBOL_CRC(drm_connector_attach_edid_property, 0xfbd7bb61, "");
SYMBOL_CRC(drm_connector_attach_encoder, 0x096c7d7e, "");
SYMBOL_CRC(drm_connector_has_possible_encoder, 0xbfb26322, "");
SYMBOL_CRC(drm_connector_cleanup, 0x3c69e900, "");
SYMBOL_CRC(drm_connector_register, 0xa2f22cb4, "");
SYMBOL_CRC(drm_connector_unregister, 0xceb897bf, "");
SYMBOL_CRC(drm_get_connector_status_name, 0x0fd60df2, "");
SYMBOL_CRC(drm_connector_list_iter_begin, 0xd31327cf, "");
SYMBOL_CRC(drm_connector_list_iter_next, 0x38d5e539, "");
SYMBOL_CRC(drm_connector_list_iter_end, 0x9bf7dd62, "");
SYMBOL_CRC(drm_get_subpixel_order_name, 0x107742a9, "");
SYMBOL_CRC(drm_display_info_set_bus_formats, 0xe3bac697, "");
SYMBOL_CRC(drm_mode_create_dvi_i_properties, 0xe5a53bf2, "");
SYMBOL_CRC(drm_connector_attach_dp_subconnector_property, 0x600e81d9, "");
SYMBOL_CRC(drm_connector_attach_content_type_property, 0x79901831, "");
SYMBOL_CRC(drm_connector_attach_tv_margin_properties, 0x518a3c01, "");
SYMBOL_CRC(drm_mode_create_tv_margin_properties, 0x3c338add, "");
SYMBOL_CRC(drm_mode_create_tv_properties, 0x80317290, "");
SYMBOL_CRC(drm_mode_create_scaling_mode_property, 0xf3c9fd29, "");
SYMBOL_CRC(drm_connector_attach_vrr_capable_property, 0xc2e64204, "");
SYMBOL_CRC(drm_connector_attach_scaling_mode_property, 0x90f5403e, "");
SYMBOL_CRC(drm_mode_create_aspect_ratio_property, 0x9cc79afc, "");
SYMBOL_CRC(drm_mode_create_hdmi_colorspace_property, 0xf8c41329, "");
SYMBOL_CRC(drm_mode_create_dp_colorspace_property, 0x869337d3, "");
SYMBOL_CRC(drm_mode_create_content_type_property, 0x14acce24, "");
SYMBOL_CRC(drm_mode_create_suggested_offset_properties, 0x17fec7c5, "");
SYMBOL_CRC(drm_connector_set_path_property, 0x34d80bc4, "");
SYMBOL_CRC(drm_connector_set_tile_property, 0x199e952d, "");
SYMBOL_CRC(drm_connector_set_link_status_property, 0xe0b7f0d1, "");
SYMBOL_CRC(drm_connector_attach_max_bpc_property, 0xaa571ccb, "");
SYMBOL_CRC(drm_connector_attach_hdr_output_metadata_property, 0xf1b6b728, "");
SYMBOL_CRC(drm_connector_attach_colorspace_property, 0x6f797d7d, "");
SYMBOL_CRC(drm_connector_atomic_hdr_metadata_equal, 0xb526a680, "");
SYMBOL_CRC(drm_connector_set_vrr_capable_property, 0x537fc01d, "");
SYMBOL_CRC(drm_connector_set_panel_orientation, 0x6fb50242, "");
SYMBOL_CRC(drm_connector_set_panel_orientation_with_quirk, 0xdb4a8f82, "");
SYMBOL_CRC(drm_connector_set_orientation_from_panel, 0x5b890e4f, "");
SYMBOL_CRC(drm_connector_create_privacy_screen_properties, 0x97db419f, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_properties, 0xa5076c34, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_provider, 0xa01be87d, "");
SYMBOL_CRC(drm_connector_update_privacy_screen, 0x89773046, "");
SYMBOL_CRC(drm_connector_oob_hotplug_event, 0xfe7a25ba, "");
SYMBOL_CRC(drm_mode_put_tile_group, 0x90c7639a, "");
SYMBOL_CRC(drm_mode_get_tile_group, 0xeaa837f6, "");
SYMBOL_CRC(drm_mode_create_tile_group, 0x909de9e9, "");
SYMBOL_CRC(drm_plane_create_alpha_property, 0x2f9e82e9, "");
SYMBOL_CRC(drm_plane_create_rotation_property, 0x78f37380, "");
SYMBOL_CRC(drm_rotation_simplify, 0xdf666902, "");
SYMBOL_CRC(drm_plane_create_zpos_property, 0x655fd943, "");
SYMBOL_CRC(drm_plane_create_zpos_immutable_property, 0x1c4f6ec8, "");
SYMBOL_CRC(drm_atomic_normalize_zpos, 0x284366b2, "");
SYMBOL_CRC(drm_plane_create_blend_mode_property, 0x9b86a879, "");
SYMBOL_CRC(drm_encoder_init, 0xaae3d088, "");
SYMBOL_CRC(drm_encoder_cleanup, 0xfe56ad31, "");
SYMBOL_CRC(__drmm_encoder_alloc, 0xc1a3b09d, "");
SYMBOL_CRC(drmm_encoder_init, 0x8c3193ee, "");
SYMBOL_CRC(drm_mode_object_find, 0x687367ce, "");
SYMBOL_CRC(drm_mode_object_put, 0x689ada78, "");
SYMBOL_CRC(drm_mode_object_get, 0x71cd5960, "");
SYMBOL_CRC(drm_object_attach_property, 0x236d9514, "");
SYMBOL_CRC(drm_object_property_set_value, 0x2a8de91f, "");
SYMBOL_CRC(drm_object_property_get_value, 0xbaa2da13, "");
SYMBOL_CRC(drm_object_property_get_default_value, 0x979d927a, "");
SYMBOL_CRC(drm_property_create, 0xecf8bf0f, "");
SYMBOL_CRC(drm_property_create_enum, 0x5be7edbe, "");
SYMBOL_CRC(drm_property_create_bitmask, 0x60332171, "");
SYMBOL_CRC(drm_property_create_range, 0x2ff20b58, "");
SYMBOL_CRC(drm_property_create_signed_range, 0xe38d3b3c, "");
SYMBOL_CRC(drm_property_create_object, 0x8560a5a1, "");
SYMBOL_CRC(drm_property_create_bool, 0x582bdb3f, "");
SYMBOL_CRC(drm_property_add_enum, 0x9a263a59, "");
SYMBOL_CRC(drm_property_destroy, 0xb0310ef1, "");
SYMBOL_CRC(drm_property_create_blob, 0xc5e68ab9, "");
SYMBOL_CRC(drm_property_blob_put, 0xbd37ecca, "");
SYMBOL_CRC(drm_property_blob_get, 0x76307547, "");
SYMBOL_CRC(drm_property_lookup_blob, 0x87800670, "");
SYMBOL_CRC(drm_property_replace_global_blob, 0xaeb786b2, "");
SYMBOL_CRC(drm_property_replace_blob, 0xc045f7a5, "");
SYMBOL_CRC(drm_universal_plane_init, 0x165481e3, "");
SYMBOL_CRC(__drmm_universal_plane_alloc, 0x921e6b4f, "");
SYMBOL_CRC(__drm_universal_plane_alloc, 0xa4301d00, "");
SYMBOL_CRC(drm_plane_cleanup, 0x4d8afa47, "");
SYMBOL_CRC(drm_plane_from_index, 0xabce3324, "");
SYMBOL_CRC(drm_plane_force_disable, 0xd74e0fe8, "");
SYMBOL_CRC(drm_mode_plane_set_obj_prop, 0xe131568f, "");
SYMBOL_CRC(drm_any_plane_has_format, 0x5e4acfe0, "");
SYMBOL_CRC(drm_plane_enable_fb_damage_clips, 0x1ba5da41, "");
SYMBOL_CRC(drm_plane_get_damage_clips_count, 0x1a09863a, "");
SYMBOL_CRC(drm_plane_get_damage_clips, 0x192997b5, "");
SYMBOL_CRC(drm_plane_create_scaling_filter_property, 0x994f1fe2, "");
SYMBOL_CRC(drm_color_ctm_s31_32_to_qm_n, 0xad4e902b, "");
SYMBOL_CRC(drm_crtc_enable_color_mgmt, 0x8ec751ca, "");
SYMBOL_CRC(drm_mode_crtc_set_gamma_size, 0x5875d957, "");
SYMBOL_CRC(drm_plane_create_color_properties, 0x99e1f06c, "");
SYMBOL_CRC(drm_color_lut_check, 0xa7308915, "");
SYMBOL_CRC(__drm_debug, 0x69353664, "");
SYMBOL_CRC(__drm_puts_coredump, 0x3b0e5e9c, "");
SYMBOL_CRC(__drm_printfn_coredump, 0xea00fe81, "");
SYMBOL_CRC(__drm_puts_seq_file, 0x513072fe, "");
SYMBOL_CRC(__drm_printfn_seq_file, 0xfeb953b1, "");
SYMBOL_CRC(__drm_printfn_info, 0xe317082a, "");
SYMBOL_CRC(__drm_printfn_debug, 0xf824c7db, "");
SYMBOL_CRC(__drm_printfn_err, 0x3f405489, "");
SYMBOL_CRC(drm_puts, 0x521ad6d0, "");
SYMBOL_CRC(drm_printf, 0x28779e52, "");
SYMBOL_CRC(drm_print_bits, 0x32a0cc37, "");
SYMBOL_CRC(drm_dev_printk, 0x64547775, "");
SYMBOL_CRC(__drm_dev_dbg, 0x4600ffc8, "");
SYMBOL_CRC(___drm_dbg, 0x7e3277f8, "");
SYMBOL_CRC(__drm_err, 0xb11ac7a7, "");
SYMBOL_CRC(drm_print_regset32, 0xfc9e12c8, "");
SYMBOL_CRC(drm_mode_config_reset, 0x96f498dd, "");
SYMBOL_CRC(drmm_mode_config_init, 0x92790fa0, "");
SYMBOL_CRC(drm_mode_config_cleanup, 0xc2fab212, "");
SYMBOL_CRC(drm_crtc_accurate_vblank_count, 0x88120e26, "");
SYMBOL_CRC(drm_vblank_init, 0x49ce04c2, "");
SYMBOL_CRC(drm_dev_has_vblank, 0x88de3875, "");
SYMBOL_CRC(drm_crtc_vblank_waitqueue, 0x8d446d99, "");
SYMBOL_CRC(drm_calc_timestamping_constants, 0x68b55364, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp_internal, 0xf6a0e018, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp, 0x151480e4, "");
SYMBOL_CRC(drm_crtc_vblank_count, 0xfa35a98b, "");
SYMBOL_CRC(drm_crtc_vblank_count_and_time, 0x10d682e3, "");
SYMBOL_CRC(drm_crtc_arm_vblank_event, 0x567b6330, "");
SYMBOL_CRC(drm_crtc_send_vblank_event, 0x13aa02d5, "");
SYMBOL_CRC(drm_crtc_vblank_get, 0x8da06445, "");
SYMBOL_CRC(drm_crtc_vblank_put, 0x1946a4c4, "");
SYMBOL_CRC(drm_wait_one_vblank, 0xeca13424, "");
SYMBOL_CRC(drm_crtc_wait_one_vblank, 0x3d63b43f, "");
SYMBOL_CRC(drm_crtc_vblank_off, 0xb999182e, "");
SYMBOL_CRC(drm_crtc_vblank_reset, 0xbf4d1dd5, "");
SYMBOL_CRC(drm_crtc_set_max_vblank_count, 0x220131b4, "");
SYMBOL_CRC(drm_crtc_vblank_on, 0x0044a638, "");
SYMBOL_CRC(drm_crtc_vblank_restore, 0xb4018726, "");
SYMBOL_CRC(drm_handle_vblank, 0xf06b4e4e, "");
SYMBOL_CRC(drm_crtc_handle_vblank, 0x1a36d5ab, "");
SYMBOL_CRC(drm_syncobj_find, 0xadd7e0d8, "");
SYMBOL_CRC(drm_syncobj_add_point, 0xc8fe2422, "");
SYMBOL_CRC(drm_syncobj_replace_fence, 0x9f1403f5, "");
SYMBOL_CRC(drm_syncobj_find_fence, 0x36de5e3b, "");
SYMBOL_CRC(drm_syncobj_free, 0x1a411479, "");
SYMBOL_CRC(drm_syncobj_create, 0x938b0615, "");
SYMBOL_CRC(drm_syncobj_get_handle, 0x6025bede, "");
SYMBOL_CRC(drm_syncobj_get_fd, 0x18673e14, "");
SYMBOL_CRC(drm_timeout_abs_to_jiffies, 0x50674de7, "");
SYMBOL_CRC(drm_writeback_connector_init, 0x49e2859f, "");
SYMBOL_CRC(drm_writeback_connector_init_with_encoder, 0x97d892da, "");
SYMBOL_CRC(drm_writeback_prepare_job, 0x82232e5f, "");
SYMBOL_CRC(drm_writeback_queue_job, 0xea0529ff, "");
SYMBOL_CRC(drm_writeback_cleanup_job, 0x1eb30f15, "");
SYMBOL_CRC(drm_writeback_signal_completion, 0xfe06ea90, "");
SYMBOL_CRC(drm_writeback_get_out_fence, 0xe7393631, "");
SYMBOL_CRC(drm_client_init, 0xf75e3433, "");
SYMBOL_CRC(drm_client_register, 0x876ed2cb, "");
SYMBOL_CRC(drm_client_release, 0x4d929890, "");
SYMBOL_CRC(drm_client_dev_hotplug, 0x3ed04bb9, "");
SYMBOL_CRC(drm_client_buffer_vmap, 0x2c6fbb99, "");
SYMBOL_CRC(drm_client_buffer_vunmap, 0x7972a911, "");
SYMBOL_CRC(drm_client_framebuffer_create, 0xe4d23308, "");
SYMBOL_CRC(drm_client_framebuffer_delete, 0x63d548c2, "");
SYMBOL_CRC(drm_client_framebuffer_flush, 0xa6ffa8fa, "");
SYMBOL_CRC(drm_client_modeset_probe, 0xccb9c1cf, "");
SYMBOL_CRC(drm_client_rotation, 0xa0a7ce6f, "");
SYMBOL_CRC(drm_client_modeset_check, 0x0bd99282, "");
SYMBOL_CRC(drm_client_modeset_commit_locked, 0xc844b9d5, "");
SYMBOL_CRC(drm_client_modeset_commit, 0xe0340924, "");
SYMBOL_CRC(drm_client_modeset_dpms, 0xf5dc903f, "");
SYMBOL_CRC(drm_atomic_set_mode_for_crtc, 0x0940c266, "");
SYMBOL_CRC(drm_atomic_set_mode_prop_for_crtc, 0x301496ae, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_plane, 0x4ffffc01, "");
SYMBOL_CRC(drm_atomic_set_fb_for_plane, 0x40b48d8a, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_connector, 0xa7675aeb, "");
SYMBOL_CRC(__drmm_add_action, 0x95e7ccf2, "");
SYMBOL_CRC(__drmm_add_action_or_reset, 0xf39d89d9, "");
SYMBOL_CRC(drmm_kmalloc, 0x84ce055a, "");
SYMBOL_CRC(drmm_kstrdup, 0xc6382587, "_gpl");
SYMBOL_CRC(drmm_kfree, 0xb9154d1a, "");
SYMBOL_CRC(drmm_mutex_init, 0xff6ef2dc, "");
SYMBOL_CRC(drm_vblank_work_schedule, 0xb1520ce2, "");
SYMBOL_CRC(drm_vblank_work_cancel_sync, 0x290da7de, "");
SYMBOL_CRC(drm_vblank_work_flush, 0xfb237447, "");
SYMBOL_CRC(drm_vblank_work_init, 0xa105b2d4, "");
SYMBOL_CRC(drm_compat_ioctl, 0x4ea80ac5, "");
SYMBOL_CRC(drm_panel_init, 0x6a3066b4, "");
SYMBOL_CRC(drm_panel_add, 0x6f19f681, "");
SYMBOL_CRC(drm_panel_remove, 0x6e85cb5c, "");
SYMBOL_CRC(drm_panel_prepare, 0xd3fd3a30, "");
SYMBOL_CRC(drm_panel_unprepare, 0x4ec9b00f, "");
SYMBOL_CRC(drm_panel_enable, 0x6ca9c077, "");
SYMBOL_CRC(drm_panel_disable, 0xae37e6ba, "");
SYMBOL_CRC(drm_panel_get_modes, 0xf6e72123, "");
SYMBOL_CRC(drm_panel_of_backlight, 0xdd0a9726, "");
SYMBOL_CRC(drm_debugfs_create_files, 0xc9368a13, "");
SYMBOL_CRC(drm_debugfs_remove_files, 0x3c84cd61, "");
SYMBOL_CRC(drm_crtc_add_crc_entry, 0x2d9c7d46, "_gpl");
SYMBOL_CRC(__drm_set_edid_firmware_path, 0x31b8a5e3, "");
SYMBOL_CRC(__drm_get_edid_firmware_path, 0x03c63897, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x185d46d5, "clear_user_rep_good" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x76c7ae3e, "anon_inode_getfile" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe0a4baf9, "ww_mutex_lock_interruptible" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xcde72b4c, "alloc_anon_inode" },
	{ 0xea7876f3, "show_class_attr_string" },
	{ 0x18108c8d, "kthread_cancel_work_sync" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0xf11b0d0, "kthread_create_worker" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x97a739c4, "kthread_flush_work" },
	{ 0xc3e755bf, "bpf_trace_run4" },
	{ 0xf37fc324, "ida_destroy" },
	{ 0xf3e1306c, "__class_create" },
	{ 0xdf101b3, "idr_find" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x5aead210, "dma_resv_init" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xb2397060, "dma_resv_wait_timeout" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0xf9494d7f, "kthread_flush_worker" },
	{ 0x1952790e, "finish_wait" },
	{ 0x6749d53f, "hdmi_vendor_infoframe_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5c8942ba, "request_firmware" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x58b41713, "idr_replace" },
	{ 0x97de2b83, "debug_locks_silent" },
	{ 0x13110488, "ww_mutex_unlock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb6028004, "device_initialize" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc8edcc95, "fd_install" },
	{ 0x98e60eaa, "dma_fence_chain_ops" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb1515cbe, "unmap_mapping_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x387c0b31, "iput" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0xa1718393, "__pagevec_release" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xcba6cf56, "dma_fence_add_callback" },
	{ 0x6e5001cc, "synchronize_srcu" },
	{ 0x33a44216, "get_device" },
	{ 0x81fd654a, "dma_buf_attach" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xd6207edf, "class_create_file_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xf6687cb9, "wake_up_process" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0xa113d6ae, "vga_switcheroo_unlock_ddc" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x599f6f9e, "dma_resv_reset_max_fences" },
	{ 0xe01913f0, "ww_mutex_trylock" },
	{ 0x5832f266, "register_acpi_bus_type" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfa89099a, "devm_of_find_backlight" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0e52e56, "clear_user_original" },
	{ 0xad1ab0bf, "dma_max_mapping_size" },
	{ 0x211fcf87, "put_device" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x89bc850a, "param_ops_dyndbg_classes" },
	{ 0xd158b794, "dma_buf_export" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa8d0f07f, "dma_buf_map_attachment" },
	{ 0xfc691f80, "aperture_remove_conflicting_devices" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xac05771b, "kthread_queue_work" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcd035937, "idr_get_next" },
	{ 0xc624b289, "debug_check_no_locks_freed" },
	{ 0xa41e8811, "dma_fence_remove_callback" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xc6cbbc89, "capable" },
	{ 0x339178ad, "module_put" },
	{ 0x3bf8a208, "atomic_dec_and_mutex_lock" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x578dd92, "devm_add_action" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2349b131, "sysfs_create_link" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0xb14bce72, "idr_remove" },
	{ 0xb64e150b, "dma_fence_chain_walk" },
	{ 0x18c9486b, "mark_page_accessed" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb00a5772, "__task_pid_nr_ns" },
	{ 0x1c8d8d56, "kobject_uevent_env" },
	{ 0x4ea5d10, "ksize" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0x7c56e19b, "shmem_file_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x1d617a70, "dma_fence_get_stub" },
	{ 0x2e439142, "drm_get_panel_orientation_quirk" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xf7b274d2, "fput" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0x750c2a0a, "dma_buf_unmap_attachment" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x65b486c1, "device_add" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x2b6c77a2, "sysfs_remove_link" },
	{ 0x8e4598b7, "idr_alloc" },
	{ 0xaf976845, "pid_task" },
	{ 0xd78d76ea, "vga_switcheroo_lock_ddc" },
	{ 0x86be4af0, "__srcu_read_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x6fab2738, "radix_tree_preloads" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xabc9d2e2, "dma_fence_signal" },
	{ 0x7f3fd4ff, "dma_resv_fini" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x83395c1a, "_raw_write_lock" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x3d91d9ff, "dma_buf_get" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x8f8e1c34, "aperture_remove_conflicting_pci_devices" },
	{ 0xa178d36b, "ww_mutex_lock" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x81d585eb, "shmem_read_mapping_page_gfp" },
	{ 0xa66400cf, "dma_buf_put" },
	{ 0x3155b23d, "ida_free" },
	{ 0xbecab81f, "clear_user_erms" },
	{ 0x825f814, "dma_buf_fd" },
	{ 0xcea9fa41, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3b7da8d, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xcf785fc, "dma_fence_init" },
	{ 0xab781570, "fb_get_options" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x59554d57, "device_register" },
	{ 0x538c7455, "device_del" },
	{ 0x114a0d95, "idr_destroy" },
	{ 0x9a9d552, "sg_alloc_table_from_pages_segment" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x9a80f418, "unregister_acpi_bus_type" },
	{ 0x709c929, "lock_acquire" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x9af0a615, "lock_release" },
	{ 0xf9a1f89e, "complete_all" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0x847b1d31, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce680037, "devm_aperture_acquire_for_platform_device" },
	{ 0xfd8ef4a8, "set_page_dirty" },
	{ 0xa34b7920, "init_pseudo" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x51d37445, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25e58a09, "hdmi_avi_infoframe_init" },
	{ 0x497ca1a3, "idr_for_each" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc575c737, "debug_locks_off" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x6fa8a2f8, "dma_map_sgtable" },
	{ 0x94bdfc98, "kthread_destroy_worker" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x22492224, "__dma_fence_unwrap_merge" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x135158a0, "dentry_open" },
	{ 0xe091c977, "list_sort" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1139550e, "__register_chrdev" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xf3c3712b, "seq_write" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xbc4ef506, "platform_bus_type" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd62d9156, "radix_tree_tagged" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x5082950c, "__srcu_read_unlock" },
	{ 0xa9462f69, "_raw_read_lock" },
	{ 0x1aa2b145, "i2c_transfer" },
	{ 0x69ab40cd, "dma_fence_allocate_private_stub" },
	{ 0xebb692b2, "dma_buf_detach" },
	{ 0xe8e9be52, "dma_fence_signal_timestamp" },
	{ 0xb7aff7e8, "dma_fence_chain_init" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0x2f12ffed, "single_release" },
	{ 0xa9bff41d, "check_move_unevictable_pages" },
	{ 0x3309c539, "pid_vnr" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x6e970e6c, "sched_set_fifo" },
	{ 0xa52b2001, "simple_release_fs" },
	{ 0xf8ba36e0, "dma_unmap_sg_attrs" },
	{ 0xb3109203, "kill_anon_super" },
	{ 0x756bd7d0, "from_kuid_munged" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x81188c30, "match_string" },
	{ 0x87df32bb, "fwnode_handle_put" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc07504e8, "reservation_ww_class" },
	{ 0x754d539c, "strlen" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf540cc43, "dma_fence_chain_find_seqno" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xbb498b4e, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x38a4f93d, "single_open" },
	{ 0x76776184, "mutex_destroy" },
	{ 0x349cba85, "strchr" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xabdc439, "cc_platform_has" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x51945430, "sync_file_get_fence" },
	{ 0x7bf8c44b, "put_pid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x578434ab, "pci_bus_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x18873e4f, "class_remove_file_ns" },
	{ 0xc400ebfc, "simple_pin_fs" },
	{ 0x99fb1220, "sync_file_create" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3A0854931F852094F93BF1E");
