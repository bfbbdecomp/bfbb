#include "zCamera.h"

#include <types.h>

// func_8004FBFC
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")

// func_8004FCF4
#pragma GLOBAL_ASM("asm/Game/zCamera.s",                                                           \
                   "GetCurrentPitch__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FD28
#pragma GLOBAL_ASM("asm/Game/zCamera.s",                                                           \
                   "GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FD54
#pragma GLOBAL_ASM("asm/Game/zCamera.s",                                                           \
                   "_GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FD9C
#pragma GLOBAL_ASM("asm/Game/zCamera.s",                                                           \
                   "GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FDC8
#pragma GLOBAL_ASM("asm/Game/zCamera.s",                                                           \
                   "_GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FE10
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "EaseInOut__Ff")

// func_8004FE2C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraConversUpdate__FP7xCameraf")

// func_8004FFA8
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "TranSpeed__FP7zFlyKey")

// func_8004FFDC
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "MatrixSpeed__FP7zFlyKey")

// func_800500B0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyUpdate__FP7xCameraf")

// func_8005043C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7zFlyKeyFRC7zFlyKey")

// func_800504C0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyStart__FUi")

// func_80050560
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7xCameraFRC7xCamera")

// func_80050904
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyRestoreBackup__FP7xCamera")

// func_80050BB4
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraRewardUpdate__FP7xCameraf")

// func_80050E5C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff")

// func_8005115C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraUpdate__FP7xCameraf")

// func_80052090
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetBbounce__Fi")

// func_80052098
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLongbounce__Fi")

// func_800520C8
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetHighbounce__Fi")

// func_800520F8
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetPlayerVel__FP5xVec3")

// func_80052100
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableTracking__F17camera_owner_enum")

// func_80052110
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableTracking__F17camera_owner_enum")

// func_80052120
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraIsTrackingDisabled__Fv")

// func_80052128
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableInput__Fv")

// func_80052134
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableInput__Fv")

// func_80052140
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableLassoCam__Fv")

// func_8005214C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableLassoCam__Fv")

// func_80052158
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLassoCamFactor__Ff")

// func_80052160
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraGetLassoCamFactor__Fv")

// func_80052168
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraGetConvers__Fv")

// func_80052170
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetConvers__Fi")

// func_8005224C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDoTrans__FP9xCamAssetf")

// func_80052344
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraTranslate__FP7xCamerafff")

// func_80052390
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableWallJump__FP7xCameraRC5xVec3")

// func_80052438
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableWallJump__FP7xCamera")

// func_80052450
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetReward__Fi")

// func_80052494
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraMinTargetHeightSet__Ff")

// func_8005249C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraMinTargetHeightClear__Fv")

// func_800524A8
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCamera_FlyOnly__Fv")

// func_80052524
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "xVec3Dist2__FPC5xVec3PC5xVec3")
