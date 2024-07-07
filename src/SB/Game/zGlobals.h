#ifndef ZGLOBALS_H
#define ZGLOBALS_H

#include "xGlobals.h"
#include "xShadowSimple.h"
#include "xEntDrive.h"

#include "zEnt.h"
#include "zEntPlayer.h"
#include "zScene.h"

struct zGlobalSettings
{
    // 0x874 in globals
    U16 AnalogMin;
    U16 AnalogMax;
    F32 SundaeTime;
    F32 SundaeMult;
    U32 InitialShinyCount;
    U32 InitialSpatulaCount;

    // 0x888 in globals
    S32 ShinyValuePurple;
    S32 ShinyValueBlue;
    S32 ShinyValueGreen;
    S32 ShinyValueYellow;
    S32 ShinyValueRed;

    // 0x89C in globals
    S32 ShinyValueCombo0;
    S32 ShinyValueCombo1;
    S32 ShinyValueCombo2;
    S32 ShinyValueCombo3;
    S32 ShinyValueCombo4;
    S32 ShinyValueCombo5;
    S32 ShinyValueCombo6;
    S32 ShinyValueCombo7;
    S32 ShinyValueCombo8;
    S32 ShinyValueCombo9;
    S32 ShinyValueCombo10;
    S32 ShinyValueCombo11;
    S32 ShinyValueCombo12;
    S32 ShinyValueCombo13;
    S32 ShinyValueCombo14;
    S32 ShinyValueCombo15;

    // 0x8DC in globals
    F32 ComboTimer;
    U32 Initial_Specials;
    U32 TakeDamage;
    F32 DamageTimeHit;
    F32 DamageTimeSurface;
    F32 DamageTimeEGen;
    F32 DamageSurfKnock;
    F32 DamageGiveHealthKnock;
    U32 CheatSpongeball;
    U32 CheatPlayerSwitch;
    U32 CheatAlwaysPortal;
    U32 CheatFlyToggle;
    U32 DisableForceConversation;
    F32 StartSlideAngle;
    F32 StopSlideAngle;
    F32 RotMatchMaxAngle;
    F32 RotMatchMatchTime;
    F32 RotMatchRelaxTime;
    F32 Gravity;
    F32 BBashTime;
    F32 BBashHeight;
    F32 BBashDelay;
    F32 BBashCVTime;
    F32 BBounceSpeed;
    F32 BSpinMinFrame;
    F32 BSpinMaxFrame;
    F32 BSpinRadius;
    F32 SandyMeleeMinFrame;
    F32 SandyMeleeMaxFrame;
    F32 SandyMeleeRadius;
    F32 BubbleBowlTimeDelay;
    F32 BubbleBowlLaunchPosLeft;
    F32 BubbleBowlLaunchPosUp;
    F32 BubbleBowlLaunchPosAt;
    F32 BubbleBowlLaunchVelLeft;
    F32 BubbleBowlLaunchVelUp;
    F32 BubbleBowlLaunchVelAt;
    F32 BubbleBowlPercentIncrease;
    F32 BubbleBowlMinSpeed;
    F32 BubbleBowlMinRecoverTime;
    F32 SlideAccelVelMin;
    F32 SlideAccelVelMax;
    F32 SlideAccelStart;
    F32 SlideAccelEnd;
    F32 SlideAccelPlayerFwd;
    F32 SlideAccelPlayerBack;
    F32 SlideAccelPlayerSide;
    F32 SlideVelMaxStart;
    F32 SlideVelMaxEnd;
    F32 SlideVelMaxIncTime;
    F32 SlideVelMaxIncAccel;
    F32 SlideAirHoldTime;
    F32 SlideAirSlowTime;
    F32 SlideAirDblHoldTime;
    F32 SlideAirDblSlowTime;
    F32 SlideVelDblBoost;
    U8 SlideApplyPhysics;
    // 0x9BD in globals
    U8 PowerUp[2];
    U8 InitialPowerUp[2];
};

struct xEntBoulder;
struct zEntHangable;
struct zPlatform;
struct xSurface;
struct zAssetPickupTable;
struct zCutsceneMgr;

struct zCheckPoint
{
    xVec3 pos;
    F32 rot;
    U32 initCamID;
};

#define LEVEL_COUNT 15

struct zPlayerGlobals
{
    // 0x6E0 in globals
    zEnt ent;

    // 0x7B4 in globals
    xEntShadow entShadow_embedded;
    xShadowSimpleCache simpShadow_embedded;

    // 0x874 in globals
    zGlobalSettings g;

    // 0x9C4 in globals
    zPlayerSettings* s;
    zPlayerSettings sb;
    zPlayerSettings patrick;
    zPlayerSettings sandy;

    // 0x16A0 in globals
    xModelInstance* model_spongebob;
    xModelInstance* model_patrick;
    xModelInstance* model_sandy;

    // 0x16AC in globals
    U32 Visible;
    U32 Health; // 0x16b0
    S32 Speed;
    F32 SpeedMult;
    S32 Sneak;
    S32 Teeter;
    F32 SlipFadeTimer;
    S32 Slide;
    F32 SlideTimer;
    S32 Stepping;
    S32 JumpState;
    S32 LastJumpState;

