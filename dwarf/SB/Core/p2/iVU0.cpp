typedef struct VU0Block;


typedef VU0Block type[8];

struct VU0Block
{
	int32 parent;
	uint32 size;
	void* address;
	uint32 lru;
};

VU0Block blocks[8];
uint32 lru;

void iVU0Reset();

// iVU0Reset__Fv
// Start address: 0x378830
void iVU0Reset()
{
	int32 i;
	// Line 41, Address: 0x378830, Func Offset: 0
	// Line 40, Address: 0x378834, Func Offset: 0x4
	// Line 41, Address: 0x378838, Func Offset: 0x8
	// Line 42, Address: 0x378840, Func Offset: 0x10
	// Line 43, Address: 0x378844, Func Offset: 0x14
	// Line 42, Address: 0x378848, Func Offset: 0x18
	// Line 43, Address: 0x37884c, Func Offset: 0x1c
	// Line 46, Address: 0x378850, Func Offset: 0x20
	// Line 44, Address: 0x378854, Func Offset: 0x24
	// Line 46, Address: 0x378858, Func Offset: 0x28
	// Line 45, Address: 0x37885c, Func Offset: 0x2c
	// Line 46, Address: 0x378860, Func Offset: 0x30
	// Line 47, Address: 0x378868, Func Offset: 0x38
	// Func End, Address: 0x378870, Func Offset: 0x40
}

