#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"

#include "zNPCTypeDuplotron.h"

#include <types.h>

// func_801251BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Duplotron_Startup__Fv")

// func_80125224
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Duplotron_Shutdown__Fv")

// func_80125228
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_ScenePrepare__Fv")

// func_8012522C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_SceneFinish__Fv")

// func_8012524C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_ScenePostInit__Fv")

// func_8012526C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Create_Duplotron__FiP10RyzMemGrowPv")

// func_80125304
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Destroy_Duplotron__FP12xFactoryInst")

// func_80125328
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_AnimTable_Duplotron__Fv")

// func_801254F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Init__13zNPCDuplotronFP9xEntAsset")

// func_80125554
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Setup__13zNPCDuplotronFv")

// func_80125618
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseINI__13zNPCDuplotronFv")

// func_80125638
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Reset__13zNPCDuplotronFv")

// func_80125694
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseLinks__13zNPCDuplotronFv")

// func_80125738
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "BUpdate__13zNPCDuplotronFP5xVec3")

// func_80125758
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseChild__13zNPCDuplotronFP5xBase")

// func_80125864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Process__13zNPCDuplotronFP6xScenef")

// func_801258DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "SelfSetup__13zNPCDuplotronFv")

// func_80125978
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s",                                                 \
                   "AnimPick__13zNPCDuplotronFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80125A38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DuploNotice__13zNPCDuplotronF13en_SM_NOTICESPv")

// func_80125A64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "IsAlive__13zNPCDuplotronFv")

// func_80125AA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "NPCMessage__13zNPCDuplotronFP6NPCMsg")

// func_80125B7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DupoHandleMail__13zNPCDuplotronFP6NPCMsg")

// func_80125CA4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DUPO_InitEffects__Fv")

// func_80125D88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DUPO_KillEffects__Fv")

// func_80125D8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXSmokeStack__13zNPCDuplotronFf")

// func_80125F74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXOverheat__13zNPCDuplotronFff")

// func_80126138
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXCycleLights__13zNPCDuplotronFfi")

// func_801262F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "__ct__13zNPCDuplotronFi")

// func_80126330
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Move__13zNPCDuplotronFP6xScenefP9xEntFrame")

// func_80126334
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ColChkFlags__13zNPCDuplotronCFv")

// func_8012633C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ColPenFlags__13zNPCDuplotronCFv")

// func_80126344
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ColChkByFlags__13zNPCDuplotronCFv")

// func_8012634C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ColPenByFlags__13zNPCDuplotronCFv")

// func_80126354
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "PhysicsFlags__13zNPCDuplotronCFv")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
