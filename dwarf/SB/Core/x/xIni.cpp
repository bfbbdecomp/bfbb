typedef struct xIniSection;
typedef struct xIniFile;
typedef struct xIniValue;


typedef int8 type_0[256];
typedef int8 type_1[256];
typedef uint32 type_2[4096];

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
};

struct xIniFile
{
	int32 NumValues;
	int32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	int8 name[256];
	int8 pathname[256];
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

uint32 ourGlobals[4096];

int8* xIniGetString(xIniFile* ini, int8* tok, int8* def);
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def);
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(int8* buf, int32 len);

// xIniGetString__FP8xIniFilePcPc
// Start address: 0x1ec930
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
	// Line 187, Address: 0x1ec930, Func Offset: 0
	// Line 188, Address: 0x1ec958, Func Offset: 0x28
	// Line 189, Address: 0x1ec9b8, Func Offset: 0x88
	// Line 190, Address: 0x1ec9c4, Func Offset: 0x94
	// Line 192, Address: 0x1ec9d0, Func Offset: 0xa0
	// Line 193, Address: 0x1ec9e0, Func Offset: 0xb0
	// Func End, Address: 0x1eca00, Func Offset: 0xd0
}

// xIniGetFloat__FP8xIniFilePcf
// Start address: 0x1eca00
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
	// Line 171, Address: 0x1eca00, Func Offset: 0
	// Line 172, Address: 0x1eca20, Func Offset: 0x20
	// Line 171, Address: 0x1eca24, Func Offset: 0x24
	// Line 172, Address: 0x1eca28, Func Offset: 0x28
	// Line 173, Address: 0x1eca88, Func Offset: 0x88
	// Line 174, Address: 0x1eca94, Func Offset: 0x94
	// Line 180, Address: 0x1ecaa0, Func Offset: 0xa0
	// Line 183, Address: 0x1ecac0, Func Offset: 0xc0
	// Func End, Address: 0x1ecae0, Func Offset: 0xe0
}

// xIniGetInt__FP8xIniFilePci
// Start address: 0x1ecae0
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
	// Line 160, Address: 0x1ecae0, Func Offset: 0
	// Line 161, Address: 0x1ecb08, Func Offset: 0x28
	// Line 162, Address: 0x1ecb68, Func Offset: 0x88
	// Line 163, Address: 0x1ecb74, Func Offset: 0x94
	// Line 165, Address: 0x1ecb80, Func Offset: 0xa0
	// Line 166, Address: 0x1ecb98, Func Offset: 0xb8
	// Func End, Address: 0x1ecbb8, Func Offset: 0xd8
}

// xIniDestroy__FP8xIniFile
// Start address: 0x1ecbc0
void xIniDestroy(xIniFile* ini)
{
	// Line 142, Address: 0x1ecbc0, Func Offset: 0
	// Line 143, Address: 0x1ecbdc, Func Offset: 0x1c
	// Line 144, Address: 0x1ecbe8, Func Offset: 0x28
	// Line 145, Address: 0x1ecbf4, Func Offset: 0x34
	// Func End, Address: 0x1ecc08, Func Offset: 0x48
}

