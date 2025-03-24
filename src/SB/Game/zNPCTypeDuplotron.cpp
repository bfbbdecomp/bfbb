#include "zNPCTypeDuplotron.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"
#include "xMath3.h"

#include "xstransvc.h"

#define ANIM_Unk1 1
#define ANIM_Unk2 2
#define ANIM_Unk3 3 // TEMP NAMES
#define ANIM_Unk4 4
#define ANIM_UNKNOWN 5

extern U32 g_hash_dupoanim[5];
extern char* g_strz_dupoanim[5];

extern zParEmitter* g_pemit_smoky;
extern zParEmitter* g_pemit_steam;
extern zParEmitter* g_pemit_overheat;
extern xParEmitterCustomSettings g_parf_smoky;
extern xParEmitterCustomSettings g_parf_steam;
extern xParEmitterCustomSettings g_parf_overheat;

extern char* zNPCTypeDuplotron_strings[];

void ZNPC_Duplotron_Startup()
{
    for (int i = 0; i < 5; i++)
    {
        g_hash_dupoanim[i] = xStrHash(g_strz_dupoanim[i]);
    }
}

void ZNPC_Duplotron_Shutdown()
{
}

void ZNPC_Duplotron_ScenePrepare()
{
}

void zNPCDuplotron_SceneFinish()
{
    DUPO_KillEffects();
}

void zNPCDuplotron_ScenePostInit()
{
    DUPO_InitEffects();
}

void zNPCDuplotron_ScenePrepare()
{
}

xFactoryInst* ZNPC_Create_Duplotron(S32 who, RyzMemGrow* grow, void*)
{
    zNPCDuplotron* npc;

    switch (who)
    {
    case NPC_TYPE_DUPLOTRON:
    {
        npc = new (who, grow) zNPCDuplotron(who);
        break;
    }
    default:
    {
        npc = new (who, grow) zNPCDuplotron(who);
        break;
    }
    }

    return npc;
}

void ZNPC_Destroy_Duplotron(xFactoryInst* inst)
{
    delete inst;
}

xAnimTable* ZNPC_AnimTable_Duplotron()
{
    S32 ourAnims[5] = { //Literally no clue what the names should be.
                        ANIM_Unk1, ANIM_Unk2, ANIM_Unk3, ANIM_Unk4, ANIM_UNKNOWN
    };

    xAnimTable* table = xAnimTableNew("zNPCDupltron", NULL, 0);

    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Unk1], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Unk2], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, //Needs a bit of attention
                       xAnimDefaultBeforeEnter, NULL,
                       NULL); //Only pushing cus im done with it for now
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Unk3], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Unk4], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_dupoanim, ourAnims, 1, 0.2);
}

void zNPCDuplotron::ParseINI()
{
    zNPCCommon::ParseINI();
}

void zNPCDuplotron::BUpdate(xVec3* pos)
{
    zNPCCommon::BUpdate(pos);
}

// 100% match that needs the full vtable to be filled out
// because it induces vtable generation
void zNPCDuplotron::SelfSetup()
{
    psy_instinct = xBehaveMgr_GetSelf()->Subscribe(this, 0);
    xPsyche* psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal(0x4E474430, NULL);
    psy->AddGoal(0x4E474431, NULL);
    psy->AddGoal(0x4E474E37, NULL);
    psy->BrainEnd();
    psy->SetSafety(0x4E474430);
}

S32 zNPCDuplotron::IsAlive()
{
    xPsyche* psy = this->psy_instinct;
    psy->GIDOfActive();
}

// non-matching: scheduling?
void DUPO_InitEffects()
{
    g_pemit_smoky = zParEmitterFind(zNPCTypeDuplotron_strings[7]); // "PAREMIT_DUPLO_SMOKE"
    g_pemit_steam = zParEmitterFind(zNPCTypeDuplotron_strings[8]); // "PAREMIT_DUPLO_STEAM"
    g_pemit_overheat = zParEmitterFind(zNPCTypeDuplotron_strings[9]); // "PAREMIT_DUPLO_OVERHEAT"

    g_parf_smoky.custom_flags = 0x100;
    xVec3Copy(&g_parf_smoky.pos, &g_O3);

    g_parf_steam.custom_flags = 0x300;
    xVec3Copy(&g_parf_steam.pos, &g_O3);
    xVec3Copy(&g_parf_steam.vel, &g_Y3);

    g_parf_overheat.custom_flags = 0x300;
    xVec3Copy(&g_parf_overheat.pos, &g_O3);
    xVec3Copy(&g_parf_overheat.vel, &g_Y3);
}

void DUPO_KillEffects()
{
}

zNPCDuplotron::zNPCDuplotron(S32 myType) : zNPCCommon(myType)
{
}

void zNPCDuplotron::Move(xScene*, F32, xEntFrame*)
{
}

U8 zNPCDuplotron::ColChkFlags() const
{
    return 0;
}

U8 zNPCDuplotron::ColPenFlags() const
{
    return 0;
}

U8 zNPCDuplotron::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

U8 zNPCDuplotron::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

U8 zNPCDuplotron::PhysicsFlags() const
{
    return 0;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
