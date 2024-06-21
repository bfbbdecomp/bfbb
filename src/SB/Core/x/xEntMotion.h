#ifndef XENTMOTION_H
#define XENTMOTION_H

#include "xEnt.h"
#include "xMovePoint.h"

struct xEntMotionERData
{
    xVec3 ret_pos;
    xVec3 ext_dpos;
    float32 ext_tm;
    float32 ext_wait_tm;
    float32 ret_tm;
    float32 ret_wait_tm;
};

struct xEntMotionOrbitData
{
    xVec3 center;
    float32 w;
    float32 h;
    float32 period;
};

struct xEntMotionSplineData
{
    int32 unknown;
};

struct xEntMotionMPData
{
    uint32 flags;
    uint32 mp_id;
    float32 speed;
};

struct xEntMotionMechData
{
    uint8 type;
    uint8 flags;
    uint8 sld_axis;
    uint8 rot_axis;
    float32 sld_dist;
    float32 sld_tm;
    float32 sld_acc_tm;
    float32 sld_dec_tm;
    float32 rot_dist;
    float32 rot_tm;
    float32 rot_acc_tm;
    float32 rot_dec_tm;
    float32 ret_delay;
    float32 post_ret_delay;
};

struct xEntMotionPenData
{
    uint8 flags;
    uint8 plane;
    uint8 pad[2];
    float32 len;
    float32 range;
    float32 period;
    float32 phase;
};

struct xEntMotionAsset
{
    uint8 type;
    uint8 use_banking;
    uint16 flags;
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
    float32 et;
    float32 wet;
    float32 rt;
    float32 wrt;
    float32 p;
    float32 brt;
    float32 ert;
    int32 state;
};

struct xEntOrbitData
{
    xVec3 orig;
    xVec3 c;
    float32 a;
    float32 b;
    float32 p;
    float32 w;
};

struct xEntSplineData
{
    int32 unknown;
};

struct xEntMPData
{
    float32 curdist;
    float32 speed;
    xMovePoint* dest;
    xMovePoint* src;
    xSpline3* spl;
    float32 dist;
    uint32 padalign;
    xQuat aquat;
    xQuat bquat;
};

struct xEntMechData
{
    xVec3 apos;
    xVec3 bpos;
    xVec3 dir;
    float32 arot;
    float32 brot;
    float32 ss;
    float32 sr;
    int32 state;
    float32 tsfd;
    float32 trfd;
    float32 tsbd;
    float32 trbd;
    float32* rotptr;
};

struct xEntPenData
{
    xVec3 top;
    float32 w;
    xMat4x3 omat;
};

struct xEntMotion
{
    xEntMotionAsset* asset;
    uint8 type;
    uint8 pad;
    uint16 flags;
    float32 t;
    float32 tmr;
    float32 d;
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

void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntMotionTranslate(xEntMotion* motion, const xVec3* dpos, xMat4x3* dmat);
void xEntMotionDebugInit(uint16 num_xems);
void xEntMotionDebugExit();

#endif