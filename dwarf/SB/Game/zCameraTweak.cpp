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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
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

int8 buffer[16];
int8 buffer[16];
int32 sCamTweakCount;
zCamTweak sCamTweakList[8];
float32 sCamTweakLerp;
float32 sCamTweakTime;
float32 sCamTweakPitch[2];
float32 sCamTweakDistMult[2];
float32 sCamTweakPitchCur;
float32 sCamTweakDistMultCur;
float32 sCamD;
float32 sCamH;
float32 sCamPitch;
zCamTweakLook zcam_neartweak;
zCamTweakLook zcam_fartweak;
int32(*zCameraTweak_EventCB)(xBase*, xBase*, uint32, float32*, xBase*);
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
	// Line 279, Address: 0x3b33b0, Func Offset: 0
	// Line 286, Address: 0x3b33b4, Func Offset: 0x4
	// Line 289, Address: 0x3b33e8, Func Offset: 0x38
	// Line 290, Address: 0x3b33f0, Func Offset: 0x40
	// Line 293, Address: 0x3b33f8, Func Offset: 0x48
	// Line 294, Address: 0x3b3400, Func Offset: 0x50
	// Line 297, Address: 0x3b3408, Func Offset: 0x58
	// Line 298, Address: 0x3b341c, Func Offset: 0x6c
	// Line 304, Address: 0x3b3438, Func Offset: 0x88
	// Line 307, Address: 0x3b3440, Func Offset: 0x90
	// Line 308, Address: 0x3b3450, Func Offset: 0xa0
	// Line 314, Address: 0x3b3458, Func Offset: 0xa8
	// Line 313, Address: 0x3b345c, Func Offset: 0xac
	// Line 314, Address: 0x3b3460, Func Offset: 0xb0
	// Func End, Address: 0x3b3468, Func Offset: 0xb8
}

// zCameraTweak_Load__FP12zCameraTweakP7xSerial
// Start address: 0x3b3470
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s)
{
	// Line 275, Address: 0x3b3470, Func Offset: 0
	// Func End, Address: 0x3b3478, Func Offset: 0x8
}

// zCameraTweak_Save__FP12zCameraTweakP7xSerial
// Start address: 0x3b3480
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s)
{
	// Line 271, Address: 0x3b3480, Func Offset: 0
	// Func End, Address: 0x3b3488, Func Offset: 0x8
}

// zCameraTweak_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x3b3490
void zCameraTweak_Init(xBase& data, xDynAsset& asset)
{
	// Line 238, Address: 0x3b3490, Func Offset: 0
	// Line 240, Address: 0x3b34a4, Func Offset: 0x14
	// Line 241, Address: 0x3b34d8, Func Offset: 0x48
	// Func End, Address: 0x3b34ec, Func Offset: 0x5c
}

// zCameraTweakGlobal_GetPitch__Fv
// Start address: 0x3b34f0
float32 zCameraTweakGlobal_GetPitch()
{
	// Line 232, Address: 0x3b34f0, Func Offset: 0
	// Func End, Address: 0x3b34f8, Func Offset: 0x8
}

// zCameraTweakGlobal_GetH__Fv
// Start address: 0x3b3500
float32 zCameraTweakGlobal_GetH()
{
	// Line 228, Address: 0x3b3500, Func Offset: 0
	// Func End, Address: 0x3b3508, Func Offset: 0x8
}

// zCameraTweakGlobal_GetD__Fv
// Start address: 0x3b3510
float32 zCameraTweakGlobal_GetD()
{
	// Line 224, Address: 0x3b3510, Func Offset: 0
	// Func End, Address: 0x3b3518, Func Offset: 0x8
}

// zCameraTweakGlobal_Update__Ff
// Start address: 0x3b3520
void zCameraTweakGlobal_Update(float32 dt)
{
	zCamTweakLook* tlook;
	// Line 198, Address: 0x3b3520, Func Offset: 0
	// Line 201, Address: 0x3b3528, Func Offset: 0x8
	// Line 198, Address: 0x3b352c, Func Offset: 0xc
	// Line 200, Address: 0x3b3530, Func Offset: 0x10
	// Line 201, Address: 0x3b3540, Func Offset: 0x20
	// Line 202, Address: 0x3b354c, Func Offset: 0x2c
	// Line 206, Address: 0x3b355c, Func Offset: 0x3c
	// Line 214, Address: 0x3b3564, Func Offset: 0x44
	// Line 207, Address: 0x3b3568, Func Offset: 0x48
	// Line 206, Address: 0x3b3574, Func Offset: 0x54
	// Line 207, Address: 0x3b357c, Func Offset: 0x5c
	// Line 206, Address: 0x3b3584, Func Offset: 0x64
	// Line 214, Address: 0x3b3588, Func Offset: 0x68
	// Line 216, Address: 0x3b35a4, Func Offset: 0x84
	// Line 217, Address: 0x3b35bc, Func Offset: 0x9c
	// Line 216, Address: 0x3b35c0, Func Offset: 0xa0
	// Line 217, Address: 0x3b35cc, Func Offset: 0xac
	// Line 218, Address: 0x3b35e4, Func Offset: 0xc4
	// Line 217, Address: 0x3b35e8, Func Offset: 0xc8
	// Line 218, Address: 0x3b35f8, Func Offset: 0xd8
	// Line 219, Address: 0x3b3604, Func Offset: 0xe4
	// Func End, Address: 0x3b3614, Func Offset: 0xf4
}

