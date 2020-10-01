typedef struct RwModuleInfo;
typedef struct skyFile;
typedef struct RwFileFunctions;
typedef struct RwSkyFSState;

typedef s32(*type_0)(void*, s32, s32);
typedef s32(*type_1)(void*);
typedef void*(*type_2)(s8*, s8*);
typedef s32(*type_3)(void*);
typedef s32(*type_4)(s8*, void*);
typedef s32(*type_8)(void*);
typedef s32(*type_9)(s8*);
typedef void*(*type_10)(void*, s32, s32);
typedef void*(*type_11)(s8*, s8*);
typedef s32(*type_12)(void*);
typedef u32(*type_13)(void*, u32, u32, void*);
typedef u32(*type_14)(void*, u32, u32, void*);
typedef u32(*type_15)(void*, u32, u32, void*);
typedef s32(*type_16)(void*);
typedef s8*(*type_17)(s8*, s32, void*);
typedef s32(*type_18)(s8*, void*);
typedef s32(*type_19)(void*, s32, s32);
typedef s32(*type_20)(void*);
typedef u32(*type_21)(void*, u32, u32, void*);
typedef s32(*type_22)(s8*);
typedef s32(*type_23)(void*);
typedef s8*(*type_25)(s8*, s32, void*);
typedef void*(*type_26)(void*, s32, s32);
typedef s32(*type_27)(void*);

typedef s8 type_5[256];
typedef s8 type_6[256];
typedef u32 type_7[4096];
typedef u8 type_24[10240];

struct RwModuleInfo
{
	s32 globalsOffset;
	s32 numInstances;
};

struct skyFile
{
	s32 gdfs;
	s32 POS;
	s32 SOF;
	type_24 readBuffer;
	u32 bufferPos;
	s32 bufferValid;
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
	s32 gdfsOpenFiles;
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

s32 SkyInstallFileSystem(s8* subdir);
void* _rwSkyFSClose(void* instance);
void* _rwSkyFSOpen(void* instance, s32 offset);
s32 skyFflush();
s32 skyFeof(void* fptr);
s32 skyFputs(s8* buffer, void* fptr);
s8* skyFgets(s8* buffer, s32 maxLen, void* fptr);
s32 skyFtell(void* fptr);
s32 skyFseek(void* fptr, s32 offset, s32 origin);
u32 skyFwrite(void* addr, u32 size, u32 count, void* fptr);
u32 skyFread(void* addr, u32 size, u32 count, void* fptr);
s32 skyFexist(s8* name);
s32 skyFclose(void* fptr);
void* skyFopen(s8* name, s8* access);
void* trySkyFopen(s8* fname, s8* access);
s32 skyTransMode(s8* access);

// 
// Start address: 0x1104a0
s32 SkyInstallFileSystem(s8* subdir)
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
void* _rwSkyFSOpen(void* instance, s32 offset)
{
	RwFileFunctions* FS;
}

// skyFflush__FPv
// Start address: 0x110770
s32 skyFflush()
{
}

// skyFeof__FPv
// Start address: 0x110780
s32 skyFeof(void* fptr)
{
	skyFile* fp;
}

// skyFputs__FPCcPv
// Start address: 0x1107d0
s32 skyFputs(s8* buffer, void* fptr)
{
	skyFile* fp;
	s32 i;
	s32 j;
}

// skyFgets__FPciPv
// Start address: 0x1108b0
s8* skyFgets(s8* buffer, s32 maxLen, void* fptr)
{
	skyFile* fp;
	s32 i;
	s32 numBytesRead;
}

// skyFtell__FPv
// Start address: 0x110a00
s32 skyFtell(void* fptr)
{
	skyFile* fp;
}

// skyFseek__FPvli
// Start address: 0x110a50
s32 skyFseek(void* fptr, s32 offset, s32 origin)
{
	skyFile* fp;
	s32 oldFPos;
	s32 bufStart;
	s32 noBuffer;
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x110bf0
u32 skyFwrite(void* addr, u32 size, u32 count, void* fptr)
{
	s32 bytesWritten;
	skyFile* fp;
	s32 numBytesToWrite;
}

// skyFread__FPvUiUiPv
// Start address: 0x110cf0
u32 skyFread(void* addr, u32 size, u32 count, void* fptr)
{
	skyFile* fp;
	u32 numBytesToRead;
	s32 bytesRead;
	s32 bytesRead2;
}

// skyFexist__FPCc
// Start address: 0x110e30
s32 skyFexist(s8* name)
{
	void* res;
}

// skyFclose__FPv
// Start address: 0x110ea0
s32 skyFclose(void* fptr)
{
	skyFile* fp;
}

// skyFopen__FPCcPCc
// Start address: 0x110f50
void* skyFopen(s8* name, s8* access)
{
	void* res;
}

// trySkyFopen__FPCcPCc
// Start address: 0x110f80
void* trySkyFopen(s8* fname, s8* access)
{
	skyFile* fp;
	s32 mode;
	type_5 name;
	s8* nameptr;
}

// skyTransMode__FPCc
// Start address: 0x1111e0
s32 skyTransMode(s8* access)
{
	s32 mode;
	s8* r;
	s8* w;
	s8* a;
	s8* plus;
	s8* n;
	s8* d;
}

