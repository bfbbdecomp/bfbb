typedef struct RwResEntry;
typedef struct RwLLLink;

typedef void(*type)(RwResEntry*);


struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type destroyNotify;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};


u32 iFMVPlay(s8* filename, u32 buttons, f32 time);

// iFMVPlay__FPcUifbb
// Start address: 0x1aa330
u32 iFMVPlay(s8* filename, u32 buttons, f32 time)
{
	RwResEntry* repEntry;
	RwResEntry* repEntryOwner;
}

