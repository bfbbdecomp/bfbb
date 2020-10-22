typedef struct xMemArea_tag;
typedef struct xMemInfo_tag;



struct xMemArea_tag
{
	uint32 addr;
	uint32 size;
	uint32 flags;
};

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

uint32 StackBase;
uint32 StackSize;
xMemInfo_tag gMemInfo;
int8 _stack;
int8 _heap_size;
int8 _stack_size;
int8 _end;
int8 _memtop;
int8 __data_start;

void iMemExit();
void iMemInit();

// iMemExit__Fv
// Start address: 0x1aca60
void iMemExit()
{
	// Line 235, Address: 0x1aca60, Func Offset: 0
	// Line 240, Address: 0x1aca64, Func Offset: 0x4
	// Line 235, Address: 0x1aca68, Func Offset: 0x8
	// Line 240, Address: 0x1aca6c, Func Offset: 0xc
	// Line 241, Address: 0x1aca74, Func Offset: 0x14
	// Line 242, Address: 0x1aca7c, Func Offset: 0x1c
	// Func End, Address: 0x1aca88, Func Offset: 0x28
}

// iMemInit__Fv
// Start address: 0x1aca90
void iMemInit()
{
	uint32 MemBase;
	uint32 MemTop;
	uint32 HeapBase;
	uint32 malloc_max;
	void* p;
	// Line 61, Address: 0x1aca90, Func Offset: 0
	// Line 72, Address: 0x1aca94, Func Offset: 0x4
	// Line 61, Address: 0x1aca98, Func Offset: 0x8
	// Line 72, Address: 0x1aca9c, Func Offset: 0xc
	// Line 61, Address: 0x1acaa0, Func Offset: 0x10
	// Line 72, Address: 0x1acaa4, Func Offset: 0x14
	// Line 61, Address: 0x1acaa8, Func Offset: 0x18
	// Line 72, Address: 0x1acaac, Func Offset: 0x1c
	// Line 73, Address: 0x1acab8, Func Offset: 0x28
	// Line 74, Address: 0x1acacc, Func Offset: 0x3c
	// Line 75, Address: 0x1acae0, Func Offset: 0x50
	// Line 76, Address: 0x1acaf4, Func Offset: 0x64
	// Line 77, Address: 0x1acb08, Func Offset: 0x78
	// Line 83, Address: 0x1acb1c, Func Offset: 0x8c
	// Line 82, Address: 0x1acb20, Func Offset: 0x90
	// Line 83, Address: 0x1acb24, Func Offset: 0x94
	// Line 87, Address: 0x1acb28, Func Offset: 0x98
	// Line 83, Address: 0x1acb2c, Func Offset: 0x9c
	// Line 82, Address: 0x1acb30, Func Offset: 0xa0
	// Line 85, Address: 0x1acb34, Func Offset: 0xa4
	// Line 87, Address: 0x1acb38, Func Offset: 0xa8
	// Line 85, Address: 0x1acb3c, Func Offset: 0xac
	// Line 87, Address: 0x1acb44, Func Offset: 0xb4
	// Line 89, Address: 0x1acb54, Func Offset: 0xc4
	// Line 87, Address: 0x1acb5c, Func Offset: 0xcc
	// Line 89, Address: 0x1acb60, Func Offset: 0xd0
	// Line 96, Address: 0x1acb68, Func Offset: 0xd8
	// Line 100, Address: 0x1acb78, Func Offset: 0xe8
	// Line 106, Address: 0x1acb88, Func Offset: 0xf8
	// Line 107, Address: 0x1acb90, Func Offset: 0x100
	// Line 108, Address: 0x1acb98, Func Offset: 0x108
	// Line 109, Address: 0x1acb9c, Func Offset: 0x10c
	// Line 111, Address: 0x1acba8, Func Offset: 0x118
	// Line 112, Address: 0x1acbb0, Func Offset: 0x120
	// Line 141, Address: 0x1acbc0, Func Offset: 0x130
	// Line 143, Address: 0x1acc00, Func Offset: 0x170
	// Line 141, Address: 0x1acc04, Func Offset: 0x174
	// Line 143, Address: 0x1acc08, Func Offset: 0x178
	// Line 141, Address: 0x1acc0c, Func Offset: 0x17c
	// Line 143, Address: 0x1acc10, Func Offset: 0x180
	// Line 164, Address: 0x1acc18, Func Offset: 0x188
	// Line 155, Address: 0x1acc1c, Func Offset: 0x18c
	// Line 164, Address: 0x1acc20, Func Offset: 0x190
	// Line 161, Address: 0x1acc24, Func Offset: 0x194
	// Line 155, Address: 0x1acc28, Func Offset: 0x198
	// Line 171, Address: 0x1acc2c, Func Offset: 0x19c
	// Line 155, Address: 0x1acc30, Func Offset: 0x1a0
	// Line 156, Address: 0x1acc34, Func Offset: 0x1a4
	// Line 154, Address: 0x1acc40, Func Offset: 0x1b0
	// Line 165, Address: 0x1acc44, Func Offset: 0x1b4
	// Line 154, Address: 0x1acc48, Func Offset: 0x1b8
	// Line 165, Address: 0x1acc4c, Func Offset: 0x1bc
	// Line 161, Address: 0x1acc50, Func Offset: 0x1c0
	// Line 165, Address: 0x1acc58, Func Offset: 0x1c8
	// Line 166, Address: 0x1acc60, Func Offset: 0x1d0
	// Line 172, Address: 0x1acc64, Func Offset: 0x1d4
	// Line 166, Address: 0x1acc68, Func Offset: 0x1d8
	// Line 171, Address: 0x1acc6c, Func Offset: 0x1dc
	// Line 156, Address: 0x1acc74, Func Offset: 0x1e4
	// Line 172, Address: 0x1acc78, Func Offset: 0x1e8
	// Line 170, Address: 0x1acc80, Func Offset: 0x1f0
	// Line 160, Address: 0x1acc88, Func Offset: 0x1f8
	// Line 159, Address: 0x1acc90, Func Offset: 0x200
	// Line 173, Address: 0x1acc9c, Func Offset: 0x20c
	// Func End, Address: 0x1accb4, Func Offset: 0x224
}

