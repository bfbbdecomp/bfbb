typedef struct ReadBuf;


typedef uint8 type[327680];

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
};


int32 readBufEndGet(ReadBuf* b, int32 size);
int32 readBufBeginGet(ReadBuf* b, uint8** ptr);
int32 readBufEndPut(ReadBuf* b, int32 size);
int32 readBufBeginPut(ReadBuf* b, uint8** ptr);
void readBufDelete();
void readBufCreate(ReadBuf* b);

// readBufEndGet__FP7ReadBufi
// Start address: 0x1bd820
int32 readBufEndGet(ReadBuf* b, int32 size)
{
	// Line 89, Address: 0x1bd820, Func Offset: 0
	// Line 90, Address: 0x1bd82c, Func Offset: 0xc
	// Line 92, Address: 0x1bd848, Func Offset: 0x28
	// Line 94, Address: 0x1bd850, Func Offset: 0x30
	// Line 92, Address: 0x1bd854, Func Offset: 0x34
	// Line 95, Address: 0x1bd864, Func Offset: 0x44
	// Func End, Address: 0x1bd86c, Func Offset: 0x4c
}

// readBufBeginGet__FP7ReadBufPPUc
// Start address: 0x1bd870
int32 readBufBeginGet(ReadBuf* b, uint8** ptr)
{
	// Line 77, Address: 0x1bd870, Func Offset: 0
	// Line 78, Address: 0x1bd87c, Func Offset: 0xc
	// Line 79, Address: 0x1bd88c, Func Offset: 0x1c
	// Line 81, Address: 0x1bd8b8, Func Offset: 0x48
	// Line 82, Address: 0x1bd8c0, Func Offset: 0x50
	// Func End, Address: 0x1bd8c8, Func Offset: 0x58
}

// readBufEndPut__FP7ReadBufi
// Start address: 0x1bd8d0
int32 readBufEndPut(ReadBuf* b, int32 size)
{
	// Line 63, Address: 0x1bd8d0, Func Offset: 0
	// Line 64, Address: 0x1bd8ec, Func Offset: 0x1c
	// Line 66, Address: 0x1bd908, Func Offset: 0x38
	// Line 69, Address: 0x1bd910, Func Offset: 0x40
	// Line 66, Address: 0x1bd914, Func Offset: 0x44
	// Line 67, Address: 0x1bd934, Func Offset: 0x64
	// Line 70, Address: 0x1bd94c, Func Offset: 0x7c
	// Func End, Address: 0x1bd954, Func Offset: 0x84
}

// readBufBeginPut__FP7ReadBufPPUc
// Start address: 0x1bd960
int32 readBufBeginPut(ReadBuf* b, uint8** ptr)
{
	int32 size;
	// Line 51, Address: 0x1bd960, Func Offset: 0
	// Line 52, Address: 0x1bd97c, Func Offset: 0x1c
	// Line 53, Address: 0x1bd984, Func Offset: 0x24
	// Line 54, Address: 0x1bd994, Func Offset: 0x34
	// Line 56, Address: 0x1bd998, Func Offset: 0x38
	// Func End, Address: 0x1bd9a0, Func Offset: 0x40
}

// readBufDelete__FP7ReadBuf
// Start address: 0x1bd9a0
void readBufDelete()
{
	// Line 43, Address: 0x1bd9a0, Func Offset: 0
	// Func End, Address: 0x1bd9a8, Func Offset: 0x8
}

// readBufCreate__FP7ReadBuf
// Start address: 0x1bd9b0
void readBufCreate(ReadBuf* b)
{
	// Line 33, Address: 0x1bd9b0, Func Offset: 0
	// Line 34, Address: 0x1bd9b4, Func Offset: 0x4
	// Line 33, Address: 0x1bd9b8, Func Offset: 0x8
	// Line 34, Address: 0x1bd9cc, Func Offset: 0x1c
	// Line 35, Address: 0x1bd9d4, Func Offset: 0x24
	// Func End, Address: 0x1bd9dc, Func Offset: 0x2c
}

