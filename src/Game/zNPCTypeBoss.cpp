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

// xFactoryInst* ZNPC_Create_Boss(int32 who, RyzMemGrow* grow)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "ZNPC_Create_Boss__FiP10RyzMemGrowPv")

// void Setup(zNPCBoss* this)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "Setup__8zNPCBossFv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "BOSS_InitEffects__Fv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__8zNPCBossFi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__9zNPCB_SB1Fi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__12zNPCBPatrickFi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__10zNPCBSandyFi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBoss.s", "__ct__9zNPCB_SB2Fi")
