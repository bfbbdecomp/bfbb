#include "rwcore.h"
#include "rwplcore.h"
#include "xString.h"
#include "xVec3.h"
#include "xstransvc.h"
#include <string.h>
#include <types.h>

#include "xShadowSimple.h"
#include "xGlobals.h"
#include "xGrid.h"
#include "xScene.h"

#include "rpcollis.h"
#include "xMath3.h"
#include "xQuickCull.h"
#include "iModel.h"

extern xGlobals globals;
extern xGrid colls_grid;
extern xGrid colls_oso_grid;
extern xGrid npcs_grid;

struct shadowRayEntData {
    xShadowSimpleCache* cache;
    const RwLine* line;
};

class xNPCBasic : public xEnt {
public:
    u32 SelfType() const;
};

static xShadowSimpleQueue sCollQueue[2];
static RxRenderStateVector xrsv;
static RxObjSpace3DVertex sShadVert[384];
static RwRaster* sShadRasters[64];
static RwRaster* sShadRaster;
static u32 sShadVertCount;
static RwMatrixTag* sModelMat;

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

static RpCollisionTriangle* shadowRayModelCB(RpIntersection* isx, RpCollisionTriangle* tri, F32 dist,
                                      void* data)
{
    return shadowRayCB(isx, NULL, tri, dist, data);
}

static int shadowRayEntCB(xEnt* ent, void* data)
{
    if (!(ent->baseFlags & 0x10)) {
        return 1;
    }

    if (((shadowRayEntData*)data)->cache->flags & 8) {
        if (ent->baseType == 0x2b) {
            xNPCBasic* npc = (xNPCBasic*)ent;
            if ((npc->SelfType() & 0xFFFFFF00) == 0x4E545400) {
                xVec3 start;
                xVec3Init(&start, ((shadowRayEntData*)data)->line->start.x, 
                                  ((shadowRayEntData*)data)->line->start.y, 
                                  ((shadowRayEntData*)data)->line->start.z);

                float end_y = ((shadowRayEntData*)data)->line->end.y;
                float start_y = start.y;
                float dy = end_y - start_y;
                float t = (ent->bound.box.box.upper.y - start_y) / dy;

                if (((shadowRayEntData*)data)->cache->shadowHeight > t && 
                    ent->bound.box.box.upper.y > end_y) {
                    
                    if (start.x > ent->bound.box.box.lower.x && start.x < ent->bound.box.box.upper.x &&
                        start.z > ent->bound.box.box.lower.z && start.z < ent->bound.box.box.upper.z) {
                        
                        ((shadowRayEntData*)data)->cache->shadowHeight = t;
                        xVec3 temp_vec;

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.z = start.z;
                        temp_vec.x = start.x + 10.0f;
                        
                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);
                        
                        ((shadowRayEntData*)data)->cache->poly.vert[0].x = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[0].y = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[0].z = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.x = start.x - 10.0f;
                        temp_vec.z = start.z + 10.0f;
                        
                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);
                        
                        ((shadowRayEntData*)data)->cache->poly.vert[1].x = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[1].y = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[1].z = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        temp_vec.y = ent->bound.box.box.upper.y;
                        temp_vec.x = start.x - 10.0f;
                        temp_vec.z = start.z - 10.0f;
                        
                        xVec3SubFrom(&temp_vec, (const xVec3*)&ent->model->Mat->pos);
                        
                        ((shadowRayEntData*)data)->cache->poly.vert[2].x = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->right);
                        ((shadowRayEntData*)data)->cache->poly.vert[2].y = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->up);
                        ((shadowRayEntData*)data)->cache->poly.vert[2].z = xVec3Dot(&temp_vec, (const xVec3*)&ent->model->Mat->at);

                        xVec3Init(&((shadowRayEntData*)data)->cache->poly.norm, 0.0f, 1.0f, 0.0f);
                        ((shadowRayEntData*)data)->cache->castOnEnt = ent;
                    }
                }
                return 1;
            }
        }
    }

    xModelInstance* model = ent->model;
    if (iModelNumBones(model->Data) > 1) {
        return 1;
    }

    float old_shadowHeight = ((shadowRayEntData*)data)->cache->shadowHeight;

    RwFrameTransform(RpAtomicGetFrame(model->Data), model->Mat, rwCOMBINEREPLACE);
    sModelMat = model->Mat;

    RpAtomicForAllIntersections(model->Data, (RpIntersection*)((shadowRayEntData*)data)->line, shadowRayModelCB, ((shadowRayEntData*)data)->cache);

    sModelMat = NULL;

    if (((shadowRayEntData*)data)->cache->shadowHeight != old_shadowHeight) {
        ((shadowRayEntData*)data)->cache->castOnEnt = ent;
    }

    return 1;
}

