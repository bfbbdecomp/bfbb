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
typedef <unknown type (0xa510)> type_6[16];
typedef type_6 type_7[4];
typedef float32 type_8[4];
typedef uint8 type_9[22];
typedef uint8 type_10[22];
typedef uint8 type_11[6];

struct _tagxPad
{
	type_9 value;
	type_10 last_value;
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
	type_0 up_tmr;
	type_1 down_tmr;
	type_4 analog;
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

type_2 mReadData;
type_7 mPadDmaBuffer;
type_11 mActDirect;
type_5 mActAlign;
type_8 mLargeMotor;
type_3 gTrcPad;

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
}

// iPadStartRumble__FP8_tagxPadP11_tagxRumble
// Start address: 0x1b0080
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble)
{
}

// iPadStopRumble__FP8_tagxPad
// Start address: 0x1b01a0
void iPadStopRumble(_tagxPad* pad)
{
}

// iPadRumbleFx__FP8_tagxPadP11_tagxRumblef
// Start address: 0x1b01c0
void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed)
{
	float32 act;
	float32 scale;
}

// iPadUpdate__FP8_tagxPadPUi
// Start address: 0x1b0270
int32 iPadUpdate(_tagxPad* pad, uint32* on)
{
	int32 temp;
	uint32 temp_on;
	int32 result;
}

// iPadTRCUpdate__FP8_tagxPad
// Start address: 0x1b05e0
void iPadTRCUpdate(_tagxPad* pad)
{
}

// iPadEnable__FP8_tagxPads
// Start address: 0x1b0710
_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
	_tagPadInit pad_init;
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
}

// iPadInit__Fv
// Start address: 0x1b0b10
int32 iPadInit()
{
}

