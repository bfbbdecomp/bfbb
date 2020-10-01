typedef struct xIniSection;
typedef struct xIniFile;
typedef struct xIniValue;


typedef s8 type_0[256];
typedef s8 type_1[256];
typedef u32 type_2[4096];

struct xIniSection
{
	s8* sec;
	s32 first;
	s32 count;
};

struct xIniFile
{
	s32 NumValues;
	s32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_0 name;
	type_1 pathname;
};

struct xIniValue
{
	s8* tok;
	s8* val;
};

type_2 ourGlobals;

s8* xIniGetString(xIniFile* ini, s8* tok, s8* def);
f32 xIniGetFloat(xIniFile* ini, s8* tok, f32 def);
s32 xIniGetInt(xIniFile* ini, s8* tok, s32 def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(s8* buf, s32 len);

// xIniGetString__FP8xIniFilePcPc
// Start address: 0x1ec930
s8* xIniGetString(xIniFile* ini, s8* tok, s8* def)
{
}

// xIniGetFloat__FP8xIniFilePcf
// Start address: 0x1eca00
f32 xIniGetFloat(xIniFile* ini, s8* tok, f32 def)
{
}

// xIniGetInt__FP8xIniFilePci
// Start address: 0x1ecae0
s32 xIniGetInt(xIniFile* ini, s8* tok, s32 def)
{
}

// xIniDestroy__FP8xIniFile
// Start address: 0x1ecbc0
void xIniDestroy(xIniFile* ini)
{
}

// xIniParse__FPci
// Start address: 0x1ecc10
xIniFile* xIniParse(s8* buf, s32 len)
{
	s32 i;
	s32 ccr;
	s32 clf;
	s32 copen;
	s32 lastCRLF;
	s8* c;
	s8* lastLine;
	s8* line;
	s8* ltoken;
	xIniFile* ini;
}

