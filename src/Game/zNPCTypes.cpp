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
        NPC_TYPE_ID_COMMON, ZNPC_Create_Common, ZNPC_Destroy_Common,
        NPC_TYPE_ID_AMBIENT, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_VILLAGER, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_ROBOT, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_TEST, ZNPC_Create_Test, ZNPC_Destroy_Test,
        NPC_TYPE_ID_FISH0, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH1, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH2, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH3, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH4, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH5, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH6, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_BALLOONBOY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH8, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH14, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH15, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH16, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH17, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_SANDYBIKINI, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH9, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH10, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH11, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH12, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH18, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH19, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH20, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_BUBBLEBUDDY, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_NEWSFISH, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_NEWSFISHTV, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH24, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH26, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH27, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_MERMANCHAIR, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_FISH28, ZNPC_Create_Villager, ZNPC_Destroy_Villager,
        NPC_TYPE_ID_JELLY1, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_JELLY2, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_NEPTUNE, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_MIMEFISH1, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_MIMEFISH2, ZNPC_Create_Ambient, ZNPC_Destroy_Ambient,
        NPC_TYPE_ID_TIKIWOOD, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_ID_TIKILOVEY, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_ID_TIKISHHH, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_ID_TIKITHUNDER, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_ID_TIKISTONE, ZNPC_Create_Tiki, ZNPC_Destroy_Tiki,
        NPC_TYPE_ID_HAMMER1, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_HAMMER2, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_TARTAR, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_GLOVE, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_MONSOON, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_SLEEPY, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_ARFDOG, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_ARFARF, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_CHUCK, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_TUBELET, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_TUBESLAVE, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_SLICK, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_FODDER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_FODBOMB, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_CHOMPER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_FODBZZT, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_CRITTER, ZNPC_Create_Robot, ZNPC_Destroy_Robot,
        NPC_TYPE_ID_DUPLOTRON, ZNPC_Create_Duplotron, ZNPC_Destroy_Duplotron,
        NPC_TYPE_ID_DUTCHMAN, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_ID_KINGJELLY, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_ID_PRAWN, ZNPC_Create_SubBoss, ZNPC_Destroy_SubBoss,
        NPC_TYPE_ID_BOSSSANDY, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_ID_BOSSPATRICK, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_ID_BOSSSB1, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_ID_BOSSSB2, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        NPC_TYPE_ID_BOSSPLANKTON, ZNPC_Create_Boss, ZNPC_Destroy_Boss,
        0
    };
    // clang-format on

    fac->RegItemType(typelist);
}
