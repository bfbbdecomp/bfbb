typedef enum en_NPC_SOUND;
typedef struct NPCSndTrax;
typedef struct NPCSndProp;


typedef NPCSndTrax type_0[1];
typedef NPCSndTrax type_1[1];
typedef NPCSndTrax type_2[3];
typedef NPCSndTrax type_3[4];
typedef NPCSndTrax type_4[5];
typedef NPCSndTrax type_5[5];
typedef NPCSndTrax type_6[1];
typedef NPCSndTrax type_7[3];
typedef NPCSndTrax type_8[1];
typedef NPCSndTrax type_9[1];
typedef NPCSndTrax type_10[1];
typedef NPCSndTrax type_11[4];
typedef NPCSndTrax type_12[6];
typedef NPCSndTrax type_13[4];
typedef NPCSndTrax type_14[2];
typedef NPCSndTrax type_15[6];
typedef NPCSndTrax type_16[1];
typedef NPCSndTrax type_17[2];
typedef NPCSndTrax type_18[1];
typedef NPCSndTrax type_19[2];
typedef NPCSndTrax type_20[4];
typedef NPCSndTrax type_21[5];
typedef NPCSndTrax type_22[1];
typedef NPCSndTrax type_23[1];
typedef NPCSndTrax type_24[3];
typedef NPCSndTrax type_25[1];
typedef NPCSndTrax type_26[3];
typedef NPCSndTrax type_27[1];
typedef NPCSndTrax type_28[2];
typedef NPCSndTrax type_29[2];
typedef NPCSndTrax type_30[3];
typedef NPCSndProp type_31[17];
typedef NPCSndTrax type_32[3];
typedef NPCSndTrax type_33[3];
typedef NPCSndTrax type_34[1];
typedef NPCSndTrax type_35[27];
typedef NPCSndTrax type_36[16];
typedef NPCSndTrax type_37[3];

enum en_NPC_SOUND
{
	NPC_STYP_BOGUS = 0xfffffffe,
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

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct NPCSndProp
{
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tym_delayNext;
};

NPCSndProp g_sndProps[17];
NPCSndTrax g_sndTrax_Universal[1];
NPCSndTrax g_sndTrax_General[1];
NPCSndTrax g_sndTrax_Villager[27];
NPCSndTrax g_sndTrax_Squidward[6];
NPCSndTrax g_sndTrax_VillagerCoStar[16];
NPCSndTrax g_sndTrax_VillagerMale[1];
NPCSndTrax g_sndTrax_VillagerFemale[1];
NPCSndTrax g_sndTrax_VillagerElder[1];
NPCSndTrax g_sndTrax_VillagerEldess[1];
NPCSndTrax g_sndTrax_VillagerBoy[2];
NPCSndTrax g_sndTrax_VillagerGirl[2];
NPCSndTrax g_sndTrax_Neptune[1];
NPCSndTrax g_sndTrax_Jelly[4];
NPCSndTrax g_sndTrax_TikiShared[3];
NPCSndTrax g_sndTrax_TikiThunder[2];
NPCSndTrax g_sndTrax_Duplotron[3];
NPCSndTrax g_sndTrax_Robot[2];
NPCSndTrax g_sndTrax_Fodder[3];
NPCSndTrax g_sndTrax_FodBomb[6];
NPCSndTrax g_sndTrax_FodBzzt[3];
NPCSndTrax g_sndTrax_Chomper[4];
NPCSndTrax g_sndTrax_Hammer[3];
NPCSndTrax g_sndTrax_TarTar[4];
NPCSndTrax g_sndTrax_Glove[2];
NPCSndTrax g_sndTrax_Monsoon[3];
NPCSndTrax g_sndTrax_Sleepy[3];
NPCSndTrax g_sndTrax_Chuck[5];
NPCSndTrax g_sndTrax_ArfArf[3];
NPCSndTrax g_sndTrax_ArfDog[4];
NPCSndTrax g_sndTrax_Tubelet[5];
NPCSndTrax g_sndTrax_Slick[5];
NPCSndTrax g_sndTrax_Prawn[1];
NPCSndTrax g_sndTrax_KingJelly[1];
NPCSndTrax g_sndTrax_Dutchman[1];
NPCSndTrax g_sndTrax_BossSandy[1];
NPCSndTrax g_sndTrax_BossPat[1];
NPCSndTrax g_sndTrax_BossSB[1];


