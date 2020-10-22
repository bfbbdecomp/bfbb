typedef struct RwModuleInfo;
typedef struct skyFile;
typedef struct RwFileFunctions;
typedef struct RwSkyFSState;

typedef int32(*type_0)(void*, long32, int32);
typedef int32(*type_1)(void*);
typedef void*(*type_2)(int8*, int8*);
typedef int32(*type_3)(void*);
typedef int32(*type_4)(int8*, void*);
typedef int32(*type_8)(void*);
typedef int32(*type_9)(int8*);
typedef void*(*type_10)(void*, int32, int32);
typedef void*(*type_11)(int8*, int8*);
typedef int32(*type_12)(void*);
typedef uint32(*type_13)(void*, uint32, uint32, void*);
typedef uint32(*type_14)(void*, uint32, uint32, void*);
typedef uint32(*type_15)(void*, uint32, uint32, void*);
typedef int32(*type_16)(void*);
typedef int8*(*type_17)(int8*, int32, void*);
typedef int32(*type_18)(int8*, void*);
typedef int32(*type_19)(void*, long32, int32);
typedef int32(*type_20)(void*);
typedef uint32(*type_21)(void*, uint32, uint32, void*);
typedef int32(*type_22)(int8*);
typedef int32(*type_23)(void*);
typedef int8*(*type_25)(int8*, int32, void*);
typedef void*(*type_26)(void*, int32, int32);
typedef int32(*type_27)(void*);

typedef int8 type_5[256];
typedef int8 type_6[256];
typedef uint32 type_7[4096];
typedef uint8 type_24[10240];

struct RwModuleInfo
{
	int32 globalsOffset;
	int32 numInstances;
};

struct skyFile
{
	int32 gdfs;
	int32 POS;
	int32 SOF;
	uint8 readBuffer[10240];
	uint32 bufferPos;
	int32 bufferValid;
};

struct RwFileFunctions
{
	int32(*rwfexist)(int8*);
	void*(*rwfopen)(int8*, int8*);
	int32(*rwfclose)(void*);
	uint32(*rwfread)(void*, uint32, uint32, void*);
	uint32(*rwfwrite)(void*, uint32, uint32, void*);
	int8*(*rwfgets)(int8*, int32, void*);
	int32(*rwfputs)(int8*, void*);
	int32(*rwfeof)(void*);
	int32(*rwfseek)(void*, long32, int32);
	int32(*rwfflush)(void*);
	int32(*rwftell)(void*);
};

struct RwSkyFSState
{
	int32 gdfsOpenFiles;
	int8 SubDir[256];
	RwModuleInfo gdfsModuleInfo;
};

RwSkyFSState SkyFSState;
void*(*_rwSkyFSClose)(void*, int32, int32);
void*(*_rwSkyFSOpen)(void*, int32, int32);
uint32 ourGlobals[4096];
int32(*skyFtell)(void*);
int32(*skyFflush)(void*);
int32(*skyFseek)(void*, long32, int32);
int32(*skyFeof)(void*);
int32(*skyFputs)(int8*, void*);
int8*(*skyFgets)(int8*, int32, void*);
uint32(*skyFwrite)(void*, uint32, uint32, void*);
uint32(*skyFread)(void*, uint32, uint32, void*);
int32(*skyFclose)(void*);
void*(*skyFopen)(int8*, int8*);
int32(*skyFexist)(int8*);

int32 SkyInstallFileSystem(int8* subdir);
void* _rwSkyFSClose(void* instance);
void* _rwSkyFSOpen(void* instance, int32 offset);
int32 skyFflush();
int32 skyFeof(void* fptr);
int32 skyFputs(int8* buffer, void* fptr);
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr);
int32 skyFtell(void* fptr);
int32 skyFseek(void* fptr, long32 offset, int32 origin);
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr);
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr);
int32 skyFexist(int8* name);
int32 skyFclose(void* fptr);
void* skyFopen(int8* name, int8* access);
void* trySkyFopen(int8* fname, int8* access);
int32 skyTransMode(int8* access);

