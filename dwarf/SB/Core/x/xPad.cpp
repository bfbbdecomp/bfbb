typedef struct _tagxPad;
typedef struct _tagxRumble;
typedef struct xVec2;
typedef enum _tagPadState;
typedef struct _tagPadAnalog;
typedef struct _tagiPad;
typedef enum _tagRumbleType;
typedef struct analog_data;


typedef analog_data type_0[2];
typedef _tagxPad type_1[4];
typedef uint8 type_2[22];
typedef uint8 type_3[22];
typedef float32 type_4[22];
typedef float32 type_5[22];
typedef _tagxRumble type_6[32];

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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xVec2
{
	float32 x;
	float32 y;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagiPad
{
	int32 port;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

_tagxRumble mRumbleList[32];
_tagxPad mPad[4];
_tagxPad* gDebugPad;
_tagxPad* gPlayerPad;

int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags);
void xPadDestroyRumbleChain(int32 idx);
void xPadKill();
void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone);
int32 xPadUpdate(int32 idx, float32 time_passed);
void xPadRumbleEnable(int32 idx, int32 enable);
_tagxPad* xPadEnable(int32 idx);
int32 xPadInit();

// xPadAddRumble__Fi14_tagRumbleTypefiUi
// Start address: 0x1f3400
int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags)
{
	int32 appended;
	_tagxPad* pad;
	_tagxRumble* r;
	_tagxRumble* last_r;
	// Line 716, Address: 0x1f3400, Func Offset: 0
	// Line 723, Address: 0x1f3404, Func Offset: 0x4
	// Line 716, Address: 0x1f3408, Func Offset: 0x8
	// Line 723, Address: 0x1f340c, Func Offset: 0xc
	// Line 716, Address: 0x1f3410, Func Offset: 0x10
	// Line 723, Address: 0x1f3414, Func Offset: 0x14
	// Line 716, Address: 0x1f3418, Func Offset: 0x18
	// Line 723, Address: 0x1f341c, Func Offset: 0x1c
	// Line 716, Address: 0x1f3420, Func Offset: 0x20
	// Line 723, Address: 0x1f3424, Func Offset: 0x24
	// Line 716, Address: 0x1f3428, Func Offset: 0x28
	// Line 723, Address: 0x1f342c, Func Offset: 0x2c
	// Line 716, Address: 0x1f3430, Func Offset: 0x30
	// Line 723, Address: 0x1f3434, Func Offset: 0x34
	// Line 716, Address: 0x1f3438, Func Offset: 0x38
	// Line 723, Address: 0x1f343c, Func Offset: 0x3c
	// Line 716, Address: 0x1f3440, Func Offset: 0x40
	// Line 723, Address: 0x1f3448, Func Offset: 0x48
	// Line 728, Address: 0x1f3450, Func Offset: 0x50
	// Line 729, Address: 0x1f345c, Func Offset: 0x5c
	// Line 733, Address: 0x1f3468, Func Offset: 0x68
	// Line 734, Address: 0x1f3474, Func Offset: 0x74
	// Line 738, Address: 0x1f3480, Func Offset: 0x80
	// Line 740, Address: 0x1f3488, Func Offset: 0x88
	// Line 741, Address: 0x1f34c4, Func Offset: 0xc4
	// Line 748, Address: 0x1f34c8, Func Offset: 0xc8
	// Line 746, Address: 0x1f34cc, Func Offset: 0xcc
	// Line 748, Address: 0x1f34d0, Func Offset: 0xd0
	// Line 750, Address: 0x1f34d8, Func Offset: 0xd8
	// Line 752, Address: 0x1f34e0, Func Offset: 0xe0
	// Line 753, Address: 0x1f34e4, Func Offset: 0xe4
	// Line 754, Address: 0x1f34e8, Func Offset: 0xe8
	// Line 757, Address: 0x1f34f8, Func Offset: 0xf8
	// Line 758, Address: 0x1f3550, Func Offset: 0x150
	// Line 761, Address: 0x1f3558, Func Offset: 0x158
	// Line 763, Address: 0x1f3560, Func Offset: 0x160
	// Line 764, Address: 0x1f3564, Func Offset: 0x164
	// Line 765, Address: 0x1f3568, Func Offset: 0x168
	// Line 766, Address: 0x1f3570, Func Offset: 0x170
	// Line 769, Address: 0x1f3574, Func Offset: 0x174
	// Line 770, Address: 0x1f3578, Func Offset: 0x178
	// Line 775, Address: 0x1f357c, Func Offset: 0x17c
	// Line 777, Address: 0x1f3584, Func Offset: 0x184
	// Line 780, Address: 0x1f3590, Func Offset: 0x190
	// Line 781, Address: 0x1f3598, Func Offset: 0x198
	// Func End, Address: 0x1f35c0, Func Offset: 0x1c0
}

