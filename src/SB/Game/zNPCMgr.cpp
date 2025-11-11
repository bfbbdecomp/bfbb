#include "zNPCMgr.h"
#include "xLightKit.h"
#include "xRMemData.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypeRobot.h"
#include "zNPCTypeVillager.h"
#include "zNPCTypeSubBoss.h"
#include "zNPCTypeBoss.h"
#include "zNPCTypeDuplotron.h"
#include "zNPCTypes.h"
#include "zNPCSpawner.h"
#include "zNPCMessenger.h"
#include "zNPCGoals.h"
#include "zNPCTypeTiki.h"
#include "zGlobals.h"
#include "xFactory.h"
#include "zRenderState.h"

#include "xBehaveMgr.h"
#include "xstransvc.h"

#include <types.h>

static S32 g_modinit;
static zNPCMgr* g_npcmgr;

static S32 g_firstFrameUpdateAllNPC;

struct NPCBrainTableEntry
{
    char* name;
    en_NPCTYPES type;
    U32 id;
} g_brainTable[63] =
{
    { "NPC_TYPE_UNKNOWN",      NPC_TYPE_UNKNOWN,      0 },
    { "NPC_TYPE_BASIC",        NPC_TYPE_BASIC,        0 },
    { "NPC_TYPE_COMMON",       NPC_TYPE_COMMON,       0 },
    { "NPC_TYPE_AMBIENT",      NPC_TYPE_AMBIENT,      0 },
    { "NPC_TYPE_VILLAGER",     NPC_TYPE_VILLAGER,     0 },
    { "NPC_TYPE_ROBOT",        NPC_TYPE_ROBOT,        0 },
    { "NPC_TYPE_BOSS",         NPC_TYPE_BOSS,         0 },
    { "NPC_TYPE_TEST",         NPC_TYPE_TEST,         0 },
    { "NPC_TYPE_BADGUY",       NPC_TYPE_BADGUY,       0 },
    { "NPC_TYPE_JELLYPINK",    NPC_TYPE_JELLYPINK,    0 },
    { "NPC_TYPE_JELLYBLUE",    NPC_TYPE_JELLYBLUE,    0 },
    { "NPC_TYPE_KINGNEPTUNE",  NPC_TYPE_KINGNEPTUNE,  0 },
    { "NPC_TYPE_TIKI_WOOD",    NPC_TYPE_TIKI_WOOD,    0 },
    { "NPC_TYPE_TIKI_LOVEY",   NPC_TYPE_TIKI_LOVEY,   0 },
    { "NPC_TYPE_TIKI_QUIET",   NPC_TYPE_TIKI_QUIET,   0 },
    { "NPC_TYPE_TIKI_THUNDER", NPC_TYPE_TIKI_THUNDER, 0 },
    { "NPC_TYPE_TIKI_STONE",   NPC_TYPE_TIKI_STONE,   0 },
    { "NPC_TYPE_FISH",         NPC_TYPE_FISH,         0 },
    { "NPC_TYPE_BALLOONBOY",   NPC_TYPE_BALLOONBOY,   0 },
    { "NPC_TYPE_GARY",         NPC_TYPE_GARY,         0 },
    { "NPC_TYPE_SQUIDWARD",    NPC_TYPE_SQUIDWARD,    0 },
    { "NPC_TYPE_SANDYBIKINI",  NPC_TYPE_SANDYBIKINI,  0 },
    { "NPC_TYPE_SANDYNPC",     NPC_TYPE_SANDYNPC,     0 },
    { "NPC_TYPE_PATNPC",       NPC_TYPE_PATNPC,       0 },
    { "NPC_TYPE_BOBNPC",       NPC_TYPE_BOBNPC,       0 },
    { "NPC_TYPE_PLANKNPC",     NPC_TYPE_PLANKNPC,     0 },
    { "NPC_TYPE_MRKRABS",      NPC_TYPE_MRKRABS,      0 },
    { "NPC_TYPE_MSPUFFS",      NPC_TYPE_MSPUFFS,      0 },
    { "NPC_TYPE_BUBBUDDY",     NPC_TYPE_BUBBUDDY,     0 },
    { "NPC_TYPE_NEWSFISH",     NPC_TYPE_NEWSFISH,     0 },
    { "NPC_TYPE_MOTORIST",     NPC_TYPE_MOTORIST,     0 },
    { "NPC_TYPE_MERMANCHAIR",  NPC_TYPE_MERMANCHAIR,  0 },
    { "NPC_TYPE_MERMAN",       NPC_TYPE_MERMAN,       0 },
    { "NPC_TYPE_WORM",         NPC_TYPE_WORM,         0 },
    { "NPC_TYPE_HAMMER",       NPC_TYPE_HAMMER,       0 },
    { "NPC_TYPE_HAMSPIN",      NPC_TYPE_HAMSPIN,      0 },
    { "NPC_TYPE_TARTAR",       NPC_TYPE_TARTAR,       0 },
    { "NPC_TYPE_GLOVE",        NPC_TYPE_GLOVE,        0 },
    { "NPC_TYPE_MONSOON",      NPC_TYPE_MONSOON,      0 },
    { "NPC_TYPE_SLEEPY",       NPC_TYPE_SLEEPY,       0 },
    { "NPC_TYPE_ARFDOG",       NPC_TYPE_ARFDOG,       0 },
    { "NPC_TYPE_ARFARF",       NPC_TYPE_ARFARF,       0 },
    { "NPC_TYPE_CHUCK",        NPC_TYPE_CHUCK,        0 },
    { "NPC_TYPE_TUBELET",      NPC_TYPE_TUBELET,      0 },
    { "NPC_TYPE_TUBESLAVE",    NPC_TYPE_TUBESLAVE,    0 },
    { "NPC_TYPE_SLICK",        NPC_TYPE_SLICK,        0 },
    { "NPC_TYPE_FODDER",       NPC_TYPE_FODDER,       0 },
    { "NPC_TYPE_FODBOMB",      NPC_TYPE_FODBOMB,      0 },
    { "NPC_TYPE_CHOMPER",      NPC_TYPE_CHOMPER,      0 },
    { "NPC_TYPE_FODBZZT",      NPC_TYPE_FODBZZT,      0 },
    { "NPC_TYPE_CRITTER",      NPC_TYPE_CRITTER,      0 },
    { "NPC_TYPE_DUPLOTRON",    NPC_TYPE_DUPLOTRON,    0 },
    { "NPC_TYPE_KINGJELLY",    NPC_TYPE_KINGJELLY,    0 },
    { "NPC_TYPE_DUTCHMAN",     NPC_TYPE_DUTCHMAN,     0 },
    { "NPC_TYPE_PRAWN",        NPC_TYPE_PRAWN,        0 },
    { "NPC_TYPE_BOSSSANDY",    NPC_TYPE_BOSSSANDY,    0 },
    { "NPC_TYPE_BOSSPAT",      NPC_TYPE_BOSSPAT,      0 },
    { "NPC_TYPE_BOSS_SB1",     NPC_TYPE_BOSS_SB1,     0 },
    { "NPC_TYPE_BOSSBOBBY",    NPC_TYPE_BOSSBOBBY,    0 },
    { "NPC_TYPE_BOSSPLANKTON", NPC_TYPE_BOSSPLANKTON, 0 },
    { "NPC_TYPE_BADGUYMEDIUM", NPC_TYPE_BADGUYMEDIUM, 0 },
    { "NPC_TYPE_NOMORE",       NPC_TYPE_NOMORE,       0 },
    { "NPC_TYPE_FORCE",        NPC_TYPE_FORCE,        0 },
};

