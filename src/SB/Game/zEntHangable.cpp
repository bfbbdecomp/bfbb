#include "xBase.h"
#include "xEnt.h"
#include "xLinkAsset.h"
#include "xString.h"
#include "zParEmitter.h"
#include <types.h>

#include "zEntHangable.h"

static zParEmitter* sCandleEmitter;
static zParEmitter* sCandleSmokeEmitter;
static U32 sChandelierHash;
static zParEmitter* sMountEmitter;

void zEntHangable_SetupFX()
{
    sCandleEmitter = zParEmitterFind("PAREMIT_CHAND_CANDLE");
    sCandleSmokeEmitter = zParEmitterFind("PAREMIT_CHAND_CANDLE_SMOKE");
    sChandelierHash = xStrHash("rlii0006");
    sMountEmitter = zParEmitterFind("PAREMIT_HANGABLE_MOUNT");
}

static void HangableSetup(zEntHangable* ent, xEntAsset* asset)
{
    xEntHangableAsset* hangAsset;
    xVec3* center;
    xMat3x3 hackMat;
}

void zEntHangable_Init(void* a, void* b)
{
    zEntHangable_Init((zEntHangable*)a, (xEntAsset*)b);
}

void zEntHangable_Init(zEntHangable* ent, xEntAsset* asset)
{
    zEntInit(ent, asset, 'HANG');

    if (ent->linkCount)
    {
        // TODO: Not quite correct
        ent->link = (xLinkAsset*)(ent->asset + 1);
    }
    else
    {
        ent->link = NULL;
    }

    HangableSetup(ent, asset);
}

static void zEntHangable_UpdateFX(zEntHangable* ent)
{
    xVec3 offset_rlii0006[8];
    xVec3* local_offset;
    xParEmitterCustomSettings info;
    zParEmitter* emitter;
    S32 i;
}

void zEntHangable_Update(zEntHangable* ent, xScene*, F32 dt)
{
    xVec3 unitHang;
}

static void zEntHangableMountFX(zEntHangable*)
{
}

S32 zEntHangableEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase*)
{
    zEntHangable* ent; // r20
    zEnt* follow; // r2
    // FloatAndVoid dist; // r29+0x20C
    return 0;
}

static bool HangableIsMovingTooMuch(xVec3* a, xVec3* b, xVec3* c, xVec3* d)
{
    return false;
}

void zEntHangable_SetMatrix(zEntHangable* ent, F32 f)
{
}

void zEntHangable_Save(zEntHangable* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zEntHangable_Load(zEntHangable* ent, xSerial* s)
{
    zEntLoad(ent, s);
}

void zEntHangable_Reset(zEntHangable* ent)
{
    zEntHangable_SetShaggy(ent, NULL);
    zEntHangable_SetFollow(ent, NULL);
    xEntReset(ent);
    HangableSetup(ent, ent->asset);
}

void zEntHangable_SetShaggy(zEntHangable* ent, zEnt* b)
{
}

void zEntHangable_FollowUpdate(zEntHangable* ent)
{
    xVec3* center;
}

void zEntHangable_SetFollow(zEntHangable* ent, zEnt* b)
{
    if (b)
    {
        ent->follow = b;
        zEntHangable_FollowUpdate(ent);
    }
    else if (ent->follow)
    {
        ent->follow = NULL;
    }
}
