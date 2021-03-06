#include <types.h>

#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"

#include "zGlobals.h"
#include "zNPCGoalAmbient.h"
#include "zNPCTypeAmbient.h"
#include "zNPCTypes.h"

extern int8* g_strz_ambianim[12];
extern int32 g_hash_ambianim[12];
extern NPCSndTrax g_sndTrax_Jelly[4];
extern zGlobals globals;
extern float32 zNPCTypeAmbientx40600000;
extern float32 zNPCTypeAmbientx405f66f3;
extern float32 zNPCTypeAmbientx3f400000;
extern float32 zNPCTypeAmbientx3edf66f3;
extern NPCSndTrax g_sndTrax_Neptune;
extern char zNPCTypeAmbient_stringBase0[];
extern float32 _882;
extern float32 _883;

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
xAnimTable* ZNPC_AnimTable_Ambient()
{
    xAnimTable* table = (xAnimTable*)xAnimTableNew(zNPCTypeAmbient_stringBase0 + 0x60, NULL, 0);
    xAnimTableNewState(table, g_strz_ambianim[1], 0x110, 1, _882, NULL, NULL, _883, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

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

void zNPCJelly::ParseINI()
{
    int32 selfType;

    zNPCCommon::ParseINI();
    cfg_npc->snd_trax = g_sndTrax_Jelly;
    NPCS_SndTablePrepare(g_sndTrax_Jelly);
    selfType = xNPCBasic::SelfType();
    if (selfType == 'NTA1')
    {
        cfg_npc->spd_moveMax = zNPCTypeAmbientx40600000;
        cfg_npc->spd_turnMax = zNPCTypeAmbientx405f66f3;
    }
    else if (selfType == 'NTA0')
    {
        if (globals.sceneCur->sceneID == 'JF04') //DAT_803c2518 is globals.sceneCur->sceneID
        {
            cfg_npc->spd_moveMax = zNPCTypeAmbientx40600000;
            cfg_npc->spd_turnMax = zNPCTypeAmbientx405f66f3;
        }
        else
        {
            cfg_npc->spd_moveMax = zNPCTypeAmbientx3f400000;
            cfg_npc->spd_turnMax = zNPCTypeAmbientx3edf66f3;
        }
    }
}

void zNPCJelly::Reset()
{
    zNPCAmbient::Reset();
    cnt_angerLevel = 0;
    hitpoints = cfg_npc->pts_damage;
    if (npc_daddyJelly != NULL)
    {
        hitpoints = 0;
        psy_instinct->GoalSet('NGN5', 1);
    }
}

void zNPCJelly::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;

    bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    psy = psy_instinct;
    psy->BrainBegin();
    zNPCCommon::AddBaseline(psy, JELY_grul_getAngry, JELY_grul_getAngry, JELY_grul_getAngry,
                            JELY_grul_getAngry, JELY_grul_getAngry);
    psy->AddGoal('NGJ1', NULL);
    psy->AddGoal('NGJ0', NULL);
    psy->AddGoal('NGJ2', NULL);
    psy->AddGoal('NGN5', NULL);
    psy->BrainEnd();
    psy->SetSafety('NGN0');
}

void zNPCJelly::JellySpawn(xVec3* pos_spawn, float32 tym_fall)
{
    xPsyche* psy;
    zNPCGoalJellyBirth* birth;

    psy = psy_instinct;
    birth = (zNPCGoalJellyBirth*)psy->FindGoal('NGJ2');
    birth->BirthInfoSet(pos_spawn, tym_fall);
    psy->GoalSet('NGJ2', 0);
}

void zNPCJelly::JellyKill()
{
    xPsyche* psy = psy_instinct;
    if (psy != NULL && psy->GIDInStack('NGN5') == 0)
    {
        hitpoints = 0;
        psy->GoalSet('NGN5', 0);
    }
}

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

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCNeptune::ParseINI()
{
    zNPCAmbient::ParseINI();
    cfg_npc->snd_traxShare = NULL;
    cfg_npc->snd_trax = &g_sndTrax_Neptune;
    NPCS_SndTablePrepare(&g_sndTrax_Neptune);
}
*/

// func_80108FD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ParseINI__11zNPCNeptuneFv")

#ifndef NON_MATCHING
// func_80109024
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__11zNPCNeptuneFv")
#else
void zNPCNeptune::Reset()
{
    zNPCAmbient::Reset();
    flags |= 0x40;
}
#endif

// func_8010905C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__11zNPCNeptuneFP6xScenef")

// func_80109224
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s",                                                   \
                   "AnimPick__12zNPCMimeFishFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010927C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__12zNPCMimeFishFv")

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCMimeFish::Reset()
{
    zNPCAmbient::Reset();
    flg_move = 1;
}
*/

// func_801092B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__12zNPCMimeFishFP6xScenef")

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCMimeFish::Process(xScene* xscn, float32 dt)
{
}
*/

// func_801092B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__12zNPCMimeFishFi")

// func_801092F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCNeptuneFi")

// func_8010932C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__9zNPCJellyFi")

// func_80109368
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCAmbientFi")

int32 zNPCAmbient::AmbiHandleMail(NPCMsg msg)
{
    return 0;
}

int32 zNPCJelly::IsAlive()
{
    return (-(uint32)hitpoints & ~(uint32)hitpoints) >> 0x1f;
}

void zNPCMimeFish::SelfSetup()
{
}

uint8 zNPCAmbient::ColChkFlags() const
{
    return 0;
}

uint8 zNPCAmbient::ColPenFlags() const
{
    return 0;
}

uint8 zNPCAmbient::ColChkByFlags() const
{
    return 0x18;
}

uint8 zNPCAmbient::ColPenByFlags() const
{
    return 0x18;
}

uint8 zNPCAmbient::PhysicsFlags()
{
    return 3;
}

// func_801093EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__11zNPCNeptuneFv")

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCNeptune::SelfSetup()
{
}
*/

uint8 zNPCNeptune::ColChkFlags() const
{
    return 0;
}

uint8 zNPCNeptune::ColPenFlags() const
{
    return 0;
}

uint8 zNPCNeptune::ColChkByFlags() const
{
    return 0;
}

uint8 zNPCNeptune::ColPenByFlags() const
{
    return 0;
}

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
