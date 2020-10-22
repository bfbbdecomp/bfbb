typedef struct sceGsDispEnv;
typedef struct RxObjSpace3DVertex;
typedef struct rwDMAReadCircuitOneTag;
typedef struct RwMatrixTag;
typedef struct tGS_DISPLAY2;
typedef struct xVec3;
typedef struct sceGsDrawEnv1;
typedef struct sceGsTest;
typedef struct sceGsDthe;
typedef struct rwDMA_flipData;
typedef struct sceGsDBuffDc;
typedef struct tGS_PMODE;
typedef struct sceGsPrmodecont;
typedef struct tGS_DISPLAY1;
typedef struct sceGsXyoffset;
typedef struct sceGsColclamp;
typedef struct sceGsRgbaq;
typedef struct tGS_BGCOLOR;
typedef struct sceGsDrawEnv2;
typedef struct sceGsXyz;
typedef struct RwV3d;
typedef struct RwRGBA;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef struct tGS_DISPFB2;
typedef struct sceGsScissor;
typedef struct RxColorUnion;
typedef struct RwRaster;
typedef struct sceGsClear;
typedef struct sceGsZbuf;
typedef struct sceGsPrim;
typedef struct sceGsFrame;
typedef struct tGS_DISPFB1;


typedef RxObjSpace3DVertex type_0[384];
typedef uint32 type_1[4096];
typedef sceGsDispEnv type_2[2];
typedef sceGsDispEnv type_3[2];
typedef <unknown fundamental type (0xa510)>* type_4[4];

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct rwDMAReadCircuitOneTag
{
	tGS_DISPFB1 dispfb10;
	tGS_DISPLAY1 display10;
	tGS_DISPFB1 dispfb11;
	tGS_DISPLAY1 display11;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct rwDMA_flipData
{
	sceGsDBuffDc db;
	rwDMAReadCircuitOneTag tcaaDisp;
	sceGsDispEnv disp1[2];
	rwDMAReadCircuitOneTag tcaaDisp1;
	<unknown fundamental type (0xa510)>* dmaPkt[4];
};

struct sceGsDBuffDc
{
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
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

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
};

struct tGS_DISPLAY1
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

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	ulong32 frame2addr;
	sceGsZbuf zbuf2;
	long32 zbuf2addr;
	sceGsXyoffset xyoffset2;
	long32 xyoffset2addr;
	sceGsScissor scissor2;
	long32 scissor2addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test2;
	long32 test2addr;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
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

struct tGS_DISPFB1
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

uint32 ourGlobals[4096];
rwDMA_flipData _rwDMAFlipData;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyFrame_1;

void iDrawSetTEST2(int32 value);
void iDrawSetFBA1(int32 value);
void iDrawSetFBMSK(uint32 abgr);

// iDrawSetTEST2__Fi
// Start address: 0x1a7e50
void iDrawSetTEST2(int32 value)
{
	ulong32 tmp;
	// Line 109, Address: 0x1a7e50, Func Offset: 0
	// Line 112, Address: 0x1a7e54, Func Offset: 0x4
	// Line 109, Address: 0x1a7e58, Func Offset: 0x8
	// Line 112, Address: 0x1a7e64, Func Offset: 0x14
	// Line 113, Address: 0x1a7e6c, Func Offset: 0x1c
	// Line 120, Address: 0x1a7e70, Func Offset: 0x20
	// Line 113, Address: 0x1a7e74, Func Offset: 0x24
	// Line 120, Address: 0x1a7e78, Func Offset: 0x28
	// Line 113, Address: 0x1a7e7c, Func Offset: 0x2c
	// Line 118, Address: 0x1a7e84, Func Offset: 0x34
	// Line 119, Address: 0x1a7e8c, Func Offset: 0x3c
	// Line 120, Address: 0x1a7e90, Func Offset: 0x40
	// Line 119, Address: 0x1a7e98, Func Offset: 0x48
	// Line 121, Address: 0x1a7ea8, Func Offset: 0x58
	// Line 122, Address: 0x1a7ebc, Func Offset: 0x6c
	// Func End, Address: 0x1a7ecc, Func Offset: 0x7c
}

// iDrawSetFBA1__Fi
// Start address: 0x1a7ed0
void iDrawSetFBA1(int32 value)
{
	ulong32 tmp;
	// Line 91, Address: 0x1a7ed0, Func Offset: 0
	// Line 94, Address: 0x1a7ed4, Func Offset: 0x4
	// Line 91, Address: 0x1a7ed8, Func Offset: 0x8
	// Line 94, Address: 0x1a7ee4, Func Offset: 0x14
	// Line 95, Address: 0x1a7eec, Func Offset: 0x1c
	// Line 102, Address: 0x1a7f00, Func Offset: 0x30
	// Line 95, Address: 0x1a7f04, Func Offset: 0x34
	// Line 100, Address: 0x1a7f08, Func Offset: 0x38
	// Line 101, Address: 0x1a7f10, Func Offset: 0x40
	// Line 104, Address: 0x1a7f14, Func Offset: 0x44
	// Line 102, Address: 0x1a7f18, Func Offset: 0x48
	// Line 104, Address: 0x1a7f1c, Func Offset: 0x4c
	// Line 101, Address: 0x1a7f20, Func Offset: 0x50
	// Line 103, Address: 0x1a7f30, Func Offset: 0x60
	// Line 105, Address: 0x1a7f44, Func Offset: 0x74
	// Line 106, Address: 0x1a7f58, Func Offset: 0x88
	// Func End, Address: 0x1a7f68, Func Offset: 0x98
}

// iDrawSetFBMSK__FUi
// Start address: 0x1a7f70
void iDrawSetFBMSK(uint32 abgr)
{
	ulong32 tmp;
	ulong32 hi;
	// Line 31, Address: 0x1a7f70, Func Offset: 0
	// Line 61, Address: 0x1a7f74, Func Offset: 0x4
	// Line 31, Address: 0x1a7f78, Func Offset: 0x8
	// Line 61, Address: 0x1a7f84, Func Offset: 0x14
	// Line 65, Address: 0x1a7f94, Func Offset: 0x24
	// Line 70, Address: 0x1a7f98, Func Offset: 0x28
	// Line 65, Address: 0x1a7fa0, Func Offset: 0x30
	// Line 70, Address: 0x1a7fa4, Func Offset: 0x34
	// Line 65, Address: 0x1a7fac, Func Offset: 0x3c
	// Line 70, Address: 0x1a7fb4, Func Offset: 0x44
	// Line 71, Address: 0x1a7fb8, Func Offset: 0x48
	// Line 73, Address: 0x1a7fbc, Func Offset: 0x4c
	// Line 84, Address: 0x1a7fc4, Func Offset: 0x54
	// Line 73, Address: 0x1a7fc8, Func Offset: 0x58
	// Line 75, Address: 0x1a7fcc, Func Offset: 0x5c
	// Line 78, Address: 0x1a7fd0, Func Offset: 0x60
	// Line 76, Address: 0x1a7fd4, Func Offset: 0x64
	// Line 81, Address: 0x1a7fd8, Func Offset: 0x68
	// Line 82, Address: 0x1a7fdc, Func Offset: 0x6c
	// Line 84, Address: 0x1a7fe0, Func Offset: 0x70
	// Line 85, Address: 0x1a7fe4, Func Offset: 0x74
	// Line 87, Address: 0x1a7fe8, Func Offset: 0x78
	// Func End, Address: 0x1a7ff8, Func Offset: 0x88
}

