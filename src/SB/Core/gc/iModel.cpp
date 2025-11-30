#include "iModel.h"

#include <types.h>
#include <rpskin.h>
#include <rpmatfx.h>

#include "zAssetTypes.h"
#include "xMathInlines.h"

#define MAX2(a, b) ((a) >= (b) ? (a) : (b))
#define MAX3(a, b, c) (MAX2((a), MAX2((b), (c))))

#define IMODEL_MAX_ATOMICS 256
#define IMODEL_MAX_DIRECTIONAL_LIGHTS 4
#define IMODEL_MAX_MATERIALS 16

RpWorld* instance_world;
RwCamera* instance_camera;

static U32 gLastAtomicCount;
static RpAtomic* gLastAtomicList[IMODEL_MAX_ATOMICS];
static RpLight* sEmptyDirectionalLight[IMODEL_MAX_DIRECTIONAL_LIGHTS];
static RpLight* sEmptyAmbientLight;
static RwRGBA sMaterialColor[IMODEL_MAX_MATERIALS];
static RwTexture* sMaterialTexture[IMODEL_MAX_MATERIALS];
static U8 sMaterialAlpha[IMODEL_MAX_MATERIALS];
static U32 sMaterialIdx;
static U32 sMaterialFlags;
static RpAtomic* sLastMaterial;

RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
    RpHAnimHierarchy* hierarchy = RpHAnimFrameGetHierarchy(frame);
    if (hierarchy == 0)
    {
        RwFrameForAllChildren(frame, &GetChildFrameHierarchy, data);
        return frame;
    }
    else
    {
        *(RpHAnimHierarchy**)data = hierarchy;
        frame = 0;
    }
    return frame;
}

void* GetHierarchy(RpAtomic* frame)
{
    void* unk_0[2];
    unk_0[0] = 0;
    GetChildFrameHierarchy((RwFrame*)frame->object.object.parent, unk_0);
    return unk_0[0];
}

void iModelInit()
{
    RwRGBAReal black = { 0.0f, 0.0f, 0.0f, 0.0f };
    if (sEmptyDirectionalLight[0] == 0)
    {
        for (int i = 0; i < (int)(sizeof(sEmptyDirectionalLight) / sizeof(RpLight*)); i++)
        {
            sEmptyDirectionalLight[i] = RpLightCreate(rpLIGHTDIRECTIONAL);
            RpLightSetColor(sEmptyDirectionalLight[i], &black);
            RwFrame* frame = RwFrameCreate();
            _rwObjectHasFrameSetFrame(sEmptyDirectionalLight[i], frame);
        }
        sEmptyAmbientLight = RpLightCreate(rpLIGHTAMBIENT);
        RpLightSetColor(sEmptyAmbientLight, &black); // Redundant sEmptyAmbientLight load here.
    }
}

RpAtomic* FindAndInstanceAtomicCallback(RpAtomic* model, void* data)
{
    RpHAnimHierarchy* hierarchy = (RpHAnimHierarchy*)GetHierarchy(model);
    RpGeometry* geom = model->geometry;
    RpSkin* skin = RpSkinGeometryGetSkin(geom);

    if ((skin != NULL) && (hierarchy == NULL))
    {
        hierarchy = (RpHAnimHierarchy*)RpHAnimHierarchyCreate(
            RpSkinGetNumBones(skin), 0, 0, rpHANIMHIERARCHYLOCALSPACEMATRICES, 0x24);
        RpHAnimFrameSetHierarchy((RwFrame*)(model->object).object.parent, hierarchy);
    }
    if ((hierarchy != NULL) && (skin != NULL))
    {
        RpSkinAtomicSetHAnimHierarchy(model, hierarchy);
    }
    if (hierarchy != NULL)
    {
        hierarchy->flags = 0x4000;
    }
    if (gLastAtomicCount < 0x100)
    {
        gLastAtomicList[gLastAtomicCount] = model;
        gLastAtomicCount++;
    }

    RwFrame* root = RwFrameGetRoot((RwFrame*)(model->object).object.parent);
    RpMaterialList* matList = &geom->matList;
    int numMats = matList->numMaterials;

    for (int i = 0; i < numMats; i++)
    {
        RpMaterial* pRVar4 = (RpMaterial*)_rpMaterialListGetMaterial(matList, i);
        if ((pRVar4 != NULL) && (RpMatFXMaterialGetEffects(pRVar4) != 0))
        {
            RpMatFXAtomicEnableEffects(model);
            model->pipeline =
                (RxPipeline*)RpMatFXGetGameCubePipeline(rpMATFXGAMECUBEATOMICPIPELINE);
            if (RpSkinGeometryGetSkin(geom) != 0)
            {
                RpSkinAtomicSetType(model, rpSKINTYPEMATFX);
            }
            break;
        }
    }

    if (gLastAtomicCount < 0x100)
    {
        gLastAtomicList[gLastAtomicCount] = model;
        gLastAtomicCount++;
    }

    return model;
}