// 
// Start address: 0x1104a0
int32 SkyInstallFileSystem(int8* subdir)
{
	// Line 718, Address: 0x1104a0, Func Offset: 0
	// Line 722, Address: 0x1104a4, Func Offset: 0x4
	// Line 718, Address: 0x1104a8, Func Offset: 0x8
	// Line 722, Address: 0x1104ac, Func Offset: 0xc
	// Line 718, Address: 0x1104b0, Func Offset: 0x10
	// Line 720, Address: 0x1104b4, Func Offset: 0x14
	// Line 722, Address: 0x1104bc, Func Offset: 0x1c
	// Line 727, Address: 0x1104dc, Func Offset: 0x3c
	// Line 728, Address: 0x1104e4, Func Offset: 0x44
	// Line 732, Address: 0x1104e8, Func Offset: 0x48
	// Line 734, Address: 0x1104f0, Func Offset: 0x50
	// Line 735, Address: 0x1104fc, Func Offset: 0x5c
	// Line 738, Address: 0x110508, Func Offset: 0x68
	// Line 742, Address: 0x110510, Func Offset: 0x70
	// Line 743, Address: 0x110518, Func Offset: 0x78
	// Func End, Address: 0x110528, Func Offset: 0x88
}

// _rwSkyFSClose__FPvii
// Start address: 0x110530
void* _rwSkyFSClose(void* instance)
{
	RwFileFunctions* FS;
	// Line 692, Address: 0x110530, Func Offset: 0
	// Line 695, Address: 0x11053c, Func Offset: 0xc
	// Line 699, Address: 0x110544, Func Offset: 0x14
	// Line 702, Address: 0x110558, Func Offset: 0x28
	// Line 699, Address: 0x11055c, Func Offset: 0x2c
	// Line 702, Address: 0x1105b4, Func Offset: 0x84
	// Line 704, Address: 0x1105c4, Func Offset: 0x94
	// Line 706, Address: 0x1105c8, Func Offset: 0x98
	// Line 704, Address: 0x1105cc, Func Offset: 0x9c
	// Line 707, Address: 0x1105dc, Func Offset: 0xac
	// Func End, Address: 0x1105ec, Func Offset: 0xbc
}

// _rwSkyFSOpen__FPvii
// Start address: 0x1105f0
void* _rwSkyFSOpen(void* instance, int32 offset)
{
	RwFileFunctions* FS;
	// Line 640, Address: 0x1105f0, Func Offset: 0
	// Line 644, Address: 0x1105f4, Func Offset: 0x4
	// Line 640, Address: 0x1105f8, Func Offset: 0x8
	// Line 650, Address: 0x1105fc, Func Offset: 0xc
	// Line 640, Address: 0x110600, Func Offset: 0x10
	// Line 644, Address: 0x110604, Func Offset: 0x14
	// Line 650, Address: 0x11060c, Func Offset: 0x1c
	// Line 653, Address: 0x11062c, Func Offset: 0x3c
	// Line 650, Address: 0x110630, Func Offset: 0x40
	// Line 653, Address: 0x110634, Func Offset: 0x44
	// Line 655, Address: 0x110648, Func Offset: 0x58
	// Line 659, Address: 0x110650, Func Offset: 0x60
	// Line 662, Address: 0x110658, Func Offset: 0x68
	// Line 665, Address: 0x11066c, Func Offset: 0x7c
	// Line 666, Address: 0x110670, Func Offset: 0x80
	// Line 667, Address: 0x110674, Func Offset: 0x84
	// Line 668, Address: 0x110678, Func Offset: 0x88
	// Line 669, Address: 0x11067c, Func Offset: 0x8c
	// Line 670, Address: 0x110680, Func Offset: 0x90
	// Line 671, Address: 0x110684, Func Offset: 0x94
	// Line 672, Address: 0x110688, Func Offset: 0x98
	// Line 673, Address: 0x11068c, Func Offset: 0x9c
	// Line 662, Address: 0x110690, Func Offset: 0xa0
	// Line 665, Address: 0x110694, Func Offset: 0xa4
	// Line 662, Address: 0x110698, Func Offset: 0xa8
	// Line 674, Address: 0x11069c, Func Offset: 0xac
	// Line 662, Address: 0x1106a0, Func Offset: 0xb0
	// Line 675, Address: 0x1106a4, Func Offset: 0xb4
	// Line 666, Address: 0x1106a8, Func Offset: 0xb8
	// Line 667, Address: 0x1106ac, Func Offset: 0xbc
	// Line 668, Address: 0x1106b0, Func Offset: 0xc0
	// Line 669, Address: 0x1106b4, Func Offset: 0xc4
	// Line 670, Address: 0x1106b8, Func Offset: 0xc8
	// Line 671, Address: 0x1106bc, Func Offset: 0xcc
	// Line 672, Address: 0x1106c0, Func Offset: 0xd0
	// Line 673, Address: 0x1106c4, Func Offset: 0xd4
	// Line 674, Address: 0x1106c8, Func Offset: 0xd8
	// Line 675, Address: 0x1106cc, Func Offset: 0xdc
	// Line 662, Address: 0x1106d0, Func Offset: 0xe0
	// Line 677, Address: 0x1106d4, Func Offset: 0xe4
	// Line 662, Address: 0x1106d8, Func Offset: 0xe8
	// Line 665, Address: 0x110720, Func Offset: 0x130
	// Line 666, Address: 0x110724, Func Offset: 0x134
	// Line 667, Address: 0x110728, Func Offset: 0x138
	// Line 668, Address: 0x11072c, Func Offset: 0x13c
	// Line 669, Address: 0x110730, Func Offset: 0x140
	// Line 670, Address: 0x110734, Func Offset: 0x144
	// Line 671, Address: 0x110738, Func Offset: 0x148
	// Line 672, Address: 0x11073c, Func Offset: 0x14c
	// Line 673, Address: 0x110740, Func Offset: 0x150
	// Line 674, Address: 0x110744, Func Offset: 0x154
	// Line 675, Address: 0x110748, Func Offset: 0x158
	// Line 677, Address: 0x11074c, Func Offset: 0x15c
	// Line 679, Address: 0x110750, Func Offset: 0x160
	// Line 677, Address: 0x110754, Func Offset: 0x164
	// Line 680, Address: 0x110760, Func Offset: 0x170
	// Func End, Address: 0x110770, Func Offset: 0x180
}

