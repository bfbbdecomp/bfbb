typedef struct sceGpTextureArg;
typedef union sceGsTex1;
typedef union sceGsBitbltbuf;
typedef struct _sceDmaTag;
typedef union sceGsFrame;
typedef union sceGsPrim;
typedef struct _sceGpChain;
typedef union sceGsTrxpos;
typedef union sceGsZbuf;
typedef struct tGS_DISPLAY2;
typedef struct sceGpLoadImage;
typedef struct _sceGpAdc;
typedef struct sceGpAlphaEnv;
typedef struct sceGsClear;
typedef union sceGsTrxreg;
typedef struct sceGsSt;
typedef union sceGsClamp;
typedef union _sceGpReg;
typedef struct tGS_PMODE;
typedef union sceGsDthe;
typedef union sceGsTest;
typedef struct sceGsDispEnv;
typedef union sceGsUv;
typedef union sceGsTexa;
typedef struct tGS_BGCOLOR;
typedef union sceGsFba;
typedef union sceGsPrmodecont;
typedef union sceGsColclamp;
typedef struct sceGsDBuff;
typedef union sceGsXyoffset;
typedef struct sceGsDrawEnv1;
typedef struct sceGsRgbaq;
typedef union sceGsTex0;
typedef struct _sceGifPackAd;
typedef struct tGS_SMODE2;
typedef union sceGsFog;
typedef struct tGS_DISPFB2;
typedef union sceGsXyz;
typedef union sceGsAlpha;
typedef struct sceGifTag;
typedef struct sceGpPrimR;
typedef struct sceGsTexflush;
typedef struct sceGpTexEnv;
typedef struct xSysFontTbl;
typedef union sceGsPabe;
typedef union sceGsXyzf;
typedef union sceGsTrxdir;
typedef union sceGsScissor;


typedef _sceGpReg type_0[1];
typedef xSysFontTbl type_1[128];
typedef u32 type_2[2];
typedef u32 type_3[4096];
typedef s8 type_4[128];
typedef u32 type_5[2];
typedef sceGsDispEnv type_6[2];
typedef s8 type_7[128];
typedef s8 type_8[1024];
typedef s8* type_9[14];
typedef s8* type_10[32];

struct sceGpTextureArg
{
	s16 tbp;
	s16 tbw;
	s16 tpsm;
	s16 tx;
	s16 ty;
	s16 tw;
	s16 th;
	s16 cbp;
	s16 cpsm;
};

union sceGsTex1
{
	u32 LCM;
	u32 pad01;
	u32 MXL;
	u32 MMAG;
	u32 MMIN;
	u32 MTBA;
	u32 pad10;
	u32 L;
	u32 pad21;
	u32 K;
	u32 pad44;
};

union sceGsBitbltbuf
{
	u32 SBP;
	u32 pad14;
	u32 SBW;
	u32 pad22;
	u32 SPSM;
	u32 pad30;
	u32 DBP;
	u32 pad46;
	u32 DBW;
	u32 pad54;
	u32 DPSM;
	u32 pad62;
};

