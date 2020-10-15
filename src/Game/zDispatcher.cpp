#include "zDispatcher.h"

#include <types.h>

// zDispatcher_Startup()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Startup__Fv")

// zDispatcher_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Shutdown__Fv")

// zDispatcher_scenePrepare()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_scenePrepare__Fv")

// zDispatcher_sceneFinish()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_sceneFinish__Fv")

// zDispatcher_memPool(int)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_memPool__Fi")

// zDispatcher_getInst(st_ZDISPATCH_DATA*,int)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_getInst__FP17st_ZDISPATCH_DATAi")

// zDispatcher_Init(st_ZDISPATCH_DATA*,xBaseAsset*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Init__FP17st_ZDISPATCH_DATAP10xBaseAsset")

// zDispatcher_InitDep(st_ZDISPATCH_DATA*,zScene*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene")

// zDispatcher_Save(st_ZDISPATCH_DATA*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial")

// zDispatcher_Load(st_ZDISPATCH_DATA*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial")

// ZDSP_instInit(st_ZDISPATCH_DATA*,xBaseAsset*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instInit__FP17st_ZDISPATCH_DATAP10xBaseAsset")

// ZDSP_instInitDep(st_ZDISPATCH_DATA*,zScene*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instInitDep__FP17st_ZDISPATCH_DATAP6zScene")

// ZDSP_instReset(st_ZDISPATCH_DATA*,zScene*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_instReset__FP17st_ZDISPATCH_DATAP6zScene")

// ZDSP_readAsset(st_ZDISPATCH_DATA*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_readAsset__FP17st_ZDISPATCH_DATA")

// ZDSP_injectCmd(st_ZDISPATCH_DATA*,en_DISPATCH_COMMAND)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMAND")

// ZDSP_injectCmd(st_ZDISPATCH_DATA*,en_DISPATCH_COMMAND,int)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMANDi")

// ZDSP_injectCmd(st_ZDISPATCH_DATA*,en_DISPATCH_COMMAND,void*,void*,void*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMANDPvPvPv")

// ZDSP_doCommand(st_ZDISPATCH_DATA*,st_ZDISPATCH_CONTEXT*)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT")

// zDispatcherStoreOptions()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcherStoreOptions__Fv")

// zDispatcherRestoreOptions()
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcherRestoreOptions__Fv")

// WRAP_xsnd_setMusicVolume(int)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setMusicVolume__Fi")

// WRAP_xsnd_setSFXVolume(int)
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setSFXVolume__Fi")
