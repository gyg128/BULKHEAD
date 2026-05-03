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

SYMBOL_CRC(snd_timer_instance_new, 0x2a6a50f5, "");
SYMBOL_CRC(snd_timer_instance_free, 0x07bb4ecf, "");
SYMBOL_CRC(snd_timer_open, 0x6d9c027f, "");
SYMBOL_CRC(snd_timer_close, 0x0f353e6c, "");
SYMBOL_CRC(snd_timer_resolution, 0x6b57e6c4, "");
SYMBOL_CRC(snd_timer_start, 0xe84974e3, "");
SYMBOL_CRC(snd_timer_stop, 0x85745d11, "");
SYMBOL_CRC(snd_timer_continue, 0x7db9ab0b, "");
SYMBOL_CRC(snd_timer_pause, 0x4d99a93a, "");
SYMBOL_CRC(snd_timer_interrupt, 0x86b7808f, "");
SYMBOL_CRC(snd_timer_new, 0xd70039e5, "");
SYMBOL_CRC(snd_timer_notify, 0x149d81cc, "");
SYMBOL_CRC(snd_timer_global_new, 0x05fbc602, "");
SYMBOL_CRC(snd_timer_global_free, 0xa1744e12, "");
SYMBOL_CRC(snd_timer_global_register, 0xeeb8023d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x734e7bb9, "try_module_get" },
	{ 0x46f8d0d2, "snd_info_register" },
	{ 0x814f9b1c, "snd_info_create_module_entry" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xba0179b9, "snd_fasync_helper" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x33a44216, "get_device" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x339178ad, "module_put" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa13a5dfe, "snd_unregister_device" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0xfb578fc5, "memset" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x1ba4caff, "snd_device_initialize" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x469387ba, "stream_open" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x715ac5e, "del_timer" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x8935ab17, "snd_register_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "97311D7218B71D0AEA590D6");
