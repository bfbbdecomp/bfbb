#include "zEntButton.h"
#include "zEntPlayer.h"
#include "zCollGeom.h"
#include "zFX.h"
#include "zShrapnel.h"
#include "zGlobals.h"
#include "xMath.h"
#include "xstransvc.h"
#include "xString.h"

#include <types.h>

static F32 sRedMultiplier = 1.0f;
static F32 sGreenMultiplier = 1.0f;
static F32 sBlueMultiplier = 1.0f;
static F32 sColorMultiplier = 1.0f;
static S32 sColorMultiplierSign = 1;

static S32 zEntButtonEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3);

void zEntButton_Init(void* ent, void* asset)
{
    zEntButton_Init((_zEntButton*)ent, (xEntAsset*)asset);
}

// Equivalent: scheduling
void zEntButton_Init(_zEntButton* ent, xEntAsset* asset)
{
    zEntInit(ent, asset, 'BUTN');

    zEntButtonAsset* basset = (zEntButtonAsset*)(asset + 1);
    xEntMotionAsset* masset = (xEntMotionAsset*)(basset + 1);
    ent->basset = basset;

    U32 size;
    RpAtomic* pressed_asset = (RpAtomic*)xSTFindAsset(basset->modelPressedInfoID, &size);
    if (pressed_asset != NULL)
    {
        ent->modelPressed = xEntLoadModel(NULL, pressed_asset);
    }
    else
    {
        ent->modelPressed = NULL;
    }

    if (asset->modelInfoID == xStrHash("button"))
    {
        ent->topHeight = 0.36f;
    }
    else if (asset->modelInfoID == xStrHash("plate_pressure"))
    {
        ent->topHeight = 0.32524f;
    }
    else
    {
        ent->topHeight = 0.0f;
    }

    ent->pflags |= (1 << 0);
    ent->penby |= XENT_COLLTYPE_PLYR;
    ent->chkby |= XENT_COLLTYPE_PLYR;

    ent->update = (xEntUpdateCallback)zEntButton_Update;
    ent->move = (xEntMoveCallback)zEntButton_Move;
    ent->eventFunc = zEntButtonEventCB;
    ent->render = (xEntRenderCallback)zEntButton_Render;

    if (ent->linkCount != 0)
    {
        ent->link = (xLinkAsset*)(masset + 1);
    }
    else
    {
        ent->link = NULL;
    }

    // BUG: We've already done this, no need to do it again
    ent->eventFunc = zEntButtonEventCB;

    ent->state = 0;
    ent->oldState = ent->state;
    ent->holdTimer = 0.0f;
    ent->counter = ent->basset->resetDelay;

    xEntReset((xEnt*)ent);
    xEntMotionInit(&ent->motion, (xEnt*)ent, masset);
    xEntMotionRun(&ent->motion);
    ent->oldMotState = ent->motion.mech.state;
}

void zEntButton_Move(_zEntButton* ent, xScene* sc, F32 dt, xEntFrame* frame)
{
    if (ent->driver != NULL)
    {
        xEntFrame* ent_frame = ent->driver->frame;
        if (ent->driveMode == 0)
        {
            xVec3 diff;
            xVec3Sub(&diff, &ent_frame->mat.pos, &ent_frame->oldmat.pos);
            xVec3Add(&ent->motion.mech.apos, &ent->motion.mech.apos, &diff);
            xVec3Add(&ent->motion.mech.bpos, &ent->motion.mech.bpos, &diff);
        }
    }

    xEntMotionMove(&ent->motion, sc, dt, frame);
}

void zEntButton_Setup(_zEntButton* ent, xScene*)
{
    zEntSetup(ent);
}

void zEntButton_Save(_zEntButton* ent, xSerial* s)
{
    zEntSave(ent, s);

    if (ent->state == 3)
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }

    if (ent->state == 1)
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }
}

void zEntButton_Load(_zEntButton* ent, xSerial* s)
{
    zEntLoad(ent, s);

    int unk1 = 0, unk2 = 0;

    s->Read_b1(&unk1);
    if (unk1 != 0)
    {
        ent->state = 1;
    }

    s->Read_b1(&unk2);
    if (unk2 != 0)
    {
        ent->state = 1;
    }
}

void zEntButton_Reset(_zEntButton* ent, xScene* sc)
{
    xEntReset((xEnt*)ent);
    xEntMotionInit(&ent->motion, (xEnt*)ent, (xEntMotionAsset*)(ent->basset + 1));
    xEntMotionReset(&ent->motion, sc);

    ent->pflags |= (1 << 0);
    ent->penby |= XENT_COLLTYPE_PLYR;
    if (ent->asset->flags & (1 << 0))
    {
        ent->flags |= (1 << 0);
    }
    ent->chkby |= XENT_COLLTYPE_PLYR;

    ent->bupdate(ent, (xVec3*)&ent->model->Mat->pos);

    ent->state = 0;

    xEntMotionStop(&ent->motion);
    ent->oldState = 5;
    ent->oldMotState = 6;
}

