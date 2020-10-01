typedef struct sceMpeg;
typedef struct VideoDec;
typedef union sceMpegCbData;
typedef struct TimeStamp;
typedef struct VoData;
typedef struct sceMpegCbDataTimeStamp;
typedef struct VoTag;
typedef struct sceIpuDmaEnv;
typedef enum sceMpegCbType;
typedef struct VoBuf;
typedef struct sceMpegCbDataError;
typedef struct sceMpegCbDataStr;
typedef struct ViBuf;

typedef s32(*type_0)(sceMpeg*, sceMpegCbData*, void*);
typedef s32(*type_2)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
typedef s32(*type_6)(sceMpeg*, sceMpegCbData*, void*);
typedef s32(*type_8)(sceMpeg*, sceMpegCbDataError*, void*);
typedef s32(*type_9)(sceMpeg*, sceMpegCbData*, void*);
typedef s32(*type_10)(sceMpeg*, sceMpegCbData*, void*);

typedef u8 type_1[1228800];
typedef s32 type_3[15];
typedef u32 type_4[29248];
typedef type_4 type_5[2];
typedef u8 type_7[4];

struct sceMpeg
{
	s32 width;
	s32 height;
	s32 frameCount;
	s32 pts;
	s32 dts;
	u32 flags;
	s32 pts2nd;
	s32 dts2nd;
	u32 flags2nd;
	void* sys;
};

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	u32 state;
	s32 sema;
	s32 hid_endimage;
	s32 hid_vblank;
};

union sceMpegCbData
{
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
};

struct TimeStamp
{
	s32 pts;
	s32 dts;
	s32 pos;
	s32 len;
};

struct VoData
{
	type_1 v;
};

struct sceMpegCbDataTimeStamp
{
	sceMpegCbType type;
	s32 pts;
	s32 dts;
};

struct VoTag
{
	s32 status;
	type_3 dummy;
	type_5 v;
};

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

enum sceMpegCbType
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	s32 write;
	s32 count;
	s32 size;
};

struct sceMpegCbDataError
{
	sceMpegCbType type;
	s8* errMessage;
};

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	u8* header;
	u8* data;
	u32 len;
	s32 pts;
	s32 dts;
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

VideoDec videoDec;
VoBuf voBuf;
type_2 mpegTS;
type_0 mpegRestartDMA;
type_10 mpegStopDMA;
type_9 mpegNodata;
type_8 mpegError;

s32 mpegTS(sceMpegCbDataTimeStamp* cbts);
s32 mpegRestartDMA();
s32 mpegStopDMA();
s32 mpegNodata();
s32 mpegError(sceMpegCbDataError* cberror);
s32 decBs0(VideoDec* vd);
void videoDecMain(VideoDec* vd);
s32 videoDecIsFlushed(VideoDec* vd);
s32 videoDecFlush(VideoDec* vd);
s32 videoDecPutTs(VideoDec* vd, s32 pts_val, s32 dts_val, u8* start, s32 len);
u32 videoDecGetState(VideoDec* vd);
void videoDecAbort(VideoDec* vd);
s32 videoDecDelete(VideoDec* vd);
void videoDecEndPut(VideoDec* vd, s32 size);
void videoDecBeginPut(VideoDec* vd, u8** ptr0, s32* len0, u8** ptr1, s32* len1);
s32 videoDecSetStream(VideoDec* vd, s32 strType, s32 ch, type_6 cb, void* data);
s32 videoDecCreate(VideoDec* vd, u8* mpegWork, s32 mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, s32 tagSize, TimeStamp* pts, s32 n_pts);

// mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Start address: 0x1bec60
s32 mpegTS(sceMpegCbDataTimeStamp* cbts)
{
	TimeStamp ts;
}

// mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1becb0
s32 mpegRestartDMA()
{
}

// mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bece0
s32 mpegStopDMA()
{
}

// mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bed10
s32 mpegNodata()
{
}

// mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
// Start address: 0x1bed40
s32 mpegError(sceMpegCbDataError* cberror)
{
}

// decBs0__FP8VideoDec
// Start address: 0x1bed70
s32 decBs0(VideoDec* vd)
{
	VoData* voData;
	s32 ret;
	s32 status;
	s32 i;
	s32 image_w;
	s32 image_h;
}

// videoDecMain__FP8VideoDec
// Start address: 0x1bef40
void videoDecMain(VideoDec* vd)
{
}

// videoDecIsFlushed__FP8VideoDec
// Start address: 0x1befa0
s32 videoDecIsFlushed(VideoDec* vd)
{
}

// videoDecFlush__FP8VideoDec
// Start address: 0x1bf000
s32 videoDecFlush(VideoDec* vd)
{
	u8* pd0;
	u8* pd1;
	u8* pd0Unc;
	u8* pd1Unc;
	type_7 seq_end_code;
	s32 d0;
	s32 d1;
}

// videoDecPutTs__FP8VideoDecllPUci
// Start address: 0x1bf1b0
s32 videoDecPutTs(VideoDec* vd, s32 pts_val, s32 dts_val, u8* start, s32 len)
{
	TimeStamp ts;
}

// videoDecGetState__FP8VideoDec
// Start address: 0x1bf1f0
u32 videoDecGetState(VideoDec* vd)
{
}

// videoDecAbort__FP8VideoDec
// Start address: 0x1bf200
void videoDecAbort(VideoDec* vd)
{
}

// videoDecDelete__FP8VideoDec
// Start address: 0x1bf210
s32 videoDecDelete(VideoDec* vd)
{
}

// videoDecEndPut__FP8VideoDeci
// Start address: 0x1bf250
void videoDecEndPut(VideoDec* vd, s32 size)
{
}

// videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Start address: 0x1bf260
void videoDecBeginPut(VideoDec* vd, u8** ptr0, s32* len0, u8** ptr1, s32* len1)
{
}

// videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
// Start address: 0x1bf270
s32 videoDecSetStream(VideoDec* vd, s32 strType, s32 ch, type_6 cb, void* data)
{
}

// videoDecCreate__FP8VideoDecPUciP1P1iP9TimeStampi
// Start address: 0x1bf290
s32 videoDecCreate(VideoDec* vd, u8* mpegWork, s32 mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, s32 tagSize, TimeStamp* pts, s32 n_pts)
{
}

