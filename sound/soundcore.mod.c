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

SYMBOL_CRC(sound_class, 0x38d2fabf, "");
SYMBOL_CRC(register_sound_special_device, 0x546f77ef, "");
SYMBOL_CRC(register_sound_special, 0x0aff27d2, "");
SYMBOL_CRC(register_sound_mixer, 0xc6303dc1, "");
SYMBOL_CRC(register_sound_dsp, 0x34c4c251, "");
SYMBOL_CRC(unregister_sound_special, 0x99c95fa5, "");
SYMBOL_CRC(unregister_sound_mixer, 0x7afc9d8a, "");
SYMBOL_CRC(unregister_sound_dsp, 0xcd083b10, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x734e7bb9, "try_module_get" },
	{ 0xf3e1306c, "__class_create" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf9136192, "device_create" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1139550e, "__register_chrdev" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x754d539c, "strlen" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C0DA390FF9F34CF4A63CB0");
