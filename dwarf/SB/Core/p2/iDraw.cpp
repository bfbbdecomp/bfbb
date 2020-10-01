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
typedef u32 type_1[4096];
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
	f32 u;
	f32 v;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct tGS_DISPLAY2
{
	union
	{
		u32 DX;
		u32 DY;
		u32 MAGH;
		u32 MAGV;
		u32 p0;
	};
	union
	{
		u32 DW;
		u32 DH;
		u32 p1;
	};
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	u32 frame1addr;
	sceGsZbuf zbuf1;
	s32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	s32 xyoffset1addr;
	sceGsScissor scissor1;
	s32 scissor1addr;
	sceGsPrmodecont prmodecont;
	s32 prmodecontaddr;
	sceGsColclamp colclamp;
	s32 colclampaddr;
	sceGsDthe dthe;
	s32 dtheaddr;
	sceGsTest test1;
	s32 test1addr;
};

union sceGsTest
{
	u32 ATE;
	u32 ATST;
	u32 AREF;
	u32 AFAIL;
	u32 DATE;
	u32 DATM;
	u32 ZTE;
	u32 ZTST;
	u32 pad19;
};

union sceGsDthe
{
	u32 DTHE;
	u32 pad01;
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
		u32 EN1;
		u32 EN2;
		u32 CRTMD;
		u32 MMOD;
		u32 AMOD;
		u32 SLBG;
		u32 ALP;
		u32 p0;
	};
	u32 p1;
};

union sceGsPrmodecont
{
	u32 AC;
	u32 pad01;
};

struct tGS_DISPLAY1
{
	union
	{
		u32 DX;
		u32 DY;
		u32 MAGH;
		u32 MAGV;
		u32 p0;
	};
	union
	{
		u32 DW;
		u32 DH;
		u32 p1;
	};
};

union sceGsXyoffset
{
	u32 OFX;
	u32 pad16;
	u32 OFY;
	u32 pad48;
};

union sceGsColclamp
{
	u32 CLAMP;
	u32 pad01;
};

struct sceGsRgbaq
{
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 A;
	};
	f32 Q;
};

struct tGS_BGCOLOR
{
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 p0;
	};
	u32 p1;
};

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	u32 frame2addr;
	sceGsZbuf zbuf2;
	s32 zbuf2addr;
	sceGsXyoffset xyoffset2;
	s32 xyoffset2addr;
	sceGsScissor scissor2;
	s32 scissor2addr;
	sceGsPrmodecont prmodecont;
	s32 prmodecontaddr;
	sceGsColclamp colclamp;
	s32 colclampaddr;
	sceGsDthe dthe;
	s32 dtheaddr;
	sceGsTest test2;
	s32 test2addr;
};

union sceGsXyz
{
	u32 X;
	u32 Y;
	u32 Z;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct tGS_SMODE2
{
	union
	{
		u32 INT;
		u32 FFMD;
		u32 DPMS;
		u32 p0;
	};
	u32 p1;
};

struct sceGifTag
{
	union
	{
		u32 NLOOP;
		u32 EOP;
		u32 pad16;
		u32 id;
		u32 PRE;
		u32 PRIM;
		u32 FLG;
		u32 NREG;
	};
	union
	{
		u32 REGS0;
		u32 REGS1;
		u32 REGS2;
		u32 REGS3;
		u32 REGS4;
		u32 REGS5;
		u32 REGS6;
		u32 REGS7;
		u32 REGS8;
		u32 REGS9;
		u32 REGS10;
		u32 REGS11;
		u32 REGS12;
		u32 REGS13;
		u32 REGS14;
		u32 REGS15;
	};
};

struct tGS_DISPFB2
{
	union
	{
		u32 FBP;
		u32 FBW;
		u32 PSM;
		u32 p0;
	};
	union
	{
		u32 DBX;
		u32 DBY;
		u32 p1;
	};
};

union sceGsScissor
{
	u32 SCAX0;
	u32 pad11;
	u32 SCAX1;
	u32 pad27;
	u32 SCAY0;
	u32 pad43;
	u32 SCAY1;
	u32 pad59;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
};

struct sceGsClear
{
	sceGsTest testa;
	s32 testaaddr;
	sceGsPrim prim;
	s32 primaddr;
	sceGsRgbaq rgbaq;
	s32 rgbaqaddr;
	sceGsXyz xyz2a;
	s32 xyz2aaddr;
	sceGsXyz xyz2b;
	s32 xyz2baddr;
	sceGsTest testb;
	s32 testbaddr;
};

union sceGsZbuf
{
	u32 ZBP;
	u32 pad09;
	u32 PSM;
	u32 pad28;
	u32 ZMSK;
	u32 pad33;
};

union sceGsPrim
{
	u32 PRIM;
	u32 IIP;
	u32 TME;
	u32 FGE;
	u32 ABE;
	u32 AA1;
	u32 FST;
	u32 CTXT;
	u32 FIX;
	u32 pad11;
};

union sceGsFrame
{
	u32 FBP;
	u32 pad09;
	u32 FBW;
	u32 pad22;
	u32 PSM;
	u32 pad30;
	u32 FBMSK;
};

struct tGS_DISPFB1
{
	union
	{
		u32 FBP;
		u32 FBW;
		u32 PSM;
		u32 p0;
	};
	union
	{
		u32 DBX;
		u32 DBY;
		u32 p1;
	};
};

type_1 ourGlobals;
rwDMA_flipData _rwDMAFlipData;
<unknown type (0xa510)>* _rwDMAPktPtr;
s32 skyFrame_1;

void iDrawSetTEST2(s32 value);
void iDrawSetFBA1(s32 value);
void iDrawSetFBMSK(u32 abgr);

// iDrawSetTEST2__Fi
// Start address: 0x1a7e50
void iDrawSetTEST2(s32 value)
{
	u32 tmp;
}

// iDrawSetFBA1__Fi
// Start address: 0x1a7ed0
void iDrawSetFBA1(s32 value)
{
	u32 tmp;
}

// iDrawSetFBMSK__FUi
// Start address: 0x1a7f70
void iDrawSetFBMSK(u32 abgr)
{
	u32 tmp;
	u32 hi;
}

