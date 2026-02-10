#include "zEntTeleportBox.h"

#include "zUIFont.h"
#include "zGlobals.h"
#include "zEntCruiseBubble.h"
#include "zRumble.h"
#include "zEntPickup.h"
#include "zFX.h"

#include "xEvent.h"
#include "xMath.h"
#include "xSnd.h"
#include "xString.h"
#include "iScrFX.h"

#define STATUS_OPEN 0
#define STATUS_CLOSED 1

#define PLAYER_STATE_OUTSIDE 0
#define PLAYER_STATE_INSIDE 1
#define PLAYER_STATE_TELEPORTING 2
#define PLAYER_STATE_TELEPORTED 3
#define PLAYER_STATE_EJECTING 4

static S32 sPlayerIn;
static U32 sPlayerNear;
static zUIFont* sTeleportUI;
static F32 sTeleportCamPitch;

static void VecFromAngle(float a, xVec3* v)
{
    xMat3x3 mat;

    xMat3x3Identity(&mat);
    xMat3x3Euler(&mat, DEG2RAD(a), 0.0f, 0.0f);
    xVec3Init(v, 0.0f, 0.0f, 1.0f);
    xMat3x3LMulVec(v, &mat, v);
}

U32 OpenCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    return ((_zEntTeleportBox*)object)->status != STATUS_CLOSED;
}

static U32 JumpInCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    return ((_zEntTeleportBox*)object)->jumpInAnim != 0;
}

static U32 JumpInCB(xAnimTransition*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->jumpInAnim = 0;
    return 0;
}

static U32 JumpOutCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    return ((_zEntTeleportBox*)object)->jumpOutAnim != 0;
}

static U32 JumpOutCB(xAnimTransition*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->jumpOutAnim = 0;
    return 0;
}

static U32 JItoOCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    return ((_zEntTeleportBox*)object)->JItoOpenAnim != 0;
}

static U32 JItoOCB(xAnimTransition*, xAnimSingle*, void* object)
{
    _zEntTeleportBox* tbox = (_zEntTeleportBox*)object;

    tbox->JItoOpenAnim = 0;
    tbox->currPlrState = PLAYER_STATE_OUTSIDE;

    return 0;
}

static U32 JOtoOCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    return ((_zEntTeleportBox*)object)->JOtoOpenAnim != 0;
}

static U32 JOtoOCB(xAnimTransition*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->JOtoOpenAnim = 0;
    return 0;
}

static U32 CtoOCheck(xAnimTransition*, xAnimSingle*, void* object)
{
    zEnt* player = &globals.player.ent;

    F32 dx__ = player->bound.sph.center.x - ((_zEntTeleportBox*)object)->model->Mat->pos.x;
    F32 dy__ = player->bound.sph.center.y - ((_zEntTeleportBox*)object)->model->Mat->pos.y;
    F32 dz__ = player->bound.sph.center.z - ((_zEntTeleportBox*)object)->model->Mat->pos.z;

    return (SQR(dx__) + SQR(dy__) + SQR(dz__) < 11.56f);
}

static U32 CtoOCB(xAnimTransition*, xAnimSingle*, void* object)
{
    // non-matching: floats
    xVec3 tmp;

    xVec3Copy(&tmp, (xVec3*)&((_zEntTeleportBox*)object)->model->Mat->pos);

    tmp.y += 1.0f;

    zFX_SpawnBubbleHit(&tmp, 50);
    xSndPlay3D(xStrHash("Box_open"), 0.77f, 0.0f, 128, 0, &tmp, 0.0f, SND_CAT_GAME, 0.0f);

    return 0;
}

static U32 JumpInEffectPlrInvisibleCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    zEntEvent(&globals.player.ent, eEventInvisible);
    return 0;
}

static U32 JumpInEffectPlrTeleportCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->currPlrState = PLAYER_STATE_TELEPORTING;
    return 0;
}

static U32 JumpInEffectJIAnimCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->JItoOpenAnim = 1;
    return 0;
}

static U32 CtoOEffectTboxEnableCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    _zEntTeleportBox* tbox = (_zEntTeleportBox*)object;

    if (tbox->status == STATUS_CLOSED)
    {
        tbox->status = STATUS_OPEN;
    }

    return 0;
}

static U32 JumpOutEffectPlrVisibleCB(U32, xAnimActiveEffect*, xAnimSingle*, void*)
{
    zEntEvent(&globals.player.ent, eEventVisible);
    iCameraMotionBlurActivate(0);
    return 0;
}

static U32 JumpOutEffectPlrEjectCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    _zEntTeleportBox* tbox = (_zEntTeleportBox*)object;
    xVec3 tmp;

    tbox->currPlrState = PLAYER_STATE_EJECTING;
    tbox->plrCtrlTimer = 1.2f;

    xVec3Copy(&tmp, (xVec3*)&tbox->model->Mat->pos);

    tmp.y += 1.0f;

    zFX_SpawnBubbleHit(&tmp, 50);

    return 0;
}

static U32 JumpOutEffectJOAnimCB(U32, xAnimActiveEffect*, xAnimSingle*, void* object)
{
    ((_zEntTeleportBox*)object)->JOtoOpenAnim = 1;
    return 0;
}

void zEntTeleportBox_Init(xBase& data, xDynAsset& asset, size_t)
{
    zEntTeleportBox_Init((_zEntTeleportBox*)&data, (teleport_asset*)&asset);
}

void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset);

void zEntTeleportBox_InitAll()
{
    sPlayerIn = 0;
}

void zEntTeleportBox_Setup(_zEntTeleportBox* ent);

void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, F32 dt)
{
    _zEntTeleportBox* ent = (_zEntTeleportBox*)rawent;
    _zEntTeleportBox* target = (_zEntTeleportBox*)ent->target;

    xEntUpdate(ent, sc, dt);

    F32 dx__ = globals.player.ent.bound.sph.center.x - ent->model->Mat->pos.x;
    F32 dy__ = globals.player.ent.bound.sph.center.y - ent->model->Mat->pos.y;
    F32 dz__ = globals.player.ent.bound.sph.center.z - ent->model->Mat->pos.z;

    if (SQR(dx__) + SQR(dy__) + SQR(dz__) < 11.56f)
    {
        ent->currPlayerNear = 1;
    }
    else
    {
        ent->currPlayerNear = 0;
    }

    if (ent->currPlayerNear != ent->prevPlayerNear)
    {
        if (ent->currPlayerNear)
        {
            sPlayerNear = 1;
        }
        else
        {
            sPlayerNear = 0;
            zEntEvent("mnu4 teleport box", eEventInvisible);
        }
    }

    ent->prevPlayerNear = ent->currPlayerNear;

    if (ent->currPlayerNear)
    {
        if (cruise_bubble::active())
        {
            if (xEntIsVisible(sTeleportUI))
            {
                zEntEvent("mnu4 teleport box", eEventInvisible);
            }
        }
        else
        {
            if (!xEntIsVisible(sTeleportUI) && target->status == STATUS_CLOSED)
            {
                zEntEvent("mnu4 teleport box", eEventVisible);
            }
        }
    }

    xVec3 playerMid;
    xVec3Copy(&playerMid, (xVec3*)&globals.player.ent.model->Mat->pos);

    playerMid.y += 0.5f;

    if (xPointInBox(&ent->trig[0], &playerMid) || xPointInBox(&ent->trig[1], &playerMid) ||
        xPointInBox(&ent->trig[0], (xVec3*)&globals.player.ent.model->Mat->pos) ||
        xPointInBox(&ent->trig[1], (xVec3*)&globals.player.ent.model->Mat->pos))
    {
        if (ent->currPlrState == PLAYER_STATE_OUTSIDE && zEntTeleportBox_isOpen(ent) &&
            globals.player.ent.frame->vel.y <= 0.0f && globals.player.Health != 0)
        {
            ent->jumpInAnim = 1;
            ent->currPlrState = PLAYER_STATE_INSIDE;
        }

        ent->currPlayerIn = 1;
    }
    else
    {
        ent->currPlayerIn = 0;

        if (ent->currPlrState == PLAYER_STATE_EJECTING)
        {
            ent->currPlrState = PLAYER_STATE_OUTSIDE;
        }
    }

    if (ent->currPlayerIn != ent->prevPlayerIn)
    {
        if (ent->currPlayerIn)
        {
            sPlayerIn = 1;
        }
        else
        {
            sPlayerIn = 0;
        }
    }

    ent->prevPlayerIn = ent->currPlayerIn;

    if (ent->currPlrState == PLAYER_STATE_TELEPORTED)
    {
        globals.camera.pgoal = sTeleportCamPitch;
        globals.camera.pcur = sTeleportCamPitch;
    }

    if (ent->prevPlrState != ent->currPlrState)
    {
        switch (ent->currPlrState)
        {
        case PLAYER_STATE_INSIDE:
        {
            ent->chkby &= (U8)~XENT_COLLTYPE_PLYR;

            zEntPlayerControlOff(CONTROL_OWNER_TELEPORT_BOX);

            globals.player.ent.frame->vel.x = 0.0f;
            globals.player.ent.frame->vel.z = 0.0f;
            globals.player.KnockBackTimer = 0.0f;

            xSndPlay3D(xStrHash("Box_shuffle_alt"), 0.77f, 0.0f, 128, 0,
                       (xVec3*)&ent->model->Mat->pos, 0.0f, SND_CAT_GAME, 0.1f);
            zRumbleStart(SDR_TeleportStart);

            break;
        }
        case PLAYER_STATE_TELEPORTING:
        {
            zEntPickup_GiveAllRewardsNow();

            ent->chkby |= XENT_COLLTYPE_PLYR;

            if (target)
            {
                xVec3Copy((xVec3*)&globals.player.ent.model->Mat->pos,
                          (xVec3*)&target->model->Mat->pos);
                xVec3Copy(&globals.player.ent.frame->mat.pos, (xVec3*)&target->model->Mat->pos);

                xMat4x3& mat = (xMat4x3&)*globals.player.ent.model->Mat;
                xVec3 ypr;

                xMat3x3GetEuler(&mat, &ypr);

                ypr.x = PI * target->tasset->launchAngle / 180.0f;

                xMat3x3Euler(&mat, &ypr);

                target->currPlrState = PLAYER_STATE_TELEPORTED;

                if (zEntTeleportBox_isClosed(target))
                {
                    zEntEvent(target, eEventOpenTBox);
                }

                iCameraMotionBlurActivate(1);
            }

            zRumbleStart(SDR_Teleport);
            zPadAddRumble(eRumble_VeryLight, 0.4f, 0, 0);

            break;
        }
        case PLAYER_STATE_TELEPORTED:
        {
            ent->jumpOutAnim = 1;
        }
        }
    }
}

