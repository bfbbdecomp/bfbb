#include <types.h>

#include "xVec3.h"
#include "xMath3.h"

#include "zGlobals.h"
#include "zNPCGoalAmbient.h"
#include "zNPCSndLists.h"
#include "zNPCTypeAmbient.h"
#include "zNPCTypes.h"
#include <xutil.h>
#include "xMathInlines.h"
#include "zNPCGoals.h"
#include "zGrid.h"

U32 g_hash_ambianim[12] = { 0 };
char* g_strz_ambianim[12] = {
    "Unknown",  "Idle01", "Idle02",   "Idle03",  "Fidget01", "Fidget02",
    "Fidget03", "Move01", "Bumped01", "Dance01", "Pray01",   "Attack01",
};
extern zGlobals globals;
extern F32 zNPCTypeAmbientx40600000;
extern F32 zNPCTypeAmbientx405f66f3;
extern F32 zNPCTypeAmbientx3f400000;
extern F32 zNPCTypeAmbientx3edf66f3;

void ZNPC_Ambient_Startup()
{
    S32 i = 0;

    do
    {
        g_hash_ambianim[i] = xStrHash(g_strz_ambianim[i]);
        i++;
    } while (i < 12); // using sizeof makes it not match
}

void ZNPC_Ambient_Shutdown()
{
}

xFactoryInst* ZNPC_Create_Ambient(S32 who, RyzMemGrow* grow, void*)
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
    xAnimTable* table = (xAnimTable*)xAnimTableNew("zNPCAmbient", NULL, 0);
    xAnimTableNewState(table, g_strz_ambianim[1], 0x110, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

xAnimTable* ZNPC_AnimTable_Jelly()
{
    xAnimTable* table = (xAnimTable*)xAnimTableNew("zNPCJelly", NULL, 0);

    S32 local_887[] = {
        1, 7, 4, 8, 11, 0,
    };

#define f882 1.0f
#define f883 0.0f

    xAnimTableNewState(table, g_strz_ambianim[1], 0x110, 1, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[7], 0x110, 1, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[4], 0x20, 1, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[8], 0x10, 1, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[11], 0x10, 1, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);

    NPCC_BuildStandardAnimTran(table, g_strz_ambianim, local_887, 1, 0.2f);

    return table;
}

xAnimTable* ZNPC_AnimTable_Neptune()
{
    S32 local_48[] = {
        1, 2, 3, 4, 5, 6, 0,
    };

    xAnimTable* table = (xAnimTable*)xAnimTableNew("zNPCNeptune", NULL, 0);

#define f903 0.5f

    xAnimTableNewState(table, g_strz_ambianim[1], 0x10, 0, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[2], 0x10, 0, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[3], 0x10, 0, f882, 0x0, 0x0, f883, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[4], 0x20, 0, f882, 0x0, 0x0, f883, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[5], 0x20, 0, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_ambianim[6], 0x20, 0, f882, 0, 0, f883, 0, 0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    NPCC_BuildStandardAnimTran(table, g_strz_ambianim, local_48, 1, f903);

    xAnimTableNewTransition(table, g_strz_ambianim[4], g_strz_ambianim[1], 0x0, 0x0, 0x10, 0, f883,
                            f883, 0, 0, f903, 0x0);
    xAnimTableNewTransition(table, g_strz_ambianim[5], g_strz_ambianim[2], 0x0, 0x0, 0x10, 0, f883,
                            f883, 0, 0, f903, 0x0);
    xAnimTableNewTransition(table, g_strz_ambianim[6], g_strz_ambianim[3], 0x0, 0x0, 0x10, 0, f883,
                            f883, 0, 0, f903, 0x0);

    return table;
}

void zNPCAmbient::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    if (cfg_npc->dst_castShadow < 0.0f)
    {
        cfg_npc->dst_castShadow = 1.0f;
    }
}

void zNPCAmbient::Reset()
{
    zNPCCommon::Reset();
    if (psy_instinct != NULL)
    {
        psy_instinct->GoalSet('NGN0', 1);
    }
}

void zNPCAmbient::Process(xScene* xscn, F32 dt)
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
    psy->AddGoal(NPC_GOAL_IDLE, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
}

U32 zNPCAmbient::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    S32 idx;
    U32 yeah = 0;

    switch (gid)
    {
    case 'NGN0':
    case 'NGN6':
    case 'NGN7':
        idx = 1;
        break;
    default:
        idx = 1;
        break;
    }

    if (idx >= 0)
    {
        yeah = g_hash_ambianim[idx];
    }

    return yeah;
}

