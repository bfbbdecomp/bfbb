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
typedef float32 type_1[22];
typedef float32 type_2[22];
typedef int16 type_4[2];
typedef xHeapState_tag type_5[12];
typedef analog_data type_6[2];
typedef uint32 type_8[4096];
typedef uint8 type_9[22];
typedef uint8 type_10[22];

struct xMemHeap_tag
{
	uint32 flags;
	uint32 hard_base;
	uint32 size;
	type_4 opp_heap;
	type_5 state;
	uint16 state_idx;
	uint16 max_blks;
	xMemBlock_tag* blk;
	xMemBlock_tag* lastblk;
};

struct _tagxPad
{
	type_9 value;
	type_10 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_1 up_tmr;
	type_2 down_tmr;
	type_6 analog;
};

struct xMemBlkInfo_tag
{
	xMemBlock_tag* header;
	uint32 pre;
	uint32 block;
	uint32 post;
	uint32 curr;
	uint32 waste;
	uint32 total;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_7 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	float32 mag;
	float32 ang;
};

struct _tagiPad
{
	int32 port;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xMemBlock_tag
{
	uint32 addr;
	uint32 size;
	int32 align;
};

struct xHeapState_tag
{
	uint32 curr;
	uint16 blk_ct;
	uint16 pad;
	uint32 used;
	uint32 wasted;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xMemArea_tag
{
	uint32 addr;
	uint32 size;
	uint32 flags;
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
	int8 x;
	int8 y;
};

xMemInfo_tag gMemInfo;
uint32 gActiveHeap;
type_0 gxHeap;
type_3 sMemBaseNotifyFunc;
int32 gMemReporting;
uint32 gMemReportingThreshold;
int32 gDumpTempLeaks;
type_8 ourGlobals;
_tagxPad* gDebugPad;
int8 _stack_size;
int8 _end;

void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, type_7 initCB, uint32 size, uint32 count, uint32 numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count);
int32 xMemGetBase();
void xMemRegisterBaseNotifyFunc(type_3 func);
int32 xMemPopBase(int32 depth);
int32 xMemPushBase();
void xMemPopTemp(void* addr);
void* xMemPushTemp(uint32 size);
void* xMemAlloc(uint32 heapID, uint32 size, int32 align);
void* xMemGrowAlloc(uint32 heapID, uint32 size);
uint32 xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, int32 align, xMemBlkInfo_tag* info);
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags);
void xMemExit();
void xMemInit();
void xMemDebug_SoakLog();

// xMemPoolFree__FP8xMemPoolPv
// Start address: 0x1f0300
void xMemPoolFree(xMemPool* pool, void* data)
{
	void* freeList;
	uint32 next;
	void** prev;
	void* curr;
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x1f0370
void* xMemPoolAlloc(xMemPool* pool)
{
	void* retval;
	uint32 next;
	uint32 flags;
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x1f0410
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, type_7 initCB, uint32 size, uint32 count, uint32 numRealloc)
{
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x1f0440
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count)
{
	int32 i;
	void* curr;
	type_7 initCB;
	uint32 next;
	uint32 size;
}

// xMemGetBase__Fv
// Start address: 0x1f0520
int32 xMemGetBase()
{
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x1f0550
void xMemRegisterBaseNotifyFunc(type_3 func)
{
}

// xMemPopBase__Fi
// Start address: 0x1f0560
int32 xMemPopBase(int32 depth)
{
}

// xMemPushBase__Fv
// Start address: 0x1f05d0
int32 xMemPushBase()
{
}

// xMemPopTemp__FPv
// Start address: 0x1f0670
void xMemPopTemp(void* addr)
{
}

// xMemPushTemp__FUi
// Start address: 0x1f0680
void* xMemPushTemp(uint32 size)
{
	void* addr;
}

// xMemAlloc__FUiUii
// Start address: 0x1f0690
void* xMemAlloc(uint32 heapID, uint32 size, int32 align)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	xMemBlkInfo_tag info;
	uint32 total;
}

// xMemGrowAlloc__FUiUi
// Start address: 0x1f07e0
void* xMemGrowAlloc(uint32 heapID, uint32 size)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	void* memptr;
}

// xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag
// Start address: 0x1f08d0
uint32 xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, int32 align, xMemBlkInfo_tag* info)
{
	int32 total;
	int32 hdr;
	int32 pre;
	int32 block;
	int32 post;
	xHeapState_tag* sp;
	int32 remainder;
}

// xMemInitHeap__FP12xMemHeap_tagUiUiUi
// Start address: 0x1f09f0
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags)
{
	uint32 old_base;
	int32 align;
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