static struct NPCMTypeTable
{
    en_NPCTYPES useNPCType;
    char* modelName;
    U32 hashOfName;
} g_tbltype[250] =
{
    { NPC_TYPE_FODDER,            "robot_0a_fodder_bind",      0 },
    { NPC_TYPE_FODBOMB,           "robot_0a_bomb_bind",        0 },
    { NPC_TYPE_CHOMPER,           "robot_0a_chomper_bind",     0 },
    { NPC_TYPE_FODBZZT,           "robot_0a_bzzt_bind",        0 },
    { NPC_TYPE_HAMMER,            "ham_bind",                  0 },
    { NPC_TYPE_HAMSPIN,           "hamspin_bind",              0 },
    { NPC_TYPE_TARTAR,            "robot_tar_bind",            0 },
    { NPC_TYPE_GLOVE,             "g_love_bind",               0 },
    { NPC_TYPE_MONSOON,           "robot_4a_monsoon_bind",     0 },
    { NPC_TYPE_SLEEPY,            "robot_sleepy-time_bind",    0 },
    { NPC_TYPE_ARFDOG,            "robot_arf_dog_bind",        0 },
    { NPC_TYPE_ARFARF,            "robot_arf_bind",            0 },
    { NPC_TYPE_CHUCK,             "robot_chuck_bind",          0 },
    { NPC_TYPE_TUBELET,           "tubelet_bind",              0 },
    { NPC_TYPE_TUBESLAVE,         "tubelet_slave_bind",        0 },
    { NPC_TYPE_SLICK,             "robot_9a_bind",             0 },
    { NPC_TYPE_CRITTER,           "critter_a_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_b_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_c_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_d_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_e_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_f_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_g_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_h_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_i_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_j_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_k_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_l_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_m_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_n_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_o_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_p_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_q_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_r_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_s_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_t_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_u_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_v_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_w_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_x_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_y_bind",            0 },
    { NPC_TYPE_CRITTER,           "critter_z_bind",            0 },
    { NPC_TYPE_DUPLOTRON,         "duplicatotron1000_bind",    0 },
    { NPC_TYPE_DUTCHMAN,          "dutchman_bind",             0 },
    { NPC_TYPE_KINGJELLY,         "king_jelly_bind",           0 },
    { NPC_TYPE_PRAWN,             "prawn_bind",                0 },
    { NPC_TYPE_BOSSSANDY,         "boss_sa_bind",              0 },
    { NPC_TYPE_BOSSPAT,           "boss_patrick_bind",         0 },
    { NPC_TYPE_BOSS_SB1,          "boss_sb_muscle_bind",       0 },
    { NPC_TYPE_BOSSBOBBY,         "boss_sb_body_bind",         0 },
    { NPC_TYPE_BOSSPLANKTON,      "plankton_boss_bind",        0 },
    { NPC_TYPE_TIKI_WOOD,         "tiki_wooden_bind",          0 },
    { NPC_TYPE_TIKI_LOVEY,        "tiki_lovey_dovey_bind",     0 },
    { NPC_TYPE_TIKI_QUIET,        "tiki_shhhh_bind",           0 },
    { NPC_TYPE_TIKI_THUNDER,      "tiki_thunder_bind",         0 },
    { NPC_TYPE_TIKI_STONE,        "tiki_stone_bind",           0 },
    { NPC_TYPE_JELLYPINK,         "jellyfish_pink_bind",       0 },
    { NPC_TYPE_JELLYBLUE,         "jellyfish_blue_bind",       0 },
    { NPC_TYPE_KINGNEPTUNE,       "king_neptune_bind",         0 },
    { NPC_TYPE_MIMEFISH,          "mime_fish_bind",            0 },
    { NPC_TYPE_COW,               "cow_bind",                  0 },
    { NPC_TYPE_SQUIDWARD,         "squidward_bind_01",         0 },
    { NPC_TYPE_SQUIDWARD_MUSIC,   "squidward_music_bind_01",   0 },
    { NPC_TYPE_SQUIDWARD_BANDAID, "squidward_bandaid_bind_01", 0 },
    { NPC_TYPE_DUTCHMAN_NSB,      "dutchman_notsubboss_bind",  0 },
    { NPC_TYPE_MRKRABS,           "mr_krabs_bind",             0 },
    { NPC_TYPE_MSPUFFS,           "mspuffs_bind",              0 },
    { NPC_TYPE_GARY,              "gary_bind",                 0 },
    { NPC_TYPE_BUBBUDDY,          "bubble_buddy_bind",         0 },
    { NPC_TYPE_SANDYBIKINI,       "sandy_bikini_bind",         0 },
    { NPC_TYPE_SANDYNPC,          "sandy_npc_bind",            0 },
    { NPC_TYPE_PATNPC,            "patrick_npc_bind",          0 },
    { NPC_TYPE_BOBNPC,            "spongebob_npc_bind",        0 },
    { NPC_TYPE_PLANKNPC,          "plankton_npc_bind",         0 },
    { NPC_TYPE_PLANKNPC,          "plankton_bind",             0 },
    { NPC_TYPE_MOTORIST,          "motorist_bind",             0 },
    { NPC_TYPE_WORM,              "worm_bind",                 0 },
    { NPC_TYPE_MERMAN,            "mermaid_man_bind",          0 },
    { NPC_TYPE_MERMANCHAIR,       "mermaid_man_chair_bind",    0 },
    { NPC_TYPE_BARNACLEBOY,       "barnacle_boy_bind",         0 },
    { NPC_TYPE_NEWSFISH,          "newscaster_bind",           0 },
    { NPC_TYPE_NEWSFISHTV,        "newscaster_tv_bind",        0 },
    { NPC_TYPE_LARRY,             "larry_lobster_bind",        0 },
    { NPC_TYPE_FISH_ELDER,        "oldfish_A_bind",            0 },
    { NPC_TYPE_FISH_ELDER,        "oldfish_B_bind",            0 },
    { NPC_TYPE_FISH_ELDESS,       "oldfish_C_bind",            0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_bind",               0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_bind01",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_bind02",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_bind03",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_beach_bind01",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_beach_bind02",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_beach_bind03",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_camp_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_camp_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_camp_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_rb_bind01",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_rb_bind02",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_rb_bind03",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_snow_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_snow_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_a_snow_bind03",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_bind",               0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_bind01",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_bind02",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_bind03",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_beach_bind01",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_beach_bind02",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_beach_bind03",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_camp_bind01",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_camp_bind02",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_camp_bind03",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_rb_bind01",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_rb_bind02",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_rb_bind03",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_snow_bind01",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_snow_bind02",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_b_snow_bind03",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_bind",               0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_bind01",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_bind02",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_bind03",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_beach_bind01",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_beach_bind02",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_beach_bind03",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_camp_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_camp_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_camp_bind03",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_rb_bind01",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_rb_bind02",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_rb_bind03",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_snow_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_snow_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_c_snow_bind03",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_bind",               0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_bind01",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_bind02",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_bind03",             0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_beach_bind01",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_beach_bind02",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_beach_bind03",       0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_camp_bind01",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_camp_bind02",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_camp_bind03",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_rb_bind01",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_rb_bind02",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_rb_bind03",          0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_snow_bind01",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_snow_bind02",        0 },
    { NPC_TYPE_FISH_BOY,          "fish_d_snow_bind03",        0 },
    { NPC_TYPE_BALLOONBOY,        "fish_d_balloon_kid_bind",   0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_bind",               0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_bind01",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_bind02",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_bind03",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_beach_bind01",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_beach_bind02",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_beach_bind03",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_camp_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_camp_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_camp_bind03",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_rb_bind01",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_rb_bind02",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_rb_bind03",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_snow_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_snow_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_e_snow_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_bind",               0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_bind01",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_bind02",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_bind03",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_beach_bind01",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_beach_bind02",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_beach_bind03",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_camp_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_camp_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_camp_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_rb_bind01",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_rb_bind02",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_rb_bind03",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_snow_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_snow_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_f_snow_bind03",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_bind",               0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_bind01",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_bind02",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_bind03",             0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_beach_bind01",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_beach_bind02",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_beach_bind03",       0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_camp_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_camp_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_camp_bind03",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_rb_bind01",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_rb_bind02",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_rb_bind03",          0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_snow_bind01",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_snow_bind02",        0 },
    { NPC_TYPE_FISH_FEMALE,       "fish_g_snow_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_bind",               0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_bind01",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_bind02",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_bind03",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_beach_bind01",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_beach_bind02",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_beach_bind03",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_ranger_bind01",      0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb_bind01",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb_bind02",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb_bind03",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb02_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb02_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_rb02_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_snow_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_snow_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_h_snow_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_bind",               0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_bind01",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_bind02",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_bind03",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_beach_bind01",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_beach_bind02",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_beach_bind03",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_camp_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_camp_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_camp_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_rb_bind01",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_rb_bind02",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_rb_bind03",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_snow_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_snow_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_i_snow_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_bind",               0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_bind01",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_bind02",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_bind03",             0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_beach_bind01",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_beach_bind02",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_beach_bind03",       0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_camp_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_camp_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_camp_bind03",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_rb_bind01",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_rb_bind02",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_rb_bind03",          0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_snow_bind01",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_snow_bind02",        0 },
    { NPC_TYPE_FISH_MALE,         "fish_j_snow_bind03",        0 },
    { NPC_TYPE_FISH,              "fish_h_fried_bind",         0 }
};

zNPCMgr* zNPCMgrSelf()
{
    return g_npcmgr;
}

st_XORDEREDARRAY* zNPCMgr_GetNPCList()
{
    return &zNPCMgrSelf()->npclist;
}

void zNPCMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        xBehaveMgr_Startup();
        zNPCMgr* npc = new ('NPCM', NULL) zNPCMgr();
        g_npcmgr = npc;
        npc->Startup();
    }
}

