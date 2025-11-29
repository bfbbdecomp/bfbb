#include "iModel.h"
#include "xModel.h"
#include "xMemMgr.h"
#include "xMorph.h"

#include <types.h>
#include <string.h>

RpMorphTarget anim_coll_old_mt;
S32 xModelPipeCount[16];
xModelPipeInfo* xModelPipeData[16];

static xModelPool* sxModelPoolList;
static RwCamera* subcamera;
S32 xModelPipeNumTables;
S32 xModelLookupCount;
xModelPipeLookup* xModelLookupList;
S32 xModelInstStaticAlloc;
S32 xModelBucketEnabled;

static RwCamera* CameraCreate(S32 a, S32 b, S32 c);
void CameraDestroy(RwCamera* cam);

U32 xModelGetPipeFlags(RpAtomic* model)
{
    for (int i = 0; i < xModelLookupCount; i++)
    {
        if (xModelLookupList[i].model == model)
        {
            return xModelLookupList[i].PipeFlags;
        }
    }
    return NULL;
}

// Equivalent (regalloc)
void xModelInit()
{
    iModelInit();
    sxModelPoolList = NULL;
    if (subcamera == NULL)
    {
        subcamera = CameraCreate(0, 0, 1);
    }
    xModelPipeNumTables = 0;
}

void xModelPoolInit(U32 count, U32 numMatrices)
{
    S32 i;
    U8* buffer;
    RwMatrix* mat;
    xModelPool *pool, *curr, **prev;
    xModelInstance* inst;

    if (numMatrices < 1)
        numMatrices = 1;

    buffer = (U8*)xMemAllocSizeAlign(count * numMatrices * sizeof(RwMatrix) + sizeof(xModelPool) +
                                         count * sizeof(xModelInstance),
                                     16);

    mat = (RwMatrix*)buffer;
    buffer += count * numMatrices * sizeof(RwMatrix);

    pool = (xModelPool*)buffer;
    buffer += sizeof(xModelPool);

    inst = (xModelInstance*)buffer;

    for (i = 0; i < (S32)count; i++)
    {
        inst[i].Next = &inst[i + 1];
        inst[i].Pool = pool;
        inst[i].Mat = mat;
        mat += numMatrices;
    }
    inst[count - 1].Next = NULL;

    pool->NumMatrices = numMatrices;
    pool->List = inst;

    curr = sxModelPoolList;
    prev = &sxModelPoolList;
    while (curr && numMatrices < curr->NumMatrices)
    {
        prev = &curr->Next;
        curr = curr->Next;
    }
    pool->Next = curr;
    *prev = pool;
}

xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, U16 flags, U8 boneIndex,
                                    U8* boneRemap)
{
    S32 i;
    U32 boneCount, matCount;
    xModelPool *curr, *found;
    xModelInstance* dude;
    RwMatrix* allocmats;

    found = NULL;
    boneCount = iModelNumBones(data);
    matCount = 1 + boneCount + ((flags >> 6) & 0x1);

    if (xModelInstStaticAlloc)
    {
        if (flags & 0x2000)
        {
            dude = (xModelInstance*)xMemAllocSize(sizeof(xModelInstance));
            dude->Pool = NULL;
            dude->Mat = NULL;
        }
        else
        {
            allocmats = (RwMatrix*)xMemAllocSizeAlign(
                matCount * sizeof(RwMatrix) + sizeof(xModelInstance), 16);
            dude = (xModelInstance*)(allocmats + matCount);
            dude->Pool = NULL;
            dude->Mat = allocmats;
        }
    }
    else
    {
        if (flags & 0x2000)
        {
            flags &= (U16)~0x2000;
            flags |= 0x8;
        }

        curr = sxModelPoolList;
        while (curr)
        {
            if (curr->List && matCount <= curr->NumMatrices)
            {
                found = curr;
            }
            curr = curr->Next;
        }

        if (!found)
        {
            return NULL;
        }

        dude = found->List;
        found->List = dude->Next;
    }

    dude->Next = NULL;
    dude->Parent = NULL;
    dude->Anim = NULL;
    dude->Data = data;
    dude->Object = object;
    dude->Flags = flags | 0x3;
    dude->BoneCount = boneCount;
    dude->BoneIndex = boneIndex;
    dude->BoneRemap = boneRemap;
    dude->modelID = 0;
    dude->shadowID = 0xDEADBEEF;
    dude->Scale.x = 0.0f;
    dude->Scale.y = 0.0f;
    dude->Scale.z = 0.0f;
    dude->RedMultiplier = 1.0f;
    dude->GreenMultiplier = 1.0f;
    dude->BlueMultiplier = 1.0f;
    dude->Alpha = data->geometry->matList.materials[0]->color.alpha / 255.0f;
    dude->Surf = NULL;
    dude->FadeStart = 9e37f;
    dude->FadeEnd = FLOAT_MAX;

    if (dude->Mat)
    {
        for (i = 0; i < (S32)matCount; i++)
        {
            xMat4x3Identity((xMat4x3*)&dude->Mat[i]);
        }
    }

    dude->Bucket = xModelBucket_GetBuckets(dude->Data);
    dude->LightKit = NULL;

    if (dude->Bucket)
    {
        dude->PipeFlags = dude->Bucket[0]->PipeFlags;
    }
    else
    {
        dude->PipeFlags = xModelGetPipeFlags(dude->Data);
    }

    if (!(dude->PipeFlags & 0xF80000))
    {
        dude->PipeFlags |= 0x980000;
    }

    dude->anim_coll.verts = NULL;

    return dude;
}

