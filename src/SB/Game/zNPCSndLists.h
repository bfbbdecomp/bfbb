#ifndef ZNPCSNDLISTS_H
#define ZNPCSNDLISTS_H

#include <types.h>

enum en_NPC_SOUND
{
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER,
    NPC_STYP_CLANKING,
    NPC_STYP_EXCLAIM,
    NPC_STYP_OUCH,
    NPC_STYP_CHEERING,
    NPC_STYP_RESPAWN,
    NPC_STYP_ALERT,
    NPC_STYP_DIZZY,
    NPC_STYP_DANCE,
    NPC_STYP_LAUGH,
    NPC_STYP_ATTACK,
    NPC_STYP_PUNCH,
    NPC_STYP_WEPLAUNCH,
    NPC_STYP_LIGHTNING,
    NPC_STYP_WARNBANG,
    NPC_STYP_DEATH,
    NPC_STYP_DEATHJELLY,
    NPC_STYP_BONKED,
    NPC_STYP_UNBONKED,
    NPC_STYP_TIKISTACK,
    NPC_STYP_TIKIEXPLODE,
    NPC_STYP_TIKITHUNDER,
    NPC_STYP_XSFXTALK,
    NPC_STYP_ONELINER,
    NPC_STYP_ONELINERTOO,
    NPC_STYP_NOMORE,
    NPC_STYP_FORCE = 0x7fffffff
};

struct NPCSndProp
{
    en_NPC_SOUND sndtype;
    S32 flg_snd;
    F32 tym_delayNext;
};

struct NPCSndTrax
{
    en_NPC_SOUND typ_sound;
    const char* nam_sound;
    U32 aid_sound;
};

extern NPCSndProp g_sndProps[];
extern NPCSndTrax g_sndTrax_Universal[];
extern NPCSndTrax g_sndTrax_General[];
extern NPCSndTrax g_sndTrax_Villager[];
extern NPCSndTrax g_sndTrax_Squidward[];
extern NPCSndTrax g_sndTrax_VillagerCoStar[];
extern NPCSndTrax g_sndTrax_VillagerMale[];
extern NPCSndTrax g_sndTrax_VillagerFemale[];
extern NPCSndTrax g_sndTrax_VillagerElder[];
extern NPCSndTrax g_sndTrax_VillagerEldess[];
extern NPCSndTrax g_sndTrax_VillagerBoy[];
extern NPCSndTrax g_sndTrax_VillagerGirl[];
extern NPCSndTrax g_sndTrax_Neptune[];
extern NPCSndTrax g_sndTrax_Jelly[];
extern NPCSndTrax g_sndTrax_TikiShared[];
extern NPCSndTrax g_sndTrax_TikiThunder[];
extern NPCSndTrax g_sndTrax_Duplotron[];
extern NPCSndTrax g_sndTrax_Robot[];
extern NPCSndTrax g_sndTrax_Fodder[];
extern NPCSndTrax g_sndTrax_FodBomb[];
extern NPCSndTrax g_sndTrax_FodBzzt[];
extern NPCSndTrax g_sndTrax_Chomper[];
extern NPCSndTrax g_sndTrax_Hammer[];
extern NPCSndTrax g_sndTrax_TarTar[];
extern NPCSndTrax g_sndTrax_Glove[];
extern NPCSndTrax g_sndTrax_Monsoon[];
extern NPCSndTrax g_sndTrax_Sleepy[];
extern NPCSndTrax g_sndTrax_Chuck[];
extern NPCSndTrax g_sndTrax_ArfArf[];
extern NPCSndTrax g_sndTrax_ArfDog[];
extern NPCSndTrax g_sndTrax_Tubelet[];
extern NPCSndTrax g_sndTrax_Slick[];
extern NPCSndTrax g_sndTrax_KingJelly[];
extern NPCSndTrax g_sndTrax_Dutchman[];
extern NPCSndTrax g_sndTrax_BossSandy[];

#endif
