#include "zBusStop.h"

#include <types.h>

// zBusStop_Init(xBase&,xDynAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Game/zBusStop.s", "zBusStop_Init__FR5xBaseR9xDynAssetUl")

// zBusStop_Init(zBusStop*,busstop_asset*)
#pragma GLOBAL_ASM("asm/Game/zBusStop.s", "zBusStop_Init__FP8zBusStopP13busstop_asset")

// zBusStop_Setup(zBusStop*)
#pragma GLOBAL_ASM("asm/Game/zBusStop.s", "zBusStop_Setup__FP8zBusStop")

// zBusStop_Update(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zBusStop.s", "zBusStop_Update__FP5xBaseP6xScenef")