static xModelInstance* FindChild(xModelInstance* model)
{
    xModelInstance* child = model->Next;
    while (child != NULL)
    {
        if (child->Parent == model)
        {
            return child;
        }
        child = child->Next;
    }
    return NULL;
}

void xModelInstanceFree(xModelInstance* model)
{
    xModelInstance* prev;
    xModelInstance* curr;

    while (prev = FindChild(model), prev != NULL)
    {
        xModelInstanceFree(prev);
    }
    prev = model->Parent;
    if (prev != NULL)
    {
        for (curr = prev->Next; (curr != NULL) && (curr != model); curr = curr->Next)
        {
            prev = curr;
        }
        prev->Next = curr->Next;
    }
    if (model->Anim != NULL)
    {
        xAnimPoolFree(model->Anim);
        model->Anim = NULL;
    }
    if (model->Pool != NULL)
    {
        model->Next = model->Pool->List;
        model->Pool->List = model;
    }
}

void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
    xModelInstance* curr = parent;
    while (curr->Next != NULL)
    {
        curr = curr->Next;
    }
    curr->Next = inst;
    inst->Parent = parent;
    if ((inst->Flags & 0x2000) != 0)
    {
        inst->Mat = parent->Mat;
    }
}

void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, U32 flags)
{
    if ((inst->Flags & 0x2000) && !(flags & 0x2000))
    {
        U32 boneCount = iModelNumBones(inst->Data);
        RwMatrix* allocmats = (RwMatrix*)xMemAllocSizeAlign(
            ((1 + boneCount + ((flags >> 6) & 0x1))) * sizeof(RwMatrix), 16);
        inst->Mat = allocmats;
        inst->Flags = flags;
    }
}

void xModelUpdate(xModelInstance* modelInst, F32 timeDelta)
{
    for (; modelInst != NULL; modelInst = modelInst->Next)
    {
        if (modelInst->Anim != NULL)
        {
            if ((modelInst->Flags & 4) != 0)
            {
                if ((modelInst->Flags & 0x100) != 0)
                {
                    xAnimPlayChooseTransition(modelInst->Anim);
                }
                xAnimPlayUpdate(modelInst->Anim, timeDelta);
            }
        }
    }
}

void xModelEvalSingle(xModelInstance* modelInst)
{
    S32 i;
    U16 flags = modelInst->Flags;
    if (flags & 0x2)
    {
        modelInst->Flags = flags & (U16)~0x1000;

        if (modelInst->Anim)
        {
            xAnimPlayEval(modelInst->Anim);
        }

        xModelInstance* dad = modelInst->Parent;
        if (dad)
        {
            if (flags & 0x8)
            {
                memcpy(modelInst->Mat, dad->Mat, (modelInst->BoneCount + 1) * sizeof(RwMatrix));
            }
            else if (flags & 0x10)
            {
                U8* remap = modelInst->BoneRemap;
                memcpy(modelInst->Mat, dad->Mat, sizeof(RwMatrix));
                for (i = 0; i < modelInst->BoneCount; i++)
                {
                    memcpy(&modelInst->Mat[i + 1], &dad->Mat[remap[i] + 1], sizeof(RwMatrix));
                }
            }
            else if (flags & 0x20)
            {
                if (dad->BoneCount && modelInst->BoneIndex)
                {
                    xMat4x3Mul((xMat4x3*)modelInst->Mat,
                               (xMat4x3*)&dad->Mat[modelInst->BoneIndex + 1], (xMat4x3*)dad->Mat);
                }
                else
                {
                    memcpy(modelInst->Mat, dad->Mat, sizeof(RwMatrix));
                }

                if (flags & 0x40)
                {
                    xMat4x3Mul((xMat4x3*)modelInst->Mat,
                               (xMat4x3*)&modelInst->Mat[modelInst->BoneCount + 1],
                               (xMat4x3*)modelInst->Mat);
                }
            }
        }
    }
}

