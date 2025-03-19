#include "zNPCTypeSubBoss.h"

#include "zNPCTypes.h"
#include "zNPCTypeKingJelly.h"
#include "zNPCTypeDutchman.h"
#include "zNPCTypePrawn.h"

#define ANIM_COUNT 23

U32 g_hash_subbanim[ANIM_COUNT] = {};

void foo(zNPCKingJelly* jelly)
{
}

// clang-format off
char* g_strz_subbanim[ANIM_COUNT] =
{
    "Unknown",
    "Idle01",
    "Idle02",
    "Idle03",
    "Fidget01",
    "Fidget02",
    "Fidget03",
    "Taunt01",
    "Attack01",
    "Damage01",
    "Damage02",
    "Death01",
    "AttackWindup01",
    "AttackLoop01",
    "AttackEnd01",
    "SpawnKids01",
    "Attack02Windup01",
    "Attack02Loop01",
    "Attack02End01",
    "LassoGrab01",
    "LassoHoldLeft01",
    "LassoHoldRight01",
#if 1 // needed until SUBB_InitEffects is matching
    "LassoFree01\0PAREMIT_CLOUD"
#else
    "LassoFree01"
#endif
};
// clang-format on

static S32 g_contract_for_hire = 0;
static zParEmitter* g_pemit_holder = NULL;
static xParEmitterCustomSettings g_parf_holder;

void ZNPC_SubBoss_Startup()
{
    for (S32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_subbanim[i] = xStrHash(g_strz_subbanim[i]);
    }
}

void ZNPC_SubBoss_Shutdown()
{
}

void zNPCSubBoss_ScenePrepare()
{
    g_contract_for_hire = 1;
}

void zNPCSubBoss_SceneFinish()
{
    g_contract_for_hire = 0;
}

xFactoryInst* ZNPC_Create_SubBoss(S32 who, RyzMemGrow* grow, void*)
{
    zNPCSubBoss* boss;

    switch (who)
    {
    case NPC_TYPE_KINGJELLY:
    {
        boss = new (who, grow) zNPCKingJelly(who);
        break;
    }
    case NPC_TYPE_DUTCHMAN:
    {
        boss = new (who, grow) zNPCDutchman(who);
        break;
    }
    case NPC_TYPE_PRAWN:
    {
        boss = new (who, grow) zNPCPrawn(who);
        break;
    }
    default:
    {
        boss = new (who, grow) zNPCSubBoss(who);
        break;
    }
    }

    return boss;
}

void ZNPC_Destroy_SubBoss(xFactoryInst* inst)
{
    delete inst;
}

void SUBB_InitEffects();

void zNPCSubBoss::Setup()
{
    zNPCCommon::Setup();

    if (g_contract_for_hire)
    {
        g_contract_for_hire = 0;
        SUBB_InitEffects();
    }
}

void SUBB_InitEffects()
{
    // non-matching: scheduling
    g_pemit_holder = zParEmitterFind("PAREMIT_CLOUD");
    g_parf_holder.custom_flags = 0x100;
}

zNPCSubBoss::zNPCSubBoss(S32 myType) : zNPCCommon(myType)
{
}

U8 zNPCSubBoss::ColChkFlags() const
{
    return XENT_COLLTYPE_NONE;
}

U8 zNPCSubBoss::ColPenFlags() const
{
    return XENT_COLLTYPE_NONE;
}

U8 zNPCSubBoss::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR;
}

U8 zNPCSubBoss::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR;
}

U8 zNPCSubBoss::PhysicsFlags() const
{
    return 0x3;
}
