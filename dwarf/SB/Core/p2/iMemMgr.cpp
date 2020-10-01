typedef struct xMemArea_tag;
typedef struct xMemInfo_tag;



struct xMemArea_tag
{
	u32 addr;
	u32 size;
	u32 flags;
};

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

u32 StackBase;
u32 StackSize;
xMemInfo_tag gMemInfo;
s8 _stack;
s8 _heap_size;
s8 _stack_size;
s8 _end;
s8 _memtop;
s8 __data_start;

void iMemExit();
void iMemInit();

// iMemExit__Fv
// Start address: 0x1aca60
void iMemExit()
{
}

// iMemInit__Fv
// Start address: 0x1aca90
void iMemInit()
{
	u32 MemBase;
	u32 MemTop;
	u32 HeapBase;
	u32 malloc_max;
	void* p;
}

