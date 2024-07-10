#include "zThrown.h"

#include <types.h>
#include <string.h>

#include "zEvent.h"
#include "zScene.h"

extern zThrownStruct zThrownList[0x20];
extern ThrowableStats zThrowableModels[23];
extern U32 zThrownCount;
extern U32 sFruitIsFreezy;
extern U32 sDebugDepth;
extern CarryableStats c_fruit;
extern U32 sThrowButtonMask;
extern F32 _842; // 0.5f
extern F32 _844; // 0.0f

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

#if 0
// WIP.
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher)
{
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (ent == zThrownList[i].ent)
        {
            zThrownList[i].patLauncher = launcher;
        }
    }
}

#endif

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
    *bounce = _844;
    *friction = _844;
    zEntEvent(thrown->ent, eEventDestroy);
}

void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                               F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = _844;
    *friction = _844;
}

void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, F32* bounce, F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = _844;
    *friction = _844;
    zEntEvent(thrown->ent, eEventDestroy);
}

#if 0
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

#endif

#if 0
// Random OR added in.
void checkAgainstButtons(xEnt* ent)
{
    xVec3* d = xBoundCenter(&ent->bound);
    struct
    {
        xVec3 center;
        F32 unk;
    } data;
    xVec3Copy(&data.center, d);
    data.unk = _842;
    zSceneForAllBase(zThrown_ButtonIteratorCB, 0x18, (void*)&data);
}

#endif

void xDrawSphere(const xSphere*, unsigned int)
{
}
