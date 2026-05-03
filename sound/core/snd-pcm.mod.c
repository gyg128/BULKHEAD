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

SYMBOL_CRC(snd_pcm_format_name, 0xa286a234, "_gpl");
SYMBOL_CRC(snd_pcm_new_stream, 0xc40c4fc7, "");
SYMBOL_CRC(snd_pcm_new, 0xf4bff886, "");
SYMBOL_CRC(snd_pcm_new_internal, 0xba94d662, "");
SYMBOL_CRC(snd_pcm_stream_lock, 0x6fce56f8, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock, 0x39f1c4e4, "_gpl");
SYMBOL_CRC(snd_pcm_stream_lock_irq, 0xf92e8a38, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irq, 0xc7a0d07c, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave, 0x52f76278, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave_nested, 0x79aadba8, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irqrestore, 0x260dd563, "_gpl");
SYMBOL_CRC(snd_pcm_hw_refine, 0x9f2314f2, "");
SYMBOL_CRC(snd_pcm_stop, 0x0d17607d, "");
SYMBOL_CRC(snd_pcm_stop_xrun, 0xf9cd24b0, "_gpl");
SYMBOL_CRC(snd_pcm_suspend_all, 0xbc7dc11a, "");
SYMBOL_CRC(snd_pcm_release_substream, 0x504e3b9f, "");
SYMBOL_CRC(snd_pcm_open_substream, 0x88bc24c4, "");
SYMBOL_CRC(snd_pcm_kernel_ioctl, 0x78cc5bcc, "");
SYMBOL_CRC(snd_pcm_lib_default_mmap, 0x38e75ae5, "_gpl");
SYMBOL_CRC(snd_pcm_lib_mmap_iomem, 0x9b59c148, "");
SYMBOL_CRC(snd_pcm_mmap_data, 0x43b53984, "");
SYMBOL_CRC(snd_pcm_set_ops, 0xc34c85b4, "");
SYMBOL_CRC(snd_pcm_set_sync, 0x15951749, "");
SYMBOL_CRC(snd_interval_refine, 0x04cda566, "");
SYMBOL_CRC(snd_interval_ratnum, 0xac437f7b, "");
SYMBOL_CRC(snd_interval_list, 0x94098ff8, "");
SYMBOL_CRC(snd_interval_ranges, 0x503bd137, "");
SYMBOL_CRC(snd_pcm_hw_rule_add, 0x17c119cb, "");
SYMBOL_CRC(snd_pcm_hw_constraint_mask64, 0xa089bcf1, "");
SYMBOL_CRC(snd_pcm_hw_constraint_integer, 0xd6ae4d12, "");
SYMBOL_CRC(snd_pcm_hw_constraint_minmax, 0x684f06de, "");
SYMBOL_CRC(snd_pcm_hw_constraint_list, 0xb0d60358, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ranges, 0x081bf36f, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratnums, 0x176a5065, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratdens, 0x33f7499f, "");
SYMBOL_CRC(snd_pcm_hw_constraint_msbits, 0x6cb4a406, "");
SYMBOL_CRC(snd_pcm_hw_constraint_step, 0x85d15047, "");
SYMBOL_CRC(snd_pcm_hw_constraint_pow2, 0xb1c416f0, "");
SYMBOL_CRC(snd_pcm_hw_rule_noresample, 0x6cfbd298, "");
SYMBOL_CRC(_snd_pcm_hw_params_any, 0x0283dfe3, "");
SYMBOL_CRC(snd_pcm_hw_param_value, 0x52e3e4a5, "");
SYMBOL_CRC(_snd_pcm_hw_param_setempty, 0x39bf9301, "");
SYMBOL_CRC(snd_pcm_hw_param_first, 0x66ac3459, "");
SYMBOL_CRC(snd_pcm_hw_param_last, 0x67da4f55, "");
SYMBOL_CRC(snd_pcm_lib_ioctl, 0xcf39d790, "");
SYMBOL_CRC(snd_pcm_period_elapsed_under_stream_lock, 0x52fe0856, "");
SYMBOL_CRC(snd_pcm_period_elapsed, 0xa65fdc63, "");
SYMBOL_CRC(__snd_pcm_lib_xfer, 0xd588a3b3, "");
SYMBOL_CRC(snd_pcm_std_chmaps, 0x04e1b99f, "_gpl");
SYMBOL_CRC(snd_pcm_alt_chmaps, 0x09e913c1, "_gpl");
SYMBOL_CRC(snd_pcm_add_chmap_ctls, 0xb3fdccc2, "_gpl");
SYMBOL_CRC(snd_pcm_format_signed, 0x1d027e4b, "");
SYMBOL_CRC(snd_pcm_format_unsigned, 0xa61aa028, "");
SYMBOL_CRC(snd_pcm_format_linear, 0x6ef8fcd8, "");
SYMBOL_CRC(snd_pcm_format_little_endian, 0x3796bdcc, "");
SYMBOL_CRC(snd_pcm_format_big_endian, 0x4f816e9b, "");
SYMBOL_CRC(snd_pcm_format_width, 0xe56a9336, "");
SYMBOL_CRC(snd_pcm_format_physical_width, 0x68a24153, "");
SYMBOL_CRC(snd_pcm_format_size, 0x834dc955, "");
SYMBOL_CRC(snd_pcm_format_silence_64, 0x650f8603, "");
SYMBOL_CRC(snd_pcm_format_set_silence, 0x5e7f4920, "");
SYMBOL_CRC(snd_pcm_hw_limit_rates, 0x69255f54, "");
SYMBOL_CRC(snd_pcm_rate_to_rate_bit, 0xb9638db4, "");
SYMBOL_CRC(snd_pcm_rate_bit_to_rate, 0xff6104d0, "");
SYMBOL_CRC(snd_pcm_rate_mask_intersect, 0xab8bc1a2, "_gpl");
SYMBOL_CRC(snd_pcm_rate_range_to_bits, 0x8d864069, "_gpl");
SYMBOL_CRC(snd_pcm_lib_preallocate_free_for_all, 0x85c85171, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages, 0x3d291061, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages_for_all, 0x05487b33, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer, 0x10c7c598, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer_all, 0x282d33ef, "");
SYMBOL_CRC(snd_pcm_lib_malloc_pages, 0xf2a5dc8f, "");
SYMBOL_CRC(snd_pcm_lib_free_pages, 0x2222c1f7, "");
SYMBOL_CRC(_snd_pcm_lib_alloc_vmalloc_buffer, 0x5742d12b, "");
SYMBOL_CRC(snd_pcm_lib_free_vmalloc_buffer, 0x74b6a1ef, "");
SYMBOL_CRC(snd_pcm_lib_get_vmalloc_page, 0xe46f9d5d, "");
SYMBOL_CRC(snd_dma_alloc_dir_pages, 0x8b205642, "");
SYMBOL_CRC(snd_dma_alloc_pages_fallback, 0x01a467bc, "");
SYMBOL_CRC(snd_dma_free_pages, 0xca43db69, "");
SYMBOL_CRC(snd_devm_alloc_dir_pages, 0xafef9862, "_gpl");
SYMBOL_CRC(snd_dma_buffer_mmap, 0x23837720, "");
SYMBOL_CRC(snd_dma_buffer_sync, 0x8274dffb, "_gpl");
SYMBOL_CRC(snd_sgbuf_get_addr, 0x6e5de758, "");
SYMBOL_CRC(snd_sgbuf_get_page, 0xcca532ef, "");
SYMBOL_CRC(snd_sgbuf_get_chunk_size, 0x0447b37c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xcc46293b, "cpu_latency_qos_remove_request" },
	{ 0x185d46d5, "clear_user_rep_good" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x7a6eee9, "dma_can_mmap" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbd178af2, "dma_ops" },
	{ 0x46f8d0d2, "snd_info_register" },
	{ 0x814f9b1c, "snd_info_create_module_entry" },
	{ 0x83b74166, "snd_ctl_unregister_ioctl_compat" },
	{ 0xd2b956f6, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xa5626a0c, "snd_ctl_add" },
	{ 0x8940020e, "vmalloc_to_page" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x149d81cc, "snd_timer_notify" },
	{ 0xe7b108c5, "snd_ctl_get_preferred_subdevice" },
	{ 0x4645fc14, "dma_vunmap_noncontiguous" },
	{ 0x7d4e5b46, "gen_pool_dma_alloc_align" },
	{ 0x230024e9, "vm_iomap_memory" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xf672653b, "dma_mmap_pages" },
	{ 0x4f611def, "dma_sync_sg_for_cpu" },
	{ 0xaa7124b, "dma_free_pages" },
	{ 0x4a1142c9, "dma_sync_single_for_device" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x86b7808f, "snd_timer_interrupt" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x69acdf38, "memcpy" },
	{ 0x36a2717e, "remap_pfn_range" },
	{ 0x81d1c836, "cpu_latency_qos_add_request" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xfd85395c, "cpu_latency_qos_request_active" },
	{ 0xf3aa7e3, "add_wait_queue" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xba0179b9, "snd_fasync_helper" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbec57b33, "snd_ctl_remove" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x86055fa8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0xe17dde74, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x489f56c3, "dma_alloc_pages" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0e52e56, "clear_user_original" },
	{ 0x211fcf87, "put_device" },
	{ 0x522e3d91, "snd_ctl_register_ioctl" },
	{ 0x64458fb5, "snd_card_file_add" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf7b274d2, "fput" },
	{ 0xb334290c, "down_write" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x1bb1702a, "up_write" },
	{ 0xfbfd95e5, "dma_vmap_noncontiguous" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x9f4445a8, "__devres_alloc_node" },
	{ 0xcca39350, "dma_need_sync" },
	{ 0xbecab81f, "clear_user_erms" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x38eaa5e6, "vmap" },
	{ 0xedf1d4b6, "_raw_spin_lock_nested" },
	{ 0xa13a5dfe, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x2a543966, "_raw_spin_trylock" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xd70039e5, "snd_timer_new" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0x2781bdb0, "dma_sync_single_for_cpu" },
	{ 0x70a76ca2, "dma_sync_sg_for_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xf5cb046b, "snd_ctl_unregister_ioctl" },
	{ 0xf03e570f, "down_read" },
	{ 0xe9ce5474, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86fe1f19, "nonseekable_open" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f517403, "dma_free_noncontiguous" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x42554b0e, "dma_alloc_noncontiguous" },
	{ 0xd2232377, "dma_mmap_noncontiguous" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xbab355fb, "vm_map_pages" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xf7c5096d, "gen_pool_free_owner" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaaa7300, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x50441b87, "snd_ctl_register_ioctl_compat" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x234fb5e3, "snd_info_create_card_entry" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x1ba4caff, "snd_device_initialize" },
	{ 0xb11766ab, "snd_power_wait" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x24c2eef8, "remove_wait_queue" },
	{ 0x62d5ec8a, "dma_mmap_attrs" },
	{ 0x3309c539, "pid_vnr" },
	{ 0x6049c649, "snd_device_free" },
	{ 0x48e988a5, "snd_card_file_remove" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xea124bd1, "gcd" },
	{ 0xe9a8afd4, "remap_vmalloc_range" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x76776184, "mutex_destroy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xb2f03776, "snd_device_register" },
	{ 0x8935ab17, "snd_register_device" },
	{ 0x12b824a2, "up_read" },
	{ 0x7bf8c44b, "put_pid" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x5a2c427e, "_raw_spin_lock_irqsave_nested" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "C3BBD6A6FEAAF09B7B8308F");
