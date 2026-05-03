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
	{ 0x4e1d58b7, "__do_once_done" },
	{ 0xc57c238a, "pci_save_state" },
	{ 0x7e88a8e8, "pcie_aspm_enabled" },
	{ 0x25eda19d, "dma_pci_p2pdma_supported" },
	{ 0x308d8049, "nvme_uninit_ctrl" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0x953571ce, "dma_pool_create" },
	{ 0xe740fb23, "nvme_complete_rq" },
	{ 0xee0bae18, "pci_request_selected_regions" },
	{ 0x90734724, "pci_release_selected_regions" },
	{ 0x93477d3, "nvme_wait_freeze_timeout" },
	{ 0xdbbbac2b, "pci_enable_device_mem" },
	{ 0xab210827, "nvme_cancel_admin_tagset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbe2a2765, "complete" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x2de1903, "nvme_start_queues" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x9bcd3edf, "__init_swait_queue_head" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0xddfb38e5, "blk_mq_complete_request_remote" },
	{ 0x47174133, "dma_unmap_page_attrs" },
	{ 0xb5d1b3c9, "nvme_setup_cmd" },
	{ 0x91a2ab0d, "nvme_start_freeze" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0x90314b92, "nvme_start_ctrl" },
	{ 0x257b1aa0, "pcibios_resource_to_bus" },
	{ 0xedc03953, "iounmap" },
	{ 0xbac2cb9, "param_set_uint" },
	{ 0x8963ce01, "nvme_complete_batch_req" },
	{ 0xfcb5ce29, "nvme_submit_sync_cmd" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb3486525, "pci_disable_pcie_error_reporting" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xb8c8e83c, "pci_irq_vector" },
	{ 0x33a44216, "get_device" },
	{ 0x8f79f4a1, "nvme_disable_ctrl" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x18a0724f, "mempool_free" },
	{ 0x9493fc86, "node_states" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe8d92234, "blk_mq_alloc_tag_set" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x1ae983c8, "blk_mq_end_request_batch" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x5ff407ab, "dma_map_page_attrs" },
	{ 0xb1a17739, "blk_mq_pci_map_queues" },
	{ 0xcfe5de15, "nvme_wait_freeze" },
	{ 0x92997ed8, "_printk" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x25ba09e5, "nvme_cleanup_cmd" },
	{ 0xf7a67d72, "param_get_uint" },
	{ 0xedf05f86, "nvme_sync_queues" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xad1ab0bf, "dma_max_mapping_size" },
	{ 0x211fcf87, "put_device" },
	{ 0x8a75f445, "pci_free_irq" },
	{ 0x265cc1f6, "kmalloc_node_trace" },
	{ 0xd650139c, "mempool_create_node" },
	{ 0x708b9d19, "mempool_alloc" },
	{ 0x23400f61, "__tracepoint_nvme_sq" },
	{ 0xa06d6e2f, "blk_mq_free_request" },
	{ 0xf41af5fd, "nvme_change_ctrl_state" },
	{ 0x1258e103, "nvme_cancel_tagset" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xc2a5116a, "pci_select_bars" },
	{ 0x98ea49e1, "nvme_init_ctrl" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbca9fdce, "blk_get_queue" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x51c27a84, "nvme_fail_nonready_command" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb3a715ce, "pci_request_irq" },
	{ 0x31f635b0, "pci_load_saved_state" },
	{ 0x809824a6, "blk_execute_rq_nowait" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xcaca440e, "pci_device_is_present" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0x147e898e, "acpi_storage_d3" },
	{ 0xc2eab5df, "__blk_rq_map_sg" },
	{ 0x2f1bf100, "nvme_remove_namespaces" },
	{ 0xcb4d5d4e, "blk_mq_alloc_request" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe0cc1d30, "blk_mq_free_tag_set" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xe63df29d, "blk_put_queue" },
	{ 0x9463c005, "pci_restore_state" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6644c70a, "nvme_enable_ctrl" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc74c9cfd, "nvme_try_sched_reset" },
	{ 0xff0dafea, "pci_enable_pcie_error_reporting" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xbf1d913e, "pci_alloc_irq_vectors_affinity" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5bdf331e, "blk_mq_init_queue" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0xe9ce5474, "mutex_trylock" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x50763f4a, "blk_mq_update_nr_hw_queues" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1978ec8d, "__SCK__tp_func_nvme_sq" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xa21b6331, "param_set_uint_minmax" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x24640bfa, "nvme_stop_admin_queue" },
	{ 0xaa56b102, "nvme_kill_queues" },
	{ 0x6fa8a2f8, "dma_map_sgtable" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x3bb6279f, "blk_mq_destroy_queue" },
	{ 0xa72229f5, "nvme_complete_async_event" },
	{ 0x87b8798d, "sg_next" },
	{ 0x644858f3, "nvme_stop_queues" },
	{ 0x71d4673b, "mempool_destroy" },
	{ 0x23be17bc, "nvme_set_queue_count" },
	{ 0x56470118, "__warn_printk" },
	{ 0x75167c42, "nvme_shutdown_ctrl" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0x85c16c9c, "nvme_start_admin_queue" },
	{ 0xd4d670d9, "nvme_set_features" },
	{ 0x160084d2, "blk_mq_start_request" },
	{ 0xef45c80d, "nvme_unfreeze" },
	{ 0xb110bb51, "pci_disable_device" },
	{ 0x5516009d, "nvme_stop_ctrl" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x3bf2393a, "__SCT__tp_func_nvme_sq" },
	{ 0x9e90d667, "nvme_wait_reset" },
	{ 0xf8ba36e0, "dma_unmap_sg_attrs" },
	{ 0x4612f011, "nvme_init_request" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5a6da20, "device_release_driver" },
	{ 0x8344e028, "pci_sriov_configure_simple" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x1405e045, "nvme_init_ctrl_finish" },
	{ 0x4945605b, "nvme_reset_ctrl" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x5cfbfa53, "pci_free_irq_vectors" },
	{ 0x5b9bdfe7, "nvme_get_features" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4474b536, "__nvme_check_ready" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xc853df97, "wait_for_completion_io_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B36d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00001092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d000033F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005407sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd0000174Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B7d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D97d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A80Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC4d00006303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC4d00006302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002262sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00005018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d0000501Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d0000501Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d0000501Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001F40d00005236sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00005350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001DBEd00005236sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E49d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E49d00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000C0A9d0000540Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D97d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D97d00002269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00008061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");

MODULE_INFO(srcversion, "EEA6793F625640D30AC6CBE");