RpAtomic* iModelFileNew(void* buffer, U32 size)
{
    RwMemory rwmem;
    rwmem.start = (U8*)buffer;
    rwmem.length = size;

    return iModelStreamRead(RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &rwmem));
}

void iModelUnload(RpAtomic* userdata)
{
    RpClump* clump;
    RwFrame* root;
    RwFrame* frame;

    clump = userdata->clump;
    frame = (RwFrame*)(clump->object).parent;
    if (frame != 0)
    {
        root = (RwFrame*)RwFrameGetRoot(frame);
        if (root != 0)
        {
            frame = root;
        }
        RwFrameDestroyHierarchy(frame);
        clump->object.parent = 0;
    }
    if (clump != 0)
    {
        RpClumpDestroy(clump);
    }
}

static RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
    if (*(U32*)data == (U32)atomic)
    {
        *(U32*)data = 0;
    }
    else if (*(U32*)data == 0)
    {
        *(RpAtomic**)data = atomic;
    }
    return atomic;
}

RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
    RpClump* clump;
    RpAtomic* nextModel;

    if (model == 0)
    {
        return 0;
    }
    else
    {
        clump = model->clump;
        nextModel = model;
        RpClumpForAllAtomics(clump, NextAtomicCallback, &nextModel);
        return nextModel;
    }
}

U32 iModelNumBones(RpAtomic* model)
{
    RpHAnimHierarchy* obj = (RpHAnimHierarchy*)GetHierarchy(model);
    return obj != 0 ? (U32)obj->numNodes : 0;
}

S32 iModelCull(RpAtomic* model, RwMatrix* mat)
{
    RwCamera* cam = RwCameraGetCurrentCamera();
    RwSphere sph;

    RwV3dTransformPoints(&sph.center, &model->boundingSphere.center, 1, mat);

    RwReal f1 = RwV3dDotProductMacro(&mat->right, &mat->right);
    RwReal f3 = RwV3dDotProductMacro(&mat->up, &mat->up);
    RwReal f4 = RwV3dDotProductMacro(&mat->at, &mat->at);

    sph.radius = model->boundingSphere.radius * xsqrt(MAX(f1, MAX(f3, f4)));

    model->worldBoundingSphere = sph;

    if (!cam)
    {
        return 1;
    }

    return (RwCameraFrustumTestSphere(cam, &sph) == rwSPHEREOUTSIDE);
}

S32 iModelSphereCull(xSphere* sphere)
{
    RwCamera* camera = RwCameraGetCurrentCamera();
    RwFrustumTestResult result = RwCameraFrustumTestSphere(camera, (RwSphere*)sphere);
    return (result == rwSPHEREOUTSIDE);
}

