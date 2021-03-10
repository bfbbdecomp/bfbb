#include "zPlatform.h"

#include <types.h>

// func_800A8EC8
void genericPlatRender(xEnt* ent)
{
    if (!ent->model || !xEntIsVisible(ent))
    {
        return;
    }

    xModelRender(ent->model);
}

// func_800A8F14
void zPlatform_Init(void* plat, void* asset)
{
    zPlatform_Init((zPlatform*)plat, (xEntAsset*)asset);
}

// func_800A8F34
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Init__FP9zPlatformP9xEntAsset")

// func_800A9350
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Setup__FP9zPlatformP6xScene")

// func_800A93CC
void zPlatform_Save(zPlatform* ent, xSerial* s)
{
    zEntSave(ent, s);
}

// func_800A93EC
void zPlatform_Load(zPlatform* ent, xSerial* s)
{
    zEntLoad(ent, s);
}

// func_800A940C
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Reset__FP9zPlatformP6xScene")

// func_800A96FC
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zMechIsStartingForth__FP9zPlatformUs")

// func_800A9730
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zMechIsStartingBack__FP9zPlatformUs")

// func_800A9768
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "SolvePaddleMotion__FP9zPlatformPff")

// func_800A9B7C
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_PaddleStartRotate__FP4xEntii")

// func_800A9C68
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui")

// func_800A9FE0
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatFM_Update__FP9zPlatformP6xScenef")

// func_800AADE4
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Update__FP4xEntP6xScenef")

// func_800AB760
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Move__FP4xEntP6xScenefP9xEntFrame")

// func_800AB7BC
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Shake__FP9zPlatformfff")

// func_800AB88C
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Tremble__FP9zPlatformfff")

// func_800AB9BC
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_BreakawayFallFX__FP9zPlatformf")

// func_800ABA34
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Mount__FP9zPlatform")

// func_800ABAD0
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Dismount__FP9zPlatform")

// func_800ABAF4
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatformTranslate__FP4xEntP5xVec3P7xMat4x3")

// func_800ABB48
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatFM_EventSetup__FP9zPlatformPCfi")

// func_800ABC04
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatformEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800AC87C
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "xEntMPAccelerate__FP10xEntMotionf")