static void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, float depth)
{
    const float shadow_offset = 0.0f;

    RpIntersection isx;
    xQCData qcd;
    shadowRayEntData red;

    cache->envHeight = 1e38f; 
    cache->shadowHeight = 1e38f; 
    cache->castOnEnt = NULL;
    cache->collPriority = 0; 
    
    xClumpCollBSPTree* clumpcoll = globals.sceneCur->scenecoll;

    isx.type = rpINTERSECTLINE;

    float px = pos->x;
    isx.t.line.start.x = px;

    float py = pos->y;
    isx.t.line.start.y = py + shadow_offset;
    isx.t.line.start.z = pos->z;

    isx.t.line.end.x = px;
    isx.t.line.end.y = py - depth;
    isx.t.line.end.z = pos->z;

    RpClump* clump = *(RpClump**)clumpcoll;
    
    if (*(RpAtomic**)((char*)clump + 0x10)) {
        xClumpColl_ForAllIntersections(*(xClumpCollBSPTree**)((char*)*(RpAtomic**)((char*)clump + 0x10) + 0x10), &isx, shadowRayCB, cache);
    } else {
        RpCollisionWorldForAllIntersections(*(RpWorld**)clump, &isx, shadowRayCB, cache);
    }

    if (cache->envHeight != 1e38f) {
        cache->envHeight = isx.t.line.start.y + cache->envHeight * (isx.t.line.end.y - isx.t.line.start.y);
        isx.t.line.end.y = cache->envHeight;
    }

    xQuickCullForLine(&qcd, (const xLine3*)&isx.t.line);

    red.cache = cache;
    red.line = &isx.t.line;

    xGridCheckPosition(&colls_grid, (xVec3*)&isx.t.line.start, &qcd, shadowRayEntCB, &red);
    xGridCheckPosition(&colls_oso_grid, (xVec3*)&isx.t.line.start, &qcd, shadowRayEntCB, &red);

    if (cache->flags & 8) {
        xGridCheckPosition(&npcs_grid, (xVec3*)&isx.t.line.start, &qcd, shadowRayEntCB, &red);
    }

    if (cache->shadowHeight != 1e38f) {
        cache->shadowHeight = isx.t.line.start.y + cache->shadowHeight * (isx.t.line.end.y - isx.t.line.start.y);
    } else {
        cache->shadowHeight = cache->envHeight;
    }

    if (cache->shadowHeight != 1e38f && cache->castOnEnt == NULL) {
        cache->dydx = -cache->poly.norm.x / cache->poly.norm.y;
        cache->dydz = -cache->poly.norm.z / cache->poly.norm.y;
    }
}

