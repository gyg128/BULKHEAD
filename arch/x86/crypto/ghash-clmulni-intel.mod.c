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
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xddf378bb, "cryptd_free_ahash" },
	{ 0x414b31df, "cryptd_alloc_ahash" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x5a7481a0, "shash_ahash_update" },
	{ 0xcbab6d69, "crypto_ahash_setkey" },
	{ 0x7f66dcd1, "cryptd_ahash_child" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xad8f51c7, "crypto_unregister_ahash" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xe125cf1c, "crypto_register_shash" },
	{ 0x2cf5619a, "crypto_unregister_shash" },
	{ 0xb558e410, "crypto_register_ahash" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x417b475f, "cryptd_shash_desc" },
	{ 0x759f1fce, "crypto_ahash_digest" },
	{ 0x706868e5, "crypto_ahash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x390d54ca, "crypto_shash_final" },
	{ 0xaea8a278, "shash_ahash_digest" },
	{ 0x72c4f022, "cryptd_ahash_queued" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "093D268C05107044754339D");
