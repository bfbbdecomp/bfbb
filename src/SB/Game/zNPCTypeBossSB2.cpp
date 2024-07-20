#include "xVec3.h"
#include "xMath3.h"

#include "zNPCTypeBossSB2.h"

#include <types.h>

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

void zNPCB_SB2::render_debug()
{
}

void zNPCB_SB2::decompose()
{
}

void zNPCB_SB2::HoldUpDude()
{
}

S32 zNPCGoalBossSB2Death::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}
