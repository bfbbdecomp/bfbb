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
	// Line 596, Address: 0x20dda0, Func Offset: 0
	// Line 597, Address: 0x20dda4, Func Offset: 0x4
	// Line 601, Address: 0x20ddc0, Func Offset: 0x20
	// Line 615, Address: 0x20dde8, Func Offset: 0x48
	// Line 616, Address: 0x20de2c, Func Offset: 0x8c
	// Line 617, Address: 0x20de84, Func Offset: 0xe4
	// Line 618, Address: 0x20dee4, Func Offset: 0x144
	// Line 619, Address: 0x20df54, Func Offset: 0x1b4
	// Line 620, Address: 0x20dfcc, Func Offset: 0x22c
	// Line 621, Address: 0x20e054, Func Offset: 0x2b4
	// Line 622, Address: 0x20e0e4, Func Offset: 0x344
	// Line 623, Address: 0x20e184, Func Offset: 0x3e4
	// Line 624, Address: 0x20e22c, Func Offset: 0x48c
	// Line 625, Address: 0x20e2e4, Func Offset: 0x544
	// Line 628, Address: 0x20e3a4, Func Offset: 0x604
	// Line 629, Address: 0x20e3a8, Func Offset: 0x608
	// Line 631, Address: 0x20e3b0, Func Offset: 0x610
	// Line 632, Address: 0x20e3c0, Func Offset: 0x620
	// Line 633, Address: 0x20e3e0, Func Offset: 0x640
	// Line 634, Address: 0x20e3fc, Func Offset: 0x65c
	// Line 635, Address: 0x20e400, Func Offset: 0x660
	// Line 636, Address: 0x20e408, Func Offset: 0x668
	// Func End, Address: 0x20e410, Func Offset: 0x670
}

// atox__FRC6substrRUi
// Start address: 0x20e410
uint32 atox(substr& s, uint32& read_size)
{
	int8* p;
	uint32 size;
	uint32 total;
	uint32 v;
	// Line 577, Address: 0x20e410, Func Offset: 0
	// Line 579, Address: 0x20e414, Func Offset: 0x4
	// Line 581, Address: 0x20e428, Func Offset: 0x18
	// Line 582, Address: 0x20e438, Func Offset: 0x28
	// Line 586, Address: 0x20e454, Func Offset: 0x44
	// Line 587, Address: 0x20e470, Func Offset: 0x60
	// Line 588, Address: 0x20e490, Func Offset: 0x80
	// Line 590, Address: 0x20e4a8, Func Offset: 0x98
	// Line 591, Address: 0x20e4b0, Func Offset: 0xa0
	// Line 593, Address: 0x20e4d0, Func Offset: 0xc0
	// Func End, Address: 0x20e4d8, Func Offset: 0xc8
}

// icompare__FRC6substrRC6substr
// Start address: 0x20e4e0
int32 icompare(substr& s1, substr& s2)
{
	uint32 len;
	// Line 566, Address: 0x20e4e0, Func Offset: 0
	// Line 567, Address: 0x20e4e8, Func Offset: 0x8
	// Line 568, Address: 0x20e4f8, Func Offset: 0x18
	// Line 569, Address: 0x20e560, Func Offset: 0x80
	// Line 570, Address: 0x20e570, Func Offset: 0x90
	// Line 571, Address: 0x20e580, Func Offset: 0xa0
	// Line 573, Address: 0x20e598, Func Offset: 0xb8
	// Func End, Address: 0x20e5a0, Func Offset: 0xc0
}

