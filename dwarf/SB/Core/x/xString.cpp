typedef struct substr;


typedef uint8 type_0[32];
typedef uint8 type_1[32];
typedef uint8 type_2[32];

struct substr
{
	int8* text;
	uint32 size;
};


int8* find_char(substr& s, substr& cs);
uint32 atox(substr& s, uint32& read_size);
int32 icompare(substr& s1, substr& s2);
int32 imemcmp(void* d1, void* d2, uint32 size);
int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max);
int8* xStrupr(int8* string);
int32 xStricmp(int8* string1, int8* string2);
int8* xStrTokBuffer(int8* string, int8* control, void* buffer);
int8* xStrTok(int8* string, int8* control, int8** nextoken);
uint32 xStrHashCat(uint32 prefix, int8* str);
uint32 xStrHash(int8* s, uint32 size);
uint32 xStrHash(int8* str);

// find_char__FRC6substrRC6substr
// Start address: 0x20dda0
int8* find_char(substr& s, substr& cs)
{
	int8* p;
	int8* d;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int8* s;
}

// atox__FRC6substrRUi
// Start address: 0x20e410
uint32 atox(substr& s, uint32& read_size)
{
	int8* p;
	uint32 size;
	uint32 total;
	uint32 v;
}

// icompare__FRC6substrRC6substr
// Start address: 0x20e4e0
int32 icompare(substr& s1, substr& s2)
{
	uint32 len;
}

// imemcmp__FPCvPCvUi
// Start address: 0x20e5a0
int32 imemcmp(void* d1, void* d2, uint32 size)
{
	int8* s1;
	int8* s2;
	uint32 i;
}

// xStrParseFloatList__FPfPCci
// Start address: 0x20e610
int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max)
{
	int8* str;
	int32 index;
	int32 digits;
	int32 negate;
	int8* numstart;
}

// xStrupr__FPc
// Start address: 0x20e820
int8* xStrupr(int8* string)
{
	int8* p;
}

// xStricmp__FPCcPCc
// Start address: 0x20e880
int32 xStricmp(int8* string1, int8* string2)
{
	int32 result;
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x20e980
int8* xStrTokBuffer(int8* string, int8* control, void* buffer)
{
	int8** nextoken;
	int8* dest;
	uint8* str;
	uint8* ctrl;
	type_2 map;
	int32 count;
}

// xStrTok__FPcPCcPPc
// Start address: 0x20ead0
int8* xStrTok(int8* string, int8* control, int8** nextoken)
{
	uint8* str;
	uint8* ctrl;
	type_1 map;
	int32 count;
}

// xStrHashCat__FUiPCc
// Start address: 0x20ec10
uint32 xStrHashCat(uint32 prefix, int8* str)
{
	uint32 i;
	int8 c;
}

// xStrHash__FPCcUi
// Start address: 0x20ec70
uint32 xStrHash(int8* s, uint32 size)
{
	uint32 value;
	uint32 i;
	int8 c;
}

// xStrHash__FPCc
// Start address: 0x20ece0
uint32 xStrHash(int8* str)
{
	uint32 i;
	int8 c;
}

