typedef struct StrFile;
typedef enum HISStatus;



struct StrFile
{
	s32 file;
	s32 size;
	s32 current;
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


s32 strFileRead(StrFile* file, void* buff, s32 size);
s32 strFileClose();
s32 strFileOpen(StrFile* file, s8* filename);

// strFileRead__FP7StrFilePvi
// Start address: 0x1bd9e0
s32 strFileRead(StrFile* file, void* buff, s32 size)
{
	s32 blocksToRead;
	s32 id;
	HISStatus status;
}

// strFileClose__FP7StrFile
// Start address: 0x1bdb10
s32 strFileClose()
{
}

// strFileOpen__FP7StrFilePc
// Start address: 0x1bdb20
s32 strFileOpen(StrFile* file, s8* filename)
{
}

