typedef struct ReadBuf;


typedef uint8 type[327680];

struct ReadBuf
{
	type data;
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
}

// readBufBeginGet__FP7ReadBufPPUc
// Start address: 0x1bd870
int32 readBufBeginGet(ReadBuf* b, uint8** ptr)
{
}

// readBufEndPut__FP7ReadBufi
// Start address: 0x1bd8d0
int32 readBufEndPut(ReadBuf* b, int32 size)
{
}

// readBufBeginPut__FP7ReadBufPPUc
// Start address: 0x1bd960
int32 readBufBeginPut(ReadBuf* b, uint8** ptr)
{
	int32 size;
}

// readBufDelete__FP7ReadBuf
// Start address: 0x1bd9a0
void readBufDelete()
{
}

// readBufCreate__FP7ReadBuf
// Start address: 0x1bd9b0
void readBufCreate(ReadBuf* b)
{
}

