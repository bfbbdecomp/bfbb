#include "zDispatcher.h"

#include <types.h>

// func_800534E4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Startup__Fv")

// func_800534E8
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Shutdown__Fv")

// func_800534EC
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_scenePrepare__Fv")

// func_8005352C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_sceneFinish__Fv")

// func_80053568
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_memPool__Fi")

// func_800535E0
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_getInst__FP17st_ZDISPATCH_DATAi")

// func_800535EC
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Init__FP17st_ZDISPATCH_DATAP10xBaseAsset")

// func_8005360C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene")

// func_8005362C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial")

// func_8005364C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial")

// func_8005366C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instInit__FP17st_ZDISPATCH_DATAP10xBaseAsset")

// func_800536F4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instInitDep__FP17st_ZDISPATCH_DATAP6zScene")

// func_80053724
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instReset__FP17st_ZDISPATCH_DATAP6zScene")

// func_80053794
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_readAsset__FP17st_ZDISPATCH_DATA")

// func_80053798
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s",                                                       \
                   "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMAND")

// func_800537C4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s",                                                       \
                   "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMANDi")

// func_800537F4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s",                                                       \
                   "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMANDPvPvPv")

// func_80053850
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s",                                                       \
                   "ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT")

// func_80053B2C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcherStoreOptions__Fv")

// func_80053B7C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcherRestoreOptions__Fv")

// func_80053BD4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_elcb_event__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800540D4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setMusicVolume__Fi")

// func_80054158
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setSFXVolume__Fi")
