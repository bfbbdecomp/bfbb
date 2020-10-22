typedef struct _tagxPad;
typedef struct analog_data;
typedef struct _tagiPad;
typedef struct xVec2;
typedef struct _tagxRumble;
typedef struct _tagiTRCPadInfo;
typedef enum _tagPadState;
typedef enum _tagTRCState;
typedef struct _tagPadAnalog;
typedef enum _tagPadInit;
typedef struct _tagTRCPadInfo;
typedef enum _tagRumbleType;


typedef float32 type_0[22];
typedef float32 type_1[22];
typedef uint8 type_2[32];
typedef _tagTRCPadInfo type_3[4];
typedef analog_data type_4[2];
typedef uint8 type_5[6];
typedef <unknown fundamental type (0xa510)> type_6[16];
typedef <unknown fundamental type (0xa510)> type_7[16][4];
typedef float32 type_8[4];
typedef uint8 type_9[22];
typedef uint8 type_10[22];
typedef uint8 type_11[6];

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _tagiPad
{
	int32 port;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

uint8 mReadData[32];
<unknown fundamental type (0xa510)> mPadDmaBuffer[16][4];
uint8 mActDirect[6];
uint8 mActAlign[6];
float32 mLargeMotor[4];
_tagTRCPadInfo gTrcPad[4];

void iPadKill();
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble);
void iPadStopRumble(_tagxPad* pad);
void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed);
int32 iPadUpdate(_tagxPad* pad, uint32* on);
void iPadTRCUpdate(_tagxPad* pad);
_tagxPad* iPadEnable(_tagxPad* pad, int16 port);
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init);
int32 iPadInit();

// iPadKill__Fv
// Start address: 0x1b0070
void iPadKill()
{
	// Line 873, Address: 0x1b0070, Func Offset: 0
	// Func End, Address: 0x1b0078, Func Offset: 0x8
}

// iPadStartRumble__FP8_tagxPadP11_tagxRumble
// Start address: 0x1b0080
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble)
{
	// Line 754, Address: 0x1b0080, Func Offset: 0
	// Line 807, Address: 0x1b0084, Func Offset: 0x4
	// Line 809, Address: 0x1b00ac, Func Offset: 0x2c
	// Line 810, Address: 0x1b00b0, Func Offset: 0x30
	// Line 812, Address: 0x1b00b4, Func Offset: 0x34
	// Line 814, Address: 0x1b00bc, Func Offset: 0x3c
	// Line 815, Address: 0x1b00c0, Func Offset: 0x40
	// Line 816, Address: 0x1b00c4, Func Offset: 0x44
	// Line 817, Address: 0x1b00c8, Func Offset: 0x48
	// Line 820, Address: 0x1b00d0, Func Offset: 0x50
	// Line 822, Address: 0x1b00d8, Func Offset: 0x58
	// Line 823, Address: 0x1b00dc, Func Offset: 0x5c
	// Line 825, Address: 0x1b00e4, Func Offset: 0x64
	// Line 826, Address: 0x1b00e8, Func Offset: 0x68
	// Line 828, Address: 0x1b00f0, Func Offset: 0x70
	// Line 829, Address: 0x1b00f4, Func Offset: 0x74
	// Line 831, Address: 0x1b00fc, Func Offset: 0x7c
	// Line 832, Address: 0x1b0100, Func Offset: 0x80
	// Line 834, Address: 0x1b0108, Func Offset: 0x88
	// Line 835, Address: 0x1b010c, Func Offset: 0x8c
	// Line 837, Address: 0x1b0114, Func Offset: 0x94
	// Line 838, Address: 0x1b0118, Func Offset: 0x98
	// Line 840, Address: 0x1b0120, Func Offset: 0xa0
	// Line 841, Address: 0x1b0124, Func Offset: 0xa4
	// Line 843, Address: 0x1b012c, Func Offset: 0xac
	// Line 844, Address: 0x1b0130, Func Offset: 0xb0
	// Line 846, Address: 0x1b0138, Func Offset: 0xb8
	// Line 856, Address: 0x1b0140, Func Offset: 0xc0
	// Line 857, Address: 0x1b017c, Func Offset: 0xfc
	// Line 856, Address: 0x1b0180, Func Offset: 0x100
	// Line 857, Address: 0x1b018c, Func Offset: 0x10c
	// Func End, Address: 0x1b019c, Func Offset: 0x11c
}

