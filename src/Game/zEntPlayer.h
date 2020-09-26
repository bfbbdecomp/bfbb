#ifndef ZENTPLAYER_H
#define ZENTPLAYER_H

#include "../Core/x/xMath3.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"
#include "zLasso.h"

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
    float PeakHeight;
    float TimeGravChange;
    float TimeHold;
    float ImpulseVel;
};

struct zLedgeGrabParams
{
    float animGrab;
    float zdist;
    xVec3 tranTable[60];
    int tranCount;
    xEnt* optr;
    xMat4x3 omat;
    float y0det;
    float dydet;
    float r0det;
    float drdet;
    float thdet;
    float rtime;
    float ttime;
    float tmr;
    xVec3 spos;
    xVec3 epos;
    xVec3 tpos;
    int nrays;
    int rrand;
    float startrot;
    float endrot;
};

struct zPlayerSettings
{
    _zPlayerType pcType;
    float MoveSpeed[6];
    float AnimSneak[3];
    float AnimWalk[3];
    float AnimRun[3];
    float JumpGravity;
    float GravSmooth;
    float FloatSpeed;
    float ButtsmashSpeed;
    zJumpParam Jump;
    zJumpParam Bounce;
    zJumpParam Spring;
    zJumpParam Wall;
    zJumpParam Double;
    zJumpParam SlideDouble;
    zJumpParam SlideJump;
    float WallJumpVelocity;
    zLedgeGrabParams ledge;
    float spin_damp_xz;
    float spin_damp_y;
    unsigned char talk_anims;
    unsigned char talk_filter_size;
    unsigned char talk_filter[4];
};

struct zPlayerCarryInfo
{
    xEnt* grabbed;
    unsigned int grabbedModelID;
    xMat4x3 spin;
    xEnt* throwTarget;
    xEnt* flyingToTarget;
    float minDist;
    float maxDist;
    float minHeight;
    float maxHeight;
    float maxCosAngle;
    float throwMinDist;
    float throwMaxDist;
    float throwMinHeight;
    float throwMaxHeight;
    float throwMaxStack;
    float throwMaxCosAngle;
    float throwTargetRotRate;
    float targetRot;
    unsigned int grabTarget;
    xVec3 grabOffset;
    float grabLerpMin;
    float grabLerpMax;
    float grabLerpLast;
    unsigned int grabYclear;
    float throwGravity;
    float throwHeight;
    float throwDistance;
    float fruitFloorDecayMin;
    float fruitFloorDecayMax;
    float fruitFloorBounce;
    float fruitFloorFriction;
    float fruitCeilingBounce;
    float fruitWallBounce;
    float fruitLifetime;
    xEnt* patLauncher;
};

struct zPlayerLassoInfo
{
    xEnt* target;
    float dist;
    unsigned char destroy;
    unsigned char targetGuide;
    float lassoRot;
    xEnt* swingTarget;
    xEnt* releasedSwing;
    float copterTime;
    int canCopter;
    zLasso lasso;
    xAnimState* zeroAnim;
};

#endif