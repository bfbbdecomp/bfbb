#include "zThrown.h"

#include "zGlobals.h"
#include <types.h>
#include <string.h>

#include "zEvent.h"
#include "zScene.h"

#include "xMathInlines.h"

zThrownStruct zThrownList[32];
LaunchStats l_normal;
ThrowableStats zThrowableModels[23];
U32 zThrownCount;
U32 sFruitIsFreezy;
U32 sDebugDepth;
CarryableStats c_fruit;
U32 sThrowButtonMask;

void zThrown_Setup(zScene* sc)
{
    ThrowableStats* stats;
    char tmpstr[256];

    F32 airTime;

    c_fruit.killTimer = globals.player.carry.fruitLifetime;
    airTime = xsqrt((2.0f * globals.player.carry.throwHeight) / globals.player.carry.throwGravity);
    globals.player.carry.throwDistance = globals.player.carry.throwGravity * airTime;
    l_normal.throwSpeedXZ = globals.player.carry.throwDistance / (2.0f * airTime);
}

void zThrown_AddTempFrame(zThrownStruct* thrown)
{
    xEnt* ent = thrown->ent;
    if (ent->frame == NULL)
    {
        memset(&thrown->frame, 0, sizeof(xEntFrame));
        ent->frame = &thrown->frame;
        ent->frame->mat = *(xMat4x3*)ent->model->Mat;
    }
}

void Recurse_TranslateStack(xEnt* ent, xVec3* delta)
{
    sDebugDepth++;
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].stackEnt == ent)
        {
            Recurse_TranslateStack(zThrownList[i].ent, delta);
            zThrownList[i].ent->model->Mat->pos.x += delta->x;
            zThrownList[i].ent->model->Mat->pos.y += delta->y;
            zThrownList[i].ent->model->Mat->pos.z += delta->z;
        }
    }
    sDebugDepth--;
}

void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher)
{
    int i = 0;

    for (; i < zThrownCount; i++)
    {
        if (ent == zThrownList[i].ent)
            break;
    }

    if (i != zThrownCount)
    {
        zThrownStruct* listInd = &zThrownList[i];
        listInd->patLauncher = launcher;
    }
}

void zThrown_Remove(class xEnt* ent)
{
    U32 i;
    xModelInstance* mod;

    for (i = 0; i < zThrownCount; i++)
    {
    }
}

S32 zThrown_KillFruit(xEnt* ent)
{
    for (S32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].ent == ent)
        {
            if (zThrownList[i].stats->carry == &c_fruit)
            {
                zThrownList[i].killTimer = 1e-6f;
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, float* bounce,
                                float* friction)
{
    sFruitIsFreezy = 1;
    zThrownCollide_ThrowFruit(thrown, collis, bounce, friction);
    sFruitIsFreezy = 0;
}

void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                                F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
    zEntEvent(thrown->ent, eEventDestroy);
}

void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                               F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
}

void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, F32* bounce, F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
    zEntEvent(thrown->ent, eEventDestroy);
}

// WIP.
S32 zThrown_IsFruit(xEnt* ent, F32* stackHeight)
{
    ThrowableStats* stats = zThrowableModels;
    while (stats->nameHash != ent->asset->modelInfoID &&
           stats->nameHashMINF != ent->asset->modelInfoID && stats->name != NULL)
    {
        stats++;
    }
    if (stats != NULL && *(U32*)&stats->carry->killTimer == *(U32*)&c_fruit.killTimer)
    {
        if (stackHeight != NULL)
        {
            *stackHeight = stats->stackHeight;
        }
        return 1;
    }
    return 0;
}

S32 zThrown_IsStacked(xEnt* ent)
{
    for (S32 i = 0; i < zThrownCount; i++)
    {
        if ((zThrownList[i].stackEnt == ent) ||
            (zThrownList[i].stackEnt != 0 && (zThrownList[i].ent == ent)))
        {
            return 1;
        }
    }

    return 0;
}

void checkAgainstButtons(xEnt* ent)
{
    struct
    {
        xVec3 center;
        F32 unk;
    } data;
    xVec3Copy(&data.center, xBoundCenter(&ent->bound));
    data.unk = 0.5f;
    zSceneForAllBase(zThrown_ButtonIteratorCB, 0x18, (void*)&data);
}

void xDrawSphere(const xSphere*, U32)
{
}
