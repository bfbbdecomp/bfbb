#include "xClimate.h"

#include <types.h>

// xClimateVecFromAngle(float,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateVecFromAngle__FfP5xVec3")

// xClimateInit(_tagClimate*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateInit__FP11_tagClimate")

// xClimateInitAsset(_tagClimate*,xEnvAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateInitAsset__FP11_tagClimateP9xEnvAsset")

// xClimateSetSnow(float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateSetSnow__Ff")

// xClimateSetRain(float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateSetRain__Ff")

// GetPosBigDogWhattupFool(xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "GetPosBigDogWhattupFool__FP5xVec3")

// UpdateRain(_tagClimate*,float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "UpdateRain__FP11_tagClimatef")

// UpdateWind(_tagClimate*,float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "UpdateWind__FP11_tagClimatef")

// xClimateUpdate(_tagClimate*,float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateUpdate__FP11_tagClimatef")

// xVec3Init(xVec3*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xVec3Init__FP5xVec3fff")

// xMat3x3Identity(xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xMat3x3Identity__FP7xMat3x3")

// xMat3x3Copy(xMat3x3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xMat3x3Copy__FP7xMat3x3PC7xMat3x3")
