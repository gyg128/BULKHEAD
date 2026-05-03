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

SYMBOL_CRC(i2c_handle_smbus_alert, 0xea5b28c1, "_gpl");
SYMBOL_CRC(i2c_register_spd, 0x8e07a04e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x40c9911d, "i2c_register_driver" },
	{ 0x8f22a520, "i2c_del_driver" },
	{ 0x1d94a218, "dmi_memdev_handle" },
	{ 0x95ef1ccc, "dmi_memdev_size" },
	{ 0xd8d68ab1, "dmi_memdev_type" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0x280dd774, "i2c_new_scanned_device" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x1e42e51c, "dev_fwnode" },
	{ 0x34ebc7ec, "fwnode_irq_get_byname" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x1b055fe3, "i2c_smbus_read_byte" },
	{ 0x371fcfba, "device_for_each_child" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x227d52a5, "i2c_verify_client" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:smbus_alert");

MODULE_INFO(srcversion, "E9A8585D1037580BE581287");
