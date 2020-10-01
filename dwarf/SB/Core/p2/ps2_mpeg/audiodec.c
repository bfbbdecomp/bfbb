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


typedef f32 type_0[5];
typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_2[2];
typedef s8 type_3[4];
typedef s8 type_4[4];
typedef s8 type_5[2048];

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	s32 state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	s32 hdrCount;
	u8* data;
	s32 put;
	s32 count;
	s32 size;
	s32 totalBytes;
	s32 iopBuff;
	s32 iopBuffSize;
	s32 iopLastPos;
	s32 iopPausePos;
	s32 totalBytesSent;
	s32 iopZero;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct iSndInfo
{
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

struct SpuStreamHeader
{
	type_3 id;
	s32 size;
	s32 type;
	s32 rate;
	s32 ch;
	s32 interSize;
	s32 loopStart;
	s32 loopEnd;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xSndVoiceInfo
{
	u32 assetID;
	u32 sndID;
	u32 parentID;
	xVec3* parentPos;
	s32 internalID;
	u32 flags;
	u16 pad;
	u16 priority;
	f32 vol;
	f32 pitch;
	u32 sample_rate;
	u32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	f32 innerRadius2;
	f32 outerRadius2;
	u32 lock_owner;
	iSndInfo ps;
};

struct sceSifDmaData
{
	u32 data;
	u32 addr;
	u32 size;
	u32 mode;
};

struct SpuStreamBody
{
	type_4 id;
	s32 size;
};

struct iSndVol
{
	s16 volL;
	s16 volR;
};

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_0 categoryVolFader;
	type_1 voice;
	type_2 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_5 _0_buf;
xSndGlobals gSnd;

s32 sendToIOP2area(s32 pd0, s32 d0, s32 pd1, s32 d1, u8* ps0, s32 s0, u8* ps1, s32 s1);
s32 audioDecSendToIOP(AudioDec* ad);
s32 audioDecIsPreset(AudioDec* ad);
void audioDecEndPut(AudioDec* ad, s32 size);
void audioDecBeginPut(AudioDec* ad, u8** ptr0, s32* len0, u8** ptr1, s32* len1);
void audioDecReset(AudioDec* ad);
void audioDecStart(AudioDec* ad);
s32 audioDecDelete(AudioDec* ad);
s32 audioDecCreate(AudioDec* ad, u8* buff, s32 buffSize, s32 iopBuffSize);

// sendToIOP2area__FiiiiPUciPUci
// Start address: 0x1bb9e0
s32 sendToIOP2area(s32 pd0, s32 d0, s32 pd1, s32 d1, u8* ps0, s32 s0, u8* ps1, s32 s1)
{
	s32 diff;
}

// audioDecSendToIOP__FP8AudioDec
// Start address: 0x1bbd10
s32 audioDecSendToIOP(AudioDec* ad)
{
	s32 pd0;
	s32 pd1;
	s32 d0;
	s32 d1;
	u8* ps0;
	s32 s1;
	s32 count_sent;
	s32 countAdj;
	s32 pos;
}

// audioDecIsPreset__FP8AudioDec
// Start address: 0x1bbf10
s32 audioDecIsPreset(AudioDec* ad)
{
}

// audioDecEndPut__FP8AudioDeci
// Start address: 0x1bbf30
void audioDecEndPut(AudioDec* ad, s32 size)
{
	s32 hdr_add;
}

// audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Start address: 0x1bbfc0
void audioDecBeginPut(AudioDec* ad, u8** ptr0, s32* len0, u8** ptr1, s32* len1)
{
	s32 len;
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
s32 audioDecDelete(AudioDec* ad)
{
}

// audioDecCreate__FP8AudioDecPUcii
// Start address: 0x1bc1e0
s32 audioDecCreate(AudioDec* ad, u8* buff, s32 buffSize, s32 iopBuffSize)
{
}