void zNPCMgr_Shutdown()
{
    g_modinit--;
    if (g_modinit == 0)
    {
        zNPCMgr* mgr = zNPCMgrSelf();
        if (mgr != NULL)
        {
            mgr->Shutdown();
            delete mgr;
            g_npcmgr = NULL;
        }
        zNPCMgr_Shutdown();
        xBehaveMgr_Shutdown();
    }
}

void zNPCMgr_scenePrepare(S32 npccnt)
{
    zNPCMgrSelf()->ScenePrepare(npccnt);
}

void zNPCMgr_sceneFinish()
{
    zNPCMgrSelf()->SceneFinish();
}

void zNPCMgr_sceneReset()
{
    zNPCMgrSelf()->SceneReset();
}

void zNPCMgr_scenePostInit()
{
    zNPCMgrSelf()->ScenePostInit();
}

void zNPCMgr_scenePostSetup()
{
    zNPCMgrSelf()->ScenePostSetup();
}

void zNPCMgr_sceneTimestep(xScene* xscn, F32 dt)
{
    zNPCMgrSelf()->SceneTimestep(xscn, dt);
}

void zNPCMgr_scenePostRender()
{
    zNPCMgrSelf()->ScenePostRender();
}

void zNPCMgr_scenePostParticleRender()
{
    zNPCMgrSelf()->ScenePostParticleRender();
}

