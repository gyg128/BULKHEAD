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
	{ 0x64e4539a, "snd_hda_shutup_pins" },
	{ 0xe03436e8, "input_allocate_device" },
	{ 0x23786682, "snd_hda_apply_verbs" },
	{ 0x94de455b, "snd_hdac_power_up_pm" },
	{ 0x6889c424, "snd_hda_gen_build_controls" },
	{ 0xa5b0421f, "query_amp_caps" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xabdd15db, "snd_hda_mixer_amp_volume_info" },
	{ 0x52670599, "snd_hda_jack_detect_state_mst" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x90ac9d6a, "snd_hda_gen_spec_init" },
	{ 0x46fa6d88, "component_master_add_with_match" },
	{ 0x68f05206, "snd_hda_jack_set_button_state" },
	{ 0xfb0dfbc, "snd_hda_mixer_amp_switch_info" },
	{ 0x23ecc290, "hda_codec_driver_unregister" },
	{ 0x60d7a1bf, "snd_hda_apply_pincfgs" },
	{ 0xa2119a42, "snd_hda_codec_get_pincfg" },
	{ 0x87807ff0, "snd_hdac_codec_write" },
	{ 0xadeda77a, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xec5abc9b, "snd_hda_gen_add_kctl" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x1504f819, "input_free_device" },
	{ 0xa9fe9077, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x9e167704, "_snd_hdac_read_parm" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc356733e, "snd_hda_pick_pin_fixup" },
	{ 0xa99e434d, "snd_hdac_override_parm" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x6a7f7c51, "snd_hda_get_bool_hint" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xea75db15, "snd_hda_sequence_write" },
	{ 0xa459d506, "snd_hda_find_mixer_ctl" },
	{ 0x570286f4, "snd_hda_jack_bind_keymap" },
	{ 0x4ef38936, "snd_hda_override_amp_caps" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb6fbc735, "__hda_codec_driver_register" },
	{ 0xd08dabe0, "snd_hda_jack_set_gating_jack" },
	{ 0x60b239f, "snd_hda_parse_pin_defcfg" },
	{ 0xb67edc05, "snd_hda_gen_init" },
	{ 0xdb35ec35, "is_jack_detectable" },
	{ 0xf8e04635, "snd_hda_gen_path_power_filter" },
	{ 0xa0317c3e, "snd_hdac_power_down_pm" },
	{ 0x8c6b49f1, "snd_hda_gen_add_micmute_led_cdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x911d99a1, "__snd_hda_apply_fixup" },
	{ 0xca254cbb, "snd_hda_mixer_amp_switch_get" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x3fb9184e, "snd_hda_codec_set_pin_target" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4ff3526b, "snd_hda_gen_check_power_status" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xd7884fe5, "snd_hda_gen_hp_automute" },
	{ 0x10aed1f7, "snd_ctl_rename" },
	{ 0x115c4b12, "_snd_hda_set_pin_ctl" },
	{ 0x892ff71c, "snd_hdac_regmap_write_raw" },
	{ 0xb4dbb34a, "snd_hda_codec_set_name" },
	{ 0x6e4886dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xdac1d056, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x5c05275a, "input_event" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34a4f265, "snd_hda_gen_update_outputs" },
	{ 0x166a61bb, "snd_hda_mixer_amp_switch_put" },
	{ 0xae1c1abb, "snd_hda_codec_set_pincfg" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2f7097b9, "snd_hda_jack_unsol_event" },
	{ 0xb95e6aa4, "snd_hda_override_conn_list" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x1766b80c, "component_match_add_release" },
	{ 0xd4d78f92, "snd_hda_gen_build_pcms" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x43f30597, "snd_hda_mixer_amp_tlv" },
	{ 0x80cc4d40, "component_bind_all" },
	{ 0x6c3eb8ff, "snd_pci_quirk_lookup" },
	{ 0x76558aed, "snd_hda_pick_fixup" },
	{ 0x1fd8ba51, "snd_hda_add_verbs" },
	{ 0x93470395, "snd_hda_apply_fixup" },
	{ 0xa6320f24, "snd_hda_gen_parse_auto_config" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x5cf7cb07, "snd_hdac_codec_read" },
	{ 0xb207abdc, "snd_hda_mixer_amp_volume_put" },
	{ 0xae431256, "component_unbind_all" },
	{ 0xe6f3fc6f, "snd_hda_codec_get_pin_target" },
	{ 0x3c88bcd6, "snd_hda_gen_free" },
	{ 0xad8f55a, "snd_hda_gen_add_mute_led_cdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6e73c6b3, "snd_hdac_regmap_sync" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x97e884b, "snd_hda_jack_add_kctl_mst" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-core,snd-hda-codec-generic,snd");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0230r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0287r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0897r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");
MODULE_ALIAS("hdaudio:v19E58326r*a01*");

MODULE_INFO(srcversion, "BB44659EE645CF1C8DFEEBA");
