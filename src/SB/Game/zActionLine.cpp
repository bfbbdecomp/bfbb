#include <types.h>
#include <rwcore.h>

#include "xstransvc.h"
#include "xString.h"

#include "zActionLine.h"

_tagActionLine* sActionLine[8];
RwRaster* sActionLineRaster;

// Equivalent. Compiler doesn't generate the stwu instruction unless we remove `sActionLineRaster = NULL`, but we need it.
void zActionLineInit()
{
    for (S32 i = 0; i < 8; i++)
    {
        sActionLine[i] = NULL;
    }

    sActionLineRaster = NULL;
    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash("ACTIONLINES"), 0);

    if (tex != NULL)
    {
        sActionLineRaster = tex->raster;
    }
}

// Equivalent. Compiler is optimizing out the reduntant float load.
void zActionLineUpdate(F32 seconds)
{
    for (S32 i = 0; i < 8; i++)
    {
        _tagActionLine* line = sActionLine[i];

        if (line && line->flags & 1)
        {
            line->time_left -= seconds;

            if (line->time_left <= 0.0f)
            {
                // clear the first bit
                line->flags &= ~1;
            }
        }
    }
}

#if 0
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
        but it probably is because S32 i
        is defined in the dwarf data
    */
    for (S32 i = 0; i < 4; i++)
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

        vert->u = 0.0f;
        vert->v = 1.0f;
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

    for (S32 i = 0; i < 8; i++)
    {
        _tagActionLine* line = sActionLine[i];

        if (line && line->flags & 1)
        {
            RenderActionLine(line);
        }
    }
}
