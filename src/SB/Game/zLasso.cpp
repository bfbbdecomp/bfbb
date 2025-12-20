#include "zLasso.h"

#include "xMath3.h"
#include "xMathInlines.h"
#include "iAnim.h"
#include "iModel.h"
#include "xstransvc.h"
#include "iParMgr.h"

#include <types.h>

static RwRaster* sLassoRaster;
static U32 sNumGuideLists;
static zLassoGuide* sCurrentGuide;
static RxObjSpace3DVertex* lnverts;

static zLassoGuideList sGuideList[64];

static S32 negativeHondaX = 1;

static void fizzicalRadius(zLasso* lasso, f32 arg1, xVec3* arg2);
static void fizzicalCenter(zLasso* lasso, f32 arg1, xVec3* arg2);
static void fizzicalNormal(zLasso* lasso, f32 arg1, xVec3* arg2);
static void fizzicalHonda(zLasso* lasso, f32 arg1, xVec3* arg2);
static void nonfizzicalHonda(zLasso* lasso, f32 arg1, xVec3* arg2);
static void fizzicalSlack(zLasso* lasso, f32 arg1, xVec3* arg2);
static void initVertMap(zLassoGuide* guide);
static void bakeMorphAnim(RpGeometry* geom, void* anim);

void zLasso_Init(zLasso* lasso, xModelInstance* model, F32 x, F32 y, F32 z)
{
    if (sLassoRaster == NULL)
    {
        RwTexture* tempTexture = (RwTexture*)xSTFindAsset(xStrHash("rope"), NULL);
        if (tempTexture != NULL)
        {
            sLassoRaster = tempTexture->raster;
        }
        else
        {
            sLassoRaster = NULL;
        }
    }

    iModelTagSetup(&lasso->tag, model->Data, x, y, z);

    lasso->model = model;
    lnverts = gRenderArr.m_vertex;
}

void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel)
{
    S32 givenSlot = -1;
    for (U32 i = 0; i < sNumGuideLists; i++)
    {
    }

    sGuideList[0].numGuides = sGuideList[0].numGuides + 1;
    // sGuideList[0].guide[0].poly = lassoModel;
    // sGuideList[0].guide[0].lassoAnim = lassoAnim;
    initVertMap(sGuideList[0].guide);

    bakeMorphAnim(lassoModel->Data->geometry, *lassoAnim->Data->RawData);
}

void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim)
{
    sCurrentGuide = NULL;
    if (ent == NULL || lassoAnim == NULL)
    {
        return;
    }

    U32 guideListIdx = 0;
    for (U32 i = 0; i < sNumGuideLists; i++, guideListIdx++)
    {
        if (sGuideList[i].target == ent)
        {
            break;
        }
    }

    if (guideListIdx < sNumGuideLists)
    {
        U32 guideIdx = 0;
        for (U32 i = 0; i < sGuideList[guideListIdx].numGuides; i++, guideIdx++)
        {
            if (sGuideList[guideListIdx].guide[i].lassoAnim == lassoAnim)
            {
                break;
            }
        }

        if (guideIdx < sGuideList[guideListIdx].numGuides)
        {
            sCurrentGuide = &sGuideList[guideListIdx].guide[guideIdx];
        }
    }

    if (sCurrentGuide == NULL)
    {
        sCurrentGuide = &sGuideList->guide[0];
    }
}

void zLasso_InterpToGuide(zLasso* lasso)
{
    xVec3 rad1;
    xVec3 rad2;

    RwV3d* v;
    S32 numVerts;

    if (sCurrentGuide != NULL)
    {
        numVerts = sCurrentGuide->poly->Data->geometry->numTriangles;
        v = sCurrentGuide->poly->Data->geometry->morphTarget->verts;
        xVec3Init(&lasso->tgCenter, 0.0f, 0.0f, 0.0f);

        S32 vertMapIdx = 0;
        for (S32 i = 0; i < numVerts; i++)
        {
            xVec3AddTo(&lasso->tgCenter, (xVec3*)v + sCurrentGuide->vertMap[vertMapIdx]);
            vertMapIdx += 1;
        }

        xVec3SMul(&lasso->tgCenter, &lasso->tgCenter, 1.0f / (f32)numVerts);
        xVec3Sub(&rad1, (xVec3*)v + sCurrentGuide->vertMap[0], &lasso->tgCenter);
        xVec3Sub(&rad2, (xVec3*)v + sCurrentGuide->vertMap[1], &lasso->tgCenter);

        lasso->tgRadius = xVec3Normalize(&rad1, &rad1);

        xVec3Cross(&lasso->tgNormal, &rad1, &rad2);
        xVec3Normalize(&lasso->tgNormal, &lasso->tgNormal);

        if (lasso->tgNormal.y < 0.0f)
        {
            xVec3Inv(&lasso->tgNormal, &lasso->tgNormal);
        }

        xMat4x3Toworld(&lasso->tgCenter, (xMat4x3*)sCurrentGuide->poly->Mat, &lasso->tgCenter);
    }
}

