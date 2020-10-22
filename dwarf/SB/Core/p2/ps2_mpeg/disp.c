typedef struct tGS_BGCOLOR;
typedef struct VoData;
typedef struct sceGsXyz;
typedef struct VoTag;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef struct sceGsScissor;
typedef struct VoBuf;
typedef struct tGS_DISPFB2;
typedef struct sceGsClear;
typedef struct sceGsZbuf;
typedef struct sceGsPrim;
typedef struct _sceDmaTag;
typedef struct sceGsFrame;
typedef struct sceGsDispEnv;
typedef struct sceGsDBuff;
typedef struct tGS_DISPLAY2;
typedef struct sceGsDrawEnv1;
typedef struct tD_CHCR;
typedef struct sceGsTest;
typedef struct sceGsDthe;
typedef struct sceDmaChan;
typedef struct sceGifPacket;
typedef struct sceGsPrmodecont;
typedef struct tGS_PMODE;
typedef struct sceGsXyoffset;
typedef struct sceGsColclamp;
typedef struct sceGsRgbaq;


typedef uint32 type_0[4];
typedef uint8 type_1[1228800];
typedef uint32 type_2[3];
typedef <unknown fundamental type (0xa510)> type_3[6];
typedef int32 type_4[15];
typedef uint32 type_5[29248];
typedef uint32 type_6[29248][2];
typedef uint32 type_7[2];
typedef ulong32 type_8[2];
typedef ulong32 type_9[2];
typedef ulong32 type_10[2];
typedef sceGsDispEnv type_11[2];
typedef uint32 type_12[3];
typedef uint32 type_13[3];
typedef uint32 type_14[3];
typedef uint32 type_15[3];
typedef uint32 type_16[3];
typedef uint32 type_17[3];
typedef uint32 type_18[4];

struct tGS_BGCOLOR
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 p0 : 8;
	};
	uint32 p1;
};

struct VoData
{
	uint8 v[1228800];
};

struct sceGsXyz
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 32;
	};
};

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[29248][2];
};

struct tGS_SMODE2
{
	struct
	{
		uint32 INT : 1;
		uint32 FFMD : 1;
		uint32 DPMS : 2;
		uint32 p0 : 28;
	};
	uint32 p1;
};

struct sceGifTag
{
	struct
	{
		ulong32 NLOOP : 15;
		ulong32 EOP : 1;
		ulong32 pad16 : 16;
		ulong32 id : 14;
		ulong32 PRE : 1;
		ulong32 PRIM : 11;
		ulong32 FLG : 2;
		ulong32 NREG : 4;
	};
	struct
	{
		ulong32 REGS0 : 4;
		ulong32 REGS1 : 4;
		ulong32 REGS2 : 4;
		ulong32 REGS3 : 4;
		ulong32 REGS4 : 4;
		ulong32 REGS5 : 4;
		ulong32 REGS6 : 4;
		ulong32 REGS7 : 4;
		ulong32 REGS8 : 4;
		ulong32 REGS9 : 4;
		ulong32 REGS10 : 4;
		ulong32 REGS11 : 4;
		ulong32 REGS12 : 4;
		ulong32 REGS13 : 4;
		ulong32 REGS14 : 4;
		ulong32 REGS15 : 4;
	};
};

