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
typedef uint32 type_2[2];
typedef uint32 type_3[4096];
typedef int8 type_4[128];
typedef uint32 type_5[2];
typedef sceGsDispEnv type_6[2];
typedef int8 type_7[128];
typedef int8 type_8[1024];
typedef int8* type_9[14];
typedef int8* type_10[32];

struct sceGpTextureArg
{
	int16 tbp;
	int16 tbw;
	int16 tpsm;
	int16 tx;
	int16 ty;
	int16 tw;
	int16 th;
	int16 cbp;
	int16 cpsm;
};

union sceGsTex1
{
	ulong32 LCM;
	ulong32 pad01;
	ulong32 MXL;
	ulong32 MMAG;
	ulong32 MMIN;
	ulong32 MTBA;
	ulong32 pad10;
	ulong32 L;
	ulong32 pad21;
	ulong32 K;
	ulong32 pad44;
};

union sceGsBitbltbuf
{
	ulong32 SBP;
	ulong32 pad14;
	ulong32 SBW;
	ulong32 pad22;
	ulong32 SPSM;
	ulong32 pad30;
	ulong32 DBP;
	ulong32 pad46;
	ulong32 DBW;
	ulong32 pad54;
	ulong32 DPSM;
	ulong32 pad62;
};

struct _sceDmaTag
{
	uint16 qwc;
	uint8 mark;
	uint8 id;
	_sceDmaTag* next;
	type_2 p;
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

struct _sceGpChain
{
	<unknown type (0xa510)>* ot;
	<unknown type (0xa510)>* pKick;
	<unknown type (0xa510)>* pEnd;
	int32 resolution;
};

union sceGsTrxpos
{
	ulong32 SSAX;
	ulong32 pad11;
	ulong32 SSAY;
	ulong32 pad27;
	ulong32 DSAX;
	ulong32 pad43;
	ulong32 DSAY;
	ulong32 DIR;
	ulong32 pad61;
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

struct sceGpLoadImage
{
	_sceDmaTag dmacnt;
	sceGifTag giftag1;
	sceGsBitbltbuf bitbltbuf;
	long32 bitbltbufaddr;
	sceGsTrxpos trxpos;
	long32 trxposaddr;
	sceGsTrxreg trxreg;
	long32 trxregaddr;
	sceGsTrxdir trxdir;
	long32 trxdiraddr;
	sceGifTag giftag2;
	_sceDmaTag dmaref;
	_sceDmaTag dmanext;
	sceGifTag giftag3;
	sceGsTexflush texflush;
	long32 texflushaddr;
};

struct _sceGpAdc
{
	int32 ADC;
	int32 pad;
};

struct sceGpAlphaEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsAlpha alpha;
	long32 alphaaddr;
	sceGsPabe pabe;
	long32 pabeaddr;
	sceGsTexa texa;
	long32 texaaddr;
	sceGsFba fba;
	long32 fbaaddr;
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

union sceGsTrxreg
{
	ulong32 RRW;
	ulong32 pad12;
	ulong32 RRH;
	ulong32 pad44;
};

struct sceGsSt
{
	float32 S;
	float32 T;
};

union sceGsClamp
{
	ulong32 WMS;
	ulong32 WMT;
	ulong32 MINU;
	ulong32 MAXU;
	ulong32 MINV;
	ulong32 MAXV;
	ulong32 pad44;
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
	ulong32 ul;
	type_5 ui;
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

union sceGsDthe
{
	ulong32 DTHE;
	ulong32 pad01;
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
	ulong32 U;
	ulong32 pad14;
	ulong32 V;
	ulong32 pad30;
};

union sceGsTexa
{
	ulong32 TA0;
	ulong32 pad08;
	ulong32 AEM;
	ulong32 pad16;
	ulong32 TA1;
	ulong32 pad40;
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

union sceGsFba
{
	ulong32 FBA;
	ulong32 pad01;
};

union sceGsPrmodecont
{
	ulong32 AC;
	ulong32 pad01;
};

union sceGsColclamp
{
	ulong32 CLAMP;
	ulong32 pad01;
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
	ulong32 OFX;
	ulong32 pad16;
	ulong32 OFY;
	ulong32 pad48;
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

union sceGsTex0
{
	ulong32 TBP0;
	ulong32 TBW;
	ulong32 PSM;
	ulong32 TW;
	ulong32 TH;
	ulong32 TCC;
	ulong32 TFX;
	ulong32 CBP;
	ulong32 CPSM;
	ulong32 CSM;
	ulong32 CSA;
	ulong32 CLD;
};

struct _sceGifPackAd
{
	ulong32 DATA;
	ulong32 ADDR;
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

union sceGsFog
{
	ulong32 pad00;
	ulong32 F;
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

union sceGsXyz
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
};

union sceGsAlpha
{
	ulong32 A;
	ulong32 B;
	ulong32 C;
	ulong32 D;
	ulong32 pad8;
	ulong32 FIX;
	ulong32 pad40;
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
	ulong32 pad00;
};

struct sceGpTexEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsTex1 tex1;
	long32 tex1addr;
	sceGsTex0 tex0;
	long32 tex0addr;
	sceGsClamp clamp;
	long32 clampaddr;
};

struct xSysFontTbl
{
	int32 x;
	int32 y;
};

union sceGsPabe
{
	ulong32 PABE;
	ulong32 pad01;
};

union sceGsXyzf
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
	ulong32 F;
};

union sceGsTrxdir
{
	ulong32 XDR;
	ulong32 pad02;
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

type_1 xSysFontLookup;
type_3 xSysFontRGBA;
type_9 excep_table;
type_10 reg_table;
_sceGpChain sChain;
sceGpPrimR* sSprpac;
long32 iExceptionHangCurr;
long32 iExceptionHangCheck;
void* iExceptionHangAddr;
uint32 sOldFreeSpace;
long32 sOldTime;

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

