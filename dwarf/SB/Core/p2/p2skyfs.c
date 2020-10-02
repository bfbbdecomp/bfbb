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
	type_24 readBuffer;
	uint32 bufferPos;
	int32 bufferValid;
};

struct RwFileFunctions
{
	type_9 rwfexist;
	type_11 rwfopen;
	type_12 rwfclose;
	type_14 rwfread;
	type_15 rwfwrite;
	type_17 rwfgets;
	type_18 rwfputs;
	type_20 rwfeof;
	type_0 rwfseek;
	type_1 rwfflush;
	type_3 rwftell;
};

struct RwSkyFSState
{
	int32 gdfsOpenFiles;
	type_6 SubDir;
	RwModuleInfo gdfsModuleInfo;
};

RwSkyFSState SkyFSState;
type_10 _rwSkyFSClose;
type_26 _rwSkyFSOpen;
type_7 ourGlobals;
type_8 skyFtell;
type_23 skyFflush;
type_19 skyFseek;
type_27 skyFeof;
type_4 skyFputs;
type_25 skyFgets;
type_21 skyFwrite;
type_13 skyFread;
type_16 skyFclose;
type_2 skyFopen;
type_22 skyFexist;

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
}

// _rwSkyFSClose__FPvii
// Start address: 0x110530
void* _rwSkyFSClose(void* instance)
{
	RwFileFunctions* FS;
}

// _rwSkyFSOpen__FPvii
// Start address: 0x1105f0
void* _rwSkyFSOpen(void* instance, int32 offset)
{
	RwFileFunctions* FS;
}

// skyFflush__FPv
// Start address: 0x110770
int32 skyFflush()
{
}

// skyFeof__FPv
// Start address: 0x110780
int32 skyFeof(void* fptr)
{
	skyFile* fp;
}

// skyFputs__FPCcPv
// Start address: 0x1107d0
int32 skyFputs(int8* buffer, void* fptr)
{
	skyFile* fp;
	int32 i;
	int32 j;
}

// skyFgets__FPciPv
// Start address: 0x1108b0
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr)
{
	skyFile* fp;
	int32 i;
	int32 numBytesRead;
}

// skyFtell__FPv
// Start address: 0x110a00
int32 skyFtell(void* fptr)
{
	skyFile* fp;
}

// skyFseek__FPvli
// Start address: 0x110a50
int32 skyFseek(void* fptr, long32 offset, int32 origin)
{
	skyFile* fp;
	int32 oldFPos;
	int32 bufStart;
	int32 noBuffer;
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x110bf0
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 bytesWritten;
	skyFile* fp;
	int32 numBytesToWrite;
}

// skyFread__FPvUiUiPv
// Start address: 0x110cf0
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr)
{
	skyFile* fp;
	uint32 numBytesToRead;
	int32 bytesRead;
	int32 bytesRead2;
}

// skyFexist__FPCc
// Start address: 0x110e30
int32 skyFexist(int8* name)
{
	void* res;
}

// skyFclose__FPv
// Start address: 0x110ea0
int32 skyFclose(void* fptr)
{
	skyFile* fp;
}

// skyFopen__FPCcPCc
// Start address: 0x110f50
void* skyFopen(int8* name, int8* access)
{
	void* res;
}

// trySkyFopen__FPCcPCc
// Start address: 0x110f80
void* trySkyFopen(int8* fname, int8* access)
{
	skyFile* fp;
	int32 mode;
	type_5 name;
	int8* nameptr;
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
}

