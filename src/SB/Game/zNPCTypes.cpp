#include "zNPCTypes.h"

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

void zNPCTypes_RegisterTypes(xFactory* fac)
{
    // clang-format off
    XGOFTypeInfo typelist[] =
    {
        NPC_TYPE_COMMON, ZNPC_Create_Common, ZNPC_Destroy_Common,
        NPC_TYPE_AMBIENT, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_VILLAGER, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ROBOT, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_TEST, ZNPC_Create_Test, ZNPC_Destroy_Test,
        NPC_TYPE_FISH, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_MALE, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_FEMALE, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_ELDER, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_ELDESS, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_BOY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_FISH_GIRL, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_BALLOONBOY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_GARY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_SANDYNPC, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_PATNPC, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_BOBNPC, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_PLANKNPC, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_SANDYBIKINI, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_SQUIDWARD, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_SQUIDWARD_MUSIC, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_SQUIDWARD_BANDAID, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_DUTCHMAN_NSB, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_MRKRABS, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_MSPUFFS, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_LARRY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_BUBBUDDY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_NEWSFISH, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_NEWSFISHTV, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_MOTORIST, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_MERMAN, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_BARNACLEBOY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_MERMANCHAIR, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_WORM, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_JELLYPINK, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_JELLYBLUE, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_KINGNEPTUNE, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_MIMEFISH, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_COW, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_TIKI_WOOD, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_TIKI_LOVEY, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_TIKI_QUIET, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_TIKI_THUNDER, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_TIKI_STONE, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_HAMMER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_HAMSPIN, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_TARTAR, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_GLOVE, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_MONSOON, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_SLEEPY, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ARFDOG, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ARFARF, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_CHUCK, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_TUBELET, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_TUBESLAVE, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_SLICK, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_FODDER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_FODBOMB, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_CHOMPER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_FODBZZT, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_CRITTER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_DUPLOTRON, ZNPC_Create_Duplotron, ZNPC_Destroy_Duplotron,
        NPC_TYPE_DUTCHMAN, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_KINGJELLY, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_PRAWN, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_BOSSSANDY, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_BOSSPAT, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_BOSS_SB1, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_BOSSBOBBY, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_BOSSPLANKTON, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        0
    };
    // clang-format on

    fac->RegItemType(typelist);
}
