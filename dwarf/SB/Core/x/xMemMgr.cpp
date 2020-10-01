typedef struct xMemHeap_tag;
typedef struct _tagxPad;
typedef struct xMemBlkInfo_tag;
typedef struct xMemPool;
typedef enum _tagRumbleType;
typedef struct analog_data;
typedef struct _tagiPad;
typedef struct xVec2;
typedef struct xMemBlock_tag;
typedef struct xHeapState_tag;
typedef struct _tagxRumble;
typedef struct xMemArea_tag;
typedef enum _tagPadState;
typedef struct xMemInfo_tag;
typedef struct _tagPadAnalog;

typedef void(*type_3)();
typedef void(*type_7)(xMemPool*, void*);

typedef xMemHeap_tag type_0[3];
typedef f32 type_1[22];
typedef f32 type_2[22];
typedef s16 type_4[2];
typedef xHeapState_tag type_5[12];
typedef analog_data type_6[2];
typedef u32 type_8[4096];
typedef u8 type_9[22];
typedef u8 type_10[22];

struct xMemHeap_tag
{
	u32 flags;
	u32 hard_base;
	u32 size;
	type_4 opp_heap;
	type_5 state;
	u16 state_idx;
	u16 max_blks;
	xMemBlock_tag* blk;
	xMemBlock_tag* lastblk;
};

struct _tagxPad
{
	type_9 value;
	type_10 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_1 up_tmr;
	type_2 down_tmr;
	type_6 analog;
};

struct xMemBlkInfo_tag
{
	xMemBlock_tag* header;
	u32 pre;
	u32 block;
	u32 post;
	u32 curr;
	u32 waste;
	u32 total;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_7 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct _tagiPad
{
	s32 port;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xMemBlock_tag
{
	u32 addr;
	u32 size;
	s32 align;
};

struct xHeapState_tag
{
	u32 curr;
	u16 blk_ct;
	u16 pad;
	u32 used;
	u32 wasted;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xMemArea_tag
{
	u32 addr;
	u32 size;
	u32 flags;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

xMemInfo_tag gMemInfo;
u32 gActiveHeap;
type_0 gxHeap;
type_3 sMemBaseNotifyFunc;
s32 gMemReporting;
u32 gMemReportingThreshold;
s32 gDumpTempLeaks;
type_8 ourGlobals;
_tagxPad* gDebugPad;
s8 _stack_size;
s8 _end;

void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, u32 nextOffset, u32 flags, type_7 initCB, u32 size, u32 count, u32 numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, u32 count);
s32 xMemGetBase();
void xMemRegisterBaseNotifyFunc(type_3 func);
s32 xMemPopBase(s32 depth);
s32 xMemPushBase();
void xMemPopTemp(void* addr);
void* xMemPushTemp(u32 size);
void* xMemAlloc(u32 heapID, u32 size, s32 align);
void* xMemGrowAlloc(u32 heapID, u32 size);
u32 xMemGetBlockInfo(xMemHeap_tag* heap, u32 size, s32 align, xMemBlkInfo_tag* info);
void xMemInitHeap(xMemHeap_tag* heap, u32 base, u32 size, u32 flags);
void xMemExit();
void xMemInit();
void xMemDebug_SoakLog();

// xMemPoolFree__FP8xMemPoolPv
// Start address: 0x1f0300
void xMemPoolFree(xMemPool* pool, void* data)
{
	void* freeList;
	u32 next;
	void** prev;
	void* curr;
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x1f0370
void* xMemPoolAlloc(xMemPool* pool)
{
	void* retval;
	u32 next;
	u32 flags;
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x1f0410
void xMemPoolSetup(xMemPool* pool, void* buffer, u32 nextOffset, u32 flags, type_7 initCB, u32 size, u32 count, u32 numRealloc)
{
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x1f0440
void xMemPoolAddElements(xMemPool* pool, void* buffer, u32 count)
{
	s32 i;
	void* curr;
	type_7 initCB;
	u32 next;
	u32 size;
}

// xMemGetBase__Fv
// Start address: 0x1f0520
s32 xMemGetBase()
{
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x1f0550
void xMemRegisterBaseNotifyFunc(type_3 func)
{
}

// xMemPopBase__Fi
// Start address: 0x1f0560
s32 xMemPopBase(s32 depth)
{
}

// xMemPushBase__Fv
// Start address: 0x1f05d0
s32 xMemPushBase()
{
}

// xMemPopTemp__FPv
// Start address: 0x1f0670
void xMemPopTemp(void* addr)
{
}

// xMemPushTemp__FUi
// Start address: 0x1f0680
void* xMemPushTemp(u32 size)
{
	void* addr;
}

// xMemAlloc__FUiUii
// Start address: 0x1f0690
void* xMemAlloc(u32 heapID, u32 size, s32 align)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	xMemBlkInfo_tag info;
	u32 total;
}

// xMemGrowAlloc__FUiUi
// Start address: 0x1f07e0
void* xMemGrowAlloc(u32 heapID, u32 size)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	void* memptr;
}

// xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag
// Start address: 0x1f08d0
u32 xMemGetBlockInfo(xMemHeap_tag* heap, u32 size, s32 align, xMemBlkInfo_tag* info)
{
	s32 total;
	s32 hdr;
	s32 pre;
	s32 block;
	s32 post;
	xHeapState_tag* sp;
	s32 remainder;
}

// xMemInitHeap__FP12xMemHeap_tagUiUiUi
// Start address: 0x1f09f0
void xMemInitHeap(xMemHeap_tag* heap, u32 base, u32 size, u32 flags)
{
	u32 old_base;
	s32 align;
	xHeapState_tag* sp;
}

// xMemExit__Fv
// Start address: 0x1f0b00
void xMemExit()
{
}

// xMemInit__Fv
// Start address: 0x1f0b10
void xMemInit()
{
}

// xMemDebug_SoakLog__FPCc
// Start address: 0x1f0bd0
void xMemDebug_SoakLog()
{
}

