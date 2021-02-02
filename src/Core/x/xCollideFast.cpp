#include "xCollideFast.h"
#include "iCollideFast.h"

#include <types.h>

// func_800159D4
void xCollideFastInit(xScene* sc)
{
    iCollideFastInit(sc);
}

//#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xCollideFastInit__FP6xScene")

// func_800159F4
#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xRayHitsSphereFast__FPC5xRay3PC7xSphere")

// func_80015ADC
#pragma GLOBAL_ASM("asm/Core/x/xCollideFast.s", "xRayHitsBoxFast__FPC5xRay3PC4xBox")
