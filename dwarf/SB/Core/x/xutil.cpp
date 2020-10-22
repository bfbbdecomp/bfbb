typedef struct DoubleChar;
typedef struct SJIS_STRUCT;


typedef int8 type_0[16];
typedef int8 type_1[10];
typedef int8 type_2[10][6];
typedef uint16 type_3[33];
typedef int8 type_4[0];
typedef uint32 type_5[256];
typedef uint16 type_6[33];
typedef uint16 type_7[2];
typedef uint16 type_8[2][3];

struct DoubleChar
{
	uint8 byte1;
	uint8 byte2;
};

struct SJIS_STRUCT
{
	union
	{
		uint16 sjisChar;
		DoubleChar doubleChar;
	};
};

int32 g_xutilinit;
int32 g_crc_needinit;
uint32 g_crc32_table[256];
uint16 ascii_table[2][3];
uint16 ascii_k_table[33];
uint16 ascii_special_table[33];
int8 _ctype_[0];

void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref);
int32 xUtil_yesno(float32 wt_yes);
uint8 itoBCD(uint16 dec);
uint8 itoBCD(uint8 dec);
uint8 BCDtoi(uint8 hex);
void strtosjis(uint8* string, uint8* dest);
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize);
uint32 xUtil_crc_init();
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx);
int32 xUtilShutdown();
int32 xUtilStartup();

// xUtil_wtadjust__FPfif
// Start address: 0x20fc00
void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref)
{
	int32 i;
	float32 sum;
	float32 fac;
	// Line 762, Address: 0x20fc00, Func Offset: 0
	// Line 769, Address: 0x20fc04, Func Offset: 0x4
	// Line 771, Address: 0x20fc14, Func Offset: 0x14
	// Line 769, Address: 0x20fc18, Func Offset: 0x18
	// Line 771, Address: 0x20fc1c, Func Offset: 0x1c
	// Line 773, Address: 0x20fc30, Func Offset: 0x30
	// Line 772, Address: 0x20fc34, Func Offset: 0x34
	// Line 773, Address: 0x20fc38, Func Offset: 0x38
	// Line 772, Address: 0x20fc3c, Func Offset: 0x3c
	// Line 773, Address: 0x20fc40, Func Offset: 0x40
	// Line 776, Address: 0x20fc48, Func Offset: 0x48
	// Line 775, Address: 0x20fc4c, Func Offset: 0x4c
	// Line 776, Address: 0x20fc58, Func Offset: 0x58
	// Line 785, Address: 0x20fd10, Func Offset: 0x110
	// Func End, Address: 0x20fd18, Func Offset: 0x118
}

// xUtil_yesno__Ff
// Start address: 0x20fd20
int32 xUtil_yesno(float32 wt_yes)
{
	// Line 715, Address: 0x20fd20, Func Offset: 0
	// Line 718, Address: 0x20fd28, Func Offset: 0x8
	// Line 715, Address: 0x20fd2c, Func Offset: 0xc
	// Line 718, Address: 0x20fd34, Func Offset: 0x14
	// Line 719, Address: 0x20fd48, Func Offset: 0x28
	// Line 720, Address: 0x20fd68, Func Offset: 0x48
	// Line 722, Address: 0x20fd88, Func Offset: 0x68
	// Func End, Address: 0x20fd98, Func Offset: 0x78
}

// itoBCD__FUs
// Start address: 0x20fda0
uint8 itoBCD(uint16 dec)
{
	int32 ones;
	// Line 701, Address: 0x20fda4, Func Offset: 0x4
	// Line 705, Address: 0x20fdac, Func Offset: 0xc
	// Line 701, Address: 0x20fdb4, Func Offset: 0x14
	// Line 705, Address: 0x20fdb8, Func Offset: 0x18
	// Line 706, Address: 0x20fdf8, Func Offset: 0x58
	// Func End, Address: 0x20fe00, Func Offset: 0x60
}

// itoBCD__FUc
// Start address: 0x20fe00
uint8 itoBCD(uint8 dec)
{
	int32 ones;
	// Line 695, Address: 0x20fe04, Func Offset: 0x4
	// Line 697, Address: 0x20fe0c, Func Offset: 0xc
	// Line 695, Address: 0x20fe14, Func Offset: 0x14
	// Line 697, Address: 0x20fe18, Func Offset: 0x18
	// Line 698, Address: 0x20fe58, Func Offset: 0x58
	// Func End, Address: 0x20fe60, Func Offset: 0x60
}

