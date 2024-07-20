#include "zEntPickup.h"

#include "zLOD.h"
#include "zGame.h"
#include "zGlobals.h"
#include "zEntPlayerBungeeState.h"
#include "zEntSimpleObj.h"
#include "zGrid.h"
#include "zFX.h"
#include "zUI.h"

#include "xMath.h"
#include "xFX.h"
#include "xstransvc.h"
#include "iAnim.h"
#include "iModel.h"

#include <string.h>
#include <stdio.h>

#define PICKUP_TYPE_SHINY 0
#define PICKUP_TYPE_1 1

#define SHINY_PURPLE 0
#define SHINY_BLUE 1
#define SHINY_GREEN 2
#define SHINY_YELLOW 3
#define SHINY_RED 4
#define SHINY_COUNT 5

#define PICKUP_SPATULA 0
#define PICKUP_UNDERWEAR 1
#define PICKUP_GOLDEN_UNDERWEAR 2
#define PICKUP_4 4
#define PICKUP_SUNDAE 5
#define PICKUP_SOCK 6
#define PICKUP_SPONGEBALL 7
#define PICKUP_8 8
#define PICKUP_9 9
#define PICKUP_10 10
#define PICKUP_11 11
#define PICKUP_12 12
#define PICKUP_13 13
#define PICKUP_14 14

#define REWARD_TYPE_COUNT SHINY_COUNT
#define REWARD_COUNT 20
#define REWARD_PICKUP_COUNT 10

struct ShinySparkly
{
    U16 pickupType;
    U16 pickupIndex;
    F32 radius;
    F32 std_rate;
    F32 fly_rate;
    U8 br;
    U8 bg;
    U8 bb;
    U8 ba;
    U8 dr;
    U8 dg;
    U8 db;
    U8 da;
    U32 envmapID;
    F32 shininess;
};

struct _tagKeyShake
{
    xVec3 orig_pos;
    F32 shake_timer;
    F32 shake_it;
    _zUI* ui;
};

struct RewardList
{
    bool active;
    F32 timer;
    xVec3* ppos;
    xVec3 pos;
    U32 num;
    U32 currRequest;
    U32 pickups[REWARD_COUNT];
};

zParEmitter* gEmitShinySparkles = NULL;

static F32 SPARKLE_MAX_RATE = 30.0f;

U32 gEnableRewardsQueue = 1;

static F32 sSpatulaGrabbedSpinMult = 0.0f;
static F32 sSpatulaGrabbedLife = 3.5f;
static F32 sUnderwearFade = 1.0f;

#define bubble 0xB5126DFC // bubble RWTX in boot.HIP

// clang-format off
static ShinySparkly ShinySparklyTable[] =
{
    {
        PICKUP_TYPE_SHINY, SHINY_RED,
        0.15f, 50.0f, 25.0f,
        255, 255, 255, 255,
        255, 255, 255, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_SHINY, SHINY_YELLOW,
        0.2f, 50.0f, 50.0f,
        255, 255, 255, 255,
        255, 255, 255, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_SHINY, SHINY_GREEN,
        0.2f, 50.0f, 100.0f,
        255, 255, 255, 255,
        255, 255, 255, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_SHINY, SHINY_BLUE,
        0.25f, 75.0f, 150.0f,
        255, 255, 255, 255,
        255, 255, 255, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_SHINY, SHINY_PURPLE,
        0.4f, 110.0f, 200.0f,
        255, 255, 255, 255,
        255, 255, 255, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_1, PICKUP_SPATULA,
        0.4f, 20.0f, 0.0f,
        255, 255, 224, 255,
        255, 255, 224, 255,
        bubble,
        0.5f
    },
    {
        PICKUP_TYPE_1, PICKUP_GOLDEN_UNDERWEAR,
        0.15f, 10.0f, 0.0f,
        255, 255, 224, 255,
        255, 255, 224, 255,
        bubble,
        0.5f
    }
};
// clang-format on

// clang-format off
static RwMatrix sPickupOrientation =
{
    { 1.0f, 0.0f, 0.0f }, 0,
    { 0.0f, 1.0f, 0.0f }, 0,
    { 0.0f, 0.0f, 1.0f }, 0,
    { 0.0f, 0.0f, 0.0f }, 0
};
// clang-format on

static _tagKeyShake sKeyShake[4] = {};

static zEntPickup* rewardPickups[REWARD_TYPE_COUNT][REWARD_PICKUP_COUNT];
static RewardList sRewards[REWARD_COUNT];
static zLODTable sRewardLOD[REWARD_TYPE_COUNT];
static xEntFrame gPickupFrame;
static xEntCollis gPickupCollis;
static zEntPickup* sSpatulaAlreadyGiven = NULL;
static zEntPickup* sSpatulaBungeeDeferred = NULL;

static void PickupFallPhysics(zEntPickup* ent, xScene* sc, F32 dt)
{
    // non-matching: scheduling, float regalloc

    gPickupFrame.mat = *(xMat4x3*)ent->model->Mat;
    gPickupFrame.mat.pos.y -= 0.8f;
    gPickupFrame.oldmat = gPickupFrame.mat;

    gPickupCollis.chk = 0x22;
    gPickupCollis.pen = 0x22;

    ent->vel.y -= 15.0f * dt;

    if (ent->vel.y < -20.0f)
    {
        ent->vel.y = -20.0f;
    }

    gPickupFrame.mat.pos.x += ent->vel.x * dt;
    gPickupFrame.mat.pos.y += ent->vel.y * dt;
    gPickupFrame.mat.pos.z += ent->vel.z * dt;

    if (!(ent->state & 0x80) || ent->vel.y < 0.0f)
    {
        ent->frame = &gPickupFrame;
        ent->collis = &gPickupCollis;

        xEntCollide(ent, sc, dt);

        ent->frame = NULL;
        ent->collis = NULL;
    }

    gPickupFrame.mat.pos.y += 0.8f;

    *(xMat4x3*)ent->model->Mat = gPickupFrame.mat;

    if ((gPickupCollis.colls[0].flags & 0x1) && ent->vel.y < 0.0f)
    {
        ent->vel.x = 0.0f;
        ent->vel.y = 0.0f;
        ent->vel.z = 0.0f;
        ent->state &= ~0x3f;
        ent->state |= 0x1;
    }
}