// Very nonmatching
S32 iModelCullPlusShadow(RpAtomic* model, RwMatrix* mat, xVec3* shadowVec, S32* shadowOutside)
{
    F32 xScale2, yScale2, zScale2;
    RwV3d *right, *up, *at;
    RwCamera* cam;
    RwSphere worldsph;
    const RwFrustumPlane* frustumPlane;
    S32 numPlanes;

    cam = RwCameraGetCurrentCamera();

    RwV3dTransformPoints(&worldsph.center, &model->boundingSphere.center, 1, mat);

    right = &mat->right;
    up = &mat->up;
    at = &mat->at;
    xScale2 = SQR(right->x) + SQR(right->y) + SQR(right->z);
    yScale2 = SQR(up->x) + SQR(up->y) + SQR(up->z);
    zScale2 = SQR(at->x) + SQR(at->y) + SQR(at->z);
    worldsph.radius = model->boundingSphere.radius * xsqrt(MAX3(xScale2, yScale2, zScale2));
    model->worldBoundingSphere = worldsph;

    numPlanes = 6;
    frustumPlane = cam->frustumPlanes;
    while (numPlanes--)
    {
        F32 nDot = worldsph.center.x * frustumPlane->plane.normal.x +
                   worldsph.center.y * frustumPlane->plane.normal.y +
                   worldsph.center.z * frustumPlane->plane.normal.z;
        nDot -= frustumPlane->plane.distance;

        if (nDot > worldsph.radius)
        {
            F32 nDot;

            F32 sDot = shadowVec->x * frustumPlane->plane.normal.x +
                       shadowVec->y * frustumPlane->plane.normal.y +
                       shadowVec->z * frustumPlane->plane.normal.z;
            sDot -= frustumPlane->plane.distance;

            if (sDot > worldsph.radius)
            {
                *shadowOutside = 1;
                return 1;
            }

            frustumPlane++;
            while (numPlanes--)
            {
                nDot = worldsph.center.x * frustumPlane->plane.normal.x +
                       worldsph.center.y * frustumPlane->plane.normal.y +
                       worldsph.center.z * frustumPlane->plane.normal.z;
                nDot -= frustumPlane->plane.distance;

                sDot = shadowVec->x * frustumPlane->plane.normal.x +
                       shadowVec->y * frustumPlane->plane.normal.y +
                       shadowVec->z * frustumPlane->plane.normal.z;
                sDot -= frustumPlane->plane.distance;

                if (nDot > worldsph.radius && sDot > worldsph.radius)
                {
                    *shadowOutside = 1;
                    return 1;
                }

                frustumPlane++;
            }

            *shadowOutside = 0;
            return 1;
        }

        frustumPlane++;
    }

    *shadowOutside = 0;
    return 0;
}

void iModelQuatToMat(xQuat* q, xVec3* a, RwMatrixTag* t)
{
    q->s = -q->s;
    xQuatToMat(q, (xMat3x3*)t);
    q->s = -q->s;
    t->pos.x = a->x;
    t->pos.y = a->y;
    t->pos.z = a->z;
}

// WIP
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
    RwMatrixTag* pMatrixArray;
    RpHAnimNodeInfo* iVar1;
    RwMatrixTag matrixStack[33];
    U32 pCurrentFrameFlags;
    RpHAnimNodeInfo* pCurrentFrame;
    int numFrames;
    RwMatrixTag* pMatrixStackTop;

    pCurrentFrame = (RpHAnimNodeInfo*)GetHierarchy(model);

    if (pCurrentFrame != NULL)
    {
        pMatrixStackTop = &matrixStack[0];
        pMatrixStackTop->at.z = 1.0;

        matrixStack[0].up.y = 1.0;
        matrixStack[0].right.x = 1.0;
        matrixStack[0].up.x = 0.0;
        matrixStack[0].right.z = 0.0;
        matrixStack[0].right.y = 0.0;
        matrixStack[0].at.y = 0.0;
        matrixStack[0].at.x = 0.0;
        matrixStack[0].up.z = 0.0;
        matrixStack[0].pos.z = 0.0;
        matrixStack[0].pos.y = 0.0;
        matrixStack[0].pos.x = 0.0;
        matrixStack[0].flags |= 0x20003;

        matrixStack[1] = matrixStack[0];
        numFrames = pCurrentFrame->nodeIndex;
        pMatrixArray = (&matrixStack[1]);
        iVar1 = (RpHAnimNodeInfo*)pCurrentFrame[1].nodeID;

        pMatrixArray++;
        for (int i = 0; i < numFrames; i++)
        {
            pCurrentFrameFlags = iVar1->flags;
            if ((pCurrentFrameFlags & 2) != 0)
            {
                *pMatrixArray++ = matrixStack[0];
            }

            RwMatrixTag afStack_8e8;
            iModelQuatToMat(quat, tran, &afStack_8e8);

            RwMatrixTag auStack_8a8;
            xMat4x3Mul((xMat4x3*)&auStack_8a8, (xMat4x3*)&afStack_8e8, (xMat4x3*)&matrixStack[0]);

            *mat = auStack_8a8;
            if ((pCurrentFrameFlags & 1) != 0)
            {
                pMatrixArray = &pMatrixArray[-1];
                pMatrixStackTop = pMatrixArray;
            }
            else
            {
                pMatrixStackTop = (RwMatrixTag*)&auStack_8a8;
            }
            matrixStack[0] = *pMatrixStackTop;
            mat++;
            quat++;
            tran++;
            iVar1++;
        }
    }
}

