#include "xBase.h"
#include "xEnt.h"
#include "xEntMotion.h"
#include "xLinkAsset.h"
#include "xString.h"

#include "zEntHangable.h"
#include "zGlobals.h"
#include "zParEmitter.h"

#include <types.h>

static zParEmitter* sCandleEmitter;
static zParEmitter* sCandleSmokeEmitter;
static U32 sChandelierHash;
static zParEmitter* sMountEmitter;

static void zEntHangable_Update(zEntHangable* ent, xScene*, F32 dt);
S32 zEntHangableEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase*);

void zEntHangable_SetupFX()
{
    sCandleEmitter = zParEmitterFind("PAREMIT_CHAND_CANDLE");
    sCandleSmokeEmitter = zParEmitterFind("PAREMIT_CHAND_CANDLE_SMOKE");
    sChandelierHash = xStrHash("rlii0006");
    sMountEmitter = zParEmitterFind("PAREMIT_HANGABLE_MOUNT");
}

static void HangableSetup(zEntHangable* ent, xEntAsset* asset)
{
    xEntHangableAsset* hangAsset = (xEntHangableAsset *)(&asset[1]);
    xVec3* center;
    xMat3x3 hackMat;

    ent->pflags = 0;
    ent->chkby = 0;
    ent->penby = 0;
    ent->update = (xEntUpdateCallback)zEntHangable_Update;
    ent->move = NULL;
    ent->eventFunc = zEntHangableEventCB;
    ent->hangInfo = hangAsset;
    center = &ent->asset->pos;
    ent->pivot.x = center[0].x;
    ent->pivot.y = center[0].y + hangAsset->pivotOffset;
    ent->pivot.z = center[0].z;
    ent->endpos.x = center[0].x;
    ent->endpos.y = ent->pivot.y - hangAsset->leverArm;
    ent->endpos.z = center[0].z;
    ent->vel.x = 0.0f;
    ent->vel.y = 0.0f;
    ent->vel.z = 0.0f;
    ent->grabTimer = 0.0f;
    ent->spin = 0.0f;
    ent->state = 0;
    ent->shaggy = NULL;
    ent->follow = NULL;
    ent->enabled = 1;
    ent->moving = 0;
    ent->candle_timer = 3.0f;
    ent->candle_state = 0;
    center = &ent->asset->ang;
    xMat3x3Euler(&hackMat, center[0].x, center[0].y, center[0].z);
    ent->swingplane.x = hackMat.right.x;
    ent->swingplane.y = hackMat.right.y;
    ent->swingplane.z = hackMat.right.z;
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
        xEnt* next = (xEnt*)&((xEntMotion*)(ent->asset))[1]; // Not in DWARF, but anything to make this less of an eyesore.
        ent->link = (xLinkAsset*)(&next->link); // Maybe...???
    }
    else
    {
        ent->link = NULL;
    }

    HangableSetup(ent, asset);
}

static void zEntHangable_UpdateFX(zEntHangable* ent)
{
    // Points of a (wobbly) circle in 3D space.
    xVec3 offset_rlii0006[8] =
    {
        { 0.0, 0.561, 0.613 },
        { 0.43345639, 0.432, 0.43345639 },
        { 0.613, 0.543, 0.0 },
        { 0.43345639, 0.526, -0.43345639 },
        { 0.0, 0.526, -0.613 },
        { -0.43345639, 0.505, -0.43345639 },
        { -0.613, 0.543, 0.0 },
        { -0.43345639, 0.48, 0.4334563 }
    };

    xVec3* local_offset;
    xParEmitterCustomSettings info;
    zParEmitter* emitter;

    if ((ent->flags & 1) && (ent->asset->modelInfoID == sChandelierHash))
    {
        local_offset = &offset_rlii0006[0];

        // Missing unreachable branches here.
        if (ent->candle_state == 2)
        {
            return;
        }

        info.custom_flags = 0x100;

        if (ent->candle_state == 0)
        {
            emitter = sCandleEmitter;
        }
        else
        {
            emitter = sCandleSmokeEmitter;
        }

        for (S32 i = 0; i < sizeof(offset_rlii0006) / sizeof(xVec3); i++)
        {
            xVec3 mul;
            xMat3x3RMulVec(&mul, xEntGetFrame(ent), &local_offset[i]);
            xVec3Add(&info.pos, &mul, xEntGetPos(ent));
            xParEmitterEmitCustom(emitter, (1.0f / 30.0f), &info);
        }
    }
}

