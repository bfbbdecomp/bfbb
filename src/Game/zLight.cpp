#include "zLight.h"

#include <types.h>

// func_8009E02C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")
// void zLightResetAll__FP4xEnv(undefined4 param_1)
// void zLightResetAll(xEnv* env)

// {
//   memset(sLight,0,0x80);
//   sLightTotal = 0;
//   if (sPartitionVolume == 0) {
//     xPartitionWorld__FP13_tagPartitionP4xEnviii(sLightPart,env,10,1,10);
//   }
//   else {
//     xPartitionVolume__FP13_tagPartitionP7xVolumeiii(sLightPart,sPartitionVolume,10,1,10);
//   }
//   xPartitionDump__FP13_tagPartitionPc(sLightPart,"Lighting");
//   return;
// }

// func_8009E0C8
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FPvPv")
void zLightInit(void* b, void* tasset)

{
  zLightInit(b, tasset);
}


// func_8009E0E8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FP5xBaseP11zLightAsset")
// void zLightInit(xBase* b, zLightAsset* tasset)
// {

// }

// func_8009E2A8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResolveLinks__Fv")

// func_8009E330
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroyAll__Fv")

// func_8009E3A4
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroy__FP7_zLight")

// func_8009E3C8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightReset__FP7_zLight")

// func_8009E42C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSave__FP7_zLightP7xSerial")

// func_8009E44C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightLoad__FP7_zLightP7xSerial")

// func_8009E46C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8009E4D8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightUpdate__FP5xBaseP6xScenef")

// func_8009E5B8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocalEnv__Fv")

// func_8009E6AC
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocal__FP4xEnt")

// func_8009E75C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightRemoveLocalEnv__Fv")

// func_8009E7A0
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSetVolume__FP7zVolume")
