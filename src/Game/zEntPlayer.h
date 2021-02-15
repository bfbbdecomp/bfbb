#ifndef ZENTPLAYER_H
#define ZENTPLAYER_H

#include "../Core/x/xMath3.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"
#include "zLasso.h"

enum zControlOwner
{
    CONTROL_OWNER_GLOBAL = 0x1,
    CONTROL_OWNER_EVENT,
    CONTROL_OWNER_OOB = 0x4,
    CONTROL_OWNER_BOSS = 0x8,
    CONTROL_OWNER_TALK_BOX = 0x10,
    CONTROL_OWNER_TAXI = 0x20,
    CONTROL_OWNER_BUS_STOP = 0x40,
    CONTROL_OWNER_TELEPORT_BOX = 0x80,
    CONTROL_OWNER_CRUISE_BUBBLE = 0x100,
    CONTROL_OWNER_FLY_CAM = 0x200,
    CONTROL_OWNER_FROZEN = 0x400,
    CONTROL_OWNER_TURRET = 0x800,
    CONTROL_OWNER_REWARDANIM = 0x1000,
    CONTROL_OWNER_BUNGEE = 0x2000,
    CONTROL_OWNER_SPRINGBOARD = 0x4000,
    CONTROL_OWNER_CUTSCENE = 0x8000
};

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

// TODO: Why are there two of these enums with the same effect, should there be?
enum _zPlayerType
{
    ePlayer_SB,
    ePlayer_Patrick,
    ePlayer_Sandy,
    ePlayer_MAXTYPES
};

enum _CurrentPlayer
{
    eCurrentPlayerSpongeBob,
    eCurrentPlayerPatrick,
    eCurrentPlayerSandy,
    eCurrentPlayerCount
};

// was originally called _enum in DWARF data
enum _zPlayerWallJumpResult
{
    WallJumpResult_NoJump,
    WallJumpResult_Jump
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

extern _CurrentPlayer gCurrentPlayer;

void zEntPlayer_Load(xEnt*, xSerial*);

int32 zEntPlayer_Damage(xBase* src, uint32 damage);

uint32 WalkCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 RunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 RunScaredCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 RunVictoryCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 RunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 RunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);

uint32 BubbleBounceCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BBounceAttackCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BBounceStrikeCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);

uint32 BbowlCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlWindupEndCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlTossEndCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverWalkCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverRunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverRunScaredCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverRunVictoryCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverRunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);
uint32 BbowlRecoverRunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);

uint32 GooCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3);

void zEntPlayerExit(xEnt*);
void zEntPlayerPreReset();
void zEntPlayerReset(xEnt* ent);
void zEntPlayer_LoadSounds();
void zEntPlayer_UnloadSounds();
void zEntPlayer_ShadowModelEnable();
void zEntPlayer_ShadowModelDisable();

void zEntPlayer_LoadCheckPoint();

void zEntPlayer_SNDStop(_tagePlayerSnd player_snd);
void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, float32 delay);

void zEntPlayerControlOff(zControlOwner owner);
void zEntPlayerControlOn(zControlOwner owner);

void zEntPlayer_StoreCheckPoint(xVec3* pos, float32 rot, uint32 initCamID);
void load_player_ini(zPlayerSettings& ps, xModelInstance& model, xModelAssetParam* modelass,
                     uint32 param_4);
int32 load_talk_filter(uint8* filter, xModelAssetParam* params, uint32 params_size, int32 max_size);

int32 zEntPlayer_DamageNPCKnockBack(xBase* src, uint32 damage, xVec3* npcPos);

int32 zEntPlayer_DamageNPCKnockBack(xBase* src, uint32 damage, xVec3* npcPos);

#endif