U32 isRewardPickup(zEntPickup* ent)
{
    char name[512];

    for (S32 i = 0; i < 50; i++)
    {
        sprintf(name, "%s%02d", "boot_reward_pickup", i);

        if (ent->id == xStrHash(name))
        {
            return 1;
        }
    }

    return 0;
}

void zEntPickup_Startup()
{
}

void zEntPickupInit(void* ent, void* asset)
{
    zEntPickupInit((zEntPickup*)ent, (xEntAsset*)asset);
}

void zEntPickupInit(zEntPickup* ent, xEntAsset* asset)
{
    xEntPickupAsset* pickupAsset = (xEntPickupAsset*)(asset + 1);
    U32 i, tmpsize;

    zEntInit(ent, asset, 'PKUP');

    if (ent->linkCount)
    {
        ent->link = (xLinkAsset*)((xEntPickupAsset*)(ent->asset + 1) + 1);
    }
    else
    {
        ent->link = NULL;
    }

    for (i = 0; i < ent->linkCount; i++)
    {
        if (ent->link[i].dstEvent == eEventDispatcher_SetSaveState_Saving) // ???????????
        {
            ent->link[i].dstAssetID = ent->id;
        }
    }

    ent->pflags = 0;
    ent->chkby = 0;
    ent->penby = 0;
    ent->update = (xEntUpdateCallback)zEntPickup_Update;
    ent->render = NULL;
    ent->move = NULL;
    ent->eventFunc = zEntPickupEventCB;
    ent->followTarget = NULL;
    ent->followOffset.x = 0.0f;
    ent->followOffset.y = 0.0f;
    ent->followOffset.z = 0.0f;
    ent->shake_timer = 0.0f;
    ent->snackGateInfoDisplayed = 0;
    ent->dropParent = NULL;

    zAssetPickup* ptbl = (zAssetPickup*)(globals.pickupTable + 1);

    for (i = 0; i < globals.pickupTable->Count; i++)
    {
        if (pickupAsset->pickupHash == ptbl[i].pickupHash)
        {
            ptbl += i;
            break;
        }
    }

    RpAtomic* modelData = (RpAtomic*)xSTFindAsset(ptbl->modelID, &tmpsize);
    void* animData = NULL;

    if (!modelData)
    {
        ptbl = (zAssetPickup*)(globals.pickupTable + 1);
        modelData = (RpAtomic*)xSTFindAsset(ptbl->modelID, &tmpsize);
    }

    if (ptbl->animID)
    {
        animData = xSTFindAsset(ptbl->animID, &tmpsize);

        if (iAnimBoneCount(animData) != iModelNumBones(modelData))
        {
            animData = NULL;
        }
    }

    ent->model = xModelInstanceAlloc(modelData, ent, 0, 0, NULL);
    ent->model->Flags &= (U16)~0x2;
    ent->model->modelID = ptbl->modelID;
    ent->simpShadow = &ent->simpShadow_embedded;

    xShadowSimple_CacheInit(ent->simpShadow, ent, 80);

    ent->simpShadow->flags |= 0x8;
    ent->state = 0x41;
    ent->p = ptbl;
    ent->pickupFlags = 0;

    if (pickupAsset->pickupFlags & 0x1)
    {
        ent->pickupFlags |= 0x1;
    }

    if (pickupAsset->pickupFlags & 0x2)
    {
        ent->pickupFlags |= 0x2;
    }

    ent->anim = animData;
    ent->animTime = 0.0f;
    ent->timer = 0.0f;
    ent->fx_timer = 0.0f;
    ent->fx_par = NULL;
    ent->fx_emit = NULL;
    ent->fx_scale = 1.0f;
    ent->flyflags = 0;

    zEntReset(ent);

    ent->bound.type = XBOUND_TYPE_SPHERE;
    ent->bound.sph.r = 1.0f;

    xVec3Add(&ent->bound.sph.center, (xVec3*)&ent->model->Mat->pos,
             (xVec3*)&ent->model->Data->boundingSphere.center);

    xEntDriveInit(&ent->drv, ent);

    ShinySparkly* sp = ShinySparklyTable;

    for (i = 0; i < sizeof(ShinySparklyTable) / sizeof(ShinySparkly); i++, sp++)
    {
        if (ent->p->pickupType == sp->pickupType && ent->p->pickupIndex == sp->pickupIndex)
        {
            xFXAtomicEnvMapSetup(ent->model->Data, sp->envmapID, sp->shininess);
        }
    }

    S32 found = 0;

    for (S32 i = 0; i < REWARD_TYPE_COUNT; i++)
    {
        char name[512];

        for (S32 j = 0; j < REWARD_PICKUP_COUNT; j++)
        {
            sprintf(name, "%s%d%d", "boot_reward_pickup", i, j);

            if (ent->id == xStrHash(name))
            {
                rewardPickups[i][j] = ent;

                ent->state = 0x48;

                xEntHide(ent);

                found = 1;

                break;
            }
        }

        if (found)
        {
            break;
        }
    }
}

