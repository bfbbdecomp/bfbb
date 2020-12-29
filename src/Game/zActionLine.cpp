#include <types.h>
#include <rwcore.h>

#include "../Core/x/xstransvc.h"
#include "../Core/x/xString.h"

#include "zActionLine.h"

extern float32 zActionLine_f_0;
extern float32 zActionLine_f_1;

extern _tagActionLine* sActionLine[8];
extern RwRaster* sActionLineRaster;
extern const int8 zActionLineStrings[];

// func_8004E510
#if 1
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineInit__Fv")
#else
void zActionLineInit()
{
    for (int32 i = 0; i < 8; i++)
    {
        sActionLine[i] = NULL;
    }

    uint32 hash = xStrHash(zActionLineStrings);
    RwTexture* tex = (RwTexture*)xSTFindAsset(hash, 0);

    sActionLineRaster = NULL;

    if (tex != NULL)
    {
        sActionLineRaster = tex->raster;
    }
}
#endif

// func_8004E57C
#if 0
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineUpdate__Ff")
#else
void zActionLineUpdate(float32 seconds)
{
    // 14 lines
    int32 i;

    for (i = 0; i < 8; i++)
    {
        _tagActionLine* line = sActionLine[i];
        if (line != NULL && (line->flags & 1) != 0)
        {
            line->time_left -= seconds;
            if (line->time_left <= zActionLine_f_0)
            {
                line->flags = line->flags & 0xfffffffe;
            }
        }
    }
}
#endif

// func_8004E628
#if 1
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "RenderActionLine__FP14_tagActionLine")
#else
void RenderActionLine(_tagActionLine* l)
{
    static RxObjSpace3DVertex sStripVert[4];

    /*
        this loop is hard to understand with ghidra.
        The compiler will unroll it,
        but the order that it does things in
        is very confusing to me.

        This is sort of close, but needs a lot
        of work in the loop to make it closer.

        It also may not even be a loop,
        but it probably is because int32 i
        is defined in the dwarf data
    */
    for (int32 i = 0; i < 4; i++)
    {
        RxObjSpace3DVertex* vert = &sStripVert[i];
        RwRGBA* _col = &vert->c.color;

        vert->objVertex.x = l->pos[i].x;
        vert->objVertex.y = l->pos[i].y;
        vert->objVertex.z = l->pos[i].z;

        _col->red = 0xff;
        _col->blue = 0xff;
        _col->green = 0xff;
        _col->alpha = 0x80;

        vert->u = zActionLine_f_0;
        vert->v = zActionLine_f_1;
    }

    if (RwIm3DTransform(sStripVert, 4, NULL, 0x19))
    {
        RwIm3DRenderPrimitive(rwPRIMTYPETRISTRIP);
        RwIm3DEnd();
    }
}
#endif

void zActionLineRender()
{
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, sActionLineRaster);

    for (int32 i = 0; i < 8; i++)
    {
        _tagActionLine* line = sActionLine[i];

        if (line && line->flags & 1)
        {
            RenderActionLine(line);
        }
    }
}
