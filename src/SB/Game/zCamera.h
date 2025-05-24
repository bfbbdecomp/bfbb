#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "xCamera.h"

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

enum WallJumpViewState
{
    WJVS_DISABLED,
    WJVS_DISABLING,
    WJVS_ENABLED,
    WJVS_ENABLING
};

enum camera_owner_enum
{
    CO_BOULDER = 0x1,
    CO_CRUISE_BUBBLE,
    CO_BUNGEE = 0x4,
    CO_BOSS = 0x8,
    CO_OOB = 0x10,
    CO_ZIPLINE = 0x20,
    CO_TURRET = 0x40,
    CO_REWARDANIM = 0x80
};

struct zFlyKey
{
    S32 frame;
    F32 matrix[12];
    F32 aperture[2];
    F32 focal;
};

extern F32 zcam_overrot_tmr;
extern S32 zcam_near;
extern S32 zcam_mode;
extern S32 zcam_bbounce;
extern S32 zcam_lbbounce;
extern S32 zcam_convers;
extern S32 zcam_lconvers;
extern S32 zcam_longbounce;
extern S32 zcam_highbounce;
extern S32 zcam_cutscene;
extern S32 zcam_reward;
extern xVec3* zcam_playervel;
extern S32 zcam_fly;
extern S32 zcam_flypaused;
extern void* zcam_flydata;
extern U32 zcam_flysize;
extern F32 zcam_flytime;
extern U32 zcam_flyasset_current;
extern xCamAsset* zcam_dest;
extern F32 zcam_tmr;
extern F32 zcam_ttm;
extern F32 zcam_fovcurr;
extern F32 zcam_fovdest;

extern xCamera zcam_backupcam;
extern xCamera zcam_backupconvers;
extern xQuat zcam_quat;

extern F32 zcam_pad_pyaw_scale;
extern F32 zcam_pad_pitch_scale;
extern F32 zcam_near_d;
extern F32 zcam_near_h;
extern F32 zcam_near_pitch;
extern F32 zcam_far_d;
extern F32 zcam_far_h;
extern F32 zcam_far_pitch;
extern F32 zcam_wall_d;
extern F32 zcam_wall_h;
extern F32 zcam_wall_pitch;
extern F32 zcam_above_d;
extern F32 zcam_above_h;
extern F32 zcam_above_pitch;
extern F32 zcam_below_d;
extern F32 zcam_below_h;
extern F32 zcam_below_pitch;
extern F32 zcam_highbounce_d;
extern F32 zcam_highbounce_h;
extern F32 zcam_highbounce_pitch;
extern F32 zcam_overrot_min;
extern F32 zcam_overrot_mid;
extern F32 zcam_overrot_max;
extern F32 zcam_overrot_rate;
extern F32 zcam_overrot_tstart;
extern F32 zcam_overrot_tend;
extern F32 zcam_overrot_velmin;
extern F32 zcam_overrot_velmax;
extern F32 zcam_overrot_tmanual;
extern F32 zcam_mintgtheight;

extern F32 gSkipTimeFlythrough;

void zCameraReset(xCamera* cam);
void zCameraSetBbounce(S32 bbouncing);
void zCameraSetHighbounce(S32 hbounce);
void zCameraSetLongbounce(S32 hbounce);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
U32 zCamera_FlyOnly();
void zCameraTranslate(xCamera* camera, F32 x, F32 y, F32 z);
void zCameraReset(xCamera* camera);
void zCameraUpdate(xCamera* camera, F32 dt);

void zCameraEnableInput();
void zCameraDisableInput();
U32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraDisableLassoCam();
void zCameraEnableLassoCam();
void zCameraSetLassoCamFactor(F32 new_factor);
F32 zCameraGetLassoCamFactor();
void zCameraEnableWallJump(xCamera* cam, const xVec3& collNormal);
S32 zCameraGetConvers();
void zCameraTranslate(xCamera* cam, F32 x, F32 y, F32 z);
void zCameraDisableWallJump(xCamera* cam);
void zCameraSetReward(S32 reward);
void zCameraMinTargetHeightSet(F32 min_height);
void zCameraMinTargetHeightClear();

#endif