void zEntPickup_Setup(zEntPickup* p)
{
    zEntSetup(p);
}

void zEntPickup_Setup()
{
    xBase* base;
    zScene* zsc;
    U32 i, j;
    zEntPickup* p;
    xVec3* srcPos;

    zsc = globals.sceneCur;

    memset(sRewards, 0, sizeof(sRewards));

    gEnableRewardsQueue = 1;

    for (i = 0; i < zsc->num_base; i++)
    {
        base = zsc->base[i];

        if (base)
        {
            for (j = 0; j < base->linkCount; j++)
            {
                if (base->link[j].dstEvent == eEventDrop)
                {
                    p = (zEntPickup*)zSceneFindObject(base->link[j].dstAssetID);

                    if (p && p->baseType == eBaseTypePickup && p->state != 0x10)
                    {
                        srcPos = &p->asset->pos;

                        switch (base->baseType)
                        {
                        case eBaseTypeVillain:
                        {
                            p->flg_opts |= 0x1;
                            p->flg_opts |= 0x2;
                            p->useThisEntPos = (xEnt*)base;
                        }
                        case eBaseTypeStatic:
                        case eBaseTypeDynamic:
                        case eBaseTypeButton:
                        case eBaseTypeDestructObj:
                        case eBaseTypeLobMaster:
                        {
                            srcPos = &((xEnt*)base)->asset->pos;
                        }
                        }

                        zEntPickup_MakeDroppable(p, srcPos, NULL);
                    }
                }
            }
        }
    }
}

S32 zEntPickupEventCB(xBase*, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    zEntPickup* p = (zEntPickup*)to;
    xEntFrame frame;

    switch (toEvent)
    {
    case eEventVisible:
    {
        if (!(p->state & 0x8))
        {
            xEntShow(p);

            if (toParam && (S32)(0.5f + toParam[0]) == 77)
            {
                zFXPopOn(*p, toParam[1], toParam[2]);
            }
        }

        break;
    }
    case eEventInvisible:
    {
        xEntHide(p);

        if (toParam && (S32)(0.5f + toParam[0]) == 77)
        {
            zFXPopOff(*p, toParam[1], toParam[2]);
        }

        break;
    }
    case eEventCollision_Visible_On:
    {
        if (!(p->state & 0x8))
        {
            p->pickupFlags |= 0x2;

            xEntShow(p);

            if (toParam && toParam && (S32)(0.5f + toParam[0]) == 77)
            {
                zFXPopOn(*p, toParam[1], toParam[2]);
            }
        }

        break;
    }
    case eEventCollision_Visible_Off:
    {
        p->pickupFlags &= (U8)~0x2;

        xEntHide(p);

        if (toParam && (S32)(0.5f + toParam[0]) == 77)
        {
            zFXPopOff(*p, toParam[1], toParam[2]);
        }

        break;
    }
    case eEventReset:
    {
        zEntPickup_Reset(p);
        break;
    }
    case eEventPickup:
    {
        if (p->state & 0x1)
        {
            zEntPickup_DoPickup(p);
        }

        break;
    }
    case eEventDrop:
    {
        if (p->state == 0x10)
        {
            zEntPickup_Drop(p);
        }

        break;
    }
    case eEventFollowTarget:
    {
        p->followTarget = toParamWidget;
        p->followOffset.x = toParam[0];
        p->followOffset.y = toParam[1];
        p->followOffset.z = toParam[2];

        break;
    }
    case eEventMount:
    {
        frame.mat = *(xMat4x3*)p->model->Mat;

        p->frame = &frame;

        xEntDriveMount(&p->drv, (xEnt*)toParamWidget, 0.00001f, NULL);

        p->frame = NULL;

        break;
    }
    case eEventDismount:
    {
        frame.mat = *(xMat4x3*)p->model->Mat;

        p->frame = &frame;

        xEntDriveDismount(&p->drv, 0.00001f);

        p->frame = NULL;

        break;
    }
    }

    return 1;
}

void zEntPickup_FlyToInterface(zEntPickup*, F32)
{
}

struct zEntPickup_cbData
{
    xScene* sc;
    F32 dt;
};

static S32 CheckPickupAgainstPlayer(xEnt* cbent, void*);

void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, F32 dt)
{
    zEntPickup_cbData cbdata;

    cbdata.sc = sc;
    cbdata.dt = dt;

    xGridCheckPosition(&colls_grid, (xVec3*)&globals.player.ent.model->Mat->pos,
                       &globals.player.ent.bound.qcd, CheckPickupAgainstPlayer, &cbdata);
}

