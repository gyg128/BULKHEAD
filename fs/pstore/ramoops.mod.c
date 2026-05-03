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
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xf295dec2, "param_ops_ullong" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd530cfcd, "param_ops_uint" },
	{ 0xd2b956f6, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x63adbf92, "encode_rs8" },
	{ 0x1d29b9e1, "decode_rs8" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b23bbf6, "pstore_register" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x92997ed8, "_printk" },
	{ 0x2740c925, "___ratelimit" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xeb2f825c, "init_rs_gfp" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x38eaa5e6, "vmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfd581da1, "free_rs" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe1bb7fe2, "platform_device_register_full" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x882de3c5, "pstore_unregister" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7e5db80b, "pstore_name_to_type" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "reed_solomon");


MODULE_INFO(srcversion, "334F42AF20816AB51FFECC0");
