#ifndef XDECAL_H
#define XDECAL_H

#include "xMath2.h"
#include "xMath3.h"
#include "containers.h"
#include "../p2/iColor.h"

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

    struct curve_node
    {
        float32 time;
        iColor_tag color;
        float32 scale;
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
    static_queue<unit_data*> units;
    curve_node* curve;
    uint32 curve_size;
    uint32 curve_index;
    float32 ilife;

	void set_curve(const curve_node* curve, ulong32 size);
	void refresh_config();
	void set_texture(const int8* name);
	void set_default_config();
};

void xDecalInit();
void xDecalUpdate(float32 dt);
void xDecalDestroy();
void xDecalRender();

#endif