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
	{ 0xcca81f00, "register_sysctl" },
	{ 0x5c700806, "unregister_sysctl_table" },
	{ 0x39a8c96, "input_unregister_handler" },
	{ 0x728e7290, "input_unregister_device" },
	{ 0xf6826382, "mutex_lock_killable_nested" },
	{ 0x122950ee, "proc_dointvec" },
	{ 0xe03436e8, "input_allocate_device" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x9fe1adb5, "input_register_device" },
	{ 0x1504f819, "input_free_device" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0xdcd78491, "input_register_handler" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x5c05275a, "input_event" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xba9abbe3, "input_register_handle" },
	{ 0x65ad8b5c, "input_open_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x21d15ecc, "input_unregister_handle" },
	{ 0x37a0cba, "kfree" },
	{ 0x83c2a0c6, "input_close_device" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "C7AA10846748E15FE8788C7");
