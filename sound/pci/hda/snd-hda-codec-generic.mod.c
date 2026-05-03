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

SYMBOL_CRC(snd_hda_gen_spec_init, 0x90ac9d6a, "_gpl");
SYMBOL_CRC(snd_hda_gen_add_kctl, 0xec5abc9b, "_gpl");
SYMBOL_CRC(snd_hda_get_path_idx, 0xc8de6331, "_gpl");
SYMBOL_CRC(snd_hda_get_path_from_idx, 0x1f29459d, "_gpl");
SYMBOL_CRC(snd_hda_add_new_path, 0x8f6223c1, "_gpl");
SYMBOL_CRC(snd_hda_activate_path, 0xb614e642, "_gpl");
SYMBOL_CRC(hda_main_out_badness, 0x76dc6871, "_gpl");
SYMBOL_CRC(hda_extra_out_badness, 0x871a6e44, "_gpl");
SYMBOL_CRC(snd_hda_gen_add_mute_led_cdev, 0x0ad8f55a, "_gpl");
SYMBOL_CRC(snd_hda_gen_add_micmute_led_cdev, 0x8c6b49f1, "_gpl");
SYMBOL_CRC(snd_hda_gen_fix_pin_power, 0x3d197703, "_gpl");
SYMBOL_CRC(snd_hda_gen_update_outputs, 0x34a4f265, "_gpl");
SYMBOL_CRC(snd_hda_gen_hp_automute, 0xd7884fe5, "_gpl");
SYMBOL_CRC(snd_hda_gen_line_automute, 0xfdf269dd, "_gpl");
SYMBOL_CRC(snd_hda_gen_mic_autoswitch, 0x85eb2b31, "_gpl");
SYMBOL_CRC(snd_hda_gen_path_power_filter, 0xf8e04635, "_gpl");
SYMBOL_CRC(snd_hda_gen_stream_pm, 0x8aa9c45c, "_gpl");
SYMBOL_CRC(snd_hda_gen_parse_auto_config, 0xa6320f24, "_gpl");
SYMBOL_CRC(snd_hda_gen_build_controls, 0x6889c424, "_gpl");
SYMBOL_CRC(snd_hda_gen_build_pcms, 0xd4d78f92, "_gpl");
SYMBOL_CRC(snd_hda_gen_init, 0xb67edc05, "_gpl");
SYMBOL_CRC(snd_hda_gen_free, 0x3c88bcd6, "_gpl");
SYMBOL_CRC(snd_hda_gen_check_power_status, 0x4ff3526b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x23786682, "snd_hda_apply_verbs" },
	{ 0xafdce921, "snd_hda_codec_amp_update" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5fac42a7, "snd_hda_add_new_ctls" },
	{ 0xeff1d54e, "snd_hda_get_connections" },
	{ 0x96b4a69d, "snd_hda_codec_amp_init_stereo" },
	{ 0xaffac498, "snd_hda_set_vmaster_tlv" },
	{ 0xb2a2a574, "hda_get_autocfg_input_label" },
	{ 0xa5b0421f, "query_amp_caps" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xabdd15db, "snd_hda_mixer_amp_volume_info" },
	{ 0x52670599, "snd_hda_jack_detect_state_mst" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5035496, "snd_hda_codec_setup_stream" },
	{ 0xfb0dfbc, "snd_hda_mixer_amp_switch_info" },
	{ 0x23ecc290, "hda_codec_driver_unregister" },
	{ 0xa2119a42, "snd_hda_codec_get_pincfg" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x87807ff0, "snd_hdac_codec_write" },
	{ 0x96848186, "scnprintf" },
	{ 0xa037e828, "snd_hda_jack_tbl_get_mst" },
	{ 0x3eae8f97, "snd_hda_multi_out_dig_open" },
	{ 0x69acdf38, "memcpy" },
	{ 0x855d3def, "snd_hda_add_vmaster_hook" },
	{ 0x37a0cba, "kfree" },
	{ 0xff712d22, "led_classdev_unregister" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x5f149a12, "snd_hda_codec_pcm_new" },
	{ 0xd1ff05c0, "__snd_hda_codec_cleanup_stream" },
	{ 0xb0bb20f0, "snd_ctl_sync_vmaster" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xb3849b2e, "snd_hda_multi_out_dig_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x288f93c8, "snd_hda_get_pin_label" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x5b89bc1d, "snd_hda_add_imux_item" },
	{ 0xe7629ac0, "snd_hda_correct_pin_ctl" },
	{ 0x9e167704, "_snd_hdac_read_parm" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xe9a655ee, "snd_hda_create_dig_out_ctls" },
	{ 0x5feaf12f, "snd_hda_multi_out_dig_close" },
	{ 0x824e7680, "snd_hda_get_conn_index" },
	{ 0xd35f2026, "snd_hda_multi_out_analog_open" },
	{ 0x6a7f7c51, "snd_hda_get_bool_hint" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7689c932, "snd_hda_create_spdif_share_sw" },
	{ 0xa459d506, "snd_hda_find_mixer_ctl" },
	{ 0xdc8d6f8e, "snd_hda_get_int_hint" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb6fbc735, "__hda_codec_driver_register" },
	{ 0xb7c0f443, "sort" },
	{ 0x60b239f, "snd_hda_parse_pin_defcfg" },
	{ 0xb31d8ba0, "snd_hda_codec_amp_init" },
	{ 0x1801cfbf, "snd_hda_create_spdif_in_ctls" },
	{ 0xdb35ec35, "is_jack_detectable" },
	{ 0xba2dc96d, "snd_hda_multi_out_analog_cleanup" },
	{ 0xec49b87d, "snd_hda_multi_out_analog_prepare" },
	{ 0xebe60d58, "snd_ctl_boolean_stereo_info" },
	{ 0x46ca5e8e, "snd_hda_get_conn_list" },
	{ 0xca254cbb, "snd_hda_mixer_amp_switch_get" },
	{ 0x3fb9184e, "snd_hda_codec_set_pin_target" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xe5282094, "led_classdev_register_ext" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x7fc4350d, "snd_hda_attach_beep_device" },
	{ 0x115c4b12, "_snd_hda_set_pin_ctl" },
	{ 0x11089ac7, "_ctype" },
	{ 0x892ff71c, "snd_hdac_regmap_write_raw" },
	{ 0x6e4886dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xfb578fc5, "memset" },
	{ 0xdac1d056, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x9d61ae9a, "snd_hda_check_amp_caps" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x166a61bb, "snd_hda_mixer_amp_switch_put" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2f7097b9, "snd_hda_jack_unsol_event" },
	{ 0x909cc91c, "snd_hda_check_amp_list_power" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x43f30597, "snd_hda_mixer_amp_tlv" },
	{ 0x53eb5089, "snd_hda_jack_add_kctls" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x93ed929b, "__snd_hda_add_vmaster" },
	{ 0x268d4513, "snd_hda_codec_amp_stereo" },
	{ 0x2954e419, "snd_hda_sync_vmaster_hook" },
	{ 0x93470395, "snd_hda_apply_fixup" },
	{ 0x9e5ff294, "snd_hda_enum_helper_info" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xcf05dd59, "snd_hda_get_default_vref" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x5cf7cb07, "snd_hdac_codec_read" },
	{ 0xb207abdc, "snd_hda_mixer_amp_volume_put" },
	{ 0xf8dc35ac, "snd_hda_input_mux_info" },
	{ 0xcd0a492, "snd_hda_multi_out_dig_prepare" },
	{ 0x349cba85, "strchr" },
	{ 0xe6f3fc6f, "snd_hda_codec_get_pin_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6e73c6b3, "snd_hdac_regmap_sync" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xfaf598c6, "snd_ctl_request_layer" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "806A8CDA367CBE91117A531");