// BCDtoi__FUc
// Start address: 0x20fe60
uint8 BCDtoi(uint8 hex)
{
	int8 c[16];
	// Line 688, Address: 0x20fe60, Func Offset: 0
	// Line 690, Address: 0x20fe64, Func Offset: 0x4
	// Line 688, Address: 0x20fe6c, Func Offset: 0xc
	// Line 690, Address: 0x20fe70, Func Offset: 0x10
	// Line 691, Address: 0x20fe7c, Func Offset: 0x1c
	// Line 692, Address: 0x20fe84, Func Offset: 0x24
	// Line 691, Address: 0x20fe88, Func Offset: 0x28
	// Line 692, Address: 0x20fe8c, Func Offset: 0x2c
	// Func End, Address: 0x20fe94, Func Offset: 0x34
}

// strtosjis__FPUcPUc
// Start address: 0x20fea0
void strtosjis(uint8* string, uint8* dest)
{
	int32 i;
	int32 sjis_code;
	int32 ascii_code;
	uint8 stmp;
	uint8 stmp2;
	uint8* dest2;
	// Line 540, Address: 0x20fea0, Func Offset: 0
	// Line 553, Address: 0x20fec0, Func Offset: 0x20
	// Line 540, Address: 0x20fec4, Func Offset: 0x24
	// Line 546, Address: 0x20fec8, Func Offset: 0x28
	// Line 556, Address: 0x20fecc, Func Offset: 0x2c
	// Line 560, Address: 0x20fed0, Func Offset: 0x30
	// Line 561, Address: 0x20fed4, Func Offset: 0x34
	// Line 564, Address: 0x20ff24, Func Offset: 0x84
	// Line 566, Address: 0x20ff30, Func Offset: 0x90
	// Line 567, Address: 0x20ff34, Func Offset: 0x94
	// Line 565, Address: 0x20ff38, Func Offset: 0x98
	// Line 567, Address: 0x20ff3c, Func Offset: 0x9c
	// Line 568, Address: 0x20ff50, Func Offset: 0xb0
	// Line 570, Address: 0x20ff58, Func Offset: 0xb8
	// Line 571, Address: 0x20ff6c, Func Offset: 0xcc
	// Line 573, Address: 0x20ff78, Func Offset: 0xd8
	// Line 574, Address: 0x20ff8c, Func Offset: 0xec
	// Line 576, Address: 0x20ff98, Func Offset: 0xf8
	// Line 577, Address: 0x20ffac, Func Offset: 0x10c
	// Line 579, Address: 0x20ffb8, Func Offset: 0x118
	// Line 580, Address: 0x20ffcc, Func Offset: 0x12c
	// Line 582, Address: 0x20ffd8, Func Offset: 0x138
	// Line 583, Address: 0x20ffec, Func Offset: 0x14c
	// Line 585, Address: 0x20fff8, Func Offset: 0x158
	// Line 586, Address: 0x21000c, Func Offset: 0x16c
	// Line 588, Address: 0x210018, Func Offset: 0x178
	// Line 589, Address: 0x210028, Func Offset: 0x188
	// Line 592, Address: 0x210030, Func Offset: 0x190
	// Line 593, Address: 0x210038, Func Offset: 0x198
	// Line 595, Address: 0x210074, Func Offset: 0x1d4
	// Line 600, Address: 0x210088, Func Offset: 0x1e8
	// Line 601, Address: 0x210094, Func Offset: 0x1f4
	// Line 602, Address: 0x21009c, Func Offset: 0x1fc
	// Line 603, Address: 0x2100a8, Func Offset: 0x208
	// Func End, Address: 0x2100c8, Func Offset: 0x228
}

