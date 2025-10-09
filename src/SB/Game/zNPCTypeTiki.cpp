#include "iAnim.h"
#include "iModel.h"
#include "rwcore.h"
#include "types.h"
#include "xDebug.h"
#include "xMath.h"
#include "xModel.h"
#include "xString.h"
#include "xutil.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zNPCGoals.h"
#include "zNPCGoalTiki.h"
#include "zNPCHazard.h"
#include "zNPCSndLists.h"
#include "zNPCSupplement.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"
#include "zNPCTypeTiki.h"

#define ANIM_COUNT 2

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

// need to do more of this
void zNPCTiki_InitFX(zScene* scene)
{
    RwTexture* tex;

    cloudEmitter = zParEmitterFind("PAREMIT_THUNDER_CLOUD");
    if (cloudEmitter == 0)
    {
        cloudEmitter = zParEmitterFind("PAREMIT_CLOUD");
    }

    // clang-format off
    thunderEmitterInfo.custom_flags = 0xf5e;
    thunderEmitterInfo.vel.x = 0.0f;
    thunderEmitterInfo.vel.y = -0.3f;
    thunderEmitterInfo.vel.z = 0.0f;
    thunderEmitterInfo.vel_angle_variation = 4.712389f;
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
    loveyEmitterInfo.custom_flags = 0xf5e;
    loveyEmitterInfo.vel.x = 0.0f;
    loveyEmitterInfo.vel.y = -0.5f;
    loveyEmitterInfo.vel.z = 0.0f;
    loveyEmitterInfo.vel_angle_variation = 1.5707964f;
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
    if (tex == NULL)
    {
        sHelmetRast = 0;
    }
    else
    {
        sHelmetRast = tex->raster;
    }
    NPCC_MakeLightningInfo(NPC_LYT_TIKITHUNDER, &sThunderLightningInfo);
    sThunderLightningInfo.time = 0.3f;
}

void zNPCTiki_ExplodeFX(zNPCTiki* tiki)
{
    xVec3 shockwavePos;
    NPCHazard* haz;
    zScene* zsc;
    unsigned int i;
}

static void zNPCTiki_PickTikisToAnimate()
{
    xCollis* coll;
    xCollis* cend;
    xNPCBasic* npc;
    zNPCTiki* currOrphan;
}

void zNPCTiki_Timestep(xScene* xscn, F32 dt)
{
    zNPCTiki_PickTikisToAnimate();
    zNPCTiki_ReparentOrphans();
    timeSinceLastExplode += dt;
    g_tmr_talkytiki -= dt;
    if (g_tmr_talkytiki < -1.0f)
    {
        g_tmr_talkytiki = -1.0f;
    }
    return;
}