struct sceGsScissor
{
	struct
	{
		ulong32 SCAX0 : 11;
		ulong32 pad11 : 5;
		ulong32 SCAX1 : 11;
		ulong32 pad27 : 5;
		ulong32 SCAY0 : 11;
		ulong32 pad43 : 5;
		ulong32 SCAY1 : 11;
		ulong32 pad59 : 5;
	};
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct tGS_DISPFB2
{
	struct
	{
		uint32 FBP : 9;
		uint32 FBW : 6;
		uint32 PSM : 5;
		uint32 p0 : 12;
	};
	struct
	{
		uint32 DBX : 11;
		uint32 DBY : 11;
		uint32 p1 : 10;
	};
};

struct sceGsClear
{
	sceGsTest testa;
	long32 testaaddr;
	sceGsPrim prim;
	long32 primaddr;
	sceGsRgbaq rgbaq;
	long32 rgbaqaddr;
	sceGsXyz xyz2a;
	long32 xyz2aaddr;
	sceGsXyz xyz2b;
	long32 xyz2baddr;
	sceGsTest testb;
	long32 testbaddr;
};

struct sceGsZbuf
{
	struct
	{
		ulong32 ZBP : 9;
		ulong32 pad09 : 15;
		ulong32 PSM : 4;
		ulong32 pad28 : 4;
		ulong32 ZMSK : 1;
		ulong32 pad33 : 31;
	};
};

struct sceGsPrim
{
	struct
	{
		ulong32 PRIM : 3;
		ulong32 IIP : 1;
		ulong32 TME : 1;
		ulong32 FGE : 1;
		ulong32 ABE : 1;
		ulong32 AA1 : 1;
		ulong32 FST : 1;
		ulong32 CTXT : 1;
		ulong32 FIX : 1;
		ulong32 pad11 : 53;
	};
};

struct _sceDmaTag
{
	uint16 qwc;
	uint8 mark;
	uint8 id;
	_sceDmaTag* next;
	uint32 p[2];
};

struct sceGsFrame
{
	struct
	{
		ulong32 FBP : 9;
		ulong32 pad09 : 7;
		ulong32 FBW : 6;
		ulong32 pad22 : 2;
		ulong32 PSM : 6;
		ulong32 pad30 : 2;
		ulong32 FBMSK : 32;
	};
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct sceGsDBuff
{
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

struct tGS_DISPLAY2
{
	struct
	{
		uint32 DX : 12;
		uint32 DY : 11;
		uint32 MAGH : 4;
		uint32 MAGV : 2;
		uint32 p0 : 3;
	};
	struct
	{
		uint32 DW : 12;
		uint32 DH : 11;
		uint32 p1 : 9;
	};
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	ulong32 frame1addr;
	sceGsZbuf zbuf1;
	long32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	long32 xyoffset1addr;
	sceGsScissor scissor1;
	long32 scissor1addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test1;
	long32 test1addr;
};

struct tD_CHCR
{
	struct
	{
		uint32 DIR : 1;
		uint32 p0 : 1;
		uint32 MOD : 2;
		uint32 ASP : 2;
		uint32 TTE : 1;
		uint32 TIE : 1;
		uint32 STR : 1;
		uint32 p1 : 7;
		uint32 TAG : 16;
	};
};

struct sceGsTest
{
	struct
	{
		ulong32 ATE : 1;
		ulong32 ATST : 3;
		ulong32 AREF : 8;
		ulong32 AFAIL : 2;
		ulong32 DATE : 1;
		ulong32 DATM : 1;
		ulong32 ZTE : 1;
		ulong32 ZTST : 2;
		ulong32 pad19 : 45;
	};
};

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
	};
};

struct sceDmaChan
{
	tD_CHCR chcr;
	uint32 p0[3];
	void* madr;
	uint32 p1[3];
	uint32 qwc;
	uint32 p2[3];
	_sceDmaTag* tadr;
	uint32 p3[3];
	void* as0;
	uint32 p4[3];
	void* as1;
	uint32 p5[3];
	uint32 p6[4];
	uint32 p7[4];
	void* sadr;
	uint32 p8[3];
};

struct sceGifPacket
{
	uint32* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	ulong32* pGifTag;
};

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
};

struct tGS_PMODE
{
	struct
	{
		uint32 EN1 : 1;
		uint32 EN2 : 1;
		uint32 CRTMD : 3;
		uint32 MMOD : 1;
		uint32 AMOD : 1;
		uint32 SLBG : 1;
		uint32 ALP : 8;
		uint32 p0 : 16;
	};
	uint32 p1;
};

struct sceGsXyoffset
{
	struct
	{
		ulong32 OFX : 16;
		ulong32 pad16 : 16;
		ulong32 OFY : 16;
		ulong32 pad48 : 16;
	};
};

struct sceGsColclamp
{
	struct
	{
		ulong32 CLAMP : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGsRgbaq
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 A : 8;
	};
	float32 Q;
};

int32 isCountVblank;
int32 vblankCount;
int32 isFrameEnd;
int32 oddeven;
int32 handler_error;
<unknown fundamental type (0xa510)> _packetBase[6];
int32 frd;
VoBuf voBuf;
sceGsDBuff sony_db;

void endDisplay();
void startDisplay(int32 waitEven);
int32 handler_endimage();
int32 vblankHandler();
void setImageTag(uint32* tags, void* image, int32 index, int32 image_w, int32 image_h);
void clearGsMem(int32 r, int32 g, int32 b, int32 disp_width, int32 disp_height);

// endDisplay__Fv
// Start address: 0x1bc390
void endDisplay()
{
	// Line 335, Address: 0x1bc390, Func Offset: 0
	// Line 337, Address: 0x1bc394, Func Offset: 0x4
	// Func End, Address: 0x1bc39c, Func Offset: 0xc
}

