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

SYMBOL_CRC(snd_seq_autoload_init, 0x370a0736, "");
SYMBOL_CRC(snd_seq_autoload_exit, 0x091def1c, "");
SYMBOL_CRC(snd_seq_device_load_drivers, 0x6339b6d0, "");
SYMBOL_CRC(snd_seq_device_new, 0xac87287d, "");
SYMBOL_CRC(__snd_seq_driver_register, 0x81df7ae1, "_gpl");
SYMBOL_CRC(snd_seq_driver_unregister, 0x913ed494, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x46f8d0d2, "snd_info_register" },
	{ 0x814f9b1c, "snd_info_create_module_entry" },
	{ 0x3e57d706, "dev_set_name" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0xb6028004, "device_initialize" },
	{ 0x6e94d673, "snd_info_free_entry" },
	{ 0x83e8daba, "snd_seq_root" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x211fcf87, "put_device" },
	{ 0xb96e6464, "bus_for_each_dev" },
	{ 0x7b38df8c, "bus_unregister" },
	{ 0x65b486c1, "device_add" },
	{ 0x43fb8008, "driver_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x538c7455, "device_del" },
	{ 0xaf8b66c5, "snd_device_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0xaaa7300, "seq_printf" },
	{ 0x59a7328c, "driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4786d9cb, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37e5852d, "flush_work" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "3F6B140A67AC583E7537AB2");
