#include "iAnim.h"
#include "iModel.h"
#include "rwcore.h"
#include "rwplcore.h"
#include "types.h"
#include "xDebug.h"
#include "xEnt.h"
#include "xMath.h"
#include "xModel.h"
#include "xNPCBasic.h"
#include "xScrFx.h"
#include "xString.h"
#include "xVec3.h"
#include "xutil.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zMovePoint.h"
#include "zNPCGoals.h"
#include "zNPCGoalTiki.h"
#include "zNPCHazard.h"
#include "zNPCSndLists.h"
#include "zNPCSupplement.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"
#include "zNPCTypeTiki.h"
#include "zSurface.h"

#define ANIM_COUNT 2
#define NUM_PARENTS 4
#define NUM_CHILDREN 4

// .bss
static xParEmitterCustomSettings loveyEmitterInfo;
static xParEmitterCustomSettings thunderEmitterInfo;
static _tagLightningAdd sThunderLightningInfo;
// .sbss
static zNPCTiki* orphanList;
static S32 numTikisOnScreen;
static zParEmitter* cloudEmitter;
static RwRaster* sHelmetRast;
// .sdata
extern U32 g_hash_tikianim[ANIM_COUNT] = { 0, 0 };
extern const char* g_strz_tikianim[ANIM_COUNT] = { "Unknown", "Idle01" };
static S32 whichTikiToAnimate = -1;
static F32 sLoveyIconDist = 4.5f;
static F32 sLoveyIconOffset = -1.375f;
static F32 timeSinceLastExplode = 100.0f;
static F32 g_tmr_talkytiki = -1.0f;

void ZNPC_Tiki_Startup()
{
    for (S32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_tikianim[i] = xStrHash(g_strz_tikianim[i]);
    }
}

void ZNPC_Tiki_Shutdown()
{
}

