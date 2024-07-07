#include "xLaserBolt.h"
#include "xString.h"
#include "xstransvc.h"
#include "iParMgr.h"

#include <types.h>

extern tagiRenderInput gRenderBuffer;
extern F32 lbl_803CF7A4; // 0.0f
extern F32 lbl_803CF7A8; // 255f

void xLaserBoltEmitter::set_texture(char* name)
{
    set_texture(xStrHash(name));
}

void xLaserBoltEmitter::set_texture(U32 aid)
{
    set_texture((RwTexture*)xSTFindAsset(aid, NULL));
}

void xLaserBoltEmitter::set_texture(RwTexture* tex)
{
    if (tex == NULL)
    {
        this->bolt_raster = NULL;
    }
    else
    {
        set_texture(tex->raster);
    }
}

void xLaserBoltEmitter::set_texture(RwRaster* raster)
{
    this->bolt_raster = raster;
}

void xLaserBoltEmitter::refresh_config()
{
    F32 alpha;
    if (this->cfg.kill_dist <= this->cfg.fade_dist)
    {
        alpha = lbl_803CF7A4;
    }
    else
    {
        alpha = lbl_803CF7A8 / (this->cfg.kill_dist - this->cfg.fade_dist);
    }
    this->ialpha = alpha;
}

#if 0

// WIP.
void xLaserBoltEmitter::attach_effects(fx_when_enum when, effect_data* fx, size_t fxsize)
{
    // TODO!!!
}

#endif

RxObjSpace3DVertex* xLaserBoltEmitter::get_vert_buffer(S32& dat)
{
    dat = (U32)0x1e0;
    return gRenderBuffer.m_vertex;
}

#if 0

// WIP.
void xLaserBoltEmitter::reset_fx(fx_when_enum when)
{
    U32* sizePtr = &this->fxsize[when];
    effect_data** effect = &this->fx[when];
}

#endif
