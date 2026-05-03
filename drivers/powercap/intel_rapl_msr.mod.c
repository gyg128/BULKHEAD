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
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0x7a97ee46, "powercap_register_control_type" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0xd2845446, "powercap_unregister_control_type" },
	{ 0x92997ed8, "_printk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x55151333, "rapl_find_package_domain" },
	{ 0x7b37e8ae, "rapl_add_package" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa85ce77, "rapl_remove_package" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "intel_rapl_common");

MODULE_ALIAS("platform:intel_rapl_msr");

MODULE_INFO(srcversion, "927212C8E503AAB59CFDF7A");