void zNPCTiki_InitStacking(zScene* zsc)
{
    for (int i = 0; i < zsc->num_npcs; i++)
    {
        xNPCBasic* npc = (xNPCBasic*)zsc->npcs[i];

        U32 type = npc->SelfType() & ~0xFF;

        if (type != 'NTT\0')
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

// a couple assignments are in the wrong order
void zNPCTiki_InitFX(zScene* scene)
{
    RwTexture* tex;

    cloudEmitter = zParEmitterFind("PAREMIT_THUNDER_CLOUD");
    if (cloudEmitter == 0)
    {
        cloudEmitter = zParEmitterFind("PAREMIT_CLOUD");
    }

    // clang-format off
    thunderEmitterInfo.vel.x = 0.0f;
    thunderEmitterInfo.vel.y = -0.3f;
    thunderEmitterInfo.vel.z = 0.0f;
    thunderEmitterInfo.custom_flags = 0xf5e;
    thunderEmitterInfo.vel_angle_variation = DEG2RAD(270);
    thunderEmitterInfo.rate.set(100.0f, 100.0f, 1.0f, 0);
    thunderEmitterInfo.life.set(2.0f, 2.0f, 1.0f, 0);
    thunderEmitterInfo.size_birth.set(0.8f, 0.8f, 1.0f, 0);
    thunderEmitterInfo.size_death.set(0.0f, 0.0f, 1.0f, 0);
    thunderEmitterInfo.color_birth[0].set(75.0f, 75.0f, 1.0f, 0);
    thunderEmitterInfo.color_birth[1].set(75.0f, 75.0f, 1.0f, 0);
    thunderEmitterInfo.color_birth[2].set(75.0f, 75.0f, 1.0f, 0);
    thunderEmitterInfo.color_birth[3].set(0.0f, 0.0f, 1.0f, 0);
    thunderEmitterInfo.color_death[0].set(0.0f, 0.0f, 1.0f, 0);
    thunderEmitterInfo.color_death[1].set(0.0f, 0.0f, 1.0f, 0);
    thunderEmitterInfo.color_death[2].set(0.0f, 0.0f, 1.0f, 0);
    thunderEmitterInfo.color_death[3].set(255.0f, 255.0f, 1.0f, 0);
    loveyEmitterInfo.vel.x = 0.0f;
    loveyEmitterInfo.vel.y = -0.5f;
    loveyEmitterInfo.vel.z = 0.0f;
    loveyEmitterInfo.custom_flags = 0xf5e;
    loveyEmitterInfo.vel_angle_variation = DEG2RAD(90);
    loveyEmitterInfo.rate.set(100.0f, 100.0f, 1.0f, 0);
    loveyEmitterInfo.life.set(2.0f, 2.0f, 1.0f, 0);
    loveyEmitterInfo.size_birth.set(0.5f, 0.5f, 1.0f, 0);
    loveyEmitterInfo.size_death.set(0.3f, 0.3f, 1.0f, 0);
    loveyEmitterInfo.color_birth[0].set(255.0f, 255.0f, 1.0f, 0);
    loveyEmitterInfo.color_birth[1].set(175.0f, 175.0f, 1.0f, 0);
    loveyEmitterInfo.color_birth[2].set(175.0f, 175.0f, 1.0f, 0);
    loveyEmitterInfo.color_birth[3].set(255.0f, 255.0f, 1.0f, 0);
    loveyEmitterInfo.color_death[0].set(255.0f, 255.0f, 1.0f, 0);
    loveyEmitterInfo.color_death[1].set(175.0f, 175.0f, 1.0f, 0);
    loveyEmitterInfo.color_death[2].set(175.0f, 175.0f, 1.0f, 0);
    loveyEmitterInfo.color_death[3].set(0.0f, 0.0f, 1.0f, 0);
    // clang-format on
    tex = (RwTexture*)xSTFindAsset(xStrHash("target"), 0x0);
    if (tex != NULL)
    {
        sHelmetRast = tex->raster;
    }
    else
    {
        sHelmetRast = 0;
    }

    NPCC_MakeLightningInfo(NPC_LYT_TIKITHUNDER, &sThunderLightningInfo);
    sThunderLightningInfo.time = 0.3f;
}

void zNPCTiki_ExplodeFX(zNPCTiki* tiki)
{
    if (tiki->myNPCType == NPC_TYPE_TIKI_THUNDER)
    {
        xScrFXGlareAdd((xVec3*)&tiki->model->Mat->pos, 0.7f, 0.2f, 5.0f, 1.0f, 1.0f, 0.75f, 1.0f,
                       NULL);

        xVec3 pos;
        xVec3Copy(&pos, (xVec3*)&tiki->model->Mat->pos);
        pos.y += 0.35f;

        NPCHazard* haz = HAZ_Acquire();
        if (haz)
        {
            haz->ConfigHelper(NPC_HAZ_THUNDER);
            haz->SetNPCOwner(tiki);
            haz->Start(&tiki->bound.box.center, -1.0f);
        }

        zScene* scene = globals.sceneCur;

        for (U32 idx = 0, i = 0; idx < scene->num_npcs; idx++, i += 4)
        {
            zNPCTiki* other = *((zNPCTiki**)scene->npcs + i);
            if (other == tiki || !other->flg_vuln)
                continue;

            xVec3 delta;
            xVec3Sub(&delta, (xVec3*)&tiki->model->Mat->pos, (xVec3*)&other->model->Mat->pos);
            F32 dist2 = xVec3Length2(&delta);

            if (dist2 < 25.0f)
            {
                if ((other->myNPCType & ~0xFF) == NPC_TYPE_TIKI_WOOD)
                    other->timeToLive = dist2 * 0.012f;

                other->Damage(DMGTYP_THUNDER_TIKI_EXPLOSION, 0, 0);
            }
        }

        for (U32 idx = 0, i = 0; idx < scene->num_dyns; idx++, i += 4)
        {
            xBase* dyn = *((xBase**)scene->dyns + i);
            if (dyn->baseType != 0x1B)
                continue;

            xModelInstance* model = *((xModelInstance**)((char*)dyn + 2));
            xVec3 delta;
            xVec3Sub(&delta, (xVec3*)&tiki->model->Mat->pos, (xVec3*)&model->Mat->pos);

            if (xVec3Length2(&delta) < 25.0f)
                zEntEvent(dyn, 0x3A);
        }

        {
            xVec3 delta;
            xVec3Sub(&delta, (xVec3*)&tiki->model->Mat->pos,
                     (xVec3*)&globals.player.ent.model->Mat->pos);

            if (xVec3Length2(&delta) < 25.0f)
                zEntEvent((xBase*)&globals.player, 0x3A);
        }
    }

    if (tiki->explosion && tiki->explosion->initCB)
        tiki->explosion->initCB(tiki->explosion, tiki->model, 0, 0);

    tiki->SndPlayRandom(NPC_STYP_TIKIEXPLODE);
}

// WIP
static void zNPCTiki_PickTikisToAnimate()
{
    xCollis* coll;
    xCollis* cend;
    xNPCBasic* npc;
    zNPCTiki* currOrphan;

    coll = globals.player.ent.collis->colls;
    cend = coll + globals.player.ent.collis->idx;

    for (; coll < cend; ++coll)
    {
        if ((coll->flags & 1) != 0 && coll->optr != NULL)
        {
            void* pv = coll->optr;

            if (*((char*)pv + 4) == '+' && (((*(U32*)((char*)pv + 0xF4)) & ~0xFF) ==
                                            (U32)('N' << 24 | 'T' << 16 | 'T' << 8 | '0')))
            {
                U32* pf = (U32*)((char*)pv + 0x2A0);
                *pf &= ~0xC0;
            }
        }
    }

    for (currOrphan = orphanList; currOrphan != NULL; currOrphan = currOrphan->nextOrphan)
    {
        if (currOrphan->isCulled == 0)
        {
            currOrphan->tikiFlag &= ~0xC0;
        }

        if (currOrphan->nextOrphan == currOrphan)
        {
            break;
        }
    }

    npc = (xNPCBasic*)globals.player.carry.grabbed;
    if (npc != NULL)
    {
        void* pv = (void*)npc;
        if (*((char*)pv + 4) == '+' && (((*(U32*)((char*)pv + 0xF4)) & ~0xFF) ==
                                        (U32)('N' << 24 | 'T' << 16 | 'T' << 8 | '0')))
        {
            U32* pf = (U32*)((char*)pv + 0x2A0);
            *pf &= ~0xC0;
        }
    }

    if ((xrand() & 0x3F) == 0)
    {
        whichTikiToAnimate = (S32)(numTikisOnScreen * xurand()) + 1;
    }
    else
    {
        whichTikiToAnimate = -1;
    }

    numTikisOnScreen = 0;
}

// Scheduling issue
void zNPCTiki_Timestep(xScene* xscn, F32 dt)
{
    zNPCTiki_PickTikisToAnimate();
    zNPCTiki_ReparentOrphans();
    timeSinceLastExplode += dt;

    if (-1.0f > g_tmr_talkytiki - dt)
    {
        g_tmr_talkytiki = -1.0f;
    }
    else
    {
        g_tmr_talkytiki -= dt;
    }
}

void zNPCTiki_ReparentOrphans()
{
    zNPCTiki* holder;

    if (globals.sceneCur->sceneID == 'BB04')
    {
        while (orphanList != NULL)
        {
            orphanList->tikiFlag = orphanList->tikiFlag | 3;
            orphanList->RemoveFromFamily();
            holder = orphanList->nextOrphan;
            orphanList->nextOrphan = NULL;
            orphanList = holder;
        }
    }
    else
    {
        while (orphanList != NULL)
        {
            if (orphanList->SelfType() != NPC_TYPE_TIKI_LOVEY)
            {
                orphanList->FindParents(globals.sceneCur);
            }
            holder = orphanList->nextOrphan;
            orphanList->nextOrphan = NULL;
            orphanList = holder;
        }
    }
    return;
}

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
    xAnimTableNewState(table, g_strz_tikianim[1], 0x110, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
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

    if (myNPCType == NPC_TYPE_TIKI_STONE)
    {
        flg_vuln = 1;
    }
    else
    {
        flg_vuln = ~0xFFFE;
    }

    timeToLive = 0.0f;
    tikiFlag = 0;
    for (int i = 0; i < sizeof(parents[0]); i++)
    {
        parents[i] = NULL;
    }
    numParents = 0;
    contactParent = ~0x0;

    for (int i = 0; i < sizeof(children[0]); i++)
    {
        children[i] = NULL;
    }
    numChildren = 0;
    vel = 0.0f;
    nonTikiParent = NULL;

    switch (myNPCType)
    {
    case NPC_TYPE_TIKI_QUIET:
        break;
    case NPC_TYPE_TIKI_LOVEY:
        t1 = 0.0f;
        t2 = -0.25f;
        t3 = -0.25f;
        xVec3Copy((xVec3*)&v1, (xVec3*)&model->Mat->pos);
        break;
    case NPC_TYPE_TIKI_THUNDER:
        t1 = xurand();
        t2 = -0.5f;
        t3 = -0.5f;
        break;
    default:
        break;
    }

    psy_instinct->GoalSet(NPC_GOAL_TIKIIDLE, 1);
    model->RedMultiplier = 1.0f;
    model->BlueMultiplier = 1.0f;
    model->GreenMultiplier = 1.0f;
}

void zNPCTiki::Setup()
{
    zNPCCommon::Setup();

    xVec3Copy((xVec3*)&lastAt, (xVec3*)&model->Mat->at);
}

void zNPCTiki::Init(xEntAsset* entass)
{
    int iVar1;
    xAnimPlay* pxVar2;
    xModelInstance* nextModel;

    zNPCCommon::Init(entass);

    this->flags |= 0x40;
    this->baseFlags |= 0x10;
    iBoxForModel(&this->bound.box.box, this->model);

    for (nextModel = this->model->Next; nextModel != NULL; nextModel = nextModel->Next)
    {
        xVec3 local_1c;
        xVec3 local_28;

        xVec3Copy(&local_1c, &this->bound.box.box.lower);
        xVec3Copy(&local_28, &this->bound.box.box.upper);

        iBoxForModel(&this->bound.box.box, nextModel);

        if (this->bound.box.box.lower.x > local_1c.x)
        {
            this->bound.box.box.lower.x = local_1c.x;
        }
        if (this->bound.box.box.lower.y > local_1c.y)
        {
            this->bound.box.box.lower.y = local_1c.y;
        }
        if (this->bound.box.box.lower.z > local_1c.z)
        {
            this->bound.box.box.lower.z = local_1c.z;
        }

        if (this->bound.box.box.upper.x < local_28.x)
        {
            this->bound.box.box.upper.x = local_28.x;
        }
        if (this->bound.box.box.upper.y < local_28.y)
        {
            this->bound.box.box.upper.y = local_28.y;
        }
        if (this->bound.box.box.upper.z < local_28.z)
        {
            this->bound.box.box.upper.z = local_28.z;
        }
    }

    this->origLocalBound.type = XBOUND_TYPE_BOX;
    xVec3Sub(&this->origLocalBound.box.box.lower, &this->bound.box.box.lower,
             (xVec3*)&(this->model->Mat->pos));
    xVec3Sub(&this->origLocalBound.box.box.upper, &this->bound.box.box.upper,
             (xVec3*)&(this->model->Mat->pos));
    xVec3Add(&this->origLocalBound.box.box.lower, &this->origLocalBound.box.box.lower,
             &this->origLocalBound.box.box.upper);
    xVec3SMulBy(&this->origLocalBound.box.box.lower, 0.5f);

    this->nextOrphan = NULL;

    iVar1 = this->SelfType();
    if (iVar1 == NPC_TYPE_TIKI_WOOD)
    {
        this->render = loveyTikiRender;
    }
    else
    {
        this->render = genericTikiRender;
    }

    pxVar2 = this->model->Anim;
    if (pxVar2 == NULL)
    {
        this->tikiAnim = NULL;
        this->tikiFlag &= ~0xC0;
        this->tikiFlag |= 0x40;
    }
    else
    {
        this->tikiAnim = *pxVar2->Single->State->Data->RawData;
        this->tikiAnimTime = this->model->Anim->Single->Time;
        this->model->Anim = NULL;
        this->tikiFlag &= ~0xC0;
    }

    return;
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

S32 zNPCTiki::SetCarryState(en_NPC_CARRY_STATE cs)
{
    if (this->SelfType() == NPC_TYPE_TIKI_LOVEY)
    {
        return 0;
    }

    if (cs == zNPCCARRY_THROW)
    {
        return 0;
    }

    if (cs >= zNPCCARRY_ATTEMPTPICKUP && cs < zNPCCARRY_THROW)
    {
        if (this->numChildren == 0)
        {
            return 1;
        }

        if (this->children[0] != NULL &&
            this->children[0]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y))
        {
            return 0;
        }

        if (this->children[1] != NULL &&
            this->children[1]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y))
        {
            return 0;
        }

        if (this->children[2] != NULL &&
            this->children[2]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y))
        {
            return 0;
        }

        if (this->children[3] != NULL &&
            this->children[3]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y))
        {
            return 0;
        }

        return 1;
    }

    if (cs != zNPCCARRY_NONE)
    {
        this->tikiFlag |= 0x10;
        this->landHt = FLOAT_MIN;
        RemoveFromFamily();
        return 1;
    }

    if ((this->tikiFlag & 0x10) == 0)
    {
        return 0;
    }

    this->tikiFlag &= ~0x10;

    if (this->frame != NULL)
    {
        this->frame->mat.up.x = 0.0f;
        this->frame->mat.up.y = 1.0f;
        this->frame->mat.up.z = 0.0f;
    }

    this->model->Mat->up.x = 0.0f;
    this->model->Mat->up.y = 1.0f;
    this->model->Mat->up.z = 0.0f;

    if (this->SelfType() == NPC_TYPE_TIKI_STONE)
    {
        this->tikiFlag |= 0x25;
        this->bound.type = XBOUND_TYPE_BOX;
    }
    else
    {
        this->Damage(DMGTYP_SIDE, 0, NULL);
    }

    return 1;
}