// xPadDestroyRumbleChain__Fi
// Start address: 0x1f35c0
void xPadDestroyRumbleChain(int32 idx)
{
	// Line 701, Address: 0x1f35c0, Func Offset: 0
	// Line 702, Address: 0x1f35d8, Func Offset: 0x18
	// Line 701, Address: 0x1f35dc, Func Offset: 0x1c
	// Line 702, Address: 0x1f35e4, Func Offset: 0x24
	// Line 703, Address: 0x1f3634, Func Offset: 0x74
	// Func End, Address: 0x1f3648, Func Offset: 0x88
}

// xPadKill__Fv
// Start address: 0x1f3650
void xPadKill()
{
	// Line 641, Address: 0x1f3650, Func Offset: 0
	// Func End, Address: 0x1f3658, Func Offset: 0x8
}

// xPadNormalizeAnalog__FR8_tagxPadii
// Start address: 0x1f3660
void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone)
{
	_tagPadAnalog* src;
	int32 i;
	// Line 605, Address: 0x1f3660, Func Offset: 0
	// Line 606, Address: 0x1f3684, Func Offset: 0x24
	// Line 605, Address: 0x1f3688, Func Offset: 0x28
	// Line 607, Address: 0x1f368c, Func Offset: 0x2c
	// Line 605, Address: 0x1f3690, Func Offset: 0x30
	// Line 607, Address: 0x1f36a4, Func Offset: 0x44
	// Line 610, Address: 0x1f36a8, Func Offset: 0x48
	// Line 612, Address: 0x1f3764, Func Offset: 0x104
	// Line 616, Address: 0x1f3824, Func Offset: 0x1c4
	// Line 618, Address: 0x1f384c, Func Offset: 0x1ec
	// Line 619, Address: 0x1f3850, Func Offset: 0x1f0
	// Line 621, Address: 0x1f385c, Func Offset: 0x1fc
	// Line 626, Address: 0x1f3868, Func Offset: 0x208
	// Line 621, Address: 0x1f386c, Func Offset: 0x20c
	// Line 626, Address: 0x1f3874, Func Offset: 0x214
	// Line 624, Address: 0x1f3878, Func Offset: 0x218
	// Line 625, Address: 0x1f3888, Func Offset: 0x228
	// Line 626, Address: 0x1f3898, Func Offset: 0x238
	// Line 627, Address: 0x1f38b8, Func Offset: 0x258
	// Line 629, Address: 0x1f38cc, Func Offset: 0x26c
	// Line 627, Address: 0x1f38d8, Func Offset: 0x278
	// Line 629, Address: 0x1f38dc, Func Offset: 0x27c
	// Line 630, Address: 0x1f38e4, Func Offset: 0x284
	// Func End, Address: 0x1f3910, Func Offset: 0x2b0
}

