#include "zSurface.h"
#include "zScene.h"
#include "xstransvc.h"
#include "xCollide.h"
#include "xMathInlines.h"
#include "xGroup.h"
#include "xDebug.h"

#include <types.h>
#include <string.h>

#include "xMath.h"

#define MAX_MAPPER 1

static zSurfaceProps* zsps;
static S32 sMapperCount;
static zMaterialMapAsset* sMapper[MAX_MAPPER] = {};
static xSurface sDef_surf;
static zSurfaceProps sDef_surf_props;
static zSurfAssetBase sDef_surf_asset;

static void zSurfaceInitDefaultSurface();
static S32 zSurfaceEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget);

void zSurfaceInit()
{
    U32 size;
    U16 nsurfs;

    nsurfs = xSTAssetCountByType('SURF');

    xSurfaceInit(nsurfs);

    if (nsurfs)
    {
        zsps = (zSurfaceProps*)xMemAllocSize(nsurfs * sizeof(zSurfaceProps));

        for (U16 i = 0; i < nsurfs; i++)
        {
            zSurfAssetBase* asset;
            xSurface* surf;
            zSurfaceProps* moprops;

            surf = xSurfaceGetByIdx(i);
            moprops = &zsps[i];
            surf->moprops = moprops;

            asset = (zSurfAssetBase*)xSTFindAssetByType('SURF', i, &size);
            moprops->asset = asset;

            xBaseInit(surf, asset);

            if (surf->linkCount)
            {
                surf->link = (xLinkAsset*)(asset + 1);
            }
            else
            {
                surf->link = NULL;
            }

            surf->eventFunc = zSurfaceEventCB;
            surf->friction = asset->friction;
            surf->state = asset->on ? 0 : 1;
            moprops->uvfx_flags = asset->uvfx_flags;
            moprops->texanim_flags = asset->texture_anim_flags;

            for (S32 j = 0; j < 2; j++)
            {
                moprops->texanim[j].mode = asset->texture_anim[j].mode;
                moprops->texanim[j].speed = asset->texture_anim[j].speed;
                moprops->texanim[j].group = asset->texture_anim[j].group;
                moprops->texanim[j].group_idx = 0;
                moprops->uvfx[j].mode = asset->uvfx[j].mode;
                if (moprops->uvfx[j].rot <= 360.0f)
                    moprops->uvfx[j].rot = 360.0f;
                if (moprops->uvfx[j].rot >= 0.0f)
                    moprops->uvfx[j].rot = 0.0f;
                moprops->uvfx[j].rot = asset->uvfx[j].rot;
                moprops->uvfx[j].rot_spd = asset->uvfx[j].rot_spd;
                moprops->uvfx[j].trans = asset->uvfx[j].trans;
                moprops->uvfx[j].trans_spd = asset->uvfx[j].trans_spd;
                moprops->uvfx[j].scale = asset->uvfx[j].scale;
                moprops->uvfx[j].scale_spd = asset->uvfx[j].scale_spd;
                moprops->uvfx[j].min = asset->uvfx[j].min;
                moprops->uvfx[j].max = asset->uvfx[j].max;
                moprops->uvfx[j].minmax_spd = asset->uvfx[j].minmax_spd;
                moprops->uvfx[j].minmax_timer[0] = 0.0f;
                moprops->uvfx[j].minmax_timer[1] = 0.0f;
            }
        }
    }
    else
    {
        zsps = NULL;
    }

    zSurfaceInitDefaultSurface();
}

static void zSurfaceInitDefaultSurface()
{
    sDef_surf.friction = 1.0f;
    sDef_surf.state = 0;
    sDef_surf.moprops = &sDef_surf_props;
    sDef_surf_props.asset = &sDef_surf_asset;


    sDef_surf_asset.game_damage_type = 0;
    sDef_surf_asset.game_sticky = 0;
    sDef_surf_asset.game_damage_flags = 0;
    sDef_surf_asset.sld_start = 20;
    sDef_surf_asset.sld_stop = 10;
    sDef_surf_asset.phys_flags = 0;
    sDef_surf_asset.friction = 1.0f;
    sDef_surf_asset.oob_delay = -1.0f;
}

