typedef struct sceGpTextureArg;
typedef struct sceGsTex1;
typedef struct sceGsBitbltbuf;
typedef struct _sceDmaTag;
typedef struct sceGsFrame;
typedef struct sceGsPrim;
typedef struct _sceGpChain;
typedef struct sceGsTrxpos;
typedef struct sceGsZbuf;
typedef struct tGS_DISPLAY2;
typedef struct sceGpLoadImage;
typedef struct _sceGpAdc;
typedef struct sceGpAlphaEnv;
typedef struct sceGsClear;
typedef struct sceGsTrxreg;
typedef struct sceGsSt;
typedef struct sceGsClamp;
typedef struct _sceGpReg;
typedef struct tGS_PMODE;
typedef struct sceGsDthe;
typedef struct sceGsTest;
typedef struct sceGsDispEnv;
typedef struct sceGsUv;
typedef struct sceGsTexa;
typedef struct tGS_BGCOLOR;
typedef struct sceGsFba;
typedef struct sceGsPrmodecont;
typedef struct sceGsColclamp;
typedef struct sceGsDBuff;
typedef struct sceGsXyoffset;
typedef struct sceGsDrawEnv1;
typedef struct sceGsRgbaq;
typedef struct sceGsTex0;
typedef struct _sceGifPackAd;
typedef struct tGS_SMODE2;
typedef struct sceGsFog;
typedef struct tGS_DISPFB2;
typedef struct sceGsXyz;
typedef struct sceGsAlpha;
typedef struct sceGifTag;
typedef struct sceGpPrimR;
typedef struct sceGsTexflush;
typedef struct sceGpTexEnv;
typedef struct xSysFontTbl;
typedef struct sceGsPabe;
typedef struct sceGsXyzf;
typedef struct sceGsTrxdir;
typedef struct sceGsScissor;


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

struct sceGsTex1
{
	struct
	{
		ulong32 LCM : 1;
		ulong32 pad01 : 1;
		ulong32 MXL : 3;
		ulong32 MMAG : 1;
		ulong32 MMIN : 3;
		ulong32 MTBA : 1;
		ulong32 pad10 : 9;
		ulong32 L : 2;
		ulong32 pad21 : 11;
		ulong32 K : 12;
		ulong32 pad44 : 20;
	};
};

struct sceGsBitbltbuf
{
	struct
	{
		ulong32 SBP : 14;
		ulong32 pad14 : 2;
		ulong32 SBW : 6;
		ulong32 pad22 : 2;
		ulong32 SPSM : 6;
		ulong32 pad30 : 2;
		ulong32 DBP : 14;
		ulong32 pad46 : 2;
		ulong32 DBW : 6;
		ulong32 pad54 : 2;
		ulong32 DPSM : 6;
		ulong32 pad62 : 2;
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

struct _sceGpChain
{
	<unknown fundamental type (0xa510)>* ot;
	<unknown fundamental type (0xa510)>* pKick;
	<unknown fundamental type (0xa510)>* pEnd;
	int32 resolution;
};

struct sceGsTrxpos
{
	struct
	{
		ulong32 SSAX : 11;
		ulong32 pad11 : 5;
		ulong32 SSAY : 11;
		ulong32 pad27 : 5;
		ulong32 DSAX : 11;
		ulong32 pad43 : 5;
		ulong32 DSAY : 11;
		ulong32 DIR : 2;
		ulong32 pad61 : 3;
	};
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

struct sceGsTrxreg
{
	struct
	{
		ulong32 RRW : 12;
		ulong32 pad12 : 20;
		ulong32 RRH : 12;
		ulong32 pad44 : 20;
	};
};

struct sceGsSt
{
	float32 S;
	float32 T;
};

struct sceGsClamp
{
	struct
	{
		ulong32 WMS : 2;
		ulong32 WMT : 2;
		ulong32 MINU : 10;
		ulong32 MAXU : 10;
		ulong32 MINV : 10;
		ulong32 MAXV : 10;
		ulong32 pad44 : 20;
	};
};

struct _sceGpReg
{
	union
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
		uint32 ui[2];
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

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct sceGsUv
{
	struct
	{
		ulong32 U : 14;
		ulong32 pad14 : 2;
		ulong32 V : 14;
		ulong32 pad30 : 34;
	};
};

struct sceGsTexa
{
	struct
	{
		ulong32 TA0 : 8;
		ulong32 pad08 : 7;
		ulong32 AEM : 1;
		ulong32 pad16 : 16;
		ulong32 TA1 : 8;
		ulong32 pad40 : 24;
	};
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

struct sceGsFba
{
	struct
	{
		ulong32 FBA : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
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
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 A : 8;
	};
	float32 Q;
};

struct sceGsTex0
{
	struct
	{
		ulong32 TBP0 : 14;
		ulong32 TBW : 6;
		ulong32 PSM : 6;
		ulong32 TW : 4;
		ulong32 TH : 4;
		ulong32 TCC : 1;
		ulong32 TFX : 2;
		ulong32 CBP : 14;
		ulong32 CPSM : 4;
		ulong32 CSM : 1;
		ulong32 CSA : 5;
		ulong32 CLD : 3;
	};
};

struct _sceGifPackAd
{
	ulong32 DATA;
	ulong32 ADDR;
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

struct sceGsFog
{
	struct
	{
		ulong32 pad00 : 56;
		ulong32 F : 8;
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

struct sceGsXyz
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 32;
	};
};

struct sceGsAlpha
{
	struct
	{
		ulong32 A : 2;
		ulong32 B : 2;
		ulong32 C : 2;
		ulong32 D : 2;
		ulong32 pad8 : 24;
		ulong32 FIX : 8;
		ulong32 pad40 : 24;
	};
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

struct sceGpPrimR
{
	_sceDmaTag dmanext;
	sceGifTag giftag1;
	_sceGifPackAd userreg;
	sceGifTag giftag2;
	_sceGpReg reg[1];
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

struct sceGsPabe
{
	struct
	{
		ulong32 PABE : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGsXyzf
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 24;
		ulong32 F : 8;
	};
};

struct sceGsTrxdir
{
	struct
	{
		ulong32 XDR : 2;
		ulong32 pad02 : 62;
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

xSysFontTbl xSysFontLookup[128];
uint32 xSysFontRGBA[4096];
int8* excep_table[14];
int8* reg_table[32];
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
	// Line 444, Address: 0x3d7280, Func Offset: 0
	// Func End, Address: 0x3d7288, Func Offset: 0x8
}

// iExceptionInit__Fv
// Start address: 0x3d7290
void iExceptionInit()
{
	// Line 414, Address: 0x3d7290, Func Offset: 0
	// Func End, Address: 0x3d7298, Func Offset: 0x8
}

