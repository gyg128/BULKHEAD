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
	{ 0xc840ce4f, "xt_register_matches" },
	{ 0x2cbcc2a5, "xt_unregister_matches" },
	{ 0x8d9eb064, "inet_dev_addr_type" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xd6d399e9, "nf_ipv6_ops" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x472c9e17, "dst_release" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "213C86A49406D11109A6DCD");