    // 0x16DC in globals
    F32 JumpTimer;
    F32 LookAroundTimer;
    U32 LookAroundRand;
    U32 LastProjectile;
    F32 DecelRun;
    F32 DecelRunSpeed;
    F32 HotsauceTimer;
    F32 LeanLerp;
    F32 ScareTimer;
    xBase* ScareSource;
    F32 CowerTimer;
    F32 DamageTimer; // 0x1708
    F32 SundaeTimer;
    F32 ControlOffTimer;
    F32 HelmetTimer;

    // Offset: 0x1718
    U32 WorldDisguise;
    U32 Bounced;
    F32 FallDeathTimer;
    F32 HeadbuttVel;
    F32 HeadbuttTimer;
    U32 SpecialReceived;
    xEnt* MountChimney;
    F32 MountChimOldY;
    U32 MaxHealth;

    // Offset: 0x173C
    U32 DoMeleeCheck;
    F32 VictoryTimer;
    F32 BadGuyNearTimer;
    F32 ForceSlipperyTimer;
    F32 ForceSlipperyFriction;
    F32 ShockRadius;
    F32 ShockRadiusOld;
    F32 Face_ScareTimer;

    // Offset: 0x175C
    U32 Face_ScareRandom;
    U32 Face_Event;
    F32 Face_EventTimer;
    F32 Face_PantTimer;
    U32 Face_AnimSpecific;
    U32 IdleRand;
    F32 IdleMinorTimer;
    F32 IdleMajorTimer;
    F32 IdleSitTimer;
    S32 Transparent;
    zEnt* FireTarget;
    U32 ControlOff;
    U32 ControlOnEvent;

    // Offset: 0x1790
    U32 AutoMoveSpeed;
    F32 AutoMoveDist;
    xVec3 AutoMoveTarget;
    xBase* AutoMoveObject;
    zEnt* Diggable;
    F32 DigTimer;
    zPlayerCarryInfo carry;
    zPlayerLassoInfo lassoInfo;
    xModelTag BubbleWandTag[2];
    xModelInstance* model_wand;
    xEntBoulder* bubblebowl;
    F32 bbowlInitVel;
    zEntHangable* HangFound;
    zEntHangable* HangEnt;
    zEntHangable* HangEntLast;
    xVec3 HangPivot;
    xVec3 HangVel;
    F32 HangLength;
    xVec3 HangStartPos;
    F32 HangStartLerp;
    xModelTag HangPawTag[4];
    F32 HangPawOffset;
    F32 HangElapsed;
    F32 Jump_CurrGravity;
    F32 Jump_HoldTimer;
    F32 Jump_ChangeTimer;

    // Offset: 0x1AB8
    S32 Jump_CanDouble;
    S32 Jump_CanFloat;
    S32 Jump_SpringboardStart;
    zPlatform* Jump_Springboard;
    S32 CanJump;
    S32 CanBubbleSpin;
    S32 CanBubbleBounce;
    S32 CanBubbleBash;

    // Offset: 0x1AD8 in globals
    S32 IsJumping;
    S32 IsDJumping;
    S32 IsBubbleSpinning;
    S32 IsBubbleBouncing;
    S32 IsBubbleBashing;
    S32 IsBubbleBowling;
    S32 WasDJumping;
    S32 IsCoptering;
    _zPlayerWallJumpState WallJumpState;
    S32 cheat_mode;

    // Offset: 0x1B00 in globals
    U32 Inv_Shiny;
    U32 Inv_Spatula;
    U32 Inv_PatsSock[LEVEL_COUNT];
    U32 Inv_PatsSock_Max[LEVEL_COUNT];

    // Offset: 0x1B80 in globals
    U32 Inv_PatsSock_CurrentLevel;
    U32 Inv_LevelPickups[LEVEL_COUNT];
    U32 Inv_LevelPickups_CurrentLevel;

    // Offset: 0x1BC4 in globals
    U32 Inv_PatsSock_Total;
    xModelTag BubbleTag;
    xEntDrive drv;
    xSurface* floor_surf;
    xVec3 floor_norm;

    // Offset: 0x1C74 in globals
    S32 slope;
    xCollis earc_coll;
    xSphere head_sph;
    xModelTag center_tag;
    xModelTag head_tag;
    U32 TongueFlags[2];
    xVec3 RootUp;
    xVec3 RootUpTarget;
    zCheckPoint cp;
    U32 SlideTrackSliding;
    U32 SlideTrackCount;
    xEnt* SlideTrackEnt[111];
    U32 SlideNotGroundedSinceSlide;
    xVec3 SlideTrackDir;
    xVec3 SlideTrackVel;
    F32 SlideTrackDecay;
    F32 SlideTrackLean;
    F32 SlideTrackLand;
    U8 sb_model_indices[14];
    xModelInstance* sb_models[14];
    U32 currentPlayer;
    xVec3 PredictRotate;
    xVec3 PredictTranslate;
    F32 PredictAngV;
    xVec3 PredictCurrDir;
    F32 PredictCurrVel;
    F32 KnockBackTimer;
    F32 KnockIntoAirTimer; // 0x1FB4
};

struct zGlobals : xGlobals
{
    zPlayerGlobals player;
    zAssetPickupTable* pickupTable; // 0x1FB8
    zCutsceneMgr* cmgr; // 0x1FBC
    zScene* sceneCur;
    zScene* scenePreload;
};

extern zGlobals globals;
extern xGlobals* xglobals;

#endif
