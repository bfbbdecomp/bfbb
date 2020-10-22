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
	int16 opp_heap[2];
	xHeapState_tag state[12];
	uint16 state_idx;
	uint16 max_blks;
	xMemBlock_tag* blk;
	xMemBlock_tag* lastblk;
};

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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
	void(*InitCB)(xMemPool*, void*);
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
xMemHeap_tag gxHeap[3];
void(*sMemBaseNotifyFunc)();
int32 gMemReporting;
uint32 gMemReportingThreshold;
int32 gDumpTempLeaks;
uint32 ourGlobals[4096];
_tagxPad* gDebugPad;
int8 _stack_size;
int8 _end;

void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count);
int32 xMemGetBase();
void xMemRegisterBaseNotifyFunc(void(*func)());
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
	// Line 1582, Address: 0x1f0300, Func Offset: 0
	// Line 1590, Address: 0x1f0308, Func Offset: 0x8
	// Line 1586, Address: 0x1f030c, Func Offset: 0xc
	// Line 1590, Address: 0x1f0310, Func Offset: 0x10
	// Line 1592, Address: 0x1f031c, Func Offset: 0x1c
	// Line 1593, Address: 0x1f0320, Func Offset: 0x20
	// Line 1595, Address: 0x1f032c, Func Offset: 0x2c
	// Line 1596, Address: 0x1f0330, Func Offset: 0x30
	// Line 1597, Address: 0x1f0348, Func Offset: 0x48
	// Line 1598, Address: 0x1f0350, Func Offset: 0x50
	// Line 1603, Address: 0x1f0358, Func Offset: 0x58
	// Line 1604, Address: 0x1f0360, Func Offset: 0x60
	// Line 1605, Address: 0x1f0364, Func Offset: 0x64
	// Func End, Address: 0x1f0370, Func Offset: 0x70
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x1f0370
void* xMemPoolAlloc(xMemPool* pool)
{
	void* retval;
	uint32 next;
	uint32 flags;
	// Line 1550, Address: 0x1f0370, Func Offset: 0
	// Line 1552, Address: 0x1f0388, Func Offset: 0x18
	// Line 1553, Address: 0x1f038c, Func Offset: 0x1c
	// Line 1554, Address: 0x1f0390, Func Offset: 0x20
	// Line 1557, Address: 0x1f0394, Func Offset: 0x24
	// Line 1559, Address: 0x1f03a0, Func Offset: 0x30
	// Line 1562, Address: 0x1f03c4, Func Offset: 0x54
	// Line 1566, Address: 0x1f03cc, Func Offset: 0x5c
	// Line 1569, Address: 0x1f03d0, Func Offset: 0x60
	// Line 1570, Address: 0x1f03dc, Func Offset: 0x6c
	// Line 1571, Address: 0x1f03e4, Func Offset: 0x74
	// Line 1576, Address: 0x1f03e8, Func Offset: 0x78
	// Func End, Address: 0x1f0404, Func Offset: 0x94
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x1f0410
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc)
{
	// Line 1535, Address: 0x1f0410, Func Offset: 0
	// Line 1536, Address: 0x1f0414, Func Offset: 0x4
	// Line 1537, Address: 0x1f0418, Func Offset: 0x8
	// Line 1545, Address: 0x1f041c, Func Offset: 0xc
	// Line 1538, Address: 0x1f0420, Func Offset: 0x10
	// Line 1539, Address: 0x1f0424, Func Offset: 0x14
	// Line 1540, Address: 0x1f0428, Func Offset: 0x18
	// Line 1541, Address: 0x1f042c, Func Offset: 0x1c
	// Line 1542, Address: 0x1f0430, Func Offset: 0x20
	// Line 1545, Address: 0x1f0434, Func Offset: 0x24
	// Func End, Address: 0x1f043c, Func Offset: 0x2c
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x1f0440
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count)
{
	int32 i;
	void* curr;
	void(*initCB)(xMemPool*, void*);
	uint32 next;
	uint32 size;
	// Line 1511, Address: 0x1f0440, Func Offset: 0
	// Line 1518, Address: 0x1f0478, Func Offset: 0x38
	// Line 1514, Address: 0x1f047c, Func Offset: 0x3c
	// Line 1518, Address: 0x1f0480, Func Offset: 0x40
	// Line 1515, Address: 0x1f0484, Func Offset: 0x44
	// Line 1516, Address: 0x1f0488, Func Offset: 0x48
	// Line 1518, Address: 0x1f048c, Func Offset: 0x4c
	// Line 1519, Address: 0x1f049c, Func Offset: 0x5c
	// Line 1520, Address: 0x1f04a0, Func Offset: 0x60
	// Line 1522, Address: 0x1f04b0, Func Offset: 0x70
	// Line 1523, Address: 0x1f04c0, Func Offset: 0x80
	// Line 1524, Address: 0x1f04c8, Func Offset: 0x88
	// Line 1525, Address: 0x1f04d8, Func Offset: 0x98
	// Line 1527, Address: 0x1f04dc, Func Offset: 0x9c
	// Line 1528, Address: 0x1f04e8, Func Offset: 0xa8
	// Func End, Address: 0x1f0518, Func Offset: 0xd8
}

