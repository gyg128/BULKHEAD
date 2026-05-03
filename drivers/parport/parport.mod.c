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

SYMBOL_CRC(__parport_register_driver, 0x1b32cc5a, "");
SYMBOL_CRC(parport_unregister_driver, 0xe91dc5e9, "");
SYMBOL_CRC(parport_get_port, 0x0e13140b, "");
SYMBOL_CRC(parport_del_port, 0x123244e2, "");
SYMBOL_CRC(parport_put_port, 0x5c8d119a, "");
SYMBOL_CRC(parport_register_port, 0x64b966d6, "");
SYMBOL_CRC(parport_announce_port, 0x55ce03a2, "");
SYMBOL_CRC(parport_remove_port, 0x58e7c868, "");
SYMBOL_CRC(parport_register_dev_model, 0xbe584244, "");
SYMBOL_CRC(parport_unregister_device, 0x58169ff8, "");
SYMBOL_CRC(parport_find_number, 0xb44d3216, "");
SYMBOL_CRC(parport_find_base, 0x930758c1, "");
SYMBOL_CRC(parport_claim, 0xa3eab071, "");
SYMBOL_CRC(parport_claim_or_block, 0x70bea96c, "");
SYMBOL_CRC(parport_release, 0xbd2c5d97, "");
SYMBOL_CRC(parport_irq_handler, 0x5e3a3912, "");
SYMBOL_CRC(parport_negotiate, 0x2b63c49a, "");
SYMBOL_CRC(parport_write, 0x4bc15463, "");
SYMBOL_CRC(parport_read, 0xbe73f92b, "");
SYMBOL_CRC(parport_wait_peripheral, 0x7e6754c1, "");
SYMBOL_CRC(parport_wait_event, 0xf07299d6, "");
SYMBOL_CRC(parport_set_timeout, 0x9bd03f0f, "");
SYMBOL_CRC(parport_ieee1284_interrupt, 0x4d2a941b, "");
SYMBOL_CRC(parport_ieee1284_ecp_write_data, 0xd6bd247e, "");
SYMBOL_CRC(parport_ieee1284_ecp_read_data, 0x7a3f05f4, "");
SYMBOL_CRC(parport_ieee1284_ecp_write_addr, 0x0c20a60a, "");
SYMBOL_CRC(parport_ieee1284_write_compat, 0xa95cb5e2, "");
SYMBOL_CRC(parport_ieee1284_read_nibble, 0xdc4c0e11, "");
SYMBOL_CRC(parport_ieee1284_read_byte, 0x4b680a82, "");
SYMBOL_CRC(parport_ieee1284_epp_write_data, 0x655dbb62, "");
SYMBOL_CRC(parport_ieee1284_epp_read_data, 0xb6f6da74, "");
SYMBOL_CRC(parport_ieee1284_epp_write_addr, 0xbfc03916, "");
SYMBOL_CRC(parport_ieee1284_epp_read_addr, 0xa448e621, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x734e7bb9, "try_module_get" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0x718a4cd5, "device_unregister" },
	{ 0x1952790e, "finish_wait" },
	{ 0x99796b53, "up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xff6a0b41, "bus_for_each_drv" },
	{ 0x9a9af697, "prepare_to_wait_event" },
	{ 0x2bf83224, "__wake_up" },
	{ 0x33a44216, "get_device" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b511b70, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x5c700806, "unregister_sysctl_table" },
	{ 0x211fcf87, "put_device" },
	{ 0xb96e6464, "bus_for_each_dev" },
	{ 0x339178ad, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0xb7319cce, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xbbaba66a, "mod_timer" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8d436c78, "_raw_spin_unlock_irq" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0xcea9fa41, "_raw_read_unlock" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xa9b1739f, "current_task" },
	{ 0x11089ac7, "_ctype" },
	{ 0x59554d57, "device_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x7beb51c3, "del_timer_sync" },
	{ 0xb9d56444, "__init_waitqueue_head" },
	{ 0xf9a4e094, "_raw_write_unlock_irqrestore" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xabeba0a7, "__rwlock_init" },
	{ 0xb25dca7e, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x73cd5347, "down_interruptible" },
	{ 0xa9462f69, "_raw_read_lock" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x2efb33e9, "_raw_write_lock_irqsave" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xf6260518, "register_sysctl_table" },
	{ 0x349cba85, "strchr" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x59a7328c, "driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4786d9cb, "bus_register" },
	{ 0x8c0e366d, "proc_dointvec_minmax" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "057FE74095ABE9ADD037B2D");