struct _sceDmaTag
{
	u16 qwc;
	u8 mark;
	u8 id;
	_sceDmaTag* next;
	type_2 p;
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

struct _sceGpChain
{
	<unknown type (0xa510)>* ot;
	<unknown type (0xa510)>* pKick;
	<unknown type (0xa510)>* pEnd;
	s32 resolution;
};

union sceGsTrxpos
{
	u32 SSAX;
	u32 pad11;
	u32 SSAY;
	u32 pad27;
	u32 DSAX;
	u32 pad43;
	u32 DSAY;
	u32 DIR;
	u32 pad61;
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

struct sceGpLoadImage
{
	_sceDmaTag dmacnt;
	sceGifTag giftag1;
	sceGsBitbltbuf bitbltbuf;
	s32 bitbltbufaddr;
	sceGsTrxpos trxpos;
	s32 trxposaddr;
	sceGsTrxreg trxreg;
	s32 trxregaddr;
	sceGsTrxdir trxdir;
	s32 trxdiraddr;
	sceGifTag giftag2;
	_sceDmaTag dmaref;
	_sceDmaTag dmanext;
	sceGifTag giftag3;
	sceGsTexflush texflush;
	s32 texflushaddr;
};

struct _sceGpAdc
{
	s32 ADC;
	s32 pad;
};

struct sceGpAlphaEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsAlpha alpha;
	s32 alphaaddr;
	sceGsPabe pabe;
	s32 pabeaddr;
	sceGsTexa texa;
	s32 texaaddr;
	sceGsFba fba;
	s32 fbaaddr;
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

union sceGsTrxreg
{
	u32 RRW;
	u32 pad12;
	u32 RRH;
	u32 pad44;
};

struct sceGsSt
{
	f32 S;
	f32 T;
};

union sceGsClamp
{
	u32 WMS;
	u32 WMT;
	u32 MINU;
	u32 MAXU;
	u32 MINV;
	u32 MAXV;
	u32 pad44;
};

union _sceGpReg
{
	sceGsPrim prim;
	sceGsRgbaq rgbaq;
	sceGsSt st;
	sceGsUv uv;
	sceGsXyzf xyzf;
	sceGsXyz xyz;
	sceGsTex0 tex0;
	sceGsClamp clamp;
	sceGsFog fog;
	_sceGpAdc adc;
	u32 ul;
	type_5 ui;
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

union sceGsDthe
{
	u32 DTHE;
	u32 pad01;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

union sceGsUv
{
	u32 U;
	u32 pad14;
	u32 V;
	u32 pad30;
};

union sceGsTexa
{
	u32 TA0;
	u32 pad08;
	u32 AEM;
	u32 pad16;
	u32 TA1;
	u32 pad40;
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

union sceGsFba
{
	u32 FBA;
	u32 pad01;
};

union sceGsPrmodecont
{
	u32 AC;
	u32 pad01;
};

union sceGsColclamp
{
	u32 CLAMP;
	u32 pad01;
};

struct sceGsDBuff
{
	type_6 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

union sceGsXyoffset
{
	u32 OFX;
	u32 pad16;
	u32 OFY;
	u32 pad48;
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

union sceGsTex0
{
	u32 TBP0;
	u32 TBW;
	u32 PSM;
	u32 TW;
	u32 TH;
	u32 TCC;
	u32 TFX;
	u32 CBP;
	u32 CPSM;
	u32 CSM;
	u32 CSA;
	u32 CLD;
};

struct _sceGifPackAd
{
	u32 DATA;
	u32 ADDR;
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

union sceGsFog
{
	u32 pad00;
	u32 F;
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

union sceGsXyz
{
	u32 X;
	u32 Y;
	u32 Z;
};

union sceGsAlpha
{
	u32 A;
	u32 B;
	u32 C;
	u32 D;
	u32 pad8;
	u32 FIX;
	u32 pad40;
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

struct sceGpPrimR
{
	_sceDmaTag dmanext;
	sceGifTag giftag1;
	_sceGifPackAd userreg;
	sceGifTag giftag2;
	type_0 reg;
};

struct sceGsTexflush
{
	u32 pad00;
};

struct sceGpTexEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsTex1 tex1;
	s32 tex1addr;
	sceGsTex0 tex0;
	s32 tex0addr;
	sceGsClamp clamp;
	s32 clampaddr;
};

struct xSysFontTbl
{
	s32 x;
	s32 y;
};

union sceGsPabe
{
	u32 PABE;
	u32 pad01;
};

union sceGsXyzf
{
	u32 X;
	u32 Y;
	u32 Z;
	u32 F;
};

union sceGsTrxdir
{
	u32 XDR;
	u32 pad02;
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

type_1 xSysFontLookup;
type_3 xSysFontRGBA;
type_9 excep_table;
type_10 reg_table;
_sceGpChain sChain;
sceGpPrimR* sSprpac;
s32 iExceptionHangCurr;
s32 iExceptionHangCheck;
void* iExceptionHangAddr;
u32 sOldFreeSpace;
s32 sOldTime;

void iExceptionRwDMAInit();
void iExceptionInit();

// iExceptionRwDMAInit__Fv
// Start address: 0x3d7280
void iExceptionRwDMAInit()
{
}

// iExceptionInit__Fv
// Start address: 0x3d7290
void iExceptionInit()
{
}

