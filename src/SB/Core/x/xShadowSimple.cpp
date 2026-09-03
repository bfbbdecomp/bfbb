#include "xShadowSimple.h"

#include "rpcollis.h"
#include "rwcore.h"
#include "rwplcore.h"

#include "iModel.h"
#include "xNPCBasic.h"
#include "xstransvc.h"
#include "xString.h"
#include "xVec3.h"
#include "zGlobals.h"

#include <string.h>
#include <types.h>

#include "xMath3.h"
#include "xQuickCull.h"

static xShadowSimpleQueue sCollQueue[2];
static RxObjSpace3DVertex sShadVert[384];
static RwRaster* sShadRasters[64];
static RwRaster* sShadRaster;
static u32 sShadVertCount;
static RwMatrixTag* sModelMat;

extern xGrid colls_grid;
extern xGrid colls_oso_grid;
extern xGrid npcs_grid;
extern xQCControl xqc_def_ctrl;

static RpCollisionTriangle* shadowRayCB(RpIntersection*, RpWorldSector*, RpCollisionTriangle* tri,
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

static RpCollisionTriangle* shadowRayModelCB(RpIntersection* isx, RpCollisionTriangle* tri,
                                             F32 dist, void* data)
{
    return shadowRayCB(isx, NULL, tri, dist, data);
}

static S32 shadowRayEntCB(xEnt* ent, void* data)
{
    if (!(ent->baseFlags & 0x10))
    {
        return 1;
    }

    if (((shadowRayEntData*)data)->cache->flags & 8)
    {
        if (ent->baseType == 0x2b)
        {
            xNPCBasic* npc = (xNPCBasic*)ent;
            if ((npc->SelfType() & 0xFFFFFF00) == 0x4E545400)
            {
                xVec3 start;
                xVec3Init(&start, ((shadowRayEntData*)data)->line->start.x,
                          ((shadowRayEntData*)data)->line->start.y,
                          ((shadowRayEntData*)data)->line->start.z);

                F32 end_y = ((shadowRayEntData*)data)->line->end.y;
                F32 start_y = start.y;
                F32 dy = end_y - start_y;
                F32 t = (ent->bound.box.box.upper.y - start_y) / dy;

                if (((shadowRayEntData*)data)->cache->shadowHeight > t &&
                    ent->bound.box.box.upper.y > end_y)
                {
                    if (start.x > ent->bound.box.box.lower.x &&
                        start.x < ent->bound.box.box.upper.x &&
                        start.z > ent->bound.box.box.lower.z &&
                        start.z < ent->bound.box.box.upper.z)
                    {
                        ((shadowRayEntData*)data)->cache->shadowHeight = t;
                        xVec3 temp_vec;

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.z = start.z;
                        temp_vec.x = start.x + 10.0f;

                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);

                        ((shadowRayEntData*)data)->cache->poly.vert[0].x =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[0].y =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[0].z =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.x = start.x - 10.0f;
                        temp_vec.z = start.z + 10.0f;

                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);

                        ((shadowRayEntData*)data)->cache->poly.vert[1].x =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[1].y =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[1].z =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.x = start.x - 10.0f;
                        temp_vec.z = start.z - 10.0f;

                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);

                        ((shadowRayEntData*)data)->cache->poly.vert[2].x =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[2].y =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[2].z =
                            xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        xVec3Init(&((shadowRayEntData*)data)->cache->poly.norm, 0.0f, 1.0f, 0.0f);
                        ((shadowRayEntData*)data)->cache->castOnEnt = ent;
                    }
                }
                return 1;
            }
        }
    }

    xModelInstance* model = ent->model;
    if (iModelNumBones(model->Data) > 1)
    {
        return 1;
    }

    F32 old_shadowHeight = ((shadowRayEntData*)data)->cache->shadowHeight;

    RwFrameTransform(RpAtomicGetFrame(model->Data), model->Mat, rwCOMBINEREPLACE);
    sModelMat = model->Mat;

    RpAtomicForAllIntersections(model->Data, (RpIntersection*)((shadowRayEntData*)data)->line,
                                shadowRayModelCB, ((shadowRayEntData*)data)->cache);

    sModelMat = NULL;

    if (((shadowRayEntData*)data)->cache->shadowHeight != old_shadowHeight)
    {
        ((shadowRayEntData*)data)->cache->castOnEnt = ent;
    }

    return 1;
}

