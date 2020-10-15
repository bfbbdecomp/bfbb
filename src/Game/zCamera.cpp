#include "zCamera.h"

#include <types.h>

// zCameraReset(xCamera*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")

#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentPitch__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zCamera.s", "_GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zCamera.s", "_GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// EaseInOut(float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "EaseInOut__Ff")

// zCameraConversUpdate(xCamera*,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraConversUpdate__FP7xCameraf")

// TranSpeed(zFlyKey*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "TranSpeed__FP7zFlyKey")

// MatrixSpeed(zFlyKey*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "MatrixSpeed__FP7zFlyKey")

// zCameraFlyUpdate(xCamera*,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyUpdate__FP7xCameraf")

// zFlyKey::operator =(const zFlyKey&)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7zFlyKeyFRC7zFlyKey")

// zCameraFlyStart(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyStart__FUi")

// xCamera::operator =(const xCamera&)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7xCameraFRC7xCamera")

// zCameraFlyRestoreBackup(xCamera*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyRestoreBackup__FP7xCamera")

// zCameraRewardUpdate(xCamera*,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraRewardUpdate__FP7xCameraf")

// zCameraFreeLookSetGoals(xCamera*,float,float&,float&,float&,float&,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff")

// zCameraUpdate(xCamera*,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraUpdate__FP7xCameraf")

// zCameraSetBbounce(int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetBbounce__Fi")

// zCameraSetLongbounce(int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLongbounce__Fi")

// zCameraSetHighbounce(int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetHighbounce__Fi")

// zCameraSetPlayerVel(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetPlayerVel__FP5xVec3")

// zCameraDisableTracking(camera_owner_enum)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableTracking__F17camera_owner_enum")

// zCameraEnableTracking(camera_owner_enum)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableTracking__F17camera_owner_enum")

// zCameraIsTrackingDisabled()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraIsTrackingDisabled__Fv")

// zCameraDisableInput()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableInput__Fv")

// zCameraEnableInput()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableInput__Fv")

// zCameraDisableLassoCam()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableLassoCam__Fv")

// zCameraEnableLassoCam()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableLassoCam__Fv")

// zCameraSetLassoCamFactor(float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLassoCamFactor__Ff")

// zCameraGetLassoCamFactor()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraGetLassoCamFactor__Fv")

// zCameraGetConvers()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraGetConvers__Fv")

// zCameraSetConvers(int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetConvers__Fi")

// zCameraDoTrans(xCamAsset*,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDoTrans__FP9xCamAssetf")

// zCameraTranslate(xCamera*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraTranslate__FP7xCamerafff")

// zCameraEnableWallJump(xCamera*,const xVec3&)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableWallJump__FP7xCameraRC5xVec3")

// zCameraDisableWallJump(xCamera*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDisableWallJump__FP7xCamera")

// zCameraSetReward(int)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetReward__Fi")

// zCameraMinTargetHeightSet(float)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraMinTargetHeightSet__Ff")

// zCameraMinTargetHeightClear()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraMinTargetHeightClear__Fv")

// zCamera_FlyOnly()
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCamera_FlyOnly__Fv")

// xVec3Dist2(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "xVec3Dist2__FPC5xVec3PC5xVec3")
