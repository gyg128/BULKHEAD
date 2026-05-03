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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(simd_skcipher_create_compat, 0x88638552, "_gpl");
SYMBOL_CRC(simd_skcipher_create, 0x66983e96, "_gpl");
SYMBOL_CRC(simd_skcipher_free, 0xefe73979, "_gpl");
SYMBOL_CRC(simd_register_skciphers_compat, 0x698e23b3, "_gpl");
SYMBOL_CRC(simd_unregister_skciphers, 0xe2485a6d, "_gpl");
SYMBOL_CRC(simd_aead_create_compat, 0x504cb053, "_gpl");
SYMBOL_CRC(simd_aead_create, 0x851c747c, "_gpl");
SYMBOL_CRC(simd_aead_free, 0xbfd26f15, "_gpl");
SYMBOL_CRC(simd_register_aeads_compat, 0x986c4ff2, "_gpl");
SYMBOL_CRC(simd_unregister_aeads, 0x20bb783f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa45c71b4, "crypto_skcipher_encrypt" },
	{ 0x7dda5869, "cryptd_alloc_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ef4505a, "cryptd_aead_child" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x5694deec, "crypto_register_aead" },
	{ 0xf3af6c4a, "crypto_unregister_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0xa194d403, "crypto_register_aeads" },
	{ 0x131bce6c, "crypto_alloc_aead" },
	{ 0x30da100d, "crypto_aead_setauthsize" },
	{ 0x5194b62f, "crypto_aead_decrypt" },
	{ 0x97d6b1ed, "crypto_skcipher_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ea9e089, "crypto_unregister_aeads" },
	{ 0x10d24ad4, "crypto_destroy_tfm" },
	{ 0xb17acb03, "cryptd_skcipher_child" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x205313ba, "crypto_skcipher_decrypt" },
	{ 0x3d2c91e7, "cryptd_alloc_skcipher" },
	{ 0x7edffc4f, "crypto_aead_setkey" },
	{ 0xd7e45b49, "crypto_register_skcipher" },
	{ 0xf6dbd57c, "crypto_aead_encrypt" },
	{ 0x17341fd9, "cryptd_aead_queued" },
	{ 0x5a921311, "strncmp" },
	{ 0xc496f415, "crypto_unregister_skcipher" },
	{ 0xd1559b2d, "crypto_register_skciphers" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x85ae8661, "cryptd_skcipher_queued" },
	{ 0x8a571e50, "cryptd_free_aead" },
	{ 0x1cd4f00b, "crypto_unregister_skciphers" },
	{ 0xb7596cf0, "cryptd_free_skcipher" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xac364eab, "crypto_alloc_skcipher" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
