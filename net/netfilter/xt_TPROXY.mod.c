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
	{ 0xc5d2c4eb, "xt_register_targets" },
	{ 0x85e93381, "xt_unregister_targets" },
	{ 0x80c3ca2e, "nf_defrag_ipv4_enable" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x684842fd, "nf_defrag_ipv4_disable" },
	{ 0x8891daf5, "ipv6_find_hdr" },
	{ 0xdded4b60, "nf_tproxy_get_sock_v6" },
	{ 0x919e4c3c, "nf_tproxy_laddr6" },
	{ 0x77aa5d95, "nf_tproxy_handle_time_wait6" },
	{ 0xeb6f8ea8, "sock_gen_put" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x9c0379a8, "sock_edemux" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x8913acf2, "nf_defrag_ipv6_enable" },
	{ 0xf00ac33e, "nf_defrag_ipv6_disable" },
	{ 0x633721de, "nf_tproxy_get_sock_v4" },
	{ 0xa0cbb5b9, "nf_tproxy_laddr4" },
	{ 0x6e1334eb, "nf_tproxy_handle_time_wait4" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_defrag_ipv4,nf_tproxy_ipv6,nf_defrag_ipv6,nf_tproxy_ipv4");


MODULE_INFO(srcversion, "78820E3D40A1C0C1DE8D1EE");
