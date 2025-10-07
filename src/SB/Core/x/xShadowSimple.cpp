#include "rwcore.h"
#include "rwplcore.h"
#include "xString.h"
#include "xVec3.h"
#include "xstransvc.h"
#include <string.h>
#include <types.h>

#include "xShadowSimple.h"

#include "rpcollis.h"
#include "xMath3.h"
#include "xQuickCull.h"

static xShadowSimpleQueue sCollQueue[2];
static RxObjSpace3DVertex sShadVert[384];
static RwRaster* sShadRasters[64];
static RwRaster* sShadRaster;
static u32 sShadVertCount;
static RwMatrixTag* sModelMat;

void xQuickCullForLine(xQCData* q, const xLine3* ln)
{
    xQuickCullForLine(&xqc_def_ctrl, q, ln);
}

void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, u8 alpha)
{
    S32 i;
    S32 n;
    U32 j;
    class zSimpleShadowTableHeader* sst;
    class RwRaster* raster;
    U32 flags;
    U32 size;
    class RwTexture* tex;
    /////////////////////////////////////
    U32 sp8;
    S32 var_r20;
    S32 var_r24;
    U32 var_r31;

    //memset(NULL, 0x98);
    cache->corner[0].z = 1e38f;
    cache->corner[1].y = 1e38f;
    cache->flags = 4;
    cache->alpha = alpha;

    // u32 sp8;
    // s32 var_r20;
    // s32 var_r24;
    // u32 var_r31;

    // memset(NULL, 0x98);


    if (ent->model != NULL)
    {
        if ((U32)(ent->model->shadowID + 0x21530000) != -0x4111U)
        {
            return;
        }
        var_r31 = 0U;
        var_r20 = 0;
        for (i = 0; i < xSTAssetCountByType('SHDW'); i += 1)
        {
            sst = (zSimpleShadowTableHeader*)xSTFindAssetByType('SHDW', i, &sp8);
            var_r24 = 0;
            for (j = 0; j < (U32)sst->num; j += 1)
            {
                if ((U32)ent->model->modelID == 0)
                {
                    if (xSTFindAsset(sst->num, NULL) != NULL)
                    {
                        var_r31 = (U32)xSTFindAsset(sst->num, NULL);
                        var_r20 = sst->num;
                    }
                    else
                    {
                        var_r31 = 0xDEADBEEFU;
                    }
                }
            }
        }
        if ((var_r31 == 0U) || ((U32)(var_r31 + 0x21530000) == -0x4111U))
        {
            var_r31 = sShadRaster->width;
        }
        cache->corner[1].x = var_r31;
        cache->flags |= (S16)var_r20;
        ent->model->shadowID = var_r31;
    }
}

void xShadowSimple_Init()
{
    memset(sCollQueue, 0, sizeof(sCollQueue));

    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash(""), NULL);

    sShadRaster = (tex) ? tex->raster : NULL;

    memset(sShadVert, 0, sizeof(sShadVert));

    // Not sure what's going on in this loop
    for (u32 i = 0; i < 384; i++)
    {
        sShadVert[i].c = RxColorUnion();

        sShadVert[i].u = 1.0f;
        sShadVert[i].v = 1.0f;

        sShadVert[i].objVertex.x = 0.0f;
        sShadVert[i].objVertex.y = 0.0f;
        sShadVert[i].objVertex.z = 0.0f;

        sShadVert[i].objNormal.x = 0.0f;
        sShadVert[i].objNormal.y = 0.0f;
        sShadVert[i].objNormal.z = 0.0f;
    }
}

RpCollisionTriangle* shadowRayCB(RpIntersection*, RpWorldSector*, RpCollisionTriangle* tri,
                                 F32 dist, void* data)
{
    xVec3 xformnorm;
    xVec3* norm = NULL;
    F32* testdist;
    xShadowSimpleCache* cache = (xShadowSimpleCache*)data;

    if (sModelMat)
    {
        testdist = &cache->shadowHeight;
        xMat3x3RMulVec(&xformnorm, (xMat3x3*)sModelMat, (xVec3*)&tri->normal);
        xVec3Normalize(&xformnorm, &xformnorm);
        norm = &xformnorm;
    }
    else
    {
        testdist = &cache->envHeight;
        norm = (xVec3*)&tri->normal;
    }

    if (dist >= *testdist || (norm->y < 0.0871557f))
    {
        return tri;
    }

    *testdist = dist;

    cache->poly.vert[0] = *((xVec3*)tri->vertices[0]);
    cache->poly.vert[1] = *((xVec3*)tri->vertices[1]);
    cache->poly.vert[2] = *((xVec3*)tri->vertices[2]);
    cache->poly.norm = *((xVec3*)&tri->normal);

    return tri;
}

RpCollisionTriangle* shadowRayModelCB(RpIntersection* isx, RpCollisionTriangle* tri, F32 dist,
                                      void* data)
{
    return shadowRayCB(isx, NULL, tri, dist, data);
}
