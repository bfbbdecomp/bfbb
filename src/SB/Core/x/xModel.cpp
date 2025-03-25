#include "iModel.h"
#include "xModel.h"

#include <types.h>

static xModelPool* sxModelPoolList;
static RwCamera* subcamera;
S32 xModelBucketEnabled;

static RwCamera* CameraCreate(int a, int b, int c);
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
        subcamera = CameraCreate(0,0,1);
    }
    xModelPipeNumTables = 0;
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

void xModelEvalSingle(xModelInstance* model);

void xModelEval(xModelInstance* model)
{
    while (model != NULL)
    {
        xModelEvalSingle(model);
        model = model->Next;
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

static RwCamera* CameraCreate(int a, int b, int c)
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