// startDisplay__Fi
// Start address: 0x1bc3a0
void startDisplay(int32 waitEven)
{
	// Line 319, Address: 0x1bc3a0, Func Offset: 0
	// Line 322, Address: 0x1bc3b0, Func Offset: 0x10
	// Line 325, Address: 0x1bc3c8, Func Offset: 0x28
	// Line 324, Address: 0x1bc3cc, Func Offset: 0x2c
	// Line 325, Address: 0x1bc3d0, Func Offset: 0x30
	// Line 326, Address: 0x1bc3d4, Func Offset: 0x34
	// Line 327, Address: 0x1bc3d8, Func Offset: 0x38
	// Func End, Address: 0x1bc3e8, Func Offset: 0x48
}

// handler_endimage__Fi
// Start address: 0x1bc3f0
int32 handler_endimage()
{
	// Line 304, Address: 0x1bc3f0, Func Offset: 0
	// Line 305, Address: 0x1bc3f8, Func Offset: 0x8
	// Line 306, Address: 0x1bc404, Func Offset: 0x14
	// Line 307, Address: 0x1bc410, Func Offset: 0x20
	// Line 308, Address: 0x1bc414, Func Offset: 0x24
	// Line 309, Address: 0x1bc418, Func Offset: 0x28
	// Line 310, Address: 0x1bc420, Func Offset: 0x30
	// Line 311, Address: 0x1bc424, Func Offset: 0x34
	// Func End, Address: 0x1bc430, Func Offset: 0x40
}

// vblankHandler__Fi
// Start address: 0x1bc430
int32 vblankHandler()
{
	sceDmaChan* dmaGif_loadimage;
	VoTag* tag;
	// Line 251, Address: 0x1bc430, Func Offset: 0
	// Line 252, Address: 0x1bc434, Func Offset: 0x4
	// Line 251, Address: 0x1bc438, Func Offset: 0x8
	// Line 252, Address: 0x1bc440, Func Offset: 0x10
	// Line 253, Address: 0x1bc44c, Func Offset: 0x1c
	// Line 255, Address: 0x1bc468, Func Offset: 0x38
	// Line 257, Address: 0x1bc474, Func Offset: 0x44
	// Line 259, Address: 0x1bc478, Func Offset: 0x48
	// Line 257, Address: 0x1bc480, Func Offset: 0x50
	// Line 259, Address: 0x1bc484, Func Offset: 0x54
	// Line 260, Address: 0x1bc490, Func Offset: 0x60
	// Line 261, Address: 0x1bc49c, Func Offset: 0x6c
	// Line 262, Address: 0x1bc4ac, Func Offset: 0x7c
	// Line 263, Address: 0x1bc4b4, Func Offset: 0x84
	// Line 264, Address: 0x1bc4c0, Func Offset: 0x90
	// Line 265, Address: 0x1bc4c8, Func Offset: 0x98
	// Line 268, Address: 0x1bc4d0, Func Offset: 0xa0
	// Line 272, Address: 0x1bc534, Func Offset: 0x104
	// Line 273, Address: 0x1bc550, Func Offset: 0x120
	// Line 276, Address: 0x1bc560, Func Offset: 0x130
	// Line 277, Address: 0x1bc56c, Func Offset: 0x13c
	// Line 279, Address: 0x1bc578, Func Offset: 0x148
	// Line 281, Address: 0x1bc57c, Func Offset: 0x14c
	// Line 282, Address: 0x1bc5a4, Func Offset: 0x174
	// Line 285, Address: 0x1bc5b0, Func Offset: 0x180
	// Line 286, Address: 0x1bc5bc, Func Offset: 0x18c
	// Line 288, Address: 0x1bc5d0, Func Offset: 0x1a0
	// Line 290, Address: 0x1bc5d4, Func Offset: 0x1a4
	// Line 293, Address: 0x1bc5dc, Func Offset: 0x1ac
	// Line 294, Address: 0x1bc5e0, Func Offset: 0x1b0
	// Line 295, Address: 0x1bc5e8, Func Offset: 0x1b8
	// Line 297, Address: 0x1bc5f0, Func Offset: 0x1c0
	// Func End, Address: 0x1bc604, Func Offset: 0x1d4
}

