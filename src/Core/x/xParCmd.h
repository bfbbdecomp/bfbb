#ifndef XPARCMD_H
#define XPARCMD_H

#include "xParGroup.h"

#define XPARCMD_TYPE_MOVE 0
#define XPARCMD_TYPE_MOVERANDOM 1
#define XPARCMD_TYPE_ACCELERATE 2
#define XPARCMD_TYPE_VELOCITYAPPLY 3
#define XPARCMD_TYPE_JET 4
#define XPARCMD_TYPE_UNK5 5
#define XPARCMD_TYPE_KILLSLOW 6
#define XPARCMD_TYPE_FOLLOW 7
#define XPARCMD_TYPE_ORBITPOINT 8
#define XPARCMD_TYPE_ORBITLINE 9
#define XPARCMD_TYPE_MOVERANDOMPAR 10
#define XPARCMD_TYPE_SCALE3RDPOLYREG 11
#define XPARCMD_TYPE_TEX 12
#define XPARCMD_TYPE_TEXANIM 13
#define XPARCMD_TYPE_PLAYERCOLLISION 14
#define XPARCMD_TYPE_RANDOMVELOCITYPAR 15
#define XPARCMD_TYPE_CUSTOM 16
#define XPARCMD_TYPE_KILLDISTANCE 17
#define XPARCMD_TYPE_AGE 18
#define XPARCMD_TYPE_ALPHA3RDPOLYREG 19
#define XPARCMD_TYPE_APPLYWIND 20
#define XPARCMD_TYPE_ROTPAR 21
#define XPARCMD_TYPE_APPLYCAMMAT 22
#define XPARCMD_TYPE_ROTATEAROUND 23
#define XPARCMD_TYPE_SMOKEALPHA 24
#define XPARCMD_TYPE_SCALE 25
#define XPARCMD_TYPE_CLIPVOLUMES 26
#define XPARCMD_TYPE_ANIMALMAGENTISM 27
#define XPARCMD_TYPE_DAMAGEPLAYER 28
#define XPARCMD_TYPE_COLLIDEFALL 29
#define XPARCMD_TYPE_SHAPER 30
#define XPARCMD_TYPE_ALPHAINOUT 31
#define XPARCMD_TYPE_SIZEINOUT 32
#define XPARCMD_TYPE_DAMPENSPEED 33
#define XPARCMD_TYPE_COLLIDEFALLSTICKY 34
#define XPARCMD_TYPE_COUNT 35

struct xParCmdAsset
{
    uint32 type;
    uint8 enabled;
    uint8 mode;
    uint8 pad[2];
};

struct xParCmd
{
    uint32 flag;
    xParCmdAsset* tasset;
};

struct xParGroup;

typedef void (*xParCmdUpdateFunc)(xParCmd* c, xParGroup* ps, float32 dt);

void xParCmdInit();
void xParCmdRegister(uint32 parType, uint32 size, xParCmdUpdateFunc func);
uint32 xParCmdGetSize(uint32 parType);
xParCmdUpdateFunc xParCmdGetUpdateFunc(uint32 parType);

// XPARCMD_TYPE_MOVE
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdMove : xParCmdAsset
{
    xVec3 dir;
};

// XPARCMD_TYPE_MOVERANDOM
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_ACCELERATE
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdAccelerate : xParCmdAsset
{
    xVec3 acc;
};

// XPARCMD_TYPE_VELOCITYAPPLY
void xParCmdVelocityApply_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_JET
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdJet : xParCmdAsset
{
    xVec3 center;
    xVec3 acc;
    float32 gravity;
    float32 epsilon;
    float32 radiusSqr;
};

// XPARCMD_TYPE_UNK5
struct xParCmdUnk5 : xParCmdAsset // not in dwarf
{
    int32 unknown;
};

// XPARCMD_TYPE_KILLSLOW
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdKillSlow : xParCmdAsset
{
    float32 speedLimitSqr;
    uint32 kill_less_than;
};

// XPARCMD_TYPE_FOLLOW
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdFollow : xParCmdAsset
{
    float32 gravity;
    float32 epsilon;
};

// XPARCMD_TYPE_ORBITPOINT
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdOrbitPoint : xParCmdAsset
{
    xVec3 center;
    float32 gravity;
    float32 epsilon;
    float32 maxRadiusSqr;
};

