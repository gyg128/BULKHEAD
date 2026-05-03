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

SYMBOL_CRC(rapl_remove_package, 0x0a85ce77, "_gpl");
SYMBOL_CRC(rapl_find_package_domain, 0x55151333, "_gpl");
SYMBOL_CRC(rapl_add_package, 0x7b37e8ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf5b00aab, "boot_cpu_data" },
	{ 0xed27d9fb, "pv_ops" },
	{ 0x2f322d9d, "powercap_unregister_zone" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe4ffb648, "cpu_info" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x9ed82668, "powercap_register_zone" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x293811a0, "platform_device_alloc" },
	{ 0xd739ec12, "platform_device_add" },
	{ 0x91a9174a, "platform_device_put" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x655ace3c, "platform_device_unregister" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0096:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0019mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0009fam0018mod*:feature:*");

MODULE_INFO(srcversion, "3B625C8292BBED2B8B0A623");
