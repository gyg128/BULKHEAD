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
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xeb47cfa2, "crypto_grab_ahash" },
	{ 0xe44e77bf, "crypto_grab_skcipher" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b110a2d, "aead_register_instance" },
	{ 0x38fba6b4, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xb589934f, "crypto_spawn_tfm2" },
	{ 0x5f0a8541, "crypto_get_default_null_skcipher" },
	{ 0x10d24ad4, "crypto_destroy_tfm" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xcbab6d69, "crypto_ahash_setkey" },
	{ 0x97d6b1ed, "crypto_skcipher_setkey" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xa45c71b4, "crypto_skcipher_encrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x759f1fce, "crypto_ahash_digest" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x205313ba, "crypto_skcipher_decrypt" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "B91C69A218B827CB7F6D8B5");
