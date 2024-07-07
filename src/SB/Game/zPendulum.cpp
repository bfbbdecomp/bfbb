#include "zPendulum.h"
#include "zGlobals.h"
#include "zCollGeom.h"
#include "zShrapnel.h"

#include "xEnt.h"
#include "xEntMotion.h"
#include "xMath.h"

#include <types.h>

void zPendulum_Init(void* pend, void* asset)
{
    zPendulum_Init((_zPendulum*)pend, (xEntAsset*)asset);
}

void zPendulum_Init(_zPendulum* pend, xEntAsset* asset)
{
    zEntInit((zEnt*)pend, asset, 'PEND');
    xEntMotionAsset* motionAsset = (xEntMotionAsset*)(asset + 1);
    if (pend->linkCount != 0)
    {
        pend->link = (xLinkAsset*)(motionAsset + 1);
    }
    else
    {
        pend->link = NULL;
    }
    pend->update = (xEntUpdateCallback)zPendulum_Update;
    pend->move = (xEntMoveCallback)zPendulum_Move;
    pend->eventFunc = zPendulumEventCB;
    pend->transl = zPendulumTranslate;

    zEntReset((zEnt*)pend);
    xEntMotionInit(&pend->motion, (xEnt*)pend, motionAsset);
}

void zPendulum_Save(_zPendulum* pend, xSerial* s)
{
    zEntSave((zEnt*)pend, s);
}

void zPendulum_Load(_zPendulum* pend, xSerial* s)
{
    zEntLoad((zEnt*)pend, s);
}

void zPendulum_Setup(_zPendulum* pend, xScene* sc)
{
    zEntSetup((zEnt*)pend);
}

void zPendulum_Reset(_zPendulum* pend, xScene* sc)
{
    zEntReset((zEnt*)pend);
    xEntMotionInit(&pend->motion, (xEnt*)pend, (xEntMotionAsset*)(pend->asset + 1));
    xEntMotionReset(&pend->motion, sc);

    xEntMotionAsset* asset = pend->motion.asset;
    pend->lt = 0.0f;
    pend->q1t = 1.0f - (asset->pen.phase / (2.0f * PI));
    pend->q3t = 0.5f - (asset->pen.phase / (2.0f * PI));
    if (pend->q1t <= 0.0f)
    {
        pend->q1t += 1.0f;
    }
    if (pend->q1t > 1.0f)
    {
        pend->q1t -= 1.0f;
    }
    if (pend->q3t <= 0.0f)
    {
        pend->q3t += 1.0f;
    }
    if (pend->q3t > 1.0f)
    {
        pend->q3t -= 1.0f;
    }

    pend->q1t *= asset->pen.period;
    pend->q3t *= asset->pen.period;
}

void zPendulum_Update(_zPendulum* pend, xScene* sc, F32 dt)
{
    F32 lt, t;

    xEntUpdate((xEnt*)pend, sc, dt);

    t = pend->motion.t;
    lt = pend->lt;
    xEntMotionPenData* pen = &pend->motion.asset->pen;

    if (t < lt)
    {
        t += pen->period;
    }

    if (lt <= pend->q1t && t > pend->q1t)
    {
        zEntEvent((xBase*)pend, eEventSwoosh);
    }
    else if (lt <= pend->q3t && t > pend->q3t)
    {
        zEntEvent((xBase*)pend, eEventSwoosh);
    }

    pend->lt = pend->motion.t;
}

void zPendulum_Move(_zPendulum* pend, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntMotionMove(&pend->motion, sc, dt, frame);
}

void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    xEntDefaultTranslate(xent, dpos, dmat);
    xEntMotionTranslate(&((_zPendulum*)xent)->motion, dpos, dmat);
}

S32 zPendulumEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    _zPendulum* pend = (_zPendulum*)to;

    switch (toEvent)
    {
    case eEventRun:
        xEntMotionRun(&pend->motion);
        break;
    case eEventStop:
        xEntMotionStop(&pend->motion);
        break;
    case eEventReset:
        zPendulum_Reset(pend, globals.sceneCur);
        break;
    case eEventVisible:
    case eEventFastVisible:
        xEntShow((xEnt*)pend);
        break;
    case eEventInvisible:
    case eEventFastInvisible:
        xEntHide((xEnt*)pend);
        break;
    case eEventCollision_Visible_On:
        xEntShow((xEnt*)pend);
    case eEventCollisionOn:
        pend->chkby = XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
        pend->bupdate(pend, (xVec3*)&pend->model->Mat->pos);
        break;
    case eEventCollision_Visible_Off:
        xEntHide((xEnt*)pend);
    case eEventCollisionOff:
        pend->chkby = XENT_COLLTYPE_NONE;
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable((xEnt*)pend);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable((xEnt*)pend);
        break;
    case eEventAnimPlay:
    case eEventAnimPlayLoop:
    case eEventAnimStop:
    case eEventAnimPause:
    case eEventAnimResume:
    case eEventAnimTogglePause:
    case eEventAnimPlayRandom:
    case eEventAnimPlayMaybe:
        zEntAnimEvent((zEnt*)pend, toEvent, toParam);
        break;
    case eEventSetUpdateDistance:
    {
        if (globals.updateMgr == NULL)
        {
            break;
        }

        if (*toParam <= 0.0f)
        {
            xUpdateCull_SetCB(globals.updateMgr, pend, xUpdateCull_AlwaysTrueCB, NULL);
        }
        else
        {
            F32 unk = SQR(*toParam);
            xUpdateCull_SetCB(globals.updateMgr, pend, xUpdateCull_DistanceSquaredCB,
                              *(void**)&unk);
        }

        break;
    }
    case eEventLaunchShrapnel:
    {
        zShrapnelAsset* shrapnel = (zShrapnelAsset*)b3;
        if (shrapnel != NULL && shrapnel->initCB != NULL)
        {
            shrapnel->initCB(shrapnel, pend->model, NULL, NULL);
        }
        break;
    }
    }

    return 1;
}
