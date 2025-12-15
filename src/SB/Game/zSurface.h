#ifndef ZSURFACE_H
#define ZSURFACE_H

#include "xBase.h"
#include "xCollide.h"
#include "xMath3.h"
#include "xSurface.h"


#define SURF_TEXANIM_ON (1<<0)
#define SURF_TEXANIM_ON2 (1<<1)

#define UVANIM_FLAG_ON (1<<0)
#define UVANIM_FLAG_ON2 (1<<1)

struct zSurfMatFX
{
    U32 flags;
    U32 bumpmapID;
    U32 envmapID;
    F32 shininess;
    F32 bumpiness;
    U32 dualmapID;
};

struct zSurfColorFX
{
    U16 flags;
    U16 mode;
    F32 speed;
};

struct zSurfTextureAnim
{
    U16 pad;
    U16 mode;
    U32 group;
    F32 speed;
};

struct zSurfUVFX
{
    S32 mode;
    F32 rot;
    F32 rot_spd;
    xVec3 trans;
    xVec3 trans_spd;
    xVec3 scale;
    xVec3 scale_spd;
    xVec3 min;
    xVec3 max;
    xVec3 minmax_spd;
};

struct zSurfAssetBase : xBaseAsset
{
    U8 game_damage_type;
    U8 game_sticky;
    U8 game_damage_flags;
    U8 surf_type;
    U8 phys_pad;
    U8 sld_start;
    U8 sld_stop;
    U8 phys_flags;
    F32 friction;
    zSurfMatFX matfx;
    zSurfColorFX colorfx;
    U32 texture_anim_flags;
    zSurfTextureAnim texture_anim[2];
    U32 uvfx_flags;
    zSurfUVFX uvfx[2];
    U8 on;
    U8 surf_pad[3];
    F32 oob_delay;
    F32 walljump_scale_xz;
    F32 walljump_scale_y;
    F32 damage_timer;
    F32 damage_bounce;
};

struct zSurfacePropTexAnim
{
    U16 mode;
    F32 speed;
    F32 frame;
    U32 group;
    S32 group_idx;
    xBase* group_ptr;
};

struct zSurfacePropUVFX
{
    S32 mode;
    F32 rot;
    F32 rot_spd;
    F32 minmax_timer[2];
    xVec3 trans;
    xVec3 trans_spd;
    xVec3 scale;
    xVec3 scale_spd;
    xVec3 min;
    xVec3 max;
    xVec3 minmax_spd;
};

struct zSurfaceProps
{
    zSurfAssetBase* asset;
    U32 texanim_flags;
    zSurfacePropTexAnim texanim[2];
    U32 uvfx_flags;
    zSurfacePropUVFX uvfx[2];
};

struct zMaterialMapAsset
{
    U32 id;
    U32 count;
};

struct zMaterialMapEntry
{
    U32 surfaceAssetID;
    U32 materialIndex;
};

struct xScene;

void zSurfaceRegisterMapper(U32 assetId);
void zSurfaceExit();
xSurface* zSurfaceGetSurface(U32 mat_id);
xSurface* zSurfaceGetSurface(const xCollis* coll);
U32 zSurfaceGetStandOn(const xSurface* surf);
void zSurfaceSave(xSurface* ent, xSerial* s);
void zSurfaceLoad(xSurface* ent, xSerial* s);
void zSurfaceSetup(xSurface* s);
void zSurfaceUpdate(xBase* to, xScene*, F32 dt);
void zSurfaceGetName(S32 type, char* buffer);
xSurface& zSurfaceGetDefault();
U8 zSurfaceOutOfBounds(const xSurface& s);
F32 zSurfaceGetOutOfBoundsDelay(const xSurface& surface);

#endif
