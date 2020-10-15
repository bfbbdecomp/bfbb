#include "zGameExtras.h"

#include <types.h>

// zGameExtras_ExtrasFlags()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_ExtrasFlags__Fv")

// zGameExtras_MoDay(int*,int*)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_MoDay__FPiPi")

// zGameExtras_SceneInit()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneInit__Fv")

// zGameExtras_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneReset__Fv")

// zGameExtras_SceneExit()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneExit__Fv")

// zGameExtras_SceneUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneUpdate__Ff")

// zGameExtras_CheatFlags()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_CheatFlags__Fv")

// zGameExtras_NewGameReset()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_NewGameReset__Fv")

// zGameExtras_Save(xSerial*)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_Save__FP7xSerial")

// zGameExtras_Load(xSerial*)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_Load__FP7xSerial")

// TestCheat(unsigned int*)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "TestCheat__FPUi")

// AddToCheatPressed(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "AddToCheatPressed__FUi")

// zGameCheats(float)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameCheats__Ff")

// GEC_CheatFlagAdd(int)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_CheatFlagAdd__Fi")

// GEC_CheatFlagToggle(int)
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_CheatFlagToggle__Fi")

// GEC_dfltSound()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_dfltSound__Fv")

// GEC_villSound()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_villSound__Fv")

// zGame_HackGalleryInit()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackGalleryInit__Fv")

// zGame_HackIsGallery()
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackIsGallery__Fv")

#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf")