// imemcmp__FPCvPCvUi
// Start address: 0x20e5a0
int32 imemcmp(void* d1, void* d2, uint32 size)
{
	int8* s1;
	int8* s2;
	uint32 i;
	// Line 557, Address: 0x20e5a0, Func Offset: 0
	// Line 559, Address: 0x20e5b4, Func Offset: 0x14
	// Line 560, Address: 0x20e5d0, Func Offset: 0x30
	// Line 561, Address: 0x20e5e0, Func Offset: 0x40
	// Line 562, Address: 0x20e5f8, Func Offset: 0x58
	// Line 563, Address: 0x20e600, Func Offset: 0x60
	// Func End, Address: 0x20e608, Func Offset: 0x68
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
	// Line 346, Address: 0x20e610, Func Offset: 0
	// Line 347, Address: 0x20e628, Func Offset: 0x18
	// Line 346, Address: 0x20e62c, Func Offset: 0x1c
	// Line 349, Address: 0x20e634, Func Offset: 0x24
	// Line 354, Address: 0x20e64c, Func Offset: 0x3c
	// Line 357, Address: 0x20e654, Func Offset: 0x44
	// Line 365, Address: 0x20e658, Func Offset: 0x48
	// Line 367, Address: 0x20e6c8, Func Offset: 0xb8
	// Line 371, Address: 0x20e6d8, Func Offset: 0xc8
	// Line 374, Address: 0x20e6e4, Func Offset: 0xd4
	// Line 375, Address: 0x20e6f0, Func Offset: 0xe0
	// Line 376, Address: 0x20e710, Func Offset: 0x100
	// Line 377, Address: 0x20e718, Func Offset: 0x108
	// Line 378, Address: 0x20e71c, Func Offset: 0x10c
	// Line 381, Address: 0x20e720, Func Offset: 0x110
	// Line 382, Address: 0x20e724, Func Offset: 0x114
	// Line 383, Address: 0x20e728, Func Offset: 0x118
	// Line 389, Address: 0x20e738, Func Offset: 0x128
	// Line 390, Address: 0x20e74c, Func Offset: 0x13c
	// Line 391, Address: 0x20e750, Func Offset: 0x140
	// Line 392, Address: 0x20e754, Func Offset: 0x144
	// Line 391, Address: 0x20e758, Func Offset: 0x148
	// Line 392, Address: 0x20e75c, Func Offset: 0x14c
	// Line 395, Address: 0x20e78c, Func Offset: 0x17c
	// Line 396, Address: 0x20e794, Func Offset: 0x184
	// Line 402, Address: 0x20e7a0, Func Offset: 0x190
	// Line 403, Address: 0x20e7a8, Func Offset: 0x198
	// Line 405, Address: 0x20e7c0, Func Offset: 0x1b0
	// Line 403, Address: 0x20e7c4, Func Offset: 0x1b4
	// Line 404, Address: 0x20e7c8, Func Offset: 0x1b8
	// Line 406, Address: 0x20e7cc, Func Offset: 0x1bc
	// Line 408, Address: 0x20e7f0, Func Offset: 0x1e0
	// Line 409, Address: 0x20e7f8, Func Offset: 0x1e8
	// Func End, Address: 0x20e81c, Func Offset: 0x20c
}

// xStrupr__FPc
// Start address: 0x20e820
int8* xStrupr(int8* string)
{
	int8* p;
	// Line 334, Address: 0x20e820, Func Offset: 0
	// Line 335, Address: 0x20e830, Func Offset: 0x10
	// Line 336, Address: 0x20e860, Func Offset: 0x40
	// Line 337, Address: 0x20e864, Func Offset: 0x44
	// Line 339, Address: 0x20e870, Func Offset: 0x50
	// Func End, Address: 0x20e878, Func Offset: 0x58
}

