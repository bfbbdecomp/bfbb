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
	type_2 Callback;
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
	type_6 BeforeAnimMatrices;
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
	type_0 BeforeEnter;
	type_15 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_17 BilinearLerp;
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
	type_12 InitCB;
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
	type_10 Conditional;
	type_10 Callback;
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
	type_11 ids;
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
	type_18 NumAnims;
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
	type_13 readXForm;
	type_14 writeXForm;
	type_1 assetLoaded;
	type_7 makeData;
	type_9 cleanup;
	type_3 assetUnloaded;
	type_16 writePeek;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
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

type_5 buffer;
type_8 buffer;
int32 nals;
uint32* aids;
xAnimTable** atbls;
int32* anused;
type_21 astnames;
type_20 xAnimDefaultBeforeEnter;
type_4 AlwaysConditional;
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
}

// zAnimListGetTable__FUi
// Start address: 0x129eb0
xAnimTable* zAnimListGetTable(uint32 id)
{
	int32 i;
}

// zAnimListExit__Fv
// Start address: 0x129f10
void zAnimListExit()
{
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
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x12a2f0
uint32 AlwaysConditional()
{
}

