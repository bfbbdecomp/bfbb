#include "zNPCTypeTiki.h"

#include "zNPCTypes.h"

#include "../Core/x/xString.h"
#include "../Core/x/xutil.h"
#include "../Core/x/xMath.h"

#define ANIM_COUNT 2

extern const char* g_strz_tikianim[ANIM_COUNT];
extern uint32 g_hash_tikianim[ANIM_COUNT];
extern zParEmitter* cloudEmitter;
extern xParEmitterCustomSettings thunderEmitterInfo;
extern char zNPCTypeTiki_stringBase0[];
extern float32 _862;
extern float32 _858;
extern float32 _1084;
extern float32 _867;
extern NPCSndTrax g_sndTrax_TikiShared[3];
extern NPCSndTrax g_sndTrax_TikiThunder[2];

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

/* need to do more of this
void zNPCTiki_InitFX(zScene* scene)
{
    RwTexture* tex;

    cloudEmitter = zParEmitterFind("PAREMIT_THUNDER_CLOUD");
    if (cloudEmitter == 0)
    {
        cloudEmitter = zParEmitterFind("PAREMIT_CLOUD");
    }

    thunderEmitterInfo.custom_flags = 0xf5e;
    thunderEmitterInfo.vel.x = 0;
    thunderEmitterInfo.vel.y = 0xbe99999a;
    thunderEmitterInfo.vel.z = 0;
    thunderEmitterInfo.vel_angle_variation = 0x4096cbe4;
}
*/

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

xAnimTable* ZNPC_AnimTable_Tiki()
{
    xAnimTable* table;

    table = xAnimTableNew(zNPCTypeTiki_stringBase0 + 0x3a, NULL, 0);
    xAnimTableNewState(table, g_strz_tikianim[1], 0x110, 1, _862, NULL, NULL, _858, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

void zNPCTiki::Reset()
{
    zNPCCommon::Reset();

    xVec3Add((xVec3*)&bound.sph.r, (xVec3*)&origLocalBound.sph.r, (xVec3*)&model->Mat->pos);
    xVec3Add((xVec3*)&bound.box.box.lower, (xVec3*)&origLocalBound.box.box.lower,
             (xVec3*)&model->Mat->pos);
    xVec3Add((xVec3*)&bound.pad[3], (xVec3*)&origLocalBound.pad[3], (xVec3*)&model->Mat->pos);

    xNPCBasic::RestoreColFlags();

    if (myNPCType == 'NTT4')
    {
        flg_vuln = 1;
    }
    else
    {
        flg_vuln = 0xffff0001;
    }

    timeToLive = _858;
    tikiFlag = 0;
    parents[0] = NULL;
    parents[1] = NULL;
    parents[2] = NULL;
    parents[3] = NULL;
    numParents = 0;
    contactParent = 0xffffffff;

    children[0] = NULL;
    children[1] = NULL;
    children[2] = NULL;
    children[3] = NULL;
    numChildren = NULL;
    vel = _858;
    nonTikiParent = NULL;

    switch (myNPCType)
    {
    case 'NTT2':
        break;
    case 'NTT1':
        t1 = _858;
        t2 = _1084;
        t3 = _1084;
        xVec3Copy((xVec3*)&v1, (xVec3*)&model->Mat->pos);
        break;
    case 0x4e545433:
        t1 = xurand();
        t2 = _867;
        t3 = _867;
        break;
    default:
        break;
    }

    psy_instinct->GoalSet('NGT0', 1);
    model->RedMultiplier = _862;
    model->BlueMultiplier = _862;
    model->GreenMultiplier = _862;
}

void zNPCTiki::Setup()
{
    zNPCCommon::Setup();

    xVec3Copy((xVec3*)&lastAt, (xVec3*)&model->Mat->at);
}

// func_8010A31C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Init__8zNPCTikiFP9xEntAsset")

// func_8010A530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s",                                                      \
                   "Damage__8zNPCTikiF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_8010A5BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SetCarryState__8zNPCTikiF18en_NPC_CARRY_STATE")

// func_8010A7F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SelfSetup__8zNPCTikiFv")

void zNPCTiki::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_TikiShared;
    NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_TikiShared);
    switch (xNPCBasic::SelfType())
    {
    case 'NTT3':
        cfg_npc->snd_trax = g_sndTrax_TikiThunder;
        NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_TikiThunder);
        break;
    }
}

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

int32 zNPCTiki::CanRope()
{
    return 1;
}

void AnimPick()
{
    xStrHash(zNPCTypeTiki_stringBase0 + 0x51);
}

void zNPCTiki::Move(xScene* xscn, float32 dt, xEntFrame*)
{
}

void zNPCTiki::BUpdate(xVec3* pos)
{
    xEntDefaultBoundUpdate(this, pos);
}

int32 zNPCTiki::IsAlive()
{
    return (0x200 - (tikiFlag & 0x300) | (tikiFlag & 0x300) - 0x200) >> 0x1f;
}

uint8 ColChkFlags()
{
    return 0;
}

uint8 ColPenFlags()
{
    return 0;
}

uint8 ColChkByFlags()
{
    return 0x18;
}

uint8 ColPenByFlags()
{
    return 0x18;
}

uint8 PhysicsFlags()
{
    return 0;
}