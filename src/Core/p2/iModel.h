#ifndef IMODEL_H
#define IMODEL_H

#include "../x/xMath3.h"

#include <rwcore.h>
#include <rpworld.h>

int32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
void iModelResetMaterial(RpAtomic* model);
int32 iModelCullPlusShadow(RpAtomic* model, RwMatrix* mat, xVec3* shadowVec, int32* shadowOutside);

#endif