typedef struct StrFile;
typedef enum HISStatus;



struct StrFile
{
	int32 file;
	int32 size;
	int32 current;
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};


int32 strFileRead(StrFile* file, void* buff, int32 size);
int32 strFileClose();
int32 strFileOpen(StrFile* file, int8* filename);

// strFileRead__FP7StrFilePvi
// Start address: 0x1bd9e0
int32 strFileRead(StrFile* file, void* buff, int32 size)
{
	int32 blocksToRead;
	int32 id;
	HISStatus status;
	// Line 61, Address: 0x1bd9e0, Func Offset: 0
	// Line 62, Address: 0x1bda14, Func Offset: 0x34
	// Line 63, Address: 0x1bda20, Func Offset: 0x40
	// Line 65, Address: 0x1bda34, Func Offset: 0x54
	// Line 66, Address: 0x1bda3c, Func Offset: 0x5c
	// Line 68, Address: 0x1bda48, Func Offset: 0x68
	// Line 70, Address: 0x1bda64, Func Offset: 0x84
	// Line 72, Address: 0x1bda68, Func Offset: 0x88
	// Line 73, Address: 0x1bda74, Func Offset: 0x94
	// Line 74, Address: 0x1bdaa8, Func Offset: 0xc8
	// Line 75, Address: 0x1bdaac, Func Offset: 0xcc
	// Line 74, Address: 0x1bdab0, Func Offset: 0xd0
	// Line 75, Address: 0x1bdab4, Func Offset: 0xd4
	// Line 76, Address: 0x1bdabc, Func Offset: 0xdc
	// Line 78, Address: 0x1bdae0, Func Offset: 0x100
	// Line 79, Address: 0x1bdae8, Func Offset: 0x108
	// Line 80, Address: 0x1bdaf0, Func Offset: 0x110
	// Func End, Address: 0x1bdb10, Func Offset: 0x130
}

// strFileClose__FP7StrFile
// Start address: 0x1bdb10
int32 strFileClose()
{
	// Line 54, Address: 0x1bdb10, Func Offset: 0
	// Func End, Address: 0x1bdb18, Func Offset: 0x8
}

// strFileOpen__FP7StrFilePc
// Start address: 0x1bdb20
int32 strFileOpen(StrFile* file, int8* filename)
{
	// Line 39, Address: 0x1bdb20, Func Offset: 0
	// Line 40, Address: 0x1bdb30, Func Offset: 0x10
	// Line 41, Address: 0x1bdb3c, Func Offset: 0x1c
	// Line 42, Address: 0x1bdb48, Func Offset: 0x28
	// Line 44, Address: 0x1bdb4c, Func Offset: 0x2c
	// Line 45, Address: 0x1bdb50, Func Offset: 0x30
	// Line 44, Address: 0x1bdb58, Func Offset: 0x38
	// Line 45, Address: 0x1bdb60, Func Offset: 0x40
	// Func End, Address: 0x1bdb68, Func Offset: 0x48
}