S32 zNPCAmbient::NPCMessage(NPCMsg* mail)
{
    xPsyche* psy = psy_instinct;
    if (psy != NULL)
    {
        if (psy->GetCurGoal() != NULL)
        {
        }
    }
    return 0;
}

void zNPCJelly::Init(xEntAsset* asset)
{
    zNPCAmbient::Init(asset);
    flg_move = flg_move | 4;
    flg_vuln = 0xffffffff;
    flg_vuln = flg_vuln & 0x9effffef;
}

void zNPCJelly::ParseINI()
{
    S32 selfType;

    zNPCCommon::ParseINI();
    cfg_npc->snd_trax = g_sndTrax_Jelly;
    NPCS_SndTablePrepare(g_sndTrax_Jelly);
    selfType = xNPCBasic::SelfType();
    if (selfType == NPC_TYPE_JELLYBLUE)
    {
        cfg_npc->spd_moveMax = 3.5f; //zNPCTypeAmbientx40600000;
        cfg_npc->spd_turnMax = 3.4906585f; //zNPCTypeAmbientx405f66f3;
    }
    else if (selfType == NPC_TYPE_JELLYPINK)
    {
        if (globals.sceneCur->sceneID == 'JF04') //DAT_803c2518 is globals.sceneCur->sceneID
        {
            cfg_npc->spd_moveMax = 3.5f; //zNPCTypeAmbientx40600000;
            cfg_npc->spd_turnMax = 3.4906585f; //zNPCTypeAmbientx405f66f3;
        }
        else
        {
            cfg_npc->spd_moveMax = 0.75f; //zNPCTypeAmbientx3f400000;
            cfg_npc->spd_turnMax = 0.43633232f; //zNPCTypeAmbientx3edf66f3;
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
        psy_instinct->GoalSet(NPC_GOAL_DEAD, 1);
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
    psy->AddGoal(NPC_GOAL_JELLYBUMPED, NULL);
    psy->AddGoal(NPC_GOAL_JELLYATTACK, NULL);
    psy->AddGoal(NPC_GOAL_JELLYBIRTH, NULL);
    psy->AddGoal(NPC_GOAL_DEAD, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
}

void zNPCJelly::JellySpawn(const xVec3* pos_spawn, F32 tym_fall)
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
    if (psy && !psy->GIDInStack(NPC_GOAL_DEAD))
    {
        hitpoints = 0;
        psy->GoalSet(NPC_GOAL_DEAD, 0);
    }
}

U32 zNPCJelly::AnimPick(S32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    U32 r8 = 0;
    S32 r31 = -1;

    switch (animID)
    {
    case 'NGN0': // 8c
    {
        r31 = 1;
        break;
    }
    case 'NGN3': // 94
    {
        r31 = 4;
        break;
    }
    case 'NGN1': // 9c
    case 'NGN2': // 9c
    {
        r31 = 7;
        break;
    }
    case 'NGN5': // a4
    {
        r31 = 1;
        break;
    }
    case 'NGJ2': // ac
    {
        r31 = 1;
        break;
    }
    case 'NGJ1': // b4
    {
        r31 = 8;
        break;
    }
    case 'NGJ0': // bc
    {
        r31 = 11;
        break;
    }
    default: // c4
    {
        r8 = this->zNPCAmbient::AnimPick(animID, gspot, goal);
        break;
    }
    }

    if (r31 >= 0)
    {
        r8 = g_hash_ambianim[r31];
    }

    return r8;
}

// Non-match
void zNPCJelly::BUpdate(xVec3*)
{
    xVec3 pos_bnd;
    static const xVec3 vec_offset = { 0.0f, 0.0f, 0.0f };

    xVec3* pos = (xVec3*)this->zNPCCommon::BonePos(2);

    // Not sure about this.
    // zNPCCommon::BonePos is not in DWARF.
    // The decompiled code looks like it returns a vec3
    // So I assumed that was its return type
    // and this code looks like it's using the x,y,z of that
    // but for some reason the compiler generated lwz instead of lfs
    // and stw instead of stfs
    pos_bnd.x = pos->x;
    pos_bnd.y = pos->y;
    pos_bnd.z = pos->z;

    pos_bnd += vec_offset;

    xMat3x3RMulVec(&pos_bnd, (xMat3x3*)this->zNPCCommon::BoneMat(0), pos);

    pos_bnd += *((xVec3*)this->zNPCCommon::BonePos(0));
    this->bound.sph.center = pos_bnd;

    this->bound.sph.r = 0.5f; // @903 // Could be sph or cyl
    xQuickCullForBound(&this->bound.qcd, &this->bound);

    zGridUpdateEnt(this);
}

void zNPCJelly::ActLikeOctopus()
{
    if ((int)this->model->Data->geometry->numVertices >= 1)
    {
        S32 supertemp = (this->model->Data->geometry->numVertices >> 4);
        int tempvar;
        if (supertemp >= 0)
        {
            tempvar = supertemp;
        }

        for (U32 i = 0; this->model->Data->geometry->numVertices > i; i = i + tempvar)
        {
            iModelVertEval(model->Data, i, 1, model->Mat, NULL, NULL);
            zFX_SpawnBubbleTrail(&this->bound.sph.center, 4);
        }
    }
}

U32 zNPCNeptune::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    return 0;
}

void zNPCNeptune::ParseINI()
{
    zNPCAmbient::ParseINI();
    cfg_npc->snd_traxShare = NULL;
    cfg_npc->snd_trax = g_sndTrax_Neptune;
    NPCS_SndTablePrepare(g_sndTrax_Neptune);
}

void zNPCNeptune::Reset()
{
    zNPCAmbient::Reset();
    flags |= 0x40;
}

void zNPCMimeFish::Reset()
{
    zNPCAmbient::Reset();
    flg_move = 1;
}

void zNPCJelly::Process(xScene* xscn, F32 dt)
{
    this->zNPCAmbient::Process(xscn, dt);

    if (this->IsAlive())
    {
        this->PlayWithAlpha(dt);
        this->PlayWithAnimSpd();

        xPsyche* psy = this->psy_instinct;

        S32 flg_wonder = this->SomethingWonderful();

        if (xEntIsVisible(this))
        {
            if (xUtil_yesno(0.05f) && psy->GIDOfActive() != NPC_GOAL_DEAD)
            {
                this->PlayWithLightnin();
            }
        }
    }
}

S32 zNPCJelly::AmbiHandleMail(NPCMsg* msg)
{
    S32 handled = 1;
    xPsyche* psy = this->psy_instinct;

    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
    {
        if (psy && hitpoints >= 1)
        {
            if (msg->dmgdata.dmg_type == DMGTYP_CRUISEBUBBLE)
            {
                this->hitpoints = this->hitpoints < 1 ? this->hitpoints : 1;
            }

            if (psy->GIDInStack(NPC_GOAL_JELLYBUMPED))
            {
                break;
            }

            if (psy->GIDInStack(NPC_GOAL_FIDGET))
            {
                psy->GoalSwap(NPC_GOAL_JELLYBUMPED, 0);
            }
            else if (psy->GIDInStack(NPC_GOAL_JELLYATTACK))
            {
                psy->GoalSet(NPC_GOAL_IDLE, 0);
                psy->GoalPush(NPC_GOAL_JELLYBUMPED, 0);
            }
            else
            {
                psy->GoalPush(NPC_GOAL_JELLYBUMPED, 0);
            }
        }

        break;
    }
    default:
    {
        handled = 0;
        break;
    }
    }

    return handled;
}