xEnt* zNPCMgr_createNPCInst(S32, xEntAsset* assdat)
{
    return zNPCMgrSelf()->CreateNPC(assdat);
}

void zNPCMgr::Startup()
{
    PrepTypeTable();
    selfbase.id = 'NPCM';
    selfbase.baseType = 0xAB;
    npcFactory = new ('NPCM', NULL) xFactory(0x60);
    zNPCMsg_Startup();
    zNPCSpawner_Startup();
    zNPCTypes_StartupTypes();
    zNPCTypes_RegisterTypes(npcFactory);
    bmgr = xBehaveMgr_GetSelf();
    xFactory* behaveMgrFactory = bmgr->GetFactory();
    zNPCGoals_RegisterTypes(behaveMgrFactory);
}

void zNPCMgr::Shutdown()
{
    if (this->npcFactory != NULL)
    {
        delete this->npcFactory;
    }
    this->npcFactory = NULL;
    zNPCTypes_ShutdownTypes();
    zNPCSpawner_Shutdown();
    zNPCMsg_Shutdown();
}

void zNPCMgr::ScenePrepare(S32 npccnt)
{
    XOrdInit(&this->npclist, npccnt, 0);
    xBehaveMgr_ScenePrepare();
    zNPCMsg_ScenePrepare();
    zNPCSpawner_ScenePrepare();
    zNPCCommon_ScenePrepare();
    zNPCVillager_ScenePrepare();
    zNPCRobot_ScenePrepare();
    zNPCDuplotron_ScenePrepare();
    zNPCSubBoss_ScenePrepare();
    zNPCBoss_ScenePrepare();
    g_firstFrameUpdateAllNPC = 1;
}

