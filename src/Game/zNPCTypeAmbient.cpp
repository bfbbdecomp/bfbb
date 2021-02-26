#include <types.h>

#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"

#include "zNPCTypeAmbient.h"
#include "zNPCTypes.h"

extern int8* g_strz_ambianim[12];
extern int32 g_hash_ambianim[12];

void ZNPC_Ambient_Startup()
{
    int32 i = 0;

    do
    {
        g_hash_ambianim[i] = xStrHash(g_strz_ambianim[i]);
        i++;
    } while (i < 12); // using sizeof makes it not match
}

void ZNPC_Ambient_Shutdown()
{
}

xFactoryInst* ZNPC_Create_Ambient(int32 who, RyzMemGrow* grow, void*)
{
    zNPCAmbient* inst = NULL;

    switch (who)
    {
    case NPC_TYPE_AMBIENT:
    {
        inst = new (who, grow) zNPCAmbient(who);
        break;
    }
    case NPC_TYPE_JELLYPINK:
    case NPC_TYPE_JELLYBLUE:
    {
        inst = new (who, grow) zNPCJelly(who);
        break;
    }
    case NPC_TYPE_KINGNEPTUNE:
    {
        inst = new (who, grow) zNPCNeptune(who);
        break;
    }
    case NPC_TYPE_MIMEFISH:
    {
        inst = new (who, grow) zNPCMimeFish(who);
        break;
    }
    case NPC_TYPE_COW:
    {
        inst = new (who, grow) zNPCMimeFish(who);
        break;
    }
    }

    return inst;
}

void ZNPC_Destroy_Ambient(xFactoryInst* inst)
{
    delete inst;
}

// func_80107974
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Ambient__Fv")

// func_80107A00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Jelly__Fv")

// func_80107C28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Neptune__Fv")

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCAmbient::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    if (cfg_npc->dst_castShadow < 0.00000000)
    {
        cfg_npc->dst_castShadow = 0x3f800000;
    }
}
*/

// func_80107F40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Init__11zNPCAmbientFP9xEntAsset")

void zNPCAmbient::Reset()
{
    zNPCCommon::Reset();
    if (psy_instinct != NULL)
    {
        psy_instinct->GoalSet('NGN0', 1);
    }
}

void zNPCAmbient::Process(xScene* xscn, float32 dt)
{
    if (psy_instinct != NULL)
    {
        psy_instinct->Timestep(dt, NULL);
    }
    zNPCCommon::Process(xscn, dt);
}

void zNPCAmbient::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;

    bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal('NGN0', NULL);
    psy->BrainEnd();
    psy->SetSafety('NGN0');
}

// func_801080A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s",                                                   \
                   "AnimPick__11zNPCAmbientFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80108100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "NPCMessage__11zNPCAmbientFP6NPCMsg")

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCJelly::Init(xEntAsset* asset)
{
    zNPCAmbient::Init(asset);
    flg_move = flg_move | 4;
    flg_vuln = 0xffffffff;
    flg_vuln = flg_vuln & 0x9effffef;
}
*/

// func_801081F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Init__9zNPCJellyFP9xEntAsset")

// func_80108248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ParseINI__9zNPCJellyFv")

// func_80108310
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__9zNPCJellyFv")

// func_80108374
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__9zNPCJellyFv")

// func_80108450
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellySpawn__9zNPCJellyFPC5xVec3f")

// func_801084C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyKill__9zNPCJellyFv")

// func_80108530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__9zNPCJellyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010862C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "BUpdate__9zNPCJellyFP5xVec3")

// func_801086E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__9zNPCJellyFP6xScenef")

// func_801087A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AmbiHandleMail__9zNPCJellyFP6NPCMsg")

// func_801088C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAlpha__9zNPCJellyFf")

// func_8010898C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SetAlpha__9zNPCJellyFf")

// func_801089B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAnimSpd__9zNPCJellyFv")

// func_80108A30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PumpFaster__9zNPCJellyFv")

// func_80108ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyBoneWorldPos__9zNPCJellyCFP5xVec3i")

// func_80108BD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithLightnin__9zNPCJellyFv")

// func_80108C90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JELY_grul_getAngry__FP5xGoalPvP11en_trantypefPv")

// func_80108E54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ActLikeOctopus__9zNPCJellyFv")

// func_80108F04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s",                                                   \
                   "AnimPick__11zNPCNeptuneFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80108FD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ParseINI__11zNPCNeptuneFv")

// func_80109024
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__11zNPCNeptuneFv")

// func_8010905C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__11zNPCNeptuneFP6xScenef")

// func_80109224
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s",                                                   \
                   "AnimPick__12zNPCMimeFishFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010927C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__12zNPCMimeFishFv")

// func_801092B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__12zNPCMimeFishFP6xScenef")

// func_801092B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__12zNPCMimeFishFi")

// func_801092F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCNeptuneFi")

// func_8010932C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__9zNPCJellyFi")

// func_80109368
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCAmbientFi")

// func_801093A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AmbiHandleMail__11zNPCAmbientFP6NPCMsg")

// func_801093AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "IsAlive__9zNPCJellyFv")

// func_801093C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__12zNPCMimeFishFv")

// func_801093C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkFlags__11zNPCAmbientCFv")

// func_801093CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenFlags__11zNPCAmbientCFv")

// func_801093D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkByFlags__11zNPCAmbientCFv")

// func_801093DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenByFlags__11zNPCAmbientCFv")

// func_801093E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PhysicsFlags__11zNPCAmbientCFv")

// func_801093EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__11zNPCNeptuneFv")

// func_801093F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkFlags__11zNPCNeptuneCFv")

// func_801093F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenFlags__11zNPCNeptuneCFv")

// func_80109400
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkByFlags__11zNPCNeptuneCFv")

// func_80109408
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenByFlags__11zNPCNeptuneCFv")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_80109474
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
