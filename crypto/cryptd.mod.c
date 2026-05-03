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

SYMBOL_CRC(cryptd_alloc_skcipher, 0x3d2c91e7, "_gpl");
SYMBOL_CRC(cryptd_skcipher_child, 0xb17acb03, "_gpl");
SYMBOL_CRC(cryptd_skcipher_queued, 0x85ae8661, "_gpl");
SYMBOL_CRC(cryptd_free_skcipher, 0xb7596cf0, "_gpl");
SYMBOL_CRC(cryptd_alloc_ahash, 0x414b31df, "_gpl");
SYMBOL_CRC(cryptd_ahash_child, 0x7f66dcd1, "_gpl");
SYMBOL_CRC(cryptd_shash_desc, 0x417b475f, "_gpl");
SYMBOL_CRC(cryptd_ahash_queued, 0x72c4f022, "_gpl");
SYMBOL_CRC(cryptd_free_ahash, 0xddf378bb, "_gpl");
SYMBOL_CRC(cryptd_alloc_aead, 0x7dda5869, "_gpl");
SYMBOL_CRC(cryptd_aead_child, 0x9ef4505a, "_gpl");
SYMBOL_CRC(cryptd_aead_queued, 0x17341fd9, "_gpl");
SYMBOL_CRC(cryptd_free_aead, 0x8a571e50, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xac364eab, "crypto_alloc_skcipher" },
	{ 0x10d24ad4, "crypto_destroy_tfm" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c22c61d, "crypto_alloc_ahash" },
	{ 0x131bce6c, "crypto_alloc_aead" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x92997ed8, "_printk" },
	{ 0x94dea2b7, "crypto_register_template" },
	{ 0xd7880c6, "crypto_unregister_template" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf1a1644d, "crypto_dequeue_request" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xe44e77bf, "crypto_grab_skcipher" },
	{ 0xf99df792, "skcipher_register_instance" },
	{ 0xd119bc6, "crypto_grab_aead" },
	{ 0x2b110a2d, "aead_register_instance" },
	{ 0xe2ac194, "crypto_grab_shash" },
	{ 0xb2be3671, "crypto_shash_alg_has_setkey" },
	{ 0x9f67f837, "ahash_register_instance" },
	{ 0x38fba6b4, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xb589934f, "crypto_spawn_tfm2" },
	{ 0x97d6b1ed, "crypto_skcipher_setkey" },
	{ 0xa45c71b4, "crypto_skcipher_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8b5b47f, "crypto_enqueue_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x205313ba, "crypto_skcipher_decrypt" },
	{ 0x10c525aa, "crypto_shash_setkey" },
	{ 0x5a7481a0, "shash_ahash_update" },
	{ 0x390d54ca, "crypto_shash_final" },
	{ 0xfe03a155, "shash_ahash_finup" },
	{ 0xaea8a278, "shash_ahash_digest" },
	{ 0x7edffc4f, "crypto_aead_setkey" },
	{ 0x30da100d, "crypto_aead_setauthsize" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84A51E70A4BA769D4514B8D");