void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, F32 depth)

{
    xEnv* env = globals.sceneCur->env;
    RpIntersection isx;
    xQCData qcd;

    cache->envHeight = 1.0f;
    cache->shadowHeight = 1.0f;
    cache->castOnEnt->id = 0;
    cache->collPriority = 0;
    isx.t.line.start.x = pos->x;
    isx.t.line.start.y = 1.0f + pos->y;
    isx.t.line.start.z = pos->z;
    isx.t.line.end.x = pos->x;
    isx.t.line.end.y = pos->y - depth;
    isx.t.line.end.z = pos->z;

    if (env->geom->jsp != (xJSPHeader*)0x0)
    {
        xClumpColl_ForAllIntersections(env->geom->jsp->colltree, &isx, shadowRayCB, cache);
    }
    else
    {
        RpCollisionWorldForAllIntersections(env->geom->world, &isx, shadowRayCB, cache);
    }
    if (cache->envHeight != 0.0f)
    {
        cache->envHeight =
            cache->envHeight * (isx.t.line.end.y - isx.t.line.start.y) + isx.t.line.start.y;
        isx.t.line.end.y = cache->envHeight;
    }
    xQuickCullForLine(&xqc_def_ctrl, &qcd, (xLine3*)&isx.t.line);
    xGridCheckPosition(&colls_grid, (xVec3*)&isx.t.line, &qcd, shadowRayEntCB, cache);
    xGridCheckPosition(&colls_oso_grid, (xVec3*)&isx.t.line, &qcd, shadowRayEntCB, cache);
    if ((cache->flags & 8) != 0)
    {
        xGridCheckPosition(&npcs_grid, (xVec3*)&isx.t.line, &qcd, shadowRayEntCB, cache);
    }
    if (cache->shadowHeight != 0.0f)
    {
        cache->shadowHeight =
            cache->shadowHeight * (isx.t.line.end.y - isx.t.line.start.y) + isx.t.line.start.y;
    }
    else
    {
        cache->shadowHeight = cache->envHeight;
    }
    if ((cache->shadowHeight != 0.0f) && cache->castOnEnt->id == 0)
    {
        cache->dydx = -cache->poly.norm.x / cache->poly.norm.y;
        cache->dydz = -cache->poly.norm.z / cache->poly.norm.y;
    }
    return;
}

void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc)
{
    RwMatrixTag* mat;
    xVec3 tempnorm;

    F32 temp_f0;
    F32 temp_f1;
    F32 temp_f2;
    F32 temp_f3;
    F32 temp_f4;
    F32 temp_f5;

    if (cache->shadowHeight != 1e38f)
    {
        mat = ent->model->Mat;
        if (cache->castOnEnt != NULL)
        {
            xMat3x3RMulVec(&tempnorm, (xMat3x3*)cache->castOnEnt->model->Mat, &cache->poly.norm);
            xVec3Normalize(&tempnorm, &tempnorm);
            cache->dydx = -tempnorm.x / tempnorm.y;
            cache->dydz = -tempnorm.z / tempnorm.y;
        }
        if (cache->flags & 1)
        {
            temp_f0 = ecc * (mat->right.x * radius);
            temp_f1 = ecc * (mat->right.z * radius);
            temp_f3 = mat->at.z * radius;
            temp_f4 = mat->at.x * radius;
            temp_f2 = (temp_f0 * cache->dydx) + (temp_f1 * cache->dydz);
            temp_f5 = (temp_f4 * cache->dydx) + (temp_f3 * cache->dydz);
        }
        else
        {
            temp_f0 = radius * ecc;
            temp_f1 = 0.0f;
            temp_f3 = radius;
            temp_f4 = 0.0f;
            temp_f2 = temp_f0 * cache->dydx;
            temp_f5 = radius * cache->dydz;
        }
        cache->corner[0].x = mat->pos.x + temp_f0;
        cache->corner[0].y = 0.02f + (cache->shadowHeight + temp_f2);
        cache->corner[0].z = mat->pos.z + temp_f1;
        cache->corner[1].x = mat->pos.x + temp_f4;
        cache->corner[1].y = 0.02f + (cache->shadowHeight + temp_f5);
        cache->corner[1].z = mat->pos.z + temp_f3;
        cache->corner[2].x = mat->pos.x - temp_f4;
        cache->corner[2].y = 0.02f + (cache->shadowHeight - temp_f5);
        cache->corner[2].z = mat->pos.z - temp_f3;
        cache->corner[3].x = mat->pos.x - temp_f0;
        cache->corner[3].y = 0.02f + (cache->shadowHeight - temp_f2);
        cache->corner[3].z = mat->pos.z - temp_f1;
    }
}

