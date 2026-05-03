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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4abba320, "snd_hdac_get_connections" },
	{ 0x94de455b, "snd_hdac_power_up_pm" },
	{ 0x263c3152, "bcmp" },
	{ 0x19b78f3e, "snd_hdac_sync_audio_rate" },
	{ 0xa605f753, "snd_hda_jack_report_sync" },
	{ 0x450c7722, "snd_hdac_add_chmap_ctls" },
	{ 0xe93be6de, "snd_hda_jack_set_dirty_all" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b33cb1, "snd_jack_report" },
	{ 0xf5035496, "snd_hda_codec_setup_stream" },
	{ 0x1ed87ba2, "snd_hdac_channel_allocation" },
	{ 0xb3fdccc2, "snd_pcm_add_chmap_ctls" },
	{ 0x23ecc290, "hda_codec_driver_unregister" },
	{ 0xa2119a42, "snd_hda_codec_get_pincfg" },
	{ 0x87807ff0, "snd_hdac_codec_write" },
	{ 0x96848186, "scnprintf" },
	{ 0x9f644c3c, "snd_hda_jack_tbl_get_from_tag" },
	{ 0xa037e828, "snd_hda_jack_tbl_get_mst" },
	{ 0x3eae8f97, "snd_hda_multi_out_dig_open" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a93a7e1, "snd_hdac_query_supported_pcm" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5f149a12, "snd_hda_codec_pcm_new" },
	{ 0xd1ff05c0, "__snd_hda_codec_cleanup_stream" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x77c754a8, "snd_hdac_chmap_to_spk_mask" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xe71cf77, "snd_hda_get_dev_select" },
	{ 0xbcb5e995, "snd_hda_codec_update_widgets" },
	{ 0xe17dde74, "snd_ctl_new1" },
	{ 0x9e167704, "_snd_hdac_read_parm" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xd1dc9ea3, "snd_hda_jack_pin_sense" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0xe9a655ee, "snd_hda_create_dig_out_ctls" },
	{ 0x5feaf12f, "snd_hda_multi_out_dig_close" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x55fecfa9, "snd_hda_ctl_add" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xea75db15, "snd_hda_sequence_write" },
	{ 0x17f79f6, "snd_hdac_acomp_register_notifier" },
	{ 0xc7c01d92, "snd_hda_spdif_out_of_nid" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb6fbc735, "__hda_codec_driver_register" },
	{ 0x8e64eadb, "snd_hdac_register_chmap_ops" },
	{ 0xdb35ec35, "is_jack_detectable" },
	{ 0x61e58a17, "snd_hda_spdif_ctls_assign" },
	{ 0x28b52a08, "snd_jack_new" },
	{ 0xa0317c3e, "snd_hdac_power_down_pm" },
	{ 0xad5d3636, "snd_hda_set_dev_select" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0xaac32e8, "snd_hdac_setup_channel_mapping" },
	{ 0xc7fe416e, "snd_ctl_notify" },
	{ 0x44a068f0, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xf9476385, "snd_hda_codec_set_power_to_all" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4c7ec4b6, "snd_hdac_get_ch_alloc_from_ca" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x3091886d, "snd_hdac_acomp_init" },
	{ 0xb0d60358, "snd_pcm_hw_constraint_list" },
	{ 0x892ff71c, "snd_hdac_regmap_write_raw" },
	{ 0xf41f6145, "snd_hdac_acomp_get_eld" },
	{ 0xfb578fc5, "memset" },
	{ 0xdac1d056, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x54543a5e, "snd_hdac_check_power_state" },
	{ 0xb940a17f, "snd_hdac_get_stream_stripe_ctl" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6ddea0cc, "snd_hda_spdif_ctls_unassign" },
	{ 0x67bfe791, "snd_hdac_spk_to_chmap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbef986d, "snd_hdac_acomp_exit" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x4a6928ae, "snd_hdac_get_sub_nodes" },
	{ 0xeda3a721, "snd_print_pcm_bits" },
	{ 0x6c3eb8ff, "snd_pci_quirk_lookup" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x234fb5e3, "snd_info_create_card_entry" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xe4e07754, "snd_hdac_print_channel_allocation" },
	{ 0x6049c649, "snd_device_free" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x85d15047, "snd_pcm_hw_constraint_step" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x5cf7cb07, "snd_hdac_codec_read" },
	{ 0xcd0a492, "snd_hda_multi_out_dig_prepare" },
	{ 0xfed81b69, "snd_hda_jack_detect_enable" },
	{ 0x82ce95cc, "snd_hda_get_num_devices" },
	{ 0xf9a482f9, "msleep" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x6e73c6b3, "snd_hdac_regmap_sync" },
	{ 0x578434ab, "pci_bus_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x6ded4e74, "snd_hdac_i915_set_bclk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0001r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0004r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE002Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE002Er*a01*");
MODULE_ALIAS("hdaudio:v10DE002Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE0030r*a01*");
MODULE_ALIAS("hdaudio:v10DE0031r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE009Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE009Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE009Er*a01*");
MODULE_ALIAS("hdaudio:v10DE009Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE00A0r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v10DE8067r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v8086280Fr*a01*");
MODULE_ALIAS("hdaudio:v80862812r*a01*");
MODULE_ALIAS("hdaudio:v80862814r*a01*");
MODULE_ALIAS("hdaudio:v80862815r*a01*");
MODULE_ALIAS("hdaudio:v80862816r*a01*");
MODULE_ALIAS("hdaudio:v80862818r*a01*");
MODULE_ALIAS("hdaudio:v80862819r*a01*");
MODULE_ALIAS("hdaudio:v8086281Ar*a01*");
MODULE_ALIAS("hdaudio:v8086281Br*a01*");
MODULE_ALIAS("hdaudio:v8086281Cr*a01*");
MODULE_ALIAS("hdaudio:v8086281Fr*a01*");
MODULE_ALIAS("hdaudio:v8086281Dr*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");

MODULE_INFO(srcversion, "780212DFDBDAE5EB372A4B9");