void zNPCTiki::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;
    xGoal* goal;

    bmgr = xBehaveMgr_GetSelf();
    psy = bmgr->Subscribe(this, 0);
    this->psy_instinct = psy;
    psy = this->psy_instinct;
    psy->BrainBegin();

    goal = psy->AddGoal(NPC_GOAL_TIKIIDLE, NULL);
    goal->flg_travFilter = 0;

    switch (this->myNPCType)
    {
    case NPC_GOAL_TIKIPATROL:
        goal->SetCallbacks(loveyIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKIPATROL, NULL);
        goal->SetCallbacks(loveyPatrolCB, NULL, 0, NULL);
        break;
    case NPC_GOAL_TIKIHIDE:
        goal->SetCallbacks(quietIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKIHIDE, NULL);
        goal->SetCallbacks(quietHideCB, NULL, 0, NULL);
        break;
    case NPC_GOAL_TIKICOUNT:
        goal->SetCallbacks(thunderIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKICOUNT, NULL);
        goal->SetCallbacks(thunderCountCB, NULL, 0, NULL);
        break;
    default:
        break;
    }

    goal = psy->AddGoal(NPC_GOAL_TIKIDYING, NULL);
    goal->SetCallbacks(tikiDyingCB, NULL, 0, NULL);

    goal = psy->AddGoal(NPC_GOAL_TIKIDEAD, NULL);
    goal->SetCallbacks(tikiDeadCB, NULL, 0, NULL);

    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_TIKIIDLE);
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