// xUtil_crc_update__FUiPci
// Start address: 0x2100d0
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize)
{
	int32 i;
	int32 j;
	// Line 513, Address: 0x2100d0, Func Offset: 0
	// Line 519, Address: 0x2100ec, Func Offset: 0x1c
	// Line 521, Address: 0x2100f8, Func Offset: 0x28
	// Line 524, Address: 0x210100, Func Offset: 0x30
	// Line 526, Address: 0x210118, Func Offset: 0x48
	// Line 525, Address: 0x210120, Func Offset: 0x50
	// Line 526, Address: 0x210128, Func Offset: 0x58
	// Line 525, Address: 0x210144, Func Offset: 0x74
	// Line 526, Address: 0x210148, Func Offset: 0x78
	// Line 525, Address: 0x21014c, Func Offset: 0x7c
	// Line 526, Address: 0x210150, Func Offset: 0x80
	// Line 525, Address: 0x21016c, Func Offset: 0x9c
	// Line 526, Address: 0x210170, Func Offset: 0xa0
	// Line 525, Address: 0x210178, Func Offset: 0xa8
	// Line 526, Address: 0x21017c, Func Offset: 0xac
	// Line 525, Address: 0x21018c, Func Offset: 0xbc
	// Line 526, Address: 0x210190, Func Offset: 0xc0
	// Line 525, Address: 0x210198, Func Offset: 0xc8
	// Line 526, Address: 0x21019c, Func Offset: 0xcc
	// Line 525, Address: 0x2101ac, Func Offset: 0xdc
	// Line 526, Address: 0x2101b0, Func Offset: 0xe0
	// Line 525, Address: 0x2101b8, Func Offset: 0xe8
	// Line 526, Address: 0x2101bc, Func Offset: 0xec
	// Line 525, Address: 0x2101cc, Func Offset: 0xfc
	// Line 526, Address: 0x2101d0, Func Offset: 0x100
	// Line 525, Address: 0x2101d8, Func Offset: 0x108
	// Line 526, Address: 0x2101dc, Func Offset: 0x10c
	// Line 525, Address: 0x2101ec, Func Offset: 0x11c
	// Line 526, Address: 0x2101f0, Func Offset: 0x120
	// Line 525, Address: 0x2101f8, Func Offset: 0x128
	// Line 526, Address: 0x2101fc, Func Offset: 0x12c
	// Line 525, Address: 0x21020c, Func Offset: 0x13c
	// Line 526, Address: 0x210210, Func Offset: 0x140
	// Line 525, Address: 0x210218, Func Offset: 0x148
	// Line 526, Address: 0x21021c, Func Offset: 0x14c
	// Line 525, Address: 0x21022c, Func Offset: 0x15c
	// Line 526, Address: 0x210230, Func Offset: 0x160
	// Line 525, Address: 0x210238, Func Offset: 0x168
	// Line 526, Address: 0x21023c, Func Offset: 0x16c
	// Line 525, Address: 0x210264, Func Offset: 0x194
	// Line 527, Address: 0x210268, Func Offset: 0x198
	// Line 526, Address: 0x21026c, Func Offset: 0x19c
	// Line 527, Address: 0x210270, Func Offset: 0x1a0
	// Line 526, Address: 0x210274, Func Offset: 0x1a4
	// Line 525, Address: 0x21027c, Func Offset: 0x1ac
	// Line 526, Address: 0x210280, Func Offset: 0x1b0
	// Line 527, Address: 0x21028c, Func Offset: 0x1bc
	// Line 529, Address: 0x210298, Func Offset: 0x1c8
	// Line 530, Address: 0x21029c, Func Offset: 0x1cc
	// Func End, Address: 0x2102b4, Func Offset: 0x1e4
}

// xUtil_crc_init__Fv
// Start address: 0x2102c0
uint32 xUtil_crc_init()
{
	int32 i;
	int32 j;
	uint32 crc_accum;
	// Line 484, Address: 0x2102c0, Func Offset: 0
	// Line 487, Address: 0x2102cc, Func Offset: 0xc
	// Line 493, Address: 0x2102d4, Func Offset: 0x14
	// Line 492, Address: 0x2102d8, Func Offset: 0x18
	// Line 493, Address: 0x2102dc, Func Offset: 0x1c
	// Line 492, Address: 0x2102e0, Func Offset: 0x20
	// Line 487, Address: 0x2102e4, Func Offset: 0x24
	// Line 489, Address: 0x2102e8, Func Offset: 0x28
	// Line 491, Address: 0x2102ec, Func Offset: 0x2c
	// Line 492, Address: 0x2102f0, Func Offset: 0x30
	// Line 494, Address: 0x210304, Func Offset: 0x44
	// Line 496, Address: 0x210310, Func Offset: 0x50
	// Line 498, Address: 0x210314, Func Offset: 0x54
	// Line 501, Address: 0x210328, Func Offset: 0x68
	// Line 500, Address: 0x21032c, Func Offset: 0x6c
	// Line 501, Address: 0x210330, Func Offset: 0x70
	// Line 503, Address: 0x21033c, Func Offset: 0x7c
	// Line 507, Address: 0x210340, Func Offset: 0x80
	// Func End, Address: 0x210348, Func Offset: 0x88
}

