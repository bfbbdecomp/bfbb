#include "iModel.h"

#include <types.h>

// GetChildFrameHierarchy(RwFrame*,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "GetChildFrameHierarchy__FP7RwFramePv")

// GetHierarchy(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "GetHierarchy__FP8RpAtomic")

// iModelInit()
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelInit__Fv")

// iModelStreamRead(RwStream*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelStreamRead__FP8RwStream")

// iModelFileNew(void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelFileNew__FPvUi")

// iModelUnload(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelUnload__FP8RpAtomic")

// iModelFile_RWMultiAtomic(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelFile_RWMultiAtomic__FP8RpAtomic")

// iModelNumBones(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelNumBones__FP8RpAtomic")

// iModelQuatToMat(xQuat*,xVec3*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelQuatToMat__FP5xQuatP5xVec3P11RwMatrixTag")

// iModelAnimMatrices(RpAtomic*,xQuat*,xVec3*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag")

// iModelCacheAtomic(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCacheAtomic__FP8RpAtomic")

// iModelRender(RpAtomic*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelRender__FP8RpAtomicP11RwMatrixTag")

// iModelCull(RpAtomic*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCull__FP8RpAtomicP11RwMatrixTag")

// iModelSphereCull(xSphere*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSphereCull__FP7xSphere")

// iModelCullPlusShadow(RpAtomic*,RwMatrixTag*,xVec3*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelCullPlusShadow__FP8RpAtomicP11RwMatrixTagP5xVec3Pi")

// iModelVertCount(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelVertCount__FP8RpAtomic")

// iModelVertEval(RpAtomic*,unsigned int,unsigned int,RwMatrixTag*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3")

// SkinXform(xVec3*,const xVec3*,RwMatrixTag*,const RwMatrixTag*,const float*,const unsigned int*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "SkinXform__FP5xVec3PC5xVec3P11RwMatrixTagPC11RwMatrixTagPCfPCUiUi")

// iModelNormalEval(xVec3*,const RpAtomic&,const RwMatrixTag*,unsigned long,int,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUliPC5xVec3")

// SkinNormals(xVec3*,const xVec3*,const RwMatrixTag*,const RwMatrixTag*,const float*,const unsigned int*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "SkinNormals__FP5xVec3PC5xVec3PC11RwMatrixTagPC11RwMatrixTagPCfPCUiUi")

// iModelTagUserData(xModelTag*,RpAtomic*,float,float,float,int)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagUserData__FP9xModelTagP8RpAtomicfffi")

// xModelTag::operator =(const xModelTag&)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "__as__9xModelTagFRC9xModelTag")

// iModelTagInternal(xModelTag*,RpAtomic*,float,float,float,int)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagInternal__FP9xModelTagP8RpAtomicfffi")

// iModelTagSetup(xModelTag*,RpAtomic*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagSetup__FP9xModelTagP8RpAtomicfff")

// iModelTagSetup(xModelTagWithNormal*,RpAtomic*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagSetup__FP19xModelTagWithNormalP8RpAtomicfff")

// iModelTagEval(RpAtomic*,const xModelTag*,RwMatrixTag*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3")

// iModelTagEval(RpAtomic*,const xModelTagWithNormal*,RwMatrixTag*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3")

// iModelSetMaterialAlpha(RpAtomic*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialAlpha__FP8RpAtomicUc")

// iModelResetMaterial(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelResetMaterial__FP8RpAtomic")

// iModelSetMaterialTexture(RpAtomic*,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelSetMaterialTexture__FP8RpAtomicPv")

#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "U8_COLOR_CLAMP__20_esc__2_unnamed_esc__2_iModel_cpp_esc__2_FRUcf")

// iModelMaterialMul(RpAtomic*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iModel.s", "iModelMaterialMul__FP8RpAtomicfff")