// xPadUpdate__Fif
// Start address: 0x1f3910
int32 xPadUpdate(int32 idx, float32 time_passed)
{
	uint32 new_on;
	_tagxPad* p;
	_tagxRumble* r;
	int32 ret;
	uint32 fake_dpad;
	int32 i;
	// Line 208, Address: 0x1f3910, Func Offset: 0
	// Line 215, Address: 0x1f3928, Func Offset: 0x18
	// Line 217, Address: 0x1f3930, Func Offset: 0x20
	// Line 227, Address: 0x1f3938, Func Offset: 0x28
	// Line 229, Address: 0x1f3948, Func Offset: 0x38
	// Line 230, Address: 0x1f39e8, Func Offset: 0xd8
	// Line 233, Address: 0x1f39f0, Func Offset: 0xe0
	// Line 237, Address: 0x1f3a20, Func Offset: 0x110
	// Line 238, Address: 0x1f3ab8, Func Offset: 0x1a8
	// Line 241, Address: 0x1f3ac0, Func Offset: 0x1b0
	// Line 243, Address: 0x1f3b64, Func Offset: 0x254
	// Line 245, Address: 0x1f3b68, Func Offset: 0x258
	// Line 248, Address: 0x1f3b8c, Func Offset: 0x27c
	// Line 250, Address: 0x1f3ba0, Func Offset: 0x290
	// Line 251, Address: 0x1f3ba4, Func Offset: 0x294
	// Line 253, Address: 0x1f3bb0, Func Offset: 0x2a0
	// Line 254, Address: 0x1f3bb4, Func Offset: 0x2a4
	// Line 253, Address: 0x1f3bbc, Func Offset: 0x2ac
	// Line 254, Address: 0x1f3bc0, Func Offset: 0x2b0
	// Line 256, Address: 0x1f3bcc, Func Offset: 0x2bc
	// Line 258, Address: 0x1f3bd4, Func Offset: 0x2c4
	// Line 261, Address: 0x1f3bdc, Func Offset: 0x2cc
	// Line 265, Address: 0x1f3be0, Func Offset: 0x2d0
	// Line 266, Address: 0x1f3be8, Func Offset: 0x2d8
	// Line 270, Address: 0x1f3bf0, Func Offset: 0x2e0
	// Line 273, Address: 0x1f3bf4, Func Offset: 0x2e4
	// Line 276, Address: 0x1f3bf8, Func Offset: 0x2e8
	// Line 278, Address: 0x1f3c04, Func Offset: 0x2f4
	// Line 282, Address: 0x1f3c10, Func Offset: 0x300
	// Line 285, Address: 0x1f3c20, Func Offset: 0x310
	// Line 287, Address: 0x1f3c28, Func Offset: 0x318
	// Line 345, Address: 0x1f3c30, Func Offset: 0x320
	// Line 346, Address: 0x1f3c3c, Func Offset: 0x32c
	// Line 347, Address: 0x1f3c44, Func Offset: 0x334
	// Line 363, Address: 0x1f3c54, Func Offset: 0x344
	// Line 366, Address: 0x1f3c60, Func Offset: 0x350
	// Line 375, Address: 0x1f3c68, Func Offset: 0x358
	// Line 376, Address: 0x1f3c6c, Func Offset: 0x35c
	// Line 379, Address: 0x1f3c78, Func Offset: 0x368
	// Line 380, Address: 0x1f3c80, Func Offset: 0x370
	// Line 382, Address: 0x1f3c8c, Func Offset: 0x37c
	// Line 385, Address: 0x1f3c94, Func Offset: 0x384
	// Line 388, Address: 0x1f3ca0, Func Offset: 0x390
	// Line 389, Address: 0x1f3ca8, Func Offset: 0x398
	// Line 391, Address: 0x1f3cb4, Func Offset: 0x3a4
	// Line 394, Address: 0x1f3cb8, Func Offset: 0x3a8
	// Line 397, Address: 0x1f3cc0, Func Offset: 0x3b0
	// Line 400, Address: 0x1f3cc8, Func Offset: 0x3b8
	// Line 401, Address: 0x1f3ccc, Func Offset: 0x3bc
	// Line 400, Address: 0x1f3cd4, Func Offset: 0x3c4
	// Line 401, Address: 0x1f3cd8, Func Offset: 0x3c8
	// Line 403, Address: 0x1f3ce4, Func Offset: 0x3d4
	// Line 404, Address: 0x1f3ce8, Func Offset: 0x3d8
	// Line 403, Address: 0x1f3cf0, Func Offset: 0x3e0
	// Line 404, Address: 0x1f3cf8, Func Offset: 0x3e8
	// Line 408, Address: 0x1f3cfc, Func Offset: 0x3ec
	// Line 412, Address: 0x1f3d00, Func Offset: 0x3f0
	// Line 421, Address: 0x1f3d14, Func Offset: 0x404
	// Line 425, Address: 0x1f3d40, Func Offset: 0x430
	// Line 430, Address: 0x1f3d48, Func Offset: 0x438
	// Line 431, Address: 0x1f3d4c, Func Offset: 0x43c
	// Line 430, Address: 0x1f3d54, Func Offset: 0x444
	// Line 431, Address: 0x1f3d58, Func Offset: 0x448
	// Line 433, Address: 0x1f3d64, Func Offset: 0x454
	// Line 434, Address: 0x1f3d74, Func Offset: 0x464
	// Line 436, Address: 0x1f3d80, Func Offset: 0x470
	// Line 437, Address: 0x1f3d88, Func Offset: 0x478
	// Line 438, Address: 0x1f3d90, Func Offset: 0x480
	// Line 440, Address: 0x1f3d9c, Func Offset: 0x48c
	// Line 443, Address: 0x1f3dac, Func Offset: 0x49c
	// Line 445, Address: 0x1f3db8, Func Offset: 0x4a8
	// Line 446, Address: 0x1f3dc0, Func Offset: 0x4b0
	// Line 447, Address: 0x1f3dc8, Func Offset: 0x4b8
	// Line 449, Address: 0x1f3dd4, Func Offset: 0x4c4
	// Line 460, Address: 0x1f3de0, Func Offset: 0x4d0
	// Line 497, Address: 0x1f3de8, Func Offset: 0x4d8
	// Line 460, Address: 0x1f3df0, Func Offset: 0x4e0
	// Line 461, Address: 0x1f3dfc, Func Offset: 0x4ec
	// Line 462, Address: 0x1f3e10, Func Offset: 0x500
	// Line 497, Address: 0x1f3e1c, Func Offset: 0x50c
	// Line 498, Address: 0x1f3e20, Func Offset: 0x510
	// Line 500, Address: 0x1f3e34, Func Offset: 0x524
	// Line 501, Address: 0x1f3e50, Func Offset: 0x540
	// Line 502, Address: 0x1f3e54, Func Offset: 0x544
	// Line 506, Address: 0x1f3e58, Func Offset: 0x548
	// Line 507, Address: 0x1f3e68, Func Offset: 0x558
	// Line 508, Address: 0x1f3e70, Func Offset: 0x560
	// Line 509, Address: 0x1f3e78, Func Offset: 0x568
	// Line 511, Address: 0x1f3e84, Func Offset: 0x574
	// Line 515, Address: 0x1f3e98, Func Offset: 0x588
	// Line 518, Address: 0x1f3eac, Func Offset: 0x59c
	// Line 522, Address: 0x1f3ed4, Func Offset: 0x5c4
	// Line 526, Address: 0x1f3ee0, Func Offset: 0x5d0
	// Line 527, Address: 0x1f3ee4, Func Offset: 0x5d4
	// Line 526, Address: 0x1f3eec, Func Offset: 0x5dc
	// Line 527, Address: 0x1f3ef0, Func Offset: 0x5e0
	// Line 529, Address: 0x1f3efc, Func Offset: 0x5ec
	// Line 531, Address: 0x1f3f0c, Func Offset: 0x5fc
	// Line 533, Address: 0x1f3f18, Func Offset: 0x608
	// Line 534, Address: 0x1f3f20, Func Offset: 0x610
	// Line 535, Address: 0x1f3f28, Func Offset: 0x618
	// Line 537, Address: 0x1f3f34, Func Offset: 0x624
	// Line 540, Address: 0x1f3f44, Func Offset: 0x634
	// Line 542, Address: 0x1f3f50, Func Offset: 0x640
	// Line 543, Address: 0x1f3f58, Func Offset: 0x648
	// Line 544, Address: 0x1f3f60, Func Offset: 0x650
	// Line 546, Address: 0x1f3f6c, Func Offset: 0x65c
	// Line 554, Address: 0x1f3f78, Func Offset: 0x668
	// Line 555, Address: 0x1f3f80, Func Offset: 0x670
	// Func End, Address: 0x1f3f98, Func Offset: 0x688
}

