#ifndef ZENTTRIGGER_H
#define ZENTTRIGGER_H

#include "zEnt.h"

struct zEntTrigger : zEnt
{
    xMat4x3 triggerMatrix;
    xBox triggerBox;
    U32 entered;
};

struct xTriggerAsset
{
    xVec3 p[4];
    xVec3 direction;
    U32 flags;
};

#define ZENTTRIGGER_TYPE_BOX 0
#define ZENTTRIGGER_TYPE_SPHERE 1
#define ZENTTRIGGER_TYPE_VCYLINDER 2
#define ZENTTRIGGER_TYPE_VSPHERE 3
#define ZENTTRIGGER_TYPE_4 4
#define ZENTTRIGGER_TYPE_5 5

void zEntTriggerInit(void* ent, void* asset);
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset);
void zEntTriggerUpdate(zEntTrigger* trig, xScene*, F32);
S32 zEntTriggerEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*);
void zEntTriggerSave(zEntTrigger* ent, xSerial* s);
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s);
void zEntTriggerReset(zEntTrigger* ent);
bool zEntTriggerHitsSphere(const zEntTrigger& trig, const xSphere& o, const xVec3& dir);
xTriggerAsset* zEntTriggerAsset(const zEntTrigger& trig);

#endif
