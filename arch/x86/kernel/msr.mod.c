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
	{ 0x1139550e, "__register_chrdev" },
	{ 0xf3e1306c, "__class_create" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x92997ed8, "_printk" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf9136192, "device_create" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x127d83ea, "security_locked_down" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x804af87c, "wrmsr_safe_on_cpu" },
	{ 0xa9b1739f, "current_task" },
	{ 0x3a2d1dfa, "rdmsr_safe_regs_on_cpu" },
	{ 0xb9e276cf, "wrmsr_safe_regs_on_cpu" },
	{ 0xc6cbbc89, "capable" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x77bc13a0, "strim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9606570, "no_seek_end_llseek" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85BAD85AC4133DB42A2C6C6");
