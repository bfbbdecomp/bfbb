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
    float32 dist;
    float32 hit_dist;
    float32 prev_dist;
    float32 prev_check_dist;
    xEnt* hit_ent;
    float32 emitted;
    void* context;
};

struct xLaserBoltEmitter
{
    struct config
    {
        float32 radius;
        float32 length;
        float32 vel;
        float32 fade_dist;
        float32 kill_dist;
        float32 safe_dist;
        float32 hit_radius;
        float32 rand_ang;
        float32 scar_life;
        xVec2 bolt_uv[2];
        int32 hit_interval;
        float32 damage;
    };

    struct static_queue
    {
        uint32 _first;
        uint32 _size;
        uint32 _max_size;
        uint32 _max_size_mask;
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
        float32 rate;
        union
        {
            xParEmitter* par;
            xDecalEmitter* decal;
            effect_callback callback;
        };
        float32 irate;
    };

    config cfg;
    static_queue bolts;
    float32 ialpha;
    RwRaster* bolt_raster;
    int32 start_collide;
    effect_data* fx[7];
    uint32 fxsize[7];

    void set_texture(char* name);
    void set_texture(uint32 aid);
    void set_texture(RwTexture* tex);
    void set_texture(RwRaster* raster);
    void reset();
    void refresh_config();
    void emit(const xVec3& loc, const xVec3& dir);
    void update(float32 dt);
    void render();
    void attach_effects(fx_when_enum when, effect_data* fx, size_t fxsize);
    void pre_collide(bolt& b);
    void collide_update(bolt& b);
    RxObjSpace3DVertex* render(bolt& b, RxObjSpace3DVertex* vert);
    RxObjSpace3DVertex* get_vert_buffer(int32& dat);
    void applyDamage(bolt& b);
    void reset_fx(fx_when_enum when);
};

#endif