// xIniParse__FPci
// Start address: 0x1ecc10
xIniFile* xIniParse(int8* buf, int32 len)
{
	int32 i;
	int32 ccr;
	int32 clf;
	int32 copen;
	int32 lastCRLF;
	int8* c;
	int8* lastLine;
	int8* line;
	int8* ltoken;
	xIniFile* ini;
	// Line 37, Address: 0x1ecc10, Func Offset: 0
	// Line 44, Address: 0x1ecc14, Func Offset: 0x4
	// Line 37, Address: 0x1ecc18, Func Offset: 0x8
	// Line 38, Address: 0x1ecc24, Func Offset: 0x14
	// Line 37, Address: 0x1ecc28, Func Offset: 0x18
	// Line 44, Address: 0x1ecc34, Func Offset: 0x24
	// Line 37, Address: 0x1ecc38, Func Offset: 0x28
	// Line 38, Address: 0x1ecc40, Func Offset: 0x30
	// Line 44, Address: 0x1ecc48, Func Offset: 0x38
	// Line 45, Address: 0x1ecc50, Func Offset: 0x40
	// Line 44, Address: 0x1ecc5c, Func Offset: 0x4c
	// Line 45, Address: 0x1ecc60, Func Offset: 0x50
	// Line 46, Address: 0x1ecc88, Func Offset: 0x78
	// Line 47, Address: 0x1ecc94, Func Offset: 0x84
	// Line 48, Address: 0x1ecca4, Func Offset: 0x94
	// Line 49, Address: 0x1eccac, Func Offset: 0x9c
	// Line 50, Address: 0x1eccc0, Func Offset: 0xb0
	// Line 54, Address: 0x1eccd0, Func Offset: 0xc0
	// Line 68, Address: 0x1eccfc, Func Offset: 0xec
	// Line 62, Address: 0x1ecd00, Func Offset: 0xf0
	// Line 65, Address: 0x1ecd04, Func Offset: 0xf4
	// Line 54, Address: 0x1ecd08, Func Offset: 0xf8
	// Line 66, Address: 0x1ecd0c, Func Offset: 0xfc
	// Line 67, Address: 0x1ecd10, Func Offset: 0x100
	// Line 68, Address: 0x1ecd18, Func Offset: 0x108
	// Line 69, Address: 0x1ecd1c, Func Offset: 0x10c
	// Line 72, Address: 0x1ecd30, Func Offset: 0x120
	// Line 68, Address: 0x1ecd38, Func Offset: 0x128
	// Line 69, Address: 0x1ecd40, Func Offset: 0x130
	// Line 72, Address: 0x1ecd48, Func Offset: 0x138
	// Line 73, Address: 0x1ecd50, Func Offset: 0x140
	// Line 74, Address: 0x1ecd54, Func Offset: 0x144
	// Line 75, Address: 0x1ecd5c, Func Offset: 0x14c
	// Line 77, Address: 0x1ecd68, Func Offset: 0x158
	// Line 80, Address: 0x1ecd70, Func Offset: 0x160
	// Line 81, Address: 0x1ecd84, Func Offset: 0x174
	// Line 82, Address: 0x1ecd8c, Func Offset: 0x17c
	// Line 86, Address: 0x1ecd9c, Func Offset: 0x18c
	// Line 89, Address: 0x1ecda8, Func Offset: 0x198
	// Line 92, Address: 0x1ece34, Func Offset: 0x224
	// Line 95, Address: 0x1ece48, Func Offset: 0x238
	// Line 96, Address: 0x1ece50, Func Offset: 0x240
	// Line 97, Address: 0x1ece64, Func Offset: 0x254
	// Line 98, Address: 0x1ece68, Func Offset: 0x258
	// Line 99, Address: 0x1ecef0, Func Offset: 0x2e0
	// Line 100, Address: 0x1ecefc, Func Offset: 0x2ec
	// Line 101, Address: 0x1ecf18, Func Offset: 0x308
	// Line 102, Address: 0x1ecf38, Func Offset: 0x328
	// Line 103, Address: 0x1ecf54, Func Offset: 0x344
	// Line 104, Address: 0x1ecf5c, Func Offset: 0x34c
	// Line 105, Address: 0x1ecf64, Func Offset: 0x354
	// Line 108, Address: 0x1ecf68, Func Offset: 0x358
	// Line 109, Address: 0x1ecf80, Func Offset: 0x370
	// Line 110, Address: 0x1ecf84, Func Offset: 0x374
	// Line 111, Address: 0x1ed008, Func Offset: 0x3f8
	// Line 112, Address: 0x1ed014, Func Offset: 0x404
	// Line 113, Address: 0x1ed018, Func Offset: 0x408
	// Line 114, Address: 0x1ed038, Func Offset: 0x428
	// Line 117, Address: 0x1ed0c0, Func Offset: 0x4b0
	// Line 118, Address: 0x1ed0d4, Func Offset: 0x4c4
	// Line 119, Address: 0x1ed0e8, Func Offset: 0x4d8
	// Line 120, Address: 0x1ed0f8, Func Offset: 0x4e8
	// Line 121, Address: 0x1ed100, Func Offset: 0x4f0
	// Line 126, Address: 0x1ed120, Func Offset: 0x510
	// Line 127, Address: 0x1ed134, Func Offset: 0x524
	// Line 128, Address: 0x1ed144, Func Offset: 0x534
	// Line 129, Address: 0x1ed154, Func Offset: 0x544
	// Line 131, Address: 0x1ed158, Func Offset: 0x548
	// Line 137, Address: 0x1ed160, Func Offset: 0x550
	// Line 138, Address: 0x1ed164, Func Offset: 0x554
	// Func End, Address: 0x1ed184, Func Offset: 0x574
}

