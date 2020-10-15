#include "xCollideFast.h"

#include <types.h>

// xCollideFastInit(xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xCollideFastInit__FP6xScene")

// xRayHitsSphereFast(const xRay3*,const xSphere*)
#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xRayHitsSphereFast__FPC5xRay3PC7xSphere")

// xRayHitsBoxFast(const xRay3*,const xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xRayHitsBoxFast__FPC5xRay3PC4xBox")
