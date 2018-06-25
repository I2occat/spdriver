#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbca7617b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9d25c316, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x751a24c5, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xdc8b9660, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2dee278d, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xdfa47286, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x730f3d95, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x3c80749a, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ds3231_drv");

MODULE_INFO(srcversion, "20E9A93BD84736E26E8856A");
