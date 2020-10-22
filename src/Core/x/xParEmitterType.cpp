#include "xParEmitterType.h"

#include <types.h>

// xParEmitterEmitPoint(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf")

// xParEmitterAngleVariation(xPar*,xParEmitterAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterAngleVariation__FP4xParP16xParEmitterAsset")

// xParEmitterEmitCircleEdge(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitCircle(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitRect(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitRect__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitRectEdge(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitLine(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitLine__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitSphere(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitSphereEdge(xPar*,xParEmitterAsset*,float,int)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi")

// xParEmitterEmitVolume(xPar*,xParEmitterAsset*,float,xVolume*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume")

// xParEmitterEmitEntity(xPar*,xParEmitterAsset*,float,xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt")

// xParEmitterEmitOffsetPoint(xParEmitter*,xPar*,xParEmitterAsset*,float,xEnt *)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt")

// xParEmitterEmitVCylEdge(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf")

// xParEmitterEmitOCircleEdge(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf")

#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "ocircle_emit__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FR4xParR16xParEmitterAssetff")

// xParEmitterEmitOCircle(xPar*,xParEmitterAsset*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitOCircle__FP4xParP16xParEmitterAssetf")

// xParEmitterTransformEntBone(xVec3&,xVec3&,const xParEmitterAsset&,const xEnt&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "transform_ent_bone__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3")

// xParEmitterTransformEntBone(xVec3&,xVec3&,const xParEmitterAsset&,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3")

// xParEmitterEmitEntBone(xPar*,xParEmitterAsset*,float,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3")

#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "get_random_offset__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FRC10xPEEntBoneRC7xMat4x3")

// xParEmitterEmitEntBound(xPar*,xParEmitterAsset*,float,const xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "get_random_offset__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FRC6xBoundfUi")

// xVec3::operator *(const xVec3&) const
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__ml__5xVec3CFRC5xVec3")

// xVec3::operator *=(const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__amu__5xVec3FRC5xVec3")

// xVec3::operator +(float) const
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__pl__5xVec3CFf")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
