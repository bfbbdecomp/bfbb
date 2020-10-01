typedef struct xVec3;
typedef enum sound_category;
typedef struct AudioDec;
typedef struct xMat4x3;
typedef struct xMat3x3;
typedef struct iSndInfo;
typedef struct SpuStreamHeader;
typedef enum sound_listener_game_mode;
typedef struct xSndVoiceInfo;
typedef struct sceSifDmaData;
typedef struct SpuStreamBody;
typedef struct iSndVol;
typedef struct xSndGlobals;


typedef float32 type_0[5];
typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_2[2];
typedef int8 type_3[4];
typedef int8 type_4[4];
typedef int8 type_5[2048];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct AudioDec
{
	int32 state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int32 hdrCount;
	uint8* data;
	int32 put;
	int32 count;
	int32 size;
	int32 totalBytes;
	int32 iopBuff;
	int32 iopBuffSize;
	int32 iopLastPos;
	int32 iopPausePos;
	int32 totalBytesSent;
	int32 iopZero;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

struct SpuStreamHeader
{
	type_3 id;
	int32 size;
	int32 type;
	int32 rate;
	int32 ch;
	int32 interSize;
	int32 loopStart;
	int32 loopEnd;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
};

struct sceSifDmaData
{
	uint32 data;
	uint32 addr;
	uint32 size;
	uint32 mode;
};

struct SpuStreamBody
{
	type_4 id;
	int32 size;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	type_0 categoryVolFader;
	type_1 voice;
	type_2 listenerMat;
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_5 _0_buf;
xSndGlobals gSnd;

int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1);
int32 audioDecSendToIOP(AudioDec* ad);
int32 audioDecIsPreset(AudioDec* ad);
void audioDecEndPut(AudioDec* ad, int32 size);
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
void audioDecReset(AudioDec* ad);
void audioDecStart(AudioDec* ad);
int32 audioDecDelete(AudioDec* ad);
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize);

// sendToIOP2area__FiiiiPUciPUci
// Start address: 0x1bb9e0
int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1)
{
	int32 diff;
}

// audioDecSendToIOP__FP8AudioDec
// Start address: 0x1bbd10
int32 audioDecSendToIOP(AudioDec* ad)
{
	int32 pd0;
	int32 pd1;
	int32 d0;
	int32 d1;
	uint8* ps0;
	int32 s1;
	int32 count_sent;
	int32 countAdj;
	int32 pos;
}

// audioDecIsPreset__FP8AudioDec
// Start address: 0x1bbf10
int32 audioDecIsPreset(AudioDec* ad)
{
}

// audioDecEndPut__FP8AudioDeci
// Start address: 0x1bbf30
void audioDecEndPut(AudioDec* ad, int32 size)
{
	int32 hdr_add;
}

// audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Start address: 0x1bbfc0
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 len;
}

// audioDecReset__FP8AudioDec
// Start address: 0x1bc080
void audioDecReset(AudioDec* ad)
{
}

// audioDecStart__FP8AudioDec
// Start address: 0x1bc130
void audioDecStart(AudioDec* ad)
{
}

// audioDecDelete__FP8AudioDec
// Start address: 0x1bc1a0
int32 audioDecDelete(AudioDec* ad)
{
}

// audioDecCreate__FP8AudioDecPUcii
// Start address: 0x1bc1e0
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize)
{
}

