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

struct RwMemory
{
    U8* start;
    U32 length;
};

class HackModelRadius {
public:
    U32 assetid;
    F32 radius;
};

void zAssetStartup();
void zAssetShutdown();
void FootstepHackSceneEnter();
void jsp_shadow_hack(xJSPHeader* param_1);

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, xEnt* pos, F32 radius,
    sound_category category, F32 delay);

#endif
