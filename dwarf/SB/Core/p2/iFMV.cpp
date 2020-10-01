typedef struct RwResEntry;
typedef struct RwLLLink;

typedef void(*type)(RwResEntry*);


struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type destroyNotify;
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
}

