#include "zSurface.h"
#include "zScene.h"
#include "../Core/x/xstransvc.h"
#include "../Core/x/xCollide.h"
#include "../Core/x/xMathInlines.h"

#include <types.h>
#include <string.h>

extern volatile int32 sMapperCount;
extern zMaterialMapAsset* sMapper[1];

extern xSurface sDef_surf;

extern float32 lbl_803CDEE8; // 0.34906587 // @798
extern float32 lbl_803CDEE0; // 3.1415927 // pi // @796
extern float32 lbl_803CDEF0; // 176.0 // @801
extern float32 lbl_803CDEE4; // 180.0 // @797

extern float32 lbl_803CDEDC; // -1.0 // @702

extern float32 lbl_803CDED8; // 1.0 // @701

extern const char* zSurface_strings[];

// func_800B55F0
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInit__Fv")

// func_800B5800
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInitDefaultSurface__Fv")

// func_800B585C
// TODO: Hacked to OK (with volatile sMapperCount and assignment in if), fix later
void zSurfaceRegisterMapper(uint32 assetId)
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

// func_800B58B8
void zSurfaceExit()
{
    xSurfaceExit();
    sMapperCount = 0;
}

// func_800B58E0
void zSurfaceResetSurface(xSurface* surf)
{
    xSurfaceReset();
    surf->friction = ((zSurfaceProps*)(surf->moprops))->asset->friction;
}

// func_800B591C
#if 1
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FUi")
#else
xSurface* zSurfaceGetSurface(uint32 mat_id)
{
    int32 map;
    zMaterialMapAsset* mapper;
    zMaterialMapEntry* entry;
    uint16 nsurfs;
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

// func_800B59E4
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

// func_800B5A4C
uint32 zSurfaceGetSlide(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 1;
    }
    return 0;
}

// func_800B5A70
uint32 zSurfaceGetStep(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 4;
    }
    return 0;
}

// func_800B5A94
uint8 zSurfaceOutOfBounds(const xSurface& s)
{
    if (s.moprops)
    {
        return ((zSurfaceProps*)s.moprops)->asset->phys_flags >> 4 & 1;
    }
    return 0;
}

// func_800B5AB8
#if 1
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStartAngle__FPC8xSurface")
#else
// Float issues
float32 zSurfaceGetSlideStartAngle(const xSurface* surf)
{
    if (surf->moprops)
    {
        return (lbl_803CDEE0 * ((zSurfaceProps*)surf->moprops)->asset->sld_start - lbl_803CDEE4) /
               lbl_803CDEF0;
    }
    return lbl_803CDEE8;
}
#endif

// func_800B5B08
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStopAngle__FPC8xSurface")

// func_800B5B58
uint32 zSurfaceGetMatchOrient(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->phys_flags & 2;
    }
    return 0;
}

// func_800B5B7C
int32 zSurfaceGetDamageType(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_damage_type;
    }
    return 0;
}

// func_800B5B9C
uint32 zSurfaceGetDamagePassthrough(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_damage_flags & 1;
    }
    return 0;
}

// func_800B5BC0
uint32 zSurfaceGetSticky(const xSurface* surf)
{
    if (surf->moprops)
    {
        return ((zSurfaceProps*)surf->moprops)->asset->game_sticky;
    }
    return 0;
}

// func_800B5BE0
uint32 zSurfaceGetStandOn(const xSurface* surf)
{
    if (surf->moprops)
    {
        return !(((zSurfaceProps*)surf->moprops)->asset->phys_flags & 8);
    }
    return 1;
}

// func_800B5C0C
float32 zSurfaceGetFriction(const xSurface* surf)
{
    return surf->friction;
}

// func_800B5C14
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
    if (s.moprops)
    {
        return ((zSurfaceProps*)s.moprops)->asset->oob_delay;
    }
    return lbl_803CDEDC;
}

// func_800B5C34
int32 zSurfaceGetSlickness(const xSurface* surf)
{
    return (int)(lbl_803CDED8 / surf->friction);
}

// func_800B5C58
float32 zSurfaceGetDamping(const xSurface* surf, float32 min_vel)
{
    return xpow(min_vel, surf->friction);
}

// func_800B5C7C
void zSurfaceSave(xSurface* ent, xSerial* s)
{
    xSurfaceSave(ent, s);
}

// func_800B5C9C
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
    xSurfaceLoad(ent, s);
}

// func_800B5CBC
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

// func_800B5D30
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceUpdate__FP5xBaseP6xScenef")

// func_800B63E8
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800B66B8
void zSurfaceGetName(int32 type, int8* buffer)
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

// func_800B691C
xSurface& zSurfaceGetDefault()
{
    return sDef_surf;
}