void zSurfaceRegisterMapper(U32 assetId)
{
    if (sMapperCount >= MAX_MAPPER) return;
    if (!assetId) return;

    sMapper[sMapperCount] = (zMaterialMapAsset*)xSTFindAsset(assetId, NULL);
    if (sMapper[sMapperCount]) {
        sMapperCount++;
    }
}

void zSurfaceExit()
{
    xSurfaceExit();
    sMapperCount = 0;
}

void zSurfaceResetSurface(xSurface* surf)
{
    xSurfaceReset(surf);
    surf->friction = ((zSurfaceProps*)(surf->moprops))->asset->friction;
}

xSurface* zSurfaceGetSurface(U32 mat_id)
{
    for (S32 map = 0; map < sMapperCount; map++)
    {
        zMaterialMapAsset* mapper = sMapper[map];
        if (mapper)
        {
            for (U16 i = 0; i < mapper->count; i++)
            {
                zMaterialMapEntry* entry = (zMaterialMapEntry*)(mapper + 1) + i;
                if (entry->materialIndex == (mat_id & 0xFFFF))
                {
                    U16 nsurfs = xSurfaceGetNumSurfaces();
                    for (U16 j = 0; j < nsurfs; j++)
                    {
                        xSurface* surf = xSurfaceGetByIdx(j);
                        if (surf->id == entry->surfaceAssetID)
                        {
                            return surf;
                        }
                    }
                }
            }
        }
    }
    return &sDef_surf;
}

xSurface* zSurfaceGetSurface(const xCollis* coll)
{
    xSurface* surf = NULL;

    if (coll->flags & k_HIT_IT)
    {
        if (coll->optr)
        {
            surf = coll->mptr->Surf;
        }
        else
        {
            surf = zSurfaceGetSurface(coll->oid);
        }
    }
    if (surf != NULL)
    {
        return surf;
    }
    surf = &sDef_surf;
    return surf;
}

U32 zSurfaceGetSlide(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 1;
    }
    return 0;
}

U32 zSurfaceGetStep(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 4;
    }
    return 0;
}

U8 zSurfaceOutOfBounds(const xSurface& s)
{
    if (s.moprops)
    {
        return ((zSurfaceProps*)s.moprops)->asset->phys_flags >> 4 & 1;
    }
    return 0;
}

F32 zSurfaceGetSlideStartAngle(const xSurface* surf)
{
    if (surf->moprops) {
        return DEG2RAD(((zSurfaceProps*)surf->moprops)->asset->sld_start);
    }

    return DEG2RAD(20);
}

F32 zSurfaceGetSlideStopAngle(const xSurface* surf)
{
    if (surf->moprops)
    {
        return DEG2RAD(((zSurfaceProps*)surf->moprops)->asset->sld_stop);
    }

    return DEG2RAD(10);
}

U32 zSurfaceGetMatchOrient(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 2;
    }
    return 0;
}

S32 zSurfaceGetDamageType(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_damage_type;
    }
    return 0;
}

U32 zSurfaceGetDamagePassthrough(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_damage_flags & 1;
    }
    return 0;
}

U32 zSurfaceGetSticky(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_sticky;
    }
    return 0;
}

U32 zSurfaceGetStandOn(const xSurface* surf)
{
    if (surf->moprops)
    {
        return !(((zSurfaceProps*)surf->moprops)->asset->phys_flags & 8);
    }
    return 1;
}

F32 zSurfaceGetFriction(const xSurface* surf)
{
    return surf->friction;
}

F32 zSurfaceGetOutOfBoundsDelay(const xSurface& s)
{
    if (s.moprops)
    {
        return ((zSurfaceProps*)s.moprops)->asset->oob_delay;
    }

    return -1.0f;
}

S32 zSurfaceGetSlickness(const xSurface* surf)
{
    return (S32)(1.0f / surf->friction);
}

F32 zSurfaceGetDamping(const xSurface* surf, F32 min_vel)
{
    return xpow(min_vel, surf->friction);
}