// zCameraTweakGlobal_Reset__Fv
// Start address: 0x3b3620
void zCameraTweakGlobal_Reset()
{
	// Line 191, Address: 0x3b3620, Func Offset: 0
	// Line 189, Address: 0x3b3624, Func Offset: 0x4
	// Line 191, Address: 0x3b3628, Func Offset: 0x8
	// Line 186, Address: 0x3b362c, Func Offset: 0xc
	// Line 187, Address: 0x3b3630, Func Offset: 0x10
	// Line 188, Address: 0x3b3634, Func Offset: 0x14
	// Line 189, Address: 0x3b3638, Func Offset: 0x18
	// Line 191, Address: 0x3b363c, Func Offset: 0x1c
	// Line 190, Address: 0x3b3640, Func Offset: 0x20
	// Line 194, Address: 0x3b3644, Func Offset: 0x24
	// Line 192, Address: 0x3b3648, Func Offset: 0x28
	// Line 195, Address: 0x3b364c, Func Offset: 0x2c
	// Func End, Address: 0x3b3654, Func Offset: 0x34
}

// zCameraTweakGlobal_Remove__FUi
// Start address: 0x3b3660
void zCameraTweakGlobal_Remove(uint32 owner)
{
	int32 i;
	int32 j;
	// Line 150, Address: 0x3b3660, Func Offset: 0
	// Line 151, Address: 0x3b3678, Func Offset: 0x18
	// Line 154, Address: 0x3b3684, Func Offset: 0x24
	// Line 162, Address: 0x3b3694, Func Offset: 0x34
	// Line 157, Address: 0x3b369c, Func Offset: 0x3c
	// Line 158, Address: 0x3b36a8, Func Offset: 0x48
	// Line 161, Address: 0x3b36ac, Func Offset: 0x4c
	// Line 158, Address: 0x3b36b0, Func Offset: 0x50
	// Line 163, Address: 0x3b36b8, Func Offset: 0x58
	// Line 157, Address: 0x3b36bc, Func Offset: 0x5c
	// Line 162, Address: 0x3b36c0, Func Offset: 0x60
	// Line 157, Address: 0x3b36c4, Func Offset: 0x64
	// Line 158, Address: 0x3b36c8, Func Offset: 0x68
	// Line 157, Address: 0x3b36cc, Func Offset: 0x6c
	// Line 158, Address: 0x3b36d0, Func Offset: 0x70
	// Line 163, Address: 0x3b36d4, Func Offset: 0x74
	// Line 164, Address: 0x3b36dc, Func Offset: 0x7c
	// Line 165, Address: 0x3b36e4, Func Offset: 0x84
	// Line 164, Address: 0x3b36ec, Func Offset: 0x8c
	// Line 166, Address: 0x3b36f0, Func Offset: 0x90
	// Line 167, Address: 0x3b36f8, Func Offset: 0x98
	// Line 168, Address: 0x3b36fc, Func Offset: 0x9c
	// Line 173, Address: 0x3b3700, Func Offset: 0xa0
	// Line 174, Address: 0x3b3728, Func Offset: 0xc8
	// Line 175, Address: 0x3b372c, Func Offset: 0xcc
	// Line 174, Address: 0x3b3734, Func Offset: 0xd4
	// Line 175, Address: 0x3b3758, Func Offset: 0xf8
	// Line 176, Address: 0x3b3760, Func Offset: 0x100
	// Line 177, Address: 0x3b3768, Func Offset: 0x108
	// Line 179, Address: 0x3b3770, Func Offset: 0x110
	// Line 182, Address: 0x3b3780, Func Offset: 0x120
	// Func End, Address: 0x3b3788, Func Offset: 0x128
}

