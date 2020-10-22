typedef struct tag_xFile;
typedef struct tag_iFile;
typedef enum IFILE_READSECTOR_STATUS;
typedef enum HISMemoryType;
typedef enum HISStatus;
typedef struct HISFileIndexDebug;
typedef enum xFileDriveType;
typedef enum xFileDriveStatus;
typedef struct HISRequestDebug;
typedef struct _class;
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
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
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
	int8 name[48];
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

struct _class
{
	struct
	{
		int32 nextRequest : 8;
		HISStatus status : 8;
		HISMemoryType destinationType : 8;
	};
};

struct AsyncRequest
{
	uint8 inUse;
	int32 id;
	IFILE_READSECTOR_STATUS status;
	void(*callback)(tag_xFile*);
	tag_xFile* file;
	int32 framesLeft;
};

AsyncRequest requests[32];
int32 num_open_files;
int8 gHostPath[256];
int32 DVD;
uint32 ourGlobals[4096];
void(*iFileDebugMode)();

void iFileAsyncService();
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar);
void iFileReadStop();
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, void(*callback)(tag_xFile*), int32 priority);
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
	// Line 833, Address: 0x1a9520, Func Offset: 0
	// Line 837, Address: 0x1a9530, Func Offset: 0x10
	// Line 838, Address: 0x1a9540, Func Offset: 0x20
	// Line 840, Address: 0x1a954c, Func Offset: 0x2c
	// Line 841, Address: 0x1a9558, Func Offset: 0x38
	// Line 843, Address: 0x1a9564, Func Offset: 0x44
	// Line 846, Address: 0x1a9570, Func Offset: 0x50
	// Line 848, Address: 0x1a9578, Func Offset: 0x58
	// Line 849, Address: 0x1a959c, Func Offset: 0x7c
	// Line 850, Address: 0x1a95a0, Func Offset: 0x80
	// Line 851, Address: 0x1a95ac, Func Offset: 0x8c
	// Line 852, Address: 0x1a95b4, Func Offset: 0x94
	// Line 853, Address: 0x1a95c0, Func Offset: 0xa0
	// Line 854, Address: 0x1a95c8, Func Offset: 0xa8
	// Line 855, Address: 0x1a95cc, Func Offset: 0xac
	// Line 854, Address: 0x1a95d0, Func Offset: 0xb0
	// Line 856, Address: 0x1a95d4, Func Offset: 0xb4
	// Line 859, Address: 0x1a95dc, Func Offset: 0xbc
	// Line 860, Address: 0x1a95e0, Func Offset: 0xc0
	// Line 861, Address: 0x1a95e8, Func Offset: 0xc8
	// Line 862, Address: 0x1a95f0, Func Offset: 0xd0
	// Line 863, Address: 0x1a95f4, Func Offset: 0xd4
	// Line 862, Address: 0x1a95f8, Func Offset: 0xd8
	// Line 864, Address: 0x1a95fc, Func Offset: 0xdc
	// Line 868, Address: 0x1a9604, Func Offset: 0xe4
	// Line 869, Address: 0x1a9608, Func Offset: 0xe8
	// Line 870, Address: 0x1a960c, Func Offset: 0xec
	// Line 872, Address: 0x1a9614, Func Offset: 0xf4
	// Line 873, Address: 0x1a9618, Func Offset: 0xf8
	// Line 881, Address: 0x1a9620, Func Offset: 0x100
	// Line 882, Address: 0x1a9630, Func Offset: 0x110
	// Func End, Address: 0x1a9644, Func Offset: 0x124
}

// iFileReadAsyncStatus__FiPi
// Start address: 0x1a9650
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar)
{
	// Line 814, Address: 0x1a9654, Func Offset: 0x4
	// Line 816, Address: 0x1a9658, Func Offset: 0x8
	// Line 817, Address: 0x1a9674, Func Offset: 0x24
	// Line 820, Address: 0x1a9680, Func Offset: 0x30
	// Line 821, Address: 0x1a9688, Func Offset: 0x38
	// Line 824, Address: 0x1a9690, Func Offset: 0x40
	// Line 825, Address: 0x1a96a0, Func Offset: 0x50
	// Func End, Address: 0x1a96a8, Func Offset: 0x58
}

