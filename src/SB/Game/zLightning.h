#ifndef ZLIGHTNING_H
#define ZLIGHTNING_H

#include "xMath3.h"
#include "iColor.h"

#include "zFX.h"

struct _tagLightningAdd
{
    U32 type;
    F32 setup_degrees;
    F32 move_degrees;
    F32 rot_radius;
    xVec3* start;
    xVec3* end;
    S16 total_points;
    S16 end_points;
    F32 time;
    F32 arc_height;
    F32 thickness;
    iColor_tag color;
    F32 rand_radius;
    U32 flags;
    F32 zeus_normal_offset;
    F32 zeus_back_offset;
    F32 zeus_side_offset;
};

struct _tagLightningLine
{
    F32 unused;
};

struct _tagLightningRot
{
    F32 deg[16];
    F32 degrees;
    F32 height;
};

struct _tagLightningZeus
{
    F32 normal_offset;
    F32 back_offset;
    F32 side_offset;
};

struct zLightning
{
    U32 type;
    U32 flags;
    union
    {
        struct
        {
            xVec3 base_point[16];
            xVec3 point[16];
            S16 total_points;
            S16 end_points;
            F32 arc_height;
            xVec3 arc_normal;
            F32 thickness[16];
            union
            {
                _tagLightningLine line;
                _tagLightningRot rot;
                _tagLightningZeus zeus;
            };
            F32 rand_radius;
        } legacy;
        struct
        {
            xVec3 endPoint[2];
            xVec3 direction;
            F32 length;
            F32 scale;
            F32 width;
            F32 endParam[2];
            F32 endVel[2];
            F32 paramSpan[2];
            F32 arc_height;
            xVec3 arc_normal;
        } func;
    };
    iColor_tag color;
    F32 time_left;
    F32 time_total;
};

void lightningTweakChangeType(tweak_info& t);
void lightningTweakStart(tweak_info& t);
void zLightningInit();
zLightning* FindFreeLightning();
zLightning* zLightningAdd(_tagLightningAdd* add);
void UpdateLightning(zLightning* l, F32 seconds);
void zLightningUpdate(F32 seconds);
void zLightningFunc_Render(zLightning* l);
void zLightningShow(zLightning* l, S32 show);
void zLightningKill(zLightning* l);
void RenderLightning(zLightning* l);
void zLightningRender();
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void xDebugAddTweak(char* name, U8* property, U8 param_3, U8 param_4,
                    tweak_callback* callback, void* param_6, U32 param_7);
void xDebugAddFlagTweak(char* name, U32* property, U32 param_3, tweak_callback* callback,
                        void* param_5, U32 param_6);
void xDebugAddSelectTweak(char* name, U32* param_2, char** param_3, U32* param_4,
                          U32 param_5, tweak_callback* callback, void* param_7, U32 param_8);
void xDebugAddTweak(char* name, S16* property, S16 param_3, S16 param_4,
                    tweak_callback* callback, void* param_6, U32 param_7);

void zLightningInit();
void zLightningUpdate(F32 seconds);
void zLightningRender();

#endif
