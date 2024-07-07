#ifndef ZPLATFORM_H
#define ZPLATFORM_H

#include "zEnt.h"
#include "xEntMotion.h"
#include "xEntDrive.h"

struct xPlatformERData
{
    S32 nodata;
};

struct xPlatformOrbitData
{
    S32 nodata;
};

struct xPlatformSplineData
{
    S32 nodata;
};

struct xPlatformMPData
{
    S32 nodata;
};

struct xPlatformMechData
{
    S32 nodata;
};

struct xPlatformPenData
{
    S32 nodata;
};

struct xPlatformConvBeltData
{
    F32 speed;
};

struct xPlatformFallingData
{
    F32 speed;
    U32 bustModelID;
};

struct xPlatformFRData
{
    F32 fspeed;
    F32 rspeed;
    F32 ret_delay;
    F32 post_ret_delay;
};

struct xPlatformBreakawayData
{
    F32 ba_delay;
    U32 bustModelID;
    F32 reset_delay;
    U32 breakflags;
};

struct xPlatformSpringboardData
{
    F32 jmph[3];
    F32 jmpbounce;
    U32 animID[3];
    xVec3 jmpdir;
    U32 springflags;
};

struct xPlatformTeeterData
{
    F32 itilt;
    F32 maxtilt;
    F32 invmass;
};

struct xPlatformPaddleData
{
    S32 startOrient;
    S32 countOrient;
    F32 orientLoop;
    F32 orient[6];
    U32 paddleFlags;
    F32 rotateSpeed;
    F32 accelTime;
    F32 decelTime;
    F32 hubRadius;
};

struct xPlatformFMData
{
    S32 nothingyet;
};

struct xPlatformAsset
{
    U8 type;
    U8 pad;
    U16 flags;
    union
    {
        xPlatformERData er;
        xPlatformOrbitData orb;
        xPlatformSplineData spl;
        xPlatformMPData mp;
        xPlatformMechData mech;
        xPlatformPenData pen;
        xPlatformConvBeltData cb;
        xPlatformFallingData fall;
        xPlatformFRData fr;
        xPlatformBreakawayData ba;
        xPlatformSpringboardData sb;
        xPlatformTeeterData teet;
        xPlatformPaddleData paddle;
        xPlatformFMData fm;
    };
};

struct zPlatFMRunTime
{
    U32 flags;
    F32 tmrs[12];
    F32 ttms[12];
    F32 atms[12];
    F32 dtms[12];
    F32 vms[12];
    F32 dss[12];
};

struct zPlatform : zEnt
{
    xPlatformAsset* passet;
    xEntMotion motion;
    U16 state;
    U16 plat_flags;
    F32 tmr;
    S32 ctr;
    xMovePoint* src;
    xModelInstance* am;
    xModelInstance* bm;
    S32 moving;
    xEntDrive drv;
    zPlatFMRunTime* fmrt;
    F32 pauseMult;
    F32 pauseDelta;
};

#define ZPLATFORM_SUBTYPE_PLATFORM 0
#define ZPLATFORM_SUBTYPE_MECH 4
#define ZPLATFORM_SUBTYPE_PEN 5
#define ZPLATFORM_SUBTYPE_CONVBELT 6
#define ZPLATFORM_SUBTYPE_FALLING 7
#define ZPLATFORM_SUBTYPE_FR 8
#define ZPLATFORM_SUBTYPE_BREAKAWAY 9
#define ZPLATFORM_SUBTYPE_SPRINGBOARD 10
#define ZPLATFORM_SUBTYPE_TEETER 11
#define ZPLATFROM_SUBTYPE_PADDLE 12
#define ZPLATFORM_SUBTYPE_FM 13

void genericPlatRender(xEnt* ent);
void zPlatform_Init(void* plat, void* asset);
void zPlatform_Init(zPlatform* plat, xEntAsset* asset);
void zPlatform_Setup(zPlatform* plat, xScene* sc);
void zPlatform_Save(zPlatform* ent, xSerial* s);
void zPlatform_Load(zPlatform* ent, xSerial* s);
void zPlatform_Reset(zPlatform* plat, xScene* sc);
U32 zPlatform_PaddleCollide(xCollis* coll, const xVec3* hitsource, const xVec3* hitvel,
                               U32 worldSpaceNorm);

#endif
