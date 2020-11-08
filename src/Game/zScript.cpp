#include "../Core/x/xBase.h"

#include "zScript.h"

#include <types.h>

void zScriptInit(void* data, void* asset)
{
    zScriptInit((xBase*)data, (xScriptAsset*)asset);
}

// func_800B5248
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptInit__FP5xBaseP12xScriptAsset")

void zScriptReset(zScript* script)
{
    xBaseReset((xBase*)script, (xBaseAsset*)script->tasset);
    script->time = script->tasset->scriptStartTime;
    script->more = 1;
}

void zScript_Save(zScript* script, xSerial* s)
{
    xBaseSave((xBase*)script, s);
}

void zScript_Load(zScript* script, xSerial* s)
{
    xBaseLoad((xBase*)script, s);
}

// func_800B5360
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800B542C
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptExecuteEvents__FP8_zScriptff")

// func_800B5538
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptUpdate__FP5xBaseP6xScenef")