static S32 CheckPickupAgainstPlayer(xEnt* cbent, void*)
{
    if (cbent->baseType != eBaseTypePickup)
    {
        return 1;
    }

    zEntPickup* ent = (zEntPickup*)cbent;

    if ((ent->state & 0x40) && 0.0f == ent->timer && !(ent->state & 0x8) && !(ent->state & 0x4) &&
        !(ent->state & 0x20) && globals.player.Health != 0)
    {
        ent->fx_scale = 1.0f;

        if (ent->pickupFlags & 0x1)
        {
            ent->baseFlags &= 0x7f;
        }

        F32 distance;
        zEnt* plent = &globals.player.ent;
        F32 distsqr;
        F32 dx__ = plent->bound.sph.center.x - ent->model->Mat->pos.x;
        F32 dy__ = plent->bound.sph.center.y - ent->model->Mat->pos.y;
        F32 dz__ = plent->bound.sph.center.z - ent->model->Mat->pos.z;
        F32 chkdist = 4.0f * plent->bound.sph.r;

        distance = SQR(dx__) + SQR(dy__) + SQR(dz__);

        if (distance <= SQR(chkdist))
        {
            if (ent->pickupFlags & 0x2)
            {
                if (ent->p->pickupType == PICKUP_TYPE_SHINY)
                {
                    zEntPickup_DoPickup(ent);
                }

                if (ent->p->pickupType == PICKUP_TYPE_1)
                {
                    switch (ent->p->pickupIndex)
                    {
                    case PICKUP_UNDERWEAR:
                    {
                        if (globals.player.Health < globals.player.MaxHealth)
                        {
                            zEntPickup_DoPickup(ent);
                        }

                        break;
                    }
                    case PICKUP_SOCK:
                    {
                        for (S32 i = 0; i < 5; i++)
                        {
                            xFXFireworksLaunch(0.5f + xurand(), (xVec3*)&ent->model->Mat->pos,
                                               0.5f * xurand() + 0.1f);
                        }

                        zEntPickup_DoPickup(ent);

                        break;
                    }
                    case PICKUP_SPATULA:
                    {
                        if (bungee_state::active())
                        {
                            chkdist = 1.5f * plent->bound.sph.r;
                            distsqr = distance;
                        }
                        else
                        {
                            chkdist = 1.5f * plent->bound.sph.r;

                            xVec3 var_2C, var_38;

                            xVec3Copy(&var_2C, (xVec3*)&ent->model->Mat->pos);
                            xVec3Copy(&var_38, (xVec3*)&ent->model->Mat->pos);

                            var_2C.y += 0.5f * chkdist;
                            var_38.y -= 0.5f * chkdist;

                            F32 dist2_1, dist2_2;

                            {
                                F32 dx__ = plent->bound.sph.center.x - var_2C.x;
                                F32 dy__ = plent->bound.sph.center.y - var_2C.y;
                                F32 dz__ = plent->bound.sph.center.z - var_2C.z;

                                dist2_1 = SQR(dx__) + SQR(dy__) + SQR(dz__);
                            }

                            {
                                F32 dx__ = plent->bound.sph.center.x - var_38.x;
                                F32 dy__ = plent->bound.sph.center.y - var_38.y;
                                F32 dz__ = plent->bound.sph.center.z - var_38.z;

                                dist2_2 = SQR(dx__) + SQR(dy__) + SQR(dz__);
                            }

                            distsqr = MIN(dist2_1, dist2_2);
                        }

                        if (distsqr <= SQR(chkdist))
                        {
                            if (!bungee_state::active())
                            {
                                zEntPlayerControlOff(CONTROL_OWNER_REWARDANIM);
                            }

                            for (S32 i = 0; i < 10; i++)
                            {
                                xFXFireworksLaunch(xurand(), (xVec3*)&ent->model->Mat->pos,
                                                   0.5f * xurand() + 0.1f);
                            }

                            zEntPlayer_SNDPlay(ePlayerSnd_PickupSpatula, 0.0f);
                            zEntPickup_DoPickup(ent);
                        }

                        break;
                    }
                    case PICKUP_SPONGEBALL:
                    {
                        if (distance <= SQR(1.5f * plent->bound.sph.r) &&
                            gCurrentPlayer == eCurrentPlayerSpongeBob)
                        {
                            zEntPickup_DoPickup(ent);
                        }

                        break;
                    }
                    case PICKUP_GOLDEN_UNDERWEAR:
                    case PICKUP_4:
                    case PICKUP_SUNDAE:
                    {
                        zEntPickup_DoPickup(ent);
                        break;
                    }
                    case PICKUP_8:
                    case PICKUP_9:
                    case PICKUP_11:
                    {
                        zEntPickup_DoPickup(ent);
                        break;
                    }
                    case PICKUP_10:
                    case PICKUP_12:
                    case PICKUP_13:
                    case PICKUP_14:
                    {
                        zEntPickup_DoPickup(ent);
                        break;
                    }
                    }
                }
            }
        }
    }

    return 1;
}

void zEntPickup_DoPickup(zEntPickup* ent)
{
    ent->grab_pos = *xEntGetPos(ent);
    ent->flyflags |= 0x1;
    ent->state = (ent->state & ~0x3f) | 0x4;

    if (ent->p->pickupType == PICKUP_TYPE_1 && ent->p->pickupIndex == PICKUP_SPATULA)
    {
        zEntPlayer_SNDPlayStream(ePlayerStreamSnd_SpatulaComment1);

        if (!bungee_state::active())
        {
            zEntPlayerControlOff(CONTROL_OWNER_REWARDANIM);
            zEntPlayer_GiveSpatula(1);

            xMat4x3 mat;

            xMat4x3Copy(&mat, (xMat4x3*)&sPickupOrientation);
            xVec3Copy(&mat.pos, (xVec3*)&ent->model->Mat->pos);
            xMat4x3Copy((xMat4x3*)ent->model->Mat, &mat);
        }
    }
}

