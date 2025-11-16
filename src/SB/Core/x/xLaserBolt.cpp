#include "xLaserBolt.h"
#include "xString.h"
#include "xstransvc.h"
#include "iParMgr.h"
#include "zEvent.h"
#include "zBase.h"
#include "zNPCTypeCommon.h"
#include "zEntDestructObj.h"

#include <types.h>

void xLaserBoltEmitter::init(u32 max_bolts, const char* texture_name)
{
    this->bolt_raster = NULL;
    memset(fxsize, 0, sizeof(fxsize));
    this->bolts.init(max_bolts);
    debug_init(texture_name);
}


void xLaserBoltEmitter::set_texture(const char* name)
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

void xLaserBoltEmitter::reset()
{
}

void xLaserBoltEmitter::refresh_config()
{
    F32 alpha;
    if (this->cfg.kill_dist <= this->cfg.fade_dist)
    {
        alpha = 0.0f;
    }
    else
    {
        alpha = 255.0f / (this->cfg.kill_dist - this->cfg.fade_dist);
    }
    this->ialpha = alpha;
}

void xLaserBoltEmitter::attach_effects(fx_when_enum when, effect_data* fx, size_t fxsize)
{
    this->fx[when] = fx;
    this->fxsize[when] = fxsize;
    reset_fx(when);
    debug_refresh_effects(when);
}

RxObjSpace3DVertex* xLaserBoltEmitter::get_vert_buffer(S32& dat)
{
    dat = (U32)0x1e0;
    return gRenderBuffer.m_vertex;
}

void xLaserBoltEmitter::apply_damage(xLaserBoltEmitter::bolt& b)
{
    if (b.hit_ent->baseType == eBaseTypeNPC)
    {
        zNPCCommon* npc = (zNPCCommon*)b.hit_ent;
        npc->Damage(DMGTYP_PROJECTILE, NULL, &b.dir);
    }
    else if (b.hit_ent->baseType == eBaseTypeDestructObj)
    {
        zEntDestructObj_Hit((zEntDestructObj*)b.hit_ent, 0x40000);
    }
    else
    {
        zEntEvent(b.hit_ent, eEventHit, cfg.damage, 0.0f, 0.0f, 0.0f);
    }
}

// WIP.
void xLaserBoltEmitter::reset_fx(fx_when_enum when)
{
    for (U32 i = 0; i < sizeof(fx); i++) 
    {
        U32* sizePtr = &this->fxsize[when];
        effect_data** effect = &this->fx[when];

        
    }
}
