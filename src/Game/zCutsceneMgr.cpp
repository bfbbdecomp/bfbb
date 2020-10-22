#include "zCutsceneMgr.h"

#include <types.h>

// zCutsceneMgrInit(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrInit__FPvPv")

// zCutsceneMgrInit(xBase*,xCutsceneMgrAsset*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrInit__FP5xBaseP17xCutsceneMgrAsset")

// zCutsceneMgrReset(zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrReset__FP12zCutsceneMgr")

// zCutsceneMgrSave(zCutsceneMgr*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrSave__FP12zCutsceneMgrP7xSerial")

// zCutsceneMgrLoad(zCutsceneMgr*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrLoad__FP12zCutsceneMgrP7xSerial")

// RwRGBA::operator =(const RwRGBA&)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "__as__6RwRGBAFRC6RwRGBA")

// zCutSceneNamesTable_clearAll()
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutSceneNamesTable_clearAll__Fv")

// zCutsceneMgrPlayStart(zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrPlayStart__FP12zCutsceneMgr")

// zCutsceneMgrFinishLoad(xBase*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrFinishLoad__FP5xBase")

// zCutsceneMgrFinishExit(xBase*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrFinishExit__FP5xBase")

// zCutsceneMgrKillFX(zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrKillFX__FP12zCutsceneMgr")

// zCutsceneMgrUpdateFX(zCutsceneMgr*,float)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrUpdateFX__FP12zCutsceneMgrf")

// zCutsceneMgrUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrUpdate__FP5xBaseP6xScenef")

// check_hide_entities()
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "check_hide_entities__Fv")
