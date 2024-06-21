#ifndef XPTANKPOOL_H
#define XPTANKPOOL_H

#include <types.h>
#include <rwplcore.h>
#include <rwcore.h>
#include <rpworld.h>

enum ptank_group_type
{
    PGT_COLOR_MAT_UV2,
    PGT_POS_COLOR_SIZE_UV2,
    MAX_PGT
};

struct render_state
{
    RwTexture* texture;
    uint32 src_blend;
    uint32 dst_blend;
    uint32 flags;
};

struct _class
{
    uint8* data;
    int32 stride;
    uint32 size;
};

struct ptank_pool
{
    render_state rs;
    uint32 used;
    RpAtomic* ptank;
    _class hide;

    void flush();
    void grab_block(ptank_group_type type);
};

void xPTankPoolSceneEnter();
void xPTankPoolSceneExit();
void xPTankPoolRender();

#endif