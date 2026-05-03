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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdcd78491, "input_register_handler" },
	{ 0x39a8c96, "input_unregister_handler" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba9abbe3, "input_register_handle" },
	{ 0x65ad8b5c, "input_open_device" },
	{ 0x21d15ecc, "input_unregister_handle" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe5282094, "led_classdev_register_ext" },
	{ 0xff712d22, "led_classdev_unregister" },
	{ 0x83c2a0c6, "input_close_device" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x120cd7ad, "input_inject_event" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*11,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "88B38FB779492C9AEC9736A");
