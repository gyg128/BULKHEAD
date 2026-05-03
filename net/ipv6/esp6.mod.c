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

SYMBOL_CRC(esp6_output_head, 0xf5e8c7dc, "_gpl");
SYMBOL_CRC(esp6_output_tail, 0xe97877d8, "_gpl");
SYMBOL_CRC(esp6_input_done2, 0x2b8fd890, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x514280b2, "_raw_spin_lock_bh" },
	{ 0xf58097f7, "_raw_spin_unlock_bh" },
	{ 0x750616c7, "skb_cow_data" },
	{ 0xfb578fc5, "memset" },
	{ 0xc2aedac2, "skb_page_frag_refill" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa0e3edcd, "pskb_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa189124b, "skb_to_sgvec" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf6dbd57c, "crypto_aead_encrypt" },
	{ 0x17073019, "skb_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x263f1823, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0x4a8d3bb6, "xfrm_output_resume" },
	{ 0x5940cbab, "skb_push" },
	{ 0x31d4a9a2, "__skb_ext_del" },
	{ 0x87b8798d, "sg_next" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xbb91671e, "__folio_put" },
	{ 0xea4901a5, "__put_devmap_managed_page_refs" },
	{ 0xc8adc4fb, "ipv6_skip_exthdr" },
	{ 0x7df9f8ec, "km_new_mapping" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc19d23b6, "skb_pull_rcsum" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0x97a78903, "___pskb_trim" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xce1979c, "xfrm_register_type" },
	{ 0x82480c11, "xfrm6_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x30afbe03, "xfrm_unregister_type" },
	{ 0xa5ef3908, "xfrm6_protocol_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x131bce6c, "crypto_alloc_aead" },
	{ 0x7edffc4f, "crypto_aead_setkey" },
	{ 0x30da100d, "crypto_aead_setauthsize" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x10d24ad4, "crypto_destroy_tfm" },
	{ 0x5194b62f, "crypto_aead_decrypt" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0xc64f679a, "xfrm_state_mtu" },
	{ 0x3283050d, "xfrm_input_resume" },
	{ 0x27f51c2d, "xfrm_state_lookup" },
	{ 0x9a1dba47, "make_kuid" },
	{ 0x830b545c, "ip6_redirect" },
	{ 0xf335152f, "ip6_update_pmtu" },
	{ 0xab7d64d9, "__xfrm_state_destroy" },
	{ 0xb390c05, "xfrm6_rcv" },
	{ 0xd600fe13, "xfrm_input" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "ipv6,xfrm_algo");


MODULE_INFO(srcversion, "18384A586FAF4FF2346731F");