RpAtomic* iModelCacheAtomic(RpAtomic* model)
{
    return model;
}

void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
    RpHAnimHierarchy* hierarchy;
    RpGeometry* geom;
    RwMatrixTag* pAnimOldMatrix;
    RwFrame* frame;

    hierarchy = (RpHAnimHierarchy*)GetHierarchy(model);

    static S32 draw_all = 1;

    if (hierarchy != NULL)
    {
        pAnimOldMatrix = hierarchy->pMatrixArray;
        hierarchy->pMatrixArray = mat + 1;
    }
    frame = (RwFrame*)model->object.object.parent;
    frame->ltm = *mat;
    RwMatrixUpdate(&frame->ltm);
    if (iModelHack_DisablePrelight != 0)
    {
        model->geometry->flags &= 0xfffffff7;
    }
    iModelCacheAtomic(model)->renderCallBack(iModelCacheAtomic(model));
    if ((iModelHack_DisablePrelight != 0) && (model->geometry->preLitLum != NULL))
    {
        model->geometry->flags |= 8;
    }
    if (hierarchy != NULL)
    {
        hierarchy->pMatrixArray = pAnimOldMatrix;
    }
}

S32 iModelSphereCull(const xSphere* sphere)
{
    return RwCameraFrustumTestSphere((const RwCamera*)RwEngineInstance->curCamera,
                                     (const RwSphere*)sphere) == 0;
}

U32 iModelVertCount(RpAtomic* model)
{
    return model->geometry->numVertices;
}

static inline void SkinXform(xVec3* dest, const xVec3* vert, RwMatrix* mat, const RwMatrix* skinmat,
                             const F32* wt, const U32* idx, U32 count)
{
    U32 catMatFlags[2] = { 0, 0 };
    RwMatrix* catmat = (RwMatrix*)giAnimScratch;
    RwMatrix* rootmat = mat;
    mat++;

    while (count != 0)
    {
        for (U32 i = 0; i < 4; i++)
        {
            U32 r18 = ((*idx >> (i << 3)) >> 5) & 0x7;
            U32 r29 = 1 << ((*idx >> (i << 3)) & 0x1F);
            U32 midx = (*idx >> (i << 3)) & 0xFF;
            if (!(r29 & catMatFlags[r18]))
            {
                xMat4x3Mul((xMat4x3*)(catmat + midx), (const xMat4x3*)(skinmat + midx),
                           (const xMat4x3*)(mat + midx));
                catMatFlags[r18] |= r29;
            }
        }

        xVec3 accumV;
        accumV.x = accumV.y = accumV.z = 0.0f;

        RwMatrix* pMatrix;
        const F32* fwt = wt;
        U32 wtidx = *idx;
        U32 maxwt = 4;

        while (*fwt != 0.0f && maxwt)
        {
            pMatrix = catmat + (wtidx & 0xFF);

            accumV.x += *fwt * (pMatrix->right.x * vert->x + pMatrix->up.x * vert->y +
                                pMatrix->at.x * vert->z + pMatrix->pos.x);
            accumV.y += *fwt * (pMatrix->right.y * vert->x + pMatrix->up.y * vert->y +
                                pMatrix->at.y * vert->z + pMatrix->pos.y);
            accumV.z += *fwt * (pMatrix->right.z * vert->x + pMatrix->up.z * vert->y +
                                pMatrix->at.z * vert->z + pMatrix->pos.z);

            fwt++;
            wtidx >>= 8;
            maxwt--;
        }

        dest->x = rootmat->right.x * accumV.x + rootmat->up.x * accumV.y +
                  rootmat->at.x * accumV.z + rootmat->pos.x;
        dest->y = rootmat->right.y * accumV.x + rootmat->up.y * accumV.y +
                  rootmat->at.y * accumV.z + rootmat->pos.y;
        dest->z = rootmat->right.z * accumV.x + rootmat->up.z * accumV.y +
                  rootmat->at.z * accumV.z + rootmat->pos.z;

        vert++;
        idx++;
        wt += 4;
        count--;
        dest++;
    }
}