void zNPCMgr::SceneFinish()
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        ((zNPCCommon*)npclist.list[i])->Destroy();
    }
    XOrdDone(&npclist, 0);
    npcFactory->DestroyAll();
    zNPCBoss_SceneFinish();
    zNPCSubBoss_SceneFinish();
    zNPCDuplotron_SceneFinish();
    zNPCRobot_SceneFinish();
    zNPCVillager_SceneFinish();
    zNPCCommon_SceneFinish();
    zNPCSpawner_SceneFinish();
    zNPCMsg_SceneFinish();
    xBehaveMgr_SceneFinish();
}

void zNPCMgr::SceneReset()
{
    zNPCCommon_SceneReset();
    zNPCRobot_SceneReset();
    zNPCVillager_SceneReset();
    zNPCMsg_SceneReset();
    xBehaveMgr_SceneReset();
    BackdoorUpdateAllNPCsOnce(globals.sceneCur, 1.0f / 60.0f);
}

void zNPCMgr::ScenePostInit()
{
    zNPCCommon_ScenePostInit();
    zNPCRobot_ScenePostInit();
    zNPCVillager_ScenePostInit();
    zNPCDuplotron_ScenePostInit();
}

void zNPCMgr::ScenePostSetup()
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        xNPCBasic* npc = (xNPCBasic*)npclist.list[i];
        npc->PostSetup();
    }
}

void zNPCMgr::ScenePostRender()
{
    xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);
    _SDRenderState old_rendstat = zRenderStateCurrent();
    zRenderState(SDRS_NPCVisual);
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        if (npc->flg_xtrarend & 0x1)
        {
            npc->flg_xtrarend &= ~0x1;
        }
        else
        {
            continue;
        }

        if (npc->baseFlags & 0x40)
        {
            continue;
        }

        if (npc->model == NULL || !(npc->model->Flags & 0x400))
        {
            npc->RenderExtra();
        }
    }
    xLightKit_Enable(0, globals.currWorld);
    zRenderState(old_rendstat);
}