void xShadowSimple_Init()
{
    memset(sCollQueue, 0, sizeof(sCollQueue));

    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash(""), NULL);

    sShadRaster = (tex) ? tex->raster : NULL;

    memset(sShadVert, 0, sizeof(sShadVert));

    for (u32 i = 0; i < 64; i++)
    {
        sShadVert[i * 6 + 1].u = 1.0f;
        sShadVert[i * 6 + 2].v = 1.0f;
        sShadVert[i * 6 + 3].u = 1.0f;
        sShadVert[i * 6 + 4].v = 1.0f;
        sShadVert[i * 6 + 5].u = 1.0f;
        sShadVert[i * 6 + 5].v = 1.0f;
        sShadVert[i * 6 + 0].nx = 0.0f;
        sShadVert[i * 6 + 0].ny = 1.0f;
        sShadVert[i * 6 + 0].nz = 0.0f;
        sShadVert[i * 6 + 1].nx = 0.0f;
        sShadVert[i * 6 + 1].ny = 1.0f;
        sShadVert[i * 6 + 1].nz = 0.0f;
        sShadVert[i * 6 + 2].nx = 0.0f;
        sShadVert[i * 6 + 2].ny = 1.0f;
        sShadVert[i * 6 + 2].nz = 0.0f;
        sShadVert[i * 6 + 3].nx = 0.0f;
        sShadVert[i * 6 + 3].ny = 1.0f;
        sShadVert[i * 6 + 3].nz = 0.0f;
        sShadVert[i * 6 + 4].nx = 0.0f;
        sShadVert[i * 6 + 4].ny = 1.0f;
        sShadVert[i * 6 + 4].nz = 0.0f;
        sShadVert[i * 6 + 5].nx = 0.0f;
        sShadVert[i * 6 + 5].ny = 1.0f;
        sShadVert[i * 6 + 5].nz = 0.0f;
    }
}

void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, U8 alpha)
{
    S32 i;
    S32 n;
    U32 j;
    zSimpleShadowTableHeader* sst;
    RwRaster* raster;
    U32 flags;
    U32 size;
    RwTexture* tex;

    S32 var_r20;
    S32 var_r24;

    //memset(NULL, 0x98);
    cache->corner[0].z = 1e38f;
    cache->corner[1].y = 1e38f;
    cache->flags = 4;
    cache->alpha = alpha;

    if (ent->model != NULL)
    {
        if ((U32)(ent->model->shadowID + 0x21530000) != -0x4111U)
        {
            return;
        }
        flags = 0U;
        var_r20 = 0;
        for (i = 0; i < xSTAssetCountByType('SHDW'); i += 1)
        {
            sst = (zSimpleShadowTableHeader*)xSTFindAssetByType('SHDW', i, &size);
            var_r24 = 0;
            for (j = 0; j < (U32)sst->num; j += 1)
            {
                if ((U32)ent->model->modelID == 0)
                {
                    if (xSTFindAsset(sst->num, NULL) != NULL)
                    {
                        flags = (U32)xSTFindAsset(sst->num, NULL);
                        var_r20 = sst->num;
                    }
                    else
                    {
                        flags = 0xDEADBEEFU;
                    }
                }
            }
        }
        if ((flags == 0U) || ((U32)(flags + 0x21530000) == -0x4111U))
        {
            flags = sShadRaster->width;
        }
        cache->corner[1].x = flags;
        cache->flags |= (S16)var_r20;
        ent->model->shadowID = flags;
    }
}

void xQuickCullForLine(xQCData* q, const xLine3* ln)
{
    xQuickCullForLine(&xqc_def_ctrl, q, ln);
}
