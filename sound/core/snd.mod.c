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

SYMBOL_CRC(snd_major, 0x8f595b11, "");
SYMBOL_CRC(snd_ecards_limit, 0x3971b4df, "");
SYMBOL_CRC(snd_request_card, 0x4a3ea5c0, "");
SYMBOL_CRC(snd_lookup_minor_data, 0xb2e5ae4a, "");
SYMBOL_CRC(snd_register_device, 0x8935ab17, "");
SYMBOL_CRC(snd_unregister_device, 0xa13a5dfe, "");
SYMBOL_CRC(snd_device_initialize, 0x1ba4caff, "_gpl");
SYMBOL_CRC(snd_card_new, 0xb2cd5ddb, "");
SYMBOL_CRC(snd_devm_card_new, 0x224d69a4, "_gpl");
SYMBOL_CRC(snd_card_free_on_error, 0xb2ca9767, "_gpl");
SYMBOL_CRC(snd_card_ref, 0xa34c0368, "_gpl");
SYMBOL_CRC(snd_card_disconnect, 0xc53e43cb, "");
SYMBOL_CRC(snd_card_disconnect_sync, 0x9936f8b3, "_gpl");
SYMBOL_CRC(snd_card_free_when_closed, 0x1697f93e, "");
SYMBOL_CRC(snd_card_free, 0x4ae84582, "");
SYMBOL_CRC(snd_card_set_id, 0xc141e060, "");
SYMBOL_CRC(snd_card_add_dev_attr, 0x9f148091, "_gpl");
SYMBOL_CRC(snd_card_register, 0x2867a259, "");
SYMBOL_CRC(snd_component_add, 0x6d0582c8, "");
SYMBOL_CRC(snd_card_file_add, 0x64458fb5, "");
SYMBOL_CRC(snd_card_file_remove, 0x48e988a5, "");
SYMBOL_CRC(snd_power_ref_and_wait, 0x03601c4e, "_gpl");
SYMBOL_CRC(snd_power_wait, 0xb11766ab, "");
SYMBOL_CRC(copy_to_user_fromio, 0x342a2354, "");
SYMBOL_CRC(copy_from_user_toio, 0xfffd89db, "");
SYMBOL_CRC(snd_ctl_notify, 0xc7fe416e, "");
SYMBOL_CRC(snd_ctl_notify_one, 0x1ffe5360, "");
SYMBOL_CRC(snd_ctl_new1, 0xe17dde74, "");
SYMBOL_CRC(snd_ctl_free_one, 0x41004f07, "");
SYMBOL_CRC(snd_ctl_add, 0xa5626a0c, "");
SYMBOL_CRC(snd_ctl_replace, 0x3e2236fe, "");
SYMBOL_CRC(snd_ctl_remove, 0xbec57b33, "");
SYMBOL_CRC(snd_ctl_remove_id, 0xe352881f, "");
SYMBOL_CRC(snd_ctl_activate_id, 0x9cdd9dce, "_gpl");
SYMBOL_CRC(snd_ctl_rename_id, 0xc0a2f48c, "");
SYMBOL_CRC(snd_ctl_rename, 0x10aed1f7, "");
SYMBOL_CRC(snd_ctl_find_numid, 0xad4e5b7e, "");
SYMBOL_CRC(snd_ctl_find_id, 0x492bfb38, "");
SYMBOL_CRC(snd_ctl_register_ioctl, 0x522e3d91, "");
SYMBOL_CRC(snd_ctl_register_ioctl_compat, 0x50441b87, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl, 0xf5cb046b, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl_compat, 0x83b74166, "");
SYMBOL_CRC(snd_ctl_get_preferred_subdevice, 0xe7b108c5, "_gpl");
SYMBOL_CRC(snd_ctl_request_layer, 0xfaf598c6, "_gpl");
SYMBOL_CRC(snd_ctl_register_layer, 0xeca5f170, "_gpl");
SYMBOL_CRC(snd_ctl_disconnect_layer, 0x01d76a63, "_gpl");
SYMBOL_CRC(snd_ctl_boolean_mono_info, 0x063c3d48, "");
SYMBOL_CRC(snd_ctl_boolean_stereo_info, 0xebe60d58, "");
SYMBOL_CRC(snd_ctl_enum_info, 0xcc6a729f, "");
SYMBOL_CRC(release_and_free_resource, 0xc5a6d10b, "");
SYMBOL_CRC(snd_pci_quirk_lookup_id, 0x73076315, "");
SYMBOL_CRC(snd_pci_quirk_lookup, 0x6c3eb8ff, "");
SYMBOL_CRC(snd_fasync_helper, 0xba0179b9, "_gpl");
SYMBOL_CRC(snd_kill_fasync, 0xf8f2a4eb, "_gpl");
SYMBOL_CRC(snd_fasync_free, 0x5af762f1, "_gpl");
SYMBOL_CRC(snd_device_new, 0xaf8b66c5, "");
SYMBOL_CRC(snd_device_disconnect, 0xa1aacba3, "_gpl");
SYMBOL_CRC(snd_device_free, 0x6049c649, "");
SYMBOL_CRC(snd_device_register, 0xb2f03776, "");
SYMBOL_CRC(snd_device_get_state, 0xe492d79e, "_gpl");
SYMBOL_CRC(snd_seq_root, 0x83e8daba, "");
SYMBOL_CRC(snd_info_get_line, 0x24a94b26, "");
SYMBOL_CRC(snd_info_get_str, 0x9e6d79f8, "");
SYMBOL_CRC(snd_info_create_module_entry, 0x814f9b1c, "");
SYMBOL_CRC(snd_info_create_card_entry, 0x234fb5e3, "");
SYMBOL_CRC(snd_info_free_entry, 0x6e94d673, "");
SYMBOL_CRC(snd_info_register, 0x46f8d0d2, "");
SYMBOL_CRC(snd_card_rw_proc_new, 0xac0e14af, "_gpl");
SYMBOL_CRC(snd_oss_info_register, 0x8df3789f, "");
SYMBOL_CRC(snd_dma_program, 0x18e1683f, "");
SYMBOL_CRC(snd_dma_disable, 0x70c15ac1, "");
SYMBOL_CRC(snd_dma_pointer, 0x191e88cf, "");
SYMBOL_CRC(snd_devm_request_dma, 0x779050ee, "_gpl");
SYMBOL_CRC(snd_lookup_oss_minor_data, 0x198788b4, "");
SYMBOL_CRC(snd_register_oss_device, 0xe5e225f9, "");
SYMBOL_CRC(snd_unregister_oss_device, 0x97a6ea8f, "");
SYMBOL_CRC(_snd_ctl_add_follower, 0x4c8e616a, "");
SYMBOL_CRC(snd_ctl_make_virtual_master, 0x7ec6bf8a, "");
SYMBOL_CRC(snd_ctl_add_vmaster_hook, 0x81951fa6, "_gpl");
SYMBOL_CRC(snd_ctl_sync_vmaster, 0xb0bb20f0, "_gpl");
SYMBOL_CRC(snd_ctl_apply_vmaster_followers, 0xc36561f7, "_gpl");
SYMBOL_CRC(snd_jack_add_new_kctl, 0x418ddcab, "");
SYMBOL_CRC(snd_jack_new, 0x28b52a08, "");
SYMBOL_CRC(snd_jack_set_parent, 0x7f61c0c0, "");
SYMBOL_CRC(snd_jack_set_key, 0x01db2f75, "");
SYMBOL_CRC(snd_jack_report, 0x14b33cb1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe03436e8, "input_allocate_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x189e5b9c, "__init_rwsem" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbe2a2765, "complete" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0x1952790e, "finish_wait" },
	{ 0xc5c898f, "kill_fasync" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x70658009, "proc_mkdir_mode" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb6028004, "device_initialize" },
	{ 0x7f25cb50, "param_array_ops" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0x874d2732, "xa_store_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x348bbf25, "proc_create_data" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0xbf3500fc, "devm_remove_action" },
	{ 0x33a44216, "get_device" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x86055fa8, "devres_add" },
	{ 0x1fdf28d0, "single_open_size" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0xa7ab06f2, "_raw_read_unlock_irqrestore" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x1504f819, "input_free_device" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x211fcf87, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x546f77ef, "register_sound_special_device" },
	{ 0xfd3127b2, "_raw_read_lock_irqsave" },
	{ 0x339178ad, "module_put" },
	{ 0x578dd92, "devm_add_action" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x61651be, "strcat" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb334290c, "down_write" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0x65b486c1, "device_add" },
	{ 0x6c932a66, "init_uts_ns" },
	{ 0x3f22b0d4, "xa_load" },
	{ 0xdcd6e258, "noop_llseek" },
	{ 0xc52137ab, "fs_reclaim_release" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x121c4ff7, "input_set_capability" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0x45e4a032, "dma_spin_lock" },
	{ 0xdd714de9, "fasync_helper" },
	{ 0xf1e046cc, "panic" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xe163a684, "fs_reclaim_acquire" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x538c7455, "device_del" },
	{ 0x757c1e5f, "proc_mkdir" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x2d6b801, "param_ops_charp" },
	{ 0xb5148ae3, "wait_for_completion" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x5c05275a, "input_event" },
	{ 0x8dda6aa0, "proc_remove" },
	{ 0xf9a4e094, "_raw_write_unlock_irqrestore" },
	{ 0xf03e570f, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x12ea4024, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc59e19c9, "xa_erase" },
	{ 0x51d37445, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0x58538aeb, "xa_destroy" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xec82dddd, "proc_set_size" },
	{ 0x1139550e, "__register_chrdev" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2a856a3, "kobject_set_name" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x6d1b8e46, "downgrade_write" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x469387ba, "stream_open" },
	{ 0x2f12ffed, "single_release" },
	{ 0x3309c539, "pid_vnr" },
	{ 0xf48a8aee, "devres_find" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x2efb33e9, "_raw_write_lock_irqsave" },
	{ 0x38d2fabf, "sound_class" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc5e74216, "release_resource" },
	{ 0x72b243d4, "free_dma" },
	{ 0x754d539c, "strlen" },
	{ 0x31313bdd, "proc_symlink" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x38a4f93d, "single_open" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x12b824a2, "up_read" },
	{ 0x7bf8c44b, "put_pid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "soundcore");


MODULE_INFO(srcversion, "DA2D8DAB3C2A56D9BC5F91F");
