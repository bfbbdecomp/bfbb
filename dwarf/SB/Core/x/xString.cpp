typedef struct substr;


typedef u8 type_0[32];
typedef u8 type_1[32];
typedef u8 type_2[32];

struct substr
{
	s8* text;
	u32 size;
};


s8* find_char(substr& s, substr& cs);
u32 atox(substr& s, u32& read_size);
s32 icompare(substr& s1, substr& s2);
s32 imemcmp(void* d1, void* d2, u32 size);
s32 xStrParseFloatList(f32* dest, s8* strbuf, s32 max);
s8* xStrupr(s8* string);
s32 xStricmp(s8* string1, s8* string2);
s8* xStrTokBuffer(s8* string, s8* control, void* buffer);
s8* xStrTok(s8* string, s8* control, s8** nextoken);
u32 xStrHashCat(u32 prefix, s8* str);
u32 xStrHash(s8* s, u32 size);
u32 xStrHash(s8* str);

// find_char__FRC6substrRC6substr
// Start address: 0x20dda0
s8* find_char(substr& s, substr& cs)
{
	s8* p;
	s8* d;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s32 i;
	s8* s;
}

// atox__FRC6substrRUi
// Start address: 0x20e410
u32 atox(substr& s, u32& read_size)
{
	s8* p;
	u32 size;
	u32 total;
	u32 v;
}

// icompare__FRC6substrRC6substr
// Start address: 0x20e4e0
s32 icompare(substr& s1, substr& s2)
{
	u32 len;
}

// imemcmp__FPCvPCvUi
// Start address: 0x20e5a0
s32 imemcmp(void* d1, void* d2, u32 size)
{
	s8* s1;
	s8* s2;
	u32 i;
}

// xStrParseFloatList__FPfPCci
// Start address: 0x20e610
s32 xStrParseFloatList(f32* dest, s8* strbuf, s32 max)
{
	s8* str;
	s32 index;
	s32 digits;
	s32 negate;
	s8* numstart;
}

// xStrupr__FPc
// Start address: 0x20e820
s8* xStrupr(s8* string)
{
	s8* p;
}

// xStricmp__FPCcPCc
// Start address: 0x20e880
s32 xStricmp(s8* string1, s8* string2)
{
	s32 result;
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x20e980
s8* xStrTokBuffer(s8* string, s8* control, void* buffer)
{
	s8** nextoken;
	s8* dest;
	u8* str;
	u8* ctrl;
	type_2 map;
	s32 count;
}

// xStrTok__FPcPCcPPc
// Start address: 0x20ead0
s8* xStrTok(s8* string, s8* control, s8** nextoken)
{
	u8* str;
	u8* ctrl;
	type_1 map;
	s32 count;
}

// xStrHashCat__FUiPCc
// Start address: 0x20ec10
u32 xStrHashCat(u32 prefix, s8* str)
{
	u32 i;
	s8 c;
}

// xStrHash__FPCcUi
// Start address: 0x20ec70
u32 xStrHash(s8* s, u32 size)
{
	u32 value;
	u32 i;
	s8 c;
}

// xStrHash__FPCc
// Start address: 0x20ece0
u32 xStrHash(s8* str)
{
	u32 i;
	s8 c;
}

