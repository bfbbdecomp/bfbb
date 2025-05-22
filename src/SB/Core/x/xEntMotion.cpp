#include "xDebug.h"
#include "xEntMotion.h"
#include "xMath.h"

#include <types.h>

// Artificial
enum en_MOTIONTYPE
{
    MOTION_TYPE_EXRT,
    MOTION_TYPE_ORBT,
    MOTION_TYPE_SPLN,
    MOTION_TYPE_MVPT,
    MOTION_TYPE_MECH,
    MOTION_TYPE_PEND
};

void xEntMotionInit(xEntMotion* a, xEnt* b, xEntMotionAsset* c)
{
    a->asset = c;
    a->type = c->type;
    a->flags = c->flags;

    if (a->type == MOTION_TYPE_EXRT)
    {
        xVec3Copy(&a->er.a, &c->er.ret_pos);
        xVec3Add(&a->er.b, &c->er.ret_pos, &c->er.ext_dpos);

        a->er.et = c->er.ext_tm;
        a->er.wet = c->er.ext_wait_tm;
        a->er.rt = c->er.ret_tm;
        a->er.wrt = c->er.ret_wait_tm;

        if (a->er.p <= 0)
        {
            a->er.p = 10.0f;
        }

        a->er.brt = a->er.et + a->er.wet;
        a->er.ert = a->er.brt + a->er.rt;
        a->er.p = a->er.ert + a->er.wrt;
    }
    else if (a->type == MOTION_TYPE_ORBT)
    {
        xVec3Copy((xVec3*)(&a->er.b), &c->er.ret_pos);

        a->orb.a = c->orb.w;
        a->orb.b = c->orb.h;

        if (c->orb.period <= 0.0f)
        {
            c->orb.period = 10.0f;
        }

        a->orb.p = c->orb.period;
        a->orb.w = (2 * PI) / c->orb.period;
    }
    else if (a->type == MOTION_TYPE_MVPT)
    {
        // literally nothing
    }
    else if (a->type == MOTION_TYPE_PEND)
    {
        if (c->pen.period <= 1e-5f)
        {
            c->pen.period = 0;
        }

        a->pen.w = (2 * PI) / c->pen.period;
    }
    else if (a->type == MOTION_TYPE_MECH)
    {
        if (c->mp.speed < 1e-5f)
        {
            c->mp.speed = 0;
        }

        if (c->mech.sld_acc_tm + c->mech.sld_dec_tm > c->mech.sld_tm)
        {
            c->mech.sld_dec_tm = c->mech.sld_acc_tm = c->mech.sld_tm * 0.5f;
        }

        if (c->mech.rot_tm < 3.0f)
        {
            c->mech.rot_tm = 1.0f;
        }

        if (c->mech.type == 2)
        {
            if (c->mech.rot_tm != c->mech.sld_tm)
            {
                c->mech.rot_tm = c->mech.sld_tm;
            }
        }
        if (c->mech.rot_acc_tm + c->mech.rot_dec_tm > c->mech.rot_tm)
        {
            c->mech.rot_dec_tm = c->mech.rot_acc_tm = c->mech.rot_tm * 0.5f;
        }
    }

    a->owner = b;
    a->target = NULL;

    xEntMotionDebugAdd(a);
}

void xEntMechForward(xEntMotion* motion)
{
    xEntMotionMechData* mech = &(motion->asset->mech);
    xEntMotionAsset* mkasst = motion->asset;

    xEntMotionRun(motion);

    if ((motion->mech.state != 0) && (motion->mech.state != 1) && (motion->mech.state != 2))
    {
        if (motion->mech.state == 3)
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = mkasst->mech.sld_tm - motion->tmr;
            motion->mech.state = 0;
        }
        else if (motion->mech.state == 4)
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = mkasst->mech.rot_tm - motion->tmr;
            motion->mech.state = 1;
        }
        else if ((motion->mech.state != 5) && (motion->mech.state != 6) &&
                 (motion->mech.state == 7))
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = 0.0f;

            if ((mech->type == 0) || (mech->type == 2) || (mech->type == 4))
            {
                motion->mech.state = 0;
            }
            else
            {
                motion->mech.state = 1;
            }
        }
    }
}