// xMemGetBase__Fv
// Start address: 0x1f0520
int32 xMemGetBase()
{
	// Line 1488, Address: 0x1f0520, Func Offset: 0
	// Line 1489, Address: 0x1f0544, Func Offset: 0x24
	// Func End, Address: 0x1f054c, Func Offset: 0x2c
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x1f0550
void xMemRegisterBaseNotifyFunc(void(*func)())
{
	// Line 1476, Address: 0x1f0550, Func Offset: 0
	// Func End, Address: 0x1f0558, Func Offset: 0x8
}

// xMemPopBase__Fi
// Start address: 0x1f0560
int32 xMemPopBase(int32 depth)
{
	// Line 1451, Address: 0x1f0560, Func Offset: 0
	// Line 1452, Address: 0x1f0564, Func Offset: 0x4
	// Line 1451, Address: 0x1f0568, Func Offset: 0x8
	// Line 1452, Address: 0x1f056c, Func Offset: 0xc
	// Line 1451, Address: 0x1f0570, Func Offset: 0x10
	// Line 1452, Address: 0x1f0574, Func Offset: 0x14
	// Line 1453, Address: 0x1f05bc, Func Offset: 0x5c
	// Func End, Address: 0x1f05cc, Func Offset: 0x6c
}

// xMemPushBase__Fv
// Start address: 0x1f05d0
int32 xMemPushBase()
{
	// Line 1399, Address: 0x1f05d0, Func Offset: 0
	// Line 1400, Address: 0x1f05d4, Func Offset: 0x4
	// Line 1399, Address: 0x1f05d8, Func Offset: 0x8
	// Line 1400, Address: 0x1f05dc, Func Offset: 0xc
	// Line 1399, Address: 0x1f05e0, Func Offset: 0x10
	// Line 1400, Address: 0x1f05e4, Func Offset: 0x14
	// Line 1401, Address: 0x1f065c, Func Offset: 0x8c
	// Line 1400, Address: 0x1f0664, Func Offset: 0x94
	// Line 1401, Address: 0x1f0668, Func Offset: 0x98
	// Func End, Address: 0x1f0670, Func Offset: 0xa0
}

// xMemPopTemp__FPv
// Start address: 0x1f0670
void xMemPopTemp(void* addr)
{
	// Line 1039, Address: 0x1f0670, Func Offset: 0
	// Func End, Address: 0x1f0680, Func Offset: 0x10
}

// xMemPushTemp__FUi
// Start address: 0x1f0680
void* xMemPushTemp(uint32 size)
{
	void* addr;
	// Line 956, Address: 0x1f0680, Func Offset: 0
	// Func End, Address: 0x1f0690, Func Offset: 0x10
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
	// Line 761, Address: 0x1f0690, Func Offset: 0
	// Line 769, Address: 0x1f0694, Func Offset: 0x4
	// Line 761, Address: 0x1f0698, Func Offset: 0x8
	// Line 769, Address: 0x1f069c, Func Offset: 0xc
	// Line 761, Address: 0x1f06a0, Func Offset: 0x10
	// Line 769, Address: 0x1f06a4, Func Offset: 0x14
	// Line 761, Address: 0x1f06ac, Func Offset: 0x1c
	// Line 769, Address: 0x1f06b0, Func Offset: 0x20
	// Line 761, Address: 0x1f06b4, Func Offset: 0x24
	// Line 769, Address: 0x1f06b8, Func Offset: 0x28
	// Line 761, Address: 0x1f06bc, Func Offset: 0x2c
	// Line 769, Address: 0x1f06c0, Func Offset: 0x30
	// Line 761, Address: 0x1f06c4, Func Offset: 0x34
	// Line 769, Address: 0x1f06c8, Func Offset: 0x38
	// Line 770, Address: 0x1f06d4, Func Offset: 0x44
	// Line 776, Address: 0x1f06f0, Func Offset: 0x60
	// Line 770, Address: 0x1f06f4, Func Offset: 0x64
	// Line 781, Address: 0x1f06fc, Func Offset: 0x6c
	// Line 785, Address: 0x1f0704, Func Offset: 0x74
	// Line 788, Address: 0x1f0710, Func Offset: 0x80
	// Line 792, Address: 0x1f0720, Func Offset: 0x90
	// Line 812, Address: 0x1f0738, Func Offset: 0xa8
	// Line 843, Address: 0x1f0740, Func Offset: 0xb0
	// Line 845, Address: 0x1f0744, Func Offset: 0xb4
	// Line 843, Address: 0x1f0748, Func Offset: 0xb8
	// Line 844, Address: 0x1f074c, Func Offset: 0xbc
	// Line 845, Address: 0x1f0758, Func Offset: 0xc8
	// Line 849, Address: 0x1f0768, Func Offset: 0xd8
	// Line 852, Address: 0x1f0770, Func Offset: 0xe0
	// Line 895, Address: 0x1f0774, Func Offset: 0xe4
	// Line 852, Address: 0x1f0778, Func Offset: 0xe8
	// Line 853, Address: 0x1f077c, Func Offset: 0xec
	// Line 854, Address: 0x1f0780, Func Offset: 0xf0
	// Line 869, Address: 0x1f0784, Func Offset: 0xf4
	// Line 870, Address: 0x1f0790, Func Offset: 0x100
	// Line 895, Address: 0x1f07a0, Func Offset: 0x110
	// Line 897, Address: 0x1f07ac, Func Offset: 0x11c
	// Line 911, Address: 0x1f07b0, Func Offset: 0x120
	// Line 913, Address: 0x1f07b8, Func Offset: 0x128
	// Func End, Address: 0x1f07d8, Func Offset: 0x148
}

// xMemGrowAlloc__FUiUi
// Start address: 0x1f07e0
void* xMemGrowAlloc(uint32 heapID, uint32 size)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	void* memptr;
	// Line 679, Address: 0x1f07e4, Func Offset: 0x4
	// Line 691, Address: 0x1f07e8, Func Offset: 0x8
	// Line 679, Address: 0x1f07f4, Func Offset: 0x14
	// Line 694, Address: 0x1f07f8, Func Offset: 0x18
	// Line 679, Address: 0x1f07fc, Func Offset: 0x1c
	// Line 694, Address: 0x1f0800, Func Offset: 0x20
	// Line 695, Address: 0x1f081c, Func Offset: 0x3c
	// Line 696, Address: 0x1f0820, Func Offset: 0x40
	// Line 705, Address: 0x1f0824, Func Offset: 0x44
	// Line 695, Address: 0x1f0828, Func Offset: 0x48
	// Line 705, Address: 0x1f0834, Func Offset: 0x54
	// Line 711, Address: 0x1f0848, Func Offset: 0x68
	// Line 717, Address: 0x1f0850, Func Offset: 0x70
	// Line 718, Address: 0x1f0860, Func Offset: 0x80
	// Line 719, Address: 0x1f0868, Func Offset: 0x88
	// Line 720, Address: 0x1f086c, Func Offset: 0x8c
	// Line 725, Address: 0x1f0874, Func Offset: 0x94
	// Line 727, Address: 0x1f0880, Func Offset: 0xa0
	// Line 726, Address: 0x1f0884, Func Offset: 0xa4
	// Line 727, Address: 0x1f0888, Func Offset: 0xa8
	// Line 726, Address: 0x1f088c, Func Offset: 0xac
	// Line 727, Address: 0x1f0890, Func Offset: 0xb0
	// Line 732, Address: 0x1f0894, Func Offset: 0xb4
	// Line 733, Address: 0x1f0898, Func Offset: 0xb8
	// Line 737, Address: 0x1f089c, Func Offset: 0xbc
	// Line 733, Address: 0x1f08a4, Func Offset: 0xc4
	// Line 734, Address: 0x1f08ac, Func Offset: 0xcc
	// Line 737, Address: 0x1f08b4, Func Offset: 0xd4
	// Line 738, Address: 0x1f08bc, Func Offset: 0xdc
	// Line 739, Address: 0x1f08c0, Func Offset: 0xe0
	// Func End, Address: 0x1f08d0, Func Offset: 0xf0
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
	// Line 594, Address: 0x1f08d0, Func Offset: 0
	// Line 595, Address: 0x1f08d4, Func Offset: 0x4
	// Line 594, Address: 0x1f08d8, Func Offset: 0x8
	// Line 595, Address: 0x1f08dc, Func Offset: 0xc
	// Line 602, Address: 0x1f08e0, Func Offset: 0x10
	// Line 594, Address: 0x1f08e8, Func Offset: 0x18
	// Line 595, Address: 0x1f08ec, Func Offset: 0x1c
	// Line 594, Address: 0x1f08f0, Func Offset: 0x20
	// Line 602, Address: 0x1f08f4, Func Offset: 0x24
	// Line 594, Address: 0x1f08f8, Func Offset: 0x28
	// Line 605, Address: 0x1f08fc, Func Offset: 0x2c
	// Line 608, Address: 0x1f0904, Func Offset: 0x34
	// Line 612, Address: 0x1f0908, Func Offset: 0x38
	// Line 608, Address: 0x1f0910, Func Offset: 0x40
	// Line 612, Address: 0x1f0914, Func Offset: 0x44
	// Line 616, Address: 0x1f0928, Func Offset: 0x58
	// Line 621, Address: 0x1f092c, Func Offset: 0x5c
	// Line 623, Address: 0x1f0938, Func Offset: 0x68
	// Line 626, Address: 0x1f093c, Func Offset: 0x6c
	// Line 627, Address: 0x1f0948, Func Offset: 0x78
	// Line 628, Address: 0x1f0958, Func Offset: 0x88
	// Line 632, Address: 0x1f0960, Func Offset: 0x90
	// Line 635, Address: 0x1f0964, Func Offset: 0x94
	// Line 639, Address: 0x1f0968, Func Offset: 0x98
	// Line 654, Address: 0x1f096c, Func Offset: 0x9c
	// Line 639, Address: 0x1f0970, Func Offset: 0xa0
	// Line 654, Address: 0x1f0974, Func Offset: 0xa4
	// Line 656, Address: 0x1f0980, Func Offset: 0xb0
	// Line 658, Address: 0x1f0998, Func Offset: 0xc8
	// Line 659, Address: 0x1f09a0, Func Offset: 0xd0
	// Line 661, Address: 0x1f09a8, Func Offset: 0xd8
	// Line 667, Address: 0x1f09ac, Func Offset: 0xdc
	// Line 664, Address: 0x1f09b0, Func Offset: 0xe0
	// Line 667, Address: 0x1f09b4, Func Offset: 0xe4
	// Line 661, Address: 0x1f09b8, Func Offset: 0xe8
	// Line 662, Address: 0x1f09c0, Func Offset: 0xf0
	// Line 663, Address: 0x1f09cc, Func Offset: 0xfc
	// Line 664, Address: 0x1f09d8, Func Offset: 0x108
	// Line 667, Address: 0x1f09e4, Func Offset: 0x114
	// Line 671, Address: 0x1f09e8, Func Offset: 0x118
	// Func End, Address: 0x1f09f0, Func Offset: 0x120
}

