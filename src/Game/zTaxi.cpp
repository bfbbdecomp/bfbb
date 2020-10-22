#include "zTaxi.h"

#include <types.h>

// zTaxi_Init(xBase&,xDynAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Init__FR5xBaseR9xDynAssetUl")

// zTaxi_Init(zTaxi*,taxi_asset*)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Init__FP5zTaxiP10taxi_asset")

// taxiCB::taxiCB()
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "__ct__6taxiCBFv")

// zTaxi_Setup(zTaxi*)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Setup__FP5zTaxi")

// zTaxi_Update(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Update__FP5xBaseP6xScenef")

// zTaxi_tb_answer(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_tb_answer__FUi")

// zTaxi_Save(zTaxi*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Save__FP5zTaxiP7xSerial")

// zTaxi_Load(zTaxi*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Load__FP5zTaxiP7xSerial")
