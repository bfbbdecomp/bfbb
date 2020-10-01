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


typedef u32 type_0[4];
typedef u8 type_1[1228800];
typedef u32 type_2[3];
typedef <unknown type (0xa510)> type_3[6];
typedef s32 type_4[15];
typedef u32 type_5[29248];
typedef type_5 type_6[2];
typedef u32 type_7[2];
typedef u32 type_8[2];
typedef u32 type_9[2];
typedef u32 type_10[2];
typedef sceGsDispEnv type_11[2];
typedef u32 type_12[3];
typedef u32 type_13[3];
typedef u32 type_14[3];
typedef u32 type_15[3];
typedef u32 type_16[3];
typedef u32 type_17[3];
typedef u32 type_18[4];

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

struct VoData
{
	type_1 v;
};

union sceGsXyz
{
	u32 X;
	u32 Y;
	u32 Z;
};

struct VoTag
{
	s32 status;
	type_4 dummy;
	type_6 v;
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

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	s32 write;
	s32 count;
	s32 size;
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

struct _sceDmaTag
{
	u16 qwc;
	u8 mark;
	u8 id;
	_sceDmaTag* next;
	type_7 p;
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

union tD_CHCR
{
	u32 DIR;
	u32 p0;
	u32 MOD;
	u32 ASP;
	u32 TTE;
	u32 TIE;
	u32 STR;
	u32 p1;
	u32 TAG;
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

struct sceDmaChan
{
	tD_CHCR chcr;
	type_12 p0;
	void* madr;
	type_13 p1;
	u32 qwc;
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
	u32* pCurrent;
	<unknown type (0xa510)>* pBase;
	<unknown type (0xa510)>* pDmaTag;
	u32* pGifTag;
};

union sceGsPrmodecont
{
	u32 AC;
	u32 pad01;
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

s32 isCountVblank;
s32 vblankCount;
s32 isFrameEnd;
s32 oddeven;
s32 handler_error;
type_3 _packetBase;
s32 frd;
VoBuf voBuf;
sceGsDBuff sony_db;

void endDisplay();
void startDisplay(s32 waitEven);
s32 handler_endimage();
s32 vblankHandler();
void setImageTag(u32* tags, void* image, s32 index, s32 image_w, s32 image_h);
void clearGsMem(s32 r, s32 g, s32 b, s32 disp_width, s32 disp_height);

// endDisplay__Fv
// Start address: 0x1bc390
void endDisplay()
{
}

// startDisplay__Fi
// Start address: 0x1bc3a0
void startDisplay(s32 waitEven)
{
}

// handler_endimage__Fi
// Start address: 0x1bc3f0
s32 handler_endimage()
{
}

// vblankHandler__Fi
// Start address: 0x1bc430
s32 vblankHandler()
{
	sceDmaChan* dmaGif_loadimage;
	VoTag* tag;
}

// setImageTag__FPUiPviii
// Start address: 0x1bc610
void setImageTag(u32* tags, void* image, s32 index, s32 image_w, s32 image_h)
{
	s32 mbx;
	s32 mby;
	s32 i;
	s32 j;
	sceGifPacket packet;
	type_8 giftag;
	type_9 giftag_eop;
	u32* tag;
}

// clearGsMem__Fiiiii
// Start address: 0x1bc910
void clearGsMem(s32 r, s32 g, s32 b, s32 disp_width, s32 disp_height)
{
	type_10 giftag_clear;
	sceGifPacket packet;
	sceDmaChan* dmaGif;
}