// iFileReadStop__Fv
// Start address: 0x1a96b0
void iFileReadStop()
{
	int32 i;
	// Line 791, Address: 0x1a96b0, Func Offset: 0
	// Line 793, Address: 0x1a96c0, Func Offset: 0x10
	// Line 794, Address: 0x1a96d0, Func Offset: 0x20
	// Line 795, Address: 0x1a96ec, Func Offset: 0x3c
	// Line 796, Address: 0x1a96f4, Func Offset: 0x44
	// Line 797, Address: 0x1a96fc, Func Offset: 0x4c
	// Line 798, Address: 0x1a9700, Func Offset: 0x50
	// Line 797, Address: 0x1a9704, Func Offset: 0x54
	// Line 799, Address: 0x1a9708, Func Offset: 0x58
	// Line 798, Address: 0x1a970c, Func Offset: 0x5c
	// Line 799, Address: 0x1a9710, Func Offset: 0x60
	// Line 800, Address: 0x1a9714, Func Offset: 0x64
	// Line 801, Address: 0x1a9718, Func Offset: 0x68
	// Line 802, Address: 0x1a9728, Func Offset: 0x78
	// Func End, Address: 0x1a973c, Func Offset: 0x8c
}

// iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi
// Start address: 0x1a9740
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, void(*callback)(tag_xFile*), int32 priority)
{
	tag_iFile* ps;
	int32 i;
	int32 id;
	// Line 731, Address: 0x1a9740, Func Offset: 0
	// Line 743, Address: 0x1a9744, Func Offset: 0x4
	// Line 731, Address: 0x1a9748, Func Offset: 0x8
	// Line 743, Address: 0x1a9754, Func Offset: 0x14
	// Line 731, Address: 0x1a9758, Func Offset: 0x18
	// Line 735, Address: 0x1a9778, Func Offset: 0x38
	// Line 743, Address: 0x1a977c, Func Offset: 0x3c
	// Line 744, Address: 0x1a9780, Func Offset: 0x40
	// Line 745, Address: 0x1a978c, Func Offset: 0x4c
	// Line 747, Address: 0x1a979c, Func Offset: 0x5c
	// Line 748, Address: 0x1a97c8, Func Offset: 0x88
	// Line 749, Address: 0x1a97d4, Func Offset: 0x94
	// Line 752, Address: 0x1a97e8, Func Offset: 0xa8
	// Line 753, Address: 0x1a97fc, Func Offset: 0xbc
	// Line 752, Address: 0x1a9800, Func Offset: 0xc0
	// Line 753, Address: 0x1a9804, Func Offset: 0xc4
	// Line 754, Address: 0x1a9810, Func Offset: 0xd0
	// Line 755, Address: 0x1a981c, Func Offset: 0xdc
	// Line 754, Address: 0x1a9820, Func Offset: 0xe0
	// Line 755, Address: 0x1a9824, Func Offset: 0xe4
	// Line 756, Address: 0x1a9830, Func Offset: 0xf0
	// Line 757, Address: 0x1a9834, Func Offset: 0xf4
	// Line 756, Address: 0x1a9838, Func Offset: 0xf8
	// Line 757, Address: 0x1a9844, Func Offset: 0x104
	// Line 760, Address: 0x1a9854, Func Offset: 0x114
	// Line 761, Address: 0x1a985c, Func Offset: 0x11c
	// Line 763, Address: 0x1a9868, Func Offset: 0x128
	// Line 766, Address: 0x1a987c, Func Offset: 0x13c
	// Line 763, Address: 0x1a9880, Func Offset: 0x140
	// Line 766, Address: 0x1a9884, Func Offset: 0x144
	// Line 767, Address: 0x1a9890, Func Offset: 0x150
	// Line 766, Address: 0x1a9894, Func Offset: 0x154
	// Line 767, Address: 0x1a9898, Func Offset: 0x158
	// Line 766, Address: 0x1a989c, Func Offset: 0x15c
	// Line 767, Address: 0x1a98a0, Func Offset: 0x160
	// Line 769, Address: 0x1a98a4, Func Offset: 0x164
	// Line 767, Address: 0x1a98a8, Func Offset: 0x168
	// Line 768, Address: 0x1a98b0, Func Offset: 0x170
	// Line 769, Address: 0x1a98c0, Func Offset: 0x180
	// Line 770, Address: 0x1a98cc, Func Offset: 0x18c
	// Line 769, Address: 0x1a98d0, Func Offset: 0x190
	// Line 770, Address: 0x1a98d4, Func Offset: 0x194
	// Line 771, Address: 0x1a98d8, Func Offset: 0x198
	// Line 770, Address: 0x1a98dc, Func Offset: 0x19c
	// Line 774, Address: 0x1a98e0, Func Offset: 0x1a0
	// Line 770, Address: 0x1a98e4, Func Offset: 0x1a4
	// Line 771, Address: 0x1a98e8, Func Offset: 0x1a8
	// Line 774, Address: 0x1a98f4, Func Offset: 0x1b4
	// Line 775, Address: 0x1a98fc, Func Offset: 0x1bc
	// Line 778, Address: 0x1a9900, Func Offset: 0x1c0
	// Line 779, Address: 0x1a9908, Func Offset: 0x1c8
	// Line 782, Address: 0x1a9918, Func Offset: 0x1d8
	// Line 783, Address: 0x1a9920, Func Offset: 0x1e0
	// Func End, Address: 0x1a9940, Func Offset: 0x200
}

