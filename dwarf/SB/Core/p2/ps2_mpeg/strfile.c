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
}

// strFileClose__FP7StrFile
// Start address: 0x1bdb10
int32 strFileClose()
{
}

// strFileOpen__FP7StrFilePc
// Start address: 0x1bdb20
int32 strFileOpen(StrFile* file, int8* filename)
{
}

