#ifndef LANGUAGE_HEADER
#define LANGUAGE_HEADER

typedef struct{
	wchar_t *msg_storage_devices;
	wchar_t *msg_use_yamt;
	wchar_t *msg_enable_yamt;
	wchar_t *msg_default;
	wchar_t *msg_sd2vita;
	wchar_t *msg_memory_card;
	wchar_t *msg_internal_storage;
	wchar_t *msg_usb_psvsd;
	wchar_t *msg_driver_settings;
	wchar_t *msg_use_yamt_gcsd_patches;
	wchar_t *msg_add_device;
	wchar_t *msg_patch_external_ux;
	wchar_t *msg_uncheck_no_memory_card;
	wchar_t *msg_developer_options;
	wchar_t *msg_idle;
	wchar_t *msg_reset_yamt;
	wchar_t *msg_texfat_format_gcsd;
	wchar_t *msg_texfat_format_usb_psvsd;
	wchar_t *msg_gcsd_pc_format;
	wchar_t *msg_mount_all;
	wchar_t *msg_rw_mount_sa0_pd0;
	wchar_t *msg_rw_mount_os0_vs0;
	wchar_t *msg_disable_texfat;
	wchar_t *msg_enable_texfat;
	wchar_t *msg_enable_usb_patch;
	wchar_t *msg_force_legacy_usb_psvsd;
	wchar_t *msg_disable_usb_psvsd_patch;
	wchar_t *msg_enable_helpe_log;
	wchar_t *msg_custom_partitions;
	wchar_t *msg_swap_redirect_mode;
	wchar_t *msg_should_increase_stability;
	wchar_t *msg_mount_device;
	wchar_t *msg_mount_partition_type;
	wchar_t *msg_mount_partition;
	wchar_t *msg_not_set;
	wchar_t *msg_check_if;
	wchar_t *msg_no_check;
	wchar_t *msg_sd2vita_present;
	wchar_t *msg_memory_card_present;
	wchar_t *msg_connected_power;
	wchar_t *msg_check_must;
	wchar_t *msg_check_succeed;
	wchar_t *msg_check_fail;
} language_container_t;

