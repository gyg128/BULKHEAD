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
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8d17371a, "sof_client_get_dma_dev" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0xf6b5e680, "snd_compr_malloc_pages" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56cc2c5c, "pm_runtime_set_autosuspend_delay" },
	{ 0xaefbe999, "snd_soc_new_compress" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa24c07eb, "sof_client_get_ipc_type" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x29edcefd, "auxiliary_driver_unregister" },
	{ 0x648e19e, "devm_snd_soc_register_component" },
	{ 0x2740c925, "___ratelimit" },
	{ 0x345f4ee3, "snd_compr_free_pages" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x9f06a968, "pm_runtime_enable" },
	{ 0xd72a83ee, "sof_client_core_module_put" },
	{ 0x8eee64bd, "sof_client_core_module_get" },
	{ 0xcb04c11c, "sof_client_get_ipc_max_payload_size" },
	{ 0x9c9aa3b9, "parse_int_array_user" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x35595e4a, "simple_open" },
	{ 0xeb7a0115, "debugfs_remove" },
	{ 0x1a0a801a, "default_llseek" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8ee5eed, "sof_client_get_fw_state" },
	{ 0x52f55339, "debugfs_create_file" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0xa14229ed, "param_ops_bool" },
	{ 0x36f4e048, "sof_client_ipc_tx_message" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b3d04ac, "__auxiliary_driver_register" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x41410d7e, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xdc1e1fab, "__pm_runtime_use_autosuspend" },
	{ 0xa6f19554, "sof_client_get_debugfs_root" },
	{ 0xb992dd40, "__pm_runtime_disable" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc9b86d63, "devm_snd_soc_register_card" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "snd-sof,snd-compress,snd-soc-core");

MODULE_ALIAS("auxiliary:snd_sof.hda-probes");

MODULE_INFO(srcversion, "C19C3148EA4DE8F9CC44B68");