// skyFflush__FPv
// Start address: 0x110770
int32 skyFflush()
{
	// Line 629, Address: 0x110770, Func Offset: 0
	// Func End, Address: 0x110778, Func Offset: 0x8
}

// skyFeof__FPv
// Start address: 0x110780
int32 skyFeof(void* fptr)
{
	skyFile* fp;
	// Line 610, Address: 0x110780, Func Offset: 0
	// Line 613, Address: 0x11078c, Func Offset: 0xc
	// Line 615, Address: 0x1107b0, Func Offset: 0x30
	// Line 616, Address: 0x1107b8, Func Offset: 0x38
	// Line 615, Address: 0x1107c0, Func Offset: 0x40
	// Line 616, Address: 0x1107c8, Func Offset: 0x48
	// Func End, Address: 0x1107d0, Func Offset: 0x50
}

// skyFputs__FPCcPv
// Start address: 0x1107d0
int32 skyFputs(int8* buffer, void* fptr)
{
	skyFile* fp;
	int32 i;
	int32 j;
	// Line 578, Address: 0x1107d0, Func Offset: 0
	// Line 582, Address: 0x1107e4, Func Offset: 0x14
	// Line 583, Address: 0x110808, Func Offset: 0x38
	// Line 585, Address: 0x110828, Func Offset: 0x58
	// Line 586, Address: 0x110830, Func Offset: 0x60
	// Line 585, Address: 0x110838, Func Offset: 0x68
	// Line 586, Address: 0x11083c, Func Offset: 0x6c
	// Line 588, Address: 0x110844, Func Offset: 0x74
	// Line 590, Address: 0x110850, Func Offset: 0x80
	// Line 591, Address: 0x110860, Func Offset: 0x90
	// Line 592, Address: 0x110870, Func Offset: 0xa0
	// Line 593, Address: 0x110874, Func Offset: 0xa4
	// Line 594, Address: 0x110878, Func Offset: 0xa8
	// Line 596, Address: 0x110890, Func Offset: 0xc0
	// Line 599, Address: 0x110898, Func Offset: 0xc8
	// Func End, Address: 0x1108ac, Func Offset: 0xdc
}