static void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, float radius, float ecc)
{
    if (cache->shadowHeight == 1e38f) {
        return;
    }

    RwMatrixTag* modelMat = ent->model->Mat;

    if (cache->castOnEnt != NULL) {
        xVec3 temp_norm;
        xMat3x3RMulVec(&temp_norm, (const xMat3x3*)cache->castOnEnt->model->Mat, &cache->poly.norm);
        xVec3Normalize(&temp_norm, &temp_norm);
        cache->dydx = -temp_norm.x / temp_norm.y;
        cache->dydz = -temp_norm.z / temp_norm.y;
    }

    float rx, rz, ax, az;
    float dy_r, dy_a;

    if (cache->flags & 1) {
        rz = modelMat->right.z * radius * ecc;
        rx = modelMat->right.x * radius * ecc;
        az = modelMat->at.z * radius;
        ax = modelMat->at.x * radius;

        dy_r = rx * cache->dydx + rz * cache->dydz;
        dy_a = ax * cache->dydx + az * cache->dydz;
    } else {
        rx = radius * ecc;
        rz = 0.0f;
        ax = 0.0f;
        az = radius;

        dy_r = rx * cache->dydx;
        dy_a = az * cache->dydz;
    }

    const float height_offset = 0.01f;

    cache->corner[0].x = modelMat->pos.x + rx;
    cache->corner[0].y = cache->shadowHeight + dy_r + height_offset;
    cache->corner[0].z = modelMat->pos.z + rz;

    cache->corner[1].x = modelMat->pos.x + ax;
    cache->corner[1].y = cache->shadowHeight + dy_a + height_offset;
    cache->corner[1].z = modelMat->pos.z + az;

    cache->corner[2].x = modelMat->pos.x - ax;
    cache->corner[2].y = cache->shadowHeight - dy_a + height_offset;
    cache->corner[2].z = modelMat->pos.z - az;

    cache->corner[3].x = modelMat->pos.x - rx;
    cache->corner[3].y = cache->shadowHeight - dy_r + height_offset;
    cache->corner[3].z = modelMat->pos.z - rz;
}

static void xShadowSimple_AddVerts(xShadowSimpleCache* cache)
{
    if (cache->shadowHeight == 1e38f) {
        return;
    }

    if (sShadVertCount >= 384) {
    } else {
        float c0y = cache->corner[0].y;
        float c0z = cache->corner[0].z;
        float c0x = cache->corner[0].x;
        sShadVert[sShadVertCount].x = c0x;
        sShadVert[sShadVertCount].y = c0y;
        sShadVert[sShadVertCount].z = c0z;

        float c1y = cache->corner[1].y;
        float c1z = cache->corner[1].z;
        float c1x = cache->corner[1].x;
        sShadVert[sShadVertCount + 1].x = c1x;
        sShadVert[sShadVertCount + 1].y = c1y;
        sShadVert[sShadVertCount + 1].z = c1z;

        float c2y = cache->corner[2].y;
        float c2z = cache->corner[2].z;
        float c2x = cache->corner[2].x;
        sShadVert[sShadVertCount + 2].x = c2x;
        sShadVert[sShadVertCount + 2].y = c2y;
        sShadVert[sShadVertCount + 2].z = c2z;

        float c3y = cache->corner[1].y;
        float c3z = cache->corner[1].z;
        float c3x = cache->corner[1].x;
        sShadVert[sShadVertCount + 3].x = c3x;
        sShadVert[sShadVertCount + 3].y = c3y;
        sShadVert[sShadVertCount + 3].z = c3z;

        float c4y = cache->corner[2].y;
        float c4z = cache->corner[2].z;
        float c4x = cache->corner[2].x;
        sShadVert[sShadVertCount + 4].x = c4x;
        sShadVert[sShadVertCount + 4].y = c4y;
        sShadVert[sShadVertCount + 4].z = c4z;

        float c5y = cache->corner[3].y;
        float c5z = cache->corner[3].z;
        float c5x = cache->corner[3].x;
        sShadVert[sShadVertCount + 5].x = c5x;
        sShadVert[sShadVertCount + 5].y = c5y;
        sShadVert[sShadVertCount + 5].z = c5z;

        u8 a0 = cache->alpha;
        sShadVert[sShadVertCount].r = 0;
        sShadVert[sShadVertCount].g = 0;
        sShadVert[sShadVertCount].b = 0;
        sShadVert[sShadVertCount].a = a0;

        u8 a1 = cache->alpha;
        sShadVert[sShadVertCount + 1].r = 0;
        sShadVert[sShadVertCount + 1].g = 0;
        sShadVert[sShadVertCount + 1].b = 0;
        sShadVert[sShadVertCount + 1].a = a1;

        u8 a2 = cache->alpha;
        sShadVert[sShadVertCount + 2].r = 0;
        sShadVert[sShadVertCount + 2].g = 0;
        sShadVert[sShadVertCount + 2].b = 0;
        sShadVert[sShadVertCount + 2].a = a2;

        u8 a3 = cache->alpha;
        sShadVert[sShadVertCount + 3].r = 0;
        sShadVert[sShadVertCount + 3].g = 0;
        sShadVert[sShadVertCount + 3].b = 0;
        sShadVert[sShadVertCount + 3].a = a3;

        u8 a4 = cache->alpha;
        sShadVert[sShadVertCount + 4].r = 0;
        sShadVert[sShadVertCount + 4].g = 0;
        sShadVert[sShadVertCount + 4].b = 0;
        sShadVert[sShadVertCount + 4].a = a4;

        u8 a5 = cache->alpha;
        sShadVert[sShadVertCount + 5].r = 0;
        sShadVert[sShadVertCount + 5].g = 0;
        sShadVert[sShadVertCount + 5].b = 0;
        sShadVert[sShadVertCount + 5].a = a5;

        sShadRasters[sShadVertCount / 6] = (RwRaster*)cache->raster;
        
        sShadVertCount = *(volatile u32*)&sShadVertCount + 6;
    }
}