// still need to clean up this ghidra output
void zNPCTiki::Process(xScene* xscn, F32 dt)
{
    // The actual local variables from the dwarf:
    U32 i;
    F32 duration;
    xQuat* q0;
    xVec3* t0 = NULL;
    F32 dy;
    F32 dh;
    // Ghidra-generated:
    F32 fVar1;
    xVec3 fStack_88;
    xVec3 afStack_7c;
    xVec3 fStack_70;
    xVec3 fStack_64;
    F32 local_60;
    F32 local_54;
    xVec3 afStack_4c;

    if ((this->numChildren == NULL) || ((this->tikiFlag & 8) != 0))
    {
        this->tikiFlag &= ~8;

        if ((this->tikiFlag & 0x300) == 0x200)
        {
            this->Process(xscn, dt);
        }
        else
        {
            if (this->tikiAnim && ((this->tikiFlag & 0xC0) == 0))
            {
                duration = iAnimDuration(this->tikiAnim);
                this->tikiAnimTime += dt;

                if (this->tikiAnimTime >= duration)
                {
                    if (xrand() & 1)
                    {
                        this->tikiAnimTime -= duration;
                    }
                    else
                    {
                        this->tikiAnimTime = 0.0f;
                        this->tikiFlag = (this->tikiFlag & ~0xC0) | 0x40;
                    }
                }

                q0 = (xQuat*)giAnimScratch;
                t0 = (xVec3*)(giAnimScratch + 0x410);
                iAnimEval(this->tikiAnim, this->tikiAnimTime, (U32)0, (xVec3*)t0, (xQuat*)q0);

                iModelAnimMatrices(this->model->Data, q0, t0, this->model->Mat + 1);
            }
            xVec3Copy(t0, (xVec3*)&this->model->Mat->pos);
            if (this->numParents != 0)
            {
                for (i = 0; i < 4; ++i)
                {
                    if (this->parents[i] && !(this->updatedParents & (1 << i)))
                    {
                        this->parents[i]->tikiFlag |= 8;
                        this->parents[i]->Process(xscn, dt);
                    }
                }
            }

            if ((this->tikiFlag & 0x300) == 0x100)
            {
                this->RemoveFromFamily();
                this->tikiFlag = (this->tikiFlag & ~0x300) | 0x200;
            }
            else
            {
                if (this->tikiFlag & 4)
                {
                    if (this->nextOrphan == NULL)
                    {
                        this->nextOrphan = orphanList;
                        orphanList = this;
                    }
                    else
                    {
                        xprintf("what the ...\n");
                    }
                }

                this->tikiFlag &= ~4;

                if (this->psy_instinct)
                {
                    this->psy_instinct->Timestep(dt, 0);
                }

                zNPCCommon::Process(xscn, dt);

                if (this->numParents)
                {
                    for (i = 0; i < 4; i++)
                    {
                        if (this->parents[i] && i != this->contactParent)
                        {
                            S32 p = this->contactParent;
                            if (p == -1 || this->parents[p]->bound.box.box.upper.y <
                                               this->parents[i]->bound.box.box.upper.y)
                            {
                                this->contactParent = i;
                            }
                        }
                    }
                }

                if (this->tikiFlag & 1)
                {
                    this->vel -= 10.0f * dt;
                    fVar1 = dt * this->vel;

                    this->model->Mat->pos.y += fVar1;

                    this->bound.box.box.lower.y += fVar1;
                    this->bound.box.box.upper.y += fVar1;
                    this->bound.sph.center.y += fVar1;

                    if (this->numParents == 0)
                    {
                        if (this->bound.box.box.lower.y < this->landHt)
                        {
                            F32 diff = this->landHt - this->bound.box.box.lower.y;
                            this->bound.box.box.lower.y += diff;
                            this->bound.box.box.upper.y += diff;
                            this->bound.sph.center.y += diff;
                            this->model->Mat->pos.y += diff;

                            this->tikiFlag &= ~1;

                            if (this->tikiFlag & 2)
                            {
                                //this-> 0x1b8 -> EventFunc(this, 0xE, 0, 0);
                            }

                            if (this->vel < -0.1f)
                            {
                                this->SndPlayRandom(NPC_STYP_TIKISTACK);
                            }

                            this->vel = 0.0f;
                        }
                    }
                    else
                    {
                        xBound& parentBound = this->parents[this->contactParent]->bound;
                        if (this->bound.box.box.lower.y < parentBound.box.box.upper.y)
                        {
                            this->tikiFlag &= ~1;
                            if (this->vel < -0.1f)
                            {
                                this->SndPlayRandom(NPC_STYP_TIKISTACK);
                            }
                            this->vel = 0.0f;
                        }
                    }
                }

                if (this->numParents == 0)
                {
                    nonTikiParent = this->nonTikiParent;
                    if (this->nonTikiParent)
                    {
                        if (!(this->nonTikiParent->chkby & 0x10) ||
                            !(this->nonTikiParent->penby & 0x10))
                        {
                            this->nonTikiParent = NULL;
                            this->tikiFlag |= 5;
                            this->landHt = FLOAT_MIN;
                        }
                        else
                        {
                            RwMatrix& matP = *this->nonTikiParent->model->Mat;
                            xVec3 delta;
                            delta.x = (matP.pos.x + matP.right.x * this->nonTikiParentDisp.x +
                                       matP.up.x * this->nonTikiParentDisp.y +
                                       matP.at.x * this->nonTikiParentDisp.z) -
                                      this->model->Mat->pos.x;
                            delta.y = (matP.pos.y + matP.right.y * this->nonTikiParentDisp.x +
                                       matP.up.y * this->nonTikiParentDisp.y +
                                       matP.at.y * this->nonTikiParentDisp.z) -
                                      this->model->Mat->pos.y;
                            delta.z = (matP.pos.z + matP.right.z * this->nonTikiParentDisp.x +
                                       matP.up.z * this->nonTikiParentDisp.y +
                                       matP.at.z * this->nonTikiParentDisp.z) -
                                      this->model->Mat->pos.z;

                            if (this->tikiFlag & 1)
                            {
                                delta.y = 0.0f;
                            }

                            xVec3AddTo(&this->bound.box.box.upper, &delta);
                            xVec3AddTo(&this->bound.box.box.lower, &delta);
                            xVec3AddTo(&this->bound.sph.center, &delta);
                            xVec3AddTo((xVec3*)&this->model->Mat->pos, &delta);

                            if (!(this->tikiFlag & 1) &&
                                this->nonTikiParent->baseType == eBaseTypeButton)
                            {
                                zEntButton_Hold((_zEntButton*)this->nonTikiParent, 0x2000);
                            }
                        }
                    }
                }
                else
                {
                    this->model->Mat = this->model->Mat;
                    this->model->Mat->pos.x += this->parents[this->contactParent]->deltaPos.x;
                    this->model->Mat->pos.z += this->parents[this->contactParent]->deltaPos.z;

                    if (!(this->tikiFlag & 1))
                    {
                        xBound& parentBound = this->parents[this->contactParent]->bound;
                        xBound& bound = this->bound;

                        dy = parentBound.box.box.upper.y - bound.box.box.lower.y;
                        bound.box.box.lower.y += dy;
                        bound.box.box.upper.y += dy;
                        bound.sph.center.y += dy;
                        this->model->Mat->pos.y += dy;
                    }
                }
                xVec3Copy((xVec3*)&this->model->Mat->at, &this->lastAt);
                if (!this->isCulled)
                {
                    xVec3Sub(&fStack_64, (xVec3*)&globals.player.ent.model->Mat->pos,
                             (xVec3*)&((this->model)->Mat->pos));
                    local_60 = 0.0099999998f;
                    F32 dVar19 = xVec3Length2(&fStack_64);
                    if (((dVar19 < 400.0f) && (!this->isCulled)) &&
                        (numTikisOnScreen = numTikisOnScreen + 1,
                         numTikisOnScreen == whichTikiToAnimate))
                    {
                        this->tikiFlag &= ~0xC0;
                    }
                    if ((globals.player.drv.odriver != this) && (globals.player.drv.driver != this))
                    {
                        if ((1.0f < dVar19) && (dVar19 < 400.0f))
                        {
                            xVec3AddScaled((xVec3*)&((this->model)->Mat->at), &fStack_64,
                                           0.2f / dVar19);
                            xVec3Normalize((xVec3*)&((this->model)->Mat->at),
                                           (xVec3*)&((this->model)->Mat->at));
                        }
                        if (((dVar19 < 100.0f) && (g_tmr_talkytiki < 0.0099999998f)) &&
                            ((this->tikiFlag & 0x300) == 0))
                        {
                            this->ISeePlayer();
                            dVar19 = xurand();
                            g_tmr_talkytiki = 90.0f * 0.25f * (dVar19 - 0.5f) + 90.0f;
                        }
                    }

                    xVec3Cross((xVec3*)&((this->model)->Mat->right),
                               (xVec3*)&((this->model)->Mat->up),
                               (xVec3*)&((this->model)->Mat->at));
                }
                xVec3Copy(&this->lastAt, (xVec3*)&this->model->Mat->at);
                dt = (this->model->Scale).x;
                if (dt == 0.0f)
                {
                    // clang-format off
                    xVec3Add(&this->bound.cyl.center, (xVec3*)&this->model->Mat->pos, &this->origLocalBound.cyl.center);
                    xVec3Add(&this->bound.qcd.min, (xVec3*)&this->model->Mat->pos, &this->origLocalBound.qcd.min);
                    xVec3Add(&this->bound.box.box.upper, (xVec3*)&this->model->Mat->pos, &this->origLocalBound.box.box.upper);
                }
                else
                {
                    xVec3SMul(&fStack_70, &this->origLocalBound.cyl.center, dt);
                    xVec3SMul(&afStack_7c, &this->origLocalBound.cyl.center, (this->model->Scale).x);
                    xVec3SMul(&fStack_88, &this->origLocalBound.cyl.center, (this->model->Scale).x);
                    xVec3Add(&fStack_70, &this->bound.cyl.center, (xVec3*)&(this->model->Mat->pos));
                    xVec3Add(&afStack_7c, &this->bound.qcd.min, (xVec3*)&(this->model->Mat->pos));
                    xVec3Add(&fStack_88, &this->bound.cyl.center, (xVec3*)&(this->model->Mat->pos));
                    afStack_7c.x += 0.0001f;
                    fStack_70.x += 0.00005f;
                    // clang-format on
                }

                xVec3Sub(&this->deltaPos, (xVec3*)&this->model->Mat->pos, &afStack_4c);

                if (this->numChildren != 0)
                {
                    for (i = 0; i < 4; ++i)
                    {
                        if (this->children[i])
                        {
                            this->ParentUpdated(this->children[i]);
                        }
                    }
                }

                this->updatedParents = 0;

                if (this->frame)
                {
                    this->frame->mode = 0x30000;
                }
            }
        }
    }
}

