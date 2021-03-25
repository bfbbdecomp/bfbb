#include "zSurface.h"
#include "../Core/x/xstransvc.h"
#include "../Core/x/xCollide.h"

#include <types.h>

extern volatile int32 sMapperCount;
extern zMaterialMapAsset* sMapper[1];

extern xSurface sDef_surf;

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
void zSurfaceResetSurface(xSurface* param_1)
{
    xSurfaceReset();
    // param_1->friction = ((zSurfaceProps*)param_1->moprops)->texanim[0].frame; //for some reason this is missing a lwz instruction
    param_1->friction = *(float32*)(*(int*)param_1->moprops + 0x10);
}

// func_800B591C
#if 1
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FUi")
#else
xSurface* zSurfaceGetSurface(uint32 mat_id)
{
    int32 map;
    zMaterialMapAsset* mapper;
    // uint16 i;
    zMaterialMapEntry* entry;
    uint16 nsurfs;
    // uint16 j;
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
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStartAngle__FPC8xSurface")

// func_800B5B08
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStopAngle__FPC8xSurface")

// func_800B5B58
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetMatchOrient__FPC8xSurface")

// func_800B5B7C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamageType__FPC8xSurface")

// func_800B5B9C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamagePassthrough__FPC8xSurface")

// func_800B5BC0
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSticky__FPC8xSurface")

// func_800B5BE0
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetStandOn__FPC8xSurface")

// func_800B5C0C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetFriction__FPC8xSurface")

// func_800B5C14
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetOutOfBoundsDelay__FRC8xSurface")

// func_800B5C34
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlickness__FPC8xSurface")

// func_800B5C58
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamping__FPC8xSurfacef")

// func_800B5C7C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceSave__FP8xSurfaceP7xSerial")

// func_800B5C9C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceLoad__FP8xSurfaceP7xSerial")

// func_800B5CBC
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceSetup__FP8xSurface")

// func_800B5D30
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceUpdate__FP5xBaseP6xScenef")

// func_800B63E8
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800B66B8
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetName__FiPc")

// func_800B691C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDefault__Fv")
