#include "zNPCTypeTiki.h"

#include "zNPCTypes.h"

#include "xString.h"
#include "xutil.h"
#include "xMath.h"
#include "zNPCGoals.h"
#include "zNPCGoalTiki.h"

#define ANIM_COUNT 2

extern const char* g_strz_tikianim[ANIM_COUNT];
extern U32 g_hash_tikianim[ANIM_COUNT];
extern zParEmitter* cloudEmitter;
extern xParEmitterCustomSettings thunderEmitterInfo;
extern F32 _862;
extern F32 _858_2;
extern F32 _1084;
extern F32 _867;
extern NPCSndTrax g_sndTrax_TikiShared[3];
extern NPCSndTrax g_sndTrax_TikiThunder[2];

static class zNPCTiki* orphanList;

// Taken from zNPCTypeTiki.s
// Defining these here makes the stringBase0 offsets match in the later functions.
char* str1 = "Unknown";
char* str2 = "Idle01";
char* str3 = "PAREMIT_THUNDER_CLOUD";
char* str4 = "PAREMIT_CLOUD";
char* str5 = "target";
char* str6 = "zNPCTiki";
char* str7 = "what the ...\n";
char* str8 = "Idle";

void ZNPC_Tiki_Startup()
{
    for (S32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_tikianim[i] = xStrHash(g_strz_tikianim[i]);
    }
}

U8 zNPCTiki::ColPenByFlags() const
{
    return 24;
}

U8 zNPCTiki::PhysicsFlags() const
{
    return 0;
}

U8 zNPCTiki::ColChkByFlags() const
{
    return 24;
}

U8 zNPCTiki::ColPenFlags() const
{
    return 0;
}

U8 zNPCTiki::ColChkFlags() const
{
    return 0;
}

void ZNPC_Tiki_Shutdown()
{
}

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

xFactoryInst* ZNPC_Create_Tiki(S32 who, RyzMemGrow* grow, void*)
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

    table = xAnimTableNew("zNPCTiki", NULL, 0);
    xAnimTableNewState(table, g_strz_tikianim[1], 0x110, 1, _862, NULL, NULL, _858_2, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

void zNPCTiki::Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit)
{
    if (((xNPCBasic::SelfType() != NPC_TYPE_TIKI_STONE) || (damtype == DMGTYP_CRUISEBUBBLE) ||
         (damtype - DMGTYP_THUNDER_TIKI_EXPLOSION <= (U32)1) ||
         (damtype - DMGTYP_INSTAKILL <= (U32)1)) &&
        this->flg_vuln != 0)
    {
        this->psy_instinct->GoalSet(NPC_GOAL_TIKIDYING, 0);
        this->flg_vuln = 0;
    }
}

void zNPCTiki::Reset()
{
    zNPCCommon::Reset();

    xVec3Add((xVec3*)&bound.sph.r, (xVec3*)&origLocalBound.sph.r, (xVec3*)&model->Mat->pos);
    xVec3Add((xVec3*)&bound.box.box.lower, (xVec3*)&origLocalBound.box.box.lower,
             (xVec3*)&model->Mat->pos);
    xVec3Add((xVec3*)&bound.pad[3], (xVec3*)&origLocalBound.pad[3], (xVec3*)&model->Mat->pos);

    xNPCBasic::RestoreColFlags();

    if (myNPCType == NPC_TYPE_TIKI_STONE)
    {
        flg_vuln = 1;
    }
    else
    {
        flg_vuln = 0xffff0001;
    }

    timeToLive = _858_2;
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
    vel = _858_2;
    nonTikiParent = NULL;

    switch (myNPCType)
    {
    case NPC_TYPE_TIKI_QUIET:
        break;
    case NPC_TYPE_TIKI_LOVEY:
        t1 = _858_2;
        t2 = _1084;
        t3 = _1084;
        xVec3Copy((xVec3*)&v1, (xVec3*)&model->Mat->pos);
        break;
    case NPC_TYPE_TIKI_THUNDER:
        t1 = xurand();
        t2 = _867;
        t3 = _867;
        break;
    default:
        break;
    }

    psy_instinct->GoalSet(NPC_GOAL_TIKIIDLE, 1);
    model->RedMultiplier = _862;
    model->BlueMultiplier = _862;
    model->GreenMultiplier = _862;
}

void zNPCTiki::Setup()
{
    zNPCCommon::Setup();

    xVec3Copy((xVec3*)&lastAt, (xVec3*)&model->Mat->at);
}

void zNPCTiki::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_TikiShared;
    NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_TikiShared);
    switch (xNPCBasic::SelfType())
    {
    case NPC_TYPE_TIKI_THUNDER:
        cfg_npc->snd_trax = g_sndTrax_TikiThunder;
        NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_TikiThunder);
        break;
    }
}

// very close, but there are some float order issues
S32 tikiDyingCB(xGoal* rawgoal, void*, en_trantype* trantype, float dt, void*)
{
    S32 nextgoal = 0;
    zNPCGoalTikiDying* goal = (zNPCGoalTikiDying*)rawgoal->GetOwner();

    goal->tmr_dying = (-1 > goal->tmr_dying - dt) ? -1 : goal->tmr_dying - dt;

    if (goal->tmr_dying < 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_TIKIDEAD;
    }

    return nextgoal;
}

S32 zNPCTiki::CanRope()
{
    return 1;
}

void AnimPick()
{
    xStrHash("Idle");
}

void zNPCTiki::Move(xScene* xscn, F32 dt, xEntFrame*)
{
}

void zNPCTiki::BUpdate(xVec3* pos)
{
    xEntDefaultBoundUpdate(this, pos);
}

S32 zNPCTiki::IsAlive()
{
    return (0x200 - (tikiFlag & 0x300) | (tikiFlag & 0x300) - 0x200) >> 0x1f;
}

U8 ColChkFlags()
{
    return 0;
}

U8 ColPenFlags()
{
    return 0;
}

U8 ColChkByFlags()
{
    return 0x18;
}

U8 ColPenByFlags()
{
    return 0x18;
}

U8 PhysicsFlags()
{
    return 0;
}

void zNPCTiki_InitStacking(zScene* zsc)
{
    for (int i = 0; i < zsc->num_npcs; i++)
    {
        xNPCBasic* npc = (xNPCBasic*)zsc->npcs[i];

        U32 type = npc->SelfType() & ~0xFF;
        if (type != 'NTT\0') // NPC_TYPE_TIKI_WOOD
        {
            continue;
        }

        zNPCTiki* tiki = (zNPCTiki*)(npc);
        if (npc->SelfType() != NPC_TYPE_TIKI_LOVEY)
        {
            tiki->FindParents(zsc);

            if (tiki->numParents == 0)
            {
                F32 dh = tiki->landHt - tiki->bound.box.box.lower.y;

                tiki->bound.box.box.lower.y += dh;
                tiki->bound.box.box.upper.y += dh;
                tiki->bound.box.center.y += dh;
                tiki->model->Mat->pos.y += dh;
            }
        }

        tiki->tikiFlag &= ~1;
    }

    orphanList = NULL;
}