void zNPCJelly::PlayWithAlpha(F32 dt)
{
}

void zNPCJelly::SetAlpha(F32 alpha)
{
    xModelInstance* model = this->model;

    for (model; model != NULL; model = model->Next)
    {
        model->Flags |= 0x4000;
        model->Alpha = alpha;
    }
}

void zNPCJelly::PlayWithAnimSpd()
{
    const S32 arr[3] = {
        0x4e474e32, // 'NGN2'
        0x4e474e31, // 'NGN1'
        0,
    };

    S32 gid = this->psy_instinct->GIDOfActive();

    for (const S32* i = arr; *i != 0; i++)
    {
        if (gid == *i)
        {
            this->PumpFaster();
            break;
        }
    }
}

void zNPCJelly::PumpFaster()
{
    // 0x18
    // 0x1d8 cfg_npc

    F32 spd = 4.0f;

    F32 dvar3;
    F32 dvar4;

    if (cfg_npc->spd_moveMax > spd)
    {
        spd = cfg_npc->spd_moveMax;
    }
    dvar3 = this->spd_throttle / spd;
    dvar4 = 1.0;
    if (dvar3 < 1.0f)
    {
        dvar4 = dvar3;
    }
    if (dvar4 > 0.0f)
    {
        dvar4 = 1.0f;
        if (dvar3 < dvar4)
        {
            dvar4 = dvar3;
        }
    }
    else
    {
        dvar4 = 0.0f;
    }
    dvar4 = SMOOTH(dvar4, 1.0f, 2.5f);

    AnimCurSingle();
}