// xPadRumbleEnable__Fii
// Start address: 0x1f3fa0
void xPadRumbleEnable(int32 idx, int32 enable)
{
	_tagxPad* p;
	// Line 135, Address: 0x1f3fa0, Func Offset: 0
	// Line 134, Address: 0x1f3fa4, Func Offset: 0x4
	// Line 135, Address: 0x1f3fa8, Func Offset: 0x8
	// Line 134, Address: 0x1f3fac, Func Offset: 0xc
	// Line 135, Address: 0x1f3fb0, Func Offset: 0x10
	// Line 134, Address: 0x1f3fb4, Func Offset: 0x14
	// Line 135, Address: 0x1f3fb8, Func Offset: 0x18
	// Line 134, Address: 0x1f3fc0, Func Offset: 0x20
	// Line 135, Address: 0x1f3fc4, Func Offset: 0x24
	// Line 138, Address: 0x1f3fcc, Func Offset: 0x2c
	// Line 135, Address: 0x1f3fd0, Func Offset: 0x30
	// Line 138, Address: 0x1f3fd4, Func Offset: 0x34
	// Line 139, Address: 0x1f3fe0, Func Offset: 0x40
	// Line 141, Address: 0x1f3fe8, Func Offset: 0x48
	// Line 144, Address: 0x1f3ff0, Func Offset: 0x50
	// Line 146, Address: 0x1f4000, Func Offset: 0x60
	// Line 150, Address: 0x1f4008, Func Offset: 0x68
	// Line 152, Address: 0x1f4018, Func Offset: 0x78
	// Line 155, Address: 0x1f401c, Func Offset: 0x7c
	// Line 157, Address: 0x1f405c, Func Offset: 0xbc
	// Line 158, Address: 0x1f4060, Func Offset: 0xc0
	// Func End, Address: 0x1f4074, Func Offset: 0xd4
}