// TODO: uncomment all code after RW gets implemented

U32 iModelVertEval(RpAtomic* model, U32 index, U32 count, RwMatrix* mat, xVec3* vert, xVec3* dest)
{
    // RpGeometry* geom = RpAtomicGetGeometry(model);

    // if (!vert)
    // {
    //     U32 numV = RpGeometryGetNumVertices(geom);
    //     if (index >= numV || count == 0)
    //     {
    //         return 0;
    //     }
    //     count = xmin(count, numV - index);
    //     vert = (xVec3*)RpMorphTargetGetVertices(RpGeometryGetMorphTarget(geom, 0));
    //     vert += index;
    // }

    // RpSkin* skin = RpSkinGeometryGetSkin(RpAtomicGetGeometry(model));
    // if (skin)
    // {
    //     SkinXform(dest, vert, mat, RpSkinGetSkinToBoneMatrices(skin),
    //               (F32*)(RpSkinGetVertexBoneWeights(skin) + index),
    //               RpSkinGetVertexBoneIndices(skin) + index, count);
    // }
    // else
    // {
    //     RwV3dTransformPoints((RwV3d*)dest, (const RwV3d*)vert, count, mat);
    // }

    // return count;
    return 0;
}

static inline void SkinNormals(xVec3* dest, const xVec3* normal, const RwMatrix* mat,
                               const RwMatrix* skinmat, const F32* wt, const U32* idx, U32 count)
{
    U32 catMatFlags[2] = { 0, 0 };
    RwMatrix* catmat = (RwMatrix*)giAnimScratch;
    const RwMatrix* rootmat = mat;
    mat++;

    RwV3d right;
    right.x = rootmat->right.x;
    right.y = rootmat->right.y;
    right.z = rootmat->right.z;

    RwV3d up;
    up.x = rootmat->up.x;
    up.y = rootmat->up.y;
    up.z = rootmat->up.z;

    RwV3d at;
    at.x = rootmat->at.x;
    at.y = rootmat->at.y;
    at.z = rootmat->at.z;

    while (count != 0)
    {
        for (U32 i = 0; i < 4; i++)
        {
            U32 r18 = ((*idx >> (i << 3)) >> 5) & 0x7;
            U32 r29 = 1 << ((*idx >> (i << 3)) & 0x1F);
            U32 midx = (*idx >> (i << 3)) & 0xFF;
            if (!(r29 & catMatFlags[r18]))
            {
                xMat3x3Mul((xMat3x3*)(catmat + midx), (const xMat3x3*)(skinmat + midx),
                           (const xMat3x3*)(mat + midx));
                xMat3x3Normalize((xMat3x3*)(catmat + midx), (xMat3x3*)(catmat + midx));
                catMatFlags[r18] |= r29;
            }
        }

        xVec3 accumV;
        accumV.x = accumV.y = accumV.z = 0.0f;

        RwMatrix* pMatrix;
        const F32* fwt = wt;
        U32 wtidx = *idx;
        U32 maxwt = 4;

        while (*fwt != 0.0f && maxwt)
        {
            pMatrix = catmat + (wtidx & 0xFF);

            accumV.x += *fwt * (pMatrix->right.x * normal->x + pMatrix->up.x * normal->y +
                                pMatrix->at.x * normal->z);
            accumV.y += *fwt * (pMatrix->right.y * normal->x + pMatrix->up.y * normal->y +
                                pMatrix->at.y * normal->z);
            accumV.z += *fwt * (pMatrix->right.z * normal->x + pMatrix->up.z * normal->y +
                                pMatrix->at.z * normal->z);

            fwt++;
            wtidx >>= 8;
            maxwt--;
        }

        dest->x = right.x * accumV.x + up.x * accumV.y + at.x * accumV.z;
        dest->y = right.y * accumV.x + up.y * accumV.y + at.y * accumV.z;
        dest->z = right.z * accumV.x + up.z * accumV.y + at.z * accumV.z;

        normal++;
        idx++;
        wt += 4;
        count--;
        dest++;
    }
}