// iPadStopRumble__FP8_tagxPad
// Start address: 0x1b01a0
void iPadStopRumble(_tagxPad* pad)
{
	// Line 745, Address: 0x1b01a0, Func Offset: 0
	// Line 747, Address: 0x1b01a4, Func Offset: 0x4
	// Line 746, Address: 0x1b01a8, Func Offset: 0x8
	// Line 747, Address: 0x1b01ac, Func Offset: 0xc
	// Func End, Address: 0x1b01bc, Func Offset: 0x1c
}

// iPadRumbleFx__FP8_tagxPadP11_tagxRumblef
// Start address: 0x1b01c0
void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed)
{
	float32 act;
	float32 scale;
	// Line 720, Address: 0x1b01c0, Func Offset: 0
	// Line 722, Address: 0x1b01cc, Func Offset: 0xc
	// Line 725, Address: 0x1b01d4, Func Offset: 0x14
	// Line 728, Address: 0x1b01e0, Func Offset: 0x20
	// Line 732, Address: 0x1b01e4, Func Offset: 0x24
	// Line 725, Address: 0x1b01e8, Func Offset: 0x28
	// Line 732, Address: 0x1b01ec, Func Offset: 0x2c
	// Line 725, Address: 0x1b01f0, Func Offset: 0x30
	// Line 727, Address: 0x1b0200, Func Offset: 0x40
	// Line 728, Address: 0x1b0204, Func Offset: 0x44
	// Line 729, Address: 0x1b0208, Func Offset: 0x48
	// Line 730, Address: 0x1b020c, Func Offset: 0x4c
	// Line 732, Address: 0x1b0210, Func Offset: 0x50
	// Line 734, Address: 0x1b0248, Func Offset: 0x88
	// Line 735, Address: 0x1b025c, Func Offset: 0x9c
	// Line 736, Address: 0x1b0260, Func Offset: 0xa0
	// Func End, Address: 0x1b026c, Func Offset: 0xac
}