void zSurfaceSave(xSurface* ent, xSerial* s)
{
    xSurfaceSave(ent, s);
}

void zSurfaceLoad(xSurface* ent, xSerial* s)
{
    xSurfaceLoad(ent, s);
}

void zSurfaceSetup(xSurface* s)
{
    zSurfaceProps* pp = (zSurfaceProps*)s->moprops;
    if (!pp) return;

    for (S32 i = 0; i < 2; i++) {
        pp->texanim[i].group_ptr = NULL;
        if (pp->texanim[i].group) {
            pp->texanim[i].group_ptr = zSceneFindObject(pp->texanim[i].group);
        }
    }
}

void zSurfaceUpdate(xBase* to, xScene* sc, F32 dt)
{
    F32 timestep_forUV = dt;
    S32 j;
    xSurface* t = (xSurface*)to;
    zSurfaceProps* moprops = (zSurfaceProps*)t->moprops;

    for (j = 0; j < 2; j++)
    {
        if ((j == 0 && (moprops->uvfx_flags & UVANIM_FLAG_ON)) ||
            (j == 1 && (moprops->uvfx_flags & UVANIM_FLAG_ON2)))
        {
            switch (moprops->uvfx[j].mode)
            {
            case 0:
            {
                xVec3 d;

                moprops->uvfx[j].rot += moprops->uvfx[j].rot_spd * dt;
                while (moprops->uvfx[j].rot >= 360.0f)
                    moprops->uvfx[j].rot -= 360.0f;
                while (moprops->uvfx[j].rot < 0.0f)
                    moprops->uvfx[j].rot += 360.0f;

                xVec3SMul(&d, &moprops->uvfx[j].trans_spd, timestep_forUV);
                xVec3Add(&moprops->uvfx[j].trans, &d, &moprops->uvfx[j].trans);
                while (moprops->uvfx[j].trans.x >= 1.0f)
                    moprops->uvfx[j].trans.x -= 1.0f;
                while (moprops->uvfx[j].trans.x < 0.0f)
                    moprops->uvfx[j].trans.x += 1.0f;
                while (moprops->uvfx[j].trans.y >= 1.0f)
                    moprops->uvfx[j].trans.y -= 1.0f;
                while (moprops->uvfx[j].trans.y < 0.0f)
                    moprops->uvfx[j].trans.y += 1.0f;

                xVec3SMul(&d, &moprops->uvfx[j].scale_spd, dt);
                xVec3Add(&moprops->uvfx[j].scale, &d, &moprops->uvfx[j].scale);
                while (moprops->uvfx[j].scale.x >= 8.0f)
                    moprops->uvfx[j].scale.x -= 8.0f;
                while (moprops->uvfx[j].scale.x < 0.0f)
                    moprops->uvfx[j].scale.x += 8.0f;
                while (moprops->uvfx[j].scale.y >= 8.0f)
                    moprops->uvfx[j].scale.y -= 8.0f;
                while (moprops->uvfx[j].scale.y < 0.0f)
                    moprops->uvfx[j].scale.y += 8.0f;

                break;
            }
            case 1:
            {
                moprops->uvfx[j].trans.x = isin(2.0f * gFrameCount * (1.0f/60));
                moprops->uvfx[j].trans.y = isin(2.0f * gFrameCount * (1.0f/60));
                moprops->uvfx[j].scale.x = isin(2.0f * gFrameCount * (1.0f/60));
                moprops->uvfx[j].scale.y = isin(2.0f * gFrameCount * (1.0f/60));
                break;
            }
            case 2:
            {
                zSurfacePropUVFX& sfx = moprops->uvfx[j];

                if (sfx.minmax_spd.x != 0.0f)
                {
                    sfx.minmax_timer[0] += dt;

                    F32 uTime = sfx.minmax_timer[0] * sfx.minmax_spd.x;
                    S32 uTimeInt = (S32)uTime;
                    if (uTimeInt > 1)
                    {
                        sfx.minmax_timer[0] -= 2.0f / sfx.minmax_spd.x;
                    }
                    uTime -= uTimeInt & ~1;

                    sfx.trans.x = sfx.min.x + (sfx.max.x - sfx.min.x) * isin(HALF_PI * uTime);
                }
                else
                {
                    sfx.trans.x = sfx.min.x;
                }

                if (sfx.minmax_spd.y != 0.0f)
                {
                    sfx.minmax_timer[1] += dt;

                    F32 vTime = sfx.minmax_timer[1] * sfx.minmax_spd.y;
                    S32 vTimeInt = (S32)vTime;
                    if (vTimeInt > 1)
                    {
                        sfx.minmax_timer[1] -= 2.0f / sfx.minmax_spd.y;
                    }
                    vTime -= vTimeInt & ~1;

                    sfx.trans.y = sfx.min.y + (sfx.max.y - sfx.min.y) * isin(HALF_PI * vTime);
                }
                else
                {
                    sfx.trans.y = sfx.min.y;
                }

                sfx.scale.x = 1.0f;
                sfx.scale.y = 1.0f;
                break;
            }
            }
        }
    }

    for (j = 0; j < 2; j++)
    {
        if ((j == 0 && (moprops->texanim_flags & SURF_TEXANIM_ON)) ||
            (j == 1 && (moprops->texanim_flags & SURF_TEXANIM_ON2)))
        {
            xGroup* g = (xGroup*)moprops->texanim[j].group_ptr;
            if (g)
            {
                S32 max = xGroupGetCount(g);
                if (max > 0)
                {
                    if (moprops->texanim[j].mode == 0)
                    {
                        moprops->texanim[j].frame += moprops->texanim[j].speed * dt;
                        if (moprops->texanim[j].frame >= 1.0f)
                        {
                            moprops->texanim[j].group_idx += (S32)moprops->texanim[j].frame;
                            moprops->texanim[j].frame -= (S32)moprops->texanim[j].frame;
                        }
                    }
                    else if (moprops->texanim[j].mode == 1)
                    {
                        moprops->texanim[j].frame += moprops->texanim[j].speed * dt;
                        if (moprops->texanim[j].frame >= 1.0f)
                        {
                            moprops->texanim[j].group_idx -= (S32)moprops->texanim[j].frame;
                            moprops->texanim[j].frame -= (S32)moprops->texanim[j].frame;
                        }
                    }
                    else if (moprops->texanim[j].mode == 2)
                    {
                        moprops->texanim[j].frame += moprops->texanim[j].speed * dt;
                        if (moprops->texanim[j].frame >= 1.0f)
                        {
                            moprops->texanim[j].group_idx = xrand() % max;
                            moprops->texanim[j].frame -= (S32)moprops->texanim[j].frame;
                        }
                    }
                    while (moprops->texanim[j].group_idx >= max)
                        moprops->texanim[j].group_idx -= max;
                    while (moprops->texanim[j].group_idx < 0)
                        moprops->texanim[j].group_idx += max;
                }
            }
        }
    }
}

