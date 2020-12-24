#include "zNPCTypes.h"

#include "types.h"

#include "zNPCTypeCommon.h"
#include "zNPCTypeRobot.h"
#include "zNPCTypeTiki.h"
#include "zNPCTypeDuplotron.h"
#include "zNPCTypeVillager.h"
#include "zNPCTypeAmbient.h"
#include "zNPCTypeSubBoss.h"
#include "zNPCTypeBoss.h"
#include "zNPCTypeTest.h"

void zNPCTypes_StartupTypes()
{
    ZNPC_Common_Startup();
    ZNPC_Robot_Startup();
    ZNPC_Tiki_Startup();
    ZNPC_Duplotron_Startup();
    ZNPC_Villager_Startup();
    ZNPC_Ambient_Startup();
    ZNPC_SubBoss_Startup();
    ZNPC_Boss_Startup();
    ZNPC_Test_Startup();
}

void zNPCTypes_ShutdownTypes()
{
    ZNPC_Test_Shutdown();
    ZNPC_Boss_Shutdown();
    ZNPC_SubBoss_Shutdown();
    ZNPC_Ambient_Shutdown();
    ZNPC_Villager_Shutdown();
    ZNPC_Duplotron_Shutdown();
    ZNPC_Tiki_Shutdown();
    ZNPC_Robot_Shutdown();
    ZNPC_Common_Shutdown();
}

// func_800EEDF4
#pragma GLOBAL_ASM("asm/Game/zNPCTypes.s", "zNPCTypes_RegisterTypes__FP8xFactory")
