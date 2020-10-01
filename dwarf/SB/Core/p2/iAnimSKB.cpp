typedef struct xQuat;
typedef struct ANMHeader;
typedef struct xVec3;
typedef struct iAnimSKBHeader;
typedef struct iAnimSKBKey;
typedef struct SKAKey;
typedef struct ANMKey;
typedef struct SKAHeader;

typedef int32(*type_11)(void*, void*);
typedef int32(*type_16)(void*, void*);

typedef int16 type_0[4];
typedef float32 type_1[3];
typedef int16 type_2[3];
typedef float32 type_3[3];
typedef float32 type_4[4];
typedef float32 type_5[3];
typedef float32 type_6[3];
typedef SKAKey* type_7[64];
typedef float32 type_8[4];
typedef float32 type_9[3];
typedef float32 type_10[3];
typedef float32 type_12[4];
typedef float32 type_13[3];
typedef int16 type_14[4];
typedef int16 type_15[3];
typedef float32 type_17[24];
typedef float32 type_18[3];
typedef float32 type_19[3];

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct ANMHeader
{
	uint32 chunkType;
	uint32 chunkLength;
	uint32 chunkVersion;
	int32 hanimVersion;
	int32 hanimTypeID;
	uint32 numFrames;
	int32 flags;
	float32 duration;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct iAnimSKBHeader
{
	uint32 Magic;
	uint32 Flags;
	uint16 BoneCount;
	uint16 TimeCount;
	uint32 KeyCount;
	type_18 Scale;
};

struct iAnimSKBKey
{
	uint16 TimeIndex;
	type_0 Quat;
	type_2 Tran;
};

struct SKAKey
{
	type_12 quat;
	type_13 tran;
	float32 time;
	uint32 prevFrame;
};

struct ANMKey
{
	float32 time;
	type_8 quat;
	type_10 tran;
	uint32 prevFrame;
};

struct SKAHeader
{
	uint32 numFrames;
	uint32 flags;
	float32 duration;
};

type_17 slerpPolynomial;
type_11 CmpBoneTime;
uint32 gActiveHeap;
type_16 CmpTime;
uint8* giAnimScratch;

int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran);
float32 iAnimDurationSKB(iAnimSKBHeader* data);
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat);

// _iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i
// Start address: 0x1a4410
int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray)
{
	uint32 i;
	uint32 j;
	uint32 keylast;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	xVec3* lastTran;
	int32 tranFound;
	int32 lastTime;
	int32 currTime;
	float32 lerp;
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf
// Start address: 0x1a49d0
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran)
{
	int32 ipos;
	uint32 i;
	uint32 idx;
	uint32 keyfirst;
	uint32 keylast;
	uint32 kcount;
	uint32 bcount;
	uint32 tcount;
	type_3 outScale;
	float32 pos;
	type_5 factor;
	type_6 oldmax;
	type_9 newmax;
	float32 timefirst;
	float32 timelast;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
}

// iAnimDurationSKB__FP14iAnimSKBHeader
// Start address: 0x1a4eb0
float32 iAnimDurationSKB(iAnimSKBHeader* data)
{
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat
// Start address: 0x1a4ed0
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
	uint32 i;
	uint32 tidx;
	uint32 bcount;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	int32 asdf;
	float32 scalex;
	float32 scaley;
	float32 scalez;
	iAnimSKBKey* k;
	float32 time1;
	float32 time2;
	float32 lerp;
	iAnimSKBKey* k;
	uint32 costheta;
	uint32 theta;
}

