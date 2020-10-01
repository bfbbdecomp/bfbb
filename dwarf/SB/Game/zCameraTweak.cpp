typedef struct xBase;
typedef struct xLinkAsset;
typedef struct zCameraTweak;
typedef struct CameraTweak_asset;
typedef struct xDynAsset;
typedef struct zCamTweak;
typedef struct zCamTweakLook;
typedef struct xSerial;
typedef struct xBaseAsset;

typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_6)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[2];
typedef float32 type_1[4];
typedef int8 type_2[16];
typedef int8 type_3[16];
typedef float32 type_5[2];
typedef zCamTweak type_7[8];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct zCameraTweak : xBase
{
	CameraTweak_asset* casset;
};

struct CameraTweak_asset : xDynAsset
{
	int32 priority;
	float32 time;
	float32 pitch_adjust;
	float32 dist_adjust;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct zCamTweak
{
	uint32 owner;
	float32 priority;
	float32 time;
	float32 pitch;
	float32 distMult;
};

struct zCamTweakLook
{
	float32 h;
	float32 dist;
	float32 pitch;
};

struct xSerial
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

type_2 buffer;
type_3 buffer;
int32 sCamTweakCount;
type_7 sCamTweakList;
float32 sCamTweakLerp;
float32 sCamTweakTime;
type_0 sCamTweakPitch;
type_5 sCamTweakDistMult;
float32 sCamTweakPitchCur;
float32 sCamTweakDistMultCur;
float32 sCamD;
float32 sCamH;
float32 sCamPitch;
zCamTweakLook zcam_neartweak;
zCamTweakLook zcam_fartweak;
type_6 zCameraTweak_EventCB;
int32 zcam_near;
float32 zcam_far_d;
float32 zcam_far_h;
float32 zcam_far_pitch;
float32 zcam_near_d;
float32 zcam_near_h;
float32 zcam_near_pitch;

int32 zCameraTweak_EventCB(xBase* to, uint32 toEvent);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Init(xBase& data, xDynAsset& asset);
float32 zCameraTweakGlobal_GetPitch();
float32 zCameraTweakGlobal_GetH();
float32 zCameraTweakGlobal_GetD();
void zCameraTweakGlobal_Update(float32 dt);
void zCameraTweakGlobal_Reset();
void zCameraTweakGlobal_Remove(uint32 owner);
void zCameraTweakGlobal_Add(uint32 owner, float32 priority, float32 time, float32 pitch, float32 distMult);
void zCameraTweakGlobal_Init();

// zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x3b33b0
int32 zCameraTweak_EventCB(xBase* to, uint32 toEvent)
{
	zCameraTweak* tweak;
}

// zCameraTweak_Load__FP12zCameraTweakP7xSerial
// Start address: 0x3b3470
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s)
{
}

// zCameraTweak_Save__FP12zCameraTweakP7xSerial
// Start address: 0x3b3480
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s)
{
}

// zCameraTweak_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x3b3490
void zCameraTweak_Init(xBase& data, xDynAsset& asset)
{
}

// zCameraTweakGlobal_GetPitch__Fv
// Start address: 0x3b34f0
float32 zCameraTweakGlobal_GetPitch()
{
}

// zCameraTweakGlobal_GetH__Fv
// Start address: 0x3b3500
float32 zCameraTweakGlobal_GetH()
{
}

// zCameraTweakGlobal_GetD__Fv
// Start address: 0x3b3510
float32 zCameraTweakGlobal_GetD()
{
}

// zCameraTweakGlobal_Update__Ff
// Start address: 0x3b3520
void zCameraTweakGlobal_Update(float32 dt)
{
	zCamTweakLook* tlook;
}

// zCameraTweakGlobal_Reset__Fv
// Start address: 0x3b3620
void zCameraTweakGlobal_Reset()
{
}

// zCameraTweakGlobal_Remove__FUi
// Start address: 0x3b3660
void zCameraTweakGlobal_Remove(uint32 owner)
{
	int32 i;
	int32 j;
}

// zCameraTweakGlobal_Add__FUiffff
// Start address: 0x3b3790
void zCameraTweakGlobal_Add(uint32 owner, float32 priority, float32 time, float32 pitch, float32 distMult)
{
	int32 i;
	int32 j;
}

// zCameraTweakGlobal_Init__Fv
// Start address: 0x3b39b0
void zCameraTweakGlobal_Init()
{
}