void xModelEval(xModelInstance* model)
{
    while (model != NULL)
    {
        xModelEvalSingle(model);
        model = model->Next;
    }
}

void xModelRenderSingle(xModelInstance* modelInst)
{
    if ((modelInst->Flags & 0x401) != 0x1)
        return;

    U8 reset = FALSE;
    xMat3x3 tmpmat;

    if (modelInst->Scale.x)
    {
        tmpmat = *(xMat3x3*)modelInst->Mat;

        modelInst->Mat->right.x *= modelInst->Scale.x;
        modelInst->Mat->right.y *= modelInst->Scale.x;
        modelInst->Mat->right.z *= modelInst->Scale.x;
        modelInst->Mat->up.x *= modelInst->Scale.y;
        modelInst->Mat->up.y *= modelInst->Scale.y;
        modelInst->Mat->up.z *= modelInst->Scale.y;
        modelInst->Mat->at.x *= modelInst->Scale.z;
        modelInst->Mat->at.y *= modelInst->Scale.z;
        modelInst->Mat->at.z *= modelInst->Scale.z;
    }

    if (!iModelCull(modelInst->Data, modelInst->Mat))
    {
        if (modelInst->RedMultiplier != 1.0f || modelInst->GreenMultiplier != 1.0f ||
            modelInst->BlueMultiplier != 1.0f)
        {
            xModelMaterialMul(modelInst, modelInst->RedMultiplier, modelInst->GreenMultiplier,
                              modelInst->BlueMultiplier);
        }

        reset = TRUE;
        xModelSetMaterialAlpha(modelInst, (U8)(modelInst->Alpha * 255.0f) & 0xFF);

        if (modelInst->Flags & 0x80)
        {
            xAnimPlay* a = modelInst->Anim;
            for (U16 i = 0; i < a->NumSingle; i++)
            {
                if (a->Single[i].SingleFlags & 0x8000)
                {
                    if (a->Single[i].State)
                    {
                        xMorphRender((xMorphSeqFile*)a->Single[i].State->Data->RawData[0],
                                     modelInst->Mat,
                                     xAnimFileRawTime(a->Single[i].State->Data, a->Single[i].Time));
                    }
                    break;
                }
            }
        }
        else
        {
            iModelRender(modelInst->Data, modelInst->Mat);
        }
    }

    if (reset)
    {
        xModelResetMaterial(modelInst);
    }

    if (modelInst->Scale.x)
    {
        *(xMat3x3*)modelInst->Mat = tmpmat;
    }
}

void xModelRender(xModelInstance* model)
{
    while (model != NULL)
    {
        if (xModelBucketEnabled)
        {
            xModelBucket_Add(model);
        }
        else
        {
            xModelRenderSingle(model);
        }
        model = model->Next;
    }
}

void xModelRender2D(const xModelInstance& model, const basic_rect<F32>& r, const xVec3& from,
                    const xVec3& to)
{
    if (r.w <= 0.0f || r.h <= 0.0f || r.x + r.w < 0.0f || r.x > 1.0f || r.y + r.h < 0.0f ||
        r.y > 1.0f)
    {
        return;
    }

    RwCamera* camera = RwCameraGetCurrentCamera();
    RwFrame* frame = RwCameraGetFrame(camera);
    RwMatrix* cammat = RwFrameGetLTM(frame);

    xMat4x3 objmat, shearmat, temp1, temp2;
    xMat3x3LookAt(&objmat, &to, &from);
    xMat3x3Transpose(&objmat, &objmat);
    objmat.pos.x = 0.0f;
    objmat.pos.y = 0.0f;
    objmat.pos.z = xVec3Dist(&to, &from);
    objmat.flags = 0;

    const RwV2d* camvw = RwCameraGetViewWindow(camera);
    F32 viewscale = camvw->x * r.w * 2.0f;
    F32 shearX = camvw->x * -(r.x * 2.0f + r.w - 1.0f);
    F32 shearY = camvw->y * -(r.y * 2.0f + r.h - 1.0f);

    shearmat.right.x = viewscale;
    shearmat.right.y = 0.0f;
    shearmat.right.z = 0.0f;
    shearmat.up.x = 0.0f;
    shearmat.up.y = viewscale;
    shearmat.up.z = 0.0f;
    shearmat.at.x = shearX;
    shearmat.at.y = shearY;
    shearmat.at.z = 1.0f;
    shearmat.pos.x = 0.0f;
    shearmat.pos.y = 0.0f;
    shearmat.pos.z = 0.0f;
    shearmat.flags = 0;

    xMat4x3Mul(&temp1, &objmat, &shearmat);
    xMat4x3Mul(&temp2, &temp1, (xMat4x3*)cammat);
    xMat4x3Mul(&objmat, (xMat4x3*)model.Mat, &temp2);

    temp1 = *(xMat4x3*)model.Mat;
    *model.Mat = *(RwMatrix*)&objmat;

    iModelRender(model.Data, model.Mat);

    *model.Mat = *(RwMatrix*)&temp1;
}

