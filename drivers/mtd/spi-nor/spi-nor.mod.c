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

SYMBOL_CRC(spi_nor_restore, 0x052a8c02, "_gpl");
SYMBOL_CRC(spi_nor_scan, 0xfbd366b1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x915c064d, "spi_mem_driver_register_with_owner" },
	{ 0x263c3152, "bcmp" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x88c5b445, "spi_mem_dirmap_read" },
	{ 0xc2319b7e, "mtd_device_unregister" },
	{ 0x1671ca18, "spi_mem_exec_op" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d6f448c, "seq_lseek" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd62cfacf, "mtd_device_parse_register" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x339178ad, "module_put" },
	{ 0x578dd92, "devm_add_action" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x800473f, "__cond_resched" },
	{ 0xf91c2571, "debugfs_lookup" },
	{ 0x66ad9cd2, "devm_kfree" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0x48a91171, "string_get_size" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0x8f1ae9f8, "spi_mem_dirmap_write" },
	{ 0xa9b1739f, "current_task" },
	{ 0xb1124b2d, "spi_mem_driver_unregister" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51d37445, "seq_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0xf9b3dad3, "devm_spi_mem_dirmap_create" },
	{ 0x4a079616, "spi_mem_get_name" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x7d303072, "spi_mem_adjust_op_size" },
	{ 0xa6c145d4, "seq_puts" },
	{ 0x2f12ffed, "single_release" },
	{ 0x28449897, "spi_mem_supports_op" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x38a4f93d, "single_open" },
	{ 0xe757b785, "debugfs_create_dir" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");
MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");

MODULE_INFO(srcversion, "A4D9580ACB9B0948BA7D866");
