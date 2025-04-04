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
    static RxObjSpace3DVertex sStripVert[4];

    for (S32 i = 0; i < 4; i++)
    {
        sStripVert[i].objVertex.y = l->pos[i].y;
        sStripVert[i].objVertex.z = l->pos[i].z;
        sStripVert[i].objVertex.x = l->pos[i].x;
        sStripVert[i].u = 0.0f;
        sStripVert[i].v = 0.0f;
        sStripVert[i].c.color.red = 0xFF;
        sStripVert[i].c.color.green = 0xFF;
        sStripVert[i].c.color.blue = 0xFF;
        sStripVert[i].c.color.alpha = 0x80;
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
