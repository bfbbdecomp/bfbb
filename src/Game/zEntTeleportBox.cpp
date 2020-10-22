#include "zEntTeleportBox.h"

#include <types.h>

// VecFromAngle(float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "VecFromAngle__FfP5xVec3")

// zEntTeleportBox_Init(_zEntTeleportBox*,teleport_asset*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset")

// zEntTeleportBox_InitAll()
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_InitAll__Fv")

// zEntTeleportBox_Setup(_zEntTeleportBox*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Setup__FP16_zEntTeleportBox")

// zEntTeleportBox_Save(_zEntTeleportBox*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial")

// zEntTeleportBox_Load(_zEntTeleportBox*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial")

// zEntTeleportBox_Open(_zEntTeleportBox*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Open__FP16_zEntTeleportBox")

// zEntTeleportBox_Close(_zEntTeleportBox*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Close__FP16_zEntTeleportBox")

// zEntTeleportBox_isOpen(_zEntTeleportBox*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_isOpen__FP16_zEntTeleportBox")

// zEntTeleportBox_isClosed(_zEntTeleportBox*)
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_isClosed__FP16_zEntTeleportBox")

// zEntTeleportBox_playerIn()
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_playerIn__Fv")
