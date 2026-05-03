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
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xe91dc5e9, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x1139550e, "__register_chrdev" },
	{ 0xf3e1306c, "__class_create" },
	{ 0x1b32cc5a, "__parport_register_driver" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xa9b1739f, "current_task" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0x9bd03f0f, "parport_set_timeout" },
	{ 0x2b63c49a, "parport_negotiate" },
	{ 0xbe73f92b, "parport_read" },
	{ 0x1f8e561f, "prepare_to_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1952790e, "finish_wait" },
	{ 0x800473f, "__cond_resched" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbd2c5d97, "parport_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x70bea96c, "parport_claim_or_block" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4bc15463, "parport_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x58169ff8, "parport_unregister_device" },
	{ 0xbe584244, "parport_register_dev_model" },
	{ 0xf9136192, "device_create" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "75E9B702288AADB40078617");
