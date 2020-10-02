typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef struct TimeStamp;
typedef struct SemaParam;
typedef union QWORD;


typedef ulong32 type_0[2];
typedef uint32 type_1[4];
typedef uint16 type_2[8];
typedef uint8 type_3[16];

struct sceIpuDmaEnv
{
	uint32 d4madr;
	uint32 d4tadr;
	uint32 d4qwc;
	uint32 d4chcr;
	uint32 d3madr;
	uint32 d3qwc;
	uint32 d3chcr;
	uint32 ipubp;
	uint32 ipuctrl;
};

struct ViBuf
{
	<unknown type (0xa510)>* data;
	<unknown type (0xa510)>* tag;
	int32 n;
	int32 dmaStart;
	int32 dmaN;
	int32 readBytes;
	int32 buffSize;
	sceIpuDmaEnv env;
	int32 sema;
	int32 isActive;
	long32 totalBytes;
	TimeStamp* ts;
	int32 n_ts;
	int32 count_ts;
	int32 wt_ts;
};

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct SemaParam
{
	int32 currentCount;
	int32 maxCount;
	int32 initCount;
	int32 numWaitThreads;
	uint32 attr;
	uint32 option;
};

union QWORD
{
	<unknown type (0xa510)> q;
	type_0 l;
	type_1 i;
	type_2 s;
	type_3 c;
};


int32 viBufGetTs(ViBuf* f, TimeStamp* ts);
int32 viBufPutTs(ViBuf* f, TimeStamp* ts);
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts);
void viBufFlush(ViBuf* f);
int32 viBufCount(ViBuf* f);
int32 viBufDelete(ViBuf* f);
int32 viBufRestartDMA(ViBuf* f);
int32 viBufStopDMA(ViBuf* f);
int32 viBufAddDMA(ViBuf* f);
void viBufEndPut(ViBuf* f, int32 size);
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
int32 viBufReset(ViBuf* f);
int32 viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts);

// viBufGetTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdb70
int32 viBufGetTs(ViBuf* f, TimeStamp* ts)
{
	uint32 d4madr;
	uint32 ipubp;
	int32 bp;
	int32 datasize;
	int32 isEnd;
	int32 tscount;
	int32 i;
	int32 rd;
}

// viBufPutTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdd30
int32 viBufPutTs(ViBuf* f, TimeStamp* ts)
{
	int32 ret;
}

// viBufModifyPts__FP5ViBufP9TimeStamp
// Start address: 0x1bde70
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
	TimeStamp* ts;
	int32 rd;
	int32 datasize;
	int32 loop;
}

// viBufFlush__FP5ViBuf
// Start address: 0x1bdfc0
void viBufFlush(ViBuf* f)
{
}

// viBufCount__FP5ViBuf
// Start address: 0x1be010
int32 viBufCount(ViBuf* f)
{
	int32 ret;
}

// viBufDelete__FP5ViBuf
// Start address: 0x1be060
int32 viBufDelete(ViBuf* f)
{
}

// viBufRestartDMA__FP5ViBuf
// Start address: 0x1be0f0
int32 viBufRestartDMA(ViBuf* f)
{
	int32 bp;
	uint32 d4madr_next;
	uint32 d4qwc_next;
	uint32 d4tadr_next;
	uint32 d4chcr_next;
}

// viBufStopDMA__FP5ViBuf
// Start address: 0x1be490
int32 viBufStopDMA(ViBuf* f)
{
}

// viBufAddDMA__FP5ViBuf
// Start address: 0x1be5e0
int32 viBufAddDMA(ViBuf* f)
{
	int32 i;
	int32 index;
	int32 last;
	uint32 d4chcr;
	int32 isNewData;
	int32 consume;
	int32 read_start;
	int32 read_n;
}

// viBufEndPut__FP5ViBufi
// Start address: 0x1be8e0
void viBufEndPut(ViBuf* f, int32 size)
{
}

// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Start address: 0x1be940
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 es;
	int32 en;
}

// viBufReset__FP5ViBuf
// Start address: 0x1bea40
int32 viBufReset(ViBuf* f)
{
	int32 i;
}

// viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Start address: 0x1bebe0
int32 viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts)
{
	SemaParam param;
}