// XPARCMD_TYPE_ORBITLINE
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdOrbitLine : xParCmdAsset
{
    xVec3 p;
    xVec3 axis;
    float32 gravity;
    float32 epsilon;
    float32 maxRadiusSqr;
};

// XPARCMD_TYPE_MOVERANDOMPAR
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdMoveRandomPar : xParCmdAsset
{
    xVec3 dim;
};

// XPARCMD_TYPE_SCALE3RDPOLYREG
void xParCmdScale3rdPolyReg_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdScale3rdPolyReg : xParCmdAsset // not in dwarf
{
    int32 unknown[4];
};

// XPARCMD_TYPE_TEX
void xParCmdTex_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdTex : xParCmdAsset
{
    float32 x1;
    float32 y1;
    float32 x2;
    float32 y2;
    uint8 birthMode;
    uint8 rows;
    uint8 cols;
    uint8 unit_count;
    float32 unit_width;
    float32 unit_height;
};

// XPARCMD_TYPE_TEXANIM
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdTexAnim : xParCmdAsset
{
    uint8 anim_mode;
    uint8 anim_wrap_mode;
    uint8 pad_anim;
    uint8 throttle_spd_less_than;
    float32 throttle_spd_sqr;
    float32 throttle_time;
    float32 throttle_time_elapsed;
};

// XPARCMD_TYPE_PLAYERCOLLISION
void xParCmdPlayerCollision_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_RANDOMVELOCITYPAR
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdRandomVelocityPar : xParCmdAsset
{
    float32 x;
    float32 y;
    float32 z;
};

// XPARCMD_TYPE_CUSTOM
void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCustom_Grass_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_KILLDISTANCE
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdKillDistance : xParCmdAsset
{
    float32 dSqr;
    uint32 kill_greater_than;
};

// XPARCMD_TYPE_AGE
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdAge : xParCmdAsset // not in dwarf
{
    float32 unknown;
};

// XPARCMD_TYPE_ALPHA3RDPOLYREG
void xParCmdAlpha3rdPolyReg_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdAlpha3rdPolyReg : xParCmdAsset // not in dwarf
{
    int32 unknown[4];
};

// XPARCMD_TYPE_APPLYWIND
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdApplyWind : xParCmdAsset // not in dwarf
{
    float32 unknown;
};

// XPARCMD_TYPE_ROTPAR
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdRotPar : xParCmdAsset
{
    xVec3 min;
    xVec3 max;
};

// XPARCMD_TYPE_APPLYCAMMAT
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdApplyCamMat : xParCmdAsset
{
    xVec3 apply;
};

// XPARCMD_TYPE_ROTATEAROUND
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdRotateAround : xParCmdAsset
{
    xVec3 pos;
    float32 unused1;
    float32 radius_growth;
    float32 yaw;
};

// XPARCMD_TYPE_SMOKEALPHA
void xParCmdSmokeAlpha_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdSmokeAlpha : xParCmdAsset // not in dwarf
{
    int32 unknown;
};

// XPARCMD_TYPE_SCALE
void xParCmdScale_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdScale : xParCmdAsset // not in dwarf
{
    int32 unknown;
};

// XPARCMD_TYPE_CLIPVOLUMES
void xParCmdClipVolumes_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_ANIMALMAGENTISM
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float32 dt);

// XPARCMD_TYPE_DAMAGEPLAYER
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdDamagePlayer : xParCmdAsset
{
    int32 damage;
    int32 granular;
};

// XPARCMD_TYPE_COLLIDEFALL
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdCollideFall : xParCmdAsset
{
    float32 y;
    float32 bounce;
};

// XPARCMD_TYPE_SHAPER
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdShaperData : xParCmdAsset
{
    float32 custAlpha[4];
    float32 custSize[4];
    float32 dampSpeed;
    float32 gravity;
};

// XPARCMD_TYPE_ALPHAINOUT
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdAlphaInOutData : xParCmdAsset
{
    float32 custAlpha[4];
};

// XPARCMD_TYPE_SIZEINOUT
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdSizeInOutData : xParCmdAsset
{
    float32 custSize[4];
};

// XPARCMD_TYPE_DAMPENSPEED
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdDampenData : xParCmdAsset
{
    float32 dampSpeed;
};

// XPARCMD_TYPE_COLLIDEFALLSTICKY
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps, float32 dt);

struct xParCmdCollideFallSticky : xParCmdCollideFall
{
    float32 sticky;
};

#endif