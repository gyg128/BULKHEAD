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
	{ 0x3e57d706, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0xb6028004, "device_initialize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x492bfb38, "snd_ctl_find_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa34c0368, "snd_card_ref" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x1d76a63, "snd_ctl_disconnect_layer" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2349b131, "sysfs_create_link" },
	{ 0xb334290c, "down_write" },
	{ 0x1bb1702a, "up_write" },
	{ 0x65b486c1, "device_add" },
	{ 0x2b6c77a2, "sysfs_remove_link" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0xf03e570f, "down_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeca5f170, "snd_ctl_register_layer" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x38d2fabf, "sound_class" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x12b824a2, "up_read" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "ledtrig-audio,snd,soundcore");


MODULE_INFO(srcversion, "7244B527C13C617C5FB9936");
