#include "zCameraTweak.h"
#include "xEvent.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "iMath.h"

#include "zCamera.h"
#include <types.h>

static S32 sCamTweakCount;
static zCamTweak sCamTweakList[8];
static F32 sCamTweakLerp;
static F32 sCamTweakTime;
static F32 sCamTweakPitch[2];
static F32 sCamTweakDistMult[2];
static F32 sCamTweakPitchCur;
static F32 sCamTweakDistMultCur;
static F32 sCamD;
static F32 sCamH;
static F32 sCamPitch;
static zCamTweakLook zcam_neartweak;
static zCamTweakLook zcam_fartweak;

static void zCameraTweak_LookPreCalc(zCamTweakLook* tlook, F32 d, F32 h, F32 pitch)
{
    F32 tan = itan(pitch);
    F32 unk = d * tan;
    tlook->h = h - unk;
    tlook->dist = xsqrt(unk * unk + d * d);
    tlook->pitch = pitch;
}

void zCameraTweakGlobal_Init()
{
    zCameraTweak_LookPreCalc(&zcam_neartweak, zcam_near_d, zcam_near_h, zcam_near_pitch);
    zCameraTweak_LookPreCalc(&zcam_fartweak, zcam_far_d, zcam_far_h, zcam_far_pitch);
    zCameraTweakGlobal_Reset();
}

void zCameraTweakGlobal_Add(U32 owner, F32 priority, F32 time, F32 pitch, F32 distMult)
{
    S32 i;
    S32 j;

    for (i = 0; i < sCamTweakCount; i++)
    {
        if (sCamTweakList[i].owner == owner)
        {
            return;
        }
    }

    for (i = 0; i < sCamTweakCount; i++)
    {
        if (priority >= sCamTweakList[i].priority)
        {
            for (j = sCamTweakCount; j >= i + 1; j--)
            {
                sCamTweakList[j] = sCamTweakList[j - 1];
            }
            break;
        }
    }

    sCamTweakList[i].owner = owner;
    sCamTweakList[i].priority = priority;
    sCamTweakList[i].time = time > 0.001f ? time : 0.001f;
    sCamTweakList[i].pitch = DEG2RAD(pitch);
    sCamTweakList[i].distMult = distMult > 0.001f ? distMult : 0.001f;

    sCamTweakCount++;

    if (i == 0)
    {
        sCamTweakPitch[1] =
            sCamTweakPitch[1] * sCamTweakLerp + sCamTweakPitch[0] * (1.0f - sCamTweakLerp);
        sCamTweakDistMult[1] =
            sCamTweakDistMult[1] * sCamTweakLerp + sCamTweakDistMult[0] * (1.0f - sCamTweakLerp);
        sCamTweakLerp = 1.0f;
        sCamTweakTime = sCamTweakList[0].time;
        sCamTweakPitch[0] = sCamTweakList[0].pitch;
        sCamTweakDistMult[0] = sCamTweakList[0].distMult;
    }
}

void zCameraTweakGlobal_Remove(U32 owner)
{
    S32 i;

    for (i = 0; i < sCamTweakCount; i++)
    {
        if (sCamTweakList[i].owner == owner)
        {
            if (i == 0)
            {
                sCamTweakPitch[1] =
                    sCamTweakPitch[1] * sCamTweakLerp + sCamTweakPitch[0] * (1.0f - sCamTweakLerp);
                sCamTweakDistMult[1] = sCamTweakDistMult[1] * sCamTweakLerp +
                                       sCamTweakDistMult[0] * (1.0f - sCamTweakLerp);
                sCamTweakLerp = 1.0f;
                sCamTweakTime = sCamTweakList[0].time;
                sCamTweakPitch[0] = sCamTweakCount < 2 ? 0.0f : sCamTweakList[1].pitch;
                sCamTweakDistMult[0] = sCamTweakCount < 2 ? 1.0f : sCamTweakList[1].distMult;
            }

            for (S32 j = i; j < sCamTweakCount; j--)
            {
                sCamTweakList[j] = sCamTweakList[j + 1];
            }

            sCamTweakCount--;
            return;
        }
    }
}

void zCameraTweakGlobal_Reset()
{
    sCamTweakCount = 0;
    sCamTweakPitch[0] = 0.0f;
    sCamTweakPitch[1] = 0.0f;
    sCamTweakDistMult[0] = 1.0f;
    sCamTweakDistMult[1] = 1.0f;
    sCamTweakTime = 0.1f;
    sCamTweakLerp = 0.0f;
    sCamTweakPitchCur = 0.0f;
    sCamTweakDistMultCur = 1.0f;
    return;
}

void zCameraTweakGlobal_Update(F32 dt)
{
    sCamTweakLerp -= dt / sCamTweakTime;
    if (sCamTweakLerp < 0.0f)
    {
        sCamTweakLerp = 0.0f;
    }

    zCamTweakLook* tlook = &zcam_fartweak;
    sCamTweakPitchCur =
        sCamTweakPitch[1] * sCamTweakLerp + sCamTweakPitch[0] * (1.0f - sCamTweakLerp);
    sCamTweakDistMultCur =
        sCamTweakDistMult[1] * sCamTweakLerp + sCamTweakDistMult[0] * (1.0f - sCamTweakLerp);

    tlook = zcam_near != 0 ? &zcam_neartweak : tlook;
    sCamD = sCamTweakDistMultCur * tlook->dist * icos(tlook->pitch + sCamTweakPitchCur);
    sCamH = sCamTweakDistMultCur * tlook->dist * isin(tlook->pitch + sCamTweakPitchCur) + tlook->h;
    sCamPitch = tlook->pitch + sCamTweakPitchCur;
}

F32 zCameraTweakGlobal_GetD()
{
    return sCamD;
}

F32 zCameraTweakGlobal_GetH()
{
    return sCamH;
}

F32 zCameraTweakGlobal_GetPitch()
{
    return sCamPitch;
}

void zCameraTweak_Init(xBase& data, xDynAsset& asset, size_t)
{
    zCameraTweak_Init((zCameraTweak*)(&data), (CameraTweak_asset*)&asset);
}

void zCameraTweak_Init(zCameraTweak* tweak, CameraTweak_asset* asset)
{
    xBaseInit((xBase*)tweak, (xBaseAsset*)asset);

    tweak->casset = asset;
    tweak->eventFunc = zCameraTweak_EventCB;

    if (tweak->linkCount != 0)
    {
        tweak->link = (xLinkAsset*)(asset + 1);
    }
    else
    {
        tweak->link = NULL;
    }
}

void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s)
{
    xBaseSave((xBase*)tweak, s);
}

void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s)
{
    xBaseLoad((xBase*)tweak, s);
}

S32 zCameraTweak_EventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    zCameraTweak* tweak = (zCameraTweak*)to;

    switch (toEvent)
    {
    case eEventEnable:
        xBaseEnable(tweak);
        break;

    case eEventDisable:
        xBaseDisable(tweak);
        break;

    case eEventRun:
        if (xBaseIsEnabled(tweak))
        {
            zCameraTweakGlobal_Add(tweak->id, tweak->casset->priority, tweak->casset->time,
                                   tweak->casset->pitch_adjust, tweak->casset->dist_adjust);
        }
        break;

    case eEventStop:
        if (xBaseIsEnabled(tweak))
        {
            zCameraTweakGlobal_Remove(tweak->id);
        }
        break;
    }

    return 1;
}