// TODO: Fix the below 3 functions after RW gets implemented

U32 iModelNormalEval(xVec3* out, const RpAtomic& m, const RwMatrix* mat, size_t index, S32 size,
                     const xVec3* in)
{
    // RpGeometry* geom = RpAtomicGetGeometry(&m);

    // if (!in)
    // {
    //     S32 numV = RpGeometryGetNumVertices(geom);
    //     S32 max_size = numV - index;
    //     if (size < 0 || size > max_size)
    //     {
    //         size = max_size;
    //     }
    //     in = (const xVec3*)RpMorphTargetGetVertexNormals(RpGeometryGetMorphTarget(geom, 0));
    // }

    // if (size <= 0)
    //     return 0;

    // in += index;

    // RpSkin* skin = RpSkinGeometryGetSkin(geom);
    // if (skin)
    // {
    //     const RwMatrix* skin_mats = RpSkinGetSkinToBoneMatrices(skin);
    //     const F32* bone_weights = (F32*)RpSkinGetVertexBoneWeights(skin) + index;
    //     const U32* bone_indices = RpSkinGetVertexBoneIndices(skin) + index;
    //     SkinNormals(out, in, mat, skin_mats, bone_weights, bone_indices, size);
    // }
    // else
    // {
    //     xMat4x3 nmat;
    //     xMat3x3Normalize(
    //         &nmat, (xMat3x3*)&mat); // BUG: mat is already a pointer, nmat will have garbage data!!!
    //     nmat.pos.assign(0.0f, 0.0f, 0.0f);
    //     RwV3dTransformPoints((RwV3d*)out, (RwV3d*)in, size, (RwMatrix*)&nmat);
    // }

    // return size;
    return 0;
}

static U32 iModelTagUserData(xModelTag* tag, RpAtomic* model, F32 x, F32 y, F32 z, S32 closeV)
{
    // S32 i, count;
    // RpUserDataArray *array, *testarray;
    // F32 distSqr, closeDistSqr;
    // S32 numTags, t;
    // xModelTag* tagList;

    // count = RpGeometryGetUserDataArrayCount(model->geometry);
    // array = NULL;

    // for (i = 0; i < count; i++)
    // {
    //     testarray = RpGeometryGetUserDataArray(model->geometry, i);
    //     if (strcmp(testarray->name, "HI_Tags") == 0)
    //     {
    //         array = testarray;
    //         break;
    //     }
    // }

    // if (!array)
    // {
    //     memset(tag, 0, sizeof(xModelTag));
    //     return 0;
    // }

    // numTags = *(S32*)array->data;
    // closeDistSqr = 1.0e9f;
    // tagList = (xModelTag*)((S32*)array->data + 1);

    // if (closeV < 0 || closeV > numTags)
    // {
    //     closeV = 0;
    //     for (t = 0; t < numTags; t++)
    //     {
    //         distSqr =
    //             xsqr(tagList[t].v.x - x) + xsqr(tagList[t].v.y - y) + xsqr(tagList[t].v.z - z);
    //         if (distSqr < closeDistSqr)
    //         {
    //             closeV = t;
    //             closeDistSqr = distSqr;
    //         }
    //     }
    //     if (tag)
    //     {
    //         *tag = tagList[closeV];
    //     }
    // }
    // else
    // {
    //     if (tag)
    //     {
    //         *tag = tagList[closeV];
    //     }
    // }

    // return closeV;
    return 0;
}

static U32 iModelTagInternal(xModelTag* tag, RpAtomic* model, F32 x, F32 y, F32 z, S32 closeV)

