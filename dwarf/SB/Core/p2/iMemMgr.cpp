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
}

