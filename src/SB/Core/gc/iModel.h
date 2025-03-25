#ifndef IMODEL_H
#define IMODEL_H

#include "xMath3.h"
#include "xModel.h"

#include <rwcore.h>
#include <rpworld.h>

void iModelInit();
U32 iModelNumBones(RpAtomic* model);
S32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
S32 iModelSphereCull(xSphere* sphere);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
void iModelResetMaterial(RpAtomic* model);
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

#endif
