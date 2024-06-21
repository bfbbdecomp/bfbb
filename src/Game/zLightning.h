#ifndef ZLIGHTNING_H
#define ZLIGHTNING_H

#include "../Core/x/xMath3.h"
#include "../Core/p2/iColor.h"

#include "zFX.h"

struct _tagLightningAdd
{
    uint32 type;
    float32 setup_degrees;
    float32 move_degrees;
    float32 rot_radius;
    xVec3* start;
    xVec3* end;
    int16 total_points;
    int16 end_points;
    float32 time;
    float32 arc_height;
    float32 thickness;
    iColor_tag color;
    float32 rand_radius;
    uint32 flags;
    float32 zeus_normal_offset;
    float32 zeus_back_offset;
    float32 zeus_side_offset;
};

struct _tagLightningLine
{
    float32 unused;
};

struct _tagLightningRot
{
    float32 deg[16];
    float32 degrees;
    float32 height;
};

struct _tagLightningZeus
{
    float32 normal_offset;
    float32 back_offset;
    float32 side_offset;
};

struct zLightning
{
    uint32 type;
    uint32 flags;
    union
    {
        struct
        {
            xVec3 base_point[16];
            xVec3 point[16];
            int16 total_points;
            int16 end_points;
            float32 arc_height;
            xVec3 arc_normal;
            float32 thickness[16];
            union
            {
                _tagLightningLine line;
                _tagLightningRot rot;
                _tagLightningZeus zeus;
            };
            float32 rand_radius;
        } legacy;
        struct
        {
            xVec3 endPoint[2];
            xVec3 direction;
            float32 length;
            float32 scale;
            float32 width;
            float32 endParam[2];
            float32 endVel[2];
            float32 paramSpan[2];
            float32 arc_height;
            xVec3 arc_normal;
        } func;
    };
    iColor_tag color;
    float32 time_left;
    float32 time_total;
};

void lightningTweakChangeType(tweak_info& t);
void lightningTweakStart(tweak_info& t);
void zLightningInit();
zLightning* FindFreeLightning();
zLightning* zLightningAdd(_tagLightningAdd* add);
void UpdateLightning(zLightning* l, float32 seconds);
void zLightningUpdate(float32 seconds);
void zLightningFunc_Render(zLightning* l);
void zLightningShow(zLightning* l, int32 show);
void zLightningKill(zLightning* l);
void RenderLightning(zLightning* l);
void zLightningRender();
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void xDebugAddTweak(char* name, uint8* property, uint8 param_3, uint8 param_4,
                    tweak_callback* callback, void* param_6, uint32 param_7);
void xDebugAddFlagTweak(char* name, uint32* property, uint32 param_3, tweak_callback* callback,
                        void* param_5, uint32 param_6);
void xDebugAddSelectTweak(char* name, uint32* param_2, char** param_3, uint32* param_4,
                          uint32 param_5, tweak_callback* callback, void* param_7, uint32 param_8);
void xDebugAddTweak(char* name, int16* property, int16 param_3, int16 param_4,
                    tweak_callback* callback, void* param_6, uint32 param_7);

void zLightningInit();
void zLightningUpdate(float32 seconds);
void zLightningRender();

#endif