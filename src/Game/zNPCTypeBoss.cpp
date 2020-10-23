#include "zNPCTypeBoss.h"

#include <types.h>
#include "../Core/x/xString.h"

extern int32 g_boss_is_in_the_house;
extern uint32 g_hash_bossanim[78];
extern int8* g_strz_bossanim[78];

void ZNPC_Boss_Startup()
{
    // TODO: document/replace hardcoded size
    for (int32 i = 0; i < 78; i++)
    {
        g_hash_bossanim[i] = xStrHash(g_strz_bossanim[i]);
    }
}

void ZNPC_Boss_Shutdown()
{
    return;
}

void zNPCBoss_ScenePrepare()
{
    g_boss_is_in_the_house = true;
}

void zNPCBoss_SceneFinish()
{
    g_boss_is_in_the_house = false;
}

// func_801361B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ZNPC_Create_Boss__FiP10RyzMemGrowPv")

// func_80136310
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ZNPC_Destroy_Boss__FP12xFactoryInst")

// func_80136334
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ZNPC_AnimTable_BossSBobbyArm__Fv")

// func_801363EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "Setup__8zNPCBossFv")

// func_80136424
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "BOSS_InitEffects__Fv")

// func_80136464
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__8zNPCBossFi")

// func_801364A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__9zNPCB_SB1Fi")

// func_801364DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__12zNPCBPatrickFi")

// func_80136518
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__10zNPCBSandyFi")

// func_80136554
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ColChkFlags__8zNPCBossCFv")

// func_8013655C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ColPenFlags__8zNPCBossCFv")

// func_80136564
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ColChkByFlags__8zNPCBossCFv")

// func_8013656C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ColPenByFlags__8zNPCBossCFv")

// func_80136574
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "PhysicsFlags__8zNPCBossCFv")

// func_8013657C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "AttackTimeLeft__8zNPCBossFv")

// func_80136584
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "HoldUpDude__8zNPCBossFv")

// func_80136588
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ThanksImDone__8zNPCBossFv")

// func_8013658C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__9zNPCB_SB2Fi")
