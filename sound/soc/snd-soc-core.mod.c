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

SYMBOL_CRC(null_dailink_component, 0x6a1fda01, "_gpl");
SYMBOL_CRC(snd_soc_debugfs_root, 0x2b6bbfc8, "_gpl");
SYMBOL_CRC(snd_soc_rtdcom_lookup, 0xa3f78e47, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component_nolocked, 0xe574e342, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component, 0x415982e2, "_gpl");
SYMBOL_CRC(snd_soc_get_pcm_runtime, 0xc75794d3, "_gpl");
SYMBOL_CRC(snd_soc_close_delayed_work, 0x72f756b7, "_gpl");
SYMBOL_CRC(snd_soc_suspend, 0xd6f44703, "_gpl");
SYMBOL_CRC(snd_soc_resume, 0x4fe9347c, "_gpl");
SYMBOL_CRC(snd_soc_find_dai, 0x237f46cf, "_gpl");
SYMBOL_CRC(snd_soc_find_dai_with_mutex, 0x75628bf9, "_gpl");
SYMBOL_CRC(snd_soc_remove_pcm_runtime, 0x8ad75427, "_gpl");
SYMBOL_CRC(snd_soc_add_pcm_runtime, 0x7a534650, "_gpl");
SYMBOL_CRC(snd_soc_runtime_set_dai_fmt, 0x2472d618, "_gpl");
SYMBOL_CRC(snd_soc_set_dmi_name, 0xfc069c3f, "_gpl");
SYMBOL_CRC(snd_soc_poweroff, 0x0d4f8f42, "_gpl");
SYMBOL_CRC(snd_soc_pm_ops, 0x6dec6cff, "_gpl");
SYMBOL_CRC(snd_soc_cnew, 0x9d379c95, "_gpl");
SYMBOL_CRC(snd_soc_add_component_controls, 0x9f9d028b, "_gpl");
SYMBOL_CRC(snd_soc_add_card_controls, 0x6e37d1a8, "_gpl");
SYMBOL_CRC(snd_soc_add_dai_controls, 0x56d85a0b, "_gpl");
SYMBOL_CRC(snd_soc_register_card, 0x86b223e9, "_gpl");
SYMBOL_CRC(snd_soc_unregister_card, 0x26d3241f, "_gpl");
SYMBOL_CRC(snd_soc_unregister_dai, 0x06ab1a82, "_gpl");
SYMBOL_CRC(snd_soc_register_dai, 0x81581cf1, "_gpl");
SYMBOL_CRC(snd_soc_component_initialize, 0x0d76cdd7, "_gpl");
SYMBOL_CRC(snd_soc_add_component, 0x8f752b6a, "_gpl");
SYMBOL_CRC(snd_soc_register_component, 0xd2775a85, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component_by_driver, 0x7e0ec3e0, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component, 0x709cde97, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_card_name, 0x838854c6, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_simple_widgets, 0x6891793f, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_pin_switches, 0xe62f4613, "_gpl");
SYMBOL_CRC(snd_soc_of_get_slot_mask, 0xfa72be6d, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_tdm_slot, 0x30ffd7b9, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_node_prefix, 0x20c6d076, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_routing, 0x7ee67cf4, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_aux_devs, 0x00e4f89a, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_flipped, 0xc317a15e, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_from_bitmap, 0xf9622dd1, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_format, 0x70b2a803, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_clock_provider_raw, 0x68303f92, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_id, 0xbe53ecb7, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_name, 0x007f6fcd, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_name, 0xc9fc5eef, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_codecs, 0x9db8e6e5, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_codecs, 0x7d208ead, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_cpus, 0xd6fd4f40, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_cpus, 0x7d6f013a, "_gpl");
SYMBOL_CRC(dapm_mark_endpoints_dirty, 0x2d328cdd, "_gpl");
SYMBOL_CRC(dapm_kcontrol_get_value, 0x81dbad99, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_widget, 0xce7ff530, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_dapm, 0xffd5a6e1, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_bias_level, 0x620e1087, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_get_connected_widgets, 0xfd35a216, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_free_widgets, 0xb4ad5090, "_gpl");
SYMBOL_CRC(dapm_regulator_event, 0x1fea36bd, "_gpl");
SYMBOL_CRC(dapm_pinctrl_event, 0xca7a40e7, "_gpl");
SYMBOL_CRC(dapm_clock_event, 0x12e0092d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mux_update_power, 0xfeacf866, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mixer_update_power, 0x9987209e, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free_widget, 0x007a7dbd, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync_unlocked, 0x1216f846, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync, 0x29e249fe, "_gpl");
SYMBOL_CRC(snd_soc_dapm_update_dai, 0x0e1fd360, "_gpl");
SYMBOL_CRC(snd_soc_dapm_add_routes, 0x54d0a26c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_del_routes, 0x94199ffd, "_gpl");
SYMBOL_CRC(snd_soc_dapm_weak_routes, 0x44ee5d8d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_widgets, 0xbadb6d78, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_volsw, 0x6d6d19f2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_volsw, 0x061119a4, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_enum_double, 0x441fcba9, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_enum_double, 0xfba31ba6, "_gpl");
SYMBOL_CRC(snd_soc_dapm_info_pin_switch, 0x3e5e71e9, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_switch, 0xd4b9ba85, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_pin_switch, 0xb808a3b6, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_control, 0xd8d763ef, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_controls, 0x0853c646, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_dai_widgets, 0xb16faf62, "_gpl");
SYMBOL_CRC(snd_soc_dapm_stream_stop, 0xc43473b8, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin_unlocked, 0x8c8f0882, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin, 0xfcc3a0a0, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin_unlocked, 0xfb28cca1, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin, 0xeef5f94b, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin_unlocked, 0x88d55374, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin, 0x89b8a79a, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin_unlocked, 0x5a942451, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin, 0xaa6c5c0d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_status, 0xfe628363, "_gpl");
SYMBOL_CRC(snd_soc_dapm_ignore_suspend, 0x854472e5, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free, 0x0663dcfc, "_gpl");
SYMBOL_CRC(snd_soc_dapm_init, 0xd4620b56, "_gpl");
SYMBOL_CRC(snd_soc_jack_report, 0xd8c14a91, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_zones, 0xf7263695, "_gpl");
SYMBOL_CRC(snd_soc_jack_get_type, 0x7d92d765, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_pins, 0x94a28c13, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_register, 0x67529f5a, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_unregister, 0x2e7625ee, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpios, 0xe6d4161d, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpiods, 0x25faa7ee, "_gpl");
SYMBOL_CRC(snd_soc_jack_free_gpios, 0xeb18406e, "_gpl");
SYMBOL_CRC(snd_soc_calc_frame_size, 0x2541a979, "_gpl");
SYMBOL_CRC(snd_soc_params_to_frame_size, 0xc8269f94, "_gpl");
SYMBOL_CRC(snd_soc_calc_bclk, 0x7e606130, "_gpl");
SYMBOL_CRC(snd_soc_params_to_bclk, 0xeb711ae7, "_gpl");
SYMBOL_CRC(snd_soc_tdm_params_to_bclk, 0x4fa1782d, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_sysclk, 0x1cb7f5b6, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_clkdiv, 0x51c0520f, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_pll, 0x5415195d, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_bclk_ratio, 0xdef6b41c, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_fmt, 0xed631eef, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tdm_slot, 0xace7b53e, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_channel_map, 0x94ef82f7, "_gpl");
SYMBOL_CRC(snd_soc_dai_get_channel_map, 0x8d07a78a, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tristate, 0x842d1fc9, "_gpl");
SYMBOL_CRC(snd_soc_dai_digital_mute, 0x636cf765, "_gpl");
SYMBOL_CRC(snd_soc_dai_link_set_capabilities, 0xad71a6e4, "_gpl");
SYMBOL_CRC(snd_soc_dai_action, 0x9867f652, "_gpl");
SYMBOL_CRC(snd_soc_dai_active, 0x4a97c89f, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_startup, 0xe7764518, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_shutdown, 0xba2e429f, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_trigger, 0x47415d9f, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_params, 0x6745bf37, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_params, 0x9ff062aa, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_ack, 0x337ea136, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_pointer, 0x9ec235dd, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_metadata, 0x3f4c1e3b, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_metadata, 0xc95d942d, "_gpl");
SYMBOL_CRC(snd_soc_component_set_sysclk, 0x15f285f4, "_gpl");
SYMBOL_CRC(snd_soc_component_set_pll, 0xb358733d, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin, 0xd42e7fec, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin_unlocked, 0x488569c0, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin, 0xf3bbe89e, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin_unlocked, 0x14cc536e, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin, 0xc7475776, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin_unlocked, 0xa6c1a180, "_gpl");
SYMBOL_CRC(snd_soc_component_get_pin_status, 0xd0a852dc, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin, 0xf71ad59c, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin_unlocked, 0x5ebfa788, "_gpl");
SYMBOL_CRC(snd_soc_component_set_jack, 0x069820cd, "_gpl");
SYMBOL_CRC(snd_soc_component_init_regmap, 0xdd783433, "_gpl");
SYMBOL_CRC(snd_soc_component_exit_regmap, 0xd5b58e34, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_open, 0x28bd26c9, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_free, 0xffcb2c18, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_trigger, 0xcff811e8, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_params, 0xd6818154, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_params, 0x749820bd, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_caps, 0x45306e65, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_codec_caps, 0x81496cb9, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_ack, 0x6061b40e, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_pointer, 0x09fd8359, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_copy, 0x9ac35727, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_metadata, 0x5c5dd08a, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_metadata, 0x9a5947e5, "_gpl");
SYMBOL_CRC(snd_soc_component_read, 0x83eaec34, "_gpl");
SYMBOL_CRC(snd_soc_component_write, 0x57279284, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits, 0x7977059f, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits_async, 0x6a12d61e, "_gpl");
SYMBOL_CRC(snd_soc_component_read_field, 0xedd5d690, "_gpl");
SYMBOL_CRC(snd_soc_component_write_field, 0x749d5c12, "_gpl");
SYMBOL_CRC(snd_soc_component_async_complete, 0x8bedeead, "_gpl");
SYMBOL_CRC(snd_soc_component_test_bits, 0x0bb06a89, "_gpl");
SYMBOL_CRC(snd_soc_runtime_action, 0x037cc9b1, "_gpl");
SYMBOL_CRC(snd_soc_set_runtime_hwparams, 0xa610f298, "_gpl");
SYMBOL_CRC(snd_soc_runtime_calc_hw, 0x4b18dd51, "_gpl");
SYMBOL_CRC(dpcm_end_walk_at_be, 0xadf6d4f4, "_gpl");
SYMBOL_CRC(dpcm_be_dai_trigger, 0xd6763a38, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_runtime_update, 0x6a4fbdd9, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_fe_can_update, 0xba343941, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_be_can_update, 0x6c0ce42d, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_get_substream, 0x129883bb, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_free_stop, 0xabb54de4, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_params, 0x362abbb3, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_dai, 0x9707c70f, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_component, 0x0648e19e, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_card, 0xc9b86d63, "_gpl");
SYMBOL_CRC(snd_soc_info_enum_double, 0xca9a0f02, "_gpl");
SYMBOL_CRC(snd_soc_get_enum_double, 0x7a7e2d40, "_gpl");
SYMBOL_CRC(snd_soc_put_enum_double, 0x41be48a3, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw, 0xef4a4fb1, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_sx, 0x1761aef2, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw, 0x17202112, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw, 0x295f31f7, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_sx, 0xcf14d7c1, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_sx, 0xea45bb48, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_range, 0xe9818b97, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_range, 0xc1f834ec, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_range, 0xfa38510f, "_gpl");
SYMBOL_CRC(snd_soc_limit_volume, 0x44bd59e1, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info, 0x319982d7, "_gpl");
SYMBOL_CRC(snd_soc_bytes_get, 0xa8c0108f, "_gpl");
SYMBOL_CRC(snd_soc_bytes_put, 0x7285c423, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info_ext, 0xe17d082f, "_gpl");
SYMBOL_CRC(snd_soc_bytes_tlv_callback, 0x0b230cdb, "_gpl");
SYMBOL_CRC(snd_soc_info_xr_sx, 0xf4b7da5c, "_gpl");
SYMBOL_CRC(snd_soc_get_xr_sx, 0xc9804242, "_gpl");
SYMBOL_CRC(snd_soc_put_xr_sx, 0xf7ff52a7, "_gpl");
SYMBOL_CRC(snd_soc_get_strobe, 0x5b676da9, "_gpl");
SYMBOL_CRC(snd_soc_put_strobe, 0x8b39044e, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_startup, 0xc5090d96, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_shutdown, 0xc80d92f6, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_set_params, 0x86273a15, "_gpl");
SYMBOL_CRC(snd_soc_card_get_kcontrol, 0x3341cd0a, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new, 0x3be8b10b, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new_pins, 0x390a12f2, "_gpl");
SYMBOL_CRC(snd_soc_card_add_dai_link, 0xe79115aa, "_gpl");
SYMBOL_CRC(snd_soc_card_remove_dai_link, 0xfc0da022, "_gpl");
SYMBOL_CRC(snd_soc_tplg_widget_bind_event, 0x478cf9eb, "_gpl");
SYMBOL_CRC(snd_soc_tplg_component_load, 0xedf8f1c1, "_gpl");
SYMBOL_CRC(snd_soc_tplg_component_remove, 0x4162a9c7, "_gpl");
SYMBOL_CRC(snd_soc_new_compress, 0xaefbe999, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xfb308168, "gpiod_get_value_cansleep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc65d9512, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x189e5b9c, "__init_rwsem" },
	{ 0xab8bc1a2, "snd_pcm_rate_mask_intersect" },
	{ 0x257f2892, "gpiod_put" },
	{ 0x86e9fa35, "regmap_write" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xc3f3b6ca, "regmap_get_val_bytes" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0xa5626a0c, "snd_ctl_add" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf4bff886, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b33cb1, "snd_jack_report" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x17eea942, "regmap_raw_read" },
	{ 0x2867a259, "snd_card_register" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0x4ae84582, "snd_card_free" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x5f47a05, "devres_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xec0e2f2b, "gpiod_get_index" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x684f06de, "snd_pcm_hw_constraint_minmax" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0xcb850478, "gpiod_to_irq" },
	{ 0x5f4fc9ec, "gpiod_export" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x305fa421, "regcache_mark_dirty" },
	{ 0xfe990052, "gpio_free" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0xece2542f, "regulator_disable_deferred" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbec57b33, "snd_ctl_remove" },
	{ 0x41004f07, "snd_ctl_free_one" },
	{ 0xbe9e90aa, "devm_clk_get" },
	{ 0x86055fa8, "devres_add" },
	{ 0xba94d662, "snd_pcm_new_internal" },
	{ 0x90989f4, "blocking_notifier_chain_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x261cc66c, "pinctrl_pm_select_default_state" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4ef6978d, "flush_delayed_work" },
	{ 0xe17dde74, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0xc7a0d07c, "snd_pcm_stream_unlock_irq" },
	{ 0xbca53af2, "pm_wakeup_dev_event" },
	{ 0x74418503, "blocking_notifier_call_chain" },
	{ 0x8b6e1326, "devm_kstrdup" },
	{ 0xf92e8a38, "snd_pcm_stream_lock_irq" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x211fcf87, "put_device" },
	{ 0x97b39518, "gpiod_unexport" },
	{ 0x6d0582c8, "snd_component_add" },
	{ 0xa916b694, "strnlen" },
	{ 0x5e9a014b, "devm_regulator_get" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xb2cd5ddb, "snd_card_new" },
	{ 0x9936f8b3, "snd_card_disconnect_sync" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xc4775fd4, "devm_kmemdup" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xb334290c, "down_write" },
	{ 0x66ad9cd2, "devm_kfree" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0xfc59f48f, "pinctrl_pm_select_sleep_state" },
	{ 0x35595e4a, "simple_open" },
	{ 0xcf39d790, "snd_pcm_lib_ioctl" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xdc02eb39, "dmi_available" },
	{ 0x28b52a08, "snd_jack_new" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x260dd563, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x418ddcab, "snd_jack_add_new_kctl" },
	{ 0xb1381b71, "dev_get_regmap" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x388df96a, "regulator_allow_bypass" },
	{ 0xc34c85b4, "snd_pcm_set_ops" },
	{ 0x1628543a, "regmap_async_complete" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x79aadba8, "_snd_pcm_stream_lock_irqsave_nested" },
	{ 0x11089ac7, "_ctype" },
	{ 0x59554d57, "device_register" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0x1a0a801a, "default_llseek" },
	{ 0xd335b378, "cancel_delayed_work" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xa0ed55df, "debugfs_create_u32" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd7207f93, "regmap_parse_val" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbc7dc11a, "snd_pcm_suspend_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xb0604ba1, "devm_kasprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe259f8a1, "pinctrl_lookup_state" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x51d37445, "seq_read" },
	{ 0x3e14a549, "snd_compress_new" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x66ee9422, "blocking_notifier_chain_unregister" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0xeb72931a, "regmap_read" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x3515e275, "gpio_to_desc" },
	{ 0xa0644749, "devm_pinctrl_get" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3853033e, "pinctrl_select_state" },
	{ 0xb11766ab, "snd_power_wait" },
	{ 0x6cb4a406, "snd_pcm_hw_constraint_msbits" },
	{ 0x2f12ffed, "single_release" },
	{ 0xe0039cac, "regmap_update_bits_base" },
	{ 0xb2d8c5ec, "dev_err_probe" },
	{ 0x63975eca, "device_add_groups" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x6d4bf609, "regmap_exit" },
	{ 0x81188c30, "match_string" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x10ce671f, "regmap_raw_write" },
	{ 0x754d539c, "strlen" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x38a4f93d, "single_open" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-compress");


MODULE_INFO(srcversion, "D229F148145D379549614A5");