// skyFgets__FPciPv
// Start address: 0x1108b0
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr)
{
	skyFile* fp;
	int32 i;
	int32 numBytesRead;
	// Line 512, Address: 0x1108b0, Func Offset: 0
	// Line 517, Address: 0x1108d0, Func Offset: 0x20
	// Line 518, Address: 0x1108f0, Func Offset: 0x40
	// Line 522, Address: 0x110910, Func Offset: 0x60
	// Line 524, Address: 0x11092c, Func Offset: 0x7c
	// Line 526, Address: 0x110934, Func Offset: 0x84
	// Line 529, Address: 0x11093c, Func Offset: 0x8c
	// Line 526, Address: 0x110940, Func Offset: 0x90
	// Line 531, Address: 0x110948, Func Offset: 0x98
	// Line 533, Address: 0x110954, Func Offset: 0xa4
	// Line 543, Address: 0x110958, Func Offset: 0xa8
	// Line 535, Address: 0x11095c, Func Offset: 0xac
	// Line 543, Address: 0x110960, Func Offset: 0xb0
	// Line 542, Address: 0x110964, Func Offset: 0xb4
	// Line 535, Address: 0x110968, Func Offset: 0xb8
	// Line 543, Address: 0x11096c, Func Offset: 0xbc
	// Line 545, Address: 0x110978, Func Offset: 0xc8
	// Line 547, Address: 0x110980, Func Offset: 0xd0
	// Line 549, Address: 0x11098c, Func Offset: 0xdc
	// Line 551, Address: 0x1109a4, Func Offset: 0xf4
	// Line 554, Address: 0x1109b8, Func Offset: 0x108
	// Line 557, Address: 0x1109c0, Func Offset: 0x110
	// Line 559, Address: 0x1109c8, Func Offset: 0x118
	// Line 560, Address: 0x1109cc, Func Offset: 0x11c
	// Line 566, Address: 0x1109dc, Func Offset: 0x12c
	// Line 567, Address: 0x1109e0, Func Offset: 0x130
	// Func End, Address: 0x1109fc, Func Offset: 0x14c
}

// skyFtell__FPv
// Start address: 0x110a00
int32 skyFtell(void* fptr)
{
	skyFile* fp;
	// Line 495, Address: 0x110a00, Func Offset: 0
	// Line 498, Address: 0x110a0c, Func Offset: 0xc
	// Line 500, Address: 0x110a30, Func Offset: 0x30
	// Line 501, Address: 0x110a40, Func Offset: 0x40
	// Func End, Address: 0x110a50, Func Offset: 0x50
}

