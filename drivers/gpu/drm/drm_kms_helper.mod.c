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

SYMBOL_CRC(drm_bridge_connector_enable_hpd, 0x0547dae5, "_gpl");
SYMBOL_CRC(drm_bridge_connector_disable_hpd, 0x7717256c, "_gpl");
SYMBOL_CRC(drm_bridge_connector_init, 0xdf54de6e, "_gpl");
SYMBOL_CRC(drm_helper_encoder_in_use, 0xeffb70d8, "");
SYMBOL_CRC(drm_helper_crtc_in_use, 0x4252665e, "");
SYMBOL_CRC(drm_helper_disable_unused_functions, 0xed407a10, "");
SYMBOL_CRC(drm_crtc_helper_set_mode, 0x139e1cd4, "");
SYMBOL_CRC(drm_crtc_helper_set_config, 0x83d4e589, "");
SYMBOL_CRC(drm_helper_connector_dpms, 0xe9bad6bd, "");
SYMBOL_CRC(drm_helper_resume_force_mode, 0xff7b59a7, "");
SYMBOL_CRC(drm_helper_force_disable_all, 0x3e343325, "");
SYMBOL_CRC(drm_i2c_encoder_init, 0x6dc11d51, "");
SYMBOL_CRC(drm_i2c_encoder_destroy, 0xa8b1112a, "");
SYMBOL_CRC(drm_i2c_encoder_dpms, 0xa612382a, "");
SYMBOL_CRC(drm_i2c_encoder_mode_fixup, 0xf1265a03, "");
SYMBOL_CRC(drm_i2c_encoder_prepare, 0xa3aa58bd, "");
SYMBOL_CRC(drm_i2c_encoder_commit, 0x18373afb, "");
SYMBOL_CRC(drm_i2c_encoder_mode_set, 0x997b0b57, "");
SYMBOL_CRC(drm_i2c_encoder_detect, 0x322693df, "");
SYMBOL_CRC(drm_i2c_encoder_save, 0x51fad811, "");
SYMBOL_CRC(drm_i2c_encoder_restore, 0x64c546f8, "");
SYMBOL_CRC(drm_flip_work_allocate_task, 0xcf11a549, "");
SYMBOL_CRC(drm_flip_work_queue_task, 0x92e90de8, "");
SYMBOL_CRC(drm_flip_work_queue, 0x7a43ba6e, "");
SYMBOL_CRC(drm_flip_work_commit, 0x04e44fce, "");
SYMBOL_CRC(drm_flip_work_init, 0x767fc45f, "");
SYMBOL_CRC(drm_flip_work_cleanup, 0xd0eb3e18, "");
SYMBOL_CRC(drm_kms_helper_poll_enable, 0xacc4e97e, "");
SYMBOL_CRC(drm_helper_probe_detect, 0x53eacc8c, "");
SYMBOL_CRC(drm_helper_probe_single_connector_modes, 0x7f30c988, "");
SYMBOL_CRC(drm_kms_helper_hotplug_event, 0x2b878fb1, "");
SYMBOL_CRC(drm_kms_helper_connector_hotplug_event, 0x13aae0e8, "");
SYMBOL_CRC(drm_kms_helper_is_poll_worker, 0x5a4734d1, "");
SYMBOL_CRC(drm_kms_helper_poll_disable, 0xa57360aa, "");
SYMBOL_CRC(drm_kms_helper_poll_init, 0xa0a44085, "");
SYMBOL_CRC(drm_kms_helper_poll_fini, 0xf8ffb638, "");
SYMBOL_CRC(drm_connector_helper_hpd_irq_event, 0xe186329f, "");
SYMBOL_CRC(drm_helper_hpd_irq_event, 0x054eb443, "");
SYMBOL_CRC(drm_crtc_helper_mode_valid_fixed, 0x7b031ba9, "");
SYMBOL_CRC(drm_connector_helper_get_modes_from_ddc, 0x233ae8e1, "");
SYMBOL_CRC(drm_connector_helper_get_modes_fixed, 0x699c58ac, "");
SYMBOL_CRC(drm_connector_helper_get_modes, 0x205f2fe2, "");
SYMBOL_CRC(drm_plane_helper_update_primary, 0x789c1a37, "");
SYMBOL_CRC(drm_plane_helper_disable_primary, 0xfa7c8f15, "");
SYMBOL_CRC(drm_plane_helper_destroy, 0xbe267ba8, "");
SYMBOL_CRC(drm_plane_helper_atomic_check, 0x599c0809, "");
SYMBOL_CRC(drm_atomic_helper_check_modeset, 0x90675e11, "");
SYMBOL_CRC(drm_atomic_helper_check_wb_encoder_state, 0x8622bd8a, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_state, 0xb1acd8a6, "");
SYMBOL_CRC(drm_atomic_helper_check_crtc_state, 0xb7cee618, "");
SYMBOL_CRC(drm_atomic_helper_check_planes, 0x30a68142, "");
SYMBOL_CRC(drm_atomic_helper_check, 0x10c84771, "");
SYMBOL_CRC(drm_atomic_helper_update_legacy_modeset_state, 0x8e180985, "");
SYMBOL_CRC(drm_atomic_helper_calc_timestamping_constants, 0xcc736988, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_disables, 0x46f3b6ba, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_enables, 0x0a5e563e, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_fences, 0xd7451ebb, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_vblanks, 0x422a57dd, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_flip_done, 0xbb0a80d8, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail, 0x8d604927, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail_rpm, 0x804fa1c0, "");
SYMBOL_CRC(drm_atomic_helper_async_check, 0x353844ff, "");
SYMBOL_CRC(drm_atomic_helper_async_commit, 0xaa692174, "");
SYMBOL_CRC(drm_atomic_helper_commit, 0x15ce5b2d, "");
SYMBOL_CRC(drm_atomic_helper_setup_commit, 0xeec2d659, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_dependencies, 0x7259ea3c, "");
SYMBOL_CRC(drm_atomic_helper_fake_vblank, 0xe97b87d4, "");
SYMBOL_CRC(drm_atomic_helper_commit_hw_done, 0x3b039b6c, "");
SYMBOL_CRC(drm_atomic_helper_commit_cleanup_done, 0x97d06ce5, "");
SYMBOL_CRC(drm_atomic_helper_prepare_planes, 0x4942e732, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes, 0xfb4758ad, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes_on_crtc, 0x9aa4088a, "");
SYMBOL_CRC(drm_atomic_helper_disable_planes_on_crtc, 0x0f8e77a8, "");
SYMBOL_CRC(drm_atomic_helper_cleanup_planes, 0x13521664, "");
SYMBOL_CRC(drm_atomic_helper_swap_state, 0xe85e1dd8, "");
SYMBOL_CRC(drm_atomic_helper_update_plane, 0x805e9404, "");
SYMBOL_CRC(drm_atomic_helper_disable_plane, 0x6888b4cf, "");
SYMBOL_CRC(drm_atomic_helper_set_config, 0xd9f6698c, "");
SYMBOL_CRC(drm_atomic_helper_disable_all, 0x1bc689a1, "");
SYMBOL_CRC(drm_atomic_helper_shutdown, 0x0614e08d, "");
SYMBOL_CRC(drm_atomic_helper_duplicate_state, 0xc52012ee, "");
SYMBOL_CRC(drm_atomic_helper_suspend, 0x48043f3d, "");
SYMBOL_CRC(drm_atomic_helper_commit_duplicated_state, 0x00149416, "");
SYMBOL_CRC(drm_atomic_helper_resume, 0xca0da0bf, "");
SYMBOL_CRC(drm_atomic_helper_page_flip, 0xafdd8c43, "");
SYMBOL_CRC(drm_atomic_helper_page_flip_target, 0x93ebc74a, "");
SYMBOL_CRC(drm_atomic_helper_bridge_propagate_bus_fmt, 0x073bfaca, "");
SYMBOL_CRC(drm_simple_encoder_init, 0xbf58e452, "");
SYMBOL_CRC(__drmm_simple_encoder_alloc, 0x0c002068, "");
SYMBOL_CRC(drm_simple_display_pipe_attach_bridge, 0x2cd41230, "");
SYMBOL_CRC(drm_simple_display_pipe_init, 0x987b3f5d, "");
SYMBOL_CRC(drm_helper_move_panel_connectors_to_head, 0xb84727f3, "");
SYMBOL_CRC(drm_helper_mode_fill_fb_struct, 0x634cace2, "");
SYMBOL_CRC(drm_crtc_init, 0x45f57240, "");
SYMBOL_CRC(drm_mode_config_helper_suspend, 0x8c7a699c, "");
SYMBOL_CRC(drm_mode_config_helper_resume, 0x89af90d5, "");
SYMBOL_CRC(drm_gem_plane_helper_prepare_fb, 0x1742f3ba, "_gpl");
SYMBOL_CRC(drm_gem_simple_display_pipe_prepare_fb, 0xf657406c, "");
SYMBOL_CRC(__drm_gem_duplicate_shadow_plane_state, 0x214088c5, "");
SYMBOL_CRC(drm_gem_duplicate_shadow_plane_state, 0x62dd8c10, "");
SYMBOL_CRC(__drm_gem_destroy_shadow_plane_state, 0x15d53df5, "");
SYMBOL_CRC(drm_gem_destroy_shadow_plane_state, 0xdd7e79a1, "");
SYMBOL_CRC(__drm_gem_reset_shadow_plane, 0x8bebbff1, "");
SYMBOL_CRC(drm_gem_reset_shadow_plane, 0x136a31e8, "");
SYMBOL_CRC(drm_gem_prepare_shadow_fb, 0x0879da0c, "");
SYMBOL_CRC(drm_gem_cleanup_shadow_fb, 0x420a1356, "");
SYMBOL_CRC(drm_gem_simple_kms_prepare_shadow_fb, 0x597b1177, "");
SYMBOL_CRC(drm_gem_simple_kms_cleanup_shadow_fb, 0x16da0b57, "");
SYMBOL_CRC(drm_gem_simple_kms_reset_shadow_plane, 0xea3f83ab, "");
SYMBOL_CRC(drm_gem_simple_kms_duplicate_shadow_plane_state, 0x8f93681f, "");
SYMBOL_CRC(drm_gem_simple_kms_destroy_shadow_plane_state, 0x365b181a, "");
SYMBOL_CRC(drm_gem_fb_get_obj, 0x180883e5, "_gpl");
SYMBOL_CRC(drm_gem_fb_destroy, 0x73ce3cf9, "");
SYMBOL_CRC(drm_gem_fb_create_handle, 0x8a5abdd5, "");
SYMBOL_CRC(drm_gem_fb_init_with_funcs, 0x45d92799, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_funcs, 0x04939e9e, "_gpl");
SYMBOL_CRC(drm_gem_fb_create, 0x5aeeb24b, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_dirty, 0x6b63d761, "_gpl");
SYMBOL_CRC(drm_gem_fb_vmap, 0x2bbd042c, "");
SYMBOL_CRC(drm_gem_fb_vunmap, 0xe02252c3, "");
SYMBOL_CRC(drm_gem_fb_begin_cpu_access, 0x94ef0872, "");
SYMBOL_CRC(drm_gem_fb_end_cpu_access, 0xf4cc7347, "");
SYMBOL_CRC(drm_gem_fb_afbc_init, 0x32879a55, "_gpl");
SYMBOL_CRC(__drm_atomic_helper_crtc_state_reset, 0xfde248f5, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_reset, 0xdb378e07, "");
SYMBOL_CRC(drm_atomic_helper_crtc_reset, 0x126a8df3, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_duplicate_state, 0x2ce3ce2d, "");
SYMBOL_CRC(drm_atomic_helper_crtc_duplicate_state, 0x6975f042, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_destroy_state, 0x39044a58, "");
SYMBOL_CRC(drm_atomic_helper_crtc_destroy_state, 0x91d8c849, "");
SYMBOL_CRC(__drm_atomic_helper_plane_state_reset, 0xe2acc200, "");
SYMBOL_CRC(__drm_atomic_helper_plane_reset, 0x8d6a2633, "");
SYMBOL_CRC(drm_atomic_helper_plane_reset, 0x59870405, "");
SYMBOL_CRC(__drm_atomic_helper_plane_duplicate_state, 0x57e2ac67, "");
SYMBOL_CRC(drm_atomic_helper_plane_duplicate_state, 0xc7927adf, "");
SYMBOL_CRC(__drm_atomic_helper_plane_destroy_state, 0x3fbb6158, "");
SYMBOL_CRC(drm_atomic_helper_plane_destroy_state, 0xf9260ab9, "");
SYMBOL_CRC(__drm_atomic_helper_connector_state_reset, 0x55b3b811, "");
SYMBOL_CRC(__drm_atomic_helper_connector_reset, 0xa61b5310, "");
SYMBOL_CRC(drm_atomic_helper_connector_reset, 0x5e300773, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_reset, 0xd246241b, "");
SYMBOL_CRC(__drm_atomic_helper_connector_duplicate_state, 0xbba44474, "");
SYMBOL_CRC(drm_atomic_helper_connector_duplicate_state, 0x7893ffaf, "");
SYMBOL_CRC(__drm_atomic_helper_connector_destroy_state, 0xda095c13, "");
SYMBOL_CRC(drm_atomic_helper_connector_destroy_state, 0x35d3af83, "");
SYMBOL_CRC(__drm_atomic_helper_private_obj_duplicate_state, 0x81c9e3a9, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_duplicate_state, 0x179f435f, "");
SYMBOL_CRC(drm_atomic_helper_bridge_duplicate_state, 0xa7b3291e, "");
SYMBOL_CRC(drm_atomic_helper_bridge_destroy_state, 0xdc78f93e, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_reset, 0x7296397d, "");
SYMBOL_CRC(drm_atomic_helper_bridge_reset, 0xf341f266, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_damage, 0xde271964, "");
SYMBOL_CRC(drm_atomic_helper_dirtyfb, 0xa251bfcb, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_init, 0xc6d86f02, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_next, 0x6b5c2b06, "");
SYMBOL_CRC(drm_atomic_helper_damage_merged, 0x557dbaca, "");
SYMBOL_CRC(drm_fb_clip_offset, 0xb6a6b711, "");
SYMBOL_CRC(drm_fb_memcpy, 0xd14b342e, "");
SYMBOL_CRC(drm_fb_swab, 0x103ee7bd, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb332, 0xf51fe21f, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb565, 0x33a14fec, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb888, 0x7f13b987, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xrgb2101010, 0x05ca51b2, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_gray8, 0xaa43ec6b, "");
SYMBOL_CRC(drm_fb_blit, 0x2e6bf9f4, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_mono, 0x6b963ba6, "");
SYMBOL_CRC(drm_fb_build_fourcc_list, 0x190f379b, "");
SYMBOL_CRC(drm_self_refresh_helper_update_avg_times, 0xd6699b46, "");
SYMBOL_CRC(drm_self_refresh_helper_alter_state, 0xf23374cc, "");
SYMBOL_CRC(drm_self_refresh_helper_init, 0x63d15cb1, "");
SYMBOL_CRC(drm_self_refresh_helper_cleanup, 0x0f6c8a55, "");
SYMBOL_CRC(drm_rect_intersect, 0x871ab41a, "");
SYMBOL_CRC(drm_rect_clip_scaled, 0x99fd20aa, "");
SYMBOL_CRC(drm_rect_calc_hscale, 0x2d50570f, "");
SYMBOL_CRC(drm_rect_calc_vscale, 0x91fec1cc, "");
SYMBOL_CRC(drm_rect_debug_print, 0xcb2340b8, "");
SYMBOL_CRC(drm_rect_rotate, 0xb053adda, "");
SYMBOL_CRC(drm_rect_rotate_inv, 0x6e30ba8e, "");
SYMBOL_CRC(drm_bridge_is_panel, 0x7eaebab3, "");
SYMBOL_CRC(drm_panel_bridge_add, 0xe2e3b00d, "");
SYMBOL_CRC(drm_panel_bridge_add_typed, 0xe9586734, "");
SYMBOL_CRC(drm_panel_bridge_remove, 0x6d96d878, "");
SYMBOL_CRC(drm_panel_bridge_set_orientation, 0x609c432d, "");
SYMBOL_CRC(devm_drm_panel_bridge_add, 0x9fd63963, "");
SYMBOL_CRC(devm_drm_panel_bridge_add_typed, 0x33d7630f, "");
SYMBOL_CRC(drmm_panel_bridge_add, 0x8aa8a6fc, "");
SYMBOL_CRC(drm_panel_bridge_connector, 0xcf5e712f, "");
SYMBOL_CRC(drm_fb_helper_debug_enter, 0x2abcb250, "");
SYMBOL_CRC(drm_fb_helper_debug_leave, 0x37fd63eb, "");
SYMBOL_CRC(drm_fb_helper_restore_fbdev_mode_unlocked, 0x18bc4aeb, "");
SYMBOL_CRC(drm_fb_helper_blank, 0xf6bab080, "");
SYMBOL_CRC(drm_fb_helper_prepare, 0xa70cb1b6, "");
SYMBOL_CRC(drm_fb_helper_init, 0x224e7c5a, "");
SYMBOL_CRC(drm_fb_helper_alloc_fbi, 0x156d1d9c, "");
SYMBOL_CRC(drm_fb_helper_unregister_fbi, 0x9b46a22a, "");
SYMBOL_CRC(drm_fb_helper_fini, 0x598a43a4, "");
SYMBOL_CRC(drm_fb_helper_deferred_io, 0x8ed03351, "");
SYMBOL_CRC(drm_fb_helper_sys_read, 0x04b4566e, "");
SYMBOL_CRC(drm_fb_helper_sys_write, 0x3268df62, "");
SYMBOL_CRC(drm_fb_helper_sys_fillrect, 0xabb75e7a, "");
SYMBOL_CRC(drm_fb_helper_sys_copyarea, 0x1acc2ee9, "");
SYMBOL_CRC(drm_fb_helper_sys_imageblit, 0xe6494109, "");
SYMBOL_CRC(drm_fb_helper_cfb_fillrect, 0xcb83bddd, "");
SYMBOL_CRC(drm_fb_helper_cfb_copyarea, 0x7af8cd4e, "");
SYMBOL_CRC(drm_fb_helper_cfb_imageblit, 0x357a001a, "");
SYMBOL_CRC(drm_fb_helper_set_suspend, 0xed30e27c, "");
SYMBOL_CRC(drm_fb_helper_set_suspend_unlocked, 0xc4a95fb8, "");
SYMBOL_CRC(drm_fb_helper_setcmap, 0x479979a9, "");
SYMBOL_CRC(drm_fb_helper_ioctl, 0x6ea2d3c0, "");
SYMBOL_CRC(drm_fb_helper_check_var, 0x4dfb5955, "");
SYMBOL_CRC(drm_fb_helper_set_par, 0x1f872618, "");
SYMBOL_CRC(drm_fb_helper_pan_display, 0xf75aa19d, "");
SYMBOL_CRC(drm_fb_helper_fill_info, 0x45dd008b, "");
SYMBOL_CRC(drm_fb_helper_initial_config, 0xcb3d4877, "");
SYMBOL_CRC(drm_fb_helper_hotplug_event, 0xa52a7cb3, "");
SYMBOL_CRC(drm_fb_helper_lastclose, 0x6245e565, "");
SYMBOL_CRC(drm_fb_helper_output_poll_changed, 0x2a7dedaa, "");
SYMBOL_CRC(drm_fbdev_generic_setup, 0xe8f24a27, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfb5686f3, "unregister_framebuffer" },
	{ 0xbcc582dd, "drm_framebuffer_cleanup" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x876ed2cb, "drm_client_register" },
	{ 0x82232e5f, "drm_writeback_prepare_job" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xf6e72123, "drm_panel_get_modes" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa2e8c5ac, "drm_connector_list_update" },
	{ 0x4f5bc33e, "drm_bridge_add" },
	{ 0x63122447, "drm_bridge_chain_mode_valid" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x9d2e7707, "unregister_sysrq_key" },
	{ 0xa2f22cb4, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x7f00a51a, "drm_add_override_edid_modes" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xa0a7ce6f, "drm_client_rotation" },
	{ 0x2c6fbb99, "drm_client_buffer_vmap" },
	{ 0x6ca9c077, "drm_panel_enable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf51306ec, "drm_framebuffer_init" },
	{ 0x3027719b, "drm_mode_validate_driver" },
	{ 0x3853d8c1, "drm_atomic_add_affected_planes" },
	{ 0xa6ea6cad, "dma_buf_end_cpu_access" },
	{ 0xf2d8e7da, "drm_modeset_unlock_all" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x1395cc3d, "drm_mode_probed_add" },
	{ 0x9ac65f17, "drm_atomic_add_affected_connectors" },
	{ 0xbdbd9203, "cfb_copyarea" },
	{ 0x98cf6f0d, "drm_bridge_hpd_enable" },
	{ 0xfa35a98b, "drm_crtc_vblank_count" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0x1952790e, "finish_wait" },
	{ 0xadf4a0df, "drm_modeset_lock_all" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x63d548c2, "drm_client_framebuffer_delete" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0xe4d23308, "drm_client_framebuffer_create" },
	{ 0x4b17dca, "drm_atomic_bridge_chain_enable" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x71cd5960, "drm_mode_object_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x488337e7, "drm_gem_vmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xaaa73626, "drm_crtc_cleanup" },
	{ 0x17955737, "drm_gem_vunmap" },
	{ 0xd31327cf, "drm_connector_list_iter_begin" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x68311ef9, "fb_deferred_io_init" },
	{ 0xeaad3358, "drm_mode_set_config_internal" },
	{ 0x7de7fcf2, "fb_deferred_io_cleanup" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x11609365, "framebuffer_alloc" },
	{ 0xfe56ad31, "drm_encoder_cleanup" },
	{ 0xceb897bf, "drm_connector_unregister" },
	{ 0x65111394, "drm_modeset_acquire_init" },
	{ 0xccb9c1cf, "drm_client_modeset_probe" },
	{ 0xa36c6026, "drm_warn_on_modeset_not_all_locked" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x192997b5, "drm_plane_get_damage_clips" },
	{ 0x86055fa8, "devres_add" },
	{ 0x1556d355, "dma_fence_wait_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb26890fb, "drm_add_modes_noedid" },
	{ 0x98970f8e, "drm_bridge_remove" },
	{ 0x689ada78, "drm_mode_object_put" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0x8da06445, "drm_crtc_vblank_get" },
	{ 0x3fa8ad5f, "drm_gem_object_lookup" },
	{ 0x13aa02d5, "drm_crtc_send_vblank_event" },
	{ 0x96c7d7e, "drm_connector_attach_encoder" },
	{ 0xb773cde9, "wait_for_completion_interruptible_timeout" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0xbea6e17a, "fb_sys_write" },
	{ 0x284366b2, "drm_atomic_normalize_zpos" },
	{ 0x434e4224, "drm_edid_connector_update" },
	{ 0xcc28cbde, "drm_sysfs_hotplug_event" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x5b339a0e, "drm_bridge_hpd_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x12bbaf11, "sys_imageblit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf39d89d9, "__drmm_add_action_or_reset" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xbf4d1dd5, "drm_crtc_vblank_reset" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x40d04664, "console_trylock" },
	{ 0x4f1705f7, "sys_fillrect" },
	{ 0x9bf7dd62, "drm_connector_list_iter_end" },
	{ 0x4ffffc01, "drm_atomic_set_crtc_for_plane" },
	{ 0xf5dc903f, "drm_client_modeset_dpms" },
	{ 0xca12bd2d, "drm_mode_prune_invalid" },
	{ 0x3ed04bb9, "drm_client_dev_hotplug" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x6e22b30b, "dma_resv_get_singleton" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x4d8afa47, "drm_plane_cleanup" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x339178ad, "module_put" },
	{ 0x94888aca, "dma_buf_begin_cpu_access" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xc8fb3ca7, "drm_atomic_get_crtc_state" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xf75e3433, "drm_client_init" },
	{ 0x3d63b43f, "drm_crtc_wait_one_vblank" },
	{ 0xc1a3b09d, "__drmm_encoder_alloc" },
	{ 0xd7a9cf42, "drm_mode_validate_size" },
	{ 0xaed9935d, "drm_modeset_lock" },
	{ 0xc844b9d5, "drm_client_modeset_commit_locked" },
	{ 0xe25a391b, "drm_modeset_unlock" },
	{ 0xae37e6ba, "drm_panel_disable" },
	{ 0xc045f7a5, "drm_property_replace_blob" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x21ba8fe0, "drm_connector_init" },
	{ 0x66ad9cd2, "devm_kfree" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1eb30f15, "drm_writeback_cleanup_job" },
	{ 0x5fec7683, "drm_modeset_lock_all_ctx" },
	{ 0x6d8cbc22, "i2c_unregister_device" },
	{ 0x40b48d8a, "drm_atomic_set_fb_for_plane" },
	{ 0xa4301d00, "__drm_universal_plane_alloc" },
	{ 0xa23ed958, "drm_connector_init_with_ddc" },
	{ 0xfca39e26, "drm_add_edid_modes" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0xbde9d91a, "drm_edid_read" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x6f7b24b7, "drm_crtc_commit_wait" },
	{ 0x88de3875, "drm_dev_has_vblank" },
	{ 0x4f364e24, "register_framebuffer" },
	{ 0xca2e084b, "wait_for_completion_interruptible" },
	{ 0x19ad20c6, "__drm_atomic_helper_disable_plane" },
	{ 0x5b890e4f, "drm_connector_set_orientation_from_panel" },
	{ 0x7f6d7bad, "mod_delayed_work_on" },
	{ 0xa8ce81ce, "drm_gem_handle_create" },
	{ 0xa7675aeb, "drm_atomic_set_crtc_for_connector" },
	{ 0xcc961dee, "drm_crtc_init_with_planes" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x36d6e507, "drm_mode_duplicate" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x1946a4c4, "drm_crtc_vblank_put" },
	{ 0xef993821, "i2c_new_client_device" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x4600ffc8, "__drm_dev_dbg" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x86464e31, "cfb_imageblit" },
	{ 0x1a09863a, "drm_plane_get_damage_clips_count" },
	{ 0x188128e, "drm_atomic_commit" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x97628460, "fb_deferred_io_mmap" },
	{ 0xdc490450, "drm_atomic_state_alloc" },
	{ 0xe0340924, "drm_client_modeset_commit" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x6ba4cb1a, "drm_atomic_bridge_chain_post_disable" },
	{ 0x5a097bcc, "drm_connector_update_edid_property" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x31b8a5e3, "__drm_set_edid_firmware_path" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xc631580a, "console_unlock" },
	{ 0x6bbe57f4, "fb_set_suspend" },
	{ 0xf9a1f89e, "complete_all" },
	{ 0x4d929890, "drm_client_release" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x8d72789e, "drm_edid_is_valid" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xc8e43c44, "__drm_atomic_helper_set_config" },
	{ 0xe9ce5474, "mutex_trylock" },
	{ 0x301496ae, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0xdae7d00c, "drm_get_format_info" },
	{ 0x3c69e900, "drm_connector_cleanup" },
	{ 0x165481e3, "drm_universal_plane_init" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xff34f0b2, "sys_copyarea" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x38d5e539, "drm_connector_list_iter_next" },
	{ 0xc20bb5d5, "drm_modeset_acquire_fini" },
	{ 0xaae3d088, "drm_encoder_init" },
	{ 0x999e8297, "vfree" },
	{ 0x979d927a, "drm_object_property_get_default_value" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0x7e941f79, "current_work" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xd9e6746, "cfb_fillrect" },
	{ 0xad4ef4e0, "drm_master_internal_acquire" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x7e9d9e25, "drm_modeset_backoff" },
	{ 0xd3fd3a30, "drm_panel_prepare" },
	{ 0xc80351b8, "drm_bridge_chain_mode_set" },
	{ 0x7972a911, "drm_client_buffer_vunmap" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0xe254bb69, "fb_sys_read" },
	{ 0x3c63897, "__drm_get_edid_firmware_path" },
	{ 0x5e3f4008, "drm_atomic_get_plane_state" },
	{ 0xa17ca3ca, "drm_atomic_bridge_chain_check" },
	{ 0xb7aff7e8, "dma_fence_chain_init" },
	{ 0xb868ac5c, "register_sysrq_key" },
	{ 0x76307547, "drm_property_blob_get" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xbd37ecca, "drm_property_blob_put" },
	{ 0xb165025, "drm_mode_destroy" },
	{ 0xe933e23c, "drm_bridge_attach" },
	{ 0x7145470f, "drm_set_preferred_mode" },
	{ 0x121b0b78, "drm_atomic_bridge_chain_pre_enable" },
	{ 0x1227e3db, "drm_atomic_state_clear" },
	{ 0x96f498dd, "drm_mode_config_reset" },
	{ 0xc5e68ab9, "drm_property_create_blob" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x70fb11b7, "drm_modeset_drop_locks" },
	{ 0x11af4cf9, "framebuffer_release" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x42368123, "drm_atomic_bridge_chain_disable" },
	{ 0xedd3909f, "drm_mode_create_from_cmdline_mode" },
	{ 0x8bd5c991, "drm_mode_validate_ycbcr420" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x76776184, "mutex_destroy" },
	{ 0xc67d5de6, "drm_atomic_nonblocking_commit" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0xf863feb6, "try_wait_for_completion" },
	{ 0xc76c18e, "drm_master_internal_release" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x257b21f1, "drm_get_edid" },
	{ 0x68b55364, "drm_calc_timestamping_constants" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0xcdb99cc9, "drm_mode_init" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0x4ec9b00f, "drm_panel_unprepare" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x99c86f37, "drm_atomic_add_encoder_bridges" },
	{ 0xbf5d0761, "drm_atomic_get_connector_state" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfda56ba0, "drm_sysfs_connector_hotplug_event" },
	{ 0x37e5852d, "flush_work" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "drm,fb_sys_fops,sysimgblt,sysfillrect,syscopyarea");


MODULE_INFO(srcversion, "60773F9038A115F34748DC1");