void zEntPickup_GivePickup(zEntPickup* ent)
{
    if (ent->p->pickupType == PICKUP_TYPE_SHINY)
    {
        switch (ent->p->pickupIndex)
        {
        case SHINY_PURPLE:
        {
            globals.player.Inv_Shiny += globals.player.g.ShinyValuePurple;
            break;
        }
        case SHINY_BLUE:
        {
            globals.player.Inv_Shiny += globals.player.g.ShinyValueBlue;
            break;
        }
        case SHINY_GREEN:
        {
            globals.player.Inv_Shiny += globals.player.g.ShinyValueGreen;
            break;
        }
        case SHINY_YELLOW:
        {
            globals.player.Inv_Shiny += globals.player.g.ShinyValueYellow;
            break;
        }
        case SHINY_RED:
        {
            globals.player.Inv_Shiny += globals.player.g.ShinyValueRed;
            break;
        }
        }

        if (globals.player.Inv_Shiny > 99999)
        {
            globals.player.Inv_Shiny = 99999;
        }
    }
    else if (ent->p->pickupType == PICKUP_TYPE_1)
    {
        switch (ent->p->pickupIndex)
        {
        case PICKUP_SPATULA:
        {
            if (sSpatulaAlreadyGiven != ent)
            {
                globals.player.Inv_Spatula++;
            }

            break;
        }
        case PICKUP_UNDERWEAR:
        {
            if (globals.player.Health != 0)
            {
                globals.player.Health++;

                if (globals.player.Health > globals.player.MaxHealth)
                {
                    globals.player.Health = globals.player.MaxHealth;
                }
            }

            break;
        }
        case PICKUP_GOLDEN_UNDERWEAR:
        {
            globals.player.MaxHealth++;

            if (globals.player.MaxHealth > 6)
            {
                globals.player.MaxHealth = 6;
            }

            globals.player.Health = globals.player.MaxHealth;

            if (globals.player.MaxHealth == 4)
            {
                zEntPlayer_SNDPlayStream(ePlayerStreamSnd_GoldenUnderwear4);
            }
            else if (globals.player.MaxHealth == 5)
            {
                zEntPlayer_SNDPlayStream(ePlayerStreamSnd_GoldenUnderwear5);
            }
            else if (globals.player.MaxHealth == 6)
            {
                zEntPlayer_SNDPlayStream(ePlayerStreamSnd_GoldenUnderwear6);
            }

            break;
        }
        case PICKUP_SUNDAE:
        {
            globals.player.SundaeTimer = globals.player.g.SundaeTime;
            globals.player.SpeedMult = globals.player.g.SundaeMult;
            break;
        }
        case PICKUP_SOCK:
        {
            zEntPlayer_GivePatsSocksCurrentLevel(1);
            break;
        }
        case PICKUP_SPONGEBALL:
        {
            zEntPlayer_setBoulderMode(1);
            break;
        }
        case PICKUP_8:
        case PICKUP_9:
        case PICKUP_10:
        case PICKUP_11:
        case PICKUP_12:
        case PICKUP_14:
        {
            globals.player.Inv_LevelPickups[zSceneGetLevelIndex()]++;
            globals.player.Inv_LevelPickups_CurrentLevel =
                globals.player.Inv_LevelPickups[zSceneGetLevelIndex()];
            break;
        }
        }
    }

    zEntEvent(ent, eEventPickup);
}

static void collectPickup(zEntPickup* ent)
{
    xEntHide(ent);
    zEntPickup_GivePickup(ent);

    ent->state = (ent->state & ~0x3f) | 0x8;

    if (isRewardPickup(ent))
    {
        ent->baseFlags &= 0x7f;
    }

    ent->timer = 0.5f;
    ent->model->Mat->pos.x = ent->asset->pos.x;
    ent->model->Mat->pos.y = ent->asset->pos.y;
    ent->model->Mat->pos.z = ent->asset->pos.z;

    if (!isRewardPickup(ent))
    {
        if (ent->p->pickupType == PICKUP_TYPE_SHINY)
        {
            switch (ent->p->pickupIndex)
            {
            case SHINY_PURPLE:
            {
                zEntPlayer_SNDPlayStream(ePlayerStreamSnd_ShinyComment5);
                break;
            }
            case SHINY_BLUE:
            case SHINY_GREEN:
            case SHINY_YELLOW:
            case SHINY_RED:
            {
                if ((xrand() & 0x3) == 3)
                {
                    zEntPlayer_SNDPlayStreamRandom(0, 1, ePlayerStreamSnd_ShinyComment1,
                                                   ePlayerStreamSnd_ShinyComment2, 0.3f);
                    zEntPlayer_SNDPlayStreamRandom(2, 25, ePlayerStreamSnd_ShinyComment1,
                                                   ePlayerStreamSnd_ShinyComment3, 0.3f);
                    zEntPlayer_SNDPlayStreamRandom(26, 100, ePlayerStreamSnd_ShinyComment1,
                                                   ePlayerStreamSnd_ShinyComment4, 0.3f);
                }

                break;
            }
            }
        }
        else
        {
            switch (ent->p->pickupIndex)
            {
            case PICKUP_UNDERWEAR:
            {
                zEntPlayer_SNDPlay(ePlayerSnd_PickupUnderwear, 0.0f);
                zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_UnderwearComment1,
                                               ePlayerStreamSnd_UnderwearComment3, 1.3f);

                break;
            }
            case PICKUP_SOCK:
            {
                if ((xrand() & 0x3) == 3)
                {
                    zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_PickupSock1,
                                                   ePlayerStreamSnd_PickupSock3, 0.0f);
                }

                break;
            }
            case PICKUP_8:
            case PICKUP_9:
            case PICKUP_11:
            {
                zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_PickupSpecialGeneric1,
                                               ePlayerStreamSnd_PickupSpecialGeneric1, 0.0f);

                break;
            }
            }
        }
    }
}

