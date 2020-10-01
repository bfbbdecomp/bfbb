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
typedef s8* type_2[3];
typedef s8 type_3[256];
typedef s8 type_4[128];
typedef u32 type_6[4096];
typedef s8 type_7[48];
typedef s8 type_8[32];
typedef s8 type_9[256];
typedef s8* type_10[9];

struct tag_xFile
{
	type_8 relname;
	tag_iFile ps;
	void* user_data;
};

struct tag_iFile
{
	u32 flags;
	type_4 path;
	s32 fd;
	s32 offset;
	s32 length;
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
	s32 logicalSectorNumber;
	s32 size;
	s32 sizeInSectors;
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
	s32 destination;
	s32 currentPriority;
	s32 originalPriority;
	s32 fileIndex;
	s32 startSector;
	s32 sectorsToRead;
};

union _class
{
	s32 nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct AsyncRequest
{
	u8 inUse;
	s32 id;
	IFILE_READSECTOR_STATUS status;
	type_0 callback;
	tag_xFile* file;
	s32 framesLeft;
};

type_1 requests;
s32 num_open_files;
type_9 gHostPath;
s32 DVD;
type_6 ourGlobals;
type_5 iFileDebugMode;

void iFileAsyncService();
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(s32 key, s32* amtToFar);
void iFileReadStop();
s32 iFileReadAsync(tag_xFile* file, void* buf, u32 aSize, type_0 callback, s32 priority);
void iFileSetPath(s8* path);
void iFileFullPath(s8* relname, s8* fullname);
u32 iFileGetSize(tag_xFile* file);
u32 iFileClose(tag_xFile* file);
u32 iFileRead(tag_xFile* file, void* buf, u32 size);
s32 iFileSeek(tag_xFile* file, s32 offset, s32 whence);
u32 iFileOpen(s8* name, s32 flags, tag_xFile* file);
u32* iFileLoad(s8* name, u32* buffer, u32* size);
void iFileExit();
void iFileInit();
void iFileDebugMode();

// iFileAsyncService__Fv
// Start address: 0x1a9520
void iFileAsyncService()
{
	s32 i;
	HISStatus status;
}

// iFileReadAsyncStatus__FiPi
// Start address: 0x1a9650
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(s32 key, s32* amtToFar)
{
}

// iFileReadStop__Fv
// Start address: 0x1a96b0
void iFileReadStop()
{
	s32 i;
}

// iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi
// Start address: 0x1a9740
s32 iFileReadAsync(tag_xFile* file, void* buf, u32 aSize, type_0 callback, s32 priority)
{
	tag_iFile* ps;
	s32 i;
	s32 id;
}

// iFileSetPath__FPCc
// Start address: 0x1a9940
void iFileSetPath(s8* path)
{
	u32 len;
}

// iFileFullPath__FPCcPc
// Start address: 0x1a99e0
void iFileFullPath(s8* relname, s8* fullname)
{
	type_3 temp;
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x1a9aa0
u32 iFileGetSize(tag_xFile* file)
{
	s32 size;
	s32 pos;
	tag_iFile* ps;
	s32 rc;
}

// iFileClose__FP9tag_xFile
// Start address: 0x1a9ba0
u32 iFileClose(tag_xFile* file)
{
	tag_iFile* ps;
	s32 ret;
	s32 i;
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x1a9cf0
u32 iFileRead(tag_xFile* file, void* buf, u32 size)
{
	tag_iFile* ps;
	s32 num;
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x1a9dc0
s32 iFileSeek(tag_xFile* file, s32 offset, s32 whence)
{
	tag_iFile* ps;
	s32 position;
	s32 new_pos;
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x1a9eb0
u32 iFileOpen(s8* name, s32 flags, tag_xFile* file)
{
	tag_iFile* ps;
}

// iFileLoad__FPcPUiPUi
// Start address: 0x1a9fc0
u32* iFileLoad(s8* name, u32* buffer, u32* size)
{
	s32 index;
	s32 fileSize;
	s32 alignedSize;
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
	s32 hisVersion;
}

// iFileDebugMode__19@unnamed@iFile_cpp@Fv
// Start address: 0x1aa1e0
void iFileDebugMode()
{
	s32 id;
	HISRequestDebug requestDebug;
	HISFileIndexDebug fileIndexDebug;
	type_2 TYPES;
	type_10 STATUSES;
}

