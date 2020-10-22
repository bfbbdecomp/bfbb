typedef struct xAnimEffect;
typedef struct xAnimPlay;
typedef struct xAnimState;
typedef struct xAnimSingle;
typedef struct xQuat;
typedef struct xVec3;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct xModelInstance;
typedef struct xAnimTransition;
typedef struct zAnimListAsset;
typedef struct xAnimFile;
typedef struct xAnimTransitionList;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xAnimMultiFile;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xAnimMultiFileBase;
typedef struct st_PKR_ASSET_TOCINFO;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef int32(*type_1)(void*, uint32, void*, int32);
typedef uint32(*type_2)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_3)(void*, uint32);
typedef uint32(*type_4)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void*(*type_7)(void*, uint32, void*, int32*, int32*);
typedef void(*type_9)(void*, uint32, void*);
typedef uint32(*type_10)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void*(*type_13)(void*, uint32, void*, uint32, uint32*);
typedef void*(*type_14)(void*, uint32, void*, void*, uint32, uint32*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_16)(void*, uint32, void*, int8*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);

typedef int8 type_5[16];
typedef int8 type_8[16];
typedef uint32 type_11[10];
typedef float32 type_17[2];
typedef uint8 type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef int8* type_21[20];

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	float32 BilinearLerp[2];
	xAnimEffect* Effect;
	uint32 ActiveCount;
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	uint32 pad;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;

	xVec3 create(float32 x, float32 y, float32 z);
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xModelInstance
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct zAnimListAsset
{
	uint32 ids[10];
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

int8 buffer[16];
int8 buffer[16];
int32 nals;
uint32* aids;
xAnimTable** atbls;
int32* anused;
int8* astnames[20];
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
uint32(*AlwaysConditional)(xAnimTransition*, xAnimSingle*, void*);
uint32 gActiveHeap;

int32 zAnimListGetNumUsed(uint32 id);
xAnimTable* zAnimListGetTable(uint32 id);
void zAnimListExit();
void zAnimListInit();
uint32 AlwaysConditional();

// zAnimListGetNumUsed__FUi
// Start address: 0x129e50
int32 zAnimListGetNumUsed(uint32 id)
{
	int32 i;
	// Line 147, Address: 0x129e50, Func Offset: 0
	// Line 148, Address: 0x129e68, Func Offset: 0x18
	// Line 149, Address: 0x129e74, Func Offset: 0x24
	// Line 151, Address: 0x129e88, Func Offset: 0x38
	// Line 152, Address: 0x129e98, Func Offset: 0x48
	// Line 153, Address: 0x129ea0, Func Offset: 0x50
	// Func End, Address: 0x129ea8, Func Offset: 0x58
}

// zAnimListGetTable__FUi
// Start address: 0x129eb0
xAnimTable* zAnimListGetTable(uint32 id)
{
	int32 i;
	// Line 137, Address: 0x129eb0, Func Offset: 0
	// Line 138, Address: 0x129ec8, Func Offset: 0x18
	// Line 139, Address: 0x129ed4, Func Offset: 0x24
	// Line 141, Address: 0x129ee8, Func Offset: 0x38
	// Line 142, Address: 0x129ef8, Func Offset: 0x48
	// Line 143, Address: 0x129f00, Func Offset: 0x50
	// Func End, Address: 0x129f08, Func Offset: 0x58
}

// zAnimListExit__Fv
// Start address: 0x129f10
void zAnimListExit()
{
	// Line 129, Address: 0x129f10, Func Offset: 0
	// Line 130, Address: 0x129f14, Func Offset: 0x4
	// Line 131, Address: 0x129f18, Func Offset: 0x8
	// Line 133, Address: 0x129f1c, Func Offset: 0xc
	// Func End, Address: 0x129f24, Func Offset: 0x14
}

// zAnimListInit__Fv
// Start address: 0x129f30
void zAnimListInit()
{
	int32 i;
	uint32 size;
	zAnimListAsset* zala;
	st_PKR_ASSET_TOCINFO ainfo;
	xAnimTable* atbl;
	void* buf;
	xAnimFile* afile;
	int32 idle_exists;
	int32 j;
	xAnimFile* afile;
	// Line 53, Address: 0x129f30, Func Offset: 0
	// Line 54, Address: 0x129f34, Func Offset: 0x4
	// Line 53, Address: 0x129f38, Func Offset: 0x8
	// Line 54, Address: 0x129f3c, Func Offset: 0xc
	// Line 53, Address: 0x129f40, Func Offset: 0x10
	// Line 54, Address: 0x129f64, Func Offset: 0x34
	// Line 56, Address: 0x129f74, Func Offset: 0x44
	// Line 57, Address: 0x129f7c, Func Offset: 0x4c
	// Line 59, Address: 0x129f90, Func Offset: 0x60
	// Line 61, Address: 0x129fa8, Func Offset: 0x78
	// Line 64, Address: 0x129fbc, Func Offset: 0x8c
	// Line 66, Address: 0x129fd8, Func Offset: 0xa8
	// Line 69, Address: 0x129ff0, Func Offset: 0xc0
	// Line 71, Address: 0x12a004, Func Offset: 0xd4
	// Line 74, Address: 0x12a01c, Func Offset: 0xec
	// Line 75, Address: 0x12a02c, Func Offset: 0xfc
	// Line 76, Address: 0x12a038, Func Offset: 0x108
	// Line 78, Address: 0x12a044, Func Offset: 0x114
	// Line 79, Address: 0x12a054, Func Offset: 0x124
	// Line 80, Address: 0x12a05c, Func Offset: 0x12c
	// Line 84, Address: 0x12a074, Func Offset: 0x144
	// Line 85, Address: 0x12a0bc, Func Offset: 0x18c
	// Line 87, Address: 0x12a0d0, Func Offset: 0x1a0
	// Line 88, Address: 0x12a0e4, Func Offset: 0x1b4
	// Line 91, Address: 0x12a0ec, Func Offset: 0x1bc
	// Line 92, Address: 0x12a0fc, Func Offset: 0x1cc
	// Line 93, Address: 0x12a104, Func Offset: 0x1d4
	// Line 94, Address: 0x12a110, Func Offset: 0x1e0
	// Line 95, Address: 0x12a118, Func Offset: 0x1e8
	// Line 99, Address: 0x12a128, Func Offset: 0x1f8
	// Line 100, Address: 0x12a134, Func Offset: 0x204
	// Line 104, Address: 0x12a17c, Func Offset: 0x24c
	// Line 106, Address: 0x12a1bc, Func Offset: 0x28c
	// Line 107, Address: 0x12a1d0, Func Offset: 0x2a0
	// Line 108, Address: 0x12a214, Func Offset: 0x2e4
	// Line 110, Address: 0x12a218, Func Offset: 0x2e8
	// Line 113, Address: 0x12a228, Func Offset: 0x2f8
	// Line 114, Address: 0x12a268, Func Offset: 0x338
	// Line 118, Address: 0x12a278, Func Offset: 0x348
	// Line 121, Address: 0x12a28c, Func Offset: 0x35c
	// Line 118, Address: 0x12a298, Func Offset: 0x368
	// Line 121, Address: 0x12a29c, Func Offset: 0x36c
	// Line 123, Address: 0x12a2a4, Func Offset: 0x374
	// Line 125, Address: 0x12a2b8, Func Offset: 0x388
	// Func End, Address: 0x12a2ec, Func Offset: 0x3bc
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x12a2f0
uint32 AlwaysConditional()
{
	// Line 49, Address: 0x12a2f0, Func Offset: 0
	// Func End, Address: 0x12a2f8, Func Offset: 0x8
}

