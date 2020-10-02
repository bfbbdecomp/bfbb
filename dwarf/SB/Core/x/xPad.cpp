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
	type_2 value;
	type_3 last_value;
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
	type_4 up_tmr;
	type_5 down_tmr;
	type_0 analog;
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

type_6 mRumbleList;
type_1 mPad;
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
}

// xPadDestroyRumbleChain__Fi
// Start address: 0x1f35c0
void xPadDestroyRumbleChain(int32 idx)
{
}

// xPadKill__Fv
// Start address: 0x1f3650
void xPadKill()
{
}

// xPadNormalizeAnalog__FR8_tagxPadii
// Start address: 0x1f3660
void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone)
{
	_tagPadAnalog* src;
	int32 i;
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
}

// xPadRumbleEnable__Fii
// Start address: 0x1f3fa0
void xPadRumbleEnable(int32 idx, int32 enable)
{
	_tagxPad* p;
}

// xPadEnable__Fi
// Start address: 0x1f4080
_tagxPad* xPadEnable(int32 idx)
{
	_tagxPad* p;
}

// xPadInit__Fv
// Start address: 0x1f4190
int32 xPadInit()
{
}

