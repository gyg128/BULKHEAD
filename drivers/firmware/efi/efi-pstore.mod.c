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
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x4b23bbf6, "pstore_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x882de3c5, "pstore_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x2303b915, "efivar_lock" },
	{ 0xc961bff7, "efivar_unlock" },
	{ 0xa336852c, "efivar_get_next_variable" },
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a3c9dbb, "efivar_get_variable" },
	{ 0x6bd88b5, "ucs2_strnlen" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cfcd2e, "efivar_trylock" },
	{ 0xefc77711, "efivar_set_variable_locked" },
	{ 0x11940489, "efivar_set_variable" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA816B77457C94FF46325B5");
