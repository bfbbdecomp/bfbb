#include "xLinkAsset.h"
#include <types.h>

#include "zEntHangable.h"

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
