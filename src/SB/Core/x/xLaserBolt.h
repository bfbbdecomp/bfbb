#ifndef XLASERBOLT_H
#define XLASERBOLT_H

#include "xDecal.h"
#include "xEnt.h"
#include "xFX.h"
#include "xMath2.h"
#include "xMath3.h"
#include "xParEmitter.h"

#include <rwcore.h>
#include <types.h>

enum fx_when_enum
{
    FX_WHEN_LAUNCH,
    FX_WHEN_IMPACT,
    FX_WHEN_BIRTH,
    FX_WHEN_DEATH,
    FX_WHEN_HEAD,
    FX_WHEN_TAIL,
    FX_WHEN_KILL,
    MAX_FX_WHEN
};

enum fx_type_enum
{
    FX_TYPE_PARTICLE,
    FX_TYPE_DECAL,
    FX_TYPE_DECAL_DIST,
    FX_TYPE_CALLBACK
};

enum fx_orient_enum
{
    FX_ORIENT_DEFAULT,
    FX_ORIENT_PATH,
    FX_ORIENT_IPATH,
    FX_ORIENT_HIT_NORM,
    FX_ORIENT_HIT_REFLECT,
    MAX_FX_ORIENT,
    FORCE_INT_FX_ORIENT = 0xffffffff
};

struct bolt
{
    xVec3 origin;
    xVec3 dir;
    xVec3 loc;
    xVec3 hit_norm;
    F32 dist;
    F32 hit_dist;
    F32 prev_dist;
    F32 prev_check_dist;
    xEnt* hit_ent;
    F32 emitted;
    void* context;
};

struct xLaserBoltEmitter
{
    struct config
    {
        F32 radius;
        F32 length;
        F32 vel;
        F32 fade_dist;
        F32 kill_dist;
        F32 safe_dist;
        F32 hit_radius;
        F32 rand_ang;
        F32 scar_life;
        xVec2 bolt_uv[2];
        S32 hit_interval;
        F32 damage;
    };

    struct static_queue
    {
        U32 _first;
        U32 _size;
        U32 _max_size;
        U32 _max_size_mask;
        bolt* _buffer;
    };

    struct effect_data
    {
        struct effect_callback
        {
            void (*fp)(bolt&, void*);
            void* context;
        };

        fx_type_enum type;
        fx_orient_enum orient;
        F32 rate;
        union
        {
            xParEmitter* par;
            xDecalEmitter* decal;
            effect_callback callback;
        };
        F32 irate;
    };

    config cfg;
    static_queue bolts;
    F32 ialpha;
    RwRaster* bolt_raster;
    S32 start_collide;
    effect_data* fx[7];
    U32 fxsize[7];

    void set_texture(char* name);
    void set_texture(U32 aid);
    void set_texture(RwTexture* tex);
    void set_texture(RwRaster* raster);
    void reset();
    void refresh_config();
    void emit(const xVec3& loc, const xVec3& dir);
    void update(F32 dt);
    void render();
    void attach_effects(fx_when_enum when, effect_data* fx, size_t fxsize);
    void pre_collide(bolt& b);
    void collide_update(bolt& b);
    RxObjSpace3DVertex* render(bolt& b, RxObjSpace3DVertex* vert);
    RxObjSpace3DVertex* get_vert_buffer(S32& dat);
    void applyDamage(bolt& b);
    void reset_fx(fx_when_enum when);
};

#endif
