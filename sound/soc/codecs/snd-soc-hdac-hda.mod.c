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

SYMBOL_CRC(snd_soc_hdac_hda_get_ops, 0x7a184ef8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4c193033, "snd_hdac_regmap_init" },
	{ 0xc892fd3f, "snd_hda_codec_build_controls" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xd7788f53, "snd_hda_codec_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb96c4e0, "snd_hda_codec_cleanup_for_unbind" },
	{ 0x3350f950, "snd_hda_codec_pcm_put" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x648e19e, "devm_snd_soc_register_component" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x70704296, "snd_hdac_ext_bus_link_get" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xb4dbb34a, "snd_hda_codec_set_name" },
	{ 0x711b75d2, "snd_hdac_display_power" },
	{ 0x27e2c489, "snd_hdac_regmap_exit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0xdab35c7, "snd_hda_codec_parse_pcms" },
	{ 0xdbc90f70, "snd_hdac_ext_bus_link_put" },
	{ 0xc0eb3baf, "snd_hda_codec_device_new" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb76b8839, "snd_hdac_ext_bus_get_link" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x28c6a544, "snd_hda_codec_prepare" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd-soc-core,snd-hda-ext-core");


MODULE_INFO(srcversion, "88D6D6BEE5E7C66FD0C4A0E");
