#include "iAnim.h"
#include "iModel.h"
#include "rwcore.h"
#include "types.h"
#include "xDebug.h"
#include "xMath.h"
#include "xString.h"
#include "xutil.h"
#include "zGlobals.h"
#include "zNPCGoals.h"
#include "zNPCGoalTiki.h"
#include "zNPCHazard.h"
#include "zNPCSndLists.h"
#include "zNPCSupplement.h"
#include "zNPCTypes.h"
#include "zNPCTypeTiki.h"

#define ANIM_COUNT 2

extern const char* g_strz_tikianim[ANIM_COUNT];
extern U32 g_hash_tikianim[ANIM_COUNT];
extern zParEmitter* cloudEmitter;
extern xParEmitterCustomSettings loveyEmitterInfo;
extern xParEmitterCustomSettings thunderEmitterInfo;
static RwRaster* sHelmetRast;
static _tagLightningAdd sThunderLightningInfo;

static zNPCTiki* orphanList;

// Taken from zNPCTypeTiki.s
// Defining these here makes the stringBase0 offsets match in the later functions.
static char* str1 = "Unknown";
static char* str2 = "Idle01";
static char* str3 = "PAREMIT_THUNDER_CLOUD";
static char* str4 = "PAREMIT_CLOUD";
static char* str5 = "target";
static char* str6 = "zNPCTiki";
static char* str7 = "what the ...\n";
static char* str8 = "Idle";

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
    xAnimTableNewState(table, g_strz_tikianim[1], 0x110, 1, -1.0f, NULL, NULL, 0.0f, NULL, NULL,
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
    for(int i=0; i < sizeof(parents[0]); i++) {
        parents[i] = NULL;
    }
    numParents = 0; // needs to store as byte
    contactParent = 0xffffffff;

    for(int i=0; i < sizeof(children[0]); i++) {
        children[i] = NULL;
    }
    numChildren = 0; // needs to store as byte
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
    U32 i;
    F32 duration;
    xQuat* q0;
    xVec3* t0 = NULL;
    F32 dy;
    F32 dh;

    float fVar1;
    float fVar2;
    char* puVar3;
    int iVar4;
    uint uVar5;
    xModelInstance* pxVar6;
    xPsyche* this_00;
    RwMatrixTag* pRVar7;
    xEnt* pxVar8;
    RwV3d* pRVar9;
    xEntFrame* pxVar10;
    zNPCTiki* pzVar11;
    zNPCTiki* pzVar12;
    int iVar13;
    int iVar14;
    float* pfVar15;
    int iVar16;
    U32 in_register_00004008;
    double dVar17;
    U64 uVar18;
    double dVar19;
    float fStack_88;
    float local_84 = 0.0f;
    float afStack_7c[3];
    float fStack_70;
    float local_6c = 0.0f;
    float fStack_64;
    float local_60;
    float local_54;
    float afStack_4c[6];

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
                    //pzVar11 = &(pzVar11->super_zNPCCommon).super_xNPCBasic.super_xEnt.super_xBase.baseType;
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
                    pRVar7 = (this->model)->Mat;
                    fVar1 = dt * this->vel;
                    (pRVar7->pos).y = (pRVar7->pos).y + fVar1;
                    *(&this->bound.box.box.lower + 4) += fVar1;
                    *(&this->bound.box.box.upper + 4) += fVar1;
                    this->bound.sph.center.y = this->bound.sph.center.y + fVar1;
                    if (*&this->numParents == '\0')
                    {
                        fVar1 = *(&this->bound.box.box.lower.y);
                        if (fVar1 < this->landHt)
                        {
                            fVar2 = this->landHt - fVar1;
                            *(&this->bound.box.box.lower.y) = fVar1 + fVar2;
                            *(&this->bound.box.box.upper.y) += fVar2;
                            this->bound.sph.center.y += fVar2;
                            pRVar7 = (this->model)->Mat;
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
                            xVec3SubFrom(&t0, &((this->model)->Mat->pos).x);
                            if ((this->tikiFlag & 1) != 0)
                            {
                                local_54 = 0.0f;
                            }
                            xVec3AddTo(&this->bound.field_3 + 0x18, &t0);
                            xVec3AddTo(&this->bound.sph.r, &t0);
                            xVec3AddTo(&this->bound.field_3, &t0);
                            uVar18 = xVec3AddTo(&((this->model)->Mat->pos).x, &t0);
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
                    pRVar7 = (this->model)->Mat;
                    (pRVar7->pos).x =
                        (pRVar7->pos).x + (this->parents[this->contactParent]->deltaPos).x;
                    pRVar7 = (this->model)->Mat;
                    (pRVar7->pos).z =
                        (pRVar7->pos).z + (this->parents[this->contactParent]->deltaPos).z;
                    if ((this->tikiFlag & 1) == 0)
                    {
                        fVar1 = this->bound.box.box.lower.y;
                        fVar2 = this->parents[this->contactParent]->bound.box.box.upper.y - fVar1;
                        this->bound.box.box.lower.y = fVar1 + fVar2;
                        this->bound.box.box.upper.y += fVar2;
                        this->bound.sph.center.y = this->bound.sph.center.y + fVar2;
                        pRVar7 = (this->model)->Mat;
                        (pRVar7->pos).y = (pRVar7->pos).y + fVar2;
                    }
                }
                xVec3Copy((xVec3*)&(this->model->Mat->at), &(this->lastAt));
                if (this->isCulled == '\0')
                {
                    //xVec3Sub(&fStack_64, *(globals._1796_4_ + 0x4c) + 0x30,
                    //&((this->model)->Mat->pos).x);
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
                            xVec3AddScaled(0.2f / dt, &((this->model)->Mat->at).x, &fStack_64);
                            pRVar9 = &(this->model)->Mat->at;
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
                    pRVar7 = (this->model)->Mat;
                    xVec3Cross((xVec3*)&pRVar7, (xVec3*)&(pRVar7->up), (xVec3*)&(pRVar7->at));
                }
                xVec3Copy((xVec3*)&(this->lastAt), (xVec3*)&(this->model->Mat->at));
                pxVar6 = this->model;
                dt = (pxVar6->Scale).x;
                if (dt == 0.0f)
                {
                    xVec3Add((xVec3*)&this->bound.sph, (xVec3*)&(pxVar6->Mat->pos),
                             (xVec3*)&(this->origLocalBound).sph);
                    /*xVec3Add(&this->bound.field_3 + 0x18, &((this->model)->Mat->pos).x,
                             &(this->origLocalBound).field_3 + 0x18);
                    xVec3Add(&this->bound.field_3, &((this->model)->Mat->pos).x,
                             &(this->origLocalBound).field_3);*/
                }
                else
                {
                    /*xVec3SMul(dt, &fStack_70, &(this->origLocalBound).sph.r);
                    xVec3SMul(((this->model)->Scale).x, afStack_7c,
                              &(this->origLocalBound).field_3 + 0x18);
                    xVec3SMul(((this->model)->Scale).x, &fStack_88,
                              &(this->origLocalBound).field_3);
                    xVec3Add(&this->bound.sph.r, &((this->model)->Mat->pos).x, &fStack_70);
                    xVec3Add(&this->bound.field_3 + 0x18, &((this->model)->Mat->pos).x, afStack_7c);
                    xVec3Add(&this->bound.field_3, &((this->model)->Mat->pos).x, &fStack_88);*/
                    local_6c += 0.0001f;
                    local_84 += 0.00005f;
                }
                //xVec3Sub(&(this->deltaPos).x, &((this->model)->Mat->pos).x, afStack_4c);
                if (*&this->numChildren != '\0')
                {
                    uVar5 = 0;
                    pzVar11 = this;
                    do
                    {
                        if (pzVar11->children[0] != 0x0)
                        {
                            //ParentUpdated(pzVar11->children[0], this);
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

void zNPCTiki::FindParents(zScene* zsc)
{
    return;
}

// very close, but there are some float order issues
static S32 tikiDyingCB(xGoal* rawgoal, void*, en_trantype* trantype, float dt, void*)
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