#pragma push
#pragma optimization_level 1
#pragma optimize_for_size on

void xShadowSimple_Init()
{
    memset(sCollQueue, 0, sizeof(sCollQueue));

    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash("shadow_round"), NULL);

    sShadRaster = (tex) ? tex->raster : NULL;

    memset(sShadVert, 0, sizeof(sShadVert));

    RxObjSpace3DVertex* v = sShadVert;
    for (u32 i = 0; i < 64; i++)
    {
        v[1].u = 1.0f;
        v[2].v = 1.0f;
        v[3].u = 1.0f;
        v[4].v = 1.0f;
        v[5].u = 1.0f;
        v[5].v = 1.0f;
        v[0].nx = 0.0f;
        v[0].ny = 1.0f;
        v[0].nz = 0.0f;
        v[1].nx = 0.0f;
        v[1].ny = 1.0f;
        v[1].nz = 0.0f;
        v[2].nx = 0.0f;
        v[2].ny = 1.0f;
        v[2].nz = 0.0f;
        v[3].nx = 0.0f;
        v[3].ny = 1.0f;
        v[3].nz = 0.0f;
        v[4].nx = 0.0f;
        v[4].ny = 1.0f;
        v[4].nz = 0.0f;
        v[5].nx = 0.0f;
        v[5].ny = 1.0f;
        v[5].nz = 0.0f;
        
        v += 6;
    }
}

#pragma pop

