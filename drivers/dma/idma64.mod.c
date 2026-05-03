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
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xdf623c75, "platform_get_irq" },
	{ 0xe3f67584, "platform_get_resource" },
	{ 0x4940c0db, "devm_ioremap_resource" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x37795c2b, "devm_request_threaded_irq" },
	{ 0xa5106b02, "vchan_init" },
	{ 0xb613d410, "dma_async_device_register" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x69561899, "dma_async_device_unregister" },
	{ 0x27ef7a1f, "devm_free_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2e6a450a, "_raw_spin_unlock" },
	{ 0x4e3b4b39, "_raw_spin_lock" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x953571ce, "dma_pool_create" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x47f49012, "_raw_spin_lock_irqsave" },
	{ 0xd6eb4437, "_raw_spin_unlock_irqrestore" },
	{ 0xa96d8e4b, "vchan_dma_desc_free_list" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfbae375e, "dma_async_tx_descriptor_init" },
	{ 0x8fd153ad, "vchan_tx_submit" },
	{ 0x119dcb1a, "vchan_tx_desc_free" },
	{ 0xddf4f4a6, "vchan_find_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB2F558E81F47291E9B906B");