// WIP: unsure of what enum/constants toEvent uses, and no xrefs seem to show up
S32 zNPCTiki::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                       xBase* toParamWidget, S32* handled)
{
    *handled = FALSE;

    switch (toEvent)
    {
    case 0x32:
    {
        if ((this->tikiFlag & 0x300) != 0x200 && this->explosion && this->explosion->initCB)
        {
            this->explosion->initCB(this->explosion, this->model, 0, 0);
        }

        this->RemoveFromFamily();

        if (this->SelfType() != NPC_TYPE_TIKI_LOVEY)
        {
            this->tikiFlag = (this->tikiFlag | 5) & ~8;
            this->vel = 0.0f;
            this->landHt = -1e38f;
        }

        *handled = TRUE;
        break;
    }

    case 0x54:
        this->chkby = 0;
        *handled = TRUE;
        break;

    case 4:
    case 0x56:
    case 0x1F8:
    case 0x1F9:
    {
        if (toEvent == 0x56)
        {
            this->chkby = 0;
            if ((this->tikiFlag & 0x300) != 0x200)
            {
                this->RestoreColFlags();
            }
        }

        if (xEntIsVisible(this) && toParam)
        {
            S32 code = (S32)(0.5f + toParam[0]);
            if (code == 'M')
            {
                zFXPopOff(*this, toParam[1], toParam[2]);
            }
        }

        xEntHide(this);
        *handled = TRUE;
        break;
    }

    case 3:
    case 0x1F7:
    {
        if ((this->tikiFlag & 0x300) != 0x200)
        {
            xEntShow(this);

            if (toParam)
            {
                S32 code = (S32)(0.5f + toParam[0]);
                if (code == 'M')
                    zFXPopOn(*this, toParam[1], toParam[2]);
            }
        }

        *handled = TRUE;
        break;
    }

    default:
        if (toEvent > 0x31 && toEvent <= 0x53 && (this->tikiFlag & 0x300) != 0x200)
        {
            this->RestoreColFlags();
            *handled = TRUE;
        }
        break;
    }

    if (*handled)
    {
        return TRUE;
    }
    else
    {
        return zNPCCommon::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
    }
}

void zNPCTiki::AddChild(zNPCTiki* child)
{
    U32 i = 0;

    while (this->children[i & 0xff] != NULL)
    {
        i++;
    }

    this->children[i & 0xff] = child;
    this->numChildren++;
}

void zNPCTiki::RemoveChild(zNPCTiki* child)
{
    U32 i = 0;

    if (this->numChildren == 0)
        return;

    while (this->children[i & 0xff] != child && (i & 0xff) < sizeof(this->children[0]))
    {
        i++;
    }

    if (this->children[i & 0xff] != child)
        return;

    this->children[i & 0xff] = NULL;
    this->numChildren--;
}

void zNPCTiki::RemoveParent(zNPCTiki* parent)
{
    U32 i = 0;

    if (this->numParents == 0)
        return;

    while (this->parents[i & 0xff] != parent && (i & 0xff) < sizeof(this->parents[0]))
    {
        i++;
    }

    if (this->parents[i & 0xff] == parent)
    {
        this->parents[i & 0xff] = NULL;
        this->numParents--;
    }

    if ((U8)i == this->contactParent)
    {
        this->contactParent = -1;
        this->tikiFlag |= 1;
    }

    this->tikiFlag |= 4;
}

