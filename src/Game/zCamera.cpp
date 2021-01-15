#include "zCamera.h"

#include <types.h>

#include "zCameraTweak.h"
#include "../Core/p2/iMath.h"
#include "../Core/x/xMathInlines.h"
#include "../Core/x/xVec3Inlines.h"

enum WallJumpViewState
{
	WJVS_DISABLED,
	WJVS_DISABLING,
	WJVS_ENABLED,
	WJVS_ENABLING
};

struct zFlyKey
{
	int32 frame;
	float32 matrix[12];
	float32 aperture[2];
	float32 focal;
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

extern float32 zCamera_f_75_0; // 75.0
extern float32 zCamera_f_0_0; // 0.0
extern float32 zCamera_f_n1_0_e38; // -1e38 ~ neg infinity
extern float32 zCamera_f_1_0; // 1.0
extern float32 zCamera_f_0_5; // 0.5
extern float32 zCamera_f_2_0; // 2.0
extern float32 zCamera_f_1_5; // 1.5
extern float32 zCamera_f_30_0; // 30.0
extern float32 zCamera_f_114_592; // 114.592

// func_8004FBFC
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")
#else
void zCameraReset(xCamera* cam)
{
    zcam_mode = 0;
    zcam_bbounce = 0;
    zcam_lbbounce = 0;
    zcam_lconvers = 0;
    zcam_longbounce = 0;
    zcam_highbounce = 0;
    zcam_convers = 0;
    zcam_fly = 0;
    zcam_flypaused = 0;
    zcam_cutscene = 0;
    zcam_reward = 0;
    zcam_fovcurr = zCamera_f_75_0;
    zcam_overrot_tmr = zCamera_f_0_0;

    wall_jump_enabled = WJVS_DISABLED;
    lassocam_enabled = false;
    stop_track = 0;
    zcam_mintgtheight = zCamera_f_n1_0_e38; 

    xCameraSetFOV(cam, zCamera_f_75_0);
    zCameraTweakGlobal_Update(zCamera_f_0_0);
    xCameraReset(cam, GetCurrentD(), GetCurrentH(), GetCurrentPitch());

    input_enabled = true;
    dMultiplier = zCamera_f_1_0;
    dOffset = zCamera_f_0_0;
    hMultiplier = zCamera_f_1_0;
    hOffset = zCamera_f_0_0;
}
#endif

float32 GetCurrentPitch()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_pitch;
    }

    return zCameraTweakGlobal_GetPitch();
}

float32 GetCurrentH()
{
    return dMultiplier * _GetCurrentH() + dOffset;
}

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

float32 GetCurrentD()
{
    return dMultiplier * _GetCurrentD() + dOffset;
}

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

float32 EaseInOut(float32 param)
{
    // using shorter symbols the return expression below reads:
    // p (p (b - cp) + a) <=> ap + bp^2 - cp^3
    // to which wolframalpha associates the geometric figure 'line'
    return param * (param * (zCamera_f_2_0 - zCamera_f_1_5 * param) + zCamera_f_0_5);
}

// func_8004FE2C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraConversUpdate__FP7xCameraf")

float32 TranSpeed(zFlyKey keys[])
{
    return zCamera_f_30_0 * xVec3Dist((xVec3*) &keys[0].matrix[9], (xVec3*) &keys[1].matrix[9]);
}

// func_8004FFDC
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "MatrixSpeed__FP7zFlyKey")
#else
float32 MatrixSpeed(zFlyKey keys[])
{
    float32 dot1 = iabs(xVec3Dot((xVec3*) &keys[0].matrix[0], (xVec3*) &keys[1].matrix[0]));
    float32 dot2 = iabs(xVec3Dot((xVec3*) &keys[0].matrix[3], (xVec3*) &keys[1].matrix[3]));

    // dot1 = max(dot1, dot2)
    if (dot2 > dot1)
    {
        dot1 = iabs(xVec3Dot((xVec3*) &keys[0].matrix[3], (xVec3*) &keys[1].matrix[3]));
    }

    dot2 = iabs(xVec3Dot((xVec3*) &keys[0].matrix[6], (xVec3*) &keys[1].matrix[6]));

    // dot1 = max(dot1, dot2)
    if (dot2 > dot1)
    {
        dot1 = iabs(xVec3Dot((xVec3*) &keys[0].matrix[6], (xVec3*) &keys[1].matrix[6]));
    }

    // m = max(1.0, dot1)
    float32 m = zCamera_f_1_0 < dot1 ? zCamera_f_1_0 : dot1;
    return xacos(m) * zCamera_f_114_592 * zCamera_f_30_0;
}
#endif

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

void zCameraSetBbounce(int32 bbouncing)
{
    zcam_bbounce = bbouncing;
}

// func_80052098
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLongbounce__Fi")
#else
void zCameraSetLongbounce(int32 lbounce)
{
    if (zcam_highbounce != 0 || zcam_longbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }
    
    zcam_longbounce = lbounce;
    // li r0 happens too early
    zcam_highbounce = 0;
}
#endif

// func_800520C8
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetHighbounce__Fi")
#else
void zCameraSetHighbounce(int32 lbounce)
{
    if (zcam_longbounce != 0 || zcam_highbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }
    
    zcam_highbounce = lbounce;
    // li r0 happens too early
    zcam_longbounce = 0;
}
#endif

void zCameraSetPlayerVel(xVec3* vel)
{
    zcam_playervel = vel;
}

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
