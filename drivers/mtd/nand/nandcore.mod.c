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

SYMBOL_CRC(nanddev_isbad, 0x4ae1c576, "_gpl");
SYMBOL_CRC(nanddev_markbad, 0x3379fadb, "_gpl");
SYMBOL_CRC(nanddev_isreserved, 0x6c8e3573, "_gpl");
SYMBOL_CRC(nanddev_erase, 0x63e29a7a, "_gpl");
SYMBOL_CRC(nanddev_mtd_erase, 0x15c05ae4, "_gpl");
SYMBOL_CRC(nanddev_mtd_max_bad_blocks, 0x00826cda, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_init, 0xa156a8f5, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_cleanup, 0x82da937f, "_gpl");
SYMBOL_CRC(nanddev_init, 0xf2aa7277, "_gpl");
SYMBOL_CRC(nanddev_cleanup, 0xdb9a7897, "_gpl");
SYMBOL_CRC(nanddev_bbt_init, 0xf73453a9, "_gpl");
SYMBOL_CRC(nanddev_bbt_cleanup, 0x31430a60, "_gpl");
SYMBOL_CRC(nanddev_bbt_update, 0xe4da76aa, "_gpl");
SYMBOL_CRC(nanddev_bbt_get_block_status, 0x36647490, "_gpl");
SYMBOL_CRC(nanddev_bbt_set_block_status, 0xdd80da81, "_gpl");
SYMBOL_CRC(nand_ecc_init_ctx, 0xf55d1bf1, "");
SYMBOL_CRC(nand_ecc_cleanup_ctx, 0x47564557, "");
SYMBOL_CRC(nand_ecc_prepare_io_req, 0x368e069a, "");
SYMBOL_CRC(nand_ecc_finish_io_req, 0x0987d94e, "");
SYMBOL_CRC(nand_get_small_page_ooblayout, 0x8be4820a, "_gpl");
SYMBOL_CRC(nand_get_large_page_ooblayout, 0x554d08d7, "_gpl");
SYMBOL_CRC(nand_get_large_page_hamming_ooblayout, 0x640f26b2, "_gpl");
SYMBOL_CRC(of_get_nand_ecc_user_config, 0xfe4e7381, "");
SYMBOL_CRC(nand_ecc_is_strong_enough, 0x49e336e2, "");
SYMBOL_CRC(nand_ecc_init_req_tweaking, 0x2bc93bf4, "_gpl");
SYMBOL_CRC(nand_ecc_cleanup_req_tweaking, 0x649d587f, "_gpl");
SYMBOL_CRC(nand_ecc_tweak_req, 0xd3cd46f6, "_gpl");
SYMBOL_CRC(nand_ecc_restore_req, 0x4c540028, "_gpl");
SYMBOL_CRC(nand_ecc_get_sw_engine, 0xf5cdd46b, "");
SYMBOL_CRC(nand_ecc_get_on_die_hw_engine, 0x2ed5585d, "");
SYMBOL_CRC(nand_ecc_register_on_host_hw_engine, 0x0b9e3449, "");
SYMBOL_CRC(nand_ecc_unregister_on_host_hw_engine, 0x37c54ec6, "");
SYMBOL_CRC(nand_ecc_get_on_host_hw_engine, 0xdc4bd6ad, "");
SYMBOL_CRC(nand_ecc_put_on_host_hw_engine, 0x2f7d492d, "");
SYMBOL_CRC(ecc_sw_hamming_calculate, 0xff4351b0, "");
SYMBOL_CRC(nand_ecc_sw_hamming_calculate, 0x5c6c7da8, "");
SYMBOL_CRC(ecc_sw_hamming_correct, 0xe6db989b, "");
SYMBOL_CRC(nand_ecc_sw_hamming_correct, 0xa3a55fef, "");
SYMBOL_CRC(nand_ecc_sw_hamming_init_ctx, 0x912e27ce, "");
SYMBOL_CRC(nand_ecc_sw_hamming_cleanup_ctx, 0xb73d8fe4, "");
SYMBOL_CRC(nand_ecc_sw_hamming_get_engine, 0xfd5feaab, "");
SYMBOL_CRC(nand_ecc_sw_bch_calculate, 0xaf19b666, "");
SYMBOL_CRC(nand_ecc_sw_bch_correct, 0x4e6743d8, "");
SYMBOL_CRC(nand_ecc_sw_bch_init_ctx, 0xbcfac557, "");
SYMBOL_CRC(nand_ecc_sw_bch_cleanup_ctx, 0xad98ffb5, "");
SYMBOL_CRC(nand_ecc_sw_bch_get_engine, 0x99df1ab7, "");
SYMBOL_CRC(mxic_ecc_process_data_pipelined, 0xfba5f1ad, "_gpl");
SYMBOL_CRC(mxic_ecc_get_pipelined_ops, 0x1dd742f0, "_gpl");
SYMBOL_CRC(mxic_ecc_put_pipelined_engine, 0x07afd9a9, "_gpl");
SYMBOL_CRC(mxic_ecc_get_pipelined_engine, 0x3c3cf975, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91a9174a, "platform_device_put" },
	{ 0x60be2cd9, "devm_platform_ioremap_resource" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0xc42c150b, "wait_for_completion_timeout" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0xbe2a2765, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x3864043a, "mtd_ooblayout_set_eccbytes" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x211fcf87, "put_device" },
	{ 0xb7075882, "mtd_check_expert_analysis_mode" },
	{ 0x5e028656, "platform_get_irq_byname_optional" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd3e3481, "bch_free" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x31e4c76f, "mtd_ooblayout_count_eccbytes" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x860a2eab, "bch_decode" },
	{ 0x1a267fa8, "bch_init" },
	{ 0xf8ba36e0, "dma_unmap_sg_attrs" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x3bf5348, "mtd_ooblayout_get_eccbytes" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc303f52, "bch_encode" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xf3ab7ce2, "dma_map_sg_attrs" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "mtd,bch");

MODULE_ALIAS("of:N*T*Cmxicy,nand-ecc-engine-rev3");
MODULE_ALIAS("of:N*T*Cmxicy,nand-ecc-engine-rev3C*");

MODULE_INFO(srcversion, "A3376635A63DB91F2BA9071");
