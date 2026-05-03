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

SYMBOL_CRC(sys_fillrect, 0x4f1705f7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x56470118, "__warn_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C52375ED2FD9FC65846DA8");