static S32 zSurfaceEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget)
{
    xSurface* t = (xSurface*)to;

    switch (toEvent)
    {
    case eEventOn:
        t->state = 0;
        break;
    case eEventOff:
        t->state = 1;
        break;
    case eEventToggle:
        if (t->state == 0)
        {
            t->state = 1;
        }
        else
        {
            t->state = 0;
        }
        break;
    case eEventReset:
        zSurfaceResetSurface(t);
        t->state = 0;
        break;
    case eEventTextureAnimateOn:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p)
        {
            if (toParam[3] == 0.0f)
            {
                p->texanim_flags |= SURF_TEXANIM_ON;
            }
            else
            {
                p->texanim_flags |= SURF_TEXANIM_ON2;
            }
        }
        break;
    }
    case eEventTextureAnimateStep:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p && (p->texanim_flags & SURF_TEXANIM_ON))
        {
            if (toParam[3] == 0.0f)
            {
                p->texanim[0].frame += toParam[0];
            }
            else
            {
                p->texanim[1].frame += toParam[0];
            }
        }
        break;
    }
    case eEventTextureAnimateOff:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p)
        {
            if (toParam[3] == 0.0f)
            {
                if (p->texanim_flags & SURF_TEXANIM_ON)
                {
                    p->texanim_flags ^= SURF_TEXANIM_ON;
                }
            }
            else
            {
                if (p->texanim_flags & SURF_TEXANIM_ON2)
                {
                    p->texanim_flags ^= SURF_TEXANIM_ON2;
                }
            }
        }
        break;
    }
    case eEventTextureAnimateToggle:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p)
        {
            if (toParam[3] == 0.0f)
            {
                if (p->texanim_flags & SURF_TEXANIM_ON)
                {
                    if (p->texanim_flags & SURF_TEXANIM_ON)
                    {
                        p->texanim_flags ^= SURF_TEXANIM_ON;
                    }
                }
                else
                {
                    p->texanim_flags |= SURF_TEXANIM_ON;
                }
            }
            else
            {
                if (p->texanim_flags & SURF_TEXANIM_ON2)
                {
                    if (p->texanim_flags & SURF_TEXANIM_ON2)
                    {
                        p->texanim_flags ^= SURF_TEXANIM_ON2;
                    }
                }
                else
                {
                    p->texanim_flags |= SURF_TEXANIM_ON2;
                }
            }
        }
        break;
    }
    case eEventSetTextureAnimGroup:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p)
        {
            if (toParamWidget)
            {
                S32 idx = (toParam[3] == 0.0f) ? 0 : 1;
                p->texanim[idx].group = toParamWidget->id;
                p->texanim[idx].group_ptr = toParamWidget;
            }
            else
            {
                if (toParam[3] == 0.0f)
                {
                    p->texanim[0].group = 0;
                    p->texanim[0].group_ptr = NULL;
                }
                else
                {
                    p->texanim[1].group = 0;
                    p->texanim[1].group_ptr = NULL;
                }
            }
        }
        break;
    }
    case eEventSetTextureAnimSpeed:
    {
        zSurfaceProps* p = (zSurfaceProps*)t->moprops;
        if (p)
        {
            if (toParam[3] == 0.0f)
            {
                p->texanim[0].speed = toParam[0];
            }
            else
            {
                p->texanim[1].speed = toParam[0];
            }
        }
        break;
    }
    }

    return 1;
}

