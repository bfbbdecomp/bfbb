#ifndef XPAREMITTER_H
#define XPAREMITTER_H

#include "xBase.h"
#include "xModel.h"
#include "xParEmitterType.h"
#include "xParGroup.h"
#include "xParSys.h"

struct xParInterp
{
    float32 val[2];
    uint32 interp;
    float32 freq;
    float32 oofreq;
};

struct xParEmitterPropsAsset : xBaseAsset
{
    uint32 parSysID;
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
    uint32 emit_limit;
    float32 emit_limit_reset_time;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
    uint32 custom_flags;
    uint32 attachToID;
    xVec3 pos;
    xVec3 vel;
    float32 vel_angle_variation;
    uint8 rot[3];
    uint8 padding;
    float32 radius;
    float32 emit_interval_current;
    void* emit_volume;
};

struct xParEmitterAsset : xBaseAsset
{
    uint8 emit_flags;
    uint8 emit_type;
    uint16 pad;
    uint32 propID;
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
    uint32 attachToID;
    xVec3 pos;
    xVec3 vel;
    float32 vel_angle_variation;
    uint32 cull_mode;
    float32 cull_dist_sqr;
};

struct xParEmitter : xBase
{
    xParEmitterAsset* tasset;
    xParGroup* group;
    xParEmitterPropsAsset* prop;
    uint8 rate_mode;
    float32 rate;
    float32 rate_time;
    float32 rate_fraction;
    float32 rate_fraction_cull;
    uint8 emit_flags;
    uint8 emit_pad[3];
    uint8 rot[3];
    xModelTag tag;
    float32 oocull_distance_sqr;
    float32 distance_to_cull_sqr;
    void* attachTo;
    xParSys* parSys;
    void* emit_volume;
    xVec3 last_attach_loc;
};

struct xScene;

void xParEmitterInit(void* b, void* tasset);
void xParEmitterDestroy();
void xParEmitterUpdate(xBase* to, xScene*, float32 dt);

#endif