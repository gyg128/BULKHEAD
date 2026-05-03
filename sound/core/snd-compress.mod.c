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

SYMBOL_CRC(snd_compr_malloc_pages, 0xf6b5e680, "");
SYMBOL_CRC(snd_compr_free_pages, 0x345f4ee3, "");
SYMBOL_CRC(snd_compr_stop_error, 0x44c68b42, "_gpl");
SYMBOL_CRC(snd_compress_new, 0x3e14a549, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8b205642, "snd_dma_alloc_dir_pages" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x1952790e, "finish_wait" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xca43db69, "snd_dma_free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x211fcf87, "put_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa13a5dfe, "snd_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0xfb578fc5, "memset" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaaa7300, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x234fb5e3, "snd_info_create_card_entry" },
	{ 0x1ba4caff, "snd_device_initialize" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8935ab17, "snd_register_device" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "188AA94EA761E1127F2F8EB");
