#include "zCombo.h"

#include <types.h>

// fillCombo(zComboReward*)
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "fillCombo__FP12zComboReward")

// zCombo_Setup()
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Setup__Fv")

// zCombo_Add(int)
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Add__Fi")

// zCombo_HideImmediately()
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_HideImmediately__Fv")

// zCombo_Update(float)
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Update__Ff")

// ztextbox::visible()
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "visible__8ztextboxFv")