// iFileSetPath__FPCc
// Start address: 0x1a9940
void iFileSetPath(int8* path)
{
	uint32 len;
	// Line 703, Address: 0x1a9940, Func Offset: 0
	// Line 705, Address: 0x1a9950, Func Offset: 0x10
	// Line 709, Address: 0x1a9958, Func Offset: 0x18
	// Line 705, Address: 0x1a995c, Func Offset: 0x1c
	// Line 709, Address: 0x1a9960, Func Offset: 0x20
	// Line 711, Address: 0x1a996c, Func Offset: 0x2c
	// Line 712, Address: 0x1a997c, Func Offset: 0x3c
	// Line 713, Address: 0x1a99a8, Func Offset: 0x68
	// Line 714, Address: 0x1a99ac, Func Offset: 0x6c
	// Line 713, Address: 0x1a99b0, Func Offset: 0x70
	// Line 714, Address: 0x1a99b4, Func Offset: 0x74
	// Line 713, Address: 0x1a99b8, Func Offset: 0x78
	// Line 714, Address: 0x1a99bc, Func Offset: 0x7c
	// Line 713, Address: 0x1a99c0, Func Offset: 0x80
	// Line 714, Address: 0x1a99c4, Func Offset: 0x84
	// Line 716, Address: 0x1a99c8, Func Offset: 0x88
	// Func End, Address: 0x1a99dc, Func Offset: 0x9c
}