void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, u8 alpha)
{
    S32 i;
    U32 j;
    zSimpleShadowTableHeader* sst;
    U32 size;

    memset(cache, 0, sizeof(xShadowSimpleCache));

    cache->envHeight = 1e38f;
    cache->shadowHeight = 1e38f; 
    cache->flags = 4;
    cache->alpha = alpha;

    if (ent->model == NULL)
    {
        return;
    }

    if (ent->model->shadowID == 0xDEADBEEF)
    {
        U32 flags = 0;
        U32 var_r20 = 0;

        S32 count = xSTAssetCountByType('SHDW');
        for (i = 0; i < count; i++)
        {
            sst = (zSimpleShadowTableHeader*)xSTFindAssetByType('SHDW', i, &size);
            for (j = 0; j < (U32)sst->num; j++)
            {
                U32 offset = j * sizeof(zSimpleShadowTableEntry);
                
                U32 entry_modelID = *(U32*)((char*)sst + 4 + offset);
                
                if ((U32)ent->model->modelID == entry_modelID)
                {
                    U32 entry_assetID = *(U32*)((char*)sst + 8 + offset);
                    RwTexture* tex = (RwTexture*)xSTFindAsset(entry_assetID, NULL);
                    if (tex != NULL)
                    {
                        flags = (U32)tex->raster;
                        var_r20 = *(U32*)((char*)sst + 12 + offset);
                    }
                    else
                    {
                        flags = 0xDEADBEEF;
                    }
                }
                
                if (flags != 0)
                {
                    break;
                }
            }
            if (flags != 0)
            {
                break;
            }
        }

        if ((flags == 0) || (flags == 0xDEADBEEF))
        {
            flags = (U32)sShadRaster;
        }

        cache->raster = flags;
        cache->flags |= (U16)var_r20;
        ent->model->shadowID = flags;
    }
    else
    {
        return;
    }
}

void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc)
{
    if (cache->flags & 4) {
        cache->flags &= 0xFFFB;
        u16 old_bit = ent->baseFlags & 0x10;
        ent->baseFlags &= 0xFFEF;
        
        xShadowSimple_SceneCollide(cache, (xVec3*)&ent->model->Mat->pos, 0.1f);
        
        ent->baseFlags |= old_bit;
        
        cache->pos = *(xVec3*)&ent->model->Mat->pos;
        cache->at = *(xVec3*)&ent->model->Mat->at;
        
        if (cache->shadowHeight != 1e38f) {
            xShadowSimple_CalcCorners(cache, ent, radius, ecc);
            xShadowSimple_AddVerts(cache);
        }
        return;
    }

    u8 pos_changed = (cache->pos.x != ent->model->Mat->pos.x ||
                      cache->pos.y != ent->model->Mat->pos.y ||
                      cache->pos.z != ent->model->Mat->pos.z);

    xEnt* castOnEnt = cache->castOnEnt;

    if (cache->shadowHeight != 1e38f && (pos_changed || castOnEnt != NULL)) {
        xVec3 temp_vert[3];
        xVec3 temp_norm;
        const xVec3* verts;

        if (castOnEnt != NULL) {
            xMat4x3Toworld(&temp_vert[0], (const xMat4x3*)castOnEnt->model->Mat, &cache->poly.vert[0]);
            xMat4x3Toworld(&temp_vert[1], (const xMat4x3*)castOnEnt->model->Mat, &cache->poly.vert[1]);
            xMat4x3Toworld(&temp_vert[2], (const xMat4x3*)castOnEnt->model->Mat, &cache->poly.vert[2]);
            xMat3x3RMulVec(&temp_norm, (const xMat3x3*)castOnEnt->model->Mat, &cache->poly.norm);
            xVec3Normalize(&temp_norm, &temp_norm);

            if ((float)__fabs(temp_norm.y > 0.0f)) {
                cache->dydx = -temp_norm.x / temp_norm.y;
                cache->dydz = -temp_norm.z / temp_norm.y;
            } else {
                cache->dydx = -temp_norm.x / 0.02f;
                cache->dydz = -temp_norm.z / 0.02f;
            }
            verts = temp_vert;
        } else {
            verts = cache->poly.vert;
        }

        for (int i = 0; i < 3; i++) {
            int next_i = (i == 2) ? 0 : i + 1;
            float dx1 = ent->model->Mat->pos.x - verts[i].x;
            float dz1 = ent->model->Mat->pos.z - verts[i].z;
            float dx2 = verts[next_i].x - verts[i].x;
            float dz2 = verts[i].z - verts[next_i].z;
            
            if (dx2 * dz1 + dz2 * dx1 > 0.0f) {
                cache->collPriority += 20;
                break;
            }
        }

        float dx = ent->model->Mat->pos.x - verts[0].x;
        float dz = ent->model->Mat->pos.z - verts[0].z;
        cache->shadowHeight = verts[0].y + cache->dydx * dx + cache->dydz * dz;

        if (pos_changed) {
            cache->envHeight = 1e38f;
        }
    }

    if (pos_changed) {
        cache->collPriority += 6;
    } else if (castOnEnt != NULL) {
        cache->collPriority += 3;
    } else {
        cache->collPriority += 2;
    }

    for (int i = 0; i < 2; i++) {
        if (sCollQueue[i].cache == NULL) {
            sCollQueue[i].cache = cache;
            sCollQueue[i].priority = sCollQueue[i].cache->collPriority;
            sCollQueue[i].ent = ent;
            sCollQueue[i].radius = radius;
            sCollQueue[i].ecc = ecc;
            return;
        }
        
        if (cache->collPriority > sCollQueue[i].priority) {
            if (sCollQueue[1].cache != NULL) {
                xShadowSimple_CalcCorners(sCollQueue[1].cache, sCollQueue[1].ent, sCollQueue[1].radius, sCollQueue[1].ecc);
                xShadowSimple_AddVerts(sCollQueue[1].cache);
            }
            
            for (int j = 1 - 1; j >= i; j--) {
                sCollQueue[j + 1] = sCollQueue[j];
            }
            
            sCollQueue[i].cache = cache;
            sCollQueue[i].priority = sCollQueue[i].cache->collPriority;
            sCollQueue[i].ent = ent;
            sCollQueue[i].radius = radius;
            sCollQueue[i].ecc = ecc;
            return;
        }
    }

    xShadowSimple_CalcCorners(cache, ent, radius, ecc);
    xShadowSimple_AddVerts(cache);
}

