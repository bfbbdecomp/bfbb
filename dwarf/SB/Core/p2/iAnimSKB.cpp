typedef struct xQuat;
typedef struct ANMHeader;
typedef struct xVec3;
typedef struct iAnimSKBHeader;
typedef struct iAnimSKBKey;
typedef struct SKAKey;
typedef struct ANMKey;
typedef struct SKAHeader;

typedef s32(*type_11)(void*, void*);
typedef s32(*type_16)(void*, void*);

typedef s16 type_0[4];
typedef f32 type_1[3];
typedef s16 type_2[3];
typedef f32 type_3[3];
typedef f32 type_4[4];
typedef f32 type_5[3];
typedef f32 type_6[3];
typedef SKAKey* type_7[64];
typedef f32 type_8[4];
typedef f32 type_9[3];
typedef f32 type_10[3];
typedef f32 type_12[4];
typedef f32 type_13[3];
typedef s16 type_14[4];
typedef s16 type_15[3];
typedef f32 type_17[24];
typedef f32 type_18[3];
typedef f32 type_19[3];

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct ANMHeader
{
	u32 chunkType;
	u32 chunkLength;
	u32 chunkVersion;
	s32 hanimVersion;
	s32 hanimTypeID;
	u32 numFrames;
	s32 flags;
	f32 duration;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct iAnimSKBHeader
{
	u32 Magic;
	u32 Flags;
	u16 BoneCount;
	u16 TimeCount;
	u32 KeyCount;
	type_18 Scale;
};

struct iAnimSKBKey
{
	u16 TimeIndex;
	type_0 Quat;
	type_2 Tran;
};

struct SKAKey
{
	type_12 quat;
	type_13 tran;
	f32 time;
	u32 prevFrame;
};

struct ANMKey
{
	f32 time;
	type_8 quat;
	type_10 tran;
	u32 prevFrame;
};

struct SKAHeader
{
	u32 numFrames;
	u32 flags;
	f32 duration;
};

type_17 slerpPolynomial;
type_11 CmpBoneTime;
u32 gActiveHeap;
type_16 CmpTime;
u8* giAnimScratch;

s32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, u32 bone, xVec3* tranArray);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, u32 bone, f32* starttran, f32* endtran);
f32 iAnimDurationSKB(iAnimSKBHeader* data);
void iAnimEvalSKB(iAnimSKBHeader* data, f32 time, u32 flags, xVec3* tran, xQuat* quat);

// _iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i
// Start address: 0x1a4410
s32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, u32 bone, xVec3* tranArray)
{
	u32 i;
	u32 j;
	u32 keylast;
	u32 tcount;
	iAnimSKBKey* keys;
	f32* times;
	u16* offsets;
	xVec3* lastTran;
	s32 tranFound;
	s32 lastTime;
	s32 currTime;
	f32 lerp;
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf
// Start address: 0x1a49d0
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, u32 bone, f32* starttran, f32* endtran)
{
	s32 ipos;
	u32 i;
	u32 idx;
	u32 keyfirst;
	u32 keylast;
	u32 kcount;
	u32 bcount;
	u32 tcount;
	type_3 outScale;
	f32 pos;
	type_5 factor;
	type_6 oldmax;
	type_9 newmax;
	f32 timefirst;
	f32 timelast;
	iAnimSKBKey* keys;
	f32* times;
	u16* offsets;
}

// iAnimDurationSKB__FP14iAnimSKBHeader
// Start address: 0x1a4eb0
f32 iAnimDurationSKB(iAnimSKBHeader* data)
{
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat
// Start address: 0x1a4ed0
void iAnimEvalSKB(iAnimSKBHeader* data, f32 time, u32 flags, xVec3* tran, xQuat* quat)
{
	u32 i;
	u32 tidx;
	u32 bcount;
	u32 tcount;
	iAnimSKBKey* keys;
	f32* times;
	u16* offsets;
	s32 asdf;
	f32 scalex;
	f32 scaley;
	f32 scalez;
	iAnimSKBKey* k;
	f32 time1;
	f32 time2;
	f32 lerp;
	iAnimSKBKey* k;
	u32 costheta;
	u32 theta;
}