// setImageTag__FPUiPviii
// Start address: 0x1bc610
void setImageTag(uint32* tags, void* image, int32 index, int32 image_w, int32 image_h)
{
	int32 mbx;
	int32 mby;
	int32 i;
	int32 j;
	sceGifPacket packet;
	ulong32 giftag[2];
	ulong32 giftag_eop[2];
	ulong32* tag;
	// Line 132, Address: 0x1bc610, Func Offset: 0
	// Line 148, Address: 0x1bc614, Func Offset: 0x4
	// Line 132, Address: 0x1bc618, Func Offset: 0x8
	// Line 144, Address: 0x1bc61c, Func Offset: 0xc
	// Line 132, Address: 0x1bc620, Func Offset: 0x10
	// Line 144, Address: 0x1bc624, Func Offset: 0x14
	// Line 132, Address: 0x1bc628, Func Offset: 0x18
	// Line 138, Address: 0x1bc634, Func Offset: 0x24
	// Line 132, Address: 0x1bc638, Func Offset: 0x28
	// Line 137, Address: 0x1bc63c, Func Offset: 0x2c
	// Line 132, Address: 0x1bc640, Func Offset: 0x30
	// Line 146, Address: 0x1bc644, Func Offset: 0x34
	// Line 132, Address: 0x1bc648, Func Offset: 0x38
	// Line 144, Address: 0x1bc654, Func Offset: 0x44
	// Line 132, Address: 0x1bc658, Func Offset: 0x48
	// Line 148, Address: 0x1bc65c, Func Offset: 0x4c
	// Line 132, Address: 0x1bc660, Func Offset: 0x50
	// Line 146, Address: 0x1bc664, Func Offset: 0x54
	// Line 144, Address: 0x1bc670, Func Offset: 0x60
	// Line 146, Address: 0x1bc674, Func Offset: 0x64
	// Line 148, Address: 0x1bc678, Func Offset: 0x68
	// Line 144, Address: 0x1bc680, Func Offset: 0x70
	// Line 148, Address: 0x1bc684, Func Offset: 0x74
	// Line 146, Address: 0x1bc688, Func Offset: 0x78
	// Line 148, Address: 0x1bc68c, Func Offset: 0x7c
	// Line 149, Address: 0x1bc694, Func Offset: 0x84
	// Line 151, Address: 0x1bc69c, Func Offset: 0x8c
	// Line 167, Address: 0x1bc6a4, Func Offset: 0x94
	// Line 171, Address: 0x1bc6b4, Func Offset: 0xa4
	// Line 172, Address: 0x1bc6c0, Func Offset: 0xb0
	// Line 174, Address: 0x1bc6d8, Func Offset: 0xc8
	// Line 175, Address: 0x1bc6f0, Func Offset: 0xe0
	// Line 182, Address: 0x1bc6f8, Func Offset: 0xe8
	// Line 183, Address: 0x1bc708, Func Offset: 0xf8
	// Line 185, Address: 0x1bc728, Func Offset: 0x118
	// Line 189, Address: 0x1bc73c, Func Offset: 0x12c
	// Line 190, Address: 0x1bc748, Func Offset: 0x138
	// Line 192, Address: 0x1bc764, Func Offset: 0x154
	// Line 193, Address: 0x1bc774, Func Offset: 0x164
	// Line 197, Address: 0x1bc77c, Func Offset: 0x16c
	// Line 198, Address: 0x1bc788, Func Offset: 0x178
	// Line 201, Address: 0x1bc78c, Func Offset: 0x17c
	// Line 198, Address: 0x1bc790, Func Offset: 0x180
	// Line 201, Address: 0x1bc79c, Func Offset: 0x18c
	// Line 198, Address: 0x1bc7a0, Func Offset: 0x190
	// Line 201, Address: 0x1bc7a4, Func Offset: 0x194
	// Line 199, Address: 0x1bc7ac, Func Offset: 0x19c
	// Line 201, Address: 0x1bc7b0, Func Offset: 0x1a0
	// Line 203, Address: 0x1bc7bc, Func Offset: 0x1ac
	// Line 202, Address: 0x1bc7c0, Func Offset: 0x1b0
	// Line 203, Address: 0x1bc7c4, Func Offset: 0x1b4
	// Line 204, Address: 0x1bc7d0, Func Offset: 0x1c0
	// Line 218, Address: 0x1bc7e0, Func Offset: 0x1d0
	// Line 222, Address: 0x1bc7f4, Func Offset: 0x1e4
	// Line 223, Address: 0x1bc800, Func Offset: 0x1f0
	// Line 224, Address: 0x1bc810, Func Offset: 0x200
	// Line 226, Address: 0x1bc820, Func Offset: 0x210
	// Line 231, Address: 0x1bc844, Func Offset: 0x234
	// Line 233, Address: 0x1bc854, Func Offset: 0x244
	// Line 234, Address: 0x1bc868, Func Offset: 0x258
	// Line 235, Address: 0x1bc87c, Func Offset: 0x26c
	// Line 237, Address: 0x1bc8b4, Func Offset: 0x2a4
	// Line 239, Address: 0x1bc8cc, Func Offset: 0x2bc
	// Line 243, Address: 0x1bc8d4, Func Offset: 0x2c4
	// Line 244, Address: 0x1bc8dc, Func Offset: 0x2cc
	// Func End, Address: 0x1bc90c, Func Offset: 0x2fc
}