// WIP
void zNPCTiki::FindParents(zScene* zsc)
{
    xCollis c = {
        0b00000100, // flags
        0, // oid
        NULL, // optr
        NULL, // mptr
        0.0f, // dist
        { 0.0f, 0.0f, 0.0f }, // norm
        { 0.0f, 0.0f, 0.0f }, // tohit
        { 0.0f, 0.0f, 0.0f }, // depen
        { 0.0f, 0.0f, 0.0f }, // hdng
        { 0.0f, 0.0f, 0.0f } // union tuv/tri
    };
    xRay3 ray;

    zSurfaceProps* prop;
    F32 oldLower;
    F32 oldUpper;
    S32 i;
    xNPCBasic* npc;
    zNPCTiki* tiki;
    U8 couldBe;

    xVec3Copy(&ray.origin, (xVec3*)&((this->model)->Mat->pos));
    ray.dir.x = 0.0f;
    ray.dir.y = -1.0f;
    ray.dir.z = 0.0f;
    ray.min_t = 0.0f;
    ray.max_t = 300.0f;
    ray.flags = 0xc00;

    this->tikiFlag &= ~0x2;

    xRayHitsTikiLandableScene(globals.sceneCur, &ray, &c);

    if ((c.flags & 1) == 0)
    {
        this->landHt = FLOAT_MIN;
    }
    else
    {
        if (c.optr != NULL)
        {
            this->nonTikiParent = (xEnt*)c.optr;

            xVec3Sub(&ray.origin, &ray.origin, (xVec3*)&((xEnt*)c.optr)->model->Mat->pos);
            F32 dist = ray.max_t - c.dist;

            if (zGooIs(this->nonTikiParent, oldLower, 0))
                this->tikiFlag |= 2;

            xSurface* surf = zSurfaceGetSurface(&c);
            if (surf != NULL && surf->state == '\0' && surf->moprops != NULL)
            {
                if (((U32*)surf->moprops)[0] != 0 && ((U32*)surf->moprops)[2] != 0)
                    this->tikiFlag |= 2;
            }

            this->nonTikiParentDisp.x =
                xVec3Dot(&ray.origin, (xVec3*)&this->nonTikiParent->model->Mat->right);
            this->nonTikiParentDisp.y =
                xVec3Dot(&ray.origin, (xVec3*)&this->nonTikiParent->model->Mat->up);
            this->nonTikiParentDisp.z =
                xVec3Dot(&ray.origin, (xVec3*)&this->nonTikiParent->model->Mat->at);

            F32 mag2 = xVec3Length2((xVec3*)&this->nonTikiParent->model->Mat->right);
            if (mag2 > 0.00001f)
            {
                xVec3SMulBy(&this->nonTikiParentDisp, 1.0f / mag2);
            }
        }
        else
        {
            this->nonTikiParent = NULL;
            xVec3Init(&this->nonTikiParentDisp, 0.0f, 0.0f, 0.0f);
        }

        this->landHt = ray.origin.y - c.dist;
    }

    if ((this->tikiFlag & 0x20) != 0)
    {
        oldUpper = this->bound.box.box.lower.y;
        oldLower = this->bound.box.box.upper.y;
        this->bound.box.box.lower.y *= 0.5f;
        F32 temp = this->bound.box.box.lower.y + this->bound.box.box.upper.y * 0.5f;
        this->bound.box.box.lower.y = temp;
        this->bound.box.box.upper.y = (temp + oldLower) - oldUpper;
    }

    i = 0;
    if (zsc->num_npcs != 0)
    {
        for (S32 idx = 0; i < zsc->num_npcs; i++, idx += 4)
        {
            tiki = (zNPCTiki*)&(*zsc->npcs[idx]);

            bool validParent = true;
            if (tiki == this || (tiki->myNPCType & ~0xFF) != NPC_TYPE_TIKI_WOOD ||
                (tiki->tikiFlag & 0x300) != 0 || (tiki->tikiFlag & 0x10) != 0 ||
                (this->landHt + 0.1f > tiki->bound.box.box.upper.y) ||
                (this->bound.box.box.lower.x + 0.1f > tiki->bound.box.box.upper.x) ||
                (this->bound.box.box.lower.z + 0.1f > tiki->bound.box.box.upper.z))
            {
                validParent = false;
            }

            zNPCTiki* cur = this;
            for (S32 couldBe = 0; couldBe < 4; ++couldBe)
            {
                zNPCTiki* p = cur->parents[0];
                if (p == tiki)
                {
                    validParent = false;
                    break;
                }

                if (p && this->landHt < p->bound.box.box.upper.y)
                {
                    p->RemoveChild(this);
                    cur->parents[0] = NULL;
                    this->numParents--;
                    if (couldBe == this->contactParent)
                    {
                        this->contactParent = -1;
                        this->tikiFlag |= 1;
                    }
                }

                cur = (zNPCTiki*)&(cur->nextprod);
            }

            if (validParent && tiki->numChildren < 4 && this->numParents < 4)
            {
                for (U8 i = 0; this->parents[i & 0xff] != NULL; i++)
                    ;
                this->parents[i & 0xff] = tiki;
                tiki->AddChild(this);
                this->numParents++;
            }
        }
    }

    if ((this->tikiFlag & 0x20) != 0)
    {
        this->bound.box.box.upper.y = oldUpper;
        this->bound.box.box.lower.y = oldLower;
        this->tikiFlag &= ~0x20;
    }

    if (this->numParents == 0)
    {
        this->tikiFlag |= 1;
    }
    else
    {
        this->tikiFlag &= ~0x2;
        this->nonTikiParent = NULL;
    }
}

void zNPCTiki::ParentUpdated(zNPCTiki* parent)
{
    for (int i = 0; i < 4; i++)
    {
        if (parent == this->parents[i])
        {
            this->updatedParents |= (1 << i);
            return;
        }
    }
}

// Regswap
void zNPCTiki::RemoveFromFamily()
{
    U8 i;

    for (i = 0; i < sizeof(this->parents[0]); i++)
    {
        zNPCTiki* temp = this->parents[i];
        if (temp != NULL)
        {
            this->RemoveChild(temp);
            this->parents[i] = NULL;
        }
    }
    this->numParents = 0;
    this->contactParent = -1;

    for (i = 0; i < sizeof(this->children[0]); i++)
    {
        zNPCTiki* temp = this->children[i];
        if (temp != NULL)
        {
            this->RemoveParent(temp);
            this->children[i] = NULL;
        }
    }
    this->numChildren = 0;

    this->nonTikiParent = NULL;
    xVec3Init(&this->nonTikiParentDisp, 0.0f, 0.0f, 0.0f);
}