static RwCamera* CameraCreate(S32 a, S32 b, S32 c)
{
    RwCamera* camera = RwCameraCreate();
    if (camera != NULL)
    {
        _rwObjectHasFrameSetFrame(camera, RwFrameCreate());
        camera->frameBuffer = RwRasterCreate(a, b, 0, 2);
        if (c != 0)
        {
            camera->zBuffer = RwRasterCreate(a, b, 0, 1);
        }
        if (camera->object.object.parent != NULL)
        {
            if (camera->frameBuffer != NULL)
            {
                if ((c == 0) || (camera->zBuffer != NULL))
                {
                    return camera;
                }
            }
        }
    }
    CameraDestroy(camera);
    return NULL;
}

void CameraDestroy(RwCamera* cam)
{
    RwFrame* frame;
    if (cam != NULL)
    {
        _rwFrameSyncDirty();
        frame = (RwFrame*)cam->object.object.parent;
        if (frame != NULL)
        {
            _rwObjectHasFrameSetFrame(cam, 0);
            RwFrameDestroy(frame);
        }
        if (cam->frameBuffer != NULL)
        {
            RwRasterDestroy(cam->frameBuffer);
            cam->frameBuffer = NULL;
        }
        if (cam->zBuffer != NULL)
        {
            RwRasterDestroy(cam->zBuffer);
            cam->zBuffer = NULL;
        }
        RwCameraDestroy(cam);
    }
}

void xModelSetMaterialAlpha(xModelInstance* model, U8 alpha)
{
    iModelSetMaterialAlpha(model->Data, alpha);
}

void xModelMaterialMul(xModelInstance* model, F32 rm, F32 gm, F32 bm)
{
    iModelMaterialMul(model->Data, rm, gm, bm);
}

void xModelResetMaterial(xModelInstance* model)
{
    iModelResetMaterial(model->Data);
}

void xModel_SceneEnter(RpWorld* world)
{
    RpWorldAddCamera(world, subcamera);
}

void xModel_SceneExit(RpWorld* world)
{
    RpWorldRemoveCamera(world, subcamera);
}

void xModelAnimCollStart(xModelInstance& model)
{
    model.Flags = (model.Flags & ~0x1000) | 0x800;
    if (model.anim_coll.verts == NULL)
    {
        U32 size = iModelVertCount(model.Data);
        if (size != 0)
        {
            model.anim_coll.verts = (xVec3*)xMemAlloc(gActiveHeap, size * sizeof(xVec3), 0);
        }
    }
}

void xModelAnimCollRefresh(const xModelInstance& cm)
{
    xModelInstance& m = (xModelInstance&)cm;
    U32 size = iModelVertCount(m.Data);
    xMat4x3& mat = *(xMat4x3*)m.Mat;
    xMat4x3 old_mat = mat;

    mat = g_I3;
    iModelVertEval(m.Data, 0, size, m.Mat, NULL, m.anim_coll.verts);
    mat = old_mat;

    m.Flags |= 0x1000;
}

xVec3 xModelGetBoneLocation(const xModelInstance& model, size_t index)
{
    xMat4x3& root_mat = *(xMat4x3*)model.Mat;
    xMat4x3& anim_mat = *(xMat4x3*)(model.Mat + index);
    if (index == 0)
    {
        return root_mat.pos;
    }
    xVec3 ret;
    xMat4x3Toworld(&ret, &root_mat, &anim_mat.pos);
    return ret;
}

void xModelGetBoneMat(xMat4x3& mat, const xModelInstance& model, size_t index)
{
    const xMat4x3& root_mat = *(xMat4x3*)model.Mat;
    if (index == 0)
    {
        mat = root_mat;
        return;
    }
    const xMat4x3& anim_mat = *(xMat4x3*)(model.Mat + index);
    xMat4x3Mul(&mat, &anim_mat, &root_mat);
}
