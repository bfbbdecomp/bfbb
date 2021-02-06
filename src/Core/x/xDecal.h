#ifndef XDECAL_H
#define XDECAL_H

#include "xFX.h"
#include "xMath2.h"
#include "xMath3.h"
#include <types.h>

#include <types.h>
#include <rwcore.h>
void xDecalInit();
void xDecalUpdate(float32 dt);
void xDecalDestroy();
void xDecalRender();

enum texture_mode
{
    TM_DEFAULT,
    TM_RANDOM,
    TM_CYCLE,
    MAX_TM,
    FORCE_INT_TM = 0xffffffff
};

struct unit_data
{
    uint8 flags;
    uint8 curve_index;
    uint8 u;
    uint8 v;
    float32 frac;
    float32 age;
    float32 cull_size;
    xMat4x3 mat;
};

struct xDecalEmitter
{
    struct config
    {
        uint32 flags;
        float32 life_time;
        uint32 blend_src;
        uint32 blend_dst;
        struct
        {
            xVec2 uv[2];
            uint8 rows;
            uint8 cols;
            texture_mode mode;
        } texture;
    };

    struct static_queue
    {
        uint32 _first;
        uint32 _size;
        uint32 _max_size;
        uint32 _max_size_mask;
        unit_data* _buffer;
    };

    config cfg;
    struct
    {
        RwTexture* asset;
        uint32 units;
        xVec2 size;
        xVec2 isize;
        int32 prev;
    } texture;
    static_queue units;
    curve_node* curve;
    uint32 curve_size;
    uint32 curve_index;
    float32 ilife;
};

#endif