{
    // RpGeometry* geom;
    // RwV3d* vert;
    // S32 v, numV;
    // F32 distSqr, closeDistSqr;
    // RpSkin* skin;
    // const RwMatrixWeights* wt;

    // geom = RpAtomicGetGeometry(model);
    // vert = RpMorphTargetGetVertices(RpGeometryGetMorphTarget(geom, 0));

    // if (!vert)
    // {
    //     return iModelTagUserData(tag, model, x, y, z, closeV);
    // }

    // numV = RpGeometryGetNumVertices(geom);
    // closeDistSqr = 1.0e9f;

    // if (closeV < 0 || closeV > numV)
    // {
    //     closeV = 0;
    //     for (v = 0; v < numV; v++)
    //     {
    //         distSqr = xsqr(vert[v].x - x) + xsqr(vert[v].y - y) + xsqr(vert[v].z - z);
    //         if (distSqr < closeDistSqr)
    //         {
    //             closeV = v;
    //             closeDistSqr = distSqr;
    //         }
    //     }
    //     if (tag)
    //     {
    //         tag->v.x = x;
    //         tag->v.y = y;
    //         tag->v.z = z;
    //     }
    // }
    // else
    // {
    //     if (tag)
    //     {
    //         tag->v.x = vert[closeV].x;
    //         tag->v.y = vert[closeV].y;
    //         tag->v.z = vert[closeV].z;
    //     }
    // }

    // if (tag)
    // {
    //     skin = RpSkinGeometryGetSkin(RpAtomicGetGeometry(model));
    //     if (skin)
    //     {
    //         wt = RpSkinGetVertexBoneWeights(skin) + closeV;
    //         tag->matidx = RpSkinGetVertexBoneIndices(skin)[closeV];
    //         tag->wt[0] = wt->w0;
    //         tag->wt[1] = wt->w1;
    //         tag->wt[2] = wt->w2;
    //         tag->wt[3] = wt->w3;
    //     }
    //     else
    //     {
    //         tag->matidx = 0;
    //         tag->wt[0] = 0.0f;
    //         tag->wt[1] = 0.0f;
    //         tag->wt[2] = 0.0f;
    //         tag->wt[3] = 0.0f;
    //     }
    // }

    // return closeV;
    return 0;
}

U32 iModelTagSetup(xModelTag* tag, RpAtomic* model, F32 x, F32 y, F32 z)
{
    return iModelTagInternal(tag, model, x, y, z, -1);
}

U32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, F32 x, F32 y, F32 z)
{
    U32 index = iModelTagInternal(tag, model, x, y, z, -1);
    xVec3* normals = (xVec3*)model->geometry->morphTarget[0].normals;
    tag->normal = normals[index];
    return index;
}

void iModelTagEval(RpAtomic* model, const xModelTag* tag, RwMatrix* mat, xVec3* dest)
{
    if (tag->wt[0])
    {
        RpGeometry* geom = RpAtomicGetGeometry(model);
        RpSkin* skin = RpSkinGeometryGetSkin(geom);
        const RwMatrix* skinmat = RpSkinGetSkinToBoneMatrices(skin);
        SkinXform(dest, &tag->v, mat, skinmat, tag->wt, &tag->matidx, 1);
    }
    else
    {
        RwV3dTransformPoints((RwV3d*)dest, (RwV3d*)&tag->v, 1, mat);
    }
}

void iModelTagEval(RpAtomic* model, const xModelTagWithNormal* tag, RwMatrix* mat, xVec3* dest,
                   xVec3* normal)
{
    iModelTagEval(model, tag, mat, dest);
    if (tag->wt[0])
    {
        RpGeometry* geom = RpAtomicGetGeometry(model);
        RpSkin* skin = RpSkinGeometryGetSkin(geom);
        const RwMatrix* skinmat = RpSkinGetSkinToBoneMatrices(skin);
        SkinNormals(normal, &tag->normal, mat, skinmat, tag->wt, &tag->matidx, 1);
    }
    else
    {
        RwV3dTransformPoints((RwV3d*)normal, (RwV3d*)&tag->normal, 1, mat);
    }
}

static RpMaterial* iModelSetMaterialAlphaCB(RpMaterial* material, void* data)
{
    const RwRGBA* col = RpMaterialGetColor(material);
    sMaterialAlpha[sMaterialIdx++] = col->alpha;

    RwRGBA new_col = *col;
    new_col.alpha = *(U8*)data;

    RpMaterialSetColor(material, &new_col);

    return material;
}

