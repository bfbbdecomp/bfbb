#include "zCamera.h"

#include <types.h>

#include "zCameraTweak.h"

enum WallJumpViewState
{
	WJVS_DISABLED,
	WJVS_DISABLING,
	WJVS_ENABLED,
	WJVS_ENABLING
};

// extern int8 buffer[16];
// extern int8 buffer[16];
// extern basic_rect screen_bounds;
// extern basic_rect default_adjust;
extern float32 zcam_pad_pyaw_scale;
extern float32 zcam_pad_pitch_scale;
extern float32 zcam_near_d;
extern float32 zcam_near_h;
extern float32 zcam_near_pitch;
extern float32 zcam_far_d;
extern float32 zcam_far_h;
extern float32 zcam_far_pitch;
extern float32 zcam_wall_d;
extern float32 zcam_wall_h;
extern float32 zcam_wall_pitch;
extern float32 zcam_above_d;
extern float32 zcam_above_h;
extern float32 zcam_above_pitch;
extern float32 zcam_below_d;
extern float32 zcam_below_h;
extern float32 zcam_below_pitch;
extern float32 zcam_highbounce_d;
extern float32 zcam_highbounce_h;
extern float32 zcam_highbounce_pitch;
extern float32 zcam_overrot_min;
extern float32 zcam_overrot_mid;
extern float32 zcam_overrot_max;
extern float32 zcam_overrot_rate;
extern float32 zcam_overrot_tstart;
extern float32 zcam_overrot_tend;
extern float32 zcam_overrot_velmin;
extern float32 zcam_overrot_velmax;
extern float32 zcam_overrot_tmanual;
extern float32 zcam_overrot_tmr;
extern xCamera zcam_backupcam;
extern xCamera zcam_backupconvers;
extern int32 zcam_near;
extern int32 zcam_mode;
extern int32 zcam_bbounce;
extern int32 zcam_lbbounce;
extern int32 zcam_convers;
extern int32 zcam_lconvers;
extern int32 zcam_longbounce;
extern int32 zcam_highbounce;
extern int32 zcam_cutscene;
extern int32 zcam_reward;
extern xVec3* zcam_playervel;
extern float32 zcam_mintgtheight;
extern int32 zcam_fly;
extern int32 zcam_flypaused;
extern void* zcam_flydata;
extern uint32 zcam_flysize;
extern float32 zcam_flytime;
extern uint32 zcam_flyasset_current;
extern xCamAsset* zcam_dest;
extern xQuat zcam_quat;
extern float32 zcam_tmr;
extern float32 zcam_ttm;
extern float32 zcam_fovcurr;
extern float32 zcam_fovdest;
extern uint32 stop_track;
extern uint8 input_enabled;
extern uint8 lassocam_enabled;
extern float32 lassocam_factor;
extern WallJumpViewState wall_jump_enabled;
extern xVec3 wall_jump_view;
extern float32 dMultiplier;
extern float32 dOffset;
extern float32 hMultiplier;
extern float32 hOffset;
extern float32 rewardMove;
extern float32 rewardMoveSpeed;
extern float32 rewardZoomSpeed;
extern float32 rewardZoomAmount;
extern float32 rewardTiltTime;
extern float32 rewardTiltAmount;
// extern zGlobals globals;
extern xVec3 g_O3;
extern float32 gSkipTimeFlythrough;

// func_8004FBFC
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")

// func_8004FCF4
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentPitch__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")

// func_8004FD28
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")
#else
float32 GetCurrentH()
{
    return dMultiplier * _GetCurrentH() + dOffset;
}
#endif

// func_8004FD54
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "_GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")
#else
float32 _GetCurrentH()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_h;
    }

    if (wall_jump_enabled == WJVS_ENABLED)
    {
        return zcam_wall_h;
    }

    return zCameraTweakGlobal_GetH();
    
}
#endif

// func_8004FD9C
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")
#else
float32 GetCurrentD()
{
    return dMultiplier * _GetCurrentD() + dOffset;
}
#endif

// func_8004FDC8
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "_GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv")
#else
float32 _GetCurrentD()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_d;
    }

    if (wall_jump_enabled == WJVS_ENABLED)
    {
        return zcam_wall_d;
    }

    return zCameraTweakGlobal_GetD();
}
#endif

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
