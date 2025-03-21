#include "xEntMotion.h"
#include "xMath.h"

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

void xEntMotionInit(xEntMotion* a, xEnt* b, xEntMotionAsset* c)
{
    a->asset = c;
    a->type = c->type;
    a->flags = c->flags;

    if (a->type == 0) // ER
    {
        xVec3Copy(&a->er.a, &c->er.ret_pos);
        xVec3Add(&a->er.b, &c->er.ret_pos, &c->er.ext_dpos);

        a->er.et  = c->er.ext_tm;
        a->er.wet = c->er.ext_wait_tm;
        a->er.rt  = c->er.ret_tm;
        a->er.wrt = c->er.ret_wait_tm;

        if (a->er.p <= 0)
        {
            a->er.p = 10.0f;
        }

        a->er.brt = a->er.et  + a->er.wet;
        a->er.ert = a->er.brt + a->er.rt;
        a->er.p   = a->er.ert + a->er.wrt;
    }
    else if (a->type == 1) // Orbit
    {
        xVec3Copy((xVec3*)(&a->er.b), &c->er.ret_pos);

        a->orb.a  = c->orb.w;
        a->orb.b  = c->orb.h;

        if (c->orb.period <= 0.0f)
        {
            c->orb.period = 10.0f;
        }

        a->orb.p = c->orb.period;
        a->orb.w = (2 * PI) / c->orb.period;
    }
    else if (a->type == 3) // MP
    {
        // literally nothing
    }
    else if (a->type == 5)  // Pen
    {
        if (c->pen.period <= 1e-5f)
        {
             c->pen.period = 0;
        }

        a->pen.w = (2 * PI) / c->pen.period;
    }
    else if (a->type == 4) // Mech
    {
        if (c->mp.speed < 1e-5f)
        {
             c->mp.speed = 0;
        }

        if (c->mech.sld_acc_tm + c->mech.sld_dec_tm > c->mech.sld_tm)
        {
            c->mech.sld_dec_tm =
            c->mech.sld_acc_tm =
            c->mech.sld_tm * 0.5f;
        }

        if (c->mech.rot_tm < 3.0f)
        {
            c->mech.rot_tm = 1.0f;
        }

        if (c->mech.type == 2)
        {
            if ( c->mech.rot_tm != c->mech.sld_tm )
            {
                 c->mech.rot_tm = c->mech.sld_tm;
            }
            }
            if (c->mech.rot_acc_tm + c->mech.rot_dec_tm > c->mech.rot_tm)
            {
                c->mech.rot_dec_tm =
                c->mech.rot_acc_tm =
                c->mech.rot_tm * 0.5f;
            }
    }

    a->owner = b;
    a->target = NULL;

    xEntMotionDebugAdd(a);
}