void xShadowSimple_Render()
{
    u16 old_bit;
    xShadowSimpleQueue* q;
    xShadowSimpleCache* cache;
    xEnt* ent;

    for (int i = 0; i < 2; i++) {
        cache = sCollQueue[i].cache;
        if (cache != NULL) {
            ent = sCollQueue[i].ent;
            
            old_bit = ent->baseFlags & 0x10;
            ent->baseFlags &= 0xffef;

            xShadowSimple_SceneCollide(cache, (xVec3*)&sCollQueue[i].ent->model->Mat->pos, 0.1f);

            ent->baseFlags |= old_bit;

            cache->pos = *(xVec3*)&sCollQueue[i].ent->model->Mat->pos;
            cache->at = *(xVec3*)&sCollQueue[i].ent->model->Mat->at;

            xShadowSimple_CalcCorners(cache, sCollQueue[i].ent, sCollQueue[i].radius, sCollQueue[i].ecc);
            xShadowSimple_AddVerts(cache);
        }
        sCollQueue[i].cache = NULL;
    }

    if (sShadVertCount == 0) {
        return;
    }

    RxRenderStateVectorLoadDriverState(&xrsv);

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)4);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)9);
    RwRenderStateSet((RwRenderState)12, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)2);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)FALSE);

    u32 j = 0;
    while (j < sShadVertCount) {
        RwRaster* raster = sShadRasters[j / 6];
        
        u32 next_j = j;
        while (next_j < sShadVertCount && sShadRasters[next_j / 6] == raster) {
            next_j += 6;
        }

        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, raster);
        RwIm3DTransform(&sShadVert[j], next_j - j, NULL, 0x19);
        
        j = next_j; 
        
        RwIm3DRenderPrimitive(rwPRIMTYPETRILIST);
    }

    RwIm3DEnd();

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)xrsv.SrcBlend);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)xrsv.DestBlend);
    RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)xrsv.ShadeMode);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)((xrsv.Flags >> 2) & 1));
    RwRenderStateSet((RwRenderState)12, (void*)((xrsv.Flags >> 3) & 1));

    sShadVertCount = 0;
}