void xEntMechReverse(xEntMotion* motion)
{
    xEntMotionMechData* mech = &(motion->asset->mech);
    xEntMotionAsset* mkasst = motion->asset;

    xEntMotionRun(motion);

    if (motion->mech.state == 0)
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = mkasst->mech.sld_tm - motion->tmr;
        motion->mech.state = 3;
    }
    else if (motion->mech.state == 1)
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = mkasst->mech.rot_tm - motion->tmr;
        motion->mech.state = 4;
    }
    else if ((motion->mech.state != 2) && (motion->mech.state != 3) && (motion->mech.state != 4) &&
             (motion->mech.state != 5) && (motion->mech.state == 6))
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = 0.0f;

        if ((mech->type == 0) || (mech->type == 2) || (mech->type == 4))
        {
            motion->mech.state = 3;
        }
        else
        {
            motion->mech.state = 4;
        }
    }
}

static xEntMotion** dbg_xems;
static U16 dbg_num;
static U16 dbg_num_allocd;
static S16 dbg_idx = -1;

void xEntMotionDebugCB();

// Non-matching: scheduling
void xEntMotionDebugInit(U16 num_xems)
{
    if (num_xems != 0)
    {
        xDebugModeAdd("DBG_XENTMOTION", xEntMotionDebugCB);
        dbg_num = 0;
        dbg_xems = (xEntMotion**)xMemAlloc(gActiveHeap, num_xems << 2, 0);
        dbg_num_allocd = num_xems;
        dbg_idx = 0;
    }
}

// This scheduling is absolutely shambolic
void xEntMotionDebugAdd(xEntMotion* motion)
{
    if (dbg_num < dbg_num_allocd)
    {
        dbg_num++;
        dbg_xems[dbg_num] = motion;
    }
}

void xEntMotionDebugExit()
{
    dbg_num = 0;
    dbg_xems = NULL;
    dbg_num_allocd = 0;
    dbg_idx = -1;
}

void xEntMotionDebugCB()
{
}

S32 xDebugModeAdd(char*, void*)
{
    return 0;
}

void xEntMotionRun(xEntMotion* motion)
{
    motion->flags &= 0xFFFB;
}

void xEntMotionStop(xEntMotion* motion)
{
    motion->flags |= 0x4;
}

void xEntMotionReset(xEntMotion*, xScene*)
{
}

U32 xEntMotionIsStopped(const xEntMotion* motion)
{
    return motion->flags & 0x4;
}

U32 xEntERIsExtending(const xEntMotion* motion)
{
    return motion->t < motion->er.et;
}

U32 xEntERIsExtended(const xEntMotion* motion)
{
    return motion->t >= motion->er.et && motion->t < motion->er.brt;
}

U32 xEntERIsRetracted(const xEntMotion* motion)
{
    return motion->t >= motion->er.ert;
}

U32 xEntERIsRetracting(const xEntMotion* motion)
{
    return motion->t >= motion->er.brt && motion->t < motion->er.ert;
}

void xEntMPSetSpeed(xEntMotion* motion, F32 speed)
{
    motion->mp.speed = MAX(0.0f, speed);
}

void xEntMotionTranslate(xEntMotion*, const xVec3*, xMat4x3*)
{
}

void xEntMotionMove(xEntMotion*, xScene*, F32, xEntFrame*)
{
}

F32 xSpline3_ArcTotal(xSpline3*)
{
    return 0.0f;
}

void xQuatCopy(xQuat* a, const xQuat* b)
{
    a->s = b->s;
    a->v.x = b->v.x;
    a->v.y = b->v.y;
    a->v.z = b->v.z;
}

U32 xVec3Equals(const xVec3* a, const xVec3* b)
{
    // Epsilon test with epsilon of... 0.0f lol.
    return xabs(a->x - b->x) <= 0.0f && xabs(a->y - b->y) <= 0.0f && xabs(a->z - b->z) <= 0.0f;
}

U32 xQuatEquals(const xQuat* a, const xQuat* b)
{
    return (a->s == b->s) && xVec3Equals(&a->v, &b->v);
}

void xQuatFlip(xQuat* a, const xQuat* b)
{
    a->s = -b->s;
    xVec3Inv(&a->v, &b->v);
}

F32 xQuatDot(const xQuat* a, const xQuat* b)
{
    return xVec3Dot(&a->v, &b->v) + a->s * b->s;
}

void xDrawLine(const xVec3* start, const xVec3* end)
{
}

void xDrawSetColor(iColor_tag color)
{
}