// xPadEnable__Fi
// Start address: 0x1f4080
_tagxPad* xPadEnable(int32 idx)
{
	_tagxPad* p;
	// Line 94, Address: 0x1f4080, Func Offset: 0
	// Line 97, Address: 0x1f40b4, Func Offset: 0x34
	// Line 100, Address: 0x1f40c0, Func Offset: 0x40
	// Line 109, Address: 0x1f40c8, Func Offset: 0x48
	// Line 111, Address: 0x1f40d0, Func Offset: 0x50
	// Line 116, Address: 0x1f40d8, Func Offset: 0x58
	// Line 119, Address: 0x1f40e8, Func Offset: 0x68
	// Line 116, Address: 0x1f40ec, Func Offset: 0x6c
	// Line 119, Address: 0x1f40f0, Func Offset: 0x70
	// Line 121, Address: 0x1f4170, Func Offset: 0xf0
	// Line 122, Address: 0x1f4178, Func Offset: 0xf8
	// Func End, Address: 0x1f4190, Func Offset: 0x110
}

// xPadInit__Fv
// Start address: 0x1f4190
int32 xPadInit()
{
	// Line 67, Address: 0x1f4190, Func Offset: 0
	// Line 69, Address: 0x1f4194, Func Offset: 0x4
	// Line 67, Address: 0x1f4198, Func Offset: 0x8
	// Line 69, Address: 0x1f419c, Func Offset: 0xc
	// Line 72, Address: 0x1f41ac, Func Offset: 0x1c
	// Line 76, Address: 0x1f41c0, Func Offset: 0x30
	// Line 77, Address: 0x1f41d0, Func Offset: 0x40
	// Line 79, Address: 0x1f41d8, Func Offset: 0x48
	// Line 81, Address: 0x1f41e4, Func Offset: 0x54
	// Line 82, Address: 0x1f41e8, Func Offset: 0x58
	// Func End, Address: 0x1f41f4, Func Offset: 0x64
}

