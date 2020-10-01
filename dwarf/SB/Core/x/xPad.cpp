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
typedef u8 type_2[22];
typedef u8 type_3[22];
typedef f32 type_4[22];
typedef f32 type_5[22];
typedef _tagxRumble type_6[32];

struct _tagxPad
{
	type_2 value;
	type_3 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_4 up_tmr;
	type_5 down_tmr;
	type_0 analog;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	s8 x;
	s8 y;
};

struct _tagiPad
{
	s32 port;
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
	f32 mag;
	f32 ang;
};

type_6 mRumbleList;
type_1 mPad;
_tagxPad* gDebugPad;
_tagxPad* gPlayerPad;

s32 xPadAddRumble(s32 idx, _tagRumbleType type, f32 time, s32 replace, u32 fxflags);
void xPadDestroyRumbleChain(s32 idx);
void xPadKill();
void xPadNormalizeAnalog(_tagxPad& pad, s32 inner_zone, s32 outer_zone);
s32 xPadUpdate(s32 idx, f32 time_passed);
void xPadRumbleEnable(s32 idx, s32 enable);
_tagxPad* xPadEnable(s32 idx);
s32 xPadInit();

// xPadAddRumble__Fi14_tagRumbleTypefiUi
// Start address: 0x1f3400
s32 xPadAddRumble(s32 idx, _tagRumbleType type, f32 time, s32 replace, u32 fxflags)
{
	s32 appended;
	_tagxPad* pad;
	_tagxRumble* r;
	_tagxRumble* last_r;
}

// xPadDestroyRumbleChain__Fi
// Start address: 0x1f35c0
void xPadDestroyRumbleChain(s32 idx)
{
}

// xPadKill__Fv
// Start address: 0x1f3650
void xPadKill()
{
}

// xPadNormalizeAnalog__FR8_tagxPadii
// Start address: 0x1f3660
void xPadNormalizeAnalog(_tagxPad& pad, s32 inner_zone, s32 outer_zone)
{
	_tagPadAnalog* src;
	s32 i;
}

// xPadUpdate__Fif
// Start address: 0x1f3910
s32 xPadUpdate(s32 idx, f32 time_passed)
{
	u32 new_on;
	_tagxPad* p;
	_tagxRumble* r;
	s32 ret;
	u32 fake_dpad;
	s32 i;
}

// xPadRumbleEnable__Fii
// Start address: 0x1f3fa0
void xPadRumbleEnable(s32 idx, s32 enable)
{
	_tagxPad* p;
}

// xPadEnable__Fi
// Start address: 0x1f4080
_tagxPad* xPadEnable(s32 idx)
{
	_tagxPad* p;
}

// xPadInit__Fv
// Start address: 0x1f4190
s32 xPadInit()
{
}