// Incomplete data
static void loveyFloat(zNPCTiki* tiki, F32 dt)
{
    xVec3 up_vec;

    xVec3Init(&up_vec, 0.0f, 1.0f, 0.0f);

    F32 amplitude = icos(tiki->t1 * 4.0f) * 0.2f;

    xVec3Copy((xVec3*)&tiki->model->Mat->pos, &tiki->v1);
    xVec3AddScaled((xVec3*)&tiki->model->Mat->pos, &up_vec, amplitude);

    tiki->t1 += dt;
    if (tiki->t1 > 6.2831855f)
    {
        tiki->t1 -= 6.2831855f;
    }

    tiki->t2 += 0.25f;
    if (tiki->t2 > 0.2501f)
    {
        tiki->t2 = -0.25f;
        tiki->t3 += 0.25f;
        if (tiki->t3 > 0.2501f)
        {
            tiki->t3 = -0.25f;
        }
    }
}

static S32 loveyIdleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)rawgoal->GetOwner();
    zNPCGoalTikiIdle* goal = (zNPCGoalTikiIdle*)rawgoal;
    S32 nextgoal = 0;

    if (tiki->nav_curr != NULL)
    {
        goal->tmr_wait = MAX(-1.0f, goal->tmr_wait - dt);

        if (tiki->npcset.allowPatrol != 0 && (goal->tmr_wait < 0.0f || tiki->nav_curr->on == NULL))
        {
            tiki->MvptCycle();

            if (tiki->nav_dest != NULL)
            {
                nextgoal = NPC_GOAL_TIKIPATROL;
                *trantype = GOAL_TRAN_SET;
            }
            else
            {
                goal->tmr_wait = zMovePointGetDelay(tiki->nav_curr);
            }
        }
    }

    loveyFloat(tiki, dt);

    return nextgoal;
}

static S32 loveyPatrolCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCTiki* tiki;
    S32 nextgoal;
    F32 dVar2;
    xVec3 afStack_38;

    tiki = (zNPCTiki*)rawgoal->GetOwner();
    zNPCGoalTikiPatrol* cur_goal = (zNPCGoalTikiPatrol*)rawgoal;
    nextgoal = 0;
    xVec3AddScaled(&(tiki->v1), &cur_goal->vel, dt);
    xVec3Sub(&afStack_38, &cur_goal->dest_pos, &(tiki->v1));
    dVar2 = xVec3Dot(&afStack_38, &cur_goal->vel);
    if (dVar2 < 0.0f)
    {
        xVec3Copy(&(tiki->v1), &cur_goal->dest_pos);
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_TIKIIDLE;
    }
    loveyFloat(tiki, dt);
    return nextgoal;
}

static S32 quietIdleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)rawgoal->GetOwner();
    zNPCGoalTikiIdle* goal = (zNPCGoalTikiIdle*)rawgoal;
    S32 nextgoal = 0;
    xVec3 tmp;

    xVec3Sub(&tmp, (xVec3*)&tiki->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->pos);
    F32 scale = xVec3Length2(&tmp);

    // non-matching:
    bool notSneaking =
        !(globals.player.Speed > 1 || globals.player.ent.model == globals.player.model_sandy ||
          globals.player.ent.model != globals.player.model_patrick);

    if (scale < 25.0f && notSneaking)
    {
        nextgoal = NPC_GOAL_TIKIHIDE;
        *trantype = GOAL_TRAN_SET;
    }
    else
    {
        if (scale < 50.0f && notSneaking)
        {
            tiki->tikiFlag &= ~0xC0;
        }
        scale = tiki->model->Scale.x;
        if (scale != 0.0f)
        {
            scale = 0.75f * dt + scale;
            xEntShow(tiki);
            tiki->RestoreColFlags();
            if (scale > 1.0f)
            {
                tiki->model->Scale.x = tiki->model->Scale.y = tiki->model->Scale.z = 0.0f;
            }
            else
            {
                tiki->model->Scale.x = tiki->model->Scale.y = tiki->model->Scale.z = scale;
            }
        }
    }

    return nextgoal;
}

// Regswap, incomplete data
static S32 quietHideCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)rawgoal->GetOwner();
    S32 nextgoal = 0;
    xVec3 tmp;

    xVec3Sub(&tmp, (xVec3*)&tiki->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->pos);
    F32 scale = xVec3Length2(&tmp);

    if (scale > 25.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_TIKIIDLE;
    }
    else
    {
        // Regswap
        if (tiki->model->Scale.x == 0.0f)
        {
            tiki->model->Scale.x = tiki->model->Scale.y = tiki->model->Scale.z = 1.0f;
        }

        scale = tiki->model->Scale.x - 2.0f * dt;
        if (scale < 0.00001f)
        {
            scale = 0.00001f;
            xEntHide(tiki);
            tiki->RestoreColFlags();
        }

        tiki->model->Scale.x = tiki->model->Scale.y = tiki->model->Scale.z = scale;
    }

    return nextgoal;
}

// WIP
static S32 thunderIdleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)rawgoal->GetOwner();
    zNPCGoalTikiIdle* goal = (zNPCGoalTikiIdle*)rawgoal;
    S32 nextgoal = 0;
    F32 f;

    tiki->t1 = -0.75f * dt + tiki->t1;
    if (tiki->t1 < 0.0f)
    {
        tiki->t1 += 1.0f;
    }

    f = tiki->t1;
    f = (f * f + 1.0f) - f;
    tiki->model->RedMultiplier = f;
    tiki->model->GreenMultiplier = f;
    tiki->model->BlueMultiplier = f;

    goal->tmr_wait -= dt;
    if (goal->tmr_wait < 0.0f)
    {
        xVec3 vec;
        xVec3Sub(&vec, (xVec3*)&tiki->model->Mat->pos, &globals.player.ent.model->Scale);

        F32 dist2 = xVec3Length2(&vec);

        F32 max_dist = globals.player.SlideTrackSliding + 0.91400003f;

        if (dist2 < max_dist * max_dist)
        {
            if ((globals.player.RootUpTarget.x) == 0)
            {
                tiki->t1 = 0.0f;
                nextgoal = NPC_GOAL_TIKICOUNT;
                *trantype = GOAL_TRAN_SET;
            }
            else
            {
                tiki->Damage(DMGTYP_SIDE, 0, 0);
            }
        }
    }

    return nextgoal;
}