// skyFseek__FPvli
// Start address: 0x110a50
int32 skyFseek(void* fptr, long32 offset, int32 origin)
{
	skyFile* fp;
	int32 oldFPos;
	int32 bufStart;
	int32 noBuffer;
	// Line 426, Address: 0x110a50, Func Offset: 0
	// Line 427, Address: 0x110a70, Func Offset: 0x20
	// Line 426, Address: 0x110a74, Func Offset: 0x24
	// Line 431, Address: 0x110a78, Func Offset: 0x28
	// Line 433, Address: 0x110a98, Func Offset: 0x48
	// Line 435, Address: 0x110aa0, Func Offset: 0x50
	// Line 436, Address: 0x110aac, Func Offset: 0x5c
	// Line 437, Address: 0x110ab0, Func Offset: 0x60
	// Line 439, Address: 0x110ab4, Func Offset: 0x64
	// Line 444, Address: 0x110aec, Func Offset: 0x9c
	// Line 447, Address: 0x110b0c, Func Offset: 0xbc
	// Line 448, Address: 0x110b14, Func Offset: 0xc4
	// Line 447, Address: 0x110b18, Func Offset: 0xc8
	// Line 448, Address: 0x110b1c, Func Offset: 0xcc
	// Line 447, Address: 0x110b20, Func Offset: 0xd0
	// Line 448, Address: 0x110b24, Func Offset: 0xd4
	// Line 449, Address: 0x110b2c, Func Offset: 0xdc
	// Line 452, Address: 0x110b38, Func Offset: 0xe8
	// Line 454, Address: 0x110b4c, Func Offset: 0xfc
	// Line 456, Address: 0x110b54, Func Offset: 0x104
	// Line 458, Address: 0x110b58, Func Offset: 0x108
	// Line 459, Address: 0x110b68, Func Offset: 0x118
	// Line 463, Address: 0x110b70, Func Offset: 0x120
	// Line 464, Address: 0x110b84, Func Offset: 0x134
	// Line 466, Address: 0x110b8c, Func Offset: 0x13c
	// Line 468, Address: 0x110b90, Func Offset: 0x140
	// Line 472, Address: 0x110b98, Func Offset: 0x148
	// Line 473, Address: 0x110ba0, Func Offset: 0x150
	// Line 475, Address: 0x110ba8, Func Offset: 0x158
	// Line 478, Address: 0x110bb8, Func Offset: 0x168
	// Line 479, Address: 0x110bbc, Func Offset: 0x16c
	// Line 480, Address: 0x110bc0, Func Offset: 0x170
	// Line 483, Address: 0x110bc8, Func Offset: 0x178
	// Line 484, Address: 0x110bd0, Func Offset: 0x180
	// Func End, Address: 0x110bf0, Func Offset: 0x1a0
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x110bf0
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 bytesWritten;
	skyFile* fp;
	int32 numBytesToWrite;
	// Line 397, Address: 0x110bf0, Func Offset: 0
	// Line 400, Address: 0x110c10, Func Offset: 0x20
	// Line 402, Address: 0x110c14, Func Offset: 0x24
	// Line 403, Address: 0x110c38, Func Offset: 0x48
	// Line 405, Address: 0x110c58, Func Offset: 0x68
	// Line 407, Address: 0x110c68, Func Offset: 0x78
	// Line 409, Address: 0x110c74, Func Offset: 0x84
	// Line 410, Address: 0x110c84, Func Offset: 0x94
	// Line 411, Address: 0x110c94, Func Offset: 0xa4
	// Line 412, Address: 0x110c98, Func Offset: 0xa8
	// Line 413, Address: 0x110cc4, Func Offset: 0xd4
	// Line 414, Address: 0x110cc8, Func Offset: 0xd8
	// Line 415, Address: 0x110cd0, Func Offset: 0xe0
	// Func End, Address: 0x110cec, Func Offset: 0xfc
}

// skyFread__FPvUiUiPv
// Start address: 0x110cf0
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr)
{
	skyFile* fp;
	uint32 numBytesToRead;
	int32 bytesRead;
	int32 bytesRead2;
	// Line 321, Address: 0x110cf0, Func Offset: 0
	// Line 322, Address: 0x110d10, Func Offset: 0x20
	// Line 321, Address: 0x110d14, Func Offset: 0x24
	// Line 323, Address: 0x110d18, Func Offset: 0x28
	// Line 326, Address: 0x110d1c, Func Offset: 0x2c
	// Line 329, Address: 0x110d24, Func Offset: 0x34
	// Line 331, Address: 0x110d34, Func Offset: 0x44
	// Line 335, Address: 0x110d3c, Func Offset: 0x4c
	// Line 339, Address: 0x110d54, Func Offset: 0x64
	// Line 343, Address: 0x110d60, Func Offset: 0x70
	// Line 351, Address: 0x110d68, Func Offset: 0x78
	// Line 355, Address: 0x110d7c, Func Offset: 0x8c
	// Line 354, Address: 0x110d80, Func Offset: 0x90
	// Line 355, Address: 0x110d84, Func Offset: 0x94
	// Line 356, Address: 0x110d8c, Func Offset: 0x9c
	// Line 362, Address: 0x110d9c, Func Offset: 0xac
	// Line 364, Address: 0x110da4, Func Offset: 0xb4
	// Line 367, Address: 0x110dac, Func Offset: 0xbc
	// Line 368, Address: 0x110dbc, Func Offset: 0xcc
	// Line 372, Address: 0x110dc4, Func Offset: 0xd4
	// Line 376, Address: 0x110dd0, Func Offset: 0xe0
	// Line 377, Address: 0x110de0, Func Offset: 0xf0
	// Line 378, Address: 0x110de4, Func Offset: 0xf4
	// Line 379, Address: 0x110df4, Func Offset: 0x104
	// Line 381, Address: 0x110df8, Func Offset: 0x108
	// Line 382, Address: 0x110dfc, Func Offset: 0x10c
	// Line 381, Address: 0x110e00, Func Offset: 0x110
	// Line 386, Address: 0x110e08, Func Offset: 0x118
	// Line 385, Address: 0x110e0c, Func Offset: 0x11c
	// Line 386, Address: 0x110e10, Func Offset: 0x120
	// Line 385, Address: 0x110e20, Func Offset: 0x130
	// Line 386, Address: 0x110e24, Func Offset: 0x134
	// Func End, Address: 0x110e30, Func Offset: 0x140
}

