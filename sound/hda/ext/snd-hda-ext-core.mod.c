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

SYMBOL_CRC(snd_hdac_ext_bus_init, 0xc1b6fbe1, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_exit, 0x9341f141, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_device_remove, 0x5cdd9298, "_gpl");
SYMBOL_CRC(snd_hda_ext_driver_register, 0x3ebfb1a2, "_gpl");
SYMBOL_CRC(snd_hda_ext_driver_unregister, 0x13b8e03c, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_ppcap_enable, 0x46a419ca, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_ppcap_int_enable, 0xcc7b5421, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_get_ml_capabilities, 0x1f741788, "_gpl");
SYMBOL_CRC(snd_hdac_link_free_all, 0x40242035, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_at, 0xbed59040, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_get_link, 0xb76b8839, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_power_up, 0xef201be7, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_power_down, 0xf8f9e9f6, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_power_up_all, 0x26be6a90, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_power_down_all, 0x17e9852a, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_get, 0x70704296, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_put, 0xdbc90f70, "_gpl");
SYMBOL_CRC(snd_hdac_ext_bus_link_power, 0x894c68a0, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_init_all, 0x20079a04, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_free_all, 0x8fe260ad, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_decouple_locked, 0xa66eb881, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_decouple, 0xaf0f9df2, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_stream_start, 0x8079589c, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_stream_clear, 0x58b201e6, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_stream_reset, 0x3d5f2890, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_stream_setup, 0x8518b4c8, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_set_stream_id, 0xb2c20b71, "_gpl");
SYMBOL_CRC(snd_hdac_ext_link_clear_stream_id, 0xb9fc3eca, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_assign, 0x9226d8df, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_release, 0xb6cfbf39, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_spbcap_enable, 0x31b05db4, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_set_spib, 0xdd05c44c, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_get_spbmaxfifo, 0xb8e40dd6, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_drsm_enable, 0xd004df35, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_set_dpibr, 0x9c7c0f62, "_gpl");
SYMBOL_CRC(snd_hdac_ext_stream_set_lpib, 0x412257b8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4e38dc7, "snd_hdac_stream_release" },
	{ 0xc6c770ea, "snd_hdac_stream_release_locked" },
	{ 0x8b842184, "snd_hdac_bus_link_power" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xf5eead66, "snd_hdac_bus_exit" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x9954f250, "snd_hdac_bus_init" },
	{ 0x4aead488, "snd_hdac_stream_init" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x73914e1c, "snd_hdac_device_unregister" },
	{ 0xc6fe7caa, "snd_hdac_stream_assign" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x983c11a6, "snd_hdac_bus_stop_cmd_io" },
	{ 0x1714def2, "snd_hdac_bus_init_cmd_io" },
	{ 0xed99ff21, "snd_hda_bus_type" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x59a7328c, "driver_register" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "AEF9AB0D0854C13EF4E32E5");
