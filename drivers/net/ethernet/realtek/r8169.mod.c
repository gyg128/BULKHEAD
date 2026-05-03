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
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x164b87b6, "phy_set_max_speed" },
	{ 0x6defa1c1, "device_set_wakeup_enable" },
	{ 0x3f488918, "__skb_pad" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1bdee538, "skb_copy_bits" },
	{ 0xa808329d, "eth_mac_addr" },
	{ 0x235ff62b, "pcim_set_mwi" },
	{ 0x441e96b, "pci_wake_from_d3" },
	{ 0x92ebeeb2, "skb_tstamp_tx" },
	{ 0x29239e97, "__napi_alloc_skb" },
	{ 0xa6572866, "netdev_update_features" },
	{ 0x5bc5f4b1, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5ab0865, "queue_work_on" },
	{ 0xbc479851, "dmam_alloc_attrs" },
	{ 0x54b5d513, "unregister_netdev" },
	{ 0x47174133, "dma_unmap_page_attrs" },
	{ 0x5c8942ba, "request_firmware" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0x675cdcfc, "__pci_register_driver" },
	{ 0xa677eca, "phy_ethtool_set_eee" },
	{ 0x11011d8f, "pci_dev_run_wake" },
	{ 0x4a1142c9, "dma_sync_single_for_device" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2738bb97, "phy_attached_info" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1571c01, "phy_ethtool_set_link_ksettings" },
	{ 0x5528a9d0, "eth_validate_addr" },
	{ 0x60896cd4, "mutex_lock_nested" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe7ea06b5, "netdev_warn" },
	{ 0xdeb9a6d3, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb8c8e83c, "pci_irq_vector" },
	{ 0x95dc7b1e, "phy_write_mmd" },
	{ 0xb4f8cfbf, "pci_unregister_driver" },
	{ 0xbc4cb2f7, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa7aed26d, "pskb_expand_head" },
	{ 0x87847ce3, "phy_read_paged" },
	{ 0x1ee5a0e8, "phy_restore_page" },
	{ 0x8fa5a6ee, "dev_fetch_sw_netstats" },
	{ 0x88a8608d, "dev_driver_string" },
	{ 0xc4a3eb25, "dev_addr_mod" },
	{ 0x78406a5d, "eth_type_trans" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x5ff407ab, "dma_map_page_attrs" },
	{ 0x74a9698, "genphy_soft_reset" },
	{ 0x47617f58, "napi_complete_done" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x195cf8e0, "__mdiobus_write" },
	{ 0x818ae7f5, "__devm_alloc_percpu" },
	{ 0x4b7bb7f8, "pm_schedule_suspend" },
	{ 0x7ef783ed, "devm_clk_get_optional_enabled" },
	{ 0xebfbcab8, "__stack_chk_fail" },
	{ 0x6138085d, "pci_status_get_and_clear_errors" },
	{ 0x9c79ac8, "phy_speed_up" },
	{ 0xd8ecb38c, "phy_connect_direct" },
	{ 0xfc8d58ec, "__napi_schedule" },
	{ 0xa3c7fa87, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0x327ed536, "pci_disable_link_state" },
	{ 0x254548b, "__free_pages" },
	{ 0xc4c84979, "_dev_info" },
	{ 0x10e0ea0a, "napi_gro_receive" },
	{ 0xdc65ce, "netif_device_attach" },
	{ 0xc2a5116a, "pci_select_bars" },
	{ 0xc97adab6, "phy_ethtool_get_link_ksettings" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3811d8f3, "lockdep_init_map_type" },
	{ 0x1a7aca7a, "devm_alloc_etherdev_mqs" },
	{ 0x73f5cff7, "pcim_iomap_regions" },
	{ 0xdbe13e7e, "pci_clear_master" },
	{ 0xe645a528, "__phy_modify" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xa1bbd8b4, "_dev_err" },
	{ 0x5ad0b216, "softnet_data" },
	{ 0x774dbb18, "phy_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf700f611, "netdev_printk" },
	{ 0xad8a97cf, "phy_modify_paged" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x551b69b0, "phy_speed_down" },
	{ 0x8b5d11a8, "dma_alloc_attrs" },
	{ 0x388f2c2e, "pci_read_config_word" },
	{ 0xea05577b, "napi_enable" },
	{ 0x136b5481, "register_netdev" },
	{ 0x5671910f, "mdiobus_read" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbd392c11, "ethtool_op_get_link" },
	{ 0x3e750213, "eth_platform_get_mac_address" },
	{ 0xb4a9faeb, "netif_tx_wake_queue" },
	{ 0x6a5605de, "phy_start" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x2781bdb0, "dma_sync_single_for_cpu" },
	{ 0x5c03f46d, "phy_modify" },
	{ 0xfb578fc5, "memset" },
	{ 0xaea880c6, "_dev_warn" },
	{ 0xeb794e2, "phy_mac_interrupt" },
	{ 0xbf1d913e, "pci_alloc_irq_vectors_affinity" },
	{ 0x56b83406, "netif_schedule_queue" },
	{ 0x7a191e45, "__alloc_pages" },
	{ 0xe83fbdd3, "pci_set_master" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xae4d43c6, "phy_print_status" },
	{ 0x3796066c, "__pskb_pull_tail" },
	{ 0xe193827f, "phy_start_aneg" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x8f5f3395, "phy_set_asym_pause" },
	{ 0x37cb67ca, "phy_ethtool_get_eee" },
	{ 0x9e0e3d53, "devm_mdiobus_alloc_size" },
	{ 0xc2209089, "dma_set_coherent_mask" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3e55b830, "dma_free_attrs" },
	{ 0x1d258187, "__pm_runtime_resume" },
	{ 0x16ba7af8, "mutex_unlock" },
	{ 0x167c9a50, "pcie_capability_clear_and_set_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x879b4b39, "__dev_kfree_skb_any" },
	{ 0x9de67f86, "phy_support_asym_pause" },
	{ 0x9f9c69c0, "phy_get_pause" },
	{ 0x9931c059, "pci_write_config_byte" },
	{ 0x7aca4d89, "mdiobus_write" },
	{ 0x825a2e, "phy_select_page" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1893a1da, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x73a7fbd9, "phy_write_paged" },
	{ 0x768ec282, "mdiobus_get_phy" },
	{ 0x299ed943, "phy_ethtool_nway_reset" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x734209dc, "phy_read_mmd" },
	{ 0x984b4c25, "phy_init_hw" },
	{ 0xaa07c2de, "pcie_set_readrq" },
	{ 0x9431b23d, "__devm_mdiobus_register" },
	{ 0x4cd8c78c, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x951000c, "netif_set_tso_max_size" },
	{ 0xbcf6e22f, "phy_resume" },
	{ 0xb2d8c5ec, "dev_err_probe" },
	{ 0x5e00a2b3, "kmalloc_trace" },
	{ 0x12596b74, "pcim_iomap_table" },
	{ 0xe328a1df, "napi_schedule_prep" },
	{ 0xe5b20a47, "napi_consume_skb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x31bb4b61, "napi_disable" },
	{ 0x1c2e8d67, "phy_stop" },
	{ 0x29a6c60e, "phy_do_ioctl_running" },
	{ 0x80baff83, "netif_set_tso_max_segs" },
	{ 0xbac96f33, "netdev_stats_to_stats64" },
	{ 0x6743b555, "pcim_enable_device" },
	{ 0x815588a6, "clk_enable" },
	{ 0x90cefdce, "skb_clone_tx_timestamp" },
	{ 0x7ff47c40, "phy_disconnect" },
	{ 0x4527d4df, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8bebad59, "ethtool_op_get_ts_info" },
	{ 0x5194a313, "kmalloc_caches" },
	{ 0x58479dc3, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9aa6923, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FA564AD7E33BA670BD0A9B1");
