#include <types.h>

#include "xVec3.h"
#include "xBound.h"
#include "xMath3.h"

#include "zGlobals.h"
#include "zNPCGoalAmbient.h"
#include "zNPCTypeAmbient.h"
#include "zNPCTypes.h"
#include <xutil.h>
#include "zNPCGoals.h"
#include "zGrid.h"

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

xAnimTable* ZNPC_AnimTable_Jelly()
{
    xAnimTable* table = (xAnimTable*)xAnimTableNew("zNPCJelly", NULL, 0);

    int32 local_887[] = {
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
    psy->AddGoal(NPC_GOAL_IDLE, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
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
    int32 selfType;

    zNPCCommon::ParseINI();
    cfg_npc->snd_trax = g_sndTrax_Jelly;
    NPCS_SndTablePrepare(g_sndTrax_Jelly);
    selfType = xNPCBasic::SelfType();
    if (selfType == NPC_TYPE_JELLYBLUE)
    {
        cfg_npc->spd_moveMax = zNPCTypeAmbientx40600000;
        cfg_npc->spd_turnMax = zNPCTypeAmbientx405f66f3;
    }
    else if (selfType == NPC_TYPE_JELLYPINK)
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

void zNPCJelly::JellySpawn(const xVec3* pos_spawn, float32 tym_fall)
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

void test(int32 a)
{
}

// Really close to matching, but the switch cases aren't quite right
uint32 zNPCJelly::AnimPick(int32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    uint32 r8 = 0;
    int32 r31 = -1;

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
    case 'NGN4': // c4
    case 'NGJ3': // c4
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
    static xVec3 vec_offset;

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

    xMat3x3LMulVec(&pos_bnd, (xMat3x3*)this->zNPCCommon::BoneMat(0), pos);

    pos_bnd += *((xVec3*)this->zNPCCommon::BonePos(0));
    this->bound.sph.center = pos_bnd;

    this->bound.sph.r = 0.5f; // @903 // Could be sph or cyl
    xQuickCullForBound(&this->bound.qcd, &this->bound);

    zGridUpdateEnt(this);
}

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCNeptune::ParseINI()
{
    zNPCAmbient::ParseINI();
    cfg_npc->snd_traxShare = NULL;
    cfg_npc->snd_trax = &g_sndTrax_Neptune;
    NPCS_SndTablePrepare(&g_sndTrax_Neptune);
}
*/

#ifdef NON_MATCHING
void zNPCNeptune::Reset()
{
    zNPCAmbient::Reset();
    flags |= 0x40;
}
#endif

/* This should be 100% matching but it causes a vtable duplication error for some reason
void zNPCMimeFish::Reset()
{
    zNPCAmbient::Reset();
    flg_move = 1;
}
*/

void zNPCJelly::Process(xScene* xscn, float32 dt)
{
    this->zNPCAmbient::Process(xscn, dt);

    if (this->IsAlive())
    {
        this->PlayWithAlpha(dt);
        this->PlayWithAnimSpd();

        xPsyche* psy = this->psy_instinct;

        int32 flg_wonder = this->SomethingWonderful();

        if (xEntIsVisible(this))
        {
            if (xUtil_yesno(0.05f) && psy->GIDOfActive() != NPC_GOAL_DEAD)
            {
                this->PlayWithLightnin();
            }
        }
    }
}

int32 zNPCJelly::AmbiHandleMail(NPCMsg* msg)
{
    int32 handled = 1;
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

void zNPCJelly::SetAlpha(float32 alpha)
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
    const int32 arr[3] = {
        0x4e474e32, // 'NGN2'
        0x4e474e31, // 'NGN1'
        0,
    };

    int32 gid = this->psy_instinct->GIDOfActive();

    for (const int32* i = arr; *i != 0; i++)
    {
        if (gid == *i)
        {
            this->PumpFaster();
            break;
        }
    }
}

void zNPCMimeFish::Process(xScene* xscn, float32 dt)
{
}

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
