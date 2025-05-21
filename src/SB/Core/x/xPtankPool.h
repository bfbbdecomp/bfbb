#ifndef XPTANKPOOL_H
#define XPTANKPOOL_H

#include <types.h>
#include <rwplcore.h>
#include <rwcore.h>
#include <rpworld.h>

struct iColor_tag;
struct xVec2;
struct xVec3;
struct RpAtomic;

enum ptank_group_type
{
    PGT_COLOR_MAT_UV2,
    PGT_POS_COLOR_SIZE_UV2,
    MAX_PGT
};

struct render_state
{
    RwTexture* texture;
    U32 src_blend;
    U32 dst_blend;
    U32 flags;
};

struct _class
{
    U8* data;
    S32 stride;
    U32 size;
};

struct ptank_pool
{
    render_state rs;
    U32 used;
    RpAtomic* ptank;
    struct {
        U8* data;
        S32 stride;
        U32 size;
    } hide;

    bool valid() const;
    void reset();
    void flush();
    void grab_block(ptank_group_type type);
};

// total size: 0x38
struct ptank_pool__pos_color_size_uv2 : public ptank_pool
{
    xVec3* pos;
    iColor_tag* color;
    xVec2* size;
    xVec2* uv;
    S32 stride;

    void next();
    void flush();
};

void xPTankPoolSceneEnter();
void xPTankPoolSceneExit();
void xPTankPoolRender();

#endif
