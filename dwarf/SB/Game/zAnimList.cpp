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
typedef s32(*type_1)(void*, u32, void*, s32);
typedef u32(*type_2)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_3)(void*, u32);
typedef u32(*type_4)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void*(*type_7)(void*, u32, void*, s32*, s32*);
typedef void(*type_9)(void*, u32, void*);
typedef u32(*type_10)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void*(*type_13)(void*, u32, void*, u32, u32*);
typedef void*(*type_14)(void*, u32, void*, void*, u32, u32*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_16)(void*, u32, void*, s8*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);

typedef s8 type_5[16];
typedef s8 type_8[16];
typedef u32 type_11[10];
typedef f32 type_17[2];
typedef u8 type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef s8* type_21[20];

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_2 Callback;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
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
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_0 BeforeEnter;
	type_15 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_17 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xAnimTable
{
	xAnimTable* Next;
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_12 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct zAnimListAsset
{
	type_11 ids;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
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
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
	void* mempos;
};

type_5 buffer;
type_8 buffer;
s32 nals;
u32* aids;
xAnimTable** atbls;
s32* anused;
type_21 astnames;
type_20 xAnimDefaultBeforeEnter;
type_4 AlwaysConditional;
u32 gActiveHeap;

s32 zAnimListGetNumUsed(u32 id);
xAnimTable* zAnimListGetTable(u32 id);
void zAnimListExit();
void zAnimListInit();
u32 AlwaysConditional();

// zAnimListGetNumUsed__FUi
// Start address: 0x129e50
s32 zAnimListGetNumUsed(u32 id)
{
	s32 i;
}

// zAnimListGetTable__FUi
// Start address: 0x129eb0
xAnimTable* zAnimListGetTable(u32 id)
{
	s32 i;
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
	s32 i;
	u32 size;
	zAnimListAsset* zala;
	st_PKR_ASSET_TOCINFO ainfo;
	xAnimTable* atbl;
	void* buf;
	xAnimFile* afile;
	s32 idle_exists;
	s32 j;
	xAnimFile* afile;
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x12a2f0
u32 AlwaysConditional()
{
}

