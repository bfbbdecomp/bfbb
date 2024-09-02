#include "zSurface.h"
#include "zScene.h"
#include "xstransvc.h"
#include "xCollide.h"
#include "xMathInlines.h"

#include <types.h>
#include <string.h>

#include "xMath.h"

extern volatile S32 sMapperCount;
extern zMaterialMapAsset* sMapper[1];

extern xSurface sDef_surf;

extern F32 lbl_803CDEE8; // 0.34906587 // @798
extern F32 lbl_803CDEE0; // 3.1415927 // pi // @796
extern F32 lbl_803CDEF0; // 176.0 // @801
extern F32 lbl_803CDEE4; // 180.0 // @797

extern F32 lbl_803CDEDC; // -1.0 // @702

extern F32 lbl_803CDED8; // 1.0 // @701

extern const char* zSurface_strings[];

// TODO: Hacked to OK (with volatile sMapperCount and assignment in if), fix later
void zSurfaceRegisterMapper(U32 assetId)
{
    if (sMapperCount >= 1)
    {
        return;
    }
    if (!assetId)
    {
        return;
    }
    if (sMapper[sMapperCount] = (zMaterialMapAsset*)xSTFindAsset(assetId, 0))
    {
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

#if 0
xSurface* zSurfaceGetSurface(U32 mat_id)
{
    S32 map;
    zMaterialMapAsset* mapper;
    zMaterialMapEntry* entry;
    U16 nsurfs;
    xSurface* surf;

    for (int i = 0; i < sMapperCount; i++)
    {
        mapper = sMapper[i];
        if (mapper != NULL)
        {
            for (int j = 0; j < mapper->count; j++)
            {
                if (mapper->id == mat_id)
                {
                    nsurfs = xSurfaceGetNumSurfaces();
                    for (int k = 0; k < nsurfs; k++)
                    {
                        surf = xSurfaceGetByIdx(k);
                        if (surf->id == mapper->id)
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
#endif

xSurface* zSurfaceGetSurface(const xCollis* coll)
{
    xSurface* surf = NULL;

    if (coll->flags & 1)
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
    if (surf->moprops)
    {
        return ((((zSurfaceProps*)surf->moprops)->asset->sld_start) * PI) / 176.0f;
    }
    return PI / 9;
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

F32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
    if (s.moprops)
    {
        return ((zSurfaceProps*)s.moprops)->asset->oob_delay;
    }
    return lbl_803CDEDC;
}

S32 zSurfaceGetSlickness(const xSurface* surf)
{
    return (int)(lbl_803CDED8 / surf->friction);
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

    if (!pp)
    {
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        pp->texanim[i].group_ptr = 0;

        if (pp->texanim[i].group != 0)
        {
            pp->texanim[i].group_ptr = zSceneFindObject(pp->texanim[i].group);
        }
    }
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
