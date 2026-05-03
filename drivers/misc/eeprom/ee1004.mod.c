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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40c9911d, "i2c_register_driver" },
	{ 0x8f22a520, "i2c_del_driver" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x6d8cbc22, "i2c_unregister_device" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xc80e4343, "i2c_new_dummy_device" },
	{ 0x1b055fe3, "i2c_smbus_read_byte" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xc4c84979, "_dev_info" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0xdc43c322, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0xf5df0ffd, "i2c_smbus_write_byte" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ee1004");

MODULE_INFO(srcversion, "50F4B2452BE3D8AC924CC4F");