void zSurfaceGetName(S32 type, char* buffer)
{
    *buffer = NULL;
    switch (type)
    {
    case 0:
        strcpy(buffer, "DEFAULT");
        break;
    case 1:
        strcpy(buffer, "TILE");
        break;
    case 2:
        strcpy(buffer, "CARPET");
        break;
    case 3:
        strcpy(buffer, "SHORTGRASS");
        break;
    case 4:
        strcpy(buffer, "LONGGRASS");
        break;
    case 5:
        strcpy(buffer, "GRAVEL");
        break;
    case 6:
        strcpy(buffer, "DIRT");
        break;
    case 7:
        strcpy(buffer, "MUD");
        break;
    case 8:
        strcpy(buffer, "THORNS");
        break;
    case 9:
        strcpy(buffer, "METAL");
        break;
    case 10:
        strcpy(buffer, "SHEETMETAL");
        break;
    case 11:
        strcpy(buffer, "CONCRETE");
        break;
    case 12:
        strcpy(buffer, "MARBLE");
        break;
    case 13:
        strcpy(buffer, "STONE");
        break;
    case 14:
        strcpy(buffer, "WOOD");
        break;
    case 15:
        strcpy(buffer, "SNOW");
        break;
    case 16:
        strcpy(buffer, "ICE");
        break;
    case 17:
        strcpy(buffer, "SHALLOWWATER");
        break;
    case 18:
        strcpy(buffer, "DEEPWATER");
        break;
    case 19:
        strcpy(buffer, "TAR");
        break;
    case 20:
        strcpy(buffer, "SPECIAL1");
        break;
    case 21:
        strcpy(buffer, "DeepAcid");
        break;
    case 22:
        strcpy(buffer, "NONE");
    }
}

xSurface& zSurfaceGetDefault()
{
    return sDef_surf;
}
