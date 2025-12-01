#ifndef XENTMOTION_H
#define XENTMOTION_H

#include "xEnt.h"
#include "xEntMotionAsset.h"
#include "xMovePoint.h"
#include "xColor.h"

#define XENTMOTION_TYPE_ER 0 // Extend / Retract
#define XENTMOTION_TYPE_ORB 1 // Orbital
#define XENTMOTION_TYPE_SPL 2 // Spline
#define XENTMOTION_TYPE_MP 3 // Movepoint
#define XENTMOTION_TYPE_MECH 4 // Mechanism
#define XENTMOTION_TYPE_PEN 5 // Pendulum

struct xEntMotionERData
{
    xVec3 ret_pos;
    xVec3 ext_dpos;
    F32 ext_tm;
    F32 ext_wait_tm;
    F32 ret_tm;
    F32 ret_wait_tm;
};

struct xEntMotionOrbitData
{
    xVec3 center;
    F32 w;
    F32 h;
    F32 period;
};

struct xEntMotionSplineData
{
    S32 unknown;
};

struct xEntMotionMPData
{
    U32 flags;
    U32 mp_id;
    F32 speed;
};

struct xEntMotionMechData
{
    U8 type;
    U8 flags;
    U8 sld_axis;
    U8 rot_axis;
    F32 sld_dist;
    F32 sld_tm;
    F32 sld_acc_tm;
    F32 sld_dec_tm;
    F32 rot_dist;
    F32 rot_tm;
    F32 rot_acc_tm;
    F32 rot_dec_tm;
    F32 ret_delay;
    F32 post_ret_delay;
};

struct xEntMotionPenData
{
    U8 flags;
    U8 plane;
    U8 pad[2];
    F32 len;
    F32 range;
    F32 period;
    F32 phase;
};

struct xEntMotionAsset
{
    U8 type;
    U8 use_banking;
    U16 flags;
    union
    {
        xEntMotionERData er;
        xEntMotionOrbitData orb;
        xEntMotionSplineData spl;
        xEntMotionMPData mp;
        xEntMotionMechData mech;
        xEntMotionPenData pen;
    };
};

struct xEntERData
{
    xVec3 a;
    xVec3 b;
    xVec3 dir;
    F32 et;
    F32 wet;
    F32 rt;
    F32 wrt;
    F32 p;
    F32 brt;
    F32 ert;
    S32 state;
};

struct xEntOrbitData
{
    xVec3 orig;
    xVec3 c;
    F32 a;
    F32 b;
    F32 p;
    F32 w;
};

struct xEntSplineData
{
    S32 unknown;
};

struct xEntMPData
{
    F32 curdist;
    F32 speed;
    xMovePoint* dest;
    xMovePoint* src;
    xSpline3* spl;
    F32 dist;
    U32 padalign;
    xQuat aquat;
    xQuat bquat;
};

struct xEntMechData
{
    xVec3 apos;
    xVec3 bpos;
    xVec3 dir;
    F32 arot;
    F32 brot;
    F32 ss;
    F32 sr;
    S32 state;
    F32 tsfd;
    F32 trfd;
    F32 tsbd;
    F32 trbd;
    F32* rotptr;
};

struct xEntPenData
{
    xVec3 top;
    F32 w;
    xMat4x3 omat;
};

struct xEntMotion // Size: 0x70
{
    xEntMotionAsset* asset;
    U8 type;
    U8 pad;
    U16 flags;
    F32 t;
    F32 tmr;
    F32 d;
    union
    {
        xEntERData er;
        xEntOrbitData orb;
        xEntSplineData spl;
        xEntMPData mp;
        xEntMechData mech;
        xEntPenData pen;
    };
    xEnt* owner;
    xEnt* target;
};

void xEntMotionInit(xEntMotion* motion, xEnt*, xEntMotionAsset* asset);
void xEntMotionReset(xEntMotion* motion, xScene* sc);
void xEntMotionMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
void xEntMotionTranslate(xEntMotion* motion, const xVec3* dpos, xMat4x3* dmat);
void xEntMotionDebugInit(U16 num_xems);
void xEntMotionDebugAdd(xEntMotion*);
void xEntMotionDebugExit();
void xEntMotionStop(xEntMotion* motion);
void xEntMotionRun(xEntMotion* motion);
U32 xEntMotionIsStopped(const xEntMotion* motion);
void xEntMechForward(xEntMotion* motion);
void xEntMechReverse(xEntMotion* motion);
void xEntMPSetSpeed(xEntMotion* motion, F32 speed);

inline U32 xEntMotionIsStopped(const xEntMotion* motion)
{
    return motion->flags & k_XENTMOTION_STOPPED;
}

inline void xEntMotionStop(xEntMotion* motion)
{
    motion->flags |= k_XENTMOTION_STOPPED;
}

inline void xEntMotionRun(xEntMotion* motion)
{
    motion->flags &= (U16)~k_XENTMOTION_STOPPED;
}

inline U32 xEntERIsExtending(const xEntMotion* motion)
{
    return motion->t < motion->er.et;
}

inline U32 xEntERIsExtended(const xEntMotion* motion)
{
    return motion->t >= motion->er.et && motion->t < motion->er.brt;
}

inline U32 xEntERIsRetracting(const xEntMotion* motion)
{
    return motion->t >= motion->er.brt && motion->t < motion->er.ert;
}

inline U32 xEntERIsRetracted(const xEntMotion* motion)
{
    return motion->t >= motion->er.ert;
}

inline void xEntMPSetSpeed(xEntMotion* motion, F32 speed)
{
    motion->mp.speed = MAX(0.0f, speed);
}

inline void xEntMPAccelerate(xEntMotion* motion, F32 new_speed)
{
    motion->mp.speed = MAX(0.0f, motion->mp.speed + new_speed);
}

#endif
