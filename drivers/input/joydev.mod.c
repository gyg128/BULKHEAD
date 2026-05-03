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
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xc5c898f, "kill_fasync" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x263c3152, "bcmp" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x33a44216, "get_device" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x1c49a9ca, "input_class" },
	{ 0xb6028004, "device_initialize" },
	{ 0xba9abbe3, "input_register_handle" },
	{ 0x4fcbe300, "cdev_init" },
	{ 0x544b2da7, "cdev_device_add" },
	{ 0x21d15ecc, "input_unregister_handle" },
	{ 0x211fcf87, "put_device" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x92997ed8, "_printk" },
	{ 0xbcf8a4ff, "cdev_device_del" },
	{ 0x709c929, "lock_acquire" },
	{ 0x9af0a615, "lock_release" },
	{ 0xacf6e6ec, "input_match_device_id" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x83c2a0c6, "input_close_device" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1952790e, "finish_wait" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x469387ba, "stream_open" },
	{ 0x65ad8b5c, "input_open_device" },
	{ 0xdd714de9, "fasync_helper" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "35C88506518892F951C3966");