void zEntButton_Update(_zEntButton* ent, xScene* sc, F32 dt)
{
    if (ent->modelPressed != NULL)
    {
        ent->modelPressed->Mat = ent->model->Mat;
    }

    xEntUpdate((xEnt*)ent, sc, dt);

    if (ent->motion.mech.state != ent->oldMotState)
    {
        switch (ent->motion.mech.state)
        {
        case 0:
            if (ent->state == 4)
            {
                ent->state = 0;
            }
            break;
        case 2:
            if (!xEntMotionIsStopped(&ent->motion))
            {
                ent->state = 3;
            }
            break;
        case 3:
            ent->state = 4;
            break;
        case 4:
        case 5:
        case 6:
            break;
        }
    }
    ent->oldMotState = ent->motion.mech.state;

    if (ent->state != ent->oldState)
    {
        switch (ent->state)
        {
        case 1:
            xEntMotionRun(&ent->motion);
            break;
        case 3:
            xEntMotionStop(&ent->motion);
            break;
        case 4:
            xEntMotionRun(&ent->motion);
            break;
        case 0:
            if (ent->motion.mech.state == 0)
            {
                xEntMotionStop(&ent->motion);
            }
            if (ent->basset->actMethod == 1)
            {
                zEntEvent((xBase*)ent, (xBase*)ent, eEventUnpress);
            }
            break;
        }

        ent->oldState = ent->state;
    }

    if (ent->basset->actMethod == 0)
    {
        if (ent->basset->isReset != 0 && ent->state != 0)
        {
            ent->counter += dt;
        }
        if (ent->counter > ent->basset->resetDelay && ent->state == 3)
        {
            zEntEvent((xBase*)ent, (xBase*)ent, eEventUnpress);
        }
    }
    else if (ent->basset->actMethod == 1 && ent->hold == 0)
    {
        zEntButton_SetReady(ent);
    }

    ent->holdTimer -= dt;
    if (ent->holdTimer < 0.0f)
    {
        ent->holdTimer = 0.5f;
        ent->hold = 0;
    }
}

void zEntButton_Render(_zEntButton* ent)
{
    xModelInstance* model = ent->model;

    if (ent->state == 3 && ent->modelPressed != NULL)
    {
        ent->model = ent->modelPressed;
    }
    else if (ent->basset->actMethod == 0)
    {
        model->RedMultiplier = sRedMultiplier;
        model->GreenMultiplier = sGreenMultiplier;
        model->BlueMultiplier = sBlueMultiplier;
    }

    if (ent->collType != XENT_COLLTYPE_TRIG)
    {
        xEntRender((xEnt*)ent);
    }

    ent->model = model;
}

void zEntButton_SetReady(_zEntButton* ent)
{
    if (ent->state != 0)
    {
        ent->state = 4;
    }
}

void zEntButton_Press(_zEntButton* ent)
{
    xSndPlay3D(xStrHash("Button_press"), 0.77f, 0.0f, 128, 0, (xVec3*)&ent->model->Mat->pos, 10.0f,
               30.0f, SND_CAT_GAME, 0.0f);

    if (ent->state == 0)
    {
        ent->state = 1;
        ent->counter = 0.0f;
    }
}

static void _PressButtonSound(U32 mask)
{
    if (mask & (1 << 3))
    {
        zEntPlayer_SNDPlayStreamRandom(0, 16, ePlayerStreamSnd_BowlComment1,
                                       ePlayerStreamSnd_BowlComment3, 0.1f);
        zEntPlayer_SNDPlayStreamRandom(16, 35, ePlayerStreamSnd_BowlComment1,
                                       ePlayerStreamSnd_BowlComment4, 0.1f);
        zEntPlayer_SNDPlayStreamRandom(36, 100, ePlayerStreamSnd_BowlComment1,
                                       ePlayerStreamSnd_BowlComment5, 0.1f);
    }
    else if (!(mask & (1 << 11)) && xrand() % 4 == 3)
    {
        zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_PushButton1, ePlayerStreamSnd_PushButton3,
                                       0.2f);
    }
}

void zEntButton_Press(_zEntButton* ent, U32 mask)
{
    if (ent->basset->buttonActFlags & mask && ent->state == 0)
    {
        zEntEvent((xBase*)ent, eEventPress);
        _PressButtonSound(mask);
    }
}

