#ifndef IMODEL_H
#define IMODEL_H

#include "../x/xMath3.h"
#include "../x/xModel.h"

#include <rwcore.h>
#include <rpworld.h>

int32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
void iModelResetMaterial(RpAtomic* model);
int32 iModelCullPlusShadow(RpAtomic* model, RwMatrix* mat, xVec3* shadowVec, int32* shadowOutside);
void iModelTagEval(RpAtomic* model, const xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
RpAtomic* iModelFileNew(void* buffer, uint32 size);
void iModelRender(RpAtomic* model, RwMatrix* mat);

#endif