// xMemInitHeap__FP12xMemHeap_tagUiUiUi
// Start address: 0x1f09f0
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags)
{
	uint32 old_base;
	int32 align;
	xHeapState_tag* sp;
	// Line 519, Address: 0x1f09f0, Func Offset: 0
	// Line 527, Address: 0x1f09f4, Func Offset: 0x4
	// Line 519, Address: 0x1f09f8, Func Offset: 0x8
	// Line 527, Address: 0x1f0a04, Func Offset: 0x14
	// Line 532, Address: 0x1f0a10, Func Offset: 0x20
	// Line 533, Address: 0x1f0a1c, Func Offset: 0x2c
	// Line 534, Address: 0x1f0a24, Func Offset: 0x34
	// Line 535, Address: 0x1f0a28, Func Offset: 0x38
	// Line 536, Address: 0x1f0a30, Func Offset: 0x40
	// Line 537, Address: 0x1f0a40, Func Offset: 0x50
	// Line 545, Address: 0x1f0a48, Func Offset: 0x58
	// Line 546, Address: 0x1f0a4c, Func Offset: 0x5c
	// Line 559, Address: 0x1f0a50, Func Offset: 0x60
	// Line 547, Address: 0x1f0a54, Func Offset: 0x64
	// Line 559, Address: 0x1f0a58, Func Offset: 0x68
	// Line 548, Address: 0x1f0a5c, Func Offset: 0x6c
	// Line 549, Address: 0x1f0a60, Func Offset: 0x70
	// Line 550, Address: 0x1f0a64, Func Offset: 0x74
	// Line 551, Address: 0x1f0a70, Func Offset: 0x80
	// Line 559, Address: 0x1f0a74, Func Offset: 0x84
	// Line 565, Address: 0x1f0a7c, Func Offset: 0x8c
	// Line 566, Address: 0x1f0a90, Func Offset: 0xa0
	// Line 570, Address: 0x1f0aa8, Func Offset: 0xb8
	// Line 571, Address: 0x1f0ac4, Func Offset: 0xd4
	// Line 572, Address: 0x1f0ad0, Func Offset: 0xe0
	// Line 573, Address: 0x1f0ad8, Func Offset: 0xe8
	// Line 574, Address: 0x1f0adc, Func Offset: 0xec
	// Line 577, Address: 0x1f0ae0, Func Offset: 0xf0
	// Line 578, Address: 0x1f0ae8, Func Offset: 0xf8
	// Line 579, Address: 0x1f0aec, Func Offset: 0xfc
	// Func End, Address: 0x1f0afc, Func Offset: 0x10c
}