void zEntPickup_GiveAllRewardsNow()
{
    zEntPickup* ent;
    U32 i, j;

    for (i = 0; i < REWARD_TYPE_COUNT; i++)
    {
        for (j = 0; j < REWARD_PICKUP_COUNT; j++)
        {
            ent = rewardPickups[i][j];

            if (ent)
            {
                xEntHide(ent);

                if (ent->state & 0x4)
                {
                    zEntPickup_GivePickup(ent);
                }

                ent->state = (ent->state & ~0x3f) | 0x8;
                ent->timer = 10.0f;
                ent->model->Mat->pos.x = ent->asset->pos.x;
                ent->model->Mat->pos.y = ent->asset->pos.y;
                ent->model->Mat->pos.z = ent->asset->pos.z;
            }
        }
    }

    U32 total = 0;

    for (i = 0; i < REWARD_COUNT; i++)
    {
        if (sRewards[i].active)
        {
            for (j = 0; j < sRewards[i].num; j++)
            {
                switch (sRewards[i].pickups[j])
                {
                case SHINY_PURPLE:
                {
                    total += globals.player.g.ShinyValuePurple;
                    break;
                }
                case SHINY_BLUE:
                {
                    total += globals.player.g.ShinyValueBlue;
                    break;
                }
                case SHINY_GREEN:
                {
                    total += globals.player.g.ShinyValueGreen;
                    break;
                }
                case SHINY_YELLOW:
                {
                    total += globals.player.g.ShinyValueYellow;
                    break;
                }
                case SHINY_RED:
                {
                    total += globals.player.g.ShinyValueRed;
                    break;
                }
                }
            }
        }
    }

    globals.player.Inv_Shiny += total;

    if (globals.player.Inv_Shiny > 99999)
    {
        globals.player.Inv_Shiny = 99999;
    }

    memset(sRewards, 0, sizeof(sRewards));
}

void zEntPickup_Reset(zEntPickup* ent)
{
    zEntReset(ent);

    ent->state = 0x41;
    ent->animTime = 0.0f;
    ent->timer = 0.0f;
    ent->vel.x = ent->vel.y = ent->vel.z = 0.0f;
    ent->bound.type = XBOUND_TYPE_SPHERE;
    ent->shake_timer = 0.0f;
    ent->fx_timer = 0.0f;
    ent->fx_par = NULL;
    ent->fx_emit = NULL;
    ent->fx_scale = 1.0f;
    ent->flyflags = 0;

    if (isRewardPickup(ent))
    {
        ent->state = 0x48;
        ent->flyflags = 0x1;
    }

    // this is likely really slow, assuming zEntPickup_Reset runs for every single pickup in the level...
    // might be faster to move this to zEntPickup_SceneReset
    gEmitShinySparkles = zParEmitterFind("PAREMIT_SHINY_SPARKLES");
}

void zEntPickup_Save(zEntPickup* ent, xSerial* s)
{
    zEntSave(ent, s);

    s->Write_b7(ent->state);

    if (ent->pickupFlags & 0x2)
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }
}

void zEntPickup_Load(zEntPickup* ent, xSerial* s)
{
    S32 is_a_dropper = 0;

    zEntLoad(ent, s);

    if (ent->state & 0x10)
    {
        is_a_dropper = 1;
    }

    U32 state = 0;
    S32 coll = 0;

    s->Read_b7(&state);
    s->Read_b1(&coll);

    if (state & 0x4)
    {
        ent->state = (ent->state & ~0x3f) | 0x8;

        xEntHide(ent);
    }

    ent->state = state;

    if (coll)
    {
        ent->pickupFlags |= 0x2;
    }
    else
    {
        ent->pickupFlags &= (U8)~0x2;
    }

    if (ent->pickupFlags & 0x1)
    {
        ent->timer = 1.0f;
    }

    if (is_a_dropper && (ent->state & 0x23))
    {
        if (ent->dropParent && ent->dropParent->baseType == eBaseTypeStatic &&
            !(ent->dropParent->baseFlags & 0x2) &&
            (((zEntSimpleObj*)ent->dropParent)->sflags & 0x1))
        {
            printf("Put back  %f %f %f    %f %f %f\n", //
                   ent->model->Mat->pos.x, ent->model->Mat->pos.y, ent->model->Mat->pos.z,
                   ent->droppos.x, ent->droppos.y, ent->droppos.z);

            ent->state = 0x10;

            xEntHide(ent);
        }
        else
        {
            xVec3Copy((xVec3*)&ent->model->Mat->pos, &ent->droppos);
        }
    }
}

void zEntPickup_FlushGrabbed()
{
    zScene* s = globals.sceneCur;
    zEntPickup* it = (zEntPickup*)s->baseList[eBaseTypePickup];
    zEntPickup* end = it + s->baseCount[eBaseTypePickup];

    while (it != end)
    {
        if ((it->state & 0x4) && !isRewardPickup(it))
        {
            xEntHide(it);
            zEntPickup_GivePickup(it);

            it->state = (it->state & ~0x3f) | 0x8;
            it->timer = 0.5f;
            it->model->Mat->pos.x = it->asset->pos.x;
            it->model->Mat->pos.y = it->asset->pos.y;
            it->model->Mat->pos.z = it->asset->pos.z;
        }

        it++;
    }
}

void zEntPickup_MakeDroppable(zEntPickup* ent, xVec3* pos, xBase* dropParent)
{
    ent->droppos = *(xVec3*)&ent->model->Mat->pos;
    *(xVec3*)&ent->model->Mat->pos = *pos;
    ent->state = 0x10;

    xEntHide(ent);

    ent->dropParent = dropParent;
}

