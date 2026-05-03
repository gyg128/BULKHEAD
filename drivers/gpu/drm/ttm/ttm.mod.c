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

SYMBOL_CRC(ttm_tt_init, 0xcdd1f1e8, "");
SYMBOL_CRC(ttm_tt_fini, 0xad130f6f, "");
SYMBOL_CRC(ttm_sg_tt_init, 0xcb0b39d6, "");
SYMBOL_CRC(ttm_tt_populate, 0xdfa4f8f9, "");
SYMBOL_CRC(ttm_kmap_iter_tt_init, 0x7651ceac, "");
SYMBOL_CRC(ttm_bo_move_to_lru_tail, 0x3292cf60, "");
SYMBOL_CRC(ttm_bo_set_bulk_move, 0x7e55c28f, "");
SYMBOL_CRC(ttm_bo_put, 0x97e3b149, "");
SYMBOL_CRC(ttm_bo_lock_delayed_workqueue, 0x8338a6c8, "");
SYMBOL_CRC(ttm_bo_unlock_delayed_workqueue, 0x127509ac, "");
SYMBOL_CRC(ttm_bo_eviction_valuable, 0x0fab054b, "");
SYMBOL_CRC(ttm_bo_pin, 0xa9e20a6a, "");
SYMBOL_CRC(ttm_bo_unpin, 0xc22e70a4, "");
SYMBOL_CRC(ttm_bo_mem_space, 0x255a9a41, "");
SYMBOL_CRC(ttm_bo_validate, 0x6c75321b, "");
SYMBOL_CRC(ttm_bo_init_reserved, 0xa9094fbb, "");
SYMBOL_CRC(ttm_bo_init_validate, 0xeecc32cd, "");
SYMBOL_CRC(ttm_bo_unmap_virtual, 0x4f453cb1, "");
SYMBOL_CRC(ttm_bo_wait, 0xdc5b4ec9, "");
SYMBOL_CRC(ttm_move_memcpy, 0x1a71d30c, "");
SYMBOL_CRC(ttm_bo_move_memcpy, 0x81018d07, "");
SYMBOL_CRC(ttm_io_prot, 0xd0a57e50, "");
SYMBOL_CRC(ttm_bo_kmap, 0x095a97e6, "");
SYMBOL_CRC(ttm_bo_kunmap, 0x28b95238, "");
SYMBOL_CRC(ttm_bo_vmap, 0x1e93adeb, "");
SYMBOL_CRC(ttm_bo_vunmap, 0x94f52693, "");
SYMBOL_CRC(ttm_bo_move_accel_cleanup, 0x94bad0b4, "");
SYMBOL_CRC(ttm_bo_move_sync_cleanup, 0x575face7, "");
SYMBOL_CRC(ttm_bo_vm_reserve, 0x7068ce66, "");
SYMBOL_CRC(ttm_bo_vm_fault_reserved, 0x1380c3b6, "");
SYMBOL_CRC(ttm_bo_vm_dummy_page, 0xb0b0fde9, "");
SYMBOL_CRC(ttm_bo_vm_fault, 0x4e98e1d5, "");
SYMBOL_CRC(ttm_bo_vm_open, 0x154dbd98, "");
SYMBOL_CRC(ttm_bo_vm_close, 0x7d936d11, "");
SYMBOL_CRC(ttm_bo_vm_access, 0x5e1978dd, "");
SYMBOL_CRC(ttm_bo_mmap_obj, 0xdb06ce95, "");
SYMBOL_CRC(ttm_eu_backoff_reservation, 0x736f1153, "");
SYMBOL_CRC(ttm_eu_reserve_buffers, 0xb1245c29, "");
SYMBOL_CRC(ttm_eu_fence_buffer_objects, 0x3f72085f, "");
SYMBOL_CRC(ttm_range_man_init_nocheck, 0x69d35802, "");
SYMBOL_CRC(ttm_range_man_fini_nocheck, 0x0fb6a285, "");
SYMBOL_CRC(ttm_lru_bulk_move_init, 0xe270698e, "");
SYMBOL_CRC(ttm_lru_bulk_move_tail, 0xaf9ea84a, "");
SYMBOL_CRC(ttm_resource_init, 0x2edac134, "");
SYMBOL_CRC(ttm_resource_fini, 0x9d1f73df, "");
SYMBOL_CRC(ttm_resource_free, 0x9b28df57, "");
SYMBOL_CRC(ttm_resource_compat, 0xdb3c1477, "");
SYMBOL_CRC(ttm_resource_manager_init, 0xb4250b27, "");
SYMBOL_CRC(ttm_resource_manager_evict_all, 0x65ee81e6, "");
SYMBOL_CRC(ttm_resource_manager_usage, 0x3aa03022, "");
SYMBOL_CRC(ttm_resource_manager_debug, 0x76fa3172, "");
SYMBOL_CRC(ttm_kmap_iter_iomap_init, 0x5a7874e4, "");
SYMBOL_CRC(ttm_resource_manager_create_debugfs, 0x2f7369c3, "");
SYMBOL_CRC(ttm_pool_alloc, 0x56badf19, "");
SYMBOL_CRC(ttm_pool_free, 0xd6f3f681, "");
SYMBOL_CRC(ttm_pool_debugfs, 0xa4657422, "");
SYMBOL_CRC(ttm_glob, 0xa8929bc4, "");
SYMBOL_CRC(ttm_global_swapout, 0x1375120b, "");
SYMBOL_CRC(ttm_device_swapout, 0xb538019d, "");
SYMBOL_CRC(ttm_device_init, 0x40694856, "");
SYMBOL_CRC(ttm_device_fini, 0x6f52fa5f, "");
SYMBOL_CRC(ttm_device_clear_dma_mappings, 0x12e9e882, "");
SYMBOL_CRC(ttm_agp_bind, 0x24407434, "");
SYMBOL_CRC(ttm_agp_unbind, 0x4b7975ee, "");
SYMBOL_CRC(ttm_agp_is_bound, 0x5626177e, "");
SYMBOL_CRC(ttm_agp_destroy, 0x8757b2d6, "");
SYMBOL_CRC(ttm_agp_tt_create, 0xbafb6d0b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe0a4baf9, "ww_mutex_lock_interruptible" },
	{ 0xfc068282, "drm_dev_enter" },
	{ 0xd2b956f6, "param_ops_ulong" },
	{ 0x17a458b3, "dma_resv_reserve_fences" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x1f4fc444, "agp_bind_memory" },
	{ 0x8940020e, "vmalloc_to_page" },
	{ 0x5aead210, "dma_resv_init" },
	{ 0xb2397060, "dma_resv_wait_timeout" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x47174133, "dma_unmap_page_attrs" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x97de2b83, "debug_locks_silent" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x13110488, "ww_mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0xb6f06941, "debugfs_create_atomic_t" },
	{ 0xd8b2e188, "register_shrinker" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb1515cbe, "unmap_mapping_range" },
	{ 0xbe375910, "dma_resv_add_fence" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0xea4901a5, "__put_devmap_managed_page_refs" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc5b59dc6, "drm_vma_offset_add" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0x4d924f20, "memremap" },
	{ 0x4bbae65a, "__tracepoint_mmap_lock_released" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0x1556d355, "dma_fence_wait_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0xbd295776, "set_pages_wb" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x5ff407ab, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x599f6f9e, "dma_resv_reset_max_fences" },
	{ 0xe01913f0, "ww_mutex_trylock" },
	{ 0xf39d89d9, "__drmm_add_action_or_reset" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x393bf57e, "queue_delayed_work_on" },
	{ 0x33b84f74, "copy_page" },
	{ 0x7c48d831, "unregister_shrinker" },
	{ 0xc624b289, "debug_check_no_locks_freed" },
	{ 0x254548b, "__free_pages" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x18c9486b, "mark_page_accessed" },
	{ 0x7c56e19b, "shmem_file_setup" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0xd73c8c2b, "synchronize_shrinkers" },
	{ 0xf7b274d2, "fput" },
	{ 0x9497dbbe, "agp_free_memory" },
	{ 0xc52137ab, "fs_reclaim_release" },
	{ 0xabc9d2e2, "dma_fence_signal" },
	{ 0x7f3fd4ff, "dma_resv_fini" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xa178d36b, "ww_mutex_lock" },
	{ 0x81d585eb, "shmem_read_mapping_page_gfp" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x38eaa5e6, "vmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xe163a684, "fs_reclaim_acquire" },
	{ 0xa9b1739f, "current_task" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x75c4fe29, "vmf_insert_pfn_prot" },
	{ 0xfb578fc5, "memset" },
	{ 0x709c929, "lock_acquire" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x818da32f, "agp_allocate_memory" },
	{ 0x34ec0eb1, "agp_unbind_memory" },
	{ 0x9af0a615, "lock_release" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xe63c8250, "dma_resv_copy_fences" },
	{ 0xfd8ef4a8, "set_page_dirty" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x51d37445, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc575c737, "debug_locks_off" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0xa38c4c94, "drm_memcpy_from_wc" },
	{ 0x3b45e8ab, "dma_fence_enable_sw_signaling" },
	{ 0xc1aee5b8, "set_pages_array_wc" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x28779e52, "drm_printf" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x9c28617a, "cancel_delayed_work_sync" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0x1fb90735, "dma_resv_iter_next_unlocked" },
	{ 0x21a82188, "alloc_pages" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbb91671e, "__folio_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x688d8b18, "__mmap_lock_do_trace_released" },
	{ 0x5b1fb01, "delayed_work_timer_fn" },
	{ 0x69d908c7, "dma_resv_iter_first_unlocked" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0x2f12ffed, "single_release" },
	{ 0x96adb231, "set_pages_array_uc" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x7991ed2, "dma_resv_test_signaled" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc07504e8, "reservation_ww_class" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x38a4f93d, "single_open" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x12b824a2, "up_read" },
	{ 0xb8fd7ce8, "lock_is_held_type" },
	{ 0xf156fcb, "drm_vma_offset_remove" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "7EA8BA6CA8A9EBD7E755710");
