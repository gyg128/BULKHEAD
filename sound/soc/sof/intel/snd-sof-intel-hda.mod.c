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

SYMBOL_CRC(hda_codec_jack_wake_enable, 0x03453444, "");
SYMBOL_CRC(hda_codec_jack_check, 0x375665fe, "");
SYMBOL_CRC(hda_codec_probe_bus, 0x20f55e8a, "");
SYMBOL_CRC(hda_codec_i915_display_power, 0x2c14feb1, "");
SYMBOL_CRC(hda_codec_i915_init, 0x0fad52d0, "");
SYMBOL_CRC(hda_codec_i915_exit, 0x498287c5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xa38bf624, "snd_hdac_bus_send_cmd" },
	{ 0x960c5d52, "snd_hdac_bus_get_response" },
	{ 0x424e4030, "snd_hdac_codec_modalias" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x69d58385, "snd_hdac_device_register" },
	{ 0x392ee931, "snd_hdac_i915_init" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x73914e1c, "snd_hdac_device_unregister" },
	{ 0x8362f559, "device_attach" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x711b75d2, "snd_hdac_display_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbef986d, "snd_hdac_acomp_exit" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x4843ffbb, "snd_hda_codec_device_init" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec");


MODULE_INFO(srcversion, "BFBCDB01585B544017DBA03");