// iPadUpdate__FP8_tagxPadPUi
// Start address: 0x1b0270
int32 iPadUpdate(_tagxPad* pad, uint32* on)
{
	int32 temp;
	uint32 temp_on;
	int32 result;
	// Line 526, Address: 0x1b0270, Func Offset: 0
	// Line 532, Address: 0x1b0288, Func Offset: 0x18
	// Line 534, Address: 0x1b02b8, Func Offset: 0x48
	// Line 535, Address: 0x1b02c0, Func Offset: 0x50
	// Line 541, Address: 0x1b02c8, Func Offset: 0x58
	// Line 542, Address: 0x1b02d8, Func Offset: 0x68
	// Line 546, Address: 0x1b02e0, Func Offset: 0x70
	// Line 550, Address: 0x1b02f0, Func Offset: 0x80
	// Line 551, Address: 0x1b0304, Func Offset: 0x94
	// Line 558, Address: 0x1b030c, Func Offset: 0x9c
	// Line 560, Address: 0x1b031c, Func Offset: 0xac
	// Line 563, Address: 0x1b0324, Func Offset: 0xb4
	// Line 561, Address: 0x1b0328, Func Offset: 0xb8
	// Line 563, Address: 0x1b032c, Func Offset: 0xbc
	// Line 564, Address: 0x1b0334, Func Offset: 0xc4
	// Line 567, Address: 0x1b0340, Func Offset: 0xd0
	// Line 568, Address: 0x1b0344, Func Offset: 0xd4
	// Line 571, Address: 0x1b0348, Func Offset: 0xd8
	// Line 573, Address: 0x1b0358, Func Offset: 0xe8
	// Line 576, Address: 0x1b0360, Func Offset: 0xf0
	// Line 574, Address: 0x1b0364, Func Offset: 0xf4
	// Line 576, Address: 0x1b0368, Func Offset: 0xf8
	// Line 577, Address: 0x1b0370, Func Offset: 0x100
	// Line 580, Address: 0x1b0378, Func Offset: 0x108
	// Line 581, Address: 0x1b037c, Func Offset: 0x10c
	// Line 586, Address: 0x1b0380, Func Offset: 0x110
	// Line 587, Address: 0x1b0384, Func Offset: 0x114
	// Line 591, Address: 0x1b0388, Func Offset: 0x118
	// Line 588, Address: 0x1b038c, Func Offset: 0x11c
	// Line 617, Address: 0x1b0390, Func Offset: 0x120
	// Line 589, Address: 0x1b0394, Func Offset: 0x124
	// Line 591, Address: 0x1b0398, Func Offset: 0x128
	// Line 592, Address: 0x1b03a0, Func Offset: 0x130
	// Line 593, Address: 0x1b03ac, Func Offset: 0x13c
	// Line 594, Address: 0x1b03b8, Func Offset: 0x148
	// Line 597, Address: 0x1b03c4, Func Offset: 0x154
	// Line 598, Address: 0x1b03d0, Func Offset: 0x160
	// Line 602, Address: 0x1b03dc, Func Offset: 0x16c
	// Line 599, Address: 0x1b03e0, Func Offset: 0x170
	// Line 600, Address: 0x1b03e4, Func Offset: 0x174
	// Line 602, Address: 0x1b03e8, Func Offset: 0x178
	// Line 603, Address: 0x1b03f0, Func Offset: 0x180
	// Line 608, Address: 0x1b03fc, Func Offset: 0x18c
	// Line 604, Address: 0x1b0400, Func Offset: 0x190
	// Line 605, Address: 0x1b0404, Func Offset: 0x194
	// Line 608, Address: 0x1b0408, Func Offset: 0x198
	// Line 609, Address: 0x1b0410, Func Offset: 0x1a0
	// Line 610, Address: 0x1b041c, Func Offset: 0x1ac
	// Line 611, Address: 0x1b0428, Func Offset: 0x1b8
	// Line 625, Address: 0x1b0434, Func Offset: 0x1c4
	// Line 612, Address: 0x1b0438, Func Offset: 0x1c8
	// Line 613, Address: 0x1b043c, Func Offset: 0x1cc
	// Line 625, Address: 0x1b0440, Func Offset: 0x1d0
	// Line 626, Address: 0x1b0444, Func Offset: 0x1d4
	// Line 625, Address: 0x1b0448, Func Offset: 0x1d8
	// Line 626, Address: 0x1b044c, Func Offset: 0x1dc
	// Line 625, Address: 0x1b0450, Func Offset: 0x1e0
	// Line 626, Address: 0x1b0454, Func Offset: 0x1e4
	// Line 625, Address: 0x1b0458, Func Offset: 0x1e8
	// Line 626, Address: 0x1b045c, Func Offset: 0x1ec
	// Line 629, Address: 0x1b046c, Func Offset: 0x1fc
	// Line 630, Address: 0x1b0470, Func Offset: 0x200
	// Line 629, Address: 0x1b0474, Func Offset: 0x204
	// Line 636, Address: 0x1b0478, Func Offset: 0x208
	// Line 629, Address: 0x1b047c, Func Offset: 0x20c
	// Line 630, Address: 0x1b0480, Func Offset: 0x210
	// Line 629, Address: 0x1b0488, Func Offset: 0x218
	// Line 631, Address: 0x1b048c, Func Offset: 0x21c
	// Line 630, Address: 0x1b0490, Func Offset: 0x220
	// Line 631, Address: 0x1b0494, Func Offset: 0x224
	// Line 636, Address: 0x1b0498, Func Offset: 0x228
	// Line 631, Address: 0x1b049c, Func Offset: 0x22c
	// Line 632, Address: 0x1b04a0, Func Offset: 0x230
	// Line 631, Address: 0x1b04a4, Func Offset: 0x234
	// Line 632, Address: 0x1b04a8, Func Offset: 0x238
	// Line 633, Address: 0x1b04b0, Func Offset: 0x240
	// Line 632, Address: 0x1b04b4, Func Offset: 0x244
	// Line 633, Address: 0x1b04b8, Func Offset: 0x248
	// Line 634, Address: 0x1b04c0, Func Offset: 0x250
	// Line 635, Address: 0x1b04c8, Func Offset: 0x258
	// Line 634, Address: 0x1b04cc, Func Offset: 0x25c
	// Line 635, Address: 0x1b04d0, Func Offset: 0x260
	// Line 634, Address: 0x1b04d4, Func Offset: 0x264
	// Line 635, Address: 0x1b04d8, Func Offset: 0x268
	// Line 636, Address: 0x1b04e0, Func Offset: 0x270
	// Line 637, Address: 0x1b04e8, Func Offset: 0x278
	// Line 636, Address: 0x1b04ec, Func Offset: 0x27c
	// Line 637, Address: 0x1b04f0, Func Offset: 0x280
	// Line 638, Address: 0x1b04f8, Func Offset: 0x288
	// Line 637, Address: 0x1b04fc, Func Offset: 0x28c
	// Line 638, Address: 0x1b0500, Func Offset: 0x290
	// Line 639, Address: 0x1b0508, Func Offset: 0x298
	// Line 638, Address: 0x1b050c, Func Offset: 0x29c
	// Line 639, Address: 0x1b0510, Func Offset: 0x2a0
	// Line 640, Address: 0x1b0518, Func Offset: 0x2a8
	// Line 639, Address: 0x1b051c, Func Offset: 0x2ac
	// Line 640, Address: 0x1b0520, Func Offset: 0x2b0
	// Line 641, Address: 0x1b0528, Func Offset: 0x2b8
	// Line 640, Address: 0x1b052c, Func Offset: 0x2bc
	// Line 641, Address: 0x1b0530, Func Offset: 0x2c0
	// Line 642, Address: 0x1b0538, Func Offset: 0x2c8
	// Line 641, Address: 0x1b053c, Func Offset: 0x2cc
	// Line 642, Address: 0x1b0540, Func Offset: 0x2d0
	// Line 643, Address: 0x1b0548, Func Offset: 0x2d8
	// Line 642, Address: 0x1b054c, Func Offset: 0x2dc
	// Line 643, Address: 0x1b0550, Func Offset: 0x2e0
	// Line 644, Address: 0x1b0558, Func Offset: 0x2e8
	// Line 643, Address: 0x1b055c, Func Offset: 0x2ec
	// Line 644, Address: 0x1b0560, Func Offset: 0x2f0
	// Line 668, Address: 0x1b0568, Func Offset: 0x2f8
	// Line 671, Address: 0x1b0570, Func Offset: 0x300
	// Line 672, Address: 0x1b0574, Func Offset: 0x304
	// Line 709, Address: 0x1b0578, Func Offset: 0x308
	// Line 673, Address: 0x1b057c, Func Offset: 0x30c
	// Line 709, Address: 0x1b0580, Func Offset: 0x310
	// Line 674, Address: 0x1b0584, Func Offset: 0x314
	// Line 675, Address: 0x1b0588, Func Offset: 0x318
	// Line 676, Address: 0x1b058c, Func Offset: 0x31c
	// Line 677, Address: 0x1b0590, Func Offset: 0x320
	// Line 709, Address: 0x1b0594, Func Offset: 0x324
	// Line 710, Address: 0x1b05ac, Func Offset: 0x33c
	// Line 715, Address: 0x1b05b8, Func Offset: 0x348
	// Line 716, Address: 0x1b05c0, Func Offset: 0x350
	// Func End, Address: 0x1b05d4, Func Offset: 0x364
}

