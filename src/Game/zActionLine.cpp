#include <types.h>
#include <rwcore.h>

#include "../Core/x/xstransvc.h"
#include "../Core/x/xString.h"

#include "zActionLine.h"

extern _tagActionLine* sActionLine[8];
extern RwRaster* sActionLineRaster;

// func_8004E510
#if 0
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineInit__Fv")
#else
void zActionLineInit()
{
    uint32 hash;
    RwTexture* tex;

    for (int32 i = 0; i < 8; i++)
    {
        sActionLine[i]->flags = 0;
    }

    sActionLineRaster = NULL;

    hash = xStrHash("ACTIONLINES");
    tex = (RwTexture*)xSTFindAsset(hash, 0);
    if (tex != NULL)
    {
        sActionLineRaster = tex->raster;
    }

    // Size=108
    /*
    r3 = lbl_80254308@ha; // [int16]
    r4 = sActionLine@ha; // [int16]
    0x14(r1) = r0;
    r0 = 0;
    r3 = r3 + lbl_80254308@l;
    stwu r0, sActionLine@l(r4)
    4(r4) = r0;
    8(r4) = r0;
    0xc(r4) = r0;
    0x10(r4) = r0;
    0x14(r4) = r0;
    0x18(r4) = r0;
    0x1c(r4) = r0;
    sActionLineRaster = r0;
    xStrHash(const int8*); // [xStrHash__FPCc]
    r4 = 0;
    xSTFindAsset(uint32, uint32*); // [xSTFindAsset__FUiPUi]
    cmplwi r3, 0
    beq lbl_8004E56C
    r0 = 0(r3);
    sActionLineRaster = r0;
lbl_8004E56C:
*/
}
#endif

// func_8004E57C
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineUpdate__Ff")

// func_8004E628
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "RenderActionLine__FP14_tagActionLine")

// func_8004E770
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineRender__Fv")
