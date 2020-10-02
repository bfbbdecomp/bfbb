typedef struct tGS_BGCOLOR;
typedef struct VoData;
typedef union sceGsXyz;
typedef struct VoTag;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef union sceGsScissor;
typedef struct VoBuf;
typedef struct tGS_DISPFB2;
typedef struct sceGsClear;
typedef union sceGsZbuf;
typedef union sceGsPrim;
typedef struct _sceDmaTag;
typedef union sceGsFrame;
typedef struct sceGsDispEnv;
typedef struct sceGsDBuff;
typedef struct tGS_DISPLAY2;
typedef struct sceGsDrawEnv1;
typedef union tD_CHCR;
typedef union sceGsTest;
typedef union sceGsDthe;
typedef struct sceDmaChan;
typedef struct sceGifPacket;
typedef union sceGsPrmodecont;
typedef struct tGS_PMODE;
typedef union sceGsXyoffset;
typedef union sceGsColclamp;
typedef struct sceGsRgbaq;


typedef uint32 type_0[4];
typedef uint8 type_1[1228800];
typedef uint32 type_2[3];
typedef <unknown type (0xa510)> type_3[6];
typedef int32 type_4[15];
typedef uint32 type_5[29248];
typedef type_5 type_6[2];
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
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 p0;
	};
	uint32 p1;
};

struct VoData
{
	type_1 v;
};

union sceGsXyz
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
};

struct VoTag
{
	int32 status;
	type_4 dummy;
	type_6 v;
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

struct _sceDmaTag
{
	uint16 qwc;
	uint8 mark;
	uint8 id;
	_sceDmaTag* next;
	type_7 p;
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
	type_11 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
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

union tD_CHCR
{
	uint32 DIR;
	uint32 p0;
	uint32 MOD;
	uint32 ASP;
	uint32 TTE;
	uint32 TIE;
	uint32 STR;
	uint32 p1;
	uint32 TAG;
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

struct sceDmaChan
{
	tD_CHCR chcr;
	type_12 p0;
	void* madr;
	type_13 p1;
	uint32 qwc;
	type_14 p2;
	_sceDmaTag* tadr;
	type_15 p3;
	void* as0;
	type_16 p4;
	void* as1;
	type_17 p5;
	type_18 p6;
	type_0 p7;
	void* sadr;
	type_2 p8;
};

struct sceGifPacket
{
	uint32* pCurrent;
	<unknown type (0xa510)>* pBase;
	<unknown type (0xa510)>* pDmaTag;
	ulong32* pGifTag;
};

union sceGsPrmodecont
{
	ulong32 AC;
	ulong32 pad01;
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

int32 isCountVblank;
int32 vblankCount;
int32 isFrameEnd;
int32 oddeven;
int32 handler_error;
type_3 _packetBase;
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
}

// startDisplay__Fi
// Start address: 0x1bc3a0
void startDisplay(int32 waitEven)
{
}

// handler_endimage__Fi
// Start address: 0x1bc3f0
int32 handler_endimage()
{
}

// vblankHandler__Fi
// Start address: 0x1bc430
int32 vblankHandler()
{
	sceDmaChan* dmaGif_loadimage;
	VoTag* tag;
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
	type_8 giftag;
	type_9 giftag_eop;
	ulong32* tag;
}

// clearGsMem__Fiiiii
// Start address: 0x1bc910
void clearGsMem(int32 r, int32 g, int32 b, int32 disp_width, int32 disp_height)
{
	type_10 giftag_clear;
	sceGifPacket packet;
	sceDmaChan* dmaGif;
}