void zNPCTiki_ReparentOrphans()
{
    zNPCTiki* holder;

    if ((globals.sceneCur)->sceneID == 'BB04')
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
        flg_vuln = 0xffff0001;
    }

    timeToLive = 0.0f;
    tikiFlag = 0;
    for (int i = 0; i < sizeof(parents[0]); i++)
    {
        parents[i] = NULL;
    }
    numParents = 0;
    contactParent = 0xffffffff;

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
        // .sdata2 @1084 (-0.25f) incomplete
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
    xVec3* local_28 = NULL;
    xVec3* local_1c = NULL;

    ((zNPCCommon*)this)->Init(entass);
    this->flags = this->flags | 0x40;
    this->baseFlags = this->baseFlags | 0x10;
    iBoxForModel(&this->bound.box.box, this->model);
    for (nextModel = this->model->Next; nextModel != 0x0; nextModel = nextModel->Next)
    {
        xVec3Copy(local_1c, &this->bound.qcd.min);
        xVec3Copy(local_28, &this->bound.box.box.upper);
        iBoxForModel(&this->bound.box.box, this->model->Next);
        if (this->bound.box.box.lower.x > local_1c->x)
        {
            this->bound.box.box.lower.x = local_1c->x;
        }
        if (this->bound.box.box.lower.y > local_1c->y)
        {
            this->bound.box.box.lower.y = local_1c->y;
        }
        if (this->bound.box.box.lower.z > local_1c->z)
        {
            this->bound.box.box.lower.z = local_1c->z;
        }
        if (this->bound.box.box.upper.x < local_28->x)
        {
            this->bound.box.box.upper.x = local_28->x;
        }
        if (this->bound.box.box.upper.y < local_28->y)
        {
            this->bound.box.box.upper.y = local_28->y;
        }
        if (this->bound.box.box.upper.z < local_28->z)
        {
            this->bound.box.box.upper.z = local_28->z;
        }
    }
    this->origLocalBound.type = XBOUND_TYPE_BOX;
    xVec3Sub(&this->origLocalBound.qcd.min, &this->bound.qcd.min, (xVec3*)&(this->model->Mat->pos));
    xVec3Sub(&this->origLocalBound.box.box.upper, &this->bound.box.box.upper,
             (xVec3*)&(this->model->Mat->pos));
    xVec3Add(&this->origLocalBound.qcd.min, &this->origLocalBound.qcd.min,
             &this->origLocalBound.box.box.upper);
    xVec3SMulBy(&this->origLocalBound.qcd.min, 0.5f);
    this->nextOrphan = NULL;
    iVar1 = ((xNPCBasic*)this)->SelfType();
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
        this->tikiFlag &= 0xffffff3f;
        this->tikiFlag |= 0x40;
    }
    else
    {
        this->tikiAnim = *pxVar2->Single->State->Data->RawData;
        this->tikiAnimTime = this->model->Anim->Single->Time;
        this->model->Anim = NULL;
        this->tikiFlag &= 0xffffff3f;
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
    S32 i = 0;

    if (((xNPCBasic*)this)->SelfType() == NPC_TYPE_TIKI_LOVEY)
    {
        return 0;
    }

    if (cs == zNPCCARRY_THROW)
    {
        return 0;
    }

    if (cs >= zNPCCARRY_THROW)
    {
        if (cs < 4)
        {
            if (this->numChildren == 0)
            {
                return 1;
            }

            // unrolled child loop
            if (this->children[0] != NULL &&
                (this->children[0]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y)))
            {
                return 0;
            }

            if (this->children[1] != NULL &&
                (this->children[1]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y)))
            {
                return 0;
            }

            if (this->children[2] != NULL &&
                (this->children[2]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y)))
            {
                return 0;
            }

            if (this->children[3] != NULL &&
                (this->children[3]->bound.box.box.lower.y < (0.2f + this->bound.box.box.upper.y)))
            {
                return 0;
            }

            return 1;
        }

        return 0;
    }

    if (cs != zNPCCARRY_NONE)
    {
        if (cs >= 0)
        {
            this->tikiFlag |= 0x10;
            this->landHt = -9.9999997E+37f;
            RemoveFromFamily();
            return 1;
        }

        return 0;
    }

    if ((this->tikiFlag & 0x10) == 0)
    {
        return 0;
    }

    this->tikiFlag &= 0xFFFFFFEF;

    if (this->frame != NULL)
    {
        (this->frame->mat).up.x = 0.0f;
        (this->frame->mat).up.y = 1.0f;
        (this->frame->mat).up.z = 0.0f;
    }

    (this->model->Mat->up).x = 0.0f;
    (this->model->Mat->up).y = 1.0f;
    (this->model->Mat->up).z = 0.0f;

    if (((xNPCBasic*)this)->SelfType() == NPC_TYPE_TIKI_STONE)
    {
        this->tikiFlag |= 0x25;
        this->bound.type = XBOUND_TYPE_BOX;
    }
    else
    {
        ((zNPCCommon*)this)->Damage(DMGTYP_SIDE, 0, NULL);
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

    if (this->myNPCType == NPC_GOAL_TIKIPATROL)
    {
        goal->SetCallbacks(loveyIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKIPATROL, NULL);
        goal->SetCallbacks(loveyPatrolCB, NULL, 0, NULL);
    }

    else if (this->myNPCType < NPC_GOAL_TIKICOUNT && NPC_GOAL_TIKIIDLE < this->myNPCType)
    {
        goal->SetCallbacks(quietIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKIHIDE, NULL);
        goal->SetCallbacks(quietHideCB, NULL, 0, NULL);
    }

    else if (this->myNPCType == NPC_GOAL_TIKICOUNT)
    {
        goal->SetCallbacks(thunderIdleCB, NULL, 0, NULL);
        goal = psy->AddGoal(NPC_GOAL_TIKICOUNT, NULL);
        goal->SetCallbacks(thunderCountCB, NULL, 0, NULL);
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
    F32 fVar2;
    char* puVar3;
    S32 iVar4;
    U32 uVar5;
    xModelInstance* pxVar6;
    xPsyche* this_00;
    RwMatrixTag* pRVar7;
    xEnt* pxVar8;
    RwV3d* pRVar9;
    xEntFrame* pxVar10;
    zNPCTiki* pzVar11;
    zNPCTiki* pzVar12;
    S32 iVar13;
    S32 iVar14;
    F32* pfVar15;
    S32 iVar16;
    U32 in_register_00004008;
    F64 dVar17;
    U64 uVar18;
    F64 dVar19;
    F32 fStack_88;
    F32 local_84 = 0.0f;
    F32 afStack_7c[3];
    F32 fStack_70;
    F32 local_6c = 0.0f;
    F32 fStack_64;
    F32 local_60;
    F32 local_54;
    F32 afStack_4c[6];

    if ((this->numChildren == NULL) || ((this->tikiFlag & 8) != 0))
    {
        this->tikiFlag = this->tikiFlag & 0xfffffff7;
        if ((this->tikiFlag & 0x300) == 0x200)
        {
            this->Process(xscn, dt);
        }
        else
        {
            if ((this->tikiAnim != 0x0) && ((this->tikiFlag & 0xc0) == 0))
            {
                dVar17 = iAnimDuration(this->tikiAnim);
                this->tikiAnimTime = this->tikiAnimTime + dt;
                if (dVar17 <= this->tikiAnimTime)
                {
                    if ((xrand() & 1) == 0)
                    {
                        this->tikiAnimTime = 0.0f;
                        this->tikiFlag = this->tikiFlag & 0xffffff3f;
                        this->tikiFlag = this->tikiFlag | 0x40;
                    }
                    else
                    {
                        this->tikiAnimTime = this->tikiAnimTime - dVar17;
                    }
                }

                iAnimEval(this->tikiAnim, this->tikiAnimTime, (U32)0, (xVec3*)giAnimScratch + 0x410,
                          (xQuat*)giAnimScratch);
                iModelAnimMatrices(this->model->Data, (xQuat*)giAnimScratch,
                                   (xVec3*)giAnimScratch + 0x410, this->model->Mat);
            }
            xVec3Copy(t0, (xVec3*)&this->model->Mat->pos);
            if (this->numParents != 0)
            {
                int uVar5 = 0;
                pzVar11 = this;
                do
                {
                    pzVar12 = pzVar11->parents[0];
                    if ((pzVar12 != 0x0) && ((this->updatedParents & 1 << uVar5) == 0))
                    {
                        pzVar12->tikiFlag = pzVar12->tikiFlag | 8;
                        //(**(*(pzVar11->parents[0]->super_zNPCCommon).field1_0x1b8 + 0x1c))(dt, pzVar11->parents[0], xscn);
                    }
                    uVar5 = uVar5 + 1;
                    pzVar11->id = pzVar11->baseType;
                } while (uVar5 < 4);
            }
            if ((this->tikiFlag & 0x300) == 0x100)
            {
                this->RemoveFromFamily();
                this->tikiFlag = this->tikiFlag & 0xfffffcff;
                this->tikiFlag = this->tikiFlag | 0x200;
            }
            else
            {
                if ((this->tikiFlag & 4) != 0)
                {
                    if (this->nextOrphan == 0x0)
                    {
                        this->nextOrphan = orphanList;
                        orphanList = this;
                    }
                    else
                    {
                        xprintf("what the ...\n");
                    }
                }
                this->tikiFlag = this->tikiFlag & 0xfffffffb;
                this_00 = this->psy_instinct;
                if (this_00 != 0x0)
                {
                    this_00->Timestep(dt, 0);
                }
                this->Process(xscn, dt);
                if (*&this->numParents != '\0')
                {
                    iVar13 = 0;
                    iVar16 = 2;
                    pzVar11 = this;
                    do
                    {
                        iVar4 = this->contactParent;
                        if ((iVar13 != iVar4) && (pzVar11->parents[0] != 0x0))
                        {
                            if (iVar4 == -1)
                            {
                                this->contactParent = iVar13;
                            }
                            else if (this->parents[iVar4]->bound.qcd.min.z <
                                     pzVar11->parents[0]->bound.box.box.upper.y)
                            {
                                this->contactParent = iVar13;
                            }
                        }
                        iVar4 = this->contactParent;
                        iVar14 = iVar13 + 1;
                        if ((iVar14 != iVar4) && (pzVar11->parents[1] != 0x0))
                        {
                            if (iVar4 == -1)
                            {
                                this->contactParent = iVar14;
                            }
                            else if ((this->parents[iVar4]->bound.box.box.upper.y) <
                                     (pzVar11->parents[1]->bound.box.box.upper.y))
                            {
                                this->contactParent = iVar14;
                            }
                        }
                        pzVar11 = (zNPCTiki*)pzVar11->link;
                        iVar13 = iVar13 + 2;
                        iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                }
                if ((this->tikiFlag & 1) != 0)
                {
                    this->vel = -(10.0f * dt - this->vel);
                    pRVar7 = this->model->Mat;
                    fVar1 = dt * this->vel;
                    (pRVar7->pos).y = (pRVar7->pos).y + fVar1;
                    *(&this->bound.box.box.lower.y) += fVar1;
                    this->bound.box.box.upper.y += fVar1;
                    this->bound.sph.center.y = this->bound.sph.center.y + fVar1;
                    if (*&this->numParents == '\0')
                    {
                        fVar1 = *(&this->bound.box.box.lower.y);
                        if (fVar1 < this->landHt)
                        {
                            fVar2 = this->landHt - fVar1;
                            *(&this->bound.box.box.lower.y) = fVar1 + fVar2;
                            this->bound.box.box.upper.y += fVar2;
                            this->bound.sph.center.y += fVar2;
                            pRVar7 = this->model->Mat;
                            (pRVar7->pos).y = (pRVar7->pos).y + fVar2;
                            this->tikiFlag = this->tikiFlag & 0xfffffffe;
                            if ((this->tikiFlag & 2) != 0)
                            {
                                //(**(*(this->super_zNPCCommon).field1_0x1b8 + 0x80))(this, 0xe, 0,0);
                            }
                            if (this->vel < -0.1f)
                            {
                                this->SndPlayRandom(NPC_STYP_TIKISTACK);
                            }
                            this->vel = 0.0f;
                        }
                    }
                    else if (*(&this->bound.box.box.lower.y) <
                             *(&this->parents[this->contactParent]->bound.box.box.upper.y))
                    {
                        this->tikiFlag = this->tikiFlag & 0xfffffffe;
                        if (this->vel < -0.1f)
                        {
                            this->SndPlayRandom(NPC_STYP_TIKISTACK);
                        }
                        this->vel = 0.0f;
                    }
                }
                if (*&this->numParents == '\0')
                {
                    pxVar8 = this->nonTikiParent;
                    if (pxVar8 != 0x0)
                    {
                        if (((pxVar8->chkby & 0x10) == 0) || ((pxVar8->penby & 0x10) == 0))
                        {
                            this->nonTikiParent = 0x0;
                            this->tikiFlag = this->tikiFlag | 5;
                            this->landHt = -1.0e38f;
                        }
                        else
                        {
                            xVec3Copy(t0, (xVec3*)&pxVar8->model->Mat->pos);
                            /*xVec3AddScaled((xVec3*)&this->nonTikiParent->model->Mat->right, &t0,
                                           (this->nonTikiParentDisp).x);
                            xVec3AddScaled((xVec3*)&this->nonTikiParent->model->Mat->up, &t0,
                                           (this->nonTikiParentDisp).y);
                            xVec3AddScaled((xVec3*)&this->nonTikiParent->model->Mat->at, &t0,
                                           (this->nonTikiParentDisp).z);
                            xVec3SubFrom(&t0, &(this->model->Mat->pos).x);
                            if ((this->tikiFlag & 1) != 0)
                            {
                                local_54 = 0.0f;
                            }
                            xVec3AddTo(&this->bound.qcd.min, &t0);
                            xVec3AddTo(&this->bound.sph.r, &t0);
                            xVec3AddTo(&this->bound.field_3, &t0);
                            uVar18 = xVec3AddTo(&(this->model->Mat->pos).x, &t0);
                            if (((this->tikiFlag & 1) == 0) &&
                                (this->nonTikiParent->baseType == '\x18'))
                            {
                                zEntButton_Hold(uVar18, param_2, param_3, param_4, param_5, param_6,
                                                param_7, param_8, this->nonTikiParent, 0x2000);
                            }*/
                        }
                    }
                }
                else
                {
                    pRVar7 = this->model->Mat;
                    (pRVar7->pos).x =
                        (pRVar7->pos).x + (this->parents[this->contactParent]->deltaPos).x;
                    pRVar7 = this->model->Mat;
                    (pRVar7->pos).z =
                        (pRVar7->pos).z + (this->parents[this->contactParent]->deltaPos).z;
                    if ((this->tikiFlag & 1) == 0)
                    {
                        fVar1 = this->bound.box.box.lower.y;
                        fVar2 = this->parents[this->contactParent]->bound.box.box.upper.y - fVar1;
                        this->bound.box.box.lower.y = fVar1 + fVar2;
                        this->bound.box.box.upper.y += fVar2;
                        this->bound.sph.center.y = this->bound.sph.center.y + fVar2;
                        pRVar7 = this->model->Mat;
                        (pRVar7->pos).y = (pRVar7->pos).y + fVar2;
                    }
                }
                xVec3Copy((xVec3*)&(this->model->Mat->at), &(this->lastAt));
                if (this->isCulled == '\0')
                {
                    //xVec3Sub(&fStack_64, *(globals._1796_4_ + 0x4c) + 0x30,
                    //&(this->model->Mat->pos).x);
                    local_60 = 0.0f;
                    //dt = xVec3Length2(&fStack_64);
                    if ((dt < 400.0f) && (this->isCulled == '\0')) //&&
                    //(numTikisOnScreen = numTikisOnScreen + 1,
                    // numTikisOnScreen == whichTikiToAnimate))
                    {
                        this->tikiFlag = this->tikiFlag & 0xffffff3f;
                    }
                    /*if ((globals._7172_4_ != this) && (globals._7176_4_ != this))
                    {
                        if ((1.0f < dt) && (dt < 400.0f))
                        {
                            xVec3AddScaled(0.2f / dt, &(this->model->Mat->at).x, &fStack_64);
                            pRVar9 = &this->model->Mat->at;
                            xVec3Normalize(&pRVar9->x, &pRVar9->x);
                        }
                        if (((dt < @861) && (g_tmr_talkytiki < 0.0f)) &&
                            ((this->tikiFlag & 0x300) == 0))
                        {
                            zNPCCommon::ISeePlayer(&this->super_zNPCCommon);
                            dt = xurand();
                            g_tmr_talkytiki = 90.0f * 0.25f * (dt - 0.5f) + 90.0f;
                        }
                    }*/
                    pRVar7 = this->model->Mat;
                    xVec3Cross((xVec3*)&pRVar7, (xVec3*)&(pRVar7->up), (xVec3*)&(pRVar7->at));
                }
                xVec3Copy((xVec3*)&(this->lastAt), (xVec3*)&(this->model->Mat->at));
                pxVar6 = this->model;
                dt = (pxVar6->Scale).x;
                if (dt == 0.0f)
                {
                    xVec3Add((xVec3*)&this->bound.box.box.upper, (xVec3*)&(pxVar6->Mat->pos),
                             (xVec3*)&this->origLocalBound.box.box.upper);
                    xVec3Add(&this->bound.qcd.min, (xVec3*)&(this->model->Mat->pos),
                             &this->origLocalBound.qcd.min);
                    xVec3Add(&this->bound.box.box.upper, (xVec3*)&(this->model->Mat->pos),
                             &this->origLocalBound.box.box.upper);
                }
                else
                {
                    /*xVec3SMul(dt, &fStack_70, &this->origLocalBound.sph.r);
                    xVec3SMul((this->model->Scale).x, afStack_7c,
                              &this->origLocalBound.qcd.min);
                    xVec3SMul((this->model->Scale).x, &fStack_88,
                              &this->origLocalBound.field_3);
                    xVec3Add(&this->bound.sph.r, &(this->model->Mat->pos).x, &fStack_70);
                    xVec3Add(&this->bound.qcd.min, &(this->model->Mat->pos).x, afStack_7c);
                    xVec3Add(&this->bound.field_3, &(this->model->Mat->pos).x, &fStack_88);*/
                    local_6c += 0.0001f;
                    local_84 += 0.00005f;
                }
                //xVec3Sub(&(this->deltaPos).x, &(this->model->Mat->pos).x, afStack_4c);
                if (*&this->numChildren != '\0')
                {
                    uVar5 = 0;
                    pzVar11 = this;
                    do
                    {
                        if (pzVar11->children[0] != 0x0)
                        {
                            ParentUpdated(pzVar11->children[0]);
                        }
                        uVar5 = uVar5 + 1;
                        //pzVar11 = pzVar11->baseType;
                    } while (uVar5 < 4);
                }
                this->updatedParents = 0;
                pxVar10 = this->frame;
                if (pxVar10 != 0x0)
                {
                    pxVar10->mode = 0x30000;
                }
            }
        }
    }
    return;
}

// WIP: unsure of what enum/constants toEvent uses, and no xrefs seem to show up
S32 zNPCTiki::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                       xBase* toParamWidget, S32* handled)
{
    if (toEvent == 0x54) // 84
    {
        this->chkby = 0;
        *handled = TRUE;
    }
    else if (toEvent < 0x54)
    {
        if (toEvent == 0x32) // 50
        {
            // No
            //if (((this->tikiFlag & 0x300) != 0x200) && this->explosion && this->explosion->shrap)
            //{
            //this->explosion->shrap->Emit(this->model, 0, 0);
            //}

            this->RemoveFromFamily();
            //this->brain->Destroy(this);

            if (((xNPCBasic*)this)->SelfType() != 'NTT1')
            {
                this->tikiFlag |= 5;
                this->tikiFlag &= ~8;
                this->vel = 0.0f;
                this->landHt = -9.9999997E+37f;
            }

            *handled = TRUE;
        }
        else if (toEvent == 4)
        {
            if (xEntIsVisible(this) && toParam && ((S32)(0.5f + *toParam) == 'M'))
            {
                zFXPopOff(*this, toParam[1], toParam[2]);
            }

            xEntHide(this);
            *handled = TRUE;
        }
        else if (toEvent == 3)
        {
            if (((this->tikiFlag & 0x300) != 0x200))
            {
                xEntShow(this);
                if (toParam && ((S32)(0.5f + *toParam) == 'M'))
                {
                    zFXPopOn(*this, toParam[1], toParam[2]);
                }
            }
            *handled = TRUE;
        }
        else if (toEvent > 0x31 && toEvent <= 0x53) // 50–83
        {
            if ((this->tikiFlag & 0x300) != 0x200)
            {
                ((xNPCBasic*)this)->RestoreColFlags();
            }
            *handled = TRUE;
        }
    }
    else if (toEvent == 0x56) // 86
    {
        this->chkby = 0;

        if (xEntIsVisible(this) && toParam && ((S32)(0.5f + *toParam) == 'M'))
        {
            zFXPopOff(*this, toParam[1], toParam[2]);
        }

        xEntHide(this);
        *handled = TRUE;
    }
    else if (toEvent < 0x56)
    {
        if ((this->tikiFlag & 0x300) != 0x200)
        {
            ((xNPCBasic*)this)->RestoreColFlags();
            xEntShow(this);
            if (toParam && ((S32)(0.5f + *toParam) == 'M'))
            {
                zFXPopOn(*this, toParam[1], toParam[2]);
            }
        }
        *handled = TRUE;
    }
    else if (toEvent == 0x1F7) // 503
    {
        if ((this->tikiFlag & 0x300) != 0x200)
        {
            xEntShow(this);
            if (toParam && ((S32)(0.5f + *toParam) == 'M'))
            {
                zFXPopOn(*this, toParam[1], toParam[2]);
            }
        }
        *handled = TRUE;
    }
    else if (toEvent == 0x1F8 || toEvent == 0x1F9) // 504–505
    {
        if (xEntIsVisible(this) && toParam && ((S32)(0.5f + *toParam) == 'M'))
        {
            zFXPopOff(*this, toParam[1], toParam[2]);
        }

        xEntHide(this);
        *handled = TRUE;
    }

    if (*handled == 0)
        return zNPCCommon::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);

    return TRUE;
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

    while (this->children[i & 0xff] != child && (i & 0xff) < 4)
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

    while (this->parents[i & 0xff] != parent && (i & 0xff) < 4)
    {
        i++;
    }

    if (this->parents[i & 0xff] == parent)
    {
        this->parents[i & 0xff] = NULL;
        this->numParents--;
    }

    // non-matching: https://decomp.me/scratch/E0dej
    if ((i & 0xff) == this->contactParent)
    {
        this->contactParent = -1;
        this->tikiFlag |= 1;
    }

    this->tikiFlag |= 4;
}

