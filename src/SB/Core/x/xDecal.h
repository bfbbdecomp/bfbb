#ifndef XDECAL_H
#define XDECAL_H

#include "xMath2.h"
#include "xMath3.h"
#include "containers.h"
#include "iColor.h"

#include <types.h>
#include <rwcore.h>

struct xDecalEmitter
{
    enum texture_mode
    {
        TM_DEFAULT,
        TM_RANDOM,
        TM_CYCLE,
        MAX_TM,
        FORCE_INT_TM = 0xffffffff
    };

    struct config
    {
        U32 flags;
        F32 life_time; // 0x2ec
        U32 blend_src;
        U32 blend_dst;
        struct
        {
            xVec2 uv[2];
            U8 rows;
            U8 cols;
            texture_mode mode;
        } texture;
    };

    struct unit_data
    {
        U8 flags;
        U8 curve_index;
        U8 u;
        U8 v;
        F32 frac;
        F32 age;
        F32 cull_size;
        xMat4x3 mat;
    };

    struct curve_node
    {
        F32 time;
        iColor_tag color;
        F32 scale;
    };

    config cfg;
    struct
    {
        RwTexture* asset;
        U32 units;
        xVec2 size;
        xVec2 isize;
        S32 prev;
    } texture;
    static_queue<unit_data*> units;
    curve_node* curve;
    U32 curve_size;
    U32 curve_index;
    F32 ilife;

    void set_curve(const curve_node* curve, size_t size);
    void refresh_config();
    void set_texture(const char* name);
    void set_default_config();
    void init(S32 max_size, const char*);
};

void xDecalInit();
void xDecalUpdate(F32 dt);
void xDecalDestroy();
void xDecalRender();

#endif