// skyFexist__FPCc
// Start address: 0x110e30
int32 skyFexist(int8* name)
{
	void* res;
	// Line 299, Address: 0x110e30, Func Offset: 0
	// Line 302, Address: 0x110e3c, Func Offset: 0xc
	// Line 303, Address: 0x110e5c, Func Offset: 0x2c
	// Line 305, Address: 0x110e64, Func Offset: 0x34
	// Line 306, Address: 0x110e78, Func Offset: 0x48
	// Line 309, Address: 0x110e80, Func Offset: 0x50
	// Line 310, Address: 0x110e88, Func Offset: 0x58
	// Func End, Address: 0x110e98, Func Offset: 0x68
}

// skyFclose__FPv
// Start address: 0x110ea0
int32 skyFclose(void* fptr)
{
	skyFile* fp;
	// Line 271, Address: 0x110ea0, Func Offset: 0
	// Line 274, Address: 0x110eac, Func Offset: 0xc
	// Line 276, Address: 0x110ed0, Func Offset: 0x30
	// Line 278, Address: 0x110ee4, Func Offset: 0x44
	// Line 280, Address: 0x110eec, Func Offset: 0x4c
	// Line 282, Address: 0x110f14, Func Offset: 0x74
	// Line 284, Address: 0x110f18, Func Offset: 0x78
	// Line 282, Address: 0x110f1c, Func Offset: 0x7c
	// Line 284, Address: 0x110f28, Func Offset: 0x88
	// Line 287, Address: 0x110f30, Func Offset: 0x90
	// Line 288, Address: 0x110f38, Func Offset: 0x98
	// Func End, Address: 0x110f48, Func Offset: 0xa8
}

// skyFopen__FPCcPCc
// Start address: 0x110f50
void* skyFopen(int8* name, int8* access)
{
	void* res;
	// Line 249, Address: 0x110f50, Func Offset: 0
	// Line 252, Address: 0x110f58, Func Offset: 0x8
	// Line 256, Address: 0x110f60, Func Offset: 0x10
	// Line 260, Address: 0x110f74, Func Offset: 0x24
	// Func End, Address: 0x110f80, Func Offset: 0x30
}

