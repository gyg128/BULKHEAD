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

SYMBOL_CRC(rc_map_get, 0xda17a5cc, "_gpl");
SYMBOL_CRC(rc_map_register, 0x27d00aae, "_gpl");
SYMBOL_CRC(rc_map_unregister, 0x356622f5, "_gpl");
SYMBOL_CRC(rc_g_keycode_from_table, 0x1392c5a0, "_gpl");
SYMBOL_CRC(rc_keyup, 0x82291982, "_gpl");
SYMBOL_CRC(rc_repeat, 0xbccddee5, "_gpl");
SYMBOL_CRC(rc_keydown, 0x5320186b, "_gpl");
SYMBOL_CRC(rc_keydown_notimeout, 0xad2b89ca, "_gpl");
SYMBOL_CRC(rc_allocate_device, 0x6b72150e, "_gpl");
SYMBOL_CRC(rc_free_device, 0x765b0712, "_gpl");
SYMBOL_CRC(devm_rc_allocate_device, 0x7c1e19f7, "_gpl");
SYMBOL_CRC(rc_register_device, 0x42b00e73, "_gpl");
SYMBOL_CRC(devm_rc_register_device, 0x67083667, "_gpl");
SYMBOL_CRC(rc_unregister_device, 0x7352b70d, "_gpl");
SYMBOL_CRC(ir_raw_event_store, 0xccdb26a0, "_gpl");
SYMBOL_CRC(ir_raw_event_store_edge, 0x21b4b75b, "_gpl");
SYMBOL_CRC(ir_raw_event_store_with_timeout, 0xc783bf04, "_gpl");
SYMBOL_CRC(ir_raw_event_store_with_filter, 0x2bbb02cb, "_gpl");
SYMBOL_CRC(ir_raw_event_set_idle, 0x247e1803, "_gpl");
SYMBOL_CRC(ir_raw_event_handle, 0x4d6265b2, "_gpl");
SYMBOL_CRC(ir_raw_gen_manchester, 0xce3696f3, "");
SYMBOL_CRC(ir_raw_gen_pd, 0x2fe55cf5, "");
SYMBOL_CRC(ir_raw_gen_pl, 0x7a02ee87, "");
SYMBOL_CRC(ir_raw_encode_scancode, 0x01098f88, "");
SYMBOL_CRC(ir_raw_encode_carrier, 0xb5516017, "");
SYMBOL_CRC(ir_raw_handler_register, 0xa60fbdad, "");
SYMBOL_CRC(ir_raw_handler_unregister, 0xa359df89, "");
SYMBOL_CRC(lirc_scancode_event, 0x648c44d3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe03436e8, "input_allocate_device" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf3e1306c, "__class_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xbcf8a4ff, "cdev_device_del" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0x1952790e, "finish_wait" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x168291ac, "led_trigger_register_simple" },
	{ 0x1057a279, "bsearch" },
	{ 0xb6028004, "device_initialize" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b532be, "kobject_get_path" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3c6fbc5f, "led_trigger_unregister_simple" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x3755d8fa, "__module_get" },
	{ 0x33a44216, "get_device" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x86055fa8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6687cb9, "wake_up_process" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x1504f819, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x544b2da7, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x339178ad, "module_put" },
	{ 0xd7ef1ab2, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf7b274d2, "fput" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4e7c5de7, "__class_register" },
	{ 0x65b486c1, "device_add" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3155b23d, "ida_free" },
	{ 0x5a3fccfe, "class_unregister" },
	{ 0xed05fcd6, "kthread_stop" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x538c7455, "device_del" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x5c05275a, "input_event" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf3e7427d, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x469387ba, "stream_open" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x9085a1fe, "led_trigger_event" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x715ac5e, "del_timer" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fcbe300, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E03D3729D3F4AC35C578A32");
