#ifndef XPAREMITTER_H
#define XPAREMITTER_H

#include "xBase.h"
#include "xModel.h"
#include "xParEmitterType.h"
#include "xParGroup.h"
#include "xParSys.h"

struct xParInterp
{
    F32 val[2];
    U32 interp;
    F32 freq;
    F32 oofreq;
};

// Size 0x138
struct xParEmitterPropsAsset : xBaseAsset
{
    U32 parSysID;
    union
    {
        xParInterp rate;
        xParInterp value[1];
    };
    xParInterp life;
    xParInterp size_birth;
    xParInterp size_death;
    xParInterp color_birth[4];
    xParInterp color_death[4];
    xParInterp vel_scale;
    xParInterp vel_angle;
    xVec3 vel;
    U32 emit_limit;
    F32 emit_limit_reset_time;
};

// Size 0x16c
struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
    U32 custom_flags;
    U32 attachToID;
    xVec3 pos;
    xVec3 vel;
    F32 vel_angle_variation;
    U8 rot[3];
    U8 padding;
    F32 radius;
    F32 emit_interval_current;
    void* emit_volume;
};

struct xParEmitterAsset : xBaseAsset
{
    U8 emit_flags;
    U8 emit_type;
    U16 pad;
    U32 propID;
    union
    {
        xPECircle e_circle;
        _tagEmitSphere e_sphere;
        _tagEmitRect e_rect;
        _tagEmitLine e_line;
        _tagEmitVolume e_volume;
        _tagEmitOffsetPoint e_offsetp;
        xPEVCyl e_vcyl;
        xPEEntBone e_entbone;
        xPEEntBound e_entbound;
    };
    U32 attachToID;
    xVec3 pos;
    xVec3 vel;
    F32 vel_angle_variation;
    U32 cull_mode;
    F32 cull_dist_sqr;
};

struct xParEmitter : xBase
{
    xParEmitterAsset* tasset;
    xParGroup* group;
    xParEmitterPropsAsset* prop;
    U8 rate_mode;
    F32 rate;
    F32 rate_time;
    F32 rate_fraction;
    F32 rate_fraction_cull;
    U8 emit_flags;
    U8 emit_pad[3];
    U8 rot[3];
    xModelTag tag;
    F32 oocull_distance_sqr;
    F32 distance_to_cull_sqr;
    void* attachTo;
    xParSys* parSys;
    void* emit_volume;
    xVec3 last_attach_loc;
};

struct xScene;

void xParEmitterInit(void* b, void* tasset);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterDestroy();
void xParEmitterUpdate(xBase* to, xScene*, F32 dt);
xPar* xParEmitterEmitCustom(xParEmitter* p, F32 dt, xParEmitterCustomSettings* info);
F32 xParInterpCompute(S32 interp_mode, xParInterp* r, F32 time, S32 time_has_elapsed,
                          F32 last_val);

#endif
