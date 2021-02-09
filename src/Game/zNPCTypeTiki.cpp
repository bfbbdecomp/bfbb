#include "zNPCTypeTiki.h"

#include "zNPCTypes.h"

#include "../Core/x/xString.h"
#include "../Core/x/xutil.h"

#define ANIM_COUNT 2

extern const char* g_strz_tikianim[ANIM_COUNT];
extern uint32 g_hash_tikianim[ANIM_COUNT];

void ZNPC_Tiki_Startup()
{
    for (int32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_tikianim[i] = xStrHash(g_strz_tikianim[i]);
    }
}

void ZNPC_Tiki_Shutdown()
{
}

// func_801095EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitStacking__FP6zScene")

// func_801096EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitFX__FP6zScene")

// func_80109A7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ExplodeFX__FP8zNPCTiki")

// func_80109D3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_PickTikisToAnimate__Fv")

// func_80109EC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_Timestep__FP6xScenef")

// func_80109F28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ReparentOrphans__Fv")

xFactoryInst* ZNPC_Create_Tiki(int32 who, RyzMemGrow* grow, void*)
{
    zNPCTiki* tiki = NULL;

    switch (who)
    {
    case NPC_TYPE_TIKI_WOOD:
    case NPC_TYPE_TIKI_LOVEY:
    case NPC_TYPE_TIKI_QUIET:
    case NPC_TYPE_TIKI_THUNDER:
    case NPC_TYPE_TIKI_STONE:
    {
        tiki = new (who, grow) zNPCTiki(who);
        break;
    }
    default:
    {
        xUtil_idtag2string(who, 0);
        break;
    }
    }

    return tiki;
}

void ZNPC_Destroy_Tiki(xFactoryInst* inst)
{
    delete inst;
}

// func_8010A0AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ZNPC_AnimTable_Tiki__Fv")

// func_8010A134
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Reset__8zNPCTikiFv")

// func_8010A2DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Setup__8zNPCTikiFv")

// func_8010A31C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Init__8zNPCTikiFP9xEntAsset")

// func_8010A530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s",                                                      \
                   "Damage__8zNPCTikiF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_8010A5BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SetCarryState__8zNPCTikiF18en_NPC_CARRY_STATE")

// func_8010A7F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SelfSetup__8zNPCTikiFv")

// func_8010A9D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ParseINI__8zNPCTikiFv")

// func_8010AA40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Process__8zNPCTikiFP6xScenef")

// func_8010B38C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SysEvent__8zNPCTikiFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_8010B6AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "AddChild__8zNPCTikiFP8zNPCTiki")

// func_8010B6EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveChild__8zNPCTikiFP8zNPCTiki")

// func_8010B754
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveParent__8zNPCTikiFP8zNPCTiki")

// func_8010B7EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "FindParents__8zNPCTikiFP6zScene")

// func_8010BD88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ParentUpdated__8zNPCTikiFP8zNPCTiki")

// func_8010BDCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveFromFamily__8zNPCTikiFv")

// func_8010BEB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyFloat__FP8zNPCTikif")

// func_8010BFC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C0C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyPatrolCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C190
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "quietIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C318
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "quietHideCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C438
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "thunderIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C5A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "thunderCountCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C8F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "tikiDyingCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C988
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "tikiDeadCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C9AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "genericTikiRender__FP4xEnt")

// func_8010CAB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyTikiRender__FP4xEnt")

// func_8010CD4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "__ct__8zNPCTikiFi")

// func_8010CD88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "CanRope__8zNPCTikiFv")

// func_8010CD90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "AnimPick__8zNPCTikiFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010CDBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Move__8zNPCTikiFP6xScenefP9xEntFrame")

// func_8010CDC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "BUpdate__8zNPCTikiFP5xVec3")

// func_8010CDE0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "IsAlive__8zNPCTikiFv")

// func_8010CDFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColChkFlags__8zNPCTikiCFv")

// func_8010CE04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColPenFlags__8zNPCTikiCFv")

// func_8010CE0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColChkByFlags__8zNPCTikiCFv")

// func_8010CE14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColPenByFlags__8zNPCTikiCFv")

// func_8010CE1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "PhysicsFlags__8zNPCTikiCFv")
