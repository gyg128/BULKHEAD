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

SYMBOL_CRC(snd_hwdep_new, 0xbf78a120, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x734e7bb9, "try_module_get" },
	{ 0x46f8d0d2, "snd_info_register" },
	{ 0x814f9b1c, "snd_info_create_module_entry" },
	{ 0x83b74166, "snd_ctl_unregister_ioctl_compat" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x97a6ea8f, "snd_unregister_oss_device" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xe5e225f9, "snd_register_oss_device" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0x522e3d91, "snd_ctl_register_ioctl" },
	{ 0x64458fb5, "snd_card_file_add" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x339178ad, "module_put" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa13a5dfe, "snd_unregister_device" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xa9b1739f, "current_task" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xf5cb046b, "snd_ctl_unregister_ioctl" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xaaa7300, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x50441b87, "snd_ctl_register_ioctl_compat" },
	{ 0x1ba4caff, "snd_device_initialize" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x48e988a5, "snd_card_file_remove" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x8935ab17, "snd_register_device" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "2F1902DAB3C617A971424F9");
