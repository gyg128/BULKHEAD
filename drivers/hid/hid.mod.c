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

SYMBOL_CRC(hid_debug, 0x05495392, "_gpl");
SYMBOL_CRC(hid_register_report, 0x644e2cc5, "_gpl");
SYMBOL_CRC(hid_parse_report, 0x9a014669, "_gpl");
SYMBOL_CRC(hid_validate_values, 0x0c20137f, "_gpl");
SYMBOL_CRC(hid_setup_resolution_multiplier, 0xb678b50d, "_gpl");
SYMBOL_CRC(hid_open_report, 0xc61708a0, "_gpl");
SYMBOL_CRC(hid_snto32, 0x8b13a8b8, "_gpl");
SYMBOL_CRC(hid_field_extract, 0x63f31d8d, "_gpl");
SYMBOL_CRC(hid_output_report, 0x9ca27a5e, "_gpl");
SYMBOL_CRC(hid_alloc_report_buf, 0x68c24b25, "_gpl");
SYMBOL_CRC(hid_set_field, 0xc240e51a, "_gpl");
SYMBOL_CRC(__hid_request, 0xd7b8d5ee, "_gpl");
SYMBOL_CRC(hid_report_raw_event, 0x9ab59fb3, "_gpl");
SYMBOL_CRC(hid_input_report, 0xe23537ec, "_gpl");
SYMBOL_CRC(hid_match_id, 0xf93dc957, "_gpl");
SYMBOL_CRC(hid_connect, 0x397dedc1, "_gpl");
SYMBOL_CRC(hid_disconnect, 0xc415fcef, "_gpl");
SYMBOL_CRC(hid_hw_start, 0xb2ea5902, "_gpl");
SYMBOL_CRC(hid_hw_stop, 0x9661b603, "_gpl");
SYMBOL_CRC(hid_hw_open, 0xc20bf7af, "_gpl");
SYMBOL_CRC(hid_hw_close, 0xe22e47af, "_gpl");
SYMBOL_CRC(hid_hw_request, 0x6287919f, "_gpl");
SYMBOL_CRC(hid_hw_raw_request, 0x7ab2af0b, "_gpl");
SYMBOL_CRC(hid_hw_output_report, 0xd9db4733, "_gpl");
SYMBOL_CRC(hid_driver_suspend, 0xb4f4edc9, "_gpl");
SYMBOL_CRC(hid_driver_reset_resume, 0xe6f92d01, "_gpl");
SYMBOL_CRC(hid_driver_resume, 0x040ece48, "_gpl");
SYMBOL_CRC(hid_match_device, 0x5f7d6aa0, "_gpl");
SYMBOL_CRC(hid_compare_device_paths, 0x6693cfba, "_gpl");
SYMBOL_CRC(hid_bus_type, 0x53863d76, "");
SYMBOL_CRC(hid_add_device, 0xb3aa9c86, "_gpl");
SYMBOL_CRC(hid_allocate_device, 0x4d6739f9, "_gpl");
SYMBOL_CRC(hid_destroy_device, 0x57478f68, "_gpl");
SYMBOL_CRC(__hid_register_driver, 0x9b1fdb8a, "_gpl");
SYMBOL_CRC(hid_unregister_driver, 0xedff6918, "_gpl");
SYMBOL_CRC(hid_check_keys_pressed, 0x0d642be1, "_gpl");
SYMBOL_CRC(hidinput_calc_abs_res, 0x02bad30f, "_gpl");
SYMBOL_CRC(hidinput_report_event, 0x532ab09b, "_gpl");
SYMBOL_CRC(hidinput_get_led_field, 0xd954de17, "_gpl");
SYMBOL_CRC(hidinput_count_leds, 0xc620ef24, "_gpl");
SYMBOL_CRC(hidinput_connect, 0x4daab65e, "_gpl");
SYMBOL_CRC(hidinput_disconnect, 0x861a8e9f, "_gpl");
SYMBOL_CRC(hid_ignore, 0xfe674261, "_gpl");
SYMBOL_CRC(hid_quirks_init, 0xfa355613, "_gpl");
SYMBOL_CRC(hid_quirks_exit, 0x19d52f1f, "_gpl");
SYMBOL_CRC(hid_lookup_quirk, 0x60a972d7, "_gpl");
SYMBOL_CRC(hid_resolv_usage, 0x16172f4b, "_gpl");
SYMBOL_CRC(hid_dump_field, 0xad4eb20f, "_gpl");
SYMBOL_CRC(hid_dump_device, 0xab09ebe3, "_gpl");
SYMBOL_CRC(hid_debug_event, 0x41765976, "_gpl");
SYMBOL_CRC(hid_dump_report, 0xf828674f, "_gpl");
SYMBOL_CRC(hid_dump_input, 0x0852116f, "_gpl");
SYMBOL_CRC(hidraw_report_event, 0xa33c0132, "_gpl");
SYMBOL_CRC(hidraw_connect, 0xf863a3f7, "_gpl");
SYMBOL_CRC(hidraw_disconnect, 0x74340c59, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe03436e8, "input_allocate_device" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf3e1306c, "__class_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf6137b4a, "power_supply_register" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdc58d8f7, "driver_attach" },
	{ 0xc5c898f, "kill_fasync" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x99796b53, "up" },
	{ 0xb6028004, "device_initialize" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xff6a0b41, "bus_for_each_drv" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x1504f819, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x41b75b54, "device_reprobe" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xf6826382, "mutex_lock_killable_nested" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb96e6464, "bus_for_each_dev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9f984513, "strrchr" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xd7ef1ab2, "compat_ptr_ioctl" },
	{ 0xddfaee26, "cdev_add" },
	{ 0x2494cb7e, "device_create_file" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xb334290c, "down_write" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0x65b486c1, "device_add" },
	{ 0xf9136192, "device_create" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xe7f6378e, "down" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xdd714de9, "fasync_helper" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xe5a55b96, "down_trylock" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x77795db6, "power_supply_get_drvdata" },
	{ 0x538c7455, "device_del" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x5c05275a, "input_event" },
	{ 0xdb2abd50, "power_supply_changed" },
	{ 0x38078021, "bus_rescan_devices" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xe4002a1c, "input_set_abs_params" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf03e570f, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x51d37445, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4c8d0966, "power_supply_powers" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x73cd5347, "down_interruptible" },
	{ 0xbde7165d, "input_alloc_absinfo" },
	{ 0x8e472c68, "input_ff_event" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x560935c4, "power_supply_unregister" },
	{ 0x2f12ffed, "single_release" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x38a4f93d, "single_open" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x12b824a2, "up_read" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x59a7328c, "driver_register" },
	{ 0x4fcbe300, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x378a8904, "cdev_del" },
	{ 0xcef07d04, "device_remove_file" },
	{ 0x4786d9cb, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CC1806988DBC8A0BF683948");
