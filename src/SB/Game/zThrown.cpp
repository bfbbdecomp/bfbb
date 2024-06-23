#include "zThrown.h"

#include <types.h>
#include <string.h>

#include "zEvent.h"
#include "zScene.h"

extern zThrownStruct zThrownList[0x20];
extern ThrowableStats zThrowableModels[23];
extern uint32 zThrownCount;
extern uint32 sFruitIsFreezy;
extern uint32 sDebugDepth;
extern CarryableStats c_fruit;
extern uint32 sThrowButtonMask;
extern float32 _842; // 0.5f
extern float32 _844; // 0.0f

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
    for (uint32 i = 0; i < zThrownCount; i++)
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
    for (uint32 i = 0; i < zThrownCount; i++)
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

void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                                float32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = _844;
    *friction = _844;
    zEntEvent(thrown->ent, eEventDestroy);
}

void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                               float32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = _844;
    *friction = _844;
}

void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                         float32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = _844;
    *friction = _844;
    zEntEvent(thrown->ent, eEventDestroy);
}

#if 0
// WIP.
int32 zThrown_IsFruit(xEnt* ent, float32* stackHeight)
{
    ThrowableStats* stats = zThrowableModels;
    while (stats->nameHash != ent->asset->modelInfoID &&
           stats->nameHashMINF != ent->asset->modelInfoID && stats->name != NULL)
    {
        stats++;
    }
    if (stats != NULL && *(uint32*)&stats->carry->killTimer == *(uint32*)&c_fruit.killTimer)
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
        float32 unk;
    } data;
    xVec3Copy(&data.center, d);
    data.unk = _842;
    zSceneForAllBase(zThrown_ButtonIteratorCB, 0x18, (void*)&data);
}

#endif

void xDrawSphere(xSphere* s, uint32 unk)
{
}

#if 0
// Idk what is wrong with this one.
xEntDrive& xEntDrive::operator=(const xEntDrive& other)
{
    this->flags = other.flags;
    this->otm = other.otm;
    this->otmr = other.otmr;
    this->os = other.os;
    this->tm = other.tm;
    this->tmr = other.tmr;
    this->s = other.s;
    this->odriver = other.odriver;
    this->driver = other.driver;
    this->driven = other.driven;
    *(uint32*)&this->op.x = *(uint32*)&other.op.x;
    *(uint32*)&this->op.y = *(uint32*)&other.op.y;
    *(uint32*)&this->op.z = *(uint32*)&other.op.z;
    *(uint32*)&this->p.x = *(uint32*)&other.p.x;
    *(uint32*)&this->p.y = *(uint32*)&other.p.y;
    *(uint32*)&this->p.z = *(uint32*)&other.p.z;
    *(uint32*)&this->q.x = *(uint32*)&other.q.x;
    *(uint32*)&this->q.y = *(uint32*)&other.q.y;
    *(uint32*)&this->q.z = *(uint32*)&other.q.z;
    this->yaw = other.yaw;
    this->dloc = other.dloc;
    this->tri = other.tri;
    return *this;
}

#endif

xEntDrive::tri_data& xEntDrive::tri_data::operator=(const tri_data& other)
{
    xCollis::tri_data::operator=(other);
    *(uint32*)&this->loc.x = *(uint32*)&other.loc.x;
    *(uint32*)&this->loc.y = *(uint32*)&other.loc.y;
    *(uint32*)&this->loc.z = *(uint32*)&other.loc.z;
    this->yaw = other.yaw;
    this->coll = other.coll;
    return *this;
}
