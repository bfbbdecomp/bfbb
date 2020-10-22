typedef struct xQuat;
typedef struct RwV3d;
typedef struct RtQuat;
typedef struct RtQuatSlerpCache;
typedef struct xVec3;


typedef uint8 type[9120];

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RtQuat
{
	RwV3d imag;
	float32 real;
};

struct RtQuatSlerpCache
{
	RtQuat raFrom;
	RtQuat raTo;
	float32 omega;
	int32 nearlyZeroOm;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

uint8 scratchBuffer[9120];
uint8* giAnimScratch;

void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest);
uint32 iAnimBoneCount(void* RawData);
float32 iAnimDuration(void* RawData);
void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat);
void iAnimInit();

// iAnimBlend__FffPUsPfUiP5xVec3P5xQuatP5xVec3P5xQuatP5xVec3P5xQuat
// Start address: 0x1bb110
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest)
{
	uint32 i;
	uint32 invert;
	RtQuat* q2;
	RtQuat ident;
	xVec3* t2;
	float32 lerp;
	RtQuatSlerpCache qcache;
	float32 rSclFrom;
	float32 rSclTo;
	float32 z;
	float32 z;
	float32 baselerp;
	float32 lerp;
	RtQuatSlerpCache qcache;
	float32 rSclFrom;
	float32 rSclTo;
	float32 z;
	float32 z;
	// Line 134, Address: 0x1bb110, Func Offset: 0
	// Line 136, Address: 0x1bb114, Func Offset: 0x4
	// Line 134, Address: 0x1bb118, Func Offset: 0x8
	// Line 136, Address: 0x1bb11c, Func Offset: 0xc
	// Line 134, Address: 0x1bb120, Func Offset: 0x10
	// Line 136, Address: 0x1bb158, Func Offset: 0x48
	// Line 134, Address: 0x1bb15c, Func Offset: 0x4c
	// Line 135, Address: 0x1bb174, Func Offset: 0x64
	// Line 134, Address: 0x1bb178, Func Offset: 0x68
	// Line 136, Address: 0x1bb17c, Func Offset: 0x6c
	// Line 140, Address: 0x1bb180, Func Offset: 0x70
	// Line 141, Address: 0x1bb188, Func Offset: 0x78
	// Line 143, Address: 0x1bb18c, Func Offset: 0x7c
	// Line 144, Address: 0x1bb190, Func Offset: 0x80
	// Line 146, Address: 0x1bb198, Func Offset: 0x88
	// Line 145, Address: 0x1bb19c, Func Offset: 0x8c
	// Line 150, Address: 0x1bb1a0, Func Offset: 0x90
	// Line 152, Address: 0x1bb1b4, Func Offset: 0xa4
	// Line 151, Address: 0x1bb1b8, Func Offset: 0xa8
	// Line 152, Address: 0x1bb1bc, Func Offset: 0xac
	// Line 153, Address: 0x1bb1c4, Func Offset: 0xb4
	// Line 155, Address: 0x1bb1c8, Func Offset: 0xb8
	// Line 161, Address: 0x1bb1e0, Func Offset: 0xd0
	// Line 162, Address: 0x1bb1e4, Func Offset: 0xd4
	// Line 163, Address: 0x1bb200, Func Offset: 0xf0
	// Line 164, Address: 0x1bb220, Func Offset: 0x110
	// Line 166, Address: 0x1bb238, Func Offset: 0x128
	// Line 167, Address: 0x1bb240, Func Offset: 0x130
	// Line 169, Address: 0x1bb258, Func Offset: 0x148
	// Line 170, Address: 0x1bb268, Func Offset: 0x158
	// Line 172, Address: 0x1bb458, Func Offset: 0x348
	// Line 174, Address: 0x1bb468, Func Offset: 0x358
	// Line 177, Address: 0x1bb478, Func Offset: 0x368
	// Line 178, Address: 0x1bb480, Func Offset: 0x370
	// Line 179, Address: 0x1bb48c, Func Offset: 0x37c
	// Line 180, Address: 0x1bb4a4, Func Offset: 0x394
	// Line 181, Address: 0x1bb4bc, Func Offset: 0x3ac
	// Line 182, Address: 0x1bb4c0, Func Offset: 0x3b0
	// Line 181, Address: 0x1bb4c4, Func Offset: 0x3b4
	// Line 183, Address: 0x1bb4d0, Func Offset: 0x3c0
	// Line 185, Address: 0x1bb4e0, Func Offset: 0x3d0
	// Line 188, Address: 0x1bb4f0, Func Offset: 0x3e0
	// Line 196, Address: 0x1bb4f8, Func Offset: 0x3e8
	// Line 197, Address: 0x1bb504, Func Offset: 0x3f4
	// Line 198, Address: 0x1bb508, Func Offset: 0x3f8
	// Line 199, Address: 0x1bb528, Func Offset: 0x418
	// Line 200, Address: 0x1bb548, Func Offset: 0x438
	// Line 203, Address: 0x1bb560, Func Offset: 0x450
	// Line 206, Address: 0x1bb578, Func Offset: 0x468
	// Line 207, Address: 0x1bb584, Func Offset: 0x474
	// Line 208, Address: 0x1bb5c8, Func Offset: 0x4b8
	// Line 209, Address: 0x1bb5d0, Func Offset: 0x4c0
	// Line 210, Address: 0x1bb604, Func Offset: 0x4f4
	// Line 211, Address: 0x1bb620, Func Offset: 0x510
	// Line 212, Address: 0x1bb638, Func Offset: 0x528
	// Line 214, Address: 0x1bb640, Func Offset: 0x530
	// Line 215, Address: 0x1bb660, Func Offset: 0x550
	// Line 217, Address: 0x1bb668, Func Offset: 0x558
	// Line 224, Address: 0x1bb680, Func Offset: 0x570
	// Line 227, Address: 0x1bb698, Func Offset: 0x588
	// Line 229, Address: 0x1bb6a0, Func Offset: 0x590
	// Line 230, Address: 0x1bb6ac, Func Offset: 0x59c
	// Line 232, Address: 0x1bb8a0, Func Offset: 0x790
	// Line 233, Address: 0x1bb8b0, Func Offset: 0x7a0
	// Line 234, Address: 0x1bb8b4, Func Offset: 0x7a4
	// Line 236, Address: 0x1bb8b8, Func Offset: 0x7a8
	// Line 237, Address: 0x1bb8c4, Func Offset: 0x7b4
	// Line 238, Address: 0x1bb8dc, Func Offset: 0x7cc
	// Line 239, Address: 0x1bb8f4, Func Offset: 0x7e4
	// Line 240, Address: 0x1bb8f8, Func Offset: 0x7e8
	// Line 239, Address: 0x1bb8fc, Func Offset: 0x7ec
	// Line 241, Address: 0x1bb908, Func Offset: 0x7f8
	// Line 242, Address: 0x1bb918, Func Offset: 0x808
	// Line 244, Address: 0x1bb91c, Func Offset: 0x80c
	// Line 242, Address: 0x1bb920, Func Offset: 0x810
	// Line 244, Address: 0x1bb92c, Func Offset: 0x81c
	// Line 246, Address: 0x1bb948, Func Offset: 0x838
	// Func End, Address: 0x1bb984, Func Offset: 0x874
}

// iAnimBoneCount__FPv
// Start address: 0x1bb990
uint32 iAnimBoneCount(void* RawData)
{
	// Line 83, Address: 0x1bb990, Func Offset: 0
	// Line 84, Address: 0x1bb9a8, Func Offset: 0x18
	// Func End, Address: 0x1bb9b0, Func Offset: 0x20
}

// iAnimDuration__FPv
// Start address: 0x1bb9b0
float32 iAnimDuration(void* RawData)
{
	// Line 78, Address: 0x1bb9b0, Func Offset: 0
	// Func End, Address: 0x1bb9b8, Func Offset: 0x8
}

// iAnimEval__FPvfUiP5xVec3P5xQuat
// Start address: 0x1bb9c0
void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
	// Line 63, Address: 0x1bb9c0, Func Offset: 0
	// Func End, Address: 0x1bb9c8, Func Offset: 0x8
}

// iAnimInit__Fv
// Start address: 0x1bb9d0
void iAnimInit()
{
	// Line 43, Address: 0x1bb9d0, Func Offset: 0
	// Func End, Address: 0x1bb9d8, Func Offset: 0x8
}