void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
    zEntSave(ent, s);

    if (ent->status == STATUS_OPEN)
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }

    s->Write(ent->currPlrState);
}

void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
    zEntLoad(ent, s);

    S32 open = 0;
    s->Read_b1(&open);

    if (open)
    {
        zEntTeleportBox_Open(ent);
    }
    else
    {
        zEntTeleportBox_Close(ent);
    }

    s->Read(&ent->currPlrState);
}

void zEntTeleportBox_Open(_zEntTeleportBox* ent)
{
    if (ent->status == STATUS_CLOSED)
    {
        ent->status = STATUS_OPEN;
    }
}

void zEntTeleportBox_Close(_zEntTeleportBox* ent)
{
    if (ent->status == STATUS_OPEN)
    {
        ent->status = STATUS_CLOSED;
    }
}

S32 zEntTeleportBox_isOpen(_zEntTeleportBox* ent)
{
    _zEntTeleportBox* target = (_zEntTeleportBox*)ent->target;

    if (ent->status == STATUS_OPEN && target->status == STATUS_OPEN)
    {
        return 1;
    }

    return 0;
}

S32 zEntTeleportBox_isClosed(_zEntTeleportBox* ent)
{
    return zEntTeleportBox_isOpen(ent) == 0;
}

S32 zEntTeleportBox_playerIn()
{
    return sPlayerIn;
}

S32 zEntTeleportBoxEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*)
{
    _zEntTeleportBox* s = (_zEntTeleportBox*)to;

    switch (toEvent)
    {
    case eEventVisible:
    case eEventFastVisible:
    {
        xEntShow(s);
        break;
    }
    case eEventInvisible:
    case eEventFastInvisible:
    {
        xEntHide(s);
        break;
    }
    case eEventCollisionOn:
    {
        s->chkby |= (U8)(XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR);
        break;
    }
    case eEventCollisionOff:
    {
        s->chkby &= (U8) ~(XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR);
        break;
    }
    case eEventCollision_Visible_On:
    {
        s->chkby |= (U8)(XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR);
        xEntShow(s);
        break;
    }
    case eEventCollision_Visible_Off:
    {
        s->chkby &= (U8) ~(XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR);
        xEntHide(s);
        break;
    }
    case eEventOpenTBox:
    {
        zEntTeleportBox_Open(s);
        break;
    }
    case eEventCloseTBox:
    {
        zEntTeleportBox_Close(s);
        break;
    }
    }

    return 1;
}
