typedef struct xQuat;
typedef struct RwV3d;
typedef struct RtQuat;
typedef struct RtQuatSlerpCache;
typedef struct xVec3;


typedef u8 type[9120];

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RtQuat
{
	RwV3d imag;
	f32 real;
};

struct RtQuatSlerpCache
{
	RtQuat raFrom;
	RtQuat raTo;
	f32 omega;
	s32 nearlyZeroOm;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

type scratchBuffer;
u8* giAnimScratch;

void iAnimBlend(f32 BlendFactor, f32 BlendRecip, u16* BlendTimeOffset, f32* BoneTable, u32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest);
u32 iAnimBoneCount(void* RawData);
f32 iAnimDuration(void* RawData);
void iAnimEval(void* RawData, f32 time, u32 flags, xVec3* tran, xQuat* quat);
void iAnimInit();

// iAnimBlend__FffPUsPfUiP5xVec3P5xQuatP5xVec3P5xQuatP5xVec3P5xQuat
// Start address: 0x1bb110
void iAnimBlend(f32 BlendFactor, f32 BlendRecip, u16* BlendTimeOffset, f32* BoneTable, u32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest)
{
	u32 i;
	u32 invert;
	RtQuat* q2;
	RtQuat ident;
	xVec3* t2;
	f32 lerp;
	RtQuatSlerpCache qcache;
	f32 rSclFrom;
	f32 rSclTo;
	f32 z;
	f32 z;
	f32 baselerp;
	f32 lerp;
	RtQuatSlerpCache qcache;
	f32 rSclFrom;
	f32 rSclTo;
	f32 z;
	f32 z;
}

// iAnimBoneCount__FPv
// Start address: 0x1bb990
u32 iAnimBoneCount(void* RawData)
{
}

// iAnimDuration__FPv
// Start address: 0x1bb9b0
f32 iAnimDuration(void* RawData)
{
}

// iAnimEval__FPvfUiP5xVec3P5xQuat
// Start address: 0x1bb9c0
void iAnimEval(void* RawData, f32 time, u32 flags, xVec3* tran, xQuat* quat)
{
}

// iAnimInit__Fv
// Start address: 0x1bb9d0
void iAnimInit()
{
}

