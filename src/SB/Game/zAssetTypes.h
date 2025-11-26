#ifndef ZASSETTYPES_H
#define ZASSETTYPES_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include "xSnd.h"

#include "xJSP.h"

#include "zEntCruiseBubble.h"
#include "zEntPlayerAnimationTables.h"
#include "xHudModel.h"
#include "zNPCTypeAmbient.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypeBossPatrick.h"
#include "zNPCTypeBossPlankton.h"
#include "zNPCTypeBossSandy.h"
#include "zNPCTypeBossSB1.h"
#include "zNPCTypeBossSB2.h"
#include "zNPCTypeDuplotron.h"
#include "zNPCTypeDutchman.h"
#include "zNPCHazard.h"
#include "zNPCTypeKingJelly.h"
#include "zNPCTypePrawn.h"
#include "zNPCTypeRobot.h"
#include "zNPCTypeTest.h"
#include "zNPCTypeTiki.h"

class HackModelRadius
{
public:
    U32 assetid;
    F32 radius;
};

// Note (Square): I'm not sure if this should be in this header but it looks to only be used in one other place
struct zAnimFxSound
{
    U32 ID;
    F32 vol;
    F32 pitch;
    U32 priority;
    U32 flags;
    F32 radius;
};

struct xAnimAssetTable
{
    U32 Magic;
    U32 NumRaw;
    U32 NumFiles;
    U32 NumStates;
    U32 ConstructFunc;
};

struct xAnimAssetFile
{
    U32 FileFlags;
    F32 Duration;
    F32 TimeOffset;
    U16 NumAnims[2];
    void** RawData;
    S32 Physics;
    S32 StartPose;
    S32 EndPose;
};

struct xAnimAssetState
{
    U32 StateID;
    U32 FileIndex;
    U32 EffectCount;
    U32 EffectOffset;
    F32 Speed;
    U32 SubStateID;
    U32 SubStateCount;
};

struct xAnimAssetEffect
{
    U32 StateID;
    F32 StartTime;
    F32 EndTime;
    U32 Flags;
    U32 EffectType;
    U32 UserDataSize;
};

void zAssetStartup();
void zAssetShutdown();
void FootstepHackSceneEnter();

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, xEnt* pos, F32 radius,
               sound_category category, F32 delay);

#endif