void zNPCMgr::ScenePostParticleRender()
{
    xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);
    _SDRenderState old_rendstat = zRenderStateCurrent();
    zRenderState(SDRS_NPCVisual);
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        if (npc->flg_xtrarend & 0x2)
        {
            npc->flg_xtrarend &= ~0x2;
        }
        else
        {
            continue;
        }

        if (npc->baseFlags & 0x40)
        {
            continue;
        }

        if (npc->model == NULL || !(npc->model->Flags & 0x400))
        {
            npc->RenderExtraPostParticles();
        }
    }
    xLightKit_Enable(0, globals.currWorld);
    zRenderState(old_rendstat);
}

xEnt* zNPCMgr::CreateNPC(xEntAsset* asset)
{
    zNPCCommon* npc;
    en_NPCTYPES nt;
    U32 size;
    xModelAssetInfo* modelAsset = (xModelAssetInfo*)xSTFindAsset(asset->modelInfoID, &size);

    // FIXME: Replace with actually getting the right model hash from the packed data
    nt = this->NPCTypeForModel(modelAsset->BrainID, *(&asset->modelInfoID + 3));
    npc = (zNPCCommon*)npcFactory->CreateItem(nt, NULL, NULL);

    npc->Init(asset);
    XOrdAppend(&npclist, npc);

    if (npclist.cnt == npclist.max)
    {
        XOrdSort(&npclist, zNPCMgr_OrdComp_npcid);
    }

    this->DBG_Reset();

    return npc;
}

void zNPCMgr::BackdoorUpdateAllNPCsOnce(xScene* xscn, F32 dt)
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        xSceneID2Name(globals.sceneCur, npc->id);

        if (npc->baseFlags & 0x40 && npc->update != NULL)
        {
            npc->update(npc, xscn, 1.0f / 60);
        }
    }
}

void zNPCMgr::SceneTimestep(xScene* xscn, F32 dt)
{
    DBG_PerfTrack();
    if (g_firstFrameUpdateAllNPC != 0)
    {
        BackdoorUpdateAllNPCsOnce(xscn, dt);
        g_firstFrameUpdateAllNPC = 0;
    }
    zNPCMsg_Timestep(xscn, dt);
    zNPCTiki_Timestep(xscn, dt);
    zNPCCommon_Timestep(xscn, dt);
    zNPCRobot_Timestep(xscn, dt);
    zNPCVillager_SceneTimestep(xscn, dt);
}

void zNPCMgr::PrepTypeTable()
{
    for (NPCMTypeTable* p = &g_tbltype[0]; p->useNPCType != NPC_TYPE_UNKNOWN; p++)
    {
        p->hashOfName = xStrHash(p->modelName);
    }

    for (int i = 0; i < (S32)(sizeof(g_brainTable) / sizeof(NPCBrainTableEntry)); i++)
    {
        g_brainTable[i].id = xStrHash(g_brainTable[i].name);
    }
}

en_NPCTYPES zNPCMgr::NPCTypeForModel(U32 brainID, U32 mdl_hash)
{
    if (brainID != NULL)
    {
        for (int i = 0; i < sizeof(g_brainTable) / sizeof(g_brainTable[0]); i++)
        {
            if (brainID == g_brainTable[i].id)
            {
                return g_brainTable[i].type;
            }
        }
    }

    en_NPCTYPES usetype = NPC_TYPE_UNKNOWN;
    for (NPCMTypeTable* rec = g_tbltype; rec->useNPCType != NPC_TYPE_UNKNOWN; rec++)
    {
        if (rec->hashOfName == mdl_hash)
        {
            usetype = rec->useNPCType;
            break;
        }
    }

    if (usetype == NPC_TYPE_UNKNOWN)
    {
        usetype = NPC_TYPE_COMMON;
    }

    return usetype;
}

S32 zNPCMgr_OrdTest_npcid(const void* vkey, void* vitem)
{
    S32 rc;
    void* key = *(void**)(vitem);

    if (vkey < key)
    {
        rc = -1;
    }
    else if (vkey > key)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}

S32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem)
{
    S32 rc;
    U32 item;
    U32 key;

    key = *(U32*)vkey;
    item = *(U32*)vitem;
    if (key < item)
    {
        rc = -1;
    }
    else if (key > item)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}