// WIP
static S32 thunderCountCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    F32 gfactor;
    F32 factor;
    xVec3 sPos;
    xVec3 ePos;
    F32 hght;

    zNPCTiki* tiki = (zNPCTiki*)rawgoal->GetOwner();
    zNPCGoalTikiCount* goal = (zNPCGoalTikiCount*)rawgoal;
    S32 nextgoal = 0;

    factor = goal->tmr_count - dt;
    gfactor = -1.0f;
    if (factor >= -1.0f)
    {
        gfactor = factor;
    }
    goal->tmr_count = gfactor;

    if (gfactor < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_TIKIDYING;
    }

    factor = -1.0f / ((tiki->collis->chk) + 1.0f) + 1.0f;
    gfactor = (factor * 8.0f - factor * 8.0f) * 0.75f + 0.25f;

    if (tiki->gridb.data == NULL && globals.player.carry.grabbed == tiki)
    {
        *((F32*)tiki->gridb.data) = 1.0f;
        S32 tmpChk = tiki->collis->chk;
        tmpChk += 3;
        tiki->collis->chk = tmpChk;
    }

    tiki->model->RedMultiplier = gfactor;
    tiki->model->BlueMultiplier = 1.0f - gfactor;
    tiki->model->GreenMultiplier = (factor - factor) * 0.75f + 0.25f;

    tiki->tikiFlag &= ~0xC0;

    hght = tiki->t1 - dt;
    tiki->t1 = hght;

    if (hght < 0.0f)
    {
        hght = xurand();
        (tiki->t1) = hght * 0.5f + 0.9f;

        if ((xrand() & 7) == 0)
        {
            tiki->t1 = 0.2f;
        }

        xVec3Copy((xVec3*)&sPos, (xVec3*)&tiki->model->Mat->pos);
        sPos.y += 2.6f;
        sPos.x += (tiki->t2);
        sPos.z += (tiki->t3);

        xVec3Copy((xVec3*)&ePos, (xVec3*)&tiki->model->Mat->pos);

        hght = xurand();
        ePos.y += hght;

        gfactor = xurand();
        ePos.x += (1.0f - hght) * (gfactor - 0.5f);

        gfactor = xurand();
        ePos.z += (1.0f - hght) * (gfactor - 0.5f);

        sThunderLightningInfo.start = &sPos;
        sThunderLightningInfo.end = &ePos;

        zLightningAdd(&sThunderLightningInfo);
        tiki->SndPlayRandom(NPC_STYP_TIKITHUNDER);
    }

    xVec3Copy((xVec3*)&thunderEmitterInfo.pos, (xVec3*)&tiki->model->Mat->pos);
    thunderEmitterInfo.pos.y += 3.0f;
    thunderEmitterInfo.pos.x += tiki->t2;
    thunderEmitterInfo.pos.z += tiki->t3;
    xParEmitterEmitCustom(cloudEmitter, 1.0f / 60, &thunderEmitterInfo);

    tiki->t2 += 0.25f;
    if (tiki->t2 > 0.5001f)
    {
        tiki->t2 = 0.5001f;

        tiki->t3 += 0.25f;
        if (tiki->t3 > 0.5001f)
        {
            tiki->t3 = 0.5001f;
        }
    }

    return nextgoal;
}

static S32 tikiDyingCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    rawgoal->GetOwner();
    zNPCGoalTikiDying* goal = (zNPCGoalTikiDying*)rawgoal;
    S32 nextgoal = 0;

    goal->tmr_dying = (-1.0f > goal->tmr_dying - dt) ? -1.0f : goal->tmr_dying - dt;

    if (goal->tmr_dying < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_TIKIDEAD;
    }

    return nextgoal;
}

static S32 tikiDeadCB(xGoal* rawgoal, void*, en_trantype*, F32, void*)
{
    rawgoal->GetOwner();
    return 0;
}

// Incomplete data
static void genericTikiRender(xEnt* ent)
{
    if (!ent->model || !xEntIsVisible(ent))
    {
        return;
    }

    F32 dot = 2.0f;
    xVec3 tmp;

    if ((globals.player.ControlOff & 0x23f3) == 0)
    {
        xVec3Sub(&tmp, &ent->bound.box.center, &globals.camera.mat.pos);
        dot = xVec3Dot(&tmp, &globals.camera.mat.at);
    }

    if (dot < 1.5f)
    {
        ent->model->Alpha -= 3.0f * globals.update_dt;
    }
    else
    {
        ent->model->Alpha += 3.0f * globals.update_dt;
        if (ent->model->Alpha > 1.0f)
        {
            ent->model->Alpha = 1.0f;
        }
    }

    if (ent->model->Alpha < 0.0f)
    {
        ent->model->Alpha = 0.0f;
        return;
    }

    xModelRender(ent->model);
}

// WIP
static void loveyTikiRender(xEnt* ent)
{
    xShadowCache cache;
    xVec3 center;
    xModelInstance* model = ent->model;

    if (model == NULL)
        return;

    if (xEntIsVisible(ent) == 0)
        return;

    if ((model->Flags & 0x400) != 0)
        return;

    xVec3 shadVec;
    S32 nextgoal = 0;

    xVec3Sub(&shadVec, (xVec3*)&globals.player.ent.model->Mat->pos, (xVec3*)&model->Mat->pos);
    shadVec.y = 0.0f;
    F32 factor = 1.0f - xVec3Length2(&shadVec) / 25.0f;

    if (gCurrentPlayer != eCurrentPlayerSpongeBob)
    {
        factor = -1.0f;
    }

    cache.polyCount = 0;

    if (factor > 0.0f)
    {
        if (factor > 1.0f)
            factor = 1.0f;

        xVec3Copy(&center, (xVec3*)&model->Mat->pos);
        center.y += sLoveyIconOffset;

        NPCC_RenderProjTextureFaceCamera(sHelmetRast, factor, &center, 0.7f,
                                         sLoveyIconDist + sLoveyIconOffset, &cache, 1, ent);
    }

    S32 alphaTooLow = 0;

    center.x = model->Mat->pos.x;
    center.y = model->Mat->pos.y - 10.0f;
    center.z = model->Mat->pos.z;

    S32 shadowResult = iModelCullPlusShadow(model->Data, model->Mat, &center, &alphaTooLow);

    if (shadowResult == 0)
    {
        F32 dot = 2.0f;
        if ((globals.player.ControlOff & 0x23f3) == 0)
        {
            xVec3Sub(&shadVec, &(ent->bound).cyl.center, &globals.camera.mat.pos);
            dot = xVec3Dot(&shadVec, &globals.camera.mat.at);
        }

        if (dot < 1.5f)
        {
            model->Alpha -= 3.0f * globals.update_dt;
            if (model->Alpha < 0.0f)
            {
                model->Alpha = 0.0f;
                // non-matching:
                alphaTooLow = 1;
            }
        }
        else
        {
            model->Alpha += 3.0f * globals.update_dt;
            if (model->Alpha > 1.0f)
            {
                model->Alpha = 1.0f;
            }
        }

        for (xModelInstance* curr = model->Next; curr != NULL; curr = curr->Next)
        {
            curr->Alpha = model->Alpha;
        }

        // non-matching:
        if (alphaTooLow)
        {
            return;
        }

        xModelRender(model);
    }

    if ((factor < 0.5f || cache.polyCount == 0) && alphaTooLow == 0)
    {
        xShadowSimple_Add(ent->simpShadow, ent, 0.667f, 1.0f);
    }
}
