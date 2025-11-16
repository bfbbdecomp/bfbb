#ifndef XPTANKPOOL_H
#define XPTANKPOOL_H

#include <types.h>
#include <rwplcore.h>
#include <rwcore.h>
#include <rpworld.h>
#include <rpptank.h>

#include "xMath3.h"
#include "iColor.h"

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
    struct
    {
        U8* data;
        S32 stride;
        U32 size;
    } hide;

    bool valid() const;
    void reset();
    void flush();
    void grab_block(ptank_group_type type);
    bool at_block_end() const;
    void unlock_block();
    void lock_block();
};

struct ptank_pool__color_mat_uv2 : ptank_pool {
    iColor_tag* color;
    xMat4x3* mat;
    xVec2* uv;
    S32 stride;

    void flush()
    {
        hide.data = &color->r + stride;
        hide.stride = stride;
        hide.size = 4;
        ptank_pool::flush();
    }

    void next()
    {
        if (at_block_end())
        {
            if (valid())
            {
                unlock_block();
            }

            grab_block(PGT_COLOR_MAT_UV2);

            if (!valid())
            {
                return;
            }

            lock_block();
        }
        else
        {
            color = (iColor_tag*)((U8*)color + stride);
            mat = (xMat4x3*)((U8*)mat + stride);
            uv = (xVec2*)((U8*)uv + stride);
        }

        used++;
    }

    void lock_block()
    {
        RpPTankLockStruct ls_color;
        RpPTankLockStruct ls_mat;
        RpPTankLockStruct ls_uv2;

        RpPTankAtomicLock(this->ptank, &ls_color, rpPTANKIFLAGCOLOR, rpPTANKLOCKWRITE);
        RpPTankAtomicLock(this->ptank, &ls_mat, rpPTANKIFLAGMATRIX, rpPTANKLOCKWRITE);
        RpPTankAtomicLock(this->ptank, &ls_uv2, rpPTANKIFLAGVTX2TEXCOORDS, rpPTANKLOCKWRITE);

        color = (iColor_tag*)ls_color.data;
        mat = (xMat4x3*)ls_mat.data;
        uv = (xVec2*)ls_uv2.data;
        stride = ls_color.stride;
    }
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
