typedef struct tag_xFile;
typedef struct tag_iFile;
typedef enum IFILE_READSECTOR_STATUS;
typedef enum HISMemoryType;
typedef enum HISStatus;
typedef struct HISFileIndexDebug;
typedef enum xFileDriveType;
typedef enum xFileDriveStatus;
typedef struct HISRequestDebug;
typedef union _class;
typedef struct AsyncRequest;

typedef void(*type_0)(tag_xFile*);
typedef void(*type_5)();

typedef AsyncRequest type_1[32];
typedef int8* type_2[3];
typedef int8 type_3[256];
typedef int8 type_4[128];
typedef uint32 type_6[4096];
typedef int8 type_7[48];
typedef int8 type_8[32];
typedef int8 type_9[256];
typedef int8* type_10[9];

struct tag_xFile
{
	type_8 relname;
	tag_iFile ps;
	void* user_data;
};

struct tag_iFile
{
	uint32 flags;
	type_4 path;
	int32 fd;
	int32 offset;
	int32 length;
};

enum IFILE_READSECTOR_STATUS
{
	IFILE_RDSTAT_NOOP,
	IFILE_RDSTAT_INPROG,
	IFILE_RDSTAT_DONE,
	IFILE_RDSTAT_FAIL,
	IFILE_RDSTAT_QUEUED,
	IFILE_RDSTAT_EXPIRED
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
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

struct HISFileIndexDebug
{
	int32 logicalSectorNumber;
	int32 size;
	int32 sizeInSectors;
	type_7 name;
};

enum xFileDriveType
{
	XFILE_DRIVE_CDVD,
	XFILE_DRIVE_CONSOLE_HD
};

enum xFileDriveStatus
{
	XFILE_TRAY_OPEN,
	XFILE_STOPPED,
	XFILE_SPINNING,
	XFILE_READING,
	XFILE_PAUSED,
	XFILE_SEEKING,
	XFILE_ERROR
};

struct HISRequestDebug
{
	_class small;
	int32 destination;
	int32 currentPriority;
	int32 originalPriority;
	int32 fileIndex;
	int32 startSector;
	int32 sectorsToRead;
};

union _class
{
	int32 nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct AsyncRequest
{
	uint8 inUse;
	int32 id;
	IFILE_READSECTOR_STATUS status;
	type_0 callback;
	tag_xFile* file;
	int32 framesLeft;
};

type_1 requests;
int32 num_open_files;
type_9 gHostPath;
int32 DVD;
type_6 ourGlobals;
type_5 iFileDebugMode;

void iFileAsyncService();
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar);
void iFileReadStop();
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, type_0 callback, int32 priority);
void iFileSetPath(int8* path);
void iFileFullPath(int8* relname, int8* fullname);
uint32 iFileGetSize(tag_xFile* file);
uint32 iFileClose(tag_xFile* file);
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size);
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence);
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file);
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size);
void iFileExit();
void iFileInit();
void iFileDebugMode();

// iFileAsyncService__Fv
// Start address: 0x1a9520
void iFileAsyncService()
{
	int32 i;
	HISStatus status;
}

// iFileReadAsyncStatus__FiPi
// Start address: 0x1a9650
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar)
{
}

// iFileReadStop__Fv
// Start address: 0x1a96b0
void iFileReadStop()
{
	int32 i;
}

// iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi
// Start address: 0x1a9740
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, type_0 callback, int32 priority)
{
	tag_iFile* ps;
	int32 i;
	int32 id;
}

// iFileSetPath__FPCc
// Start address: 0x1a9940
void iFileSetPath(int8* path)
{
	uint32 len;
}

// iFileFullPath__FPCcPc
// Start address: 0x1a99e0
void iFileFullPath(int8* relname, int8* fullname)
{
	type_3 temp;
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x1a9aa0
uint32 iFileGetSize(tag_xFile* file)
{
	int32 size;
	int32 pos;
	tag_iFile* ps;
	int32 rc;
}

// iFileClose__FP9tag_xFile
// Start address: 0x1a9ba0
uint32 iFileClose(tag_xFile* file)
{
	tag_iFile* ps;
	int32 ret;
	int32 i;
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x1a9cf0
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size)
{
	tag_iFile* ps;
	int32 num;
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x1a9dc0
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence)
{
	tag_iFile* ps;
	int32 position;
	int32 new_pos;
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x1a9eb0
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file)
{
	tag_iFile* ps;
}

// iFileLoad__FPcPUiPUi
// Start address: 0x1a9fc0
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size)
{
	int32 index;
	int32 fileSize;
	int32 alignedSize;
}

// iFileExit__Fv
// Start address: 0x1aa0d0
void iFileExit()
{
}

// iFileInit__Fv
// Start address: 0x1aa0e0
void iFileInit()
{
	int32 hisVersion;
}

// iFileDebugMode__19@unnamed@iFile_cpp@Fv
// Start address: 0x1aa1e0
void iFileDebugMode()
{
	int32 id;
	HISRequestDebug requestDebug;
	HISFileIndexDebug fileIndexDebug;
	type_2 TYPES;
	type_10 STATUSES;
}

