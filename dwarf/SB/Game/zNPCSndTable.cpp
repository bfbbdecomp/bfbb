typedef struct NPCSndTrax;
typedef enum en_NPC_SOUND;
typedef struct NPCSndProp;


typedef float32 type_0[26];
typedef uint32 type_1[26];
typedef int32 type_2[32];
typedef float32 type_3[32];
typedef int8* type_4[26];
typedef NPCSndProp type_5[0];
typedef NPCSndTrax type_6[0];
typedef NPCSndTrax type_7[0];

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
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
	int32 flg_snd;
	float32 tym_delayNext;
};

float32 g_tmrz_sndplay[26];
uint32 g_hash_sndgroup[26];
int8* g_strz_sndgroup[26];
NPCSndTrax g_sndTrax_Universal[0];
NPCSndTrax g_sndTrax_General[0];
NPCSndProp g_sndProps[0];

uint32 NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share);
en_NPC_SOUND NPCS_SndTypeFromHash(uint32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share);
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype);
void NPCS_SndTablePrepare(NPCSndTrax* trax);
int32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype);
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, float32 delayNext);
void NPCS_SndTimersReset();
void NPCS_SndTimersUpdate(float32 dt);
void NPCS_Shutdown();
void NPCS_Startup();

// NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax
// Start address: 0x310330
uint32 NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share)
{
	uint32 aid_choice;
	NPCSndTrax* trax;
	int32 i;
	int32 ingroup;
	int32 list[32];
	float32 wts[32];
	int32 cnt;
	float32 use_wt;
	// Line 280, Address: 0x310330, Func Offset: 0
	// Line 281, Address: 0x310334, Func Offset: 0x4
	// Line 280, Address: 0x310338, Func Offset: 0x8
	// Line 289, Address: 0x31033c, Func Offset: 0xc
	// Line 280, Address: 0x310340, Func Offset: 0x10
	// Line 289, Address: 0x310344, Func Offset: 0x14
	// Line 290, Address: 0x310368, Func Offset: 0x38
	// Line 291, Address: 0x310398, Func Offset: 0x68
	// Line 294, Address: 0x31039c, Func Offset: 0x6c
	// Line 300, Address: 0x3103a8, Func Offset: 0x78
	// Line 304, Address: 0x3103ac, Func Offset: 0x7c
	// Line 314, Address: 0x3103b0, Func Offset: 0x80
	// Line 302, Address: 0x3103b4, Func Offset: 0x84
	// Line 298, Address: 0x3103b8, Func Offset: 0x88
	// Line 294, Address: 0x3103bc, Func Offset: 0x8c
	// Line 296, Address: 0x3103c0, Func Offset: 0x90
	// Line 298, Address: 0x3103c8, Func Offset: 0x98
	// Line 299, Address: 0x3103cc, Func Offset: 0x9c
	// Line 300, Address: 0x3103d8, Func Offset: 0xa8
	// Line 302, Address: 0x3103e0, Func Offset: 0xb0
	// Line 303, Address: 0x3103e4, Func Offset: 0xb4
	// Line 304, Address: 0x3103f0, Func Offset: 0xc0
	// Line 305, Address: 0x3103f8, Func Offset: 0xc8
	// Line 306, Address: 0x310408, Func Offset: 0xd8
	// Line 307, Address: 0x310410, Func Offset: 0xe0
	// Line 308, Address: 0x310414, Func Offset: 0xe4
	// Line 312, Address: 0x310420, Func Offset: 0xf0
	// Line 313, Address: 0x310438, Func Offset: 0x108
	// Line 314, Address: 0x310440, Func Offset: 0x110
	// Line 315, Address: 0x310444, Func Offset: 0x114
	// Line 316, Address: 0x310448, Func Offset: 0x118
	// Line 318, Address: 0x310450, Func Offset: 0x120
	// Line 319, Address: 0x310454, Func Offset: 0x124
	// Line 321, Address: 0x310460, Func Offset: 0x130
	// Line 323, Address: 0x310468, Func Offset: 0x138
	// Line 325, Address: 0x310474, Func Offset: 0x144
	// Line 326, Address: 0x310478, Func Offset: 0x148
	// Line 328, Address: 0x310488, Func Offset: 0x158
	// Line 329, Address: 0x310490, Func Offset: 0x160
	// Line 332, Address: 0x310498, Func Offset: 0x168
	// Line 335, Address: 0x3104a4, Func Offset: 0x174
	// Line 337, Address: 0x3104ac, Func Offset: 0x17c
	// Line 339, Address: 0x3104b4, Func Offset: 0x184
	// Line 342, Address: 0x3104c8, Func Offset: 0x198
	// Line 344, Address: 0x3104d0, Func Offset: 0x1a0
	// Line 345, Address: 0x3104e4, Func Offset: 0x1b4
	// Line 352, Address: 0x310580, Func Offset: 0x250
	// Func End, Address: 0x310594, Func Offset: 0x264
}

// NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax
// Start address: 0x3105a0
en_NPC_SOUND NPCS_SndTypeFromHash(uint32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share)
{
	en_NPC_SOUND da_type;
	NPCSndTrax* trax;
	int32 i;
	// Line 209, Address: 0x3105a0, Func Offset: 0
	// Line 222, Address: 0x3105a4, Func Offset: 0x4
	// Line 225, Address: 0x3105a8, Func Offset: 0x8
	// Line 226, Address: 0x3105ac, Func Offset: 0xc
	// Line 224, Address: 0x3105b0, Func Offset: 0x10
	// Line 225, Address: 0x3105c0, Func Offset: 0x20
	// Line 226, Address: 0x3105d0, Func Offset: 0x30
	// Line 227, Address: 0x3105e0, Func Offset: 0x40
	// Line 228, Address: 0x3105e8, Func Offset: 0x48
	// Line 232, Address: 0x3105f8, Func Offset: 0x58
	// Line 234, Address: 0x310604, Func Offset: 0x64
	// Line 235, Address: 0x31060c, Func Offset: 0x6c
	// Line 238, Address: 0x310610, Func Offset: 0x70
	// Line 240, Address: 0x310614, Func Offset: 0x74
	// Line 241, Address: 0x310624, Func Offset: 0x84
	// Line 244, Address: 0x310638, Func Offset: 0x98
	// Func End, Address: 0x310640, Func Offset: 0xa0
}

// NPCS_SndFindProps__F12en_NPC_SOUND
// Start address: 0x310640
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype)
{
	NPCSndProp* sprop;
	// Line 193, Address: 0x310640, Func Offset: 0
	// Line 194, Address: 0x31064c, Func Offset: 0xc
	// Line 196, Address: 0x310658, Func Offset: 0x18
	// Line 198, Address: 0x310660, Func Offset: 0x20
	// Line 199, Address: 0x310668, Func Offset: 0x28
	// Line 205, Address: 0x310670, Func Offset: 0x30
	// Func End, Address: 0x310678, Func Offset: 0x38
}

// NPCS_SndTablePrepare__FP10NPCSndTrax
// Start address: 0x310680
void NPCS_SndTablePrepare(NPCSndTrax* trax)
{
	uint32 hash;
	// Line 159, Address: 0x310680, Func Offset: 0
	// Line 167, Address: 0x310690, Func Offset: 0x10
	// Line 169, Address: 0x3106a0, Func Offset: 0x20
	// Line 171, Address: 0x3106ac, Func Offset: 0x2c
	// Line 172, Address: 0x3106d0, Func Offset: 0x50
	// Line 175, Address: 0x3106d8, Func Offset: 0x58
	// Line 177, Address: 0x3106dc, Func Offset: 0x5c
	// Line 182, Address: 0x3106e8, Func Offset: 0x68
	// Func End, Address: 0x3106fc, Func Offset: 0x7c
}

