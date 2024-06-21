#include "zNPCTypeDuplotron.h"
#include "zNPCTypes.h"
#include "../Core/x/xMath3.h"

#include "../Core/x/xstransvc.h"

extern uint32 g_hash_dupoanim[5];
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

xFactoryInst* ZNPC_Create_Duplotron(int32 who, RyzMemGrow* grow, void*)
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





























#if 0
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
#endif



                   














#if 0
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
#endif


void DUPO_KillEffects()
{
}











zNPCDuplotron::zNPCDuplotron(int32 myType) 
    : zNPCCommon(myType)
{
}


void zNPCDuplotron::Move(xScene*, float32, xEntFrame*)
{
}


uint8 zNPCDuplotron::ColChkFlags() const
{
    return 0;
}


uint8 zNPCDuplotron::ColPenFlags() const
{
    return 0;
}


uint8 zNPCDuplotron::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}


uint8 zNPCDuplotron::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}


uint8 zNPCDuplotron::PhysicsFlags() const
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