void zEntHangable_Update(zEntHangable* ent, xScene*, F32 dt)
{
    xVec3 unitHang;
}

// Equivalent; scheduling.
static void zEntHangableMountFX(zEntHangable* ent)
{
    xParEmitterCustomSettings info;

    if (sMountEmitter != NULL)
    {
        info.custom_flags = 0x300;
        for (S32 i = 0; i < 10; i++)
        {
            info.pos = ent->pivot;
            info.vel.x = 0.0f;
            info.vel.y = -(xurand() * 2.0f - -2.0f);
            info.vel.z = 0.0f;
            xParEmitterEmitCustom(sMountEmitter, (1.0f / 30.0f), &info);
        }
    }
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
    F32 dist = ((d->x * d->x) + (d->y * d->y) + (d->z * d->z)) -
               ((c->x * c->x) + (c->y * c->y) + (c->z * c->z));
    if ((dist > 20.0f) || (dist < -20.0f))
    {
        return 1;
    }
    return 0;
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

void zEntHangable_SetShaggy(zEntHangable* ent, zEnt* shaggy)
{
    if (shaggy != NULL)
    {
        if (ent->shaggy == NULL)
        {
            ent->shaggy = shaggy;
            shaggy->frame->mode = 1;
            shaggy->frame->vel.x = 0.0f;
            shaggy->frame->vel.y = 0.0f;
            shaggy->frame->vel.z = 0.0f;
            shaggy->frame->mat.pos.x = ent->model->Mat->pos.x;
            shaggy->frame->mat.pos.z = ent->model->Mat->pos.z;
            *shaggy->model->Mat = *(RwMatrixTag *)(&shaggy->frame->mat);
        }
    }
    else if (ent->shaggy != NULL)
    {
        ent->shaggy = NULL;
    }
}

void zEntHangable_FollowUpdate(zEntHangable* ent)
{
    xVec3* center;
    xVec3 delta;
    xVec3 pivot;

    if (ent->follow == NULL)
    {
        return;
    }

    xEntHangableAsset* hang = (xEntHangableAsset *)(&ent->asset[1]);

    center = (xVec3*)(&ent->follow->model->Mat->pos);
    pivot.x = center->x;
    pivot.y = center->y + hang->pivotOffset;
    pivot.z = center->z;

    delta.x = pivot.x - ent->pivot.x;
    delta.y = pivot.y - ent->pivot.y;
    delta.z = pivot.z - ent->pivot.z;

    ent->pivot = pivot;

    if (globals.player.HangEnt == ent)
    {
        globals.player.HangPivot = pivot;
        globals.player.ent.model->Mat->pos.x += delta.x;
        globals.player.ent.model->Mat->pos.y += delta.y;
        globals.player.ent.model->Mat->pos.z += delta.z;
    }

    ent->endpos.x += delta.x;
    ent->endpos.y += delta.y;
    ent->endpos.z += delta.z;

    center = (xVec3*)(&ent->model->Mat->pos);
    center->x += delta.x;
    center = (xVec3*)(&ent->model->Mat->pos);
    center->y += delta.y;
    center = (xVec3*)(&ent->model->Mat->pos);
    center->z += delta.z;

    if (ent->shaggy != NULL)
    {
        center = (xVec3*)(&ent->shaggy->model->Mat->pos);
        center->x += delta.x;
        center = (xVec3*)(&ent->shaggy->model->Mat->pos);
        center->y += delta.y;
        center = (xVec3*)(&ent->shaggy->model->Mat->pos);
        center->z += delta.z;
    }
}

void zEntHangable_SetFollow(zEntHangable* ent, zEnt* b)
{
    if (b != NULL)
    {
        ent->follow = b;
        zEntHangable_FollowUpdate(ent);
    }
    else if (ent->follow)
    {
        ent->follow = NULL;
    }
}