// iFileFullPath__FPCcPc
// Start address: 0x1a99e0
void iFileFullPath(int8* relname, int8* fullname)
{
	int8 temp[256];
	// Line 661, Address: 0x1a99e0, Func Offset: 0
	// Line 667, Address: 0x1a99f4, Func Offset: 0x14
	// Line 669, Address: 0x1a99fc, Func Offset: 0x1c
	// Line 670, Address: 0x1a9a0c, Func Offset: 0x2c
	// Line 685, Address: 0x1a9a2c, Func Offset: 0x4c
	// Line 686, Address: 0x1a9a38, Func Offset: 0x58
	// Line 690, Address: 0x1a9a40, Func Offset: 0x60
	// Line 693, Address: 0x1a9a54, Func Offset: 0x74
	// Line 695, Address: 0x1a9a60, Func Offset: 0x80
	// Line 696, Address: 0x1a9a7c, Func Offset: 0x9c
	// Line 697, Address: 0x1a9a80, Func Offset: 0xa0
	// Func End, Address: 0x1a9a94, Func Offset: 0xb4
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x1a9aa0
uint32 iFileGetSize(tag_xFile* file)
{
	int32 size;
	int32 pos;
	tag_iFile* ps;
	int32 rc;
	// Line 578, Address: 0x1a9aa0, Func Offset: 0
	// Line 588, Address: 0x1a9ab4, Func Offset: 0x14
	// Line 589, Address: 0x1a9ac4, Func Offset: 0x24
	// Line 590, Address: 0x1a9ad4, Func Offset: 0x34
	// Line 589, Address: 0x1a9ad8, Func Offset: 0x38
	// Line 592, Address: 0x1a9adc, Func Offset: 0x3c
	// Line 593, Address: 0x1a9ae4, Func Offset: 0x44
	// Line 596, Address: 0x1a9af0, Func Offset: 0x50
	// Line 597, Address: 0x1a9b00, Func Offset: 0x60
	// Line 598, Address: 0x1a9b08, Func Offset: 0x68
	// Line 599, Address: 0x1a9b14, Func Offset: 0x74
	// Line 600, Address: 0x1a9b1c, Func Offset: 0x7c
	// Line 602, Address: 0x1a9b20, Func Offset: 0x80
	// Line 603, Address: 0x1a9b34, Func Offset: 0x94
	// Line 604, Address: 0x1a9b3c, Func Offset: 0x9c
	// Line 605, Address: 0x1a9b48, Func Offset: 0xa8
	// Line 608, Address: 0x1a9b50, Func Offset: 0xb0
	// Line 609, Address: 0x1a9b60, Func Offset: 0xc0
	// Line 610, Address: 0x1a9b68, Func Offset: 0xc8
	// Line 611, Address: 0x1a9b74, Func Offset: 0xd4
	// Line 612, Address: 0x1a9b7c, Func Offset: 0xdc
	// Line 614, Address: 0x1a9b80, Func Offset: 0xe0
	// Line 616, Address: 0x1a9b88, Func Offset: 0xe8
	// Func End, Address: 0x1a9ba0, Func Offset: 0x100
}

// iFileClose__FP9tag_xFile
// Start address: 0x1a9ba0
uint32 iFileClose(tag_xFile* file)
{
	tag_iFile* ps;
	int32 ret;
	int32 i;
	// Line 526, Address: 0x1a9ba0, Func Offset: 0
	// Line 531, Address: 0x1a9bb8, Func Offset: 0x18
	// Line 526, Address: 0x1a9bbc, Func Offset: 0x1c
	// Line 534, Address: 0x1a9bc0, Func Offset: 0x20
	// Line 535, Address: 0x1a9bd0, Func Offset: 0x30
	// Line 536, Address: 0x1a9bf8, Func Offset: 0x58
	// Line 537, Address: 0x1a9c00, Func Offset: 0x60
	// Line 538, Address: 0x1a9c08, Func Offset: 0x68
	// Line 539, Address: 0x1a9c48, Func Offset: 0xa8
	// Line 540, Address: 0x1a9c50, Func Offset: 0xb0
	// Line 542, Address: 0x1a9c60, Func Offset: 0xc0
	// Line 545, Address: 0x1a9c70, Func Offset: 0xd0
	// Line 549, Address: 0x1a9c80, Func Offset: 0xe0
	// Line 552, Address: 0x1a9c88, Func Offset: 0xe8
	// Line 553, Address: 0x1a9c90, Func Offset: 0xf0
	// Line 554, Address: 0x1a9ca4, Func Offset: 0x104
	// Line 556, Address: 0x1a9cac, Func Offset: 0x10c
	// Line 559, Address: 0x1a9cb0, Func Offset: 0x110
	// Line 561, Address: 0x1a9cb4, Func Offset: 0x114
	// Line 564, Address: 0x1a9cb8, Func Offset: 0x118
	// Line 561, Address: 0x1a9cbc, Func Offset: 0x11c
	// Line 564, Address: 0x1a9cc4, Func Offset: 0x124
	// Line 565, Address: 0x1a9cc8, Func Offset: 0x128
	// Func End, Address: 0x1a9ce4, Func Offset: 0x144
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x1a9cf0
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size)
{
	tag_iFile* ps;
	int32 num;
	// Line 423, Address: 0x1a9cf0, Func Offset: 0
	// Line 436, Address: 0x1a9d0c, Func Offset: 0x1c
	// Line 439, Address: 0x1a9d14, Func Offset: 0x24
	// Line 444, Address: 0x1a9d24, Func Offset: 0x34
	// Line 445, Address: 0x1a9d54, Func Offset: 0x64
	// Line 447, Address: 0x1a9d5c, Func Offset: 0x6c
	// Line 448, Address: 0x1a9d68, Func Offset: 0x78
	// Line 449, Address: 0x1a9d7c, Func Offset: 0x8c
	// Line 456, Address: 0x1a9d80, Func Offset: 0x90
	// Line 457, Address: 0x1a9d88, Func Offset: 0x98
	// Line 458, Address: 0x1a9d94, Func Offset: 0xa4
	// Line 459, Address: 0x1a9d9c, Func Offset: 0xac
	// Line 462, Address: 0x1a9da0, Func Offset: 0xb0
	// Line 463, Address: 0x1a9da8, Func Offset: 0xb8
	// Func End, Address: 0x1a9dc0, Func Offset: 0xd0
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x1a9dc0
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence)
{
	tag_iFile* ps;
	int32 position;
	int32 new_pos;
	// Line 339, Address: 0x1a9dc0, Func Offset: 0
	// Line 348, Address: 0x1a9dc8, Func Offset: 0x8
	// Line 351, Address: 0x1a9dd8, Func Offset: 0x18
	// Line 354, Address: 0x1a9e00, Func Offset: 0x40
	// Line 358, Address: 0x1a9e08, Func Offset: 0x48
	// Line 361, Address: 0x1a9e10, Func Offset: 0x50
	// Line 366, Address: 0x1a9e1c, Func Offset: 0x5c
	// Line 367, Address: 0x1a9e28, Func Offset: 0x68
	// Line 373, Address: 0x1a9e30, Func Offset: 0x70
	// Line 381, Address: 0x1a9e38, Func Offset: 0x78
	// Line 384, Address: 0x1a9e60, Func Offset: 0xa0
	// Line 387, Address: 0x1a9e68, Func Offset: 0xa8
	// Line 389, Address: 0x1a9e70, Func Offset: 0xb0
	// Line 394, Address: 0x1a9e74, Func Offset: 0xb4
	// Line 397, Address: 0x1a9e78, Func Offset: 0xb8
	// Line 400, Address: 0x1a9e80, Func Offset: 0xc0
	// Line 401, Address: 0x1a9e88, Func Offset: 0xc8
	// Line 402, Address: 0x1a9e94, Func Offset: 0xd4
	// Line 403, Address: 0x1a9e9c, Func Offset: 0xdc
	// Line 408, Address: 0x1a9ea0, Func Offset: 0xe0
	// Func End, Address: 0x1a9eac, Func Offset: 0xec
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x1a9eb0
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file)
{
	tag_iFile* ps;
	// Line 266, Address: 0x1a9eb0, Func Offset: 0
	// Line 279, Address: 0x1a9eb4, Func Offset: 0x4
	// Line 266, Address: 0x1a9eb8, Func Offset: 0x8
	// Line 279, Address: 0x1a9ec8, Func Offset: 0x18
	// Line 282, Address: 0x1a9ed0, Func Offset: 0x20
	// Line 283, Address: 0x1a9edc, Func Offset: 0x2c
	// Line 284, Address: 0x1a9eec, Func Offset: 0x3c
	// Line 286, Address: 0x1a9ef8, Func Offset: 0x48
	// Line 287, Address: 0x1a9efc, Func Offset: 0x4c
	// Line 288, Address: 0x1a9f08, Func Offset: 0x58
	// Line 289, Address: 0x1a9f0c, Func Offset: 0x5c
	// Line 291, Address: 0x1a9f18, Func Offset: 0x68
	// Line 293, Address: 0x1a9f24, Func Offset: 0x74
	// Line 294, Address: 0x1a9f2c, Func Offset: 0x7c
	// Line 295, Address: 0x1a9f30, Func Offset: 0x80
	// Line 297, Address: 0x1a9f38, Func Offset: 0x88
	// Line 302, Address: 0x1a9f40, Func Offset: 0x90
	// Line 303, Address: 0x1a9f54, Func Offset: 0xa4
	// Line 304, Address: 0x1a9f5c, Func Offset: 0xac
	// Line 305, Address: 0x1a9f64, Func Offset: 0xb4
	// Line 308, Address: 0x1a9f74, Func Offset: 0xc4
	// Line 309, Address: 0x1a9f80, Func Offset: 0xd0
	// Line 310, Address: 0x1a9f88, Func Offset: 0xd8
	// Line 318, Address: 0x1a9f90, Func Offset: 0xe0
	// Line 321, Address: 0x1a9f98, Func Offset: 0xe8
	// Line 323, Address: 0x1a9f9c, Func Offset: 0xec
	// Line 321, Address: 0x1a9fa0, Func Offset: 0xf0
	// Line 324, Address: 0x1a9fa8, Func Offset: 0xf8
	// Func End, Address: 0x1a9fbc, Func Offset: 0x10c
}

// iFileLoad__FPcPUiPUi
// Start address: 0x1a9fc0
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size)
{
	int32 index;
	int32 fileSize;
	int32 alignedSize;
	// Line 213, Address: 0x1a9fc0, Func Offset: 0
	// Line 215, Address: 0x1a9fe4, Func Offset: 0x24
	// Line 216, Address: 0x1a9fec, Func Offset: 0x2c
	// Line 217, Address: 0x1a9ff8, Func Offset: 0x38
	// Line 218, Address: 0x1aa004, Func Offset: 0x44
	// Line 219, Address: 0x1aa00c, Func Offset: 0x4c
	// Line 222, Address: 0x1aa014, Func Offset: 0x54
	// Line 226, Address: 0x1aa020, Func Offset: 0x60
	// Line 229, Address: 0x1aa034, Func Offset: 0x74
	// Line 232, Address: 0x1aa03c, Func Offset: 0x7c
	// Line 237, Address: 0x1aa050, Func Offset: 0x90
	// Line 241, Address: 0x1aa094, Func Offset: 0xd4
	// Line 242, Address: 0x1aa09c, Func Offset: 0xdc
	// Line 244, Address: 0x1aa0a0, Func Offset: 0xe0
	// Line 245, Address: 0x1aa0a8, Func Offset: 0xe8
	// Func End, Address: 0x1aa0c8, Func Offset: 0x108
}

