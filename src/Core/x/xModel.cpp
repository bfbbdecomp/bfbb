#include "xModel.h"

#include <types.h>

// xModelGetPipeFlags(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelGetPipeFlags__FP8RpAtomic")

// xModelInit()
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelInit__Fv")

// xModelPoolInit(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelPoolInit__FUiUi")

// xModelInstanceAlloc(RpAtomic*,void*,unsigned short,unsigned char,unsigned char*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc")

// FindChild(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "FindChild__FP14xModelInstance")

// xModelInstanceFree(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelInstanceFree__FP14xModelInstance")

// xModelInstanceAttach(xModelInstance*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelInstanceAttach__FP14xModelInstanceP14xModelInstance")

// xModelInstanceUpgradeBrotherShared(xModelInstance*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi")

// xModelUpdate(xModelInstance*,float)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelUpdate__FP14xModelInstancef")

// xModelEvalSingle(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelEvalSingle__FP14xModelInstance")

// xModelEval(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelEval__FP14xModelInstance")

// xModelRenderSingle(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelRenderSingle__FP14xModelInstance")

// xModelRender(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelRender__FP14xModelInstance")

// RwMatrixTag::operator =(const RwMatrixTag&)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "__as__11RwMatrixTagFRC11RwMatrixTag")

#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelRender2D__FRC14xModelInstanceRC13basic_rect_esc__0_f_esc__1_RC5xVec3RC5xVec3")

// CameraCreate(int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "CameraCreate__Fiii")

// CameraDestroy(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "CameraDestroy__FP8RwCamera")

// xModelSetMaterialAlpha(xModelInstance*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelSetMaterialAlpha__FP14xModelInstanceUc")

// xModelMaterialMul(xModelInstance*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelMaterialMul__FP14xModelInstancefff")

// xModelResetMaterial(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelResetMaterial__FP14xModelInstance")

// xModel_SceneEnter(RpWorld*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModel_SceneEnter__FP7RpWorld")

// xModel_SceneExit(RpWorld*)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModel_SceneExit__FP7RpWorld")

// xModelAnimCollStart(xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelAnimCollStart__FR14xModelInstance")

// xModelAnimCollRefresh(const xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelAnimCollRefresh__FRC14xModelInstance")

// xModelGetBoneLocation(const xModelInstance&,unsigned long)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelGetBoneLocation__FRC14xModelInstanceUl")

// xModelGetBoneMat(xMat4x3&,const xModelInstance&,unsigned long)
#pragma GLOBAL_ASM("asm/Core/x/xModel.s", "xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUl")