// xUtil_idtag2string__FUii
// Start address: 0x210350
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx)
{
	uint32 tag;
	int8* strptr;
	int8* uc;
	int32 l;
	int8 t;
	int8 buf[10][6];
	// Line 204, Address: 0x210350, Func Offset: 0
	// Line 205, Address: 0x210354, Func Offset: 0x4
	// Line 211, Address: 0x210358, Func Offset: 0x8
	// Line 212, Address: 0x210380, Func Offset: 0x30
	// Line 217, Address: 0x210398, Func Offset: 0x48
	// Line 223, Address: 0x2103a0, Func Offset: 0x50
	// Line 226, Address: 0x2103ac, Func Offset: 0x5c
	// Line 227, Address: 0x2103bc, Func Offset: 0x6c
	// Line 228, Address: 0x2103cc, Func Offset: 0x7c
	// Line 231, Address: 0x2103d0, Func Offset: 0x80
	// Line 234, Address: 0x2103f4, Func Offset: 0xa4
	// Line 231, Address: 0x2103f8, Func Offset: 0xa8
	// Line 235, Address: 0x2103fc, Func Offset: 0xac
	// Line 236, Address: 0x210428, Func Offset: 0xd8
	// Line 235, Address: 0x21042c, Func Offset: 0xdc
	// Line 236, Address: 0x210430, Func Offset: 0xe0
	// Line 237, Address: 0x210458, Func Offset: 0x108
	// Line 236, Address: 0x21045c, Func Offset: 0x10c
	// Line 237, Address: 0x210460, Func Offset: 0x110
	// Line 238, Address: 0x210488, Func Offset: 0x138
	// Line 237, Address: 0x21048c, Func Offset: 0x13c
	// Line 238, Address: 0x210490, Func Offset: 0x140
	// Line 239, Address: 0x2104b8, Func Offset: 0x168
	// Line 247, Address: 0x2104c4, Func Offset: 0x174
	// Line 248, Address: 0x2104f0, Func Offset: 0x1a0
	// Line 247, Address: 0x2104f4, Func Offset: 0x1a4
	// Line 248, Address: 0x2104f8, Func Offset: 0x1a8
	// Line 249, Address: 0x210520, Func Offset: 0x1d0
	// Line 248, Address: 0x210524, Func Offset: 0x1d4
	// Line 249, Address: 0x210528, Func Offset: 0x1d8
	// Line 250, Address: 0x210550, Func Offset: 0x200
	// Line 249, Address: 0x210554, Func Offset: 0x204
	// Line 250, Address: 0x210558, Func Offset: 0x208
	// Line 257, Address: 0x210580, Func Offset: 0x230
	// Line 258, Address: 0x21058c, Func Offset: 0x23c
	// Line 261, Address: 0x210590, Func Offset: 0x240
	// Line 258, Address: 0x210594, Func Offset: 0x244
	// Line 261, Address: 0x210598, Func Offset: 0x248
	// Line 258, Address: 0x21059c, Func Offset: 0x24c
	// Line 261, Address: 0x2105a0, Func Offset: 0x250
	// Line 262, Address: 0x2105c4, Func Offset: 0x274
	// Line 261, Address: 0x2105c8, Func Offset: 0x278
	// Line 262, Address: 0x2105cc, Func Offset: 0x27c
	// Line 263, Address: 0x2105f4, Func Offset: 0x2a4
	// Line 262, Address: 0x2105f8, Func Offset: 0x2a8
	// Line 263, Address: 0x2105fc, Func Offset: 0x2ac
	// Line 264, Address: 0x210624, Func Offset: 0x2d4
	// Line 263, Address: 0x210628, Func Offset: 0x2d8
	// Line 264, Address: 0x21062c, Func Offset: 0x2dc
	// Line 266, Address: 0x210654, Func Offset: 0x304
	// Line 270, Address: 0x210658, Func Offset: 0x308
	// Func End, Address: 0x210660, Func Offset: 0x310
}

// xUtilShutdown__Fv
// Start address: 0x210660
int32 xUtilShutdown()
{
	// Line 186, Address: 0x210660, Func Offset: 0
	// Line 196, Address: 0x21066c, Func Offset: 0xc
	// Func End, Address: 0x210674, Func Offset: 0x14
}

// xUtilStartup__Fv
// Start address: 0x210680
int32 xUtilStartup()
{
	// Line 165, Address: 0x210680, Func Offset: 0
	// Line 167, Address: 0x210688, Func Offset: 0x8
	// Line 173, Address: 0x210698, Func Offset: 0x18
	// Line 181, Address: 0x2106a0, Func Offset: 0x20
	// Line 180, Address: 0x2106a4, Func Offset: 0x24
	// Line 181, Address: 0x2106a8, Func Offset: 0x28
	// Func End, Address: 0x2106b0, Func Offset: 0x30
}