// iPadTRCUpdate__FP8_tagxPad
// Start address: 0x1b05e0
void iPadTRCUpdate(_tagxPad* pad)
{
	// Line 469, Address: 0x1b05e0, Func Offset: 0
	// Line 470, Address: 0x1b05e4, Func Offset: 0x4
	// Line 469, Address: 0x1b05e8, Func Offset: 0x8
	// Line 470, Address: 0x1b05ec, Func Offset: 0xc
	// Line 469, Address: 0x1b05f0, Func Offset: 0x10
	// Line 470, Address: 0x1b05f4, Func Offset: 0x14
	// Line 469, Address: 0x1b05f8, Func Offset: 0x18
	// Line 470, Address: 0x1b0608, Func Offset: 0x28
	// Line 477, Address: 0x1b0640, Func Offset: 0x60
	// Line 478, Address: 0x1b065c, Func Offset: 0x7c
	// Line 477, Address: 0x1b0664, Func Offset: 0x84
	// Line 478, Address: 0x1b0670, Func Offset: 0x90
	// Line 482, Address: 0x1b067c, Func Offset: 0x9c
	// Line 484, Address: 0x1b0684, Func Offset: 0xa4
	// Line 485, Address: 0x1b0688, Func Offset: 0xa8
	// Line 486, Address: 0x1b06a4, Func Offset: 0xc4
	// Line 485, Address: 0x1b06ac, Func Offset: 0xcc
	// Line 486, Address: 0x1b06b8, Func Offset: 0xd8
	// Line 490, Address: 0x1b06c4, Func Offset: 0xe4
	// Line 492, Address: 0x1b06cc, Func Offset: 0xec
	// Line 493, Address: 0x1b06d0, Func Offset: 0xf0
	// Line 502, Address: 0x1b06e0, Func Offset: 0x100
	// Line 503, Address: 0x1b06e4, Func Offset: 0x104
	// Line 504, Address: 0x1b06e8, Func Offset: 0x108
	// Line 505, Address: 0x1b06ec, Func Offset: 0x10c
	// Line 506, Address: 0x1b06f0, Func Offset: 0x110
	// Line 507, Address: 0x1b06f4, Func Offset: 0x114
	// Line 508, Address: 0x1b06f8, Func Offset: 0x118
	// Line 509, Address: 0x1b06fc, Func Offset: 0x11c
	// Func End, Address: 0x1b070c, Func Offset: 0x12c
}