// iFileExit__Fv
// Start address: 0x1aa0d0
void iFileExit()
{
	// Line 190, Address: 0x1aa0d0, Func Offset: 0
	// Func End, Address: 0x1aa0d8, Func Offset: 0x8
}

// iFileInit__Fv
// Start address: 0x1aa0e0
void iFileInit()
{
	int32 hisVersion;
	// Line 136, Address: 0x1aa0e0, Func Offset: 0
	// Line 138, Address: 0x1aa0e4, Func Offset: 0x4
	// Line 136, Address: 0x1aa0e8, Func Offset: 0x8
	// Line 138, Address: 0x1aa0ec, Func Offset: 0xc
	// Line 139, Address: 0x1aa0f8, Func Offset: 0x18
	// Line 141, Address: 0x1aa108, Func Offset: 0x28
	// Line 144, Address: 0x1aa110, Func Offset: 0x30
	// Line 153, Address: 0x1aa118, Func Offset: 0x38
	// Line 154, Address: 0x1aa12c, Func Offset: 0x4c
	// Line 155, Address: 0x1aa134, Func Offset: 0x54
	// Line 156, Address: 0x1aa13c, Func Offset: 0x5c
	// Line 157, Address: 0x1aa15c, Func Offset: 0x7c
	// Line 158, Address: 0x1aa164, Func Offset: 0x84
	// Line 159, Address: 0x1aa16c, Func Offset: 0x8c
	// Line 158, Address: 0x1aa170, Func Offset: 0x90
	// Line 161, Address: 0x1aa174, Func Offset: 0x94
	// Line 166, Address: 0x1aa1a0, Func Offset: 0xc0
	// Line 173, Address: 0x1aa1b4, Func Offset: 0xd4
	// Line 174, Address: 0x1aa1c8, Func Offset: 0xe8
	// Func End, Address: 0x1aa1d4, Func Offset: 0xf4
}