// NPCS_SndOkToPlay__F12en_NPC_SOUND
// Start address: 0x310700
int32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype)
{
	// Line 144, Address: 0x310700, Func Offset: 0
	// Line 145, Address: 0x310718, Func Offset: 0x18
	// Line 151, Address: 0x310758, Func Offset: 0x58
	// Func End, Address: 0x310760, Func Offset: 0x60
}

// NPCS_SndTypePlayed__F12en_NPC_SOUNDf
// Start address: 0x310760
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, float32 delayNext)
{
	float32 tym;
	// Line 118, Address: 0x310760, Func Offset: 0
	// Line 122, Address: 0x31077c, Func Offset: 0x1c
	// Line 123, Address: 0x310780, Func Offset: 0x20
	// Line 124, Address: 0x31078c, Func Offset: 0x2c
	// Line 125, Address: 0x310794, Func Offset: 0x34
	// Line 126, Address: 0x310798, Func Offset: 0x38
	// Line 127, Address: 0x3107a0, Func Offset: 0x40
	// Line 130, Address: 0x3107a8, Func Offset: 0x48
	// Line 134, Address: 0x3107b0, Func Offset: 0x50
	// Line 137, Address: 0x3107c8, Func Offset: 0x68
	// Line 140, Address: 0x3107d8, Func Offset: 0x78
	// Func End, Address: 0x3107e0, Func Offset: 0x80
}

// NPCS_SndTimersReset__Fv
// Start address: 0x3107e0
void NPCS_SndTimersReset()
{
	int32 i;
	// Line 108, Address: 0x3107e0, Func Offset: 0
	// Line 109, Address: 0x3107ec, Func Offset: 0xc
	// Line 112, Address: 0x31083c, Func Offset: 0x5c
	// Func End, Address: 0x310844, Func Offset: 0x64
}

// NPCS_SndTimersUpdate__Ff
// Start address: 0x310850
void NPCS_SndTimersUpdate(float32 dt)
{
	int32 i;
	// Line 99, Address: 0x310850, Func Offset: 0
	// Line 100, Address: 0x31085c, Func Offset: 0xc
	// Line 99, Address: 0x310864, Func Offset: 0x14
	// Line 100, Address: 0x310870, Func Offset: 0x20
	// Line 101, Address: 0x310880, Func Offset: 0x30
	// Line 100, Address: 0x310884, Func Offset: 0x34
	// Line 101, Address: 0x310888, Func Offset: 0x38
	// Line 103, Address: 0x310894, Func Offset: 0x44
	// Func End, Address: 0x31089c, Func Offset: 0x4c
}

// NPCS_Shutdown__Fv
// Start address: 0x3108a0
void NPCS_Shutdown()
{
	// Line 89, Address: 0x3108a0, Func Offset: 0
	// Func End, Address: 0x3108a8, Func Offset: 0x8
}

// NPCS_Startup__Fv
// Start address: 0x3108b0
void NPCS_Startup()
{
	int32 i;
	// Line 76, Address: 0x3108b0, Func Offset: 0
	// Line 78, Address: 0x3108c0, Func Offset: 0x10
	// Line 76, Address: 0x3108c4, Func Offset: 0x14
	// Line 78, Address: 0x3108c8, Func Offset: 0x18
	// Line 81, Address: 0x3108d8, Func Offset: 0x28
	// Line 82, Address: 0x3108e0, Func Offset: 0x30
	// Line 81, Address: 0x3108e4, Func Offset: 0x34
	// Line 82, Address: 0x3108e8, Func Offset: 0x38
	// Line 81, Address: 0x3108ec, Func Offset: 0x3c
	// Line 82, Address: 0x3108f0, Func Offset: 0x40
	// Line 84, Address: 0x3108f8, Func Offset: 0x48
	// Func End, Address: 0x310910, Func Offset: 0x60
}

