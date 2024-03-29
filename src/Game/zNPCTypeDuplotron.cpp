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

// func_801251BC
void ZNPC_Duplotron_Startup()
{
    for (int i = 0; i < 5; i++)
    {
        g_hash_dupoanim[i] = xStrHash(g_strz_dupoanim[i]);
    }
}

// func_80125224
void ZNPC_Duplotron_Shutdown()
{
}

// func_80125228
void ZNPC_Duplotron_ScenePrepare()
{
}

// func_8012522C
void zNPCDuplotron_SceneFinish()
{
    DUPO_KillEffects();
}

// func_8012524C
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

// func_80125328
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_AnimTable_Duplotron__Fv")

// func_801254F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Init__13zNPCDuplotronFP9xEntAsset")

// func_80125554
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Setup__13zNPCDuplotronFv")

// func_80125618
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseINI__13zNPCDuplotronFv")

// func_80125638
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Reset__13zNPCDuplotronFv")

// func_80125694
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseLinks__13zNPCDuplotronFv")

// func_80125738
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "BUpdate__13zNPCDuplotronFP5xVec3")

// func_80125758
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseChild__13zNPCDuplotronFP5xBase")

// func_80125864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "Process__13zNPCDuplotronFP6xScenef")

// func_801258DC
#if 1
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "SelfSetup__13zNPCDuplotronFv")
#else
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

// func_80125978
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s",                                                 \
                   "AnimPick__13zNPCDuplotronFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80125A38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DuploNotice__13zNPCDuplotronF13en_SM_NOTICESPv")

// func_80125A64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "IsAlive__13zNPCDuplotronFv")

// func_80125AA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "NPCMessage__13zNPCDuplotronFP6NPCMsg")

// func_80125B7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DupoHandleMail__13zNPCDuplotronFP6NPCMsg")

// func_80125CA4
#if 1
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DUPO_InitEffects__Fv")
#else
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

// func_80125D88
void DUPO_KillEffects()
{
}

// func_80125D8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXSmokeStack__13zNPCDuplotronFf")

// func_80125F74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXOverheat__13zNPCDuplotronFff")

// func_80126138
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXCycleLights__13zNPCDuplotronFfi")

// func_801262F4
zNPCDuplotron::zNPCDuplotron(int32 myType) 
    : zNPCCommon(myType)
{
}

// func_80126330
void zNPCDuplotron::Move(xScene*, float32, xEntFrame*)
{
}

// func_80126334
uint8 zNPCDuplotron::ColChkFlags() const
{
    return 0;
}

// func_8012633C
uint8 zNPCDuplotron::ColPenFlags() const
{
    return 0;
}

// func_80126344
uint8 zNPCDuplotron::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

// func_8012634C
uint8 zNPCDuplotron::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

// func_80126354
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
