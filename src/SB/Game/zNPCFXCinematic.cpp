#include "xVec3.h"
#include "xMath3.h"

#include "zNPCFXCinematic.h"

#include <types.h>

void zNPCFXShutdown()
{
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

void clamp_bone_index(NCINEntry*, RpAtomic*)
{
}