// clearGsMem__Fiiiii
// Start address: 0x1bc910
void clearGsMem(int32 r, int32 g, int32 b, int32 disp_width, int32 disp_height)
{
	ulong32 giftag_clear[2];
	sceGifPacket packet;
	sceDmaChan* dmaGif;
	// Line 66, Address: 0x1bc910, Func Offset: 0
	// Line 67, Address: 0x1bc914, Func Offset: 0x4
	// Line 66, Address: 0x1bc918, Func Offset: 0x8
	// Line 67, Address: 0x1bc91c, Func Offset: 0xc
	// Line 66, Address: 0x1bc920, Func Offset: 0x10
	// Line 67, Address: 0x1bc924, Func Offset: 0x14
	// Line 66, Address: 0x1bc928, Func Offset: 0x18
	// Line 67, Address: 0x1bc950, Func Offset: 0x40
	// Line 76, Address: 0x1bc954, Func Offset: 0x44
	// Line 79, Address: 0x1bc960, Func Offset: 0x50
	// Line 76, Address: 0x1bc964, Func Offset: 0x54
	// Line 79, Address: 0x1bc968, Func Offset: 0x58
	// Line 88, Address: 0x1bc96c, Func Offset: 0x5c
	// Line 80, Address: 0x1bc970, Func Offset: 0x60
	// Line 82, Address: 0x1bc980, Func Offset: 0x70
	// Line 83, Address: 0x1bc988, Func Offset: 0x78
	// Line 81, Address: 0x1bc990, Func Offset: 0x80
	// Line 88, Address: 0x1bc998, Func Offset: 0x88
	// Line 82, Address: 0x1bc9a0, Func Offset: 0x90
	// Line 80, Address: 0x1bc9a4, Func Offset: 0x94
	// Line 82, Address: 0x1bc9a8, Func Offset: 0x98
	// Line 80, Address: 0x1bc9ac, Func Offset: 0x9c
	// Line 83, Address: 0x1bc9b0, Func Offset: 0xa0
	// Line 82, Address: 0x1bc9b4, Func Offset: 0xa4
	// Line 83, Address: 0x1bc9b8, Func Offset: 0xa8
	// Line 82, Address: 0x1bc9bc, Func Offset: 0xac
	// Line 80, Address: 0x1bc9c0, Func Offset: 0xb0
	// Line 83, Address: 0x1bc9c4, Func Offset: 0xb4
	// Line 80, Address: 0x1bc9c8, Func Offset: 0xb8
	// Line 83, Address: 0x1bc9cc, Func Offset: 0xbc
	// Line 82, Address: 0x1bc9d0, Func Offset: 0xc0
	// Line 83, Address: 0x1bc9d8, Func Offset: 0xc8
	// Line 81, Address: 0x1bc9e0, Func Offset: 0xd0
	// Line 88, Address: 0x1bc9f4, Func Offset: 0xe4
	// Line 91, Address: 0x1bca54, Func Offset: 0x144
	// Line 93, Address: 0x1bca58, Func Offset: 0x148
	// Line 94, Address: 0x1bca64, Func Offset: 0x154
	// Line 95, Address: 0x1bca70, Func Offset: 0x160
	// Line 97, Address: 0x1bca7c, Func Offset: 0x16c
	// Line 98, Address: 0x1bca8c, Func Offset: 0x17c
	// Line 100, Address: 0x1bca94, Func Offset: 0x184
	// Line 104, Address: 0x1bcaa8, Func Offset: 0x198
	// Line 105, Address: 0x1bcab4, Func Offset: 0x1a4
	// Line 107, Address: 0x1bcac4, Func Offset: 0x1b4
	// Line 108, Address: 0x1bcaf8, Func Offset: 0x1e8
	// Line 110, Address: 0x1bcb08, Func Offset: 0x1f8
	// Line 112, Address: 0x1bcb20, Func Offset: 0x210
	// Line 115, Address: 0x1bcb28, Func Offset: 0x218
	// Line 117, Address: 0x1bcb30, Func Offset: 0x220
	// Line 118, Address: 0x1bcb38, Func Offset: 0x228
	// Line 119, Address: 0x1bcb44, Func Offset: 0x234
	// Line 120, Address: 0x1bcb50, Func Offset: 0x240
	// Line 125, Address: 0x1bcb5c, Func Offset: 0x24c
	// Func End, Address: 0x1bcb80, Func Offset: 0x270
}

