typedef struct NPCSndTrax;
typedef enum en_NPC_SOUND;
typedef struct NPCSndProp;


typedef f32 type_0[26];
typedef u32 type_1[26];
typedef s32 type_2[32];
typedef f32 type_3[32];
typedef s8* type_4[26];
typedef NPCSndProp type_5[0];
typedef NPCSndTrax type_6[0];
typedef NPCSndTrax type_7[0];

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
};

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

struct NPCSndProp
{
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tym_delayNext;
};

type_0 g_tmrz_sndplay;
type_1 g_hash_sndgroup;
type_4 g_strz_sndgroup;
type_6 g_sndTrax_Universal;
type_7 g_sndTrax_General;
type_5 g_sndProps;

u32 NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share);
en_NPC_SOUND NPCS_SndTypeFromHash(u32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share);
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype);
void NPCS_SndTablePrepare(NPCSndTrax* trax);
s32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype);
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, f32 delayNext);
void NPCS_SndTimersReset();
void NPCS_SndTimersUpdate(f32 dt);
void NPCS_Shutdown();
void NPCS_Startup();

// NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax
// Start address: 0x310330
u32 NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share)
{
	u32 aid_choice;
	NPCSndTrax* trax;
	s32 i;
	s32 ingroup;
	type_2 list;
	type_3 wts;
	s32 cnt;
	f32 use_wt;
}

// NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax
// Start address: 0x3105a0
en_NPC_SOUND NPCS_SndTypeFromHash(u32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share)
{
	en_NPC_SOUND da_type;
	NPCSndTrax* trax;
	s32 i;
}

// NPCS_SndFindProps__F12en_NPC_SOUND
// Start address: 0x310640
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype)
{
	NPCSndProp* sprop;
}

// NPCS_SndTablePrepare__FP10NPCSndTrax
// Start address: 0x310680
void NPCS_SndTablePrepare(NPCSndTrax* trax)
{
	u32 hash;
}

// NPCS_SndOkToPlay__F12en_NPC_SOUND
// Start address: 0x310700
s32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype)
{
}

// NPCS_SndTypePlayed__F12en_NPC_SOUNDf
// Start address: 0x310760
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, f32 delayNext)
{
	f32 tym;
}

// NPCS_SndTimersReset__Fv
// Start address: 0x3107e0
void NPCS_SndTimersReset()
{
	s32 i;
}

// NPCS_SndTimersUpdate__Ff
// Start address: 0x310850
void NPCS_SndTimersUpdate(f32 dt)
{
	s32 i;
}

// NPCS_Shutdown__Fv
// Start address: 0x3108a0
void NPCS_Shutdown()
{
}

// NPCS_Startup__Fv
// Start address: 0x3108b0
void NPCS_Startup()
{
	s32 i;
}

