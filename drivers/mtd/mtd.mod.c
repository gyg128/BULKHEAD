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

SYMBOL_CRC(mtd_table_mutex, 0xb4956abe, "_gpl");
SYMBOL_CRC(__mtd_next_device, 0x68862f9e, "_gpl");
SYMBOL_CRC(mtd_check_expert_analysis_mode, 0xb7075882, "_gpl");
SYMBOL_CRC(mtd_wunit_to_pairing_info, 0x482ec404, "_gpl");
SYMBOL_CRC(mtd_pairing_info_to_wunit, 0x70887f04, "_gpl");
SYMBOL_CRC(mtd_pairing_groups, 0x04086a81, "_gpl");
SYMBOL_CRC(mtd_device_parse_register, 0xd62cfacf, "_gpl");
SYMBOL_CRC(mtd_device_unregister, 0xc2319b7e, "_gpl");
SYMBOL_CRC(register_mtd_user, 0xd448d911, "_gpl");
SYMBOL_CRC(unregister_mtd_user, 0x2406aafc, "_gpl");
SYMBOL_CRC(get_mtd_device, 0xa8debb1c, "_gpl");
SYMBOL_CRC(__get_mtd_device, 0x918777df, "_gpl");
SYMBOL_CRC(of_get_mtd_device_by_node, 0x5e76cb1c, "_gpl");
SYMBOL_CRC(get_mtd_device_nm, 0xa6712157, "_gpl");
SYMBOL_CRC(put_mtd_device, 0xa9476fa3, "_gpl");
SYMBOL_CRC(__put_mtd_device, 0xa142b7fb, "_gpl");
SYMBOL_CRC(mtd_erase, 0xa1faab0a, "_gpl");
SYMBOL_CRC(mtd_point, 0x0497f709, "_gpl");
SYMBOL_CRC(mtd_unpoint, 0xb9e7b707, "_gpl");
SYMBOL_CRC(mtd_get_unmapped_area, 0x846cb14a, "_gpl");
SYMBOL_CRC(mtd_read, 0xeea26412, "_gpl");
SYMBOL_CRC(mtd_write, 0xfd5d5d9f, "_gpl");
SYMBOL_CRC(mtd_panic_write, 0xbe29e8c2, "_gpl");
SYMBOL_CRC(mtd_read_oob, 0x50f1d135, "_gpl");
SYMBOL_CRC(mtd_write_oob, 0x67bb2109, "_gpl");
SYMBOL_CRC(mtd_ooblayout_ecc, 0x4f3a8172, "_gpl");
SYMBOL_CRC(mtd_ooblayout_free, 0x4e7c8d9a, "_gpl");
SYMBOL_CRC(mtd_ooblayout_find_eccregion, 0xc6f08df5, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_eccbytes, 0x03bf5348, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_eccbytes, 0x3864043a, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_databytes, 0x712ba454, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_databytes, 0xe9820095, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_freebytes, 0x9286aeef, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_eccbytes, 0x31e4c76f, "_gpl");
SYMBOL_CRC(mtd_get_fact_prot_info, 0x22e7fa4d, "_gpl");
SYMBOL_CRC(mtd_read_fact_prot_reg, 0x42b78101, "_gpl");
SYMBOL_CRC(mtd_get_user_prot_info, 0x80b129f4, "_gpl");
SYMBOL_CRC(mtd_read_user_prot_reg, 0x73154a22, "_gpl");
SYMBOL_CRC(mtd_write_user_prot_reg, 0x1cf18d0b, "_gpl");
SYMBOL_CRC(mtd_lock_user_prot_reg, 0x5deaacd3, "_gpl");
SYMBOL_CRC(mtd_erase_user_prot_reg, 0xf250f554, "_gpl");
SYMBOL_CRC(mtd_lock, 0xadc8c782, "_gpl");
SYMBOL_CRC(mtd_unlock, 0xb3c12efc, "_gpl");
SYMBOL_CRC(mtd_is_locked, 0xcfb62eae, "_gpl");
SYMBOL_CRC(mtd_block_isreserved, 0x29aa680f, "_gpl");
SYMBOL_CRC(mtd_block_isbad, 0x7e590c2e, "_gpl");
SYMBOL_CRC(mtd_block_markbad, 0xe6291977, "_gpl");
SYMBOL_CRC(mtd_writev, 0x146b9b41, "_gpl");
SYMBOL_CRC(mtd_kmalloc_up_to, 0x70d3a4a9, "_gpl");
SYMBOL_CRC(get_tree_mtd, 0xf6923ace, "_gpl");
SYMBOL_CRC(kill_mtd_super, 0xdac0dacc, "_gpl");
SYMBOL_CRC(mtd_concat_create, 0x620f7c8f, "");
SYMBOL_CRC(mtd_concat_destroy, 0x07fbdc58, "");
SYMBOL_CRC(mtd_add_partition, 0x5e1ddf1d, "_gpl");
SYMBOL_CRC(mtd_del_partition, 0xc9f668e0, "_gpl");
SYMBOL_CRC(__register_mtd_parser, 0xf70dd60f, "_gpl");
SYMBOL_CRC(deregister_mtd_parser, 0x0e79be69, "_gpl");
SYMBOL_CRC(mtd_get_device_size, 0x47c6e1b0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb56919f5, "generic_shutdown_super" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdf101b3, "idr_find" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x241265e1, "bdi_unregister" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x96c86b48, "bdi_register" },
	{ 0x8591d7d5, "ledtrig_mtd_activity" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0xcc39c03e, "nvmem_unregister" },
	{ 0x8a5b4a86, "sget_fc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9d6ca39, "logfc" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xd7c68792, "sysfs_remove_files" },
	{ 0x3755d8fa, "__module_get" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0xb58953cc, "bdi_put" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcd035937, "idr_get_next" },
	{ 0xc6cbbc89, "capable" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb14bce72, "idr_remove" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x4e7c5de7, "__class_register" },
	{ 0xe175803d, "debugfs_create_bool" },
	{ 0x8e4598b7, "idr_alloc" },
	{ 0xf9136192, "device_create" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x398a8121, "fixed_size_llseek" },
	{ 0x5a3fccfe, "class_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x3c4b2261, "bdi_alloc" },
	{ 0x59554d57, "device_register" },
	{ 0x114a0d95, "idr_destroy" },
	{ 0xfb578fc5, "memset" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x1139550e, "__register_chrdev" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9446d9be, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x7df835f2, "remove_proc_entry" },
	{ 0x2247854b, "sysfs_create_files" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x1979697c, "lockref_get" },
	{ 0x2b82ea3e, "deactivate_locked_super" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0xba4d1b, "proc_create_single_data" },
	{ 0x8183f4f8, "nvmem_register" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5535D82323E1CBDD0EA4B3E");
