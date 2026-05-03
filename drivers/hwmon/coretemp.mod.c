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
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa4d6e90c, "__platform_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xb175fea3, "__cpuhp_setup_state" },
	{ 0xbba94bbb, "platform_driver_unregister" },
	{ 0x67e09bca, "__cpuhp_remove_state" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe4ffb648, "cpu_info" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x48d27375, "__bitmap_intersects" },
	{ 0x293811a0, "platform_device_alloc" },
	{ 0xd739ec12, "platform_device_add" },
	{ 0x91a9174a, "platform_device_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x4675511e, "devm_kmalloc" },
	{ 0x967fbe20, "__raw_spin_lock_init" },
	{ 0x59aadc98, "devm_hwmon_device_register_with_groups" },
	{ 0xf37fc324, "ida_destroy" },
	{ 0xac05e6d4, "sysfs_remove_group" },
	{ 0x3155b23d, "ida_free" },
	{ 0x678d1bca, "ida_alloc_range" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0xdc20c27d, "__mutex_init" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x209e83ca, "sysfs_create_group" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0x2d1bce9, "pci_get_domain_bus_and_slot" },
	{ 0xfb536f89, "pci_dev_put" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xeaee3eee, "_dev_notice" },
	{ 0xcd4782ea, "__dynamic_dev_dbg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9c4fc8b0, "param_ops_int" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "E5721134D9227D44FB2B5F4");
