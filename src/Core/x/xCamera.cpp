#include "xCamera.h"

#include <types.h>

// func_8000B2B0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraInit__FP7xCameraUiUi")

// func_8000B364
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "add_camera_tweaks__Fv")

// func_8000B368
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraExit__FP7xCamera")

// func_8000B3A8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraReset__FP7xCamerafff")

// func_8000B56C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__7xMat4x3FRC7xMat4x3")

// func_8000B5C8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__7xMat3x3FRC7xMat3x3")

// func_8000B62C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_buildbasis__FP7xCamera")

// func_8000B7D0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_cyltoworld__FP5xVec3PC7xMat4x3fffUi")

// func_8000B8B4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_worldtocyl__FRfRfRfPC7xMat4x3PC5xVec3Ui")

// func_8000B9F0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectD__FP7xCamerafff")

// func_8000BA38
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectH__FP7xCamerafff")

// func_8000BA64
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectP__FP7xCamerafff")

// func_8000BAB4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_DampP__FP7xCameraff")

// func_8000BAF0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectYaw__FP7xCamerafff")

// func_8000BB34
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectPitch__FP7xCamerafff")

// func_8000BB78
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectRoll__FP7xCamerafff")

// func_8000BBBC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s",                                                         \
                   "SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv")

// func_8000BE28
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "_xCameraUpdate__FP7xCameraf")

// func_8000BE28
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraUpdate__FP7xCameraf")

// func_8000CCD0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "ceilf__3stdFf")

// func_8000CCF4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraBegin__FP7xCamerai")

// func_8000CD40
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXBegin__FP7xCamera")

// func_8000CD84
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXInit__Fv")

// func_8000CDE8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXAlloc__Fv")

// func_8000CE30
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3")

// func_8000CF64
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXShake__FfffffP5xVec3P5xVec3")

// func_8000D074
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXShakeUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3")

// func_8000D29C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXUpdate__FP7xCameraf")

// func_8000D3C4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXEnd__FP7xCamera")

// func_8000D40C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraEnd__FP7xCamerafi")

// func_8000D44C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraShowRaster__FP7xCamera")

// func_8000D470
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraSetScene__FP7xCameraP6xScene")

// func_8000D4A0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__6xBoundFRC6xBound")

// func_8000D580
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraSetTargetMatrix__FP7xCameraP7xMat4x3")

// func_8000D588
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraSetTargetOMatrix__FP7xCameraP7xMat4x3")

// func_8000D590
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraDoCollisions__Fii")

// func_8000D5D0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraMove__FP7xCameraUiffffff")

// func_8000D718
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraMove__FP7xCameraRC5xVec3")

// func_8000D770
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraMove__FP7xCameraRC5xVec3f")

// func_8000D82C
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFOV__FP7xCamerafff")

// func_8000D8DC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraLook__FP7xCameraUiPC5xQuatfff")

// func_8000D9EC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraLookYPR__FP7xCameraUiffffff")

// func_8000DB14
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraRotate__FP7xCameraRC7xMat3x3fff")

// func_8000DC38
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraRotate__FP7xCameraRC5xVec3ffff")

// func_8000DD78
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xasin__Ff")

// func_8000DD98
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "asinf__3stdFf")

// func_8000DDBC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "bound_sphere_xz__FR5xVec3R5xVec3RC5xVec3fRC5xVec3f")

// func_8000DEA0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "init__13xBinaryCameraFv")

// func_8000DEB4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "start__13xBinaryCameraFR7xCamera")

// func_8000DEF8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "stop__13xBinaryCameraFv")

// func_8000DF04
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "update__13xBinaryCameraFf")

// func_8000E490
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraSetFOV__FP7xCameraf")

// func_8000E4B8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraGetFOV__FPC7xCamera")

// func_8000E4C0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "render_debug__13xBinaryCameraFv")

// func_8000E4C4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xMat4x3Identity__FP7xMat4x3")

// func_8000E4EC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xMat4x3Copy__FP7xMat4x3PC7xMat4x3")

// func_8000E510
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xQuatConj__FP5xQuatPC5xQuat")

// func_8000E538
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xMat3x3LookAt__FP7xMat3x3PC5xVec3PC5xVec3")

// func_8000E580
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_8000E5E4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xQuatGetAngle__FPC5xQuat")

// func_8000E638
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xEntIsVisible__FPC4xEnt")

// func_8000E650
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xVec3Length__FPC5xVec3")

// func_8000E690
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xVec3Sub__FP5xVec3PC5xVec3PC5xVec3")

// func_8000E6C4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xVec3Inv__FP5xVec3PC5xVec3")

// func_8000E6EC
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__5xQuatFRC5xQuat")

// func_8000E710
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xacos__Ff")

// func_8000E730
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "acosf__3stdFf")

// func_8000E754
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xVec3AddTo__FP5xVec3PC5xVec3")

// func_8000E788
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "invert__5xVec3Fv")

// func_8000E7B0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xexp__Ff")

// func_8000E7D0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "expf__3stdFf")

// func_8000E7F4
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xrmod__Ff")

// func_8000E878
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__adv__5xVec3Ff")

// func_8000E8A8
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "right_normalize__5xVec3Fv")

// func_8000E8D0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "safe_normalize__5xVec3FRC5xVec3")

// func_8000E938
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "range_limit_esc__0_f_esc__1___Ffff")

// func_8000E960
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__5xVec2Ff")
