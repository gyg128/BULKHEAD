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

SYMBOL_CRC(usb_hid_driver, 0xebfacbb8, "_gpl");
SYMBOL_CRC(hiddev_hid_event, 0x29bc94a1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9ca27a5e, "hid_output_report" },
	{ 0x60a972d7, "hid_lookup_quirk" },
	{ 0x468ca1f2, "usb_alloc_urb" },
	{ 0x6defa1c1, "device_set_wakeup_enable" },
	{ 0x263c3152, "bcmp" },
	{ 0xb1bef5b7, "usb_autopm_put_interface" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaafba0cf, "usb_free_urb" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf7e9137c, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0xb4f4edc9, "hid_driver_suspend" },
	{ 0x366572f6, "mutex_lock_interruptible_nested" },
	{ 0x1952790e, "finish_wait" },
	{ 0xc5c898f, "kill_fasync" },
	{ 0xe79920b5, "usb_register_driver" },
	{ 0xe6f92d01, "hid_driver_reset_resume" },
	{ 0x99796b53, "up" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0x1f8e561f, "prepare_to_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc620ef24, "hidinput_count_leds" },
	{ 0x81133391, "usb_autopm_put_interface_no_suspend" },
	{ 0x40ece48, "hid_driver_resume" },
	{ 0x72f434b5, "usb_autopm_get_interface_no_resume" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x4d6739f9, "hid_allocate_device" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x57478f68, "hid_destroy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf7fda28, "usb_interrupt_msg" },
	{ 0xcc999ece, "usb_find_interface" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x8995b775, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xc488560a, "usb_autopm_get_interface_async" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x61c42ea4, "usb_submit_urb" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xdf60cccd, "usb_queue_reset_device" },
	{ 0x68c24b25, "hid_alloc_report_buf" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xd7ef1ab2, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xc1087901, "usb_free_coherent" },
	{ 0xc240e51a, "hid_set_field" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xe7f6378e, "down" },
	{ 0x6287919f, "hid_hw_request" },
	{ 0xc20bf7af, "hid_hw_open" },
	{ 0x7bd71152, "usb_control_msg" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0xa4679deb, "usb_register_dev" },
	{ 0xd642be1, "hid_check_keys_pressed" },
	{ 0xdd714de9, "fasync_helper" },
	{ 0x5ddcefea, "usb_unpoison_urb" },
	{ 0x64346eef, "usb_autopm_put_interface_async" },
	{ 0xe22e47af, "hid_hw_close" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x69b00e0, "usb_deregister" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xe30650fc, "usb_string" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x637ac6b9, "usb_block_urb" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe23537ec, "hid_input_report" },
	{ 0x5495392, "hid_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f10c326, "usb_unlink_urb" },
	{ 0xeaee3eee, "_dev_notice" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0xc17d42a, "usb_autopm_get_interface" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x8f1ad9d9, "input_ff_create" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb2a2f3d1, "usb_deregister_dev" },
	{ 0x7fc0b485, "usb_kill_urb" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x9a014669, "hid_parse_report" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xb3aa9c86, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "1F88FE17A9CEB3E3FE22DDF");
