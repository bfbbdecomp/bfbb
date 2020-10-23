#include "iModel.h"

#include <types.h>

// func_800C78C4
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "GetChildFrameHierarchy__FP7RwFramePv")

// func_800C7928
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "GetHierarchy__FP8RpAtomic")

// func_800C795C
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelInit__Fv")

// func_800C7A1C
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "FindAndInstanceAtomicCallback__FP8RpAtomicPv")

// func_800C7B84
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelStreamRead__FP8RwStream")

// func_800C7DF8
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelFileNew__FPvUi")

// func_800C7E30
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelUnload__FP8RpAtomic")

// func_800C7EA0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "NextAtomicCallback__FP8RpAtomicPv")

// func_800C7EC8
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelFile_RWMultiAtomic__FP8RpAtomic")

// func_800C7F14
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelNumBones__FP8RpAtomic")

// func_800C7F48
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelQuatToMat__FP5xQuatP5xVec3P11RwMatrixTag")

// func_800C7FC0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag")

// func_800C80EC
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCacheAtomic__FP8RpAtomic")

// func_800C80F0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelRender__FP8RpAtomicP11RwMatrixTag")

// func_800C81DC
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCull__FP8RpAtomicP11RwMatrixTag")

// func_800C8314
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSphereCull__FP7xSphere")

// func_800C8348
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCullPlusShadow__FP8RpAtomicP11RwMatrixTagP5xVec3Pi")

// func_800C85C4
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelVertCount__FP8RpAtomic")

// func_800C85D0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3")

// func_800C86BC
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "SkinXform__FP5xVec3PC5xVec3P11RwMatrixTagPC11RwMatrixTagPCfPCUiUi")

// func_800C88C4
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUliPC5xVec3")

// func_800C89D0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "SkinNormals__FP5xVec3PC5xVec3PC11RwMatrixTagPC11RwMatrixTagPCfPCUiUi")

// func_800C8C48
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagUserData__FP9xModelTagP8RpAtomicfffi")

// func_800C8DE4
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "__as__9xModelTagFRC9xModelTag")

// func_800C8E28
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagInternal__FP9xModelTagP8RpAtomicfffi")

// func_800C8FC8
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagSetup__FP9xModelTagP8RpAtomicfff")

// func_800C8FEC
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagSetup__FP19xModelTagWithNormalP8RpAtomicfff")

// func_800C904C
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3")

// func_800C90E0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3")

// func_800C9188
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialAlphaCB__FP10RpMaterialPv")

// func_800C91EC
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialAlpha__FP8RpAtomicUc")

// func_800C9264
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelResetMaterialCB__FP10RpMaterialPv")

// func_800C9370
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelResetMaterial__FP8RpAtomic")

// func_800C93C4
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialTextureCB__FP10RpMaterialPv")

// func_800C9414
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialTexture__FP8RpAtomicPv")

// func_800C947C
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelMaterialMulCB__FP10RpMaterialPv")

// func_800C9570
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "U8_COLOR_CLAMP__20_esc__2_unnamed_esc__2_iModel_cpp_esc__2_FRUcf")

// func_800C95B0
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelMaterialMul__FP8RpAtomicfff")