void zLasso_Render(zLasso* l)
{
    if ((((l->flags & 0x800) != 0) && ((l->flags & 0x4000) != 0)) ||
        (((l->flags & 0x800) == 0 && ((l->flags & 0x2000) != 0))))
    {
    }
}

void zLasso_Update(zLasso* lasso, xEnt* ent, F32 dt)
{
    xVec3 newPoint;
    iModelTagEval(ent->model->Data, &lasso->tag, lasso->model->Mat, &newPoint);
    xVec3Copy(&lasso->anchor, (xVec3*)&ent->model->Mat->pos);
    xVec3SubFrom(&newPoint, &lasso->anchor);

    if (!(lasso->flags & 0x800))
    {
        lasso->secsLeft -= dt;

        if (lasso->secsLeft < 0.0f)
        {
            lasso->secsLeft = 0.0f;
            lasso->flags |= 0x800;
        }

        F32 interp = 1.0f - (lasso->secsLeft / lasso->secsTotal);
        if (!(lasso->flags & 0x2000))
        {
            if (lasso->flags & 0x8)
            {
                fizzicalRadius(lasso, dt, &newPoint);
            }
            else
            {
                lasso->crRadius = lasso->stRadius * (1.0f - interp) + lasso->tgRadius * interp;
            }

            if (lasso->flags & 0x2)
            {
                fizzicalCenter(lasso, dt, &newPoint);
            }
            else
            {
                xVec3SMul(&lasso->crCenter, &lasso->stCenter, 1.0f - interp);
                xVec3AddScaled(&lasso->crCenter, &lasso->tgCenter, interp);
                xVec3SubFrom(&lasso->crCenter, &lasso->anchor);
            }
            
            if (lasso->flags & 0x4)
            {
                fizzicalNormal(lasso, dt, &newPoint);
            }
            else
            {
                xVec3SMul(&lasso->crNormal, &lasso->stNormal, 1.0f - interp);
                xVec3AddScaled(&lasso->crNormal, &lasso->tgNormal, interp);
            }

            xVec3SMulBy(&lasso->crNormal, 1.0f / xVec3Length(&lasso->crNormal));

            if (lasso->flags & 0x10)
            {
                fizzicalHonda(lasso, dt, &newPoint);
            }
            else
            {
                nonfizzicalHonda(lasso, dt, &newPoint);
            }
        }

        if (lasso->flags & 0x20)
        {
            fizzicalSlack(lasso, dt, &newPoint);
        }
        else
        {
            lasso->crSlack = lasso->stSlack * (1.0f - interp) + lasso->tgSlack * interp;
        }
    }
    else
    {
        if (!(lasso->flags & 0x4000))
        {
            if (lasso->flags & 0x100)
            {
                fizzicalRadius(lasso, dt, &newPoint);
            }

            if (lasso->flags & 0x40)
            {
                fizzicalCenter(lasso, dt, &newPoint);
            }

            if (lasso->flags & 0x80)
            {
                fizzicalNormal(lasso, dt, &newPoint);
                xVec3SMulBy(&lasso->crNormal, 1.0f / xVec3Length(&lasso->crNormal));
            }

            if (lasso->flags & 0x200)
            {
                fizzicalHonda(lasso, dt, &newPoint);
            }
            else
            {
                nonfizzicalHonda(lasso, dt, &newPoint);
            }
        }

        if (lasso->flags & 0x400)
        {
            fizzicalSlack(lasso, dt, &newPoint);
        }
    }

    xVec3Copy(&lasso->lastRefs[lasso->reindex[4]], &newPoint);

    lasso->reindex[0] = lasso->reindex[4];

    lasso->reindex[1] = lasso->reindex[0] + 1;
    if (lasso->reindex[1] > 4)
    {
        lasso->reindex[1] -= 5;
    }

    lasso->reindex[2] = lasso->reindex[0] + 2;
    if (lasso->reindex[2] > 4)
    {
        lasso->reindex[2] -= 5;
    }

    lasso->reindex[3] = lasso->reindex[0] + 3;
    if (lasso->reindex[3] > 4)
    {
        lasso->reindex[3] -= 5;
    }

    lasso->reindex[4] = lasso->reindex[0] + 4;
    if (lasso->reindex[4] > 4)
    {
        lasso->reindex[4] -= 5;
    }
}

void zLasso_InitTimer(zLasso* lasso, F32 interpTime)
{
    lasso->secsTotal = interpTime;
    lasso->secsLeft = interpTime;

    lasso->stRadius = lasso->tgRadius = lasso->crRadius = 0.0f;
    lasso->stSlack = lasso->tgSlack = lasso->crSlack = 0.0f;

    iModelTagEval(lasso->model->Data, &lasso->tag, lasso->model->Mat, &lasso->crCenter);

    xVec3Copy(&lasso->anchor, (xVec3*)&lasso->model->Mat->pos);
    xVec3SubFrom(&lasso->crCenter, &lasso->anchor);
    xVec3Copy(&lasso->honda, &lasso->crCenter);

    lasso->currDist = lasso->lastDist = 0.0f;

    xVec3Init(&lasso->stNormal, 0, 1, 0);
    xVec3Init(&lasso->tgNormal, 0, 1, 0);
    xVec3Init(&lasso->crNormal, 0, 1, 0);

    xVec3Copy(&lasso->lastRefs[0], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[1], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[2], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[3], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[4], &lasso->crCenter);

    lasso->reindex[0] = 0;
    lasso->reindex[1] = 1;
    lasso->reindex[2] = 2;
    lasso->reindex[3] = 3;
    lasso->reindex[4] = 4;
}

void zLasso_ResetTimer(zLasso* lasso, F32 interpTime)
{
    f32 temp_f0;
    f32 temp_f0_2;

    lasso->secsTotal = interpTime;
    lasso->secsLeft = interpTime;
    temp_f0 = lasso->crRadius;
    lasso->stRadius = temp_f0;
    lasso->tgRadius = temp_f0;
    temp_f0_2 = lasso->crSlack;
    lasso->stSlack = temp_f0_2;
    lasso->tgSlack = temp_f0_2;
    xVec3Copy(&lasso->stNormal, &lasso->crNormal);
    xVec3Copy(&lasso->tgNormal, &lasso->crNormal);
    xVec3Add(&lasso->stCenter, &lasso->crCenter, &lasso->anchor);
}

static void fizzicalRadius(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    lasso->crRadius = -((2.0f * (0.75f - lasso->crSlack) * dt) - lasso->crRadius);
    if (lasso->crRadius < 0.0f)
    {
        lasso->crRadius = 0.0f;
    }
}

static void fizzicalCenter(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    xVec3AddScaled(&lasso->crCenter, &lasso->lastRefs[lasso->reindex[4]], -0.2f);
    xVec3AddScaled(&lasso->crCenter, newPoint, 0.2f);
}

static void fizzicalNormal(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    xVec3 sp8;
    f32 temp_f31;

    xVec3Sub(&sp8, &lasso->lastRefs[lasso->reindex[0]], &lasso->lastRefs[lasso->reindex[1]]);
    temp_f31 = xVec3Dot(&lasso->crNormal, &sp8);
    xVec3AddScaled(&lasso->crNormal, &sp8, 1.1f * (-temp_f31 / xVec3Length(&sp8)));
    xVec3Normalize(&lasso->crNormal, &lasso->crNormal);
}

static void fizzicalHonda(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    xVec3SMul(&lasso->honda, newPoint, -1.0f);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[0]], 0.571429f);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[1]], 0.285714f);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[2]], 0.142857f);
    xVec3AddScaled(&lasso->honda, &lasso->crNormal, -xVec3Dot(&lasso->crNormal, &lasso->honda));
    xVec3Normalize(&lasso->honda, &lasso->honda);
    xVec3SMulBy(&lasso->honda, lasso->crRadius);
    
    if ((negativeHondaX != 0) && (lasso->honda.x > 0.0f))
    {
        xSndPlay3D(xStrHash("sound_rope_windup"), 0.77f, 0.0f, 0U, 0x10000U, &lasso->anchor, 100.0f,
                   SND_CAT_GAME, 0.0f);
        negativeHondaX = 0;
    }
    
    if (lasso->honda.x < 0.0f)
    {
        negativeHondaX = 1;
    }
    
    xVec3AddTo(&lasso->honda, &lasso->crCenter);
}

static void nonfizzicalHonda(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    xVec3Sub(&lasso->honda, newPoint, &lasso->crCenter);
    xVec3AddScaled(&lasso->honda, &lasso->crNormal, -xVec3Dot(&lasso->honda, &lasso->crNormal));

    F32 hondaLength = xVec3Length2(&lasso->honda);
    if (hondaLength < 0.00001f)
    {
        lasso->honda.x = lasso->crNormal.y;
        lasso->honda.y = -lasso->crNormal.x;
        lasso->honda.z = 0.0f;
        xVec3SMulBy(&lasso->honda, lasso->crRadius / xsqrt(xVec3Length2(&lasso->honda)));
        xVec3AddTo(&lasso->honda, &lasso->crCenter);
        return;
    }

    xVec3SMulBy(&lasso->honda, lasso->crRadius / xsqrt(hondaLength));
    xVec3AddTo(&lasso->honda, &lasso->crCenter);
}

static void fizzicalSlack(zLasso* lasso, F32 dt, xVec3* newPoint)
{
    lasso->crSlack += (2.0f * (lasso->lastDist - lasso->currDist)) - (0.6f * dt);
    if (lasso->crSlack < 0.0f)
    {
        lasso->crSlack = 0.0f;
        return;
    }

    if (lasso->crSlack > 1.0f)
    {
        lasso->crSlack = 1.0f;
    }
}

void zLasso_scenePrepare()
{
    sNumGuideLists = 0;
    sCurrentGuide = NULL;
}

void xMat4x3RotC(xMat4x3* m, F32 f1, F32 f2, F32 f3, F32 f4)
{
    xMat3x3RotC(m, f1, f2, f3, f4);
    xVec3Copy(&m->pos, &g_O3);
}

void xMat4x3Rot(xMat4x3* m, const xVec3* v, F32 f)
{
    xMat4x3RotC(m, v->x, v->y, v->z, f);
}

static void initVertMap(zLassoGuide* guide)
{
    RpGeometry* geom = guide->poly->Data->geometry;
    RpTriangle* tris = geom->triangles;
    S32 numTri = geom->numTriangles;

    S32 center = tris->vertIndex[0];
    S32 init = tris->vertIndex[0];
    
    if (((init != tris->vertIndex[4] && init != tris->vertIndex[5] && init != tris->vertIndex[6]) ||
         (init != tris->vertIndex[8] && init != tris->vertIndex[9] && init != tris->vertIndex[10])) &&
        ((init = tris->vertIndex[1], init != tris->vertIndex[4] && init != tris->vertIndex[5] && init != tris->vertIndex[6]) ||
         (init != tris->vertIndex[8] && init != tris->vertIndex[9] && init != tris->vertIndex[10])))
    {
        init = tris->vertIndex[2];
    }
    
    if (init == tris->vertIndex[0]) {
        init = tris->vertIndex[1];
    }
    
    S32 vertIdx = 0;
    S32 curr = init;
    S32 currTri;
    ushort* puVar5;
    
    do {
        vertIdx = vertIdx + 1;
        guide->vertMap[vertIdx - 1] = curr;
        
        if (vertIdx == numTri) {
            vertIdx = 0;
        }
        
        while (true) {
            puVar5 = &tris->vertIndex[vertIdx];
            currTri = puVar5[0];
            
            if (curr == currTri || curr == puVar5[1] || curr == puVar5[2]) {
                break;
            }
            
            vertIdx = vertIdx + 1;
            if (vertIdx == numTri) {
                vertIdx = 0;
            }
        }
        
        if ((curr != currTri && center != currTri)) {
            currTri = puVar5[1];            
            if ((curr != currTri && center != currTri)) {
                currTri = puVar5[2];
            }
        }
        
        curr = currTri;
    } while (currTri != init);
}

static void vec2vecMat(xMat4x3* m, xVec3* v1, xVec3* v2)
{
    xVec3 v3;
    xVec3Cross(&v3, v1, v2);
    F32 f1 = xasin(xVec3Normalize(&v3, &v3));
    xMat4x3Rot(m, &v3, f1);
}

static void bakeMorphAnim(RpGeometry* geom, void* anim)
{
    if (*(U32*)anim & 0x80000000)
    {
        return;
    }

    *(U32*)anim |= 0x80000000;

    xMat4x3 mat;
    xVec3 tran[64];
    xQuat quat[64];

    iAnimEval(anim, 0.0f, 0x0, tran, quat);
    xQuatToMat(quat, &mat);
    mat.pos = tran[0];

    S32 i, j;
    for (i = 0; i < geom->numMorphTargets; i++)
    {
        S32 numV = geom->numVertices;
        xVec3* v = (xVec3*)geom->morphTarget[i].verts;

        for (j = 0; j < numV; j++)
        {
            xMat4x3Toworld(&v[j], &mat, &v[j]);
        }
    }
}
