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

SYMBOL_CRC(snd_use_lock_sync_helper, 0x3061c52d, "");
SYMBOL_CRC(snd_seq_client_ioctl_lock, 0xe50413d7, "_gpl");
SYMBOL_CRC(snd_seq_client_ioctl_unlock, 0xadb51cff, "_gpl");
SYMBOL_CRC(snd_seq_set_queue_tempo, 0xb8e448a0, "");
SYMBOL_CRC(snd_seq_create_kernel_client, 0x3ed54017, "");
SYMBOL_CRC(snd_seq_delete_kernel_client, 0x6bb71038, "");
SYMBOL_CRC(snd_seq_kernel_client_enqueue, 0xc91a83dd, "");
SYMBOL_CRC(snd_seq_kernel_client_dispatch, 0x3fb4d161, "");
SYMBOL_CRC(snd_seq_kernel_client_ctl, 0x1a724fcc, "");
SYMBOL_CRC(snd_seq_kernel_client_write_poll, 0x6ae2e5ed, "");
SYMBOL_CRC(snd_seq_dump_var_event, 0xe934da1d, "");
SYMBOL_CRC(snd_seq_expand_var_event, 0x7ac2f329, "");
SYMBOL_CRC(snd_seq_event_port_attach, 0x5809e5d2, "");
SYMBOL_CRC(snd_seq_event_port_detach, 0x7b8699eb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x189e5b9c, "__init_rwsem" },
	{ 0x46f8d0d2, "snd_info_register" },
	{ 0x814f9b1c, "snd_info_create_module_entry" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x83e8daba, "snd_seq_root" },
	{ 0xf353e6c, "snd_timer_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0x168b16da, "down_read_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3178d3cf, "_raw_write_lock_irq" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x6d9c027f, "snd_timer_open" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x211fcf87, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe84974e3, "snd_timer_start" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb334290c, "down_write" },
	{ 0x1bb1702a, "up_write" },
	{ 0x6b57e6c4, "snd_timer_resolution" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x4d99a93a, "snd_timer_pause" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0xa13a5dfe, "snd_unregister_device" },
	{ 0xcea9fa41, "_raw_read_unlock" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x2a6a50f5, "snd_timer_instance_new" },
	{ 0xbcef5b05, "_raw_write_unlock_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x7bb4ecf, "snd_timer_instance_free" },
	{ 0xf03e570f, "down_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0xa9462f69, "_raw_read_lock" },
	{ 0x1ba4caff, "snd_device_initialize" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x469387ba, "stream_open" },
	{ 0x3309c539, "pid_vnr" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x8935ab17, "snd_register_device" },
	{ 0x12b824a2, "up_read" },
	{ 0x7bf8c44b, "put_pid" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "776A10E07CA259BCE0FF624");
