typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef struct TimeStamp;
typedef struct SemaParam;
typedef union QWORD;


typedef u32 type_0[2];
typedef u32 type_1[4];
typedef u16 type_2[8];
typedef u8 type_3[16];

struct sceIpuDmaEnv
{
	u32 d4madr;
	u32 d4tadr;
	u32 d4qwc;
	u32 d4chcr;
	u32 d3madr;
	u32 d3qwc;
	u32 d3chcr;
	u32 ipubp;
	u32 ipuctrl;
};

struct ViBuf
{
	<unknown type (0xa510)>* data;
	<unknown type (0xa510)>* tag;
	s32 n;
	s32 dmaStart;
	s32 dmaN;
	s32 readBytes;
	s32 buffSize;
	sceIpuDmaEnv env;
	s32 sema;
	s32 isActive;
	s32 totalBytes;
	TimeStamp* ts;
	s32 n_ts;
	s32 count_ts;
	s32 wt_ts;
};

struct TimeStamp
{
	s32 pts;
	s32 dts;
	s32 pos;
	s32 len;
};

struct SemaParam
{
	s32 currentCount;
	s32 maxCount;
	s32 initCount;
	s32 numWaitThreads;
	u32 attr;
	u32 option;
};

union QWORD
{
	<unknown type (0xa510)> q;
	type_0 l;
	type_1 i;
	type_2 s;
	type_3 c;
};


s32 viBufGetTs(ViBuf* f, TimeStamp* ts);
s32 viBufPutTs(ViBuf* f, TimeStamp* ts);
s32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts);
void viBufFlush(ViBuf* f);
s32 viBufCount(ViBuf* f);
s32 viBufDelete(ViBuf* f);
s32 viBufRestartDMA(ViBuf* f);
s32 viBufStopDMA(ViBuf* f);
s32 viBufAddDMA(ViBuf* f);
void viBufEndPut(ViBuf* f, s32 size);
void viBufBeginPut(ViBuf* f, u8** ptr0, s32* len0, u8** ptr1, s32* len1);
s32 viBufReset(ViBuf* f);
s32 viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, s32 size, TimeStamp* ts, s32 n_ts);

// viBufGetTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdb70
s32 viBufGetTs(ViBuf* f, TimeStamp* ts)
{
	u32 d4madr;
	u32 ipubp;
	s32 bp;
	s32 datasize;
	s32 isEnd;
	s32 tscount;
	s32 i;
	s32 rd;
}

// viBufPutTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdd30
s32 viBufPutTs(ViBuf* f, TimeStamp* ts)
{
	s32 ret;
}

// viBufModifyPts__FP5ViBufP9TimeStamp
// Start address: 0x1bde70
s32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
	TimeStamp* ts;
	s32 rd;
	s32 datasize;
	s32 loop;
}

// viBufFlush__FP5ViBuf
// Start address: 0x1bdfc0
void viBufFlush(ViBuf* f)
{
}

// viBufCount__FP5ViBuf
// Start address: 0x1be010
s32 viBufCount(ViBuf* f)
{
	s32 ret;
}

// viBufDelete__FP5ViBuf
// Start address: 0x1be060
s32 viBufDelete(ViBuf* f)
{
}

// viBufRestartDMA__FP5ViBuf
// Start address: 0x1be0f0
s32 viBufRestartDMA(ViBuf* f)
{
	s32 bp;
	u32 d4madr_next;
	u32 d4qwc_next;
	u32 d4tadr_next;
	u32 d4chcr_next;
}

// viBufStopDMA__FP5ViBuf
// Start address: 0x1be490
s32 viBufStopDMA(ViBuf* f)
{
}

// viBufAddDMA__FP5ViBuf
// Start address: 0x1be5e0
s32 viBufAddDMA(ViBuf* f)
{
	s32 i;
	s32 index;
	s32 last;
	u32 d4chcr;
	s32 isNewData;
	s32 consume;
	s32 read_start;
	s32 read_n;
}

// viBufEndPut__FP5ViBufi
// Start address: 0x1be8e0
void viBufEndPut(ViBuf* f, s32 size)
{
}

// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Start address: 0x1be940
void viBufBeginPut(ViBuf* f, u8** ptr0, s32* len0, u8** ptr1, s32* len1)
{
	s32 es;
	s32 en;
}

// viBufReset__FP5ViBuf
// Start address: 0x1bea40
s32 viBufReset(ViBuf* f)
{
	s32 i;
}

// viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Start address: 0x1bebe0
s32 viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, s32 size, TimeStamp* ts, s32 n_ts)
{
	SemaParam param;
}

