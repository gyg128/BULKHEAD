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

SYMBOL_CRC(nf_tproxy_laddr6, 0x919e4c3c, "_gpl");
SYMBOL_CRC(nf_tproxy_handle_time_wait6, 0x77aa5d95, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v6, 0xdded4b60, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbb04e08, "_raw_read_lock_bh" },
	{ 0x31149784, "_raw_read_unlock_bh" },
	{ 0x402a4119, "inet_twsk_deschedule_put" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x5353d7bf, "inet_twsk_put" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x4fc856b1, "__inet6_lookup_established" },
	{ 0xb35e5206, "udp6_lib_lookup" },
	{ 0x1d077637, "sk_free" },
	{ 0xbf6caefc, "inet6_lookup_listener" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "729D321B00F4CFD59274424");
