#include "zSurface.h"
#include "../Core/x/xstransvc.h"

#include <types.h>

extern volatile int32 sMapperCount;
extern zMaterialMapAsset* sMapper[1];

// func_800B55F0
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInit__Fv")

// func_800B5800
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInitDefaultSurface__Fv")

// func_800B585C
#if 1
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceRegisterMapper__FUi")
#else
// Registers off, and sMapperCount missing a lwz instruction?
void zSurfaceRegisterMapper(uint32 assetId)
{
    if ((sMapperCount < 1) && (assetId != 0))
    {
        if ((sMapper[sMapperCount] = (zMaterialMapAsset*)xSTFindAsset(assetId, 0)) != 0)
        { 
            sMapperCount++;
        }
    }
}
#endif

// func_800B58B8
void zSurfaceExit()

{
    xSurfaceExit();
    sMapperCount = 0;
}

// func_800B58E0
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceResetSurface__FP8xSurface")

// func_800B591C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FUi")

// func_800B59E4
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FPC7xCollis")

// func_800B5A4C
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlide__FPC8xSurface")

// func_800B5A70
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetStep__FPC8xSurface")

// func_800B5A94
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceOutOfBounds__FRC8xSurface")

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