// zCameraTweakGlobal_Add__FUiffff
// Start address: 0x3b3790
void zCameraTweakGlobal_Add(uint32 owner, float32 priority, float32 time, float32 pitch, float32 distMult)
{
	int32 i;
	int32 j;
	// Line 106, Address: 0x3b3790, Func Offset: 0
	// Line 107, Address: 0x3b37a8, Func Offset: 0x18
	// Line 110, Address: 0x3b37b4, Func Offset: 0x24
	// Line 113, Address: 0x3b37c8, Func Offset: 0x38
	// Line 114, Address: 0x3b37e0, Func Offset: 0x50
	// Line 115, Address: 0x3b3800, Func Offset: 0x70
	// Line 116, Address: 0x3b3820, Func Offset: 0x90
	// Line 117, Address: 0x3b3824, Func Offset: 0x94
	// Line 116, Address: 0x3b382c, Func Offset: 0x9c
	// Line 117, Address: 0x3b3850, Func Offset: 0xc0
	// Line 118, Address: 0x3b3858, Func Offset: 0xc8
	// Line 120, Address: 0x3b3860, Func Offset: 0xd0
	// Line 123, Address: 0x3b3878, Func Offset: 0xe8
	// Line 124, Address: 0x3b3888, Func Offset: 0xf8
	// Line 123, Address: 0x3b388c, Func Offset: 0xfc
	// Line 124, Address: 0x3b3890, Func Offset: 0x100
	// Line 125, Address: 0x3b3894, Func Offset: 0x104
	// Line 124, Address: 0x3b3898, Func Offset: 0x108
	// Line 125, Address: 0x3b389c, Func Offset: 0x10c
	// Line 126, Address: 0x3b38c0, Func Offset: 0x130
	// Line 125, Address: 0x3b38cc, Func Offset: 0x13c
	// Line 126, Address: 0x3b38d0, Func Offset: 0x140
	// Line 125, Address: 0x3b38d4, Func Offset: 0x144
	// Line 126, Address: 0x3b38dc, Func Offset: 0x14c
	// Line 125, Address: 0x3b38ec, Func Offset: 0x15c
	// Line 126, Address: 0x3b38f0, Func Offset: 0x160
	// Line 127, Address: 0x3b38f8, Func Offset: 0x168
	// Line 126, Address: 0x3b3904, Func Offset: 0x174
	// Line 127, Address: 0x3b3908, Func Offset: 0x178
	// Line 128, Address: 0x3b3930, Func Offset: 0x1a0
	// Line 131, Address: 0x3b3938, Func Offset: 0x1a8
	// Line 139, Address: 0x3b3940, Func Offset: 0x1b0
	// Line 131, Address: 0x3b394c, Func Offset: 0x1bc
	// Line 134, Address: 0x3b3954, Func Offset: 0x1c4
	// Line 135, Address: 0x3b395c, Func Offset: 0x1cc
	// Line 140, Address: 0x3b3960, Func Offset: 0x1d0
	// Line 138, Address: 0x3b3968, Func Offset: 0x1d8
	// Line 135, Address: 0x3b3970, Func Offset: 0x1e0
	// Line 141, Address: 0x3b3974, Func Offset: 0x1e4
	// Line 134, Address: 0x3b397c, Func Offset: 0x1ec
	// Line 139, Address: 0x3b3980, Func Offset: 0x1f0
	// Line 134, Address: 0x3b3984, Func Offset: 0x1f4
	// Line 135, Address: 0x3b3988, Func Offset: 0x1f8
	// Line 134, Address: 0x3b398c, Func Offset: 0x1fc
	// Line 135, Address: 0x3b3990, Func Offset: 0x200
	// Line 140, Address: 0x3b3994, Func Offset: 0x204
	// Line 135, Address: 0x3b3998, Func Offset: 0x208
	// Line 141, Address: 0x3b399c, Func Offset: 0x20c
	// Line 143, Address: 0x3b39a0, Func Offset: 0x210
	// Func End, Address: 0x3b39a8, Func Offset: 0x218
}

// zCameraTweakGlobal_Init__Fv
// Start address: 0x3b39b0
void zCameraTweakGlobal_Init()
{
	// Line 88, Address: 0x3b39b0, Func Offset: 0
	// Line 89, Address: 0x3b39d0, Func Offset: 0x20
	// Line 90, Address: 0x3b3a08, Func Offset: 0x58
	// Line 89, Address: 0x3b3a14, Func Offset: 0x64
	// Line 90, Address: 0x3b3a1c, Func Offset: 0x6c
	// Line 91, Address: 0x3b3a28, Func Offset: 0x78
	// Line 90, Address: 0x3b3a2c, Func Offset: 0x7c
	// Line 91, Address: 0x3b3a30, Func Offset: 0x80
	// Line 90, Address: 0x3b3a44, Func Offset: 0x94
	// Line 91, Address: 0x3b3a48, Func Offset: 0x98
	// Line 90, Address: 0x3b3a58, Func Offset: 0xa8
	// Line 91, Address: 0x3b3a5c, Func Offset: 0xac
	// Line 90, Address: 0x3b3a60, Func Offset: 0xb0
	// Line 91, Address: 0x3b3a64, Func Offset: 0xb4
	// Line 90, Address: 0x3b3a68, Func Offset: 0xb8
	// Line 92, Address: 0x3b3a80, Func Offset: 0xd0
	// Func End, Address: 0x3b3aa0, Func Offset: 0xf0
}

