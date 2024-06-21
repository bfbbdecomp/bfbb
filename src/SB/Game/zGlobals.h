#ifndef ZGLOBALS_H
#define ZGLOBALS_H

#include "../Core/x/xGlobals.h"
#include "../Core/x/xShadowSimple.h"
#include "../Core/x/xEntDrive.h"

#include "zEnt.h"
#include "zEntPlayer.h"
#include "zScene.h"

struct zGlobalSettings
{
    // 0x874 in globals
    uint16 AnalogMin;
    uint16 AnalogMax;
    float32 SundaeTime;
    float32 SundaeMult;
    uint32 InitialShinyCount;
    uint32 InitialSpatulaCount;

    // 0x888 in globals
    int32 ShinyValuePurple;
    int32 ShinyValueBlue;
    int32 ShinyValueGreen;
    int32 ShinyValueYellow;
    int32 ShinyValueRed;

    // 0x89C in globals
    int32 ShinyValueCombo0;
    int32 ShinyValueCombo1;
    int32 ShinyValueCombo2;
    int32 ShinyValueCombo3;
    int32 ShinyValueCombo4;
    int32 ShinyValueCombo5;
    int32 ShinyValueCombo6;
    int32 ShinyValueCombo7;
    int32 ShinyValueCombo8;
    int32 ShinyValueCombo9;
    int32 ShinyValueCombo10;
    int32 ShinyValueCombo11;
    int32 ShinyValueCombo12;
    int32 ShinyValueCombo13;
    int32 ShinyValueCombo14;
    int32 ShinyValueCombo15;

    // 0x8DC in globals
    float32 ComboTimer;
    uint32 Initial_Specials;
    uint32 TakeDamage;
    float32 DamageTimeHit;
    float32 DamageTimeSurface;
    float32 DamageTimeEGen;
    float32 DamageSurfKnock;
    float32 DamageGiveHealthKnock;
    uint32 CheatSpongeball;
    uint32 CheatPlayerSwitch;
    uint32 CheatAlwaysPortal;
    uint32 CheatFlyToggle;
    uint32 DisableForceConversation;
    float32 StartSlideAngle;
    float32 StopSlideAngle;
    float32 RotMatchMaxAngle;
    float32 RotMatchMatchTime;
    float32 RotMatchRelaxTime;
    float32 Gravity;
    float32 BBashTime;
    float32 BBashHeight;
    float32 BBashDelay;
    float32 BBashCVTime;
    float32 BBounceSpeed;
    float32 BSpinMinFrame;
    float32 BSpinMaxFrame;
    float32 BSpinRadius;
    float32 SandyMeleeMinFrame;
    float32 SandyMeleeMaxFrame;
    float32 SandyMeleeRadius;
    float32 BubbleBowlTimeDelay;
    float32 BubbleBowlLaunchPosLeft;
    float32 BubbleBowlLaunchPosUp;
    float32 BubbleBowlLaunchPosAt;
    float32 BubbleBowlLaunchVelLeft;
    float32 BubbleBowlLaunchVelUp;
    float32 BubbleBowlLaunchVelAt;
    float32 BubbleBowlPercentIncrease;
    float32 BubbleBowlMinSpeed;
    float32 BubbleBowlMinRecoverTime;
    float32 SlideAccelVelMin;
    float32 SlideAccelVelMax;
    float32 SlideAccelStart;
    float32 SlideAccelEnd;
    float32 SlideAccelPlayerFwd;
    float32 SlideAccelPlayerBack;
    float32 SlideAccelPlayerSide;
    float32 SlideVelMaxStart;
    float32 SlideVelMaxEnd;
    float32 SlideVelMaxIncTime;
    float32 SlideVelMaxIncAccel;
    float32 SlideAirHoldTime;
    float32 SlideAirSlowTime;
    float32 SlideAirDblHoldTime;
    float32 SlideAirDblSlowTime;
    float32 SlideVelDblBoost;
    uint8 SlideApplyPhysics;
    // 0x9BD in globals
    uint8 PowerUp[2];
    uint8 InitialPowerUp[2];
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
    float32 rot;
    uint32 initCamID;
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
    uint32 Visible;
    uint32 Health;
    int32 Speed;
    float32 SpeedMult;
    int32 Sneak;
    int32 Teeter;
    float32 SlipFadeTimer;
    int32 Slide;
    float32 SlideTimer;
    int32 Stepping;
    int32 JumpState;
    int32 LastJumpState;

    // 0x16DC in globals
    float32 JumpTimer;
    float32 LookAroundTimer;
    uint32 LookAroundRand;
    uint32 LastProjectile;
    float32 DecelRun;
    float32 DecelRunSpeed;
    float32 HotsauceTimer;
    float32 LeanLerp;
    float32 ScareTimer;
    xBase* ScareSource;
    float32 CowerTimer;
    float32 DamageTimer;
    float32 SundaeTimer;
    float32 ControlOffTimer;
    float32 HelmetTimer;

