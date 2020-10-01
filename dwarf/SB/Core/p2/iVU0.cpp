typedef struct VU0Block;


typedef VU0Block type[8];

struct VU0Block
{
	int32 parent;
	uint32 size;
	void* address;
	uint32 lru;
};

type blocks;
uint32 lru;

void iVU0Reset();

// iVU0Reset__Fv
// Start address: 0x378830
void iVU0Reset()
{
	int32 i;
}