// iFileDebugMode__19@unnamed@iFile_cpp@Fv
// Start address: 0x1aa1e0
void iFileDebugMode()
{
	int32 id;
	HISRequestDebug requestDebug;
	HISFileIndexDebug fileIndexDebug;
	int8* TYPES[3];
	int8* STATUSES[9];
	// Line 76, Address: 0x1aa1e0, Func Offset: 0
	// Line 78, Address: 0x1aa208, Func Offset: 0x28
	// Line 80, Address: 0x1aa240, Func Offset: 0x60
	// Line 83, Address: 0x1aa250, Func Offset: 0x70
	// Line 100, Address: 0x1aa258, Func Offset: 0x78
	// Line 106, Address: 0x1aa2a0, Func Offset: 0xc0
	// Line 110, Address: 0x1aa2b4, Func Offset: 0xd4
	// Line 111, Address: 0x1aa2c0, Func Offset: 0xe0
	// Line 113, Address: 0x1aa2e4, Func Offset: 0x104
	// Line 116, Address: 0x1aa2e8, Func Offset: 0x108
	// Line 117, Address: 0x1aa2ec, Func Offset: 0x10c
	// Line 118, Address: 0x1aa2f8, Func Offset: 0x118
	// Func End, Address: 0x1aa328, Func Offset: 0x148
}

