#ifndef ZENTPLAYER_H
#define ZENTPLAYER_H

#include "../Core/x/xMath3.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"
#include "zLasso.h"

enum _tagePlayerSnd
{
    ePlayerSnd_Invalid,
    ePlayerSnd_Land,
    ePlayerSnd_Jump,
    ePlayerSnd_DoubleJump,
    ePlayerSnd_BowlWindup,
    ePlayerSnd_BowlRelease,
    ePlayerSnd_BubbleBashStart,
    ePlayerSnd_BubbleBashHit1,
    ePlayerSnd_BubbleBashHitStart = 0x7,
    ePlayerSnd_BubbleBashHit2,
    ePlayerSnd_BubbleBashHitEnd = 0x8,
    ePlayerSnd_BubbleWand,
    ePlayerSnd_CruiseStart,
    ePlayerSnd_CruiseNavigate,
    ePlayerSnd_CruiseHit,
    ePlayerSnd_BounceStrike,
    ePlayerSnd_BoulderStart,
    ePlayerSnd_BoulderRoll,
    ePlayerSnd_BoulderEnd,
    ePlayerSnd_BellyMelee,
    ePlayerSnd_BellySmash,
    ePlayerSnd_Lift1,
    ePlayerSnd_Throw,
    ePlayerSnd_Chop,
    ePlayerSnd_Kick,
    ePlayerSnd_Heli,
    ePlayerSnd_LassoThrow,
    ePlayerSnd_LassoYank,
    ePlayerSnd_LassoStretch,
    ePlayerSnd_Ouch1,
    ePlayerSnd_OuchStart = 0x1b,
    ePlayerSnd_Ouch2,
    ePlayerSnd_Ouch3,
    ePlayerSnd_Ouch4,
    ePlayerSnd_OuchEnd = 0x1e,
    ePlayerSnd_Death,
    ePlayerSnd_FruitCrackle,
    ePlayerSnd_CheckPoint,
    ePlayerSnd_PickupSpatula,
    ePlayerSnd_PickupUnderwear,
    ePlayerSnd_Bus,
    ePlayerSnd_Taxi,
    ePlayerSnd_SlideLoop,
    ePlayerSnd_BeginBungee,
    ePlayerSnd_BungeeWind = 0x27,
    ePlayerSnd_BungeeAttach,
    ePlayerSnd_BungeeRelease,
    ePlayerSnd_EndBungee = 0x29,
    ePlayerSnd_PickupSpatulaComment,
    ePlayerSnd_BungeeDive1,
    ePlayerSnd_BungeeDive2,
    ePlayerSnd_Sneak,
    ePlayerSnd_SlipLoop,
    ePlayerSnd_Total
};

enum _zPlayerType
{
    ePlayer_SB,
    ePlayer_Patrick,
    ePlayer_Sandy,
    ePlayer_MAXTYPES
};

enum _zPlayerWallJumpState
{
    k_WALLJUMP_NOT,
    k_WALLJUMP_LAUNCH,
    k_WALLJUMP_FLIGHT,
    k_WALLJUMP_LAND
};

struct zJumpParam
{
    float32 PeakHeight;
    float32 TimeGravChange;
    float32 TimeHold;
    float32 ImpulseVel;
};

struct zLedgeGrabParams
{
    float32 animGrab;
    float32 zdist;
    xVec3 tranTable[60];
    int32 tranCount;
    xEnt* optr;
    xMat4x3 omat;
    float32 y0det;
    float32 dydet;
    float32 r0det;
    float32 drdet;
    float32 thdet;
    float32 rtime;
    float32 ttime;
    float32 tmr;
    xVec3 spos;
    xVec3 epos;
    xVec3 tpos;
    int32 nrays;
    int32 rrand;
    float32 startrot;
    float32 endrot;
};

struct zPlayerSettings
{
    _zPlayerType pcType;
    float32 MoveSpeed[6];
    float32 AnimSneak[3];
    float32 AnimWalk[3];
    float32 AnimRun[3];
    float32 JumpGravity;
    float32 GravSmooth;
    float32 FloatSpeed;
    float32 ButtsmashSpeed;
    zJumpParam Jump;
    zJumpParam Bounce;
    zJumpParam Spring;
    zJumpParam Wall;
    zJumpParam Double;
    zJumpParam SlideDouble;
    zJumpParam SlideJump;
    float32 WallJumpVelocity;
    zLedgeGrabParams ledge;
    float32 spin_damp_xz;
    float32 spin_damp_y;
    uint8 talk_anims;
    uint8 talk_filter_size;
    uint8 talk_filter[4];
};

struct zPlayerCarryInfo
{
    xEnt* grabbed;
    uint32 grabbedModelID;
    xMat4x3 spin;
    xEnt* throwTarget;
    xEnt* flyingToTarget;
    float32 minDist;
    float32 maxDist;
    float32 minHeight;
    float32 maxHeight;
    float32 maxCosAngle;
    float32 throwMinDist;
    float32 throwMaxDist;
    float32 throwMinHeight;
    float32 throwMaxHeight;
    float32 throwMaxStack;
    float32 throwMaxCosAngle;
    float32 throwTargetRotRate;
    float32 targetRot;
    uint32 grabTarget;
    xVec3 grabOffset;
    float32 grabLerpMin;
    float32 grabLerpMax;
    float32 grabLerpLast;
    uint32 grabYclear;
    float32 throwGravity;
    float32 throwHeight;
    float32 throwDistance;
    float32 fruitFloorDecayMin;
    float32 fruitFloorDecayMax;
    float32 fruitFloorBounce;
    float32 fruitFloorFriction;
    float32 fruitCeilingBounce;
    float32 fruitWallBounce;
    float32 fruitLifetime;
    xEnt* patLauncher;
};

struct zPlayerLassoInfo
{
    xEnt* target;
    float32 dist;
    uint8 destroy;
    uint8 targetGuide;
    float32 lassoRot;
    xEnt* swingTarget;
    xEnt* releasedSwing;
    float32 copterTime;
    int32 canCopter;
    zLasso lasso;
    xAnimState* zeroAnim;
};

int32 zEntPlayer_Damage(xBase* src, uint32 damage);

uint32 WalkCheck(xAnimTransition* tranny, xAnimSingle* anim, void* param_3);

void zEntPlayer_SNDStop(_tagePlayerSnd player_snd);
void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, float32 delay);

#endif