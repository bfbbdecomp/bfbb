#include "zLight.h"
#include "zLightEffect.h"

#include <types.h>

extern _zLight* sLight[32];
extern int32 sLightTotal;

// func_8009E02C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")
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
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FPvPv")
// void zLightInit(void* b, void* tasset)
// {
//   zLightInit(b, tasset);
// }


// func_8009E0E8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FP5xBaseP11zLightAsset")
// void zLightInit(xBase* b, zLightAsset* tasset)
// {
//   short bVar1;
// 	uint32 itype;
//   _zLight* t;
  
//   xBaseInit(b, tasset);
//   *(code **)(b + 12) = zLightEventCB(b, tasset);
//   *(int *)(param_1 + 0x14) = param_2;
//   if (*(char *)(param_1 + 5) == '\0') {
//     *(undefined4 *)(param_1 + 8) = 0;
//   }
//   else {
//     *(int *)(param_1 + 8) = *(int *)(param_1 + 0x14) + 0x44;
//   }
//   bVar1 = tasset + 8;
//   itype = 1;
//   if (bVar1 == 2) {
//     uVar3 = 1;
//   }
//   else {
//     if (bVar1 < 2) {
//       if (bVar1 == 0) {
//         t = 1;
//       }
//       else {
//         t = 2;
//       }
//     }
//     else {
//       if (t < 4) {
//         t = 1;
//       }
//     }
//   }
//   iVar2 = iLightCreate__FP6iLightUi(param_1 + 0x18,uVar3);
//   if (iVar2 != 0) {
//     iVar2 = sLightTotal * 4;
//     sLightTotal = sLightTotal + 1;
//     *(int *)(sLight + iVar2) = param_1;
//     *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
//     *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x34);
//     *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x38);
//     *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x3c);
//     *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x10);
//     *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x14);
//     *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x18);
//     *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x1c);
//     *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x2c);
//     *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
//     iLightModify__FP6iLightUi(param_1 + 0x18,0x1f);
//     *(undefined4 *)(param_1 + 0x10) = 0;
//     if ((*(uint *)(*(int *)(param_1 + 0x14) + 0xc) & 0x20) != 0) {
//       *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
//     }
//     if (*(char *)(*(int *)(param_1 + 0x14) + 9) == '\0') {
//       *(undefined4 *)(param_1 + 0x5c) = 0;
//     }
//     else {
//       uVar3 = xMemAlloc__FUiUii(gActiveHeap,0x20,0);
//       *(undefined4 *)(param_1 + 0x5c) = uVar3;
//       zLightEffectSet__FP7_zLighti(param_1,*(undefined *)(*(int *)(param_1 + 0x14) + 9));
//     }
//     uVar3 = xPartitionInsert__FP13_tagPartitionPvP5xVec3(sLightPart,param_1,param_1 + 0x20);
//     *(undefined4 *)(param_1 + 0x58) = uVar3;
//   }
//   return;
// }
// func_8009E2A8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResolveLinks__Fv")

// func_8009E330
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroyAll__Fv")
void zLightDestroyAll()
{
	int32 total = sLightTotal;

  for(int i = 0; i < total; i++, sLightTotal--) {
    zLightDestroy(sLight[i]);
  }
  sLightTotal = 0;
}

// func_8009E3A4
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroy__FP7_zLight")

// func_8009E3C8
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightReset__FP7_zLight")
// in zLight.h
void zLightReset(_zLight* param_1)
{
  xBaseReset(param_1, param_1->tasset);
  param_1->flags = 0;
  if (param_1->tasset->lightFlags & 0x20) {
    param_1->flags = param_1->flags | 1;
  }
  zLightEffectSet(param_1, param_1->tasset->lightEffect);
}

// func_8009E42C
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSave__FP7_zLightP7xSerial")
void zLightSave(_zLight* ent, xSerial* s)
{
  xBaseSave(ent, s);
}

// func_8009E44C
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightLoad__FP7_zLightP7xSerial")
void zLightLoad(_zLight* ent, xSerial* s)
{
  xBaseLoad(ent, s);
}

// func_8009E46C
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase")
int32 zLightEventCB(xBase* param_1, xBase* to, uint32 toEvent, const float* param_4, xBase* param_5)
{
  _zLight* t = (_zLight*) to;
  switch (toEvent) {
    case 38:
    {
      t->flags |= 1;
      break;
    }
    case 39:
    {
      t->flags &= 0xfffffffe;
      break;
    }
    case 10:
    {
      zLightReset(t);
      break;
    }
    default:
    {
      break;
    }
  }
  return 1;
}

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
