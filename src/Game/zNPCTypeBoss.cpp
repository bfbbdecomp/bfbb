#include "zNPCTypeBoss.h"

#include "zNPCTypes.h"
#include "zNPCTypeBossSandy.h"
#include "zNPCTypeBossPatrick.h"
#include "zNPCTypeBossSB1.h"
#include "zNPCTypeBossSB2.h"
#include "zNPCTypeBossPlankton.h"

#include "../Core/x/xString.h"

#define ANIM_COUNT 78

uint32 g_hash_bossanim[ANIM_COUNT] = {};

// clang-format off
const char* g_strz_bossanim[ANIM_COUNT] =
{
    "Unknown",
    "Idle01",
    "Idle02",
    "Taunt01",
    "Run01",
    "Walk01",
    "Melee01",
    "Hit01",
    "Hit02",
    "GetUp01",
    "Dizzy01",
    "ElbowDrop01",
    "Leap01",
    "Leap02",
    "Leap03",
    "Leap04",
    "Sit01",
    "SitShock01",
    "CLBegin01",
    "CLLoop01",
    "CLEnd01",
    "NoHeadIdle01",
    "NoHeadWaving01",
    "NoHeadGetUp01",
    "NoHeadShotUp01",
    "NoHeadShock01",
    "NoHeadReplace01",
    "NoHeadHit01",
    "Freeze01",
    "FudgeJump01",
    "FudgeBlow01",
    "FudgeDone01",
    "Lick01",
    "Spit01",
    "Spit02",
    "Spawn01",
    "SpinBegin01",
    "Spinning01",
    "SpinStop01",
    "DizzyFall01",
    "DizzySit01",
    "SmashStart",
    "SmashLoop",
    "SmashEnd",
    "AttackStomp",
    "AttackRumble",
    "SmashHitLeft",
    "SmashHitRight",
    "SmackLeft01",
    "SmackRight01",
    "ChopLeftBegin",
    "ChopLeftLoop",
    "ChopLeftEnd",
    "ChopRightBegin",
    "ChopRightLoop",
    "ChopRightEnd",
    "SwipeLeftBegin",
    "SwipeLeftLoop",
    "SwipeLeftEnd",
    "SwipeRightBegin",
    "SwipeRightLoop",
    "SwipeRightEnd",
    "ReturnIdle01",
    "KarateStart",
    "KarateLoop",
    "KarateEnd",
    "move",
    "stun_begin",
    "stun_loop",
    "stun_end",
    "attack_beam_begin",
    "attack_beam_loop",
    "attack_beam_end",
    "attack_wall_begin",
    "attack_wall_loop",
    "attack_wall_end",
    "attack_missle",
#if 1
    "attack_bomb\0zNPCBBobbyArm\0PAREMIT_CLOUD"
#else
    "attack_bomb"
#endif
};
// clang-format on

static int32 g_boss_is_in_the_house = 0;
static zParEmitter* g_pemit_holder = NULL;
static xParEmitterCustomSettings g_parf_holder;

extern int32 _917_0[2];
extern float32 _920_2;
extern float32 _921_2;
extern float32 _922_0;
extern float32 _947_3;

void ZNPC_Boss_Startup()
{
    for (int32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_bossanim[i] = xStrHash(g_strz_bossanim[i]);
    }
}

void ZNPC_Boss_Shutdown()
{
}

void zNPCBoss_ScenePrepare()
{
    g_boss_is_in_the_house = 1;
}

void zNPCBoss_SceneFinish()
{
    g_boss_is_in_the_house = 0;
}

xFactoryInst* ZNPC_Create_Boss(int32 who, RyzMemGrow* grow, void*)
{
    zNPCBoss* boss;

    switch (who)
    {
    case NPC_TYPE_BOSSSANDY:
    {
        boss = new (who, grow) zNPCBSandy(who);
        break;
    }
    case NPC_TYPE_BOSSPAT:
    {
        boss = new (who, grow) zNPCBPatrick(who);
        break;
    }
    case NPC_TYPE_BOSS_SB1:
    {
        boss = new (who, grow) zNPCB_SB1(who);
        break;
    }
    case NPC_TYPE_BOSSBOBBY:
    {
        boss = new (who, grow) zNPCB_SB2(who);
        break;
    }
    case NPC_TYPE_BOSSPLANKTON:
    {
        boss = new (who, grow) zNPCBPlankton(who);
        break;
    }
    default:
    {
        boss = new (who, grow) zNPCBoss(who);
        break;
    }
    }

    return boss;
}

void ZNPC_Destroy_Boss(xFactoryInst* inst)
{
    delete inst;
}

#ifdef NON_MATCHING
xAnimTable* ZNPC_AnimTable_BossSBobbyArm()
{
    // non-matching: surprisingly the floats in this function are fine
    // r4 and r5 is swapped for some reason during the ourAnims assignment
    xAnimTable* table;
    int32 ourAnims[2] = { 1, 0 };

    table = xAnimTableNew("zNPCBBobbyArm", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[1], 0x10, 0, _920_2, NULL, NULL, _921_2, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, (char**)g_strz_bossanim, ourAnims, 1, _922_0);

    return table;
}
#endif

void BOSS_InitEffects();

void zNPCBoss::Setup()
{
    zNPCCommon::Setup();

    if (g_boss_is_in_the_house)
    {
        g_boss_is_in_the_house = 0;
        BOSS_InitEffects();
    }
}

#ifdef NON_MATCHING
void BOSS_InitEffects()
{
    // non-matching: scheduling
    g_pemit_holder = zParEmitterFind("PAREMIT_CLOUD");
    g_parf_holder.custom_flags = 0x100;
}
#endif

zNPCBoss::zNPCBoss(int32 myType) : zNPCCommon(myType)
{
}

zNPCB_SB1::zNPCB_SB1(int32 myType) : zNPCBoss(myType)
{
}

zNPCBPatrick::zNPCBPatrick(int32 myType) : zNPCBoss(myType)
{
}

zNPCBSandy::zNPCBSandy(int32 myType) : zNPCBoss(myType)
{
}

uint8 zNPCBoss::ColChkFlags() const
{
    return XENT_COLLTYPE_NONE;
}

uint8 zNPCBoss::ColPenFlags() const
{
    return XENT_COLLTYPE_NONE;
}

uint8 zNPCBoss::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR;
}

uint8 zNPCBoss::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR;
}

uint8 zNPCBoss::PhysicsFlags() const
{
    return 0x3;
}

float32 zNPCBoss::AttackTimeLeft()
{
    return _947_3;
}

void zNPCBoss::HoldUpDude()
{
}

void zNPCBoss::ThanksImDone()
{
}

zNPCB_SB2::zNPCB_SB2(int32 myType) : zNPCBoss(myType)
{
}
