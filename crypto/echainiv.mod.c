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
	{ 0x94dea2b7, "crypto_register_template" },
	{ 0xd7880c6, "crypto_unregister_template" },
	{ 0xe479bf72, "aead_geniv_alloc" },
	{ 0x5f9a6982, "aead_init_geniv" },
	{ 0x9deebe56, "aead_exit_geniv" },
	{ 0x2b110a2d, "aead_register_instance" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xa45c71b4, "crypto_skcipher_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xf6dbd57c, "crypto_aead_encrypt" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x5194b62f, "crypto_aead_decrypt" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1076131CD0C90A1E35F85A7");