// xStricmp__FPCcPCc
// Start address: 0x20e880
int32 xStricmp(int8* string1, int8* string2)
{
	int32 result;
	// Line 309, Address: 0x20e880, Func Offset: 0
	// Line 310, Address: 0x20e888, Func Offset: 0x8
	// Line 312, Address: 0x20e898, Func Offset: 0x18
	// Line 313, Address: 0x20e8a0, Func Offset: 0x20
	// Line 314, Address: 0x20e8a4, Func Offset: 0x24
	// Line 316, Address: 0x20e8a8, Func Offset: 0x28
	// Line 320, Address: 0x20e918, Func Offset: 0x98
	// Line 323, Address: 0x20e920, Func Offset: 0xa0
	// Line 324, Address: 0x20e970, Func Offset: 0xf0
	// Line 327, Address: 0x20e974, Func Offset: 0xf4
	// Line 329, Address: 0x20e978, Func Offset: 0xf8
	// Func End, Address: 0x20e980, Func Offset: 0x100
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x20e980
int8* xStrTokBuffer(int8* string, int8* control, void* buffer)
{
	int8** nextoken;
	int8* dest;
	uint8* str;
	uint8* ctrl;
	uint8 map[32];
	int32 count;
	// Line 209, Address: 0x20e980, Func Offset: 0
	// Line 211, Address: 0x20e984, Func Offset: 0x4
	// Line 220, Address: 0x20e988, Func Offset: 0x8
	// Line 221, Address: 0x20e990, Func Offset: 0x10
	// Line 225, Address: 0x20e9bc, Func Offset: 0x3c
	// Line 221, Address: 0x20e9c0, Func Offset: 0x40
	// Line 226, Address: 0x20e9c4, Func Offset: 0x44
	// Line 225, Address: 0x20e9c8, Func Offset: 0x48
	// Line 226, Address: 0x20e9e0, Func Offset: 0x60
	// Line 225, Address: 0x20e9e4, Func Offset: 0x64
	// Line 226, Address: 0x20e9ec, Func Offset: 0x6c
	// Line 231, Address: 0x20e9f8, Func Offset: 0x78
	// Line 232, Address: 0x20ea00, Func Offset: 0x80
	// Line 239, Address: 0x20ea08, Func Offset: 0x88
	// Line 240, Address: 0x20ea10, Func Offset: 0x90
	// Line 246, Address: 0x20ea50, Func Offset: 0xd0
	// Line 247, Address: 0x20ea58, Func Offset: 0xd8
	// Line 246, Address: 0x20ea5c, Func Offset: 0xdc
	// Line 247, Address: 0x20ea64, Func Offset: 0xe4
	// Line 249, Address: 0x20ea8c, Func Offset: 0x10c
	// Line 250, Address: 0x20ea94, Func Offset: 0x114
	// Line 251, Address: 0x20ea98, Func Offset: 0x118
	// Line 253, Address: 0x20ea9c, Func Offset: 0x11c
	// Line 256, Address: 0x20eab0, Func Offset: 0x130
	// Line 263, Address: 0x20eab4, Func Offset: 0x134
	// Line 266, Address: 0x20eac8, Func Offset: 0x148
	// Func End, Address: 0x20ead0, Func Offset: 0x150
}

// xStrTok__FPcPCcPPc
// Start address: 0x20ead0
int8* xStrTok(int8* string, int8* control, int8** nextoken)
{
	uint8* str;
	uint8* ctrl;
	uint8 map[32];
	int32 count;
	// Line 90, Address: 0x20ead0, Func Offset: 0
	// Line 98, Address: 0x20ead4, Func Offset: 0x4
	// Line 99, Address: 0x20eae0, Func Offset: 0x10
	// Line 103, Address: 0x20eb0c, Func Offset: 0x3c
	// Line 99, Address: 0x20eb10, Func Offset: 0x40
	// Line 104, Address: 0x20eb14, Func Offset: 0x44
	// Line 103, Address: 0x20eb18, Func Offset: 0x48
	// Line 104, Address: 0x20eb30, Func Offset: 0x60
	// Line 103, Address: 0x20eb34, Func Offset: 0x64
	// Line 104, Address: 0x20eb3c, Func Offset: 0x6c
	// Line 109, Address: 0x20eb48, Func Offset: 0x78
	// Line 110, Address: 0x20eb50, Func Offset: 0x80
	// Line 117, Address: 0x20eb58, Func Offset: 0x88
	// Line 118, Address: 0x20eb60, Func Offset: 0x90
	// Line 124, Address: 0x20eba0, Func Offset: 0xd0
	// Line 125, Address: 0x20eba8, Func Offset: 0xd8
	// Line 124, Address: 0x20ebac, Func Offset: 0xdc
	// Line 125, Address: 0x20ebb4, Func Offset: 0xe4
	// Line 126, Address: 0x20ebdc, Func Offset: 0x10c
	// Line 127, Address: 0x20ebe0, Func Offset: 0x110
	// Line 128, Address: 0x20ebe8, Func Offset: 0x118
	// Line 135, Address: 0x20ebf8, Func Offset: 0x128
	// Line 138, Address: 0x20ec08, Func Offset: 0x138
	// Func End, Address: 0x20ec10, Func Offset: 0x140
}

// xStrHashCat__FUiPCc
// Start address: 0x20ec10
uint32 xStrHashCat(uint32 prefix, int8* str)
{
	uint32 i;
	int8 c;
	// Line 73, Address: 0x20ec10, Func Offset: 0
	// Line 76, Address: 0x20ec20, Func Offset: 0x10
	// Line 79, Address: 0x20ec24, Func Offset: 0x14
	// Line 80, Address: 0x20ec48, Func Offset: 0x38
	// Line 79, Address: 0x20ec4c, Func Offset: 0x3c
	// Line 80, Address: 0x20ec50, Func Offset: 0x40
	// Line 82, Address: 0x20ec60, Func Offset: 0x50
	// Func End, Address: 0x20ec68, Func Offset: 0x58
}

// xStrHash__FPCcUi
// Start address: 0x20ec70
uint32 xStrHash(int8* s, uint32 size)
{
	uint32 value;
	uint32 i;
	int8 c;
	// Line 58, Address: 0x20ec70, Func Offset: 0
	// Line 59, Address: 0x20ec74, Func Offset: 0x4
	// Line 62, Address: 0x20ec80, Func Offset: 0x10
	// Line 64, Address: 0x20ec84, Func Offset: 0x14
	// Line 65, Address: 0x20eca8, Func Offset: 0x38
	// Line 64, Address: 0x20ecac, Func Offset: 0x3c
	// Line 65, Address: 0x20ecb0, Func Offset: 0x40
	// Line 67, Address: 0x20ecd0, Func Offset: 0x60
	// Func End, Address: 0x20ecd8, Func Offset: 0x68
}

// xStrHash__FPCc
// Start address: 0x20ece0
uint32 xStrHash(int8* str)
{
	uint32 i;
	int8 c;
	// Line 44, Address: 0x20ece0, Func Offset: 0
	// Line 47, Address: 0x20ecf0, Func Offset: 0x10
	// Line 50, Address: 0x20ecf4, Func Offset: 0x14
	// Line 51, Address: 0x20ed18, Func Offset: 0x38
	// Line 50, Address: 0x20ed1c, Func Offset: 0x3c
	// Line 51, Address: 0x20ed20, Func Offset: 0x40
	// Line 53, Address: 0x20ed30, Func Offset: 0x50
	// Func End, Address: 0x20ed38, Func Offset: 0x58
}

