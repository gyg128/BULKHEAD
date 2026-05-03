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
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0x40d4ae5f, "pks_switch" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0xc4775fd4, "devm_kmemdup" },
	{ 0x2fa0c306, "pci_match_id" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x2bf08a1c, "pci_try_set_mwi" },
	{ 0x891f7622, "intel_lpss_probe" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xfe06d122, "pm_runtime_allow" },
	{ 0x1d92885b, "pm_runtime_forbid" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0xee4fd829, "intel_lpss_remove" },
	{ 0x680d2708, "intel_lpss_prepare" },
	{ 0xe6a5b123, "intel_lpss_suspend" },
	{ 0x81a6beec, "intel_lpss_resume" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "intel-lpss");

MODULE_ALIAS("pci:v00008086d000002A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B78sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B79sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DFBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A5Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A79sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A7Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A7Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AA9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007ACDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007ACEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007ACFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007ADCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AF9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AFBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AFCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AFDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AFEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E78sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E79sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E7Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E7Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A12Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2FC8CB0BF6C691A36FC4ED2");
