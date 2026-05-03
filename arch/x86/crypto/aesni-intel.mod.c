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
	{ 0x5da6a5dd, "crypto_unregister_alg" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x37a0cba, "kfree" },
	{ 0x986c4ff2, "simd_register_aeads_compat" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb47d692, "crypto_register_alg" },
	{ 0x92997ed8, "_printk" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6b2e0001, "skcipher_walk_virt" },
	{ 0x698e23b3, "simd_register_skciphers_compat" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xa9b1739f, "current_task" },
	{ 0xb90f0e65, "skcipher_walk_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x55e73728, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x20bb783f, "simd_unregister_aeads" },
	{ 0xe2485a6d, "simd_unregister_skciphers" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x1e1d0d83, "__static_call_update" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x804c1730, "skcipher_walk_aead_decrypt" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "crypto_simd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");

MODULE_INFO(srcversion, "991675A3DE39E490197FF59");
