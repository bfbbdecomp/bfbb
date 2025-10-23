#ifndef IMODEL_H
#define IMODEL_H

#include "xMath3.h"
#include "xModel.h"

#include <rwcore.h>
#include <rpworld.h>
#include <rphanim.h>

void iModelInit();
static RpAtomic* FindAndInstanceAtomicCallback(RpAtomic* model, void* data);
static RpAtomic* iModelCacheAtomic(RpAtomic*);
RpMaterial* iModelResetMaterialCB(RpMaterial*, void*);
static void* GetHierarchy(RpAtomic* frame);
static RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data);
U32 iModelNumBones(RpAtomic* model);
S32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
S32 iModelSphereCull(xSphere* sphere);
RpAtomic* iModelStreamRead(RwStream*);
RpAtomic* iModelFileNew(void* buffer, U32 size);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
void iModelResetMaterial(RpAtomic* model);
void iModelUnload(RpAtomic* userdata);
static RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
S32 iModelCullPlusShadow(RpAtomic* model, RwMatrix* mat, xVec3* shadowVec, S32* shadowOutside);
void iModelTagEval(RpAtomic* model, const xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
U32 iModelTagSetup(xModelTag* tag, RpAtomic* model, F32 x, F32 y, F32 z);
void iModelSetMaterialAlpha(RpAtomic* model, U8 alpha);
U32 iModelVertCount(RpAtomic* model);
void iModelMaterialMul(RpAtomic* model, F32 rm, F32 gm, F32 bm);
RpAtomic* iModelFileNew(void* buffer, U32 size);
void iModelRender(RpAtomic* model, RwMatrix* mat);
void iModelUnload(RpAtomic* userdata);
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat);
static RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data);

#endif
