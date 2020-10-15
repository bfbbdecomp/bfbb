#include "zEntButton.h"

#include <types.h>

// zEntButton_Init(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Init__FPvPv")

// zEntButton_Init(_zEntButton*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Init__FP11_zEntButtonP9xEntAsset")

// zEntButton_Setup(_zEntButton*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Setup__FP11_zEntButtonP6xScene")

// zEntButton_Save(_zEntButton*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Save__FP11_zEntButtonP7xSerial")

// zEntButton_Load(_zEntButton*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Load__FP11_zEntButtonP7xSerial")

// zEntButton_Reset(_zEntButton*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Reset__FP11_zEntButtonP6xScene")

// zEntButton_SetReady(_zEntButton*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_SetReady__FP11_zEntButton")

// zEntButton_Press(_zEntButton*)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Press__FP11_zEntButton")

// _PressButtonSound(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "_PressButtonSound__FUi")

// zEntButton_Press(_zEntButton*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Press__FP11_zEntButtonUi")

// zEntButton_Hold(_zEntButton*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_Hold__FP11_zEntButtonUi")

// zEntButton_SceneUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zEntButton.s", "zEntButton_SceneUpdate__Ff")
