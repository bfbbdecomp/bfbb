typedef struct VU0Block;


typedef VU0Block type[8];

struct VU0Block
{
	s32 parent;
	u32 size;
	void* address;
	u32 lru;
};

type blocks;
u32 lru;

void iVU0Reset();

// iVU0Reset__Fv
// Start address: 0x378830
void iVU0Reset()
{
	s32 i;
}