//  TODO: another thing that needs fixed after RW gets implemented
void iModelSetMaterialAlpha(RpAtomic* model, U8 alpha)
{
    // RpGeometry* geom = RpAtomicGetGeometry(model);

    // if (model != sLastMaterial)
    // {
    //     sMaterialFlags = 0;
    // }

    // RpGeometrySetFlags(geom, RpGeometryGetFlags(geom) | rpGEOMETRYMODULATEMATERIALCOLOR);

    // sMaterialIdx = 0;

    // RpGeometryForAllMaterials(geom, iModelSetMaterialAlphaCB, &alpha);

    // sMaterialFlags |= 0x1;
    // sLastMaterial = model;
}

static RpMaterial* iModelResetMaterialCB(RpMaterial* material, void* data)
{
    if ((sMaterialFlags & 0x3) == 0x3)
    {
        RwRGBA newColor = sMaterialColor[sMaterialIdx];
        newColor.alpha = sMaterialAlpha[sMaterialIdx];
        RpMaterialSetColor(material, &newColor);
    }
    else
    {
        if (sMaterialFlags & 0x2)
        {
            RwRGBA newColor = sMaterialColor[sMaterialIdx];
            newColor.alpha = RpMaterialGetColor(material)->alpha;
            RpMaterialSetColor(material, &newColor);
        }
        if (sMaterialFlags & 0x1)
        {
            RwRGBA newColor = *RpMaterialGetColor(material);
            newColor.alpha = sMaterialAlpha[sMaterialIdx];
            RpMaterialSetColor(material, &newColor);
        }
    }

    if (sMaterialFlags & 0x4)
    {
        RpMaterialSetTexture(material, sMaterialTexture[sMaterialIdx]);
    }

    sMaterialIdx++;
    return material;
}

void iModelResetMaterial(RpAtomic* model)
{
    RpAtomic* material = sLastMaterial; // r2
    RpGeometry* geom; // r21

    if (model != material)
    {
        sMaterialFlags = 0;
    }

    geom = model->geometry;

    sMaterialIdx = 0;
    RpGeometryForAllMaterials(geom, iModelResetMaterialCB, 0);
    sMaterialFlags = 0;
}

RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
    int i = sMaterialIdx;
    RwTexture* texture = material->texture;
    sMaterialIdx++;
    sMaterialTexture[i] = texture;
    RpMaterialSetTexture(material, (RwTexture*)data);
    return material;
}

void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
    RpGeometry* geom;
    if (model != sLastMaterial)
    {
        sMaterialFlags = 0;
    }
    geom = model->geometry;
    sMaterialIdx = 0;
    RpGeometryForAllMaterials(geom, iModelSetMaterialTextureCB, texture);
    sMaterialFlags |= 4;
    sLastMaterial = model;
}

namespace
{
    inline void U8_COLOR_CLAMP(U8& destu8, F32 srcf32)
    {
        if (srcf32 < 0.0f)
            srcf32 = 0.0f;
        else if (srcf32 > 255.0f)
            srcf32 = 255.0f;
        destu8 = (U8)srcf32;
    }
} // namespace

static RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data)
{
    const RwRGBA* rw_col = RpMaterialGetColor(material);
    RwRGBA col = sMaterialColor[sMaterialIdx++] = *rw_col;
    F32 tmp;
    F32* mods = (F32*)data;

    tmp = col.red * mods[0];
    U8_COLOR_CLAMP(col.red, tmp);

    tmp = col.green * mods[1];
    U8_COLOR_CLAMP(col.green, tmp);

    tmp = col.blue * mods[2];
    U8_COLOR_CLAMP(col.blue, tmp);

    RpMaterialSetColor(material, &col);

    return material;
}

// TODO: once again, fix after RW implementation
void iModelMaterialMul(RpAtomic* model, F32 rm, F32 gm, F32 bm)
{
    // RpGeometry* geom = RpAtomicGetGeometry(model);

    // if (model != sLastMaterial)
    // {
    //     sMaterialFlags = 0;
    // }

    // RpGeometrySetFlags(geom, RpGeometryGetFlags(geom) | rpGEOMETRYMODULATEMATERIALCOLOR);

    // F32 cols[3];
    // cols[0] = rm;
    // cols[1] = gm;
    // cols[2] = bm;

    // RpGeometryForAllMaterials(geom, iModelMaterialMulCB, cols);

    // sLastMaterial = model;
    // sMaterialFlags |= 0x2;
}
