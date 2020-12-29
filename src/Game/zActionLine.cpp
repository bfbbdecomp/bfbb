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
    RwTexture* tex;

    for (int32 i = 0; i < 8; i++)
    {
        sActionLine[i] = NULL;
    }

    sActionLineRaster = NULL;
    tex = (RwTexture*)xSTFindAsset(xStrHash("ACTIONLINES"), 0);

    if (tex != NULL)
    {
        sActionLineRaster = tex->raster;
    }
}
#endif

// func_8004E57C
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineUpdate__Ff")

// func_8004E628
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "RenderActionLine__FP14_tagActionLine")

// func_8004E770
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineRender__Fv")
