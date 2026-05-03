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

SYMBOL_CRC(sst_register_dsp, 0x41043481, "_gpl");
SYMBOL_CRC(sst_unregister_dsp, 0xefbe919c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fe9347c, "snd_soc_resume" },
	{ 0xaefbe999, "snd_soc_new_compress" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6f44703, "snd_soc_suspend" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x648e19e, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0xbadb6d78, "snd_soc_dapm_new_widgets" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x339178ad, "module_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xef4a4fb1, "snd_soc_info_volsw" },
	{ 0x63c3d48, "snd_ctl_boolean_mono_info" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x61119a4, "snd_soc_dapm_put_volsw" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5a921311, "strncmp" },
	{ 0x3b550be6, "mutex_is_locked" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9f9d028b, "snd_soc_add_component_controls" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x81dbad99, "dapm_kcontrol_get_value" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x282d33ef, "snd_pcm_set_managed_buffer_all" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xd4f8f42, "snd_soc_poweroff" },
	{ 0x54d0a26c, "snd_soc_dapm_add_routes" },
	{ 0xf03e570f, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xd6ae4d12, "snd_pcm_hw_constraint_integer" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x853c646, "snd_soc_dapm_new_controls" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x6d6d19f2, "snd_soc_dapm_get_volsw" },
	{ 0xa65fdc63, "snd_pcm_period_elapsed" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x85d15047, "snd_pcm_hw_constraint_step" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x4a97c89f, "snd_soc_dai_active" },
	{ 0x349cba85, "strchr" },
	{ 0x12b824a2, "up_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "2E120747B67193AE66D3B85");
