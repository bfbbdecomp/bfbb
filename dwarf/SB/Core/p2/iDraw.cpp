typedef struct sceGsDispEnv;
typedef struct RxObjSpace3DVertex;
typedef struct rwDMAReadCircuitOneTag;
typedef struct RwMatrixTag;
typedef struct tGS_DISPLAY2;
typedef struct xVec3;
typedef struct sceGsDrawEnv1;
typedef union sceGsTest;
typedef union sceGsDthe;
typedef struct rwDMA_flipData;
typedef struct sceGsDBuffDc;
typedef struct tGS_PMODE;
typedef union sceGsPrmodecont;
typedef struct tGS_DISPLAY1;
typedef union sceGsXyoffset;
typedef union sceGsColclamp;
typedef struct sceGsRgbaq;
typedef struct tGS_BGCOLOR;
typedef struct sceGsDrawEnv2;
typedef union sceGsXyz;
typedef struct RwV3d;
typedef struct RwRGBA;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef struct tGS_DISPFB2;
typedef union sceGsScissor;
typedef union RxColorUnion;
typedef struct RwRaster;
typedef struct sceGsClear;
typedef union sceGsZbuf;
typedef union sceGsPrim;
typedef union sceGsFrame;
typedef struct tGS_DISPFB1;


typedef RxObjSpace3DVertex type_0[384];
typedef uint32 type_1[4096];
typedef sceGsDispEnv type_2[2];
typedef sceGsDispEnv type_3[2];
typedef <unknown type (0xa510)>* type_4[4];

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
	union
	{
		uint32 DX;
		uint32 DY;
		uint32 MAGH;
		uint32 MAGV;
		uint32 p0;
	};
	union
	{
		uint32 DW;
		uint32 DH;
		uint32 p1;
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

union sceGsTest
{
	ulong32 ATE;
	ulong32 ATST;
	ulong32 AREF;
	ulong32 AFAIL;
	ulong32 DATE;
	ulong32 DATM;
	ulong32 ZTE;
	ulong32 ZTST;
	ulong32 pad19;
};

union sceGsDthe
{
	ulong32 DTHE;
	ulong32 pad01;
};

struct rwDMA_flipData
{
	sceGsDBuffDc db;
	rwDMAReadCircuitOneTag tcaaDisp;
	type_2 disp1;
	rwDMAReadCircuitOneTag tcaaDisp1;
	type_4 dmaPkt;
};

struct sceGsDBuffDc
{
	type_3 disp;
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
	union
	{
		uint32 EN1;
		uint32 EN2;
		uint32 CRTMD;
		uint32 MMOD;
		uint32 AMOD;
		uint32 SLBG;
		uint32 ALP;
		uint32 p0;
	};
	uint32 p1;
};

union sceGsPrmodecont
{
	ulong32 AC;
	ulong32 pad01;
};

struct tGS_DISPLAY1
{
	union
	{
		uint32 DX;
		uint32 DY;
		uint32 MAGH;
		uint32 MAGV;
		uint32 p0;
	};
	union
	{
		uint32 DW;
		uint32 DH;
		uint32 p1;
	};
};

union sceGsXyoffset
{
	ulong32 OFX;
	ulong32 pad16;
	ulong32 OFY;
	ulong32 pad48;
};

union sceGsColclamp
{
	ulong32 CLAMP;
	ulong32 pad01;
};

struct sceGsRgbaq
{
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 A;
	};
	float32 Q;
};

struct tGS_BGCOLOR
{
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 p0;
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

union sceGsXyz
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
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
	union
	{
		uint32 INT;
		uint32 FFMD;
		uint32 DPMS;
		uint32 p0;
	};
	uint32 p1;
};

struct sceGifTag
{
	union
	{
		ulong32 NLOOP;
		ulong32 EOP;
		ulong32 pad16;
		ulong32 id;
		ulong32 PRE;
		ulong32 PRIM;
		ulong32 FLG;
		ulong32 NREG;
	};
	union
	{
		ulong32 REGS0;
		ulong32 REGS1;
		ulong32 REGS2;
		ulong32 REGS3;
		ulong32 REGS4;
		ulong32 REGS5;
		ulong32 REGS6;
		ulong32 REGS7;
		ulong32 REGS8;
		ulong32 REGS9;
		ulong32 REGS10;
		ulong32 REGS11;
		ulong32 REGS12;
		ulong32 REGS13;
		ulong32 REGS14;
		ulong32 REGS15;
	};
};

struct tGS_DISPFB2
{
	union
	{
		uint32 FBP;
		uint32 FBW;
		uint32 PSM;
		uint32 p0;
	};
	union
	{
		uint32 DBX;
		uint32 DBY;
		uint32 p1;
	};
};

union sceGsScissor
{
	ulong32 SCAX0;
	ulong32 pad11;
	ulong32 SCAX1;
	ulong32 pad27;
	ulong32 SCAY0;
	ulong32 pad43;
	ulong32 SCAY1;
	ulong32 pad59;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

union sceGsZbuf
{
	ulong32 ZBP;
	ulong32 pad09;
	ulong32 PSM;
	ulong32 pad28;
	ulong32 ZMSK;
	ulong32 pad33;
};

union sceGsPrim
{
	ulong32 PRIM;
	ulong32 IIP;
	ulong32 TME;
	ulong32 FGE;
	ulong32 ABE;
	ulong32 AA1;
	ulong32 FST;
	ulong32 CTXT;
	ulong32 FIX;
	ulong32 pad11;
};

union sceGsFrame
{
	ulong32 FBP;
	ulong32 pad09;
	ulong32 FBW;
	ulong32 pad22;
	ulong32 PSM;
	ulong32 pad30;
	ulong32 FBMSK;
};

struct tGS_DISPFB1
{
	union
	{
		uint32 FBP;
		uint32 FBW;
		uint32 PSM;
		uint32 p0;
	};
	union
	{
		uint32 DBX;
		uint32 DBY;
		uint32 p1;
	};
};

type_1 ourGlobals;
rwDMA_flipData _rwDMAFlipData;
<unknown type (0xa510)>* _rwDMAPktPtr;
long32 skyFrame_1;

void iDrawSetTEST2(int32 value);
void iDrawSetFBA1(int32 value);
void iDrawSetFBMSK(uint32 abgr);

// iDrawSetTEST2__Fi
// Start address: 0x1a7e50
void iDrawSetTEST2(int32 value)
{
	ulong32 tmp;
}

// iDrawSetFBA1__Fi
// Start address: 0x1a7ed0
void iDrawSetFBA1(int32 value)
{
	ulong32 tmp;
}

// iDrawSetFBMSK__FUi
// Start address: 0x1a7f70
void iDrawSetFBMSK(uint32 abgr)
{
	ulong32 tmp;
	ulong32 hi;
}

