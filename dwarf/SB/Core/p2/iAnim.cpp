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

type scratchBuffer;
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
}

// iAnimBoneCount__FPv
// Start address: 0x1bb990
uint32 iAnimBoneCount(void* RawData)
{
}

// iAnimDuration__FPv
// Start address: 0x1bb9b0
float32 iAnimDuration(void* RawData)
{
}

// iAnimEval__FPvfUiP5xVec3P5xQuat
// Start address: 0x1bb9c0
void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
}

// iAnimInit__Fv
// Start address: 0x1bb9d0
void iAnimInit()
{
}

