typedef struct xBase;
typedef struct xLinkAsset;
typedef struct zCameraTweak;
typedef struct CameraTweak_asset;
typedef struct xDynAsset;
typedef struct zCamTweak;
typedef struct zCamTweakLook;
typedef struct xSerial;
typedef struct xBaseAsset;

typedef s32(*type_4)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_6)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[2];
typedef f32 type_1[4];
typedef s8 type_2[16];
typedef s8 type_3[16];
typedef f32 type_5[2];
typedef zCamTweak type_7[8];

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_1 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct zCameraTweak : xBase
{
	CameraTweak_asset* casset;
};

struct CameraTweak_asset : xDynAsset
{
	s32 priority;
	f32 time;
	f32 pitch_adjust;
	f32 dist_adjust;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct zCamTweak
{
	u32 owner;
	f32 priority;
	f32 time;
	f32 pitch;
	f32 distMult;
};

struct zCamTweakLook
{
	f32 h;
	f32 dist;
	f32 pitch;
};

struct xSerial
{
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

type_2 buffer;
type_3 buffer;
s32 sCamTweakCount;
type_7 sCamTweakList;
f32 sCamTweakLerp;
f32 sCamTweakTime;
type_0 sCamTweakPitch;
type_5 sCamTweakDistMult;
f32 sCamTweakPitchCur;
f32 sCamTweakDistMultCur;
f32 sCamD;
f32 sCamH;
f32 sCamPitch;
zCamTweakLook zcam_neartweak;
zCamTweakLook zcam_fartweak;
type_6 zCameraTweak_EventCB;
s32 zcam_near;
f32 zcam_far_d;
f32 zcam_far_h;
f32 zcam_far_pitch;
f32 zcam_near_d;
f32 zcam_near_h;
f32 zcam_near_pitch;

s32 zCameraTweak_EventCB(xBase* to, u32 toEvent);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Init(xBase& data, xDynAsset& asset);
f32 zCameraTweakGlobal_GetPitch();
f32 zCameraTweakGlobal_GetH();
f32 zCameraTweakGlobal_GetD();
void zCameraTweakGlobal_Update(f32 dt);
void zCameraTweakGlobal_Reset();
void zCameraTweakGlobal_Remove(u32 owner);
void zCameraTweakGlobal_Add(u32 owner, f32 priority, f32 time, f32 pitch, f32 distMult);
void zCameraTweakGlobal_Init();

// zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x3b33b0
s32 zCameraTweak_EventCB(xBase* to, u32 toEvent)
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
f32 zCameraTweakGlobal_GetPitch()
{
}

// zCameraTweakGlobal_GetH__Fv
// Start address: 0x3b3500
f32 zCameraTweakGlobal_GetH()
{
}

// zCameraTweakGlobal_GetD__Fv
// Start address: 0x3b3510
f32 zCameraTweakGlobal_GetD()
{
}

// zCameraTweakGlobal_Update__Ff
// Start address: 0x3b3520
void zCameraTweakGlobal_Update(f32 dt)
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
void zCameraTweakGlobal_Remove(u32 owner)
{
	s32 i;
	s32 j;
}

// zCameraTweakGlobal_Add__FUiffff
// Start address: 0x3b3790
void zCameraTweakGlobal_Add(u32 owner, f32 priority, f32 time, f32 pitch, f32 distMult)
{
	s32 i;
	s32 j;
}

// zCameraTweakGlobal_Init__Fv
// Start address: 0x3b39b0
void zCameraTweakGlobal_Init()
{
}