void zNPCTiki::FindParents(zScene* zsc)
{
    return;
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

void zNPCTiki::RemoveFromFamily()
{
    U8 i;

    for (i = 0; i < 4; i++)
    {
        if (this->parents[i] != NULL)
        {
            RemoveChild(this->parents[i]);
            this->parents[i] = NULL;
        }
    }
    this->numParents = 0;
    this->contactParent = -1;

    for (i = 0; i < 4; i++)
    {
        if (this->children[i] != NULL)
        {
            RemoveParent(this->children[i]);
            this->children[i] = NULL;
        }
    }
    this->numChildren = 0;

    this->nonTikiParent = NULL;
    xVec3Init(&this->nonTikiParentDisp, 0.0f, 0.0f, 0.0f);
}

void loveyFloat(zNPCTiki* tiki, F32 dt)
{
    F32 unk_float;
    xVec3* unk_vec = NULL;

    xVec3Init(unk_vec, 0.0f, 1.0f, 0.0f);
    unk_float = 0.2f * icos(4.0f * tiki->t1);
    xVec3Copy((xVec3*)&tiki->model->Mat->pos, &tiki->v1);
    xVec3AddScaled((xVec3*)&tiki->model->Mat->pos, unk_vec, unk_float);
    tiki->t1 += dt;
    if (6.2831855f < tiki->t1)
    {
        tiki->t1 -= 6.2831855f;
    }
    tiki->t2 += 0.25f;
    if (0.2501f < tiki->t2)
    {
        tiki->t2 = -0.25f;
        tiki->t3 += 0.25f;
        if (0.2501f < tiki->t3)
        {
            tiki->t3 = -0.25f;
        }
    }
    return;
}

S32 loveyIdleCB(xGoal*, void*, enum en_trantype*, F32, void*);
S32 loveyPatrolCB(xGoal*, void*, enum en_trantype*, F32, void*);
S32 quietIdleCB(xGoal*, void*, enum en_trantype*, F32, void*);
S32 quietHideCB(xGoal*, void*, enum en_trantype*, F32, void*);
S32 thunderIdleCB(xGoal*, void*, enum en_trantype*, F32, void*);
S32 thunderCountCB(xGoal*, void*, enum en_trantype*, F32, void*);

// very close, but there are some float order issues
static S32 tikiDyingCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
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

static S32 tikiDeadCB(xGoal* rawgoal, void*, en_trantype*, F32, void*)
{
    rawgoal->GetOwner();
    return 0;
}

static void genericTikiRender(xEnt* ent)
{
    if (!ent->model || !xEntIsVisible(ent))
    {
        return;
    }

    F32 dot = 2.0f;

    if ((globals.player.ControlOff & 0x23f3) == 0)
    {
        xVec3* tmp = NULL;
        xVec3Sub(tmp, &ent->bound.box.center, &globals.camera.mat.pos);
        dot = xVec3Dot(tmp, &globals.camera.mat.at);
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

    xModelRender(ent->model->Next);
}

// WIP
static void loveyTikiRender(xEnt* ent)
{
    xModelInstance* model;
    F32 factor;
    xShadowCache cache;
    xVec3 center;
    S32 shadowResult;
    S32 alphaTooLow;
    xVec3 shadVec;
    F32 dot;
    xModelInstance* curr;

    model = ent->model;

    if (model == (xModelInstance*)0x0)
        return;

    if (xEntIsVisible(ent) == 0)
        return;

    if ((model->Flags & 0x400) != 0)
        return;

    xVec3Sub(&shadVec, &globals.player.ent.bound.mat->at, (xVec3*)&(model->Mat->pos));

    factor = 1.0f - xVec3Length2(&shadVec) / 25.0f;

    if (gCurrentPlayer != 0)
    {
        factor = -1.0f;
    }

    shadowResult = 0;
    if (0.0f < factor)
    {
        if (1.0f < factor)
        {
            factor = 1.0f;
        }

        xVec3Copy(&center, (xVec3*)&(ent->model->Mat->pos));

        NPCC_RenderProjTextureFaceCamera(sHelmetRast, factor, &center, 0.7f,
                                         sLoveyIconDist + sLoveyIconOffset, NULL, 1, ent);
    }

    alphaTooLow = 0;

    center.x = model->Mat->pos.x;
    center.y = model->Mat->pos.y - 10.0f;
    center.z = model->Mat->pos.z;

    shadowResult = iModelCullPlusShadow(model->Data, model->Mat, &center, &alphaTooLow);

    if (shadowResult == 0)
    {
        dot = 2.0f;
        if ((globals.player.ControlOff & 0x23f3) == 0)
        {
            xVec3Sub(&shadVec, &(ent->bound).qcd.min, &globals.camera.mat.pos);
            dot = xVec3Dot(&shadVec, &globals.camera.mat.at);
        }

        if (dot < 1.5f)
        {
            model->Alpha = -(3.0f * globals.update_dt - model->Alpha);
            if (model->Alpha < 0.0f)
            {
                model->Alpha = 0.0f;
                alphaTooLow = 1;
            }
        }
        else
        {
            model->Alpha = 3.0f * globals.update_dt + model->Alpha;
            if (1.0f < model->Alpha)
            {
                model->Alpha = 1.0f;
            }
        }

        for (curr = model->Next; curr != NULL; curr = curr->Next)
        {
            curr->Alpha = model->Alpha;
        }

        if (alphaTooLow)
            return;

        xModelRender(model->Next);
    }

    if (((factor < 0.5f) || (shadowResult == 0)) && (alphaTooLow == 0))
    {
        xShadowSimple_Add(ent->simpShadow, ent, 0.667f, 1.0f);
    }

    return;
}

// .text (d8)

zNPCTiki::zNPCTiki(S32 myType) : zNPCCommon(myType)
{
}

S32 zNPCTiki::CanRope()
{
    return 1;
}

U32 zNPCTiki::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
{
    return xStrHash("Idle");
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

U8 zNPCTiki::ColChkFlags() const
{
    return 0;
}

U8 zNPCTiki::ColPenFlags() const
{
    return 0;
}

U8 zNPCTiki::ColChkByFlags() const
{
    return 24;
}

U8 zNPCTiki::ColPenByFlags() const
{
    return 24;
}

U8 zNPCTiki::PhysicsFlags() const
{
    return 0;
}