void zEntButton_Hold(_zEntButton* ent, U32 mask)
{
    if (!(ent->basset->buttonActFlags & mask))
    {
        return;
    }

    if (mask & (1 << 10))
    {
        switch (ent->bound.type)
        {
        case XBOUND_TYPE_CYL:
            break;
        case XBOUND_TYPE_OBB:
            xVec3 vec;
            xMat4x3Tolocal(&vec, ent->bound.mat, (xVec3*)&globals.player.ent.model->Mat->pos);
            vec.y = 0.0f;
            if (!xPointInBox(&ent->bound.box.box, &vec))
            {
                return;
            }
            break;
        }
    }

    if (ent->state == 0)
    {
        zEntEvent((xBase*)ent, eEventPress);
        _PressButtonSound(0);
    }
    else
    {
        ent->hold = 1;
    }
}

// Equivalent(?): sda loads, regalloc
void zEntButton_SceneUpdate(F32 dt)
{
    sColorMultiplier += dt * sColorMultiplierSign * 2.5f;

    if (sColorMultiplier > 1.0f)
    {
        sColorMultiplierSign *= -1;
        sColorMultiplier = 1.0f;
    }

    if (sColorMultiplier < 0.0f)
    {
        sColorMultiplierSign *= -1;
        sColorMultiplier = 0.0f;
    }

    F32 mul = 0.39999999f * sColorMultiplier + 0.6f;
    sRedMultiplier = mul;
    sGreenMultiplier = mul;
    sBlueMultiplier = mul;
}

static S32 zEntButtonEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    _zEntButton* button = (_zEntButton*)to;

    switch (toEvent)
    {
    case eEventVisible:
    case eEventFastVisible:
    case eEventCollision_Visible_On:
        button->chkby |= XENT_COLLTYPE_PLYR;
        xEntShow((xEnt*)button);
        button->bupdate((xEnt*)button, (xVec3*)&button->model->Mat->pos);
        if (toParam != NULL && (S32)(*toParam + 0.5f) == 77)
        {
            zFXPopOn((xEnt&)*button, toParam[1], toParam[2]);
        }
        break;
    case eEventInvisible:
    case eEventFastInvisible:
    case eEventCollision_Visible_Off:
        button->chkby &= (U8)~XENT_COLLTYPE_PLYR;
        xEntHide((xEnt*)button);
        if (toParam != NULL && (S32)(*toParam + 0.5f) == 77)
        {
            zFXPopOff((xEnt&)*button, toParam[1], toParam[2]);
        }
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable((xEnt*)button);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable((xEnt*)button);
        break;
    case eEventReset:
        zEntButton_Reset(button, globals.sceneCur);
        break;
    case eEventPress:
        zEntButton_Press(button);
        break;
    case eEventUnpress:
        if (button->state == 0)
        {
            break;
        }

        xSndPlay3D(xStrHash("Button_up"), 0.77f, 0.0f, 128, 0, (xVec3*)&button->model->Mat->pos,
                   10.0f, 30.0f, SND_CAT_GAME, 0.0f);
        zEntButton_SetReady(button);
        break;
    case eEventToggle:
        if (button->state != 0)
        {
            zEntEvent((xBase*)button, (xBase*)button, eEventUnpress);
        }
        else
        {
            zEntEvent((xBase*)button, (xBase*)button, eEventPress);
        }
        break;
    case eEventAnimPlay:
    case eEventAnimPlayLoop:
    case eEventAnimStop:
    case eEventAnimPause:
    case eEventAnimResume:
    case eEventAnimTogglePause:
    case eEventAnimPlayRandom:
    case eEventAnimPlayMaybe:
        zEntAnimEvent(button, toEvent, toParam);
        break;
    case eEventSetUpdateDistance:
        if (globals.updateMgr == NULL)
        {
            break;
        }

        if (*toParam <= 0.0f)
        {
            xUpdateCull_SetCB(globals.updateMgr, button, xUpdateCull_AlwaysTrueCB, NULL);
        }
        else
        {
            F32 unk = SQR(*toParam);
            xUpdateCull_SetCB(globals.updateMgr, button, xUpdateCull_DistanceSquaredCB,
                              *(void**)&unk);
        }
        break;
    case eEventLaunchShrapnel:
    {
        zShrapnelAsset* shrapnel = (zShrapnelAsset*)b3;
        if (shrapnel != NULL && shrapnel->initCB != NULL)
        {
            shrapnel->initCB(shrapnel, button->model, NULL, NULL);
        }
        break;
    }
    }

    return 1;
}