void zNPCJelly::JellyBoneWorldPos(xVec3* pos, S32 idx_request) const
{
    S32 idx;
    xVec3 pos_place;
}

void zNPCJelly::PlayWithLightnin()
{
}

U32 zNPCMimeFish::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    S32 idx;
    U32 yeah = 0;

    switch (gid)
    {
    case 'NGN0':
        idx = 1;
        break;
    case 'NGN3':
        idx = 1;
        break;
    default:
        idx = 1;
        break;
    }

    if (idx >= 0)
    {
        yeah = g_hash_ambianim[idx];
    }

    return yeah;
}

void zNPCMimeFish::Process(xScene* xscn, F32 dt)
{
}

S32 zNPCAmbient::AmbiHandleMail(NPCMsg msg)
{
    return 0;
}

S32 zNPCJelly::IsAlive()
{
    return (-(U32)hitpoints & ~(U32)hitpoints) >> 0x1f;
}

void zNPCMimeFish::SelfSetup()
{
}

U8 zNPCAmbient::ColChkFlags() const
{
    return 0;
}

U8 zNPCAmbient::ColPenFlags() const
{
    return 0;
}

U8 zNPCAmbient::ColChkByFlags() const
{
    return 0x18;
}

U8 zNPCAmbient::ColPenByFlags() const
{
    return 0x18;
}

U8 zNPCAmbient::PhysicsFlags()
{
    return 3;
}

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCNeptune::SelfSetup()
{
}
*/

U8 zNPCNeptune::ColChkFlags() const
{
    return 0;
}

U8 zNPCNeptune::ColPenFlags() const
{
    return 0;
}

U8 zNPCNeptune::ColChkByFlags() const
{
    return 0;
}

U8 zNPCNeptune::ColPenByFlags() const
{
    return 0;
}

void zNPCNeptune::SelfSetup()
{
}

S32 zNPCAmbient::AmbiHandleMail(NPCMsg*)
{
    return 0;
}