language_container_t language_japanese = {  
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_english_us = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_french = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_spanish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_german = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_italian = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_dutch = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_portuguese_pt = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_russian = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_korean = {
 	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_chinese_t = {
	L"存儲設備",
	L"使用YAMT",
	L"啓用YAMT挂載驅動",
	L"默認",
	L"SD2Vita TF卡套",
	L"Memory Card 原装記憶卡",
	L"Internal Storage 內置存儲",
	L"USB/PSVSD 設備",
	L"驅動設定",
	L"使用YAMT GC-SD補丁",
	L"添加設備支持例如SD2Vita",
	L"外部ux0補丁",
	L"如果沒有插入原装記憶卡，則取消此選項。",
	L"開發者選項",
	L"閑置",
	L"重置YAMT存儲配置",
	L"以TexFAT格式化GC-SD存儲",
	L"以TexFAT格式化USB/PSVSD存儲",
	L"清除GC-SD設備為PC格式",
	L"掛載所有自定義分區",
	L"提權掛載至sa0和pd0",
	L"提權掛載至os0和vs0",
	L"禁用TexFAT所有用戶存儲",
	L"禁用TexFAT所有用戶存儲",
	L"啟用實驗性USB補丁",
	L"強製傳統USB/PSVSD模式",
	L"禁用外部USB/PSVSD補丁",
	L"啟用幫助日誌記錄文件",
	L"★自定義分區",
	L"“交換”重定向模式",
	L"應該增加穩定性。",
	L"設備：",
	L"分區類型：",
	L"分區：",
	L"未設置",
	L"檢查……",
	L"沒有檢查",
	L"存在SD2Vita",
	L"存在Memory Card",
	L"連接到電源",
	L"檢查必須……",
	L"成功",
	L"失敗",
};

language_container_t language_chinese_s = {
	L"存储设备",
	L"使用YAMT",
	L"启用YAMT挂载驱动",
	L"默认",
	L"SD2Vita TF卡套",
	L"Memory Card 原装内存卡",
	L"Internal Storage 内置存储",
	L"USB/PSVSD 设备",
	L"驱动设置",
	L"使用YAMT GC-SD补丁",
	L"添加设备支持例如SD2Vita",
	L"外部ux0补丁",
	L"如果没有插入原装内存卡，则取消此选项。",
	L"开发者选项",
	L"闲置",
	L"重置YAMT存储配置",
	L"以TexFAT格式化GC-SD存储",
	L"以TexFAT格式化USB/PSVSD存储",
	L"清除GC-SD设备为PC格式",
	L"挂载所有自定义分区",
	L"提权挂载至sa0和pd0",
	L"提权挂载至os0和vs0",
	L"禁用TexFAT所有用户存储",
	L"禁用TexFAT所有用户存储",
	L"启用实验性USB补丁",
	L"强制传统USB/PSVSD模式",
	L"禁用外部USB/PSVSD补丁",
	L"启用帮助日志记录文件",
	L"★自定义分区",
	L"“交换”重定向模式",
	L"应该增加稳定性。",
	L"设备：",
	L"分区类型：",
	L"分区：",
	L"未设置",
	L"检查…",
	L"没有检查",
	L"存在SD2Vita",
	L"存在Memory Card",
	L"连接到电源",
	L"检查必须…",
	L"成功",
	L"失败",
};

language_container_t language_finnish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_swedish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_danish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_norwegian = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_polish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_portuguese_br = {
	L"Dispositivos de armazenamento",
	L"Usar YAMT",
	L"Habilita o driver YAML",
	L"Padrao",
	L"SD2Vita",
	L"Cartao de memória",
	L"Armazenamento interno",
	L"USB/PSVSD",
	L"Configurações do Driver",
	L"Usar os patches GC-SD do YAMT",
	L"Adiciona suporte para dispositivos como o SD2Vita",
	L"Aplicar patch no ux0 externo",
	L"Desmarque esta opção caso não tenha um cartão de memória inserido",
	L"Opções de desenvolvedor",
	L"Sem ação",
	L"Reconfigurar as opções de armazenamento do YAMT",
	L"Formatar o armazenamento GC-SD para TexFAT",
	L"Formatar o armazenamento USB/PSVSD para TexFAT",
	L"Limpar a formatação do GC-SD para formatação no PC",
	L"Montar todas as partições personalizadas",
	L"Montar sa0 e pd0 em modo Leitura-Escrita",
	L"Montar os0 e vs0 em modo Leitura-Escrita",
	L"Desabilitar TexFAT em todos os armazenamentos de usuário",
	L"Habilitar TexFAT em todos os armazenamentos de usuário",
	L"Habilitar patches USB experimentais",
	L"Forcar modo USB/PSVSD legado",
	L"Desabilitar patches adicionais para USB/PSVSD",
	L"Habilitar registro de eventos para arquivo",
	L"★Partições personalizadas",
	L"Modo de redirecionamento 'Swap'",
	L"Deve aumentar a estabilidade.",
	L"Dispositivo:",
	L"Tipo de partição:",
	L"partição:",
	L"NAO CONFIGURADO",
	L"Verificar se ...",
	L"NÃO VERIFICADO",
	L"SD2Vita está presente",
	L"Memory Card está presente",
	L"Conectado à fonte de energia",
	L"A verificação deve ...",
	L"Sucesso",
	L"Falha",
};

language_container_t language_english_gb = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

language_container_t language_turkish = {
	L"Storage Devices",
	L"Use YAMT",
	L"Enables the YAMT driver",
	L"Default",
	L"SD2Vita",
	L"Memory Card",
	L"Internal Storage",
	L"USB/PSVSD",
	L"Driver settings",
	L"Use YAMT GC-SD patches",
	L"Adds support for devices such as SD2Vita",
	L"Patch external ux0",
	L"Uncheck this if there is no memory card inserted",
	L"Developer options",
	L"Idle",
	L"Reset the YAMT storage config",
	L"TexFAT format GC-SD's storage",
	L"TexFAT format USB/PSVSD's storage",
	L"Clean GC-SD's storage for PC format",
	L"Mount all custom partitions",
	L"RW mount sa0 and pd0",
	L"RW mount os0 and vs0",
	L"Disable TexFAT on all user storages",
	L"Enable TexFAT on all user storages",
	L"Enable experimental USB patches",
	L"Force legacy USB/PSVSD mode",
	L"Disable extra USB/PSVSD patches",
	L"Enable helper logging to file",
	L"★Custom partitions",
	L"'Swap' redirect mode",
	L"Should increase stability.",
	L"Device:",
	L"Partition type:",
	L"Partition:",
	L"NOT SET",
	L"Check if ...",
	L"NO CHECK",
	L"SD2Vita is present",
	L"Memory Card is present",
	L"Connected to a power source",
	L"The check must ...",
	L"Succeed",
	L"Fail",
};

#endif // LANGUAGE_HEADER
