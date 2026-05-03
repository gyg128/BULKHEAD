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

SYMBOL_CRC(xfrm_aalg_get_byid, 0x5c699441, "_gpl");
SYMBOL_CRC(xfrm_ealg_get_byid, 0x00c80741, "_gpl");
SYMBOL_CRC(xfrm_calg_get_byid, 0x72395dc1, "_gpl");
SYMBOL_CRC(xfrm_aalg_get_byname, 0x37a02412, "_gpl");
SYMBOL_CRC(xfrm_ealg_get_byname, 0xd6f50cf7, "_gpl");
SYMBOL_CRC(xfrm_calg_get_byname, 0xaab23340, "_gpl");
SYMBOL_CRC(xfrm_aead_get_byname, 0x0049ca83, "_gpl");
SYMBOL_CRC(xfrm_aalg_get_byidx, 0xc6b1fdbe, "_gpl");
SYMBOL_CRC(xfrm_ealg_get_byidx, 0xb73be794, "_gpl");
SYMBOL_CRC(xfrm_probe_algs, 0x28e23139, "_gpl");
SYMBOL_CRC(xfrm_count_pfkey_auth_supported, 0x0a575945, "_gpl");
SYMBOL_CRC(xfrm_count_pfkey_enc_supported, 0x7a8ca627, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x6199ad5d, "crypto_has_skcipher" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5712C35486AB2D357EFE457");
