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

SYMBOL_CRC(admin_timeout, 0xd45434ee, "_gpl");
SYMBOL_CRC(nvme_io_timeout, 0x813cf212, "_gpl");
SYMBOL_CRC(nvme_wq, 0x64b62862, "_gpl");
SYMBOL_CRC(nvme_reset_wq, 0x49224181, "_gpl");
SYMBOL_CRC(nvme_delete_wq, 0xd58bbbcb, "_gpl");
SYMBOL_CRC(nvme_try_sched_reset, 0xc74c9cfd, "_gpl");
SYMBOL_CRC(nvme_reset_ctrl, 0x4945605b, "_gpl");
SYMBOL_CRC(nvme_delete_ctrl, 0x50e10c2d, "_gpl");
SYMBOL_CRC(nvme_complete_rq, 0xe740fb23, "_gpl");
SYMBOL_CRC(nvme_complete_batch_req, 0x8963ce01, "_gpl");
SYMBOL_CRC(nvme_host_path_error, 0xe3a02654, "_gpl");
SYMBOL_CRC(nvme_cancel_request, 0xa6243c4f, "_gpl");
SYMBOL_CRC(nvme_cancel_tagset, 0x1258e103, "_gpl");
SYMBOL_CRC(nvme_cancel_admin_tagset, 0xab210827, "_gpl");
SYMBOL_CRC(nvme_change_ctrl_state, 0xf41af5fd, "_gpl");
SYMBOL_CRC(nvme_wait_reset, 0x9e90d667, "_gpl");
SYMBOL_CRC(nvme_put_ns, 0xb029d059, "_gpl");
SYMBOL_CRC(nvme_init_request, 0x4612f011, "_gpl");
SYMBOL_CRC(nvme_fail_nonready_command, 0x51c27a84, "_gpl");
SYMBOL_CRC(__nvme_check_ready, 0x4474b536, "_gpl");
SYMBOL_CRC(nvme_cleanup_cmd, 0x25ba09e5, "_gpl");
SYMBOL_CRC(nvme_setup_cmd, 0xb5d1b3c9, "_gpl");
SYMBOL_CRC(__nvme_submit_sync_cmd, 0xba778dd4, "_gpl");
SYMBOL_CRC(nvme_submit_sync_cmd, 0xfcb5ce29, "_gpl");
SYMBOL_CRC(nvme_command_effects, 0x28c5ce46, "_gpl");
SYMBOL_CRC(nvme_passthru_end, 0xf48ac1ee, "_gpl");
SYMBOL_CRC(nvme_execute_passthru_rq, 0x9d843f9d, "_gpl");
SYMBOL_CRC(nvme_stop_keep_alive, 0xc7052ec8, "_gpl");
SYMBOL_CRC(nvme_set_features, 0xd4d670d9, "_gpl");
SYMBOL_CRC(nvme_get_features, 0x5b9bdfe7, "_gpl");
SYMBOL_CRC(nvme_set_queue_count, 0x23be17bc, "_gpl");
SYMBOL_CRC(nvme_sec_submit, 0x8a9c70ed, "_gpl");
SYMBOL_CRC(nvme_disable_ctrl, 0x8f79f4a1, "_gpl");
SYMBOL_CRC(nvme_enable_ctrl, 0x6644c70a, "_gpl");
SYMBOL_CRC(nvme_shutdown_ctrl, 0x75167c42, "_gpl");
SYMBOL_CRC(nvme_init_ctrl_finish, 0x1405e045, "_gpl");
SYMBOL_CRC(nvme_find_get_ns, 0x2f213904, "_gpl");
SYMBOL_CRC(nvme_remove_namespaces, 0x2f1bf100, "_gpl");
SYMBOL_CRC(nvme_complete_async_event, 0xa72229f5, "_gpl");
SYMBOL_CRC(nvme_alloc_admin_tag_set, 0x4effb60f, "_gpl");
SYMBOL_CRC(nvme_remove_admin_tag_set, 0xbaf8d552, "_gpl");
SYMBOL_CRC(nvme_alloc_io_tag_set, 0x448d996c, "_gpl");
SYMBOL_CRC(nvme_remove_io_tag_set, 0xa0db2545, "_gpl");
SYMBOL_CRC(nvme_stop_ctrl, 0x5516009d, "_gpl");
SYMBOL_CRC(nvme_start_ctrl, 0x90314b92, "_gpl");
SYMBOL_CRC(nvme_uninit_ctrl, 0x308d8049, "_gpl");
SYMBOL_CRC(nvme_init_ctrl, 0x98ea49e1, "_gpl");
SYMBOL_CRC(nvme_kill_queues, 0xaa56b102, "_gpl");
SYMBOL_CRC(nvme_unfreeze, 0xef45c80d, "_gpl");
SYMBOL_CRC(nvme_wait_freeze_timeout, 0x093477d3, "_gpl");
SYMBOL_CRC(nvme_wait_freeze, 0xcfe5de15, "_gpl");
SYMBOL_CRC(nvme_start_freeze, 0x91a2ab0d, "_gpl");
SYMBOL_CRC(nvme_stop_queues, 0x644858f3, "_gpl");
SYMBOL_CRC(nvme_start_queues, 0x02de1903, "_gpl");
SYMBOL_CRC(nvme_stop_admin_queue, 0x24640bfa, "_gpl");
SYMBOL_CRC(nvme_start_admin_queue, 0x85c16c9c, "_gpl");
SYMBOL_CRC(nvme_sync_io_queues, 0x075c874d, "_gpl");
SYMBOL_CRC(nvme_sync_queues, 0xedf05f86, "_gpl");
SYMBOL_CRC(nvme_ctrl_from_file, 0x72710251, "_gpl");
SYMBOL_CRC(__tracepoint_nvme_sq, 0x23400f61, "_gpl");
SYMBOL_CRC(__traceiter_nvme_sq, 0xf773e272, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nvme_sq, 0x1978ec8d, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nvme_sq, 0x3bf2393a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x66ac3024, "set_capacity_and_notify" },
	{ 0xdb1fa1c9, "bio_associate_blkg" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x90fbd3f9, "set_disk_ro" },
	{ 0x1a11f4e6, "__blk_alloc_disk" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x66f5ba91, "blk_integrity_register" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x189e5b9c, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf37fc324, "ida_destroy" },
	{ 0xf3e1306c, "__class_create" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0xa6e07658, "device_remove_file_self" },
	{ 0xd2b956f6, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x193088a9, "blk_queue_logical_block_size" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x92afe492, "ext_pi_type3_crc64" },
	{ 0xb56ed101, "bio_split_to_limits" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xeea88a36, "disk_update_readahead" },
	{ 0x678bacb8, "dev_pm_qos_expose_latency_tolerance" },
	{ 0xfce53f34, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x63ed9060, "trace_raw_output_prep" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x9719c2a0, "blk_mq_tagset_wait_completed_request" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xbcf8a4ff, "cdev_device_del" },
	{ 0xc57bb1be, "bio_poll" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xdbb4e1fb, "__trace_trigger_soft_disabled" },
	{ 0x1952790e, "finish_wait" },
	{ 0x8c1794b7, "class_destroy" },
	{ 0x8090d2bf, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb6028004, "device_initialize" },
	{ 0x9d6d7764, "blk_mq_unquiesce_queue" },
	{ 0x921d9f8a, "t10_pi_type1_crc" },
	{ 0x67fa287d, "blk_queue_dma_alignment" },
	{ 0xcffc2bde, "blk_mq_quiesce_queue" },
	{ 0xe96a8540, "trace_event_raw_init" },
	{ 0xd08ae3ef, "ext_pi_type1_crc64" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x47507898, "blk_queue_write_cache" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x3efb6715, "kblockd_schedule_work" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9946e9cd, "bpf_trace_run2" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0xa1533830, "disk_uevent" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x6e5001cc, "synchronize_srcu" },
	{ 0x1581d676, "param_ops_byte" },
	{ 0x33a44216, "get_device" },
	{ 0x946bf41, "blk_mq_end_request" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xee6e09cf, "__blk_mq_alloc_disk" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x9493fc86, "node_states" },
	{ 0xe265cc3b, "blk_integrity_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4f4030ac, "blk_mq_delay_kick_requeue_list" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe8d92234, "blk_mq_alloc_tag_set" },
	{ 0xd99ef102, "blk_rq_is_poll" },
	{ 0x238b3955, "trace_event_buffer_commit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x1b5f4377, "trace_seq_putc" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0xb67e210c, "put_disk" },
	{ 0x544b2da7, "cdev_device_add" },
	{ 0xa05bd867, "dev_pm_qos_update_user_latency_tolerance" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x87a0b114, "blk_queue_physical_block_size" },
	{ 0x9092e3e0, "blk_execute_rq" },
	{ 0x211fcf87, "put_device" },
	{ 0xd1adb970, "blk_queue_max_zone_append_sectors" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c8ff221, "blk_queue_flag_set" },
	{ 0x265cc1f6, "kmalloc_node_trace" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa06d6e2f, "blk_mq_free_request" },
	{ 0x9dbc4be1, "disk_set_zoned" },
	{ 0x618911fc, "numa_node" },
	{ 0x254548b, "__free_pages" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x4f4a6efd, "blk_rq_map_kern" },
	{ 0xc6cbbc89, "capable" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x2349b131, "sysfs_create_link" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd7ef1ab2, "compat_ptr_ioctl" },
	{ 0xdfd53e81, "t10_pi_type3_crc" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x1c8d8d56, "kobject_uevent_env" },
	{ 0x9c0e3c47, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9b463ac8, "perf_trace_run_bpf_submit" },
	{ 0xb66f9cd2, "__SCK__tp_func_block_bio_remap" },
	{ 0xb334290c, "down_write" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x51cf93ec, "blk_revalidate_disk_zones" },
	{ 0x1bb1702a, "up_write" },
	{ 0x65b486c1, "device_add" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x2b32fc43, "blk_rq_map_user_io" },
	{ 0x2b6c77a2, "sysfs_remove_link" },
	{ 0x809824a6, "blk_execute_rq_nowait" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x86be4af0, "__srcu_read_lock" },
	{ 0x37b9a0c5, "hwmon_device_register_with_info" },
	{ 0x8d480e75, "set_capacity" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0x9c77814, "submit_bio_noacct" },
	{ 0x3f22b0d4, "xa_load" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b442597, "blk_sync_queue" },
	{ 0xf549b29e, "bio_integrity_add_page" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0xea82b7cb, "__SCK__tp_func_block_bio_complete" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x6ab5241a, "trace_event_reg" },
	{ 0xa61ad8a2, "blk_mq_alloc_request_hctx" },
	{ 0xcb4d5d4e, "blk_mq_alloc_request" },
	{ 0x3155b23d, "ida_free" },
	{ 0x58de1b34, "blk_stack_limits" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe0cc1d30, "blk_mq_free_tag_set" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5ce5ee9d, "del_gendisk" },
	{ 0x87b6c6a0, "blk_queue_max_discard_sectors" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x739e4541, "cleanup_srcu_struct" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x18754db7, "bio_integrity_alloc" },
	{ 0xe9352ade, "blk_queue_max_discard_segments" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x2a8e551d, "blk_set_stacking_limits" },
	{ 0xd94fd3f0, "blk_mq_freeze_queue_wait_timeout" },
	{ 0xbf79aeca, "bpf_trace_run1" },
	{ 0x538c7455, "device_del" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x709c929, "lock_acquire" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xd70d8f86, "blk_mq_wait_quiesce_done" },
	{ 0x8bdedc19, "blk_queue_max_segments" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0x5bdf331e, "blk_mq_init_queue" },
	{ 0x9af0a615, "lock_release" },
	{ 0xf2ed0f0d, "__init_srcu_struct" },
	{ 0xd72d9a14, "io_uring_cmd_done" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xbd971c1, "blk_rq_unmap_user" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf03e570f, "down_read" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc59e19c9, "xa_erase" },
	{ 0xae08571c, "bpf_trace_run3" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4d7bb48d, "blk_queue_virt_boundary" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x693de1c1, "blk_mq_complete_request" },
	{ 0x7c077dab, "blk_queue_chunk_sectors" },
	{ 0xb73b5a86, "blk_queue_max_write_zeroes_sectors" },
	{ 0xaa823675, "blk_mq_freeze_queue" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb498712, "trace_event_buffer_reserve" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x3bb6279f, "blk_mq_destroy_queue" },
	{ 0x58538aeb, "xa_destroy" },
	{ 0x5f8f4e21, "blk_freeze_queue_start" },
	{ 0x21a13d41, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xe4c48923, "xa_find" },
	{ 0x21a82188, "alloc_pages" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfb28c90c, "__tracepoint_block_bio_complete" },
	{ 0xccdc986d, "xa_store" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0xaa8d423f, "blk_queue_io_min" },
	{ 0x5082950c, "__srcu_read_unlock" },
	{ 0xb851b903, "hwmon_device_unregister" },
	{ 0xc129deb4, "__tracepoint_block_bio_remap" },
	{ 0x533cbac6, "blk_mq_unfreeze_queue" },
	{ 0x133c598d, "blk_mq_tagset_busy_iter" },
	{ 0x7a80b999, "blkdev_compat_ptr_ioctl" },
	{ 0x17482261, "blk_rq_map_user_iov" },
	{ 0x41a4c874, "xa_find_after" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x18af3463, "blk_queue_max_hw_sectors" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x23be2af5, "blk_mark_disk_dead" },
	{ 0x754d539c, "strlen" },
	{ 0xaee75e42, "io_uring_cmd_import_fixed" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71e5a4c1, "blk_mq_freeze_queue_wait" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x913bd447, "blk_queue_io_opt" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x12b824a2, "up_read" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0x4e35a1ef, "blk_mq_requeue_request" },
	{ 0x530d8d13, "io_uring_cmd_complete_in_task" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4fcbe300, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x4e144a54, "__SCT__tp_func_block_bio_complete" },
	{ 0xae8e821c, "blk_steal_bios" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa2f050e8, "rcu_lock_map" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47ADA35D81B3B9F5E6B09E7");
