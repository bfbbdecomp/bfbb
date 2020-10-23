#include "xserializer.h"

#include <types.h>

// func_80042D6C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialStartup__FiP21st_SERIAL_PERCID_SIZE")

// func_80042DDC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialShutdown__Fv")

// func_80042DF0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialTraverse__FPFUiP7xSerial_i")

// func_80042E84
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__ct__7xSerialFv")

// func_80042E88
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__dt__7xSerialFv")

// func_80042EEC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__dl__7xSerialFPv")

// func_80042EF0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "setClient__7xSerialFUi")

// func_80042F10
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFPcii")

// func_8004300C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write_b1__7xSerialFi")

// func_8004303C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write_b7__7xSerialFUi")

// func_8004306C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFUc")

// func_8004309C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFs")

// func_800430CC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFi")

// func_800430FC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFUi")

// func_8004312C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFf")

// func_8004315C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPcii")

// func_800432AC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read_b1__7xSerialFPi")

// func_800432D4
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read_b7__7xSerialFPUi")

// func_800432FC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPUc")

// func_80043324
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPs")

// func_8004334C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPi")

// func_80043374
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPUi")

// func_8004339C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPf")

// func_800433C4
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "wrbit__7xSerialFi")

// func_80043488
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "rdbit__7xSerialFv")

// func_80043524
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "prepare__7xSerialFUi")

// func_8004357C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialWipeMainBuffer__Fv")

// func_800435B0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_init_tables__Fv")

// func_800436A0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE")

// func_80043914
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_ord_compare__FPvPv")

// func_80043940
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_ord_test__FPCvPv")

// func_80043968
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "XSER_get_client__FUi")

// func_800439FC
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE")

// func_80043B38
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi")

// func_80043B4C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_80043B8C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_80043BF0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi")

// func_80043C08
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_80043C60
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_80043CD0
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi")

// func_80043DF8
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_80043E4C
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")
