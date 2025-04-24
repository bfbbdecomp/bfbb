#include "xEnt.h"
#include "xLinkAsset.h"
#include <types.h>

#include "zEntHangable.h"

static zParEmitter* sCandleEmitter;
static zParEmitter* sCandleSmokeEmitter;
static U32 sChandelierHash;
static zParEmitter* sMountEmitter;

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

void zEntHangable_FollowUpdate(class zEntHangable* ent /* r2 */)
{
    // Blocks
    /* anonymous block */ {
        // Range: 0x136EE0 -> 0x137058
        class xVec3* center; // r2
    }
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
