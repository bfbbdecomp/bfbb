#ifndef XPAREMITTER_H
#define XPAREMITTER_H

#include "xBase.h"
#include "xModel.h"
#include "xParEmitterType.h"
#include "xParGroup.h"
#include "xParSys.h"

enum en_xParEmitterEmitTypes
{
    eParEmitterPoint,
    eParEmitterCircleEdge,
    eParEmitterCircle,
    eParEmitterRectEdge,
    eParEmitterRect,
    eParEmitterLine,
    eParEmitterVolume,
    eParEmitterSphereEdge1,
    eParEmitterSphere,
    eParEmitterOffsetPoint,
    eParEmitterSphereEdge2,
    eParEmitterSphereEdge3,
    eParEmitterVCylEdge,
    eParEmitterOCircleEdge,
    eParEmitterOCircle,
    eParEmitterEntityBone,
    eParEmitterEntityBound
};

struct xParInterp
{
    F32 val[2];
    U32 interp;
    F32 freq;
    F32 oofreq;

    void set(F32, F32, F32, U32);
    void set(F32); // Used in zNPCDutchman
    void order();
    void operator=(const xParInterp& p);
};

// Size 0x138
struct xParEmitterPropsAsset : xBaseAsset
{
    U32 parSysID; // 0x8
    union
    {
        xParInterp rate; // 0xC
        xParInterp value[1]; // 0xC
    };
    xParInterp life; // 0x20
    xParInterp size_birth; // 0x34
    xParInterp size_death; // 0x48
    xParInterp color_birth[4]; // 0x5C
    xParInterp color_death[4]; // 0xAc
    xParInterp vel_scale; // 0xFC
    xParInterp vel_angle; // 0x110
    xVec3 vel; // 0x124
    U32 emit_limit; // 0x130
    F32 emit_limit_reset_time; // 0x134
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
    U8 emit_flags; // 0x8
    U8 emit_type; // 0x9
    U16 pad; // 0xA
    U32 propID; // 0xC
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
    U32 attachToID; // 0x2C
    xVec3 pos; // 0x30
    xVec3 vel; // 0x3C
    F32 vel_angle_variation; // 0x48
    U32 cull_mode; // 0x4C
    F32 cull_dist_sqr; // 0x50
};

struct xParEmitter : xBase
{
    xParEmitterAsset* tasset; // 0x10
    xParGroup* group; // 0x14
    xParEmitterPropsAsset* prop; // 0x18
    U8 rate_mode; // 0x1C
    F32 rate; // 0x20
    F32 rate_time; // 0x24
    F32 rate_fraction; // 0x28
    F32 rate_fraction_cull; // 0x2C
    U8 emit_flags; // 0x30
    U8 emit_pad[3]; // 0x31
    U8 rot[3]; // 0x34
    xModelTag tag; // 0x38
    F32 oocull_distance_sqr; // 0x58
    F32 distance_to_cull_sqr; // 0x5C
    void* attachTo; // 0x60
    xParSys* parSys; // 0x64
    void* emit_volume; // 0x68
    xVec3 last_attach_loc; // 0x6C
};

struct xScene;

void add_tweaks(xParEmitter& pe);
S32 xParInterpConvertInterpMode(xParInterp* p);
void xParEmitterInit(void* b, void* tasset);
void xParEmitterInit(xBase* b, xParEmitterAsset* pea);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterReset(xParEmitter* t);
S32 xParEmitterEventCB(xBase* to, xBase* from, U32 toEvent, F32* toParam, xBase* toParamWidget);
xPar* xParEmitterEmitCustom(xParEmitter* p, F32 dt, xParEmitterCustomSettings* info);
U32 xParEmitterCull(xParEmitter* t, xPar* p);
F32 xParInterpCompute(S32 interp_mode, xParInterp* r, F32 time, S32 time_has_elapsed, F32 lastVal);
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps);
xPar* xParEmitterEmit(xParEmitter* pe, F32 emit_dt, F32 par_dt);
void xParEmitterUpdate(xBase* to, xScene*, F32 dt);
void xParEmitterDestroy();
void xParEmitterEmit(xParEmitter* pe, F32 dt);

void sSaveEmmiterSettings(xParEmitterAsset* a, xParEmitterAsset* b, F32 c);
void sSaveEmmiterPropSettings(xParEmitterPropsAsset* a, xParEmitterPropsAsset* b, F32 c);
#endif