void zEntPickup_Drop(zEntPickup* ent)
{
    ent->state = 0xC2;

    xEntShow(ent);

    if ((ent->flg_opts & 0x2) && ent->useThisEntPos)
    {
        xVec3Copy(&ent->droppos, xEntGetPos(ent->useThisEntPos));
        xVec3Copy((xVec3*)&ent->model->Mat->pos, xEntGetPos(ent->useThisEntPos));
    }

    F32 b = xsqrt(75.0f);
    F32 c = ent->model->Mat->pos.y - ent->droppos.y;

    ent->vel.x = 0.0f;
    ent->vel.y = b;
    ent->vel.z = 0.0f;

    if (!(ent->flg_opts & 0x1))
    {
        F32 sol[2];
        U32 solcnt = xMathSolveQuadratic(-7.5f, b, c, &sol[0], &sol[1]);

        if (solcnt)
        {
            if (solcnt == 2 && sol[1] > sol[0])
            {
                sol[0] = sol[1];
            }

            if (sol[0] > 0.0001f)
            {
                sol[0] = 1.0f / sol[0];

                ent->vel.x = sol[0] * (ent->droppos.x - ent->model->Mat->pos.x);
                ent->vel.z = sol[0] * (ent->droppos.z - ent->model->Mat->pos.z);
            }
        }
    }

    ent->timer = 1.2f;
}

static U32 ShowPickupFx(zEntPickup* ent)
{
    if (!globals.cmgr)
    {
        return 1;
    }

    if ((ent->flyflags & 0x2) != 0x2)
    {
        return 1;
    }

    return 0;
}

// clang-format off
zPickupAuraInfo zPickupAuraTable[] =
{
    { 5.0f, 0.0f, { 240, 235, 224, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 5.0f, 0.0f, { 240, 235, 224, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 3.0f, 0.1f, { 240, 255, 240, 128 } },
    { 3.0f, 0.0f, { 128, 128, 128, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 3.0f, 0.5f, { 192, 192, 192, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 5.0f, 0.5f, { 192, 192, 192, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } },
    { 5.0f, 0.3f, { 192, 180, 240, 128 } },
    { 0.0f, 0.0f, { 128, 128, 128, 128 } }
};
// clang-format on

static void zEntPickup_UpdateFX(zEntPickup* ent, xScene*, F32 dt);
// Uses int-to-float conversion

static void set_alpha_blend(xModelInstance* model)
{
    model->PipeFlags &= ~0xFF0C;
    model->PipeFlags |= 0x6508;
}

void zEntPickup_Render(zEntPickup* plist, U32 pcount)
{
    xLightKit_Enable(NULL, globals.currWorld);

    for (U32 i = 0; i < pcount; plist++, i++)
    {
        if (xEntIsVisible(plist) && !(plist->model->Flags & 0x400))
        {
            RwMatrix* mat = plist->model->Mat;

            if (plist->p->pickupType == 1 && plist->p->pickupIndex == 1 &&
                globals.player.Health >= globals.player.MaxHealth)
            {
                set_alpha_blend(plist->model);

                plist->model->Alpha = sUnderwearFade;

                xModelBucket_Add(plist->model);

                *(xMat3x3*)mat = *(xMat3x3*)&sPickupOrientation;
            }
        }
    }
}

// equivalent: float load scheduling
void zEntPickup_RenderOne(xEnt* ent)
{
    if (ent->baseType != eBaseTypePickup)
    {
        return;
    }

    if (!xEntIsVisible(ent))
    {
        return;
    }

    if (ent->model->Flags & 0x400)
    {
        return;
    }

    zEntPickup* pickup = (zEntPickup*)ent;
    RpAtomic* imodel = pickup->model->Data;
    RwMatrix* mat = ent->model->Mat;
    S32 shadowResult;
    xVec3 shadVec;

    // non-matching: scheduling

    shadVec.x = ent->model->Mat->pos.x;
    shadVec.y = ent->model->Mat->pos.y - 10.0f;
    shadVec.z = ent->model->Mat->pos.z;

    if (iModelCullPlusShadow(imodel, ent->model->Mat, &shadVec, &shadowResult))
    {
        return;
    }

    RwFrame* frame = RpAtomicGetFrame(imodel);

    if (!pickup->anim && (pickup->p->pickupType != PICKUP_TYPE_1 || !(pickup->state & 0x4)))
    {
        *(xMat3x3*)mat = *(xMat3x3*)&sPickupOrientation;
    }

    frame->ltm = *mat;

    if (1.0f != pickup->fx_scale)
    {
        RwV3d vec_scale;

        vec_scale.x = pickup->fx_scale;
        vec_scale.y = pickup->fx_scale;
        vec_scale.z = pickup->fx_scale;

        RwMatrixScale(&frame->ltm, &vec_scale, rwCOMBINEPRECONCAT);
    }

    RpAtomicRender(imodel);
}

// Uses int-to-float conversion

static U32 rewardRequest(U32 shinyType, xVec3* ppos, xVec3 pos)
{
    for (S32 i = 0; i < REWARD_PICKUP_COUNT; i++)
    {
        zEntPickup* p = rewardPickups[shinyType][i];

        if (p && (p->state & 0x8))
        {
            p->state = (p->state & ~0x3f) | 0x4;

            xEntShow(p);

            p->baseFlags &= (U8)~0x40;
            p->baseFlags |= 0x80;

            if (ppos)
            {
                xVec3Copy((xVec3*)&p->model->Mat->pos, ppos);

                p->grab_pos = *ppos;
            }
            else
            {
                xVec3Copy((xVec3*)&p->model->Mat->pos, &pos);

                p->grab_pos = pos;
            }

            return 1;
        }
    }

    return 0;
}

void zEntPickup_SceneEnter()
{
    zEntPickup_SceneReset();
}

// Equivalent: scheduling
void zEntPickup_SceneReset()
{
    gEnableRewardsQueue = 1;
    sSpatulaAlreadyGiven = NULL;
    sSpatulaBungeeDeferred = NULL;
}

// wip
void zEntPickup_SceneUpdate(F32 dt)
{
    if (zGameIsPaused())
    {
        return;
    }

    xMat3x3RMulRotY((xMat3x3*)&sPickupOrientation, (xMat3x3*)&sPickupOrientation, PI * dt);

    sPickupOrientation.flags = rwMATRIXTYPEORTHONORMAL;

    if (globals.player.Health >= globals.player.MaxHealth)
    {
        if (sUnderwearFade > 0.35f)
        {
            sUnderwearFade -= 0.5f * dt;

            if (sUnderwearFade < 0.35f)
            {
                sUnderwearFade = 0.35f;
            }
        }
    }
    else
    {
        if (sUnderwearFade < 1.0f)
        {
            sUnderwearFade += 0.5f * dt;

            if (sUnderwearFade > 1.0f)
            {
                sUnderwearFade = 1.0f;
            }
        }
    }

    for (S32 i = 0; i < REWARD_COUNT; i++)
    {
        if (sRewards[i].active && (!sRewards[i].currRequest || 0.0f == sRewards[i].timer))
        {
            sRewards[i].timer = 0.2f;

            U32 ret = rewardRequest(sRewards[i].pickups[sRewards[i].currRequest], sRewards[i].ppos,
                                    sRewards[i].pos);

            if (!ret)
            {
                switch (sRewards[i].pickups[sRewards[i].currRequest])
                {
                case SHINY_PURPLE:
                {
                    globals.player.Inv_Shiny += globals.player.g.ShinyValuePurple;
                    break;
                }
                case SHINY_BLUE:
                {
                    globals.player.Inv_Shiny += globals.player.g.ShinyValueBlue;
                    break;
                }
                case SHINY_GREEN:
                {
                    globals.player.Inv_Shiny += globals.player.g.ShinyValueGreen;
                    break;
                }
                case SHINY_YELLOW:
                {
                    globals.player.Inv_Shiny += globals.player.g.ShinyValueYellow;
                    break;
                }
                case SHINY_RED:
                {
                    globals.player.Inv_Shiny += globals.player.g.ShinyValueRed;
                    break;
                }
                }
            }

            sRewards[i].currRequest++;

            if (sRewards[i].currRequest >= sRewards[i].num)
            {
                memset(&sRewards[i], 0, sizeof(RewardList));
            }
        }
    }

    if (globals.player.Inv_Shiny > 99999)
    {
        globals.player.Inv_Shiny = 99999;
    }

    for (S32 i = 0; i < REWARD_COUNT; i++)
    {
        sRewards[i].timer -= dt;

        if (sRewards[i].timer < 0.0f)
        {
            sRewards[i].timer = 0.0f;
        }
    }

    if (sSpatulaBungeeDeferred && bungee_state::landed())
    {
        xVec3* pos = xEntGetPos(sSpatulaBungeeDeferred);

        *pos = *(xVec3*)&globals.player.ent.model->Mat->pos;
        pos->y += 1.0f;

        xEntShow(sSpatulaBungeeDeferred);
        zEntPickup_DoPickup(sSpatulaBungeeDeferred);

        sSpatulaAlreadyGiven = sSpatulaBungeeDeferred;
        sSpatulaBungeeDeferred = NULL;
    }
}

// Equivalent: scheduling
static void spawnNRewards(U32* pickups, U32 num, xVec3* ppos, xVec3 pos)
{
    if (num >= 1 && gEnableRewardsQueue)
    {
        for (S32 i = 0; i < REWARD_COUNT; i++)
        {
            if (!sRewards[i].active)
            {
                // non-matching: scheduling
                sRewards[i].active = true;
                sRewards[i].num = num;
                sRewards[i].timer = 0.2f;

                for (U32 j = 0; j < num; j++)
                {
                    sRewards[i].pickups[j] = pickups[j];
                }

                if (ppos)
                {
                    sRewards[i].ppos = ppos;
                }
                else
                {
                    sRewards[i].pos = pos;
                    sRewards[i].ppos = NULL;
                }

                break;
            }
        }
    }
}

void zEntPickup_SpawnNRewards(U32* pickups, U32 num, xVec3* ppos)
{
    if (num >= 1)
    {
        xVec3 pos = *ppos;
        spawnNRewards(pickups, num, ppos, pos);
    }
}

void zEntPickup_SpawnNRewards(U32* pickups, U32 num, xVec3 pos)
{
    if (num >= 1)
    {
        spawnNRewards(pickups, num, NULL, pos);
    }
}

void zEntPickup_RewardPostSetup()
{
    for (S32 i = 0; i < REWARD_TYPE_COUNT; i++)
    {
        for (S32 j = 0; j < REWARD_PICKUP_COUNT; j++)
        {
            if (rewardPickups[i][j])
            {
                zLODTable* lod = zLOD_Get(rewardPickups[i][j]);

                if (lod)
                {
                    sRewardLOD[i] = *lod;
                    sRewardLOD[i].noRenderDist = 1.0e10f;

                    zLOD_UseCustomTable(rewardPickups[i][j], &sRewardLOD[i]);
                }
            }
        }
    }
}

WEAK F32 xVec3DistFast(const xVec3* a, const xVec3* b)
{
    F32 dx = a->x - b->x;
    F32 dy = a->y - b->y;
    F32 dz = a->z - b->z;
    F32 dist2 = SQR(dx) + SQR(dy) + SQR(dz);
    F32 dist;

    xsqrtfast(dist, dist2);

    return dist;
}

WEAK void xMat3x3MulRotC(xMat3x3* o, xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t)
{
    xMat3x3 var_38;
    xMat3x3RotC(&var_38, _x, _y, _z, t);
    xMat3x3Mul(o, m, &var_38);
}
