#include <types.h>
#include <rwcore.h>

#include "xstransvc.h"
#include "xString.h"

#include "zActionLine.h"

static _tagActionLine* sActionLine[8];
static RwRaster* sActionLineRaster;

void zActionLineInit()
{
    _tagActionLine** actionLine = sActionLine;
    const char* actionLineStr = "ACTIONLINES";

    for (S32 i = 0; i < 8; i++)
    {
        actionLine[i] = NULL;
    }
    sActionLineRaster = NULL;

    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash(actionLineStr), NULL);
    if (tex != NULL)
    {
        sActionLineRaster = tex->raster;
    }
}

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

static void RenderActionLine(_tagActionLine* l)
{
    RxObjSpace3DVertex* vert;
    S32 i;
    RwRGBA* _col;
    static RxObjSpace3DVertex sStripVert[4];

    for (i = 0; i < 4; i++)
    {
        vert = &sStripVert[i];
        _col = &vert->c.color;

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

    if (RwIm3DTransform(sStripVert, 4, NULL, 0x19) != NULL)
    {
        RwIm3DRenderPrimitive(rwPRIMTYPETRISTRIP);
        RwIm3DEnd();
    }
}

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
