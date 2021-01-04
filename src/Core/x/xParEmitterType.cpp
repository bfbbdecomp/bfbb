#include "xParEmitterType.h"

#include <types.h>

// func_80118A04
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf")

// func_80118A68
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterAngleVariation__FP4xParP16xParEmitterAsset")

// func_80118B90
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf")

// func_80118D20
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf")

// func_80118EC0
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitRect__FP4xParP16xParEmitterAssetf")

// func_80118F6C
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf")

// func_8011904C
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitLine__FP4xParP16xParEmitterAssetf")

// func_801191FC
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf")

// func_80119334
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi")

// func_80119530
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume")

// func_80119618
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt")

// func_80119738
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt")

// func_801197C0
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf")

// func_801198CC
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf")

// func_801198F0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xParEmitterType.s",                                                                \
    "ocircle_emit__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FR4xParR16xParEmitterAssetff")

// func_80119A48
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitOCircle__FP4xParP16xParEmitterAssetf")

// func_80119AB4
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC4xEnt")

// func_80119B50
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xParEmitterType.s",                                                                \
    "transform_ent_bone__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3")

// func_80119C74
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3")

// func_80119C94
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3")

// func_80119D5C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xParEmitterType.s",                                                                \
    "get_random_offset__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FRC10xPEEntBoneRC7xMat4x3")

// func_8011A1E8
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s",                                                 \
                   "xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt")

// func_8011A300
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xParEmitterType.s",                                                                \
    "get_random_offset__29_esc__2_unnamed_esc__2_xParEmitterType_cpp_esc__2_FRC6xBoundfUi")

// func_8011A7E4
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__ml__5xVec3CFRC5xVec3")

// func_8011A848
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__amu__5xVec3FRC5xVec3")

// func_8011A87C
#pragma GLOBAL_ASM("asm/Core/x/xParEmitterType.s", "__pl__5xVec3CFf")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