// iPadEnable__FP8_tagxPads
// Start address: 0x1b0710
_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
	_tagPadInit pad_init;
	// Line 432, Address: 0x1b0710, Func Offset: 0
	// Line 433, Address: 0x1b071c, Func Offset: 0xc
	// Line 436, Address: 0x1b0724, Func Offset: 0x14
	// Line 440, Address: 0x1b0728, Func Offset: 0x18
	// Line 441, Address: 0x1b072c, Func Offset: 0x1c
	// Line 442, Address: 0x1b0730, Func Offset: 0x20
	// Line 451, Address: 0x1b0734, Func Offset: 0x24
	// Line 453, Address: 0x1b0738, Func Offset: 0x28
	// Line 456, Address: 0x1b0744, Func Offset: 0x34
	// Line 460, Address: 0x1b0754, Func Offset: 0x44
	// Line 462, Address: 0x1b0764, Func Offset: 0x54
	// Line 464, Address: 0x1b0768, Func Offset: 0x58
	// Line 465, Address: 0x1b076c, Func Offset: 0x5c
	// Func End, Address: 0x1b077c, Func Offset: 0x6c
}

// iPadEnableGuts__FP8_tagxPadP11_tagPadInit
// Start address: 0x1b0780
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init)
{
	int32 state;
	int32 id;
	int32 exid;
	int32 state3;
	int32 state3;
	int32 state5;
	// Line 105, Address: 0x1b0780, Func Offset: 0
	// Line 110, Address: 0x1b0798, Func Offset: 0x18
	// Line 113, Address: 0x1b07c4, Func Offset: 0x44
	// Line 114, Address: 0x1b07c8, Func Offset: 0x48
	// Line 117, Address: 0x1b07d8, Func Offset: 0x58
	// Line 125, Address: 0x1b07f0, Func Offset: 0x70
	// Line 126, Address: 0x1b07f4, Func Offset: 0x74
	// Line 128, Address: 0x1b07fc, Func Offset: 0x7c
	// Line 130, Address: 0x1b0800, Func Offset: 0x80
	// Line 131, Address: 0x1b080c, Func Offset: 0x8c
	// Line 139, Address: 0x1b0814, Func Offset: 0x94
	// Line 143, Address: 0x1b0820, Func Offset: 0xa0
	// Line 147, Address: 0x1b082c, Func Offset: 0xac
	// Line 149, Address: 0x1b083c, Func Offset: 0xbc
	// Line 150, Address: 0x1b0840, Func Offset: 0xc0
	// Line 152, Address: 0x1b0844, Func Offset: 0xc4
	// Line 153, Address: 0x1b084c, Func Offset: 0xcc
	// Line 156, Address: 0x1b0850, Func Offset: 0xd0
	// Line 159, Address: 0x1b0854, Func Offset: 0xd4
	// Line 163, Address: 0x1b0860, Func Offset: 0xe0
	// Line 165, Address: 0x1b086c, Func Offset: 0xec
	// Line 169, Address: 0x1b0870, Func Offset: 0xf0
	// Line 173, Address: 0x1b0878, Func Offset: 0xf8
	// Line 174, Address: 0x1b088c, Func Offset: 0x10c
	// Line 173, Address: 0x1b0890, Func Offset: 0x110
	// Line 174, Address: 0x1b0894, Func Offset: 0x114
	// Line 175, Address: 0x1b08a4, Func Offset: 0x124
	// Line 176, Address: 0x1b08ac, Func Offset: 0x12c
	// Line 179, Address: 0x1b08b0, Func Offset: 0x130
	// Line 183, Address: 0x1b08bc, Func Offset: 0x13c
	// Line 188, Address: 0x1b08d8, Func Offset: 0x158
	// Line 187, Address: 0x1b08dc, Func Offset: 0x15c
	// Line 188, Address: 0x1b08e0, Func Offset: 0x160
	// Line 189, Address: 0x1b08e8, Func Offset: 0x168
	// Line 194, Address: 0x1b08f0, Func Offset: 0x170
	// Line 198, Address: 0x1b0904, Func Offset: 0x184
	// Line 199, Address: 0x1b0910, Func Offset: 0x190
	// Line 201, Address: 0x1b0920, Func Offset: 0x1a0
	// Line 202, Address: 0x1b092c, Func Offset: 0x1ac
	// Line 204, Address: 0x1b0938, Func Offset: 0x1b8
	// Line 209, Address: 0x1b094c, Func Offset: 0x1cc
	// Line 234, Address: 0x1b0950, Func Offset: 0x1d0
	// Line 235, Address: 0x1b0958, Func Offset: 0x1d8
	// Line 238, Address: 0x1b0964, Func Offset: 0x1e4
	// Line 241, Address: 0x1b0968, Func Offset: 0x1e8
	// Line 244, Address: 0x1b0970, Func Offset: 0x1f0
	// Line 257, Address: 0x1b0978, Func Offset: 0x1f8
	// Line 260, Address: 0x1b0980, Func Offset: 0x200
	// Line 261, Address: 0x1b098c, Func Offset: 0x20c
	// Line 263, Address: 0x1b0998, Func Offset: 0x218
	// Line 266, Address: 0x1b09a0, Func Offset: 0x220
	// Line 269, Address: 0x1b09a8, Func Offset: 0x228
	// Line 270, Address: 0x1b09b0, Func Offset: 0x230
	// Line 278, Address: 0x1b09b8, Func Offset: 0x238
	// Line 284, Address: 0x1b09c0, Func Offset: 0x240
	// Line 288, Address: 0x1b09dc, Func Offset: 0x25c
	// Line 292, Address: 0x1b09f4, Func Offset: 0x274
	// Line 295, Address: 0x1b0a00, Func Offset: 0x280
	// Line 301, Address: 0x1b0a04, Func Offset: 0x284
	// Line 310, Address: 0x1b0a10, Func Offset: 0x290
	// Line 306, Address: 0x1b0a14, Func Offset: 0x294
	// Line 305, Address: 0x1b0a18, Func Offset: 0x298
	// Line 306, Address: 0x1b0a1c, Func Offset: 0x29c
	// Line 310, Address: 0x1b0a20, Func Offset: 0x2a0
	// Line 313, Address: 0x1b0a30, Func Offset: 0x2b0
	// Line 315, Address: 0x1b0a48, Func Offset: 0x2c8
	// Line 317, Address: 0x1b0a4c, Func Offset: 0x2cc
	// Line 322, Address: 0x1b0a58, Func Offset: 0x2d8
	// Line 326, Address: 0x1b0a70, Func Offset: 0x2f0
	// Line 329, Address: 0x1b0a78, Func Offset: 0x2f8
	// Line 336, Address: 0x1b0a7c, Func Offset: 0x2fc
	// Line 339, Address: 0x1b0a84, Func Offset: 0x304
	// Line 340, Address: 0x1b0a88, Func Offset: 0x308
	// Line 342, Address: 0x1b0a94, Func Offset: 0x314
	// Line 346, Address: 0x1b0aa0, Func Offset: 0x320
	// Line 350, Address: 0x1b0aa4, Func Offset: 0x324
	// Line 351, Address: 0x1b0ab0, Func Offset: 0x330
	// Line 355, Address: 0x1b0ab8, Func Offset: 0x338
	// Line 357, Address: 0x1b0abc, Func Offset: 0x33c
	// Line 355, Address: 0x1b0ac0, Func Offset: 0x340
	// Line 362, Address: 0x1b0ac8, Func Offset: 0x348
	// Line 405, Address: 0x1b0ad0, Func Offset: 0x350
	// Line 406, Address: 0x1b0ad8, Func Offset: 0x358
	// Line 407, Address: 0x1b0ae0, Func Offset: 0x360
	// Line 419, Address: 0x1b0ae8, Func Offset: 0x368
	// Line 420, Address: 0x1b0af0, Func Offset: 0x370
	// Func End, Address: 0x1b0b08, Func Offset: 0x388
}

// iPadInit__Fv
// Start address: 0x1b0b10
int32 iPadInit()
{
	// Line 79, Address: 0x1b0b10, Func Offset: 0
	// Line 84, Address: 0x1b0b14, Func Offset: 0x4
	// Line 79, Address: 0x1b0b18, Func Offset: 0x8
	// Line 84, Address: 0x1b0b1c, Func Offset: 0xc
	// Line 85, Address: 0x1b0b28, Func Offset: 0x18
	// Line 88, Address: 0x1b0b3c, Func Offset: 0x2c
	// Line 99, Address: 0x1b0b44, Func Offset: 0x34
	// Line 98, Address: 0x1b0b48, Func Offset: 0x38
	// Line 99, Address: 0x1b0b4c, Func Offset: 0x3c
	// Func End, Address: 0x1b0b54, Func Offset: 0x44
}