// trySkyFopen__FPCcPCc
// Start address: 0x110f80
void* trySkyFopen(int8* fname, int8* access)
{
	skyFile* fp;
	int32 mode;
	int8 name[256];
	int8* nameptr;
	// Line 141, Address: 0x110f80, Func Offset: 0
	// Line 148, Address: 0x110f98, Func Offset: 0x18
	// Line 150, Address: 0x110fa8, Func Offset: 0x28
	// Line 151, Address: 0x110fb4, Func Offset: 0x34
	// Line 155, Address: 0x110fc0, Func Offset: 0x40
	// Line 160, Address: 0x110fdc, Func Offset: 0x5c
	// Line 162, Address: 0x110ff4, Func Offset: 0x74
	// Line 164, Address: 0x111000, Func Offset: 0x80
	// Line 173, Address: 0x111008, Func Offset: 0x88
	// Line 171, Address: 0x11100c, Func Offset: 0x8c
	// Line 174, Address: 0x111010, Func Offset: 0x90
	// Line 178, Address: 0x111018, Func Offset: 0x98
	// Line 177, Address: 0x11101c, Func Offset: 0x9c
	// Line 178, Address: 0x11102c, Func Offset: 0xac
	// Line 183, Address: 0x111030, Func Offset: 0xb0
	// Line 184, Address: 0x111038, Func Offset: 0xb8
	// Line 190, Address: 0x111040, Func Offset: 0xc0
	// Line 192, Address: 0x111068, Func Offset: 0xe8
	// Line 194, Address: 0x111070, Func Offset: 0xf0
	// Line 197, Address: 0x111078, Func Offset: 0xf8
	// Line 198, Address: 0x111084, Func Offset: 0x104
	// Line 200, Address: 0x11108c, Func Offset: 0x10c
	// Line 201, Address: 0x111094, Func Offset: 0x114
	// Line 203, Address: 0x111098, Func Offset: 0x118
	// Line 205, Address: 0x1110ac, Func Offset: 0x12c
	// Line 207, Address: 0x1110b4, Func Offset: 0x134
	// Line 208, Address: 0x1110d8, Func Offset: 0x158
	// Line 212, Address: 0x1110e0, Func Offset: 0x160
	// Line 213, Address: 0x1110f4, Func Offset: 0x174
	// Line 215, Address: 0x111100, Func Offset: 0x180
	// Line 216, Address: 0x111108, Func Offset: 0x188
	// Line 217, Address: 0x111130, Func Offset: 0x1b0
	// Line 220, Address: 0x111138, Func Offset: 0x1b8
	// Line 222, Address: 0x111150, Func Offset: 0x1d0
	// Line 224, Address: 0x111164, Func Offset: 0x1e4
	// Line 226, Address: 0x111170, Func Offset: 0x1f0
	// Line 227, Address: 0x111178, Func Offset: 0x1f8
	// Line 228, Address: 0x1111a0, Func Offset: 0x220
	// Line 233, Address: 0x1111a8, Func Offset: 0x228
	// Line 235, Address: 0x1111b0, Func Offset: 0x230
	// Line 237, Address: 0x1111b8, Func Offset: 0x238
	// Line 235, Address: 0x1111bc, Func Offset: 0x23c
	// Line 238, Address: 0x1111c8, Func Offset: 0x248
	// Func End, Address: 0x1111dc, Func Offset: 0x25c
}

// skyTransMode__FPCc
// Start address: 0x1111e0
int32 skyTransMode(int8* access)
{
	int32 mode;
	int8* r;
	int8* w;
	int8* a;
	int8* plus;
	int8* n;
	int8* d;
	// Line 83, Address: 0x1111e0, Func Offset: 0
	// Line 96, Address: 0x1111e4, Func Offset: 0x4
	// Line 83, Address: 0x1111e8, Func Offset: 0x8
	// Line 96, Address: 0x111200, Func Offset: 0x20
	// Line 97, Address: 0x11120c, Func Offset: 0x2c
	// Line 98, Address: 0x11121c, Func Offset: 0x3c
	// Line 99, Address: 0x11122c, Func Offset: 0x4c
	// Line 100, Address: 0x11123c, Func Offset: 0x5c
	// Line 101, Address: 0x111248, Func Offset: 0x68
	// Line 103, Address: 0x111258, Func Offset: 0x78
	// Line 104, Address: 0x111260, Func Offset: 0x80
	// Line 105, Address: 0x111268, Func Offset: 0x88
	// Line 106, Address: 0x111270, Func Offset: 0x90
	// Line 107, Address: 0x111278, Func Offset: 0x98
	// Line 108, Address: 0x111280, Func Offset: 0xa0
	// Line 109, Address: 0x111288, Func Offset: 0xa8
	// Line 110, Address: 0x111290, Func Offset: 0xb0
	// Line 112, Address: 0x111298, Func Offset: 0xb8
	// Line 115, Address: 0x1112a0, Func Offset: 0xc0
	// Line 116, Address: 0x1112a8, Func Offset: 0xc8
	// Line 118, Address: 0x1112b0, Func Offset: 0xd0
	// Line 119, Address: 0x1112b8, Func Offset: 0xd8
	// Line 121, Address: 0x1112c0, Func Offset: 0xe0
	// Line 122, Address: 0x1112c8, Func Offset: 0xe8
	// Line 124, Address: 0x1112d0, Func Offset: 0xf0
	// Line 125, Address: 0x1112d8, Func Offset: 0xf8
	// Line 127, Address: 0x1112e0, Func Offset: 0x100
	// Line 128, Address: 0x1112e8, Func Offset: 0x108
	// Func End, Address: 0x111308, Func Offset: 0x128
}

