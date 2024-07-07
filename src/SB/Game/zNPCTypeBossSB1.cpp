#include "zNPCTypeBossSB1.h"
#include "zGrid.h"
#include "zThrown.h"

#include <types.h>

extern zEnt* sSB1_armTgtHit;

void SB1Dummy_UpdateFunc(xEnt* ent, xScene* param_2, F32 param_3)
{
    if (ent->frame != NULL)
    {
        xVec3Copy(&ent->frame->oldvel, &ent->frame->vel);
        ent->frame->oldmat = ent->frame->mat;
        xRotCopy(&ent->frame->oldrot, &ent->frame->rot);
        xMat4x3Copy(&ent->frame->mat, xModelGetFrame(ent->model));
        ent->frame->mode = 0;
    }
}

void SB1Dummy_BoundFunc(xEnt* ent, xVec3* param_2)
{
    xBoundUpdate(&ent->bound);
    zGridUpdateEnt(ent);
}

void SB1Dummy_RenderFunc(xEnt* ent)
{
    xDrawSphere(&(ent->bound).sph, 0xc0006);
}

S32 SB1Dummy_TgtEventFunc(xBase* to, xBase* from, U32 toEvent, const F32* param_f,
                            xBase* param_x)
{
    if (toEvent == 360)
    {
        sSB1_armTgtHit = (zEnt*)from;
    }
    return 1;
}
