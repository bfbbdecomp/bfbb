typedef struct ReadBuf;


typedef u8 type[327680];

struct ReadBuf
{
	type data;
	s32 put;
	s32 count;
	s32 size;
};


s32 readBufEndGet(ReadBuf* b, s32 size);
s32 readBufBeginGet(ReadBuf* b, u8** ptr);
s32 readBufEndPut(ReadBuf* b, s32 size);
s32 readBufBeginPut(ReadBuf* b, u8** ptr);
void readBufDelete();
void readBufCreate(ReadBuf* b);

// readBufEndGet__FP7ReadBufi
// Start address: 0x1bd820
s32 readBufEndGet(ReadBuf* b, s32 size)
{
}

// readBufBeginGet__FP7ReadBufPPUc
// Start address: 0x1bd870
s32 readBufBeginGet(ReadBuf* b, u8** ptr)
{
}

// readBufEndPut__FP7ReadBufi
// Start address: 0x1bd8d0
s32 readBufEndPut(ReadBuf* b, s32 size)
{
}

// readBufBeginPut__FP7ReadBufPPUc
// Start address: 0x1bd960
s32 readBufBeginPut(ReadBuf* b, u8** ptr)
{
	s32 size;
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

