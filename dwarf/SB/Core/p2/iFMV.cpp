typedef struct RwResEntry;
typedef struct RwLLLink;

typedef void(*type)(RwResEntry*);


struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};


uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time);

// iFMVPlay__FPcUifbb
// Start address: 0x1aa330
uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time)
{
	RwResEntry* repEntry;
	RwResEntry* repEntryOwner;
	// Line 11, Address: 0x1aa330, Func Offset: 0
	// Line 15, Address: 0x1aa350, Func Offset: 0x20
	// Line 16, Address: 0x1aa358, Func Offset: 0x28
	// Line 26, Address: 0x1aa360, Func Offset: 0x30
	// Line 35, Address: 0x1aa368, Func Offset: 0x38
	// Line 33, Address: 0x1aa37c, Func Offset: 0x4c
	// Line 35, Address: 0x1aa380, Func Offset: 0x50
	// Line 37, Address: 0x1aa38c, Func Offset: 0x5c
	// Line 38, Address: 0x1aa394, Func Offset: 0x64
	// Line 39, Address: 0x1aa39c, Func Offset: 0x6c
	// Line 40, Address: 0x1aa3a4, Func Offset: 0x74
	// Line 45, Address: 0x1aa3a8, Func Offset: 0x78
	// Line 50, Address: 0x1aa3c4, Func Offset: 0x94
	// Line 53, Address: 0x1aa3cc, Func Offset: 0x9c
	// Line 54, Address: 0x1aa3d0, Func Offset: 0xa0
	// Func End, Address: 0x1aa3ec, Func Offset: 0xbc
}

