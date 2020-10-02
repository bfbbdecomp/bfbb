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
	type_0 name;
	type_1 pathname;
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

type_2 ourGlobals;

int8* xIniGetString(xIniFile* ini, int8* tok, int8* def);
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def);
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(int8* buf, int32 len);

// xIniGetString__FP8xIniFilePcPc
// Start address: 0x1ec930
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
}

// xIniGetFloat__FP8xIniFilePcf
// Start address: 0x1eca00
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
}

// xIniGetInt__FP8xIniFilePci
// Start address: 0x1ecae0
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
}

// xIniDestroy__FP8xIniFile
// Start address: 0x1ecbc0
void xIniDestroy(xIniFile* ini)
{
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
}

