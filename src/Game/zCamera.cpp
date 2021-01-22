#include "zCamera.h"

#include <types.h>

#include "zCameraTweak.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMusic.h"
#include "../Core/p2/iMath.h"
#include "../Core/x/xMathInlines.h"
#include "../Core/x/xVec3Inlines.h"
#include "../Core/x/xScrFx.h"
#include "../Core/x/xstransvc.h"

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
extern zGlobals globals;
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
extern float32 zCamera_f_0_033; // 0.0333333
extern float32 zCamera_f_0_1; // 0.1
extern float32 zCamera_f_3_5; // 3.5
extern float32 zCamera_f_2_4; // 2.4
extern float32 zCamera_f_0_523; // 0.5235988
extern float32 zCamera_f_3_141; // 3.141593 ~ pi
extern float32 zCamera_f_20_0; // 20.0
extern float32 zCamera_f_180_0; // 180.0

// func_8004FBFC
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")
#else
void zCameraReset(xCamera* cam)
{
    // classic multiple float assign non match
    // float assigns should f0 everytime instead of f1, f2, ...
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
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraConversUpdate__FP7xCameraf")
#else
void zCameraConversUpdate(xCamera* cam, float32 dt)
{
    if (zcam_dest == NULL)
    {
        return;
    }

    // zcam_tmr should use f2 instead of f1
    if (zcam_tmr <= zCamera_f_0_0)
    {
        zcam_tmr = zCamera_f_0_0;
        return;
    }
    
    // zCamera_f_1_0 should use f1 instead of f2
    if ((dt / zcam_tmr) > zCamera_f_1_0)
    {
        cam->mat.right = zcam_dest->right;
        cam->mat.up = zcam_dest->up;
        cam->mat.at = zcam_dest->at;
        cam->mat.pos = zcam_dest->pos;

        zcam_fovcurr = zcam_fovdest;
    }
    else
    {
        float32 ease1 = EaseInOut(zCamera_f_1_0 - (zcam_tmr / zcam_ttm));
        float32 ease2 = EaseInOut(zCamera_f_1_0 - (zcam_tmr - dt) / zcam_ttm);
        float32 t = (ease2 - ease1) / (zCamera_f_1_0 - ease1);

        xQuat tOld;
        xQuat tNew;
        xQuatFromMat(&tOld, &cam->mat);
        xQuatSlerp(&tNew, &tOld, &zcam_quat, t);
        xQuatToMat(&tNew, &cam->mat);
        xVec3Lerp(&cam->mat.pos, &cam->mat.pos, &zcam_dest->pos, t);
        zcam_fovcurr = zcam_fovcurr * (zCamera_f_1_0 - t) + (zcam_fovdest * t);
    }

    zcam_tmr = zcam_tmr - dt;
}
#endif

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
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7zFlyKeyFRC7zFlyKey")
#else
zFlyKey& zFlyKey::operator=(const zFlyKey& other)
{
    this->frame = other.frame;
    
    for (int i = 0; i < 12; i++)
    {
        *(uint32*)&this->matrix[i] = *(uint32*)&other.matrix[i];
    }
    for (int i = 0; i < 2; i++)
    {
        *(uint32*)&this->aperture[i] = *(uint32*)&other.aperture[i];
    }

    this->focal = other.focal;
}
#endif

// func_800504C0
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyStart__FUi")
#else
void zCameraFlyStart(uint32 assetID)
{
    st_PKR_ASSET_TOCINFO info;
    if (xSTGetAssetInfo(assetID, &info) == 0)
    {
        return;
    }
    
    // weird register use
    zcam_fly = 1;
    zcam_flypaused = 0;
    zcam_flydata = info.mempos;
    zcam_flysize = info.size;
    // until here
    zcam_flytime = zCamera_f_0_033;
    zcam_flyasset_current = assetID;

    zEntPlayerControlOff(CONTROL_OWNER_FLY_CAM);
    xScrFxLetterbox(1);
    
    zcam_backupcam = globals.camera;

    if (zCamera_FlyOnly() == 0)
    {
        zMusicSetVolume(zCamera_f_0_5, zCamera_f_0_1);
    }
}
#endif

// func_80050560
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7xCameraFRC7xCamera")

// func_80050904
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyRestoreBackup__FP7xCamera")

// func_80050BB4
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraRewardUpdate__FP7xCameraf")

// func_80050E5C
#if 0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff")
#else
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal,
                             float32& pitch_goal, float32& lktm, float32 dt)
{
// // Size=768
//     r0 = zcam_bbounce;
//     f28 = f1; // pitch_s
//     f31 = f2; // dt
//     r27 = r3; // cam
//     cmpwi r0, 0
//     r28 = r4; // dgoal
//     r29 = r5; // hgoal
//     r30 = r6; // pitch_goal
//     r31 = r7; // lktm
//     beq lbl_8005100C

    if (zcam_bbounce != 0)
    {

    // r0 = zcam_highbounce;
    // cmpwi r0, 0
    // beq lbl_80050EDC
    // _esc__2_unnamed_esc__::GetCurrentD(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    // 0(r28) = f1; // [float32]
    // _esc__2_unnamed_esc__::GetCurrentH(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    // 0(r29) = f1; // [float32]
    // _esc__2_unnamed_esc__::GetCurrentPitch(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentPitch__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    // 0(r30) = f1; // [float32]
    // b lbl_end
    
        if (zcam_highbounce != 0)
        {
            dgoal = GetCurrentD();
            hgoal = GetCurrentH();
            pitch_goal = GetCurrentPitch();
            return;
        }
    
// lbl_80050EDC:
//     r0 = zcam_near;
//     cmpwi r0, 0
//     beq lbl_80050EF0
//     f1 = zCamera_f_3_5; // [float32]
//     b lbl_80050EF4
// lbl_80050EF0:
//     _esc__2_unnamed_esc__::GetCurrentD(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
//     0(r28) = f1; // [float32]

        dgoal = zcam_near != 0 ? zCamera_f_3_5 : GetCurrentD();

    
// lbl_80050EF4:
//     r0 = zcam_near;
//     cmpwi r0, 0
//     beq lbl_80050F0C
//     f1 = zCamera_f_2_4; // [float32]
//     b lbl_80050F10
// lbl_80050F0C:
//     _esc__2_unnamed_esc__::GetCurrentH(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
// lbl_80050F10:
//     0(r29) = f1; // [float32]

        hgoal = zcam_near != 0 ? zCamera_f_2_4 : GetCurrentH();

    // r0 = zcam_longbounce;
    // cmpwi r0, 0
    // beq lbl_80050FEC

        if (zcam_longbounce != 0)
        {

    // r3 = zcam_playervel;
    // f1 = 0(r3); // [float32]
    // f0 = 4(r3); // [float32]
    // fmuls f1, f1, f1
    // f2 = 8(r3); // [float32]
    // fmuls f0, f0, f0
    // fmuls f2, f2, f2
    // fadds f0, f1, f0
    // fadds f1, f2, f0 // f1 = x^2 + y^2 + z^2
    // xsqrt(float32); // [xsqrt__Ff]

        float32 len = xsqrt(zcam_playervel->x * zcam_playervel->x +
                            zcam_playervel->y * zcam_playervel->y +
                            zcam_playervel->z * zcam_playervel->z)

        r3 = zcam_playervel;
        r0 = 0;
        cmplwi r3, 0
        beq lbl_80050F68

        bool cond = false;

        if (zcam_playervel != NULL)
        {
    
    // f0 = zCamera_f_0_0; // [float32]
    // fcmpu cr0, f1, f0
    // beq lbl_80050F68
    // r0 = 1;

            if (len != zCamera_f_0_0)
            {
                cond = true;
            }
        }


//     r0 = zcam_bbounce;
//     f28 = f1; // pitch_s
//     f31 = f2; // dt
//     r27 = r3; // cam
//     cmpwi r0, 0
//     r28 = r4; // dgoal
//     r29 = r5; // hgoal
//     r30 = r6; // pitch_goal
//     r31 = r7; // lktm
//     beq lbl_8005100C

// lbl_80050F68:
    // clrlwi. r0, r0, 0x18
    // beq lbl_80050FB4
    // f2 = 0x38(r27); // cam->mat.at.y
    // f0 = 4(r3); // zcam_playervel->y
    // f3 = 0x34(r27); // cam->mat.at.x
    // fmuls f0, f2, f0
    // f2 = 0(r3); // zcam_playervel->x
    // f5 = 0x3c(r27); // cam->mat.at.z
    // f4 = 8(r3); // zcam_playervel->z
    // fmadds f0, f3, f2, f0
    // f2 = zCamera_f_0_0; // [float32]
    // fmadds f0, f5, f4, f0
    // fdivs f0, f0, f1

        float32 fVar;

        if (cond)
        {
            fVar = (cam->mat.at.z * zcam_playervel->z +
                    cam->mat.at.x * zcam_playervel->x +
                    cam->mat.at.y * zcam_playervel->y) / len;

        
        fcmpo cr0, f2, f0
        bge lbl_80050FA8
        b lbl_80050FAC

            if (zCamera_f_0_0 < fVar)
            {

// lbl_80050FA8:
//     f2 = f0;
    
                fVar = zCamera_f_0_0;
            }
    
// lbl_80050FAC:
//     fneg f1, f2
//     b lbl_80050FB8
         fVar = -fVar;
    
        }
        else {

// lbl_80050FB4:
//     f1 = zCamera_f_0_0; // [float32]

            fVar = zCamera_f_0_0;
        }

    
// lbl_80050FB8:
//     r0 = zcam_near;
//     cmpwi r0, 0
//     beq lbl_80050FE0

        if (zcam_near != 0)
        {
        f0 = zCamera_f_20_0; // [float32]
        f2 = zCamera_f_3_141; // [float32]
        fmadds f1, f0, f1, f0
        f0 = zCamera_f_180_0; // [float32]
        fmuls f1, f2, f1
        fdivs f0, f1, f0
        b lbl_80050FE4

        }
        else {
    // lbl_80050FE0:
    //     f0 = zCamera_f_0_523; // [float32]
            pitch_goal = zCamera_f_0_523;
            return;
        }
    
// lbl_80050FE4:
//     0(r30) = f0; // [float32]
//     b lbl_end


    }
        

lbl_80050FEC:
    r0 = zcam_near;
    cmpwi r0, 0
    beq lbl_80051000
    f0 = lbl_803CD224; // [float32]
    b lbl_80051004
lbl_80051000:
    f0 = lbl_803CD220; // [float32]
lbl_80051004:
    0(r30) = f0; // [float32]
    b lbl_end


    }


lbl_8005100C:
    _esc__2_unnamed_esc__::GetCurrentD(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentD__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    f29 = f1;
    _esc__2_unnamed_esc__::GetCurrentH(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentH__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    f30 = f1;
    _esc__2_unnamed_esc__::GetCurrentPitch(_z, const , , , , , , int8, , , , , int16, int8, , , _F); // [GetCurrentPitch__21_esc__2_unnamed_esc__2_zCamera_cpp_esc__2_Fv]
    r0 = lbl_803CB4D8; // [int8]
    cmplwi r0, 0
    beq lbl_80051078
    r0 = lbl_803CB4D4;
    cmplwi r0, 0
    bne lbl_80051078
    f3 = zcam_near_d; // [float32]
    f2 = lbl_803CB4DC; // [float32]
    fsubs f0, f29, f3
    fmadds f0, f2, f0, f3
    0(r28) = f0; // [float32]
    f3 = zcam_near_h; // [float32]
    f2 = lbl_803CB4DC; // [float32]
    fsubs f0, f30, f3
    fmadds f0, f2, f0, f3
    0(r29) = f0; // [float32]
    f3 = zcam_near_pitch; // [float32]
    f2 = lbl_803CB4DC; // [float32]
    fsubs f0, f1, f3
    fmadds f0, f2, f0, f3
    0(r30) = f0; // [float32]
    b lbl_end
lbl_80051078:
    f0 = zCamera_f_0_0; // [float32]
    fcmpo cr0, f28, f0
    ble lbl_800510C0
    f0 = zcam_below_d; // [float32]
    fsubs f0, f0, f29
    fmadds f0, f28, f0, f29
    0(r28) = f0; // [float32]
    f0 = zcam_below_h; // [float32]
    fsubs f0, f0, f30
    fmadds f0, f28, f0, f30
    0(r29) = f0; // [float32]
    f0 = zcam_below_pitch; // [float32]
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fmuls f0, f28, f0
    fmadds f0, f28, f0, f1
    0(r30) = f0; // [float32]
    b lbl_800510F4
lbl_800510C0:
    f0 = zcam_above_d; // [float32]
    fneg f2, f28
    fsubs f0, f0, f29
    fmadds f0, f2, f0, f29
    0(r28) = f0; // [float32]
    f0 = zcam_above_h; // [float32]
    fsubs f0, f0, f30
    fmadds f0, f2, f0, f30
    0(r29) = f0; // [float32]
    f0 = zcam_above_pitch; // [float32]
    fsubs f0, f0, f1
    fmadds f0, f2, f0, f1
    0(r30) = f0; // [float32]
lbl_800510F4:
    f1 = 0(r31); // [float32]
    f0 = zCamera_f_0_1; // [float32]
    fcmpo cr0, f1, f0
    ble lbl_80051124
    fsubs f0, f1, f31
    0(r31) = f0; // [float32]
    f1 = 0(r31); // [float32]
    f0 = zCamera_f_0_1; // [float32]
    fcmpo cr0, f1, f0
    bge lbl_end
    0(r31) = f0; // [float32]
    b lbl_end
lbl_80051124:
    0(r31) = f0; // [float32]
lbl_end:
}
#endif

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
