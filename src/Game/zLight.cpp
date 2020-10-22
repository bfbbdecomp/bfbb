#include "zLight.h"

#include <types.h>

// zLightResetAll(xEnv*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")

// zLightInit(xBase*,zLightAsset*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FP5xBaseP11zLightAsset")

// zLightResolveLinks()
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResolveLinks__Fv")

// zLightDestroyAll()
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroyAll__Fv")

// zLightDestroy(_zLight*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroy__FP7_zLight")

// zLightReset(_zLight*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightReset__FP7_zLight")

// zLightSave(_zLight*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSave__FP7_zLightP7xSerial")

// zLightLoad(_zLight*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightLoad__FP7_zLightP7xSerial")

// zLightUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightUpdate__FP5xBaseP6xScenef")

// zLightAddLocalEnv()
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocalEnv__Fv")

// zLightAddLocal(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocal__FP4xEnt")

// zLightRemoveLocalEnv()
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightRemoveLocalEnv__Fv")

// zLightSetVolume(zVolume*)
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSetVolume__FP7zVolume")
