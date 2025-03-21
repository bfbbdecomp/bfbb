/*
    Compile unit: C:\SB\Game\zNPCSndLists.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class NPCSndProp g_sndProps[17]; // size: 0xCC, address: 0x4DFCA0
class NPCSndTrax g_sndTrax_Universal[1]; // size: 0xC, address: 0x5CF988
class NPCSndTrax g_sndTrax_General[1]; // size: 0xC, address: 0x5CF998
class NPCSndTrax g_sndTrax_Villager[27]; // size: 0x144, address: 0x4DFD70
class NPCSndTrax g_sndTrax_Squidward[6]; // size: 0x48, address: 0x4DFEC0
class NPCSndTrax g_sndTrax_VillagerCoStar[16]; // size: 0xC0, address: 0x4DFF10
class NPCSndTrax g_sndTrax_VillagerMale[1]; // size: 0xC, address: 0x5CF9A8
class NPCSndTrax g_sndTrax_VillagerFemale[1]; // size: 0xC, address: 0x5CF9B8
class NPCSndTrax g_sndTrax_VillagerElder[1]; // size: 0xC, address: 0x5CF9C8
class NPCSndTrax g_sndTrax_VillagerEldess[1]; // size: 0xC, address: 0x5CF9D8
class NPCSndTrax g_sndTrax_VillagerBoy[2]; // size: 0x18, address: 0x4DFFD0
class NPCSndTrax g_sndTrax_VillagerGirl[2]; // size: 0x18, address: 0x4DFFF0
class NPCSndTrax g_sndTrax_Neptune[1]; // size: 0xC, address: 0x5CF9E8
class NPCSndTrax g_sndTrax_Jelly[4]; // size: 0x30, address: 0x4E0010
class NPCSndTrax g_sndTrax_TikiShared[3]; // size: 0x24, address: 0x4E0040
class NPCSndTrax g_sndTrax_TikiThunder[2]; // size: 0x18, address: 0x4E0070
class NPCSndTrax g_sndTrax_Duplotron[3]; // size: 0x24, address: 0x4E0090
class NPCSndTrax g_sndTrax_Robot[2]; // size: 0x18, address: 0x4E00C0
class NPCSndTrax g_sndTrax_Fodder[3]; // size: 0x24, address: 0x4E00E0
class NPCSndTrax g_sndTrax_FodBomb[6]; // size: 0x48, address: 0x4E0110
class NPCSndTrax g_sndTrax_FodBzzt[3]; // size: 0x24, address: 0x4E0160
class NPCSndTrax g_sndTrax_Chomper[4]; // size: 0x30, address: 0x4E0190
class NPCSndTrax g_sndTrax_Hammer[3]; // size: 0x24, address: 0x4E01C0
class NPCSndTrax g_sndTrax_TarTar[4]; // size: 0x30, address: 0x4E01F0
class NPCSndTrax g_sndTrax_Glove[2]; // size: 0x18, address: 0x4E0220
class NPCSndTrax g_sndTrax_Monsoon[3]; // size: 0x24, address: 0x4E0240
class NPCSndTrax g_sndTrax_Sleepy[3]; // size: 0x24, address: 0x4E0270
class NPCSndTrax g_sndTrax_Chuck[5]; // size: 0x3C, address: 0x4E02A0
class NPCSndTrax g_sndTrax_ArfArf[3]; // size: 0x24, address: 0x4E02E0
class NPCSndTrax g_sndTrax_ArfDog[4]; // size: 0x30, address: 0x4E0310
class NPCSndTrax g_sndTrax_Tubelet[5]; // size: 0x3C, address: 0x4E0340
class NPCSndTrax g_sndTrax_Slick[5]; // size: 0x3C, address: 0x4E0380
class NPCSndTrax g_sndTrax_Prawn[1]; // size: 0xC, address: 0x0
class NPCSndTrax g_sndTrax_KingJelly[1]; // size: 0xC, address: 0x5CF9F8
class NPCSndTrax g_sndTrax_Dutchman[1]; // size: 0xC, address: 0x5CFA08
class NPCSndTrax g_sndTrax_BossSandy[1]; // size: 0xC, address: 0x5CFA18
class NPCSndTrax g_sndTrax_BossPat[1]; // size: 0xC, address: 0x0
class NPCSndTrax g_sndTrax_BossSB[1]; // size: 0xC, address: 0x0
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
class NPCSndProp {
    // total size: 0xC
public:
    enum en_NPC_SOUND sndtype; // offset 0x0, size 0x4
    signed int flg_snd; // offset 0x4, size 0x4
    float tym_delayNext; // offset 0x8, size 0x4
};

