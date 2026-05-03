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
	{ 0xc1514a3b, "free_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3f863332, "is_acpi_device_node" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x8eba4cd3, "vga_switcheroo_get_client_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x337c50a9, "snd_hdac_bus_enter_link_reset" },
	{ 0x1ca22499, "azx_probe_codecs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0x2867a259, "snd_card_register" },
	{ 0x4ae84582, "snd_card_free" },
	{ 0xbed14ed1, "azx_init_streams" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x36c35fdd, "pci_get_device" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0x3b9bdc73, "pci_disable_msi" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xdeb9a6d3, "pci_set_power_state" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x154ff067, "snd_intel_dsp_driver_probe" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8721f3be, "azx_stop_all_streams" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x5f053697, "pci_read_config_dword" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x51ba1ada, "snd_hdac_bus_free_stream_pages" },
	{ 0xf5eead66, "snd_hdac_bus_exit" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0xb00edb14, "azx_get_pos_lpib" },
	{ 0x4bfb8fa5, "pci_intx" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0x392ee931, "snd_hdac_i915_init" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xb2cd5ddb, "snd_card_new" },
	{ 0x7f0845f, "param_ops_bint" },
	{ 0x73f5cff7, "pcim_iomap_regions" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x6d2d417c, "pci_enable_msi" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb27cc2be, "snd_hda_unlock_devices" },
	{ 0x2db53ddc, "request_firmware_nowait" },
	{ 0x3057adb8, "pci_pr3_present" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9eb98760, "azx_get_pos_posbuf" },
	{ 0x2d1bce9, "pci_get_domain_bus_and_slot" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x19113437, "azx_bus_init" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0xaeea33a8, "azx_free_streams" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xe4d4d486, "snd_hda_load_patch" },
	{ 0xc092ff9c, "azx_init_chip" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x711b75d2, "snd_hdac_display_power" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xb5148ae3, "wait_for_completion" },
	{ 0xed56cdfa, "vga_switcheroo_unregister_client" },
	{ 0xf9a1f89e, "complete_all" },
	{ 0x7d6ed709, "vga_switcheroo_register_audio_client" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0xc53e43cb, "snd_card_disconnect" },
	{ 0x2439b4c, "snd_hda_set_power_save" },
	{ 0xbef986d, "snd_hdac_acomp_exit" },
	{ 0x1a7dd138, "azx_stop_chip" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1d92885b, "pm_runtime_forbid" },
	{ 0xdeb11cbf, "snd_hdac_bus_parse_capabilities" },
	{ 0x18f73cf7, "param_set_int" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0xb8565dfb, "pci_get_class" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x6c3eb8ff, "snd_pci_quirk_lookup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x2fa0c306, "pci_match_id" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x18461855, "azx_codec_configure" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x3f411ce0, "snd_hdac_set_codec_wakeup" },
	{ 0xa65fdc63, "snd_pcm_period_elapsed" },
	{ 0x12596b74, "pcim_iomap_table" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x4b7bdb2f, "snd_hdac_bus_alloc_stream_pages" },
	{ 0xb95c29e, "pci_read_config_byte" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x17d56c2d, "snd_hda_lock_devices" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x31b0d3c2, "param_get_int" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x93e4810, "pci_write_config_word" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x38ce402b, "azx_interrupt" },
	{ 0xf9a482f9, "msleep" },
	{ 0x279d55b5, "pci_write_config_dword" },
	{ 0x6ded4e74, "snd_hdac_i915_set_bclk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-intel-dspcfg,snd-pcm");

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000490Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F91sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F92sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001457sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001487sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001D17d00003288sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17E31CA4B9F31AAB91B1FAD");