    // Offset: 0x1718
    uint32 WorldDisguise;
    uint32 Bounced;
    float32 FallDeathTimer;
    float32 HeadbuttVel;
    float32 HeadbuttTimer;
    uint32 SpecialReceived;
    xEnt* MountChimney;
    float32 MountChimOldY;
    uint32 MaxHealth;

    // Offset: 0x173C
    uint32 DoMeleeCheck;
    float32 VictoryTimer;
    float32 BadGuyNearTimer;
    float32 ForceSlipperyTimer;
    float32 ForceSlipperyFriction;
    float32 ShockRadius;
    float32 ShockRadiusOld;
    float32 Face_ScareTimer;

    // Offset: 0x175C
    uint32 Face_ScareRandom;
    uint32 Face_Event;
    float32 Face_EventTimer;
    float32 Face_PantTimer;
    uint32 Face_AnimSpecific;
    uint32 IdleRand;
    float32 IdleMinorTimer;
    float32 IdleMajorTimer;
    float32 IdleSitTimer;
    int32 Transparent;
    zEnt* FireTarget;
    uint32 ControlOff;
    uint32 ControlOnEvent;

    // Offset: 0x1790
    uint32 AutoMoveSpeed;
    float32 AutoMoveDist;
    xVec3 AutoMoveTarget;
    xBase* AutoMoveObject;
    zEnt* Diggable;
    float32 DigTimer;
    zPlayerCarryInfo carry;
    zPlayerLassoInfo lassoInfo;
    xModelTag BubbleWandTag[2];
    xModelInstance* model_wand;
    xEntBoulder* bubblebowl;
    float32 bbowlInitVel;
    zEntHangable* HangFound;
    zEntHangable* HangEnt;
    zEntHangable* HangEntLast;
    xVec3 HangPivot;
    xVec3 HangVel;
    float32 HangLength;
    xVec3 HangStartPos;
    float32 HangStartLerp;
    xModelTag HangPawTag[4];
    float32 HangPawOffset;
    float32 HangElapsed;
    float32 Jump_CurrGravity;
    float32 Jump_HoldTimer;
    float32 Jump_ChangeTimer;

    // Offset: 0x1AB8
    int32 Jump_CanDouble;
    int32 Jump_CanFloat;
    int32 Jump_SpringboardStart;
    zPlatform* Jump_Springboard;
    int32 CanJump;
    int32 CanBubbleSpin;
    int32 CanBubbleBounce;
    int32 CanBubbleBash;

    // Offset: 0x1AD8 in globals
    int32 IsJumping;
    int32 IsDJumping;
    int32 IsBubbleSpinning;
    int32 IsBubbleBouncing;
    int32 IsBubbleBashing;
    int32 IsBubbleBowling;
    int32 WasDJumping;
    int32 IsCoptering;
    _zPlayerWallJumpState WallJumpState;
    int32 cheat_mode;

    // Offset: 0x1B00 in globals
    uint32 Inv_Shiny;
    uint32 Inv_Spatula;
    uint32 Inv_PatsSock[LEVEL_COUNT];
    uint32 Inv_PatsSock_Max[LEVEL_COUNT];

    // Offset: 0x1B80 in globals
    uint32 Inv_PatsSock_CurrentLevel;
    uint32 Inv_LevelPickups[LEVEL_COUNT];
    uint32 Inv_LevelPickups_CurrentLevel;

    // Offset: 0x1BC4 in globals
    uint32 Inv_PatsSock_Total;
    xModelTag BubbleTag;
    xEntDrive drv;
    xSurface* floor_surf;
    xVec3 floor_norm;

    // Offset: 0x1C74 in globals
    int32 slope;
    xCollis earc_coll;
    xSphere head_sph;
    xModelTag center_tag;
    xModelTag head_tag;
    uint32 TongueFlags[2];
    xVec3 RootUp;
    xVec3 RootUpTarget;
    zCheckPoint cp;
    uint32 SlideTrackSliding;
    uint32 SlideTrackCount;
    xEnt* SlideTrackEnt[111];
    uint32 SlideNotGroundedSinceSlide;
    xVec3 SlideTrackDir;
    xVec3 SlideTrackVel;
    float32 SlideTrackDecay;
    float32 SlideTrackLean;
    float32 SlideTrackLand;
    uint8 sb_model_indices[14];
    xModelInstance* sb_models[14];
    uint32 currentPlayer;
    xVec3 PredictRotate;
    xVec3 PredictTranslate;
    float32 PredictAngV;
    xVec3 PredictCurrDir;
    float32 PredictCurrVel;
    float32 KnockBackTimer;
    float32 KnockIntoAirTimer;
};

struct zGlobals : xGlobals
{
    zPlayerGlobals player;
    zAssetPickupTable* pickupTable;
    zCutsceneMgr* cmgr;
    zScene* sceneCur;
    zScene* scenePreload;
};

extern zGlobals globals;
extern xGlobals* xglobals;

#endif