// xMemExit__Fv
// Start address: 0x1f0b00
void xMemExit()
{
	// Line 504, Address: 0x1f0b00, Func Offset: 0
	// Func End, Address: 0x1f0b08, Func Offset: 0x8
}

// xMemInit__Fv
// Start address: 0x1f0b10
void xMemInit()
{
	// Line 447, Address: 0x1f0b10, Func Offset: 0
	// Line 449, Address: 0x1f0b18, Func Offset: 0x8
	// Line 456, Address: 0x1f0b20, Func Offset: 0x10
	// Line 461, Address: 0x1f0b44, Func Offset: 0x34
	// Line 456, Address: 0x1f0b48, Func Offset: 0x38
	// Line 461, Address: 0x1f0b4c, Func Offset: 0x3c
	// Line 467, Address: 0x1f0b68, Func Offset: 0x58
	// Line 461, Address: 0x1f0b6c, Func Offset: 0x5c
	// Line 467, Address: 0x1f0b70, Func Offset: 0x60
	// Line 475, Address: 0x1f0b88, Func Offset: 0x78
	// Line 473, Address: 0x1f0b8c, Func Offset: 0x7c
	// Line 475, Address: 0x1f0b90, Func Offset: 0x80
	// Line 474, Address: 0x1f0b94, Func Offset: 0x84
	// Line 473, Address: 0x1f0b98, Func Offset: 0x88
	// Line 480, Address: 0x1f0b9c, Func Offset: 0x8c
	// Line 473, Address: 0x1f0ba0, Func Offset: 0x90
	// Line 478, Address: 0x1f0ba4, Func Offset: 0x94
	// Line 474, Address: 0x1f0bac, Func Offset: 0x9c
	// Line 476, Address: 0x1f0bb4, Func Offset: 0xa4
	// Line 477, Address: 0x1f0bbc, Func Offset: 0xac
	// Line 489, Address: 0x1f0bc4, Func Offset: 0xb4
	// Func End, Address: 0x1f0bd0, Func Offset: 0xc0
}

// xMemDebug_SoakLog__FPCc
// Start address: 0x1f0bd0
void xMemDebug_SoakLog()
{
	// Line 390, Address: 0x1f0bd0, Func Offset: 0
	// Func End, Address: 0x1f0bd8, Func Offset: 0x8
}

