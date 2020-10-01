typedef struct iSndFileInfo;
typedef struct xSndVoiceInfo;
typedef enum sound_category;
typedef struct _class_0;
typedef struct xVec3;
typedef struct _class_1;
typedef struct xMat4x3;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_PACKER_ASSETTYPE;
typedef struct SndInfo;
typedef struct iSndInfo;
typedef struct VAGheader;
typedef enum sound_listener_game_mode;
typedef struct xMat3x3;
typedef enum eSndWhereEnum;
typedef struct iSndVol;
typedef struct xSndGlobals;

typedef void(*type_0)(void*, uint32);
typedef void(*type_2)(void*, uint32, void*, int8*);
typedef void(*type_4)(uint32, uint8);
typedef void*(*type_7)(void*, uint32, void*, uint32, uint32*);
typedef void*(*type_8)(void*, uint32, void*, void*, uint32, uint32*);
typedef int32(*type_10)(void*, uint32, void*, int32);
typedef void(*type_13)(uint32, uint8);
typedef void*(*type_15)(void*, uint32, void*, int32*, int32*);
typedef void(*type_19)(void*, uint32, void*);

typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_3[2];
typedef uint32 type_5[2];
typedef int8* type_6[23];
typedef iSndFileInfo type_9[512];
typedef int8 type_11[16];
typedef int8 type_12[4];
typedef int8 type_14[16];
typedef VAGheader type_16[1];
typedef uint32 type_17[1];
typedef int8 type_18[16];
typedef float32 type_20[5];

struct iSndFileInfo
{
	uint32 ID;
	uint32 assetID;
	uint16 sample_rate;
	uint8 is_streamed;
	union
	{
		_class_0 nonstream;
		_class_1 stream;
	};
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

struct _class_0
{
	uint32 address;
	uint32 size;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _class_1
{
	int32 file_index;
	uint32 lsn;
	uint32 data_size;
	uint16 stream_interleave_size;
	uint16 stream_interleave_count;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	type_7 readXForm;
	type_8 writeXForm;
	type_10 assetLoaded;
	type_15 makeData;
	type_19 cleanup;
	type_0 assetUnloaded;
	type_2 writePeek;
};

struct SndInfo
{
	uint32 num_effects;
	uint32 num_streams;
	type_16 vagHeaders;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

struct VAGheader
{
	type_12 id;
	uint32 version;
	uint32 assetID;
	uint32 data_size;
	uint32 frequency;
	uint32 streamInterleaveSize;
	uint32 streamInterleaveCount;
	type_17 reserved2;
	type_18 name;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
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

enum eSndWhereEnum
{
	eSndWhere_NA,
	eSndWhere_iSndSuspendCD,
	eSndWhere_iSndLoadFasterer,
	eSndWhere_UpdateVoiceStatus,
	eSndWhere_UpdateRecycleVoices,
	eSndWhere_UpdateDebugVoices,
	eSndWhere_Update3DSounds,
	eSndWhere_UpdateFireCallbacks,
	eSndWhere_UpdateFlushAsync,
	eSndWhere_DelayFrame,
	eSndWhere_PlayStart,
	eSndWhere_PlayTrigger,
	eSndWhere_PlaySndAsync,
	eSndWhere_PlaySndDone,
	eSndWhere_PlayExternalAsync,
	eSndWhere_PlayExternalWait,
	eSndWhere_PlayExternalDone,
	eSndWhere_PlayStream,
	eSndWhere_PlayStreamAsync,
	eSndWhere_PlayStreamDone,
	eSndWhere_StartStereo,
	eSndWhere_FindFreeVoice,
	eSndWhere_Pause
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
	type_20 categoryVolFader;
	type_1 voice;
	type_3 listenerMat;
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_11 buffer;
type_14 buffer;
type_6 gSndWhere_str;
eSndWhereEnum gSndWhere;
type_9 eeFiles;
int32 eeFileCount;
type_5 currentStatus;
type_13 externalCallback;
uint32 currentSPUAddress;
xSndGlobals gSnd;

void iSndStereo(uint32 stereo);
void iSndSetExternalCallback(type_4 callback);
void iSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer);
void iSndWaitForDeadSounds();
void iSndSetPitch(uint32 snd, float32 pitch);
float32 iSndGetVol(uint32 snd);
void iSndSetVol(uint32 snd, float32 vol);
void iSndStop(uint32 snd);
void iSndPause(uint32 snd, uint32 pause);
uint32 iSndFindFreeVoice(uint32 priority, uint32 flags, uint32 owner);
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch);
uint8 iSndIsReady(uint32 id);
uint32 iSndPlay(xSndVoiceInfo* vp);
uint8 iSndIsPlayingByHandle(uint32 id);
uint8 iSndIsPlaying(uint32 assetID, uint32 parid);
uint8 iSndIsPlaying(uint32 assetID);
void iSndUpdate();
iSndVol iSndCalcVol(xSndVoiceInfo* vp);
void iSndSetEnvironmentalEffect();
void iSndExit();
void iSndInitSceneLoaded();
void iSndLoadFasterer();
void iSndInit();
void iSndSuspendCD();
iSndFileInfo* iSndLookup(uint32 id);

// iSndStereo__FUi
// Start address: 0x1b80c0
void iSndStereo(uint32 stereo)
{
}

// iSndSetExternalCallback__FPFUib_v
// Start address: 0x1b80d0
void iSndSetExternalCallback(type_4 callback)
{
}

// iSndLoadExternalData__FUiPCvi
// Start address: 0x1b80e0
void iSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer)
{
	xSndVoiceInfo* vp;
	int32 i;
}

// iSndWaitForDeadSounds__Fv
// Start address: 0x1b81a0
void iSndWaitForDeadSounds()
{
	int32 i;
	int32 numdelay;
	ulong32 zombies;
	xSndVoiceInfo* vp;
}

// iSndSetPitch__FUif
// Start address: 0x1b8290
void iSndSetPitch(uint32 snd, float32 pitch)
{
	int32 i;
}

// iSndGetVol__FUi
// Start address: 0x1b83e0
float32 iSndGetVol(uint32 snd)
{
	xSndVoiceInfo* vp;
	int32 i;
}

// iSndSetVol__FUif
// Start address: 0x1b8470
void iSndSetVol(uint32 snd, float32 vol)
{
	xSndVoiceInfo* vp;
	int32 i;
}

// iSndStop__FUi
// Start address: 0x1b8660
void iSndStop(uint32 snd)
{
	int32 i;
}

// iSndPause__FUiUi
// Start address: 0x1b8720
void iSndPause(uint32 snd, uint32 pause)
{
	int32 i;
}

// iSndFindFreeVoice__FUiUiUi
// Start address: 0x1b87b0
uint32 iSndFindFreeVoice(uint32 priority, uint32 flags, uint32 owner)
{
	uint32 i;
	uint32 vlo;
	uint32 vhi;
	uint32 best;
	uint32 bestpri;
	int32 bestvol;
	xSndVoiceInfo* vp;
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	int32 volR;
	int32 L;
	int32 R;
}

// iSndStartStereo__FUiUif
// Start address: 0x1b8b40
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
	int32 v1;
	int32 v2;
}

// iSndIsReady__FUi
// Start address: 0x1b8d10
uint8 iSndIsReady(uint32 id)
{
	int32 v;
}

// iSndPlay__FP13xSndVoiceInfo
// Start address: 0x1b8d90
uint32 iSndPlay(xSndVoiceInfo* vp)
{
	iSndVol nvol;
	uint32 voice;
	iSndFileInfo* file;
	iSndFileInfo* file;
	uint8 loop;
	uint8 paused;
	uint32 offset;
	uint32 track;
	uint32 numTracks;
}

// iSndIsPlayingByHandle__FUi
// Start address: 0x1b91f0
uint8 iSndIsPlayingByHandle(uint32 id)
{
	int32 i;
}

// iSndIsPlaying__FUiUi
// Start address: 0x1b9260
uint8 iSndIsPlaying(uint32 assetID, uint32 parid)
{
	int32 i;
}

// iSndIsPlaying__FUi
// Start address: 0x1b92d0
uint8 iSndIsPlaying(uint32 assetID)
{
	int32 i;
}

// iSndUpdate__Fv
// Start address: 0x1b9330
void iSndUpdate()
{
	int32 i;
	xSndVoiceInfo* vp;
	uint8 active;
	int32 i;
	xSndVoiceInfo* vp;
	iSndVol nvol;
	int32 i;
	xSndVoiceInfo* vp;
	int32 testBuffer;
}

// iSndCalcVol__FP13xSndVoiceInfo
// Start address: 0x1b95e0
iSndVol iSndCalcVol(xSndVoiceInfo* vp)
{
	float32 volL;
	float32 volR;
	xVec3 to;
	float32 pan;
	float32 volscale;
	float32 fadeRange;
	float32 tmp;
}

// iSndSetEnvironmentalEffect__F13isound_effect
// Start address: 0x1b98f0
void iSndSetEnvironmentalEffect()
{
}

// iSndExit__Fv
// Start address: 0x1b9900
void iSndExit()
{
}

// iSndInitSceneLoaded__Fv
// Start address: 0x1b9910
void iSndInitSceneLoaded()
{
}

// iSndLoadFasterer__Fv
// Start address: 0x1b9940
void iSndLoadFasterer()
{
	uint32 size;
	int32 index;
	SndInfo* sndInfo;
	VAGheader* vagIterator;
	st_PKR_ASSET_TOCINFO xinfo;
	int8* hipname;
	int32 fileIndex;
	uint32 startSPUAddress;
	uint32 totalToRead;
	int32 i;
	iSndFileInfo* file;
	int32 i;
	st_PKR_ASSET_TOCINFO xinfo;
	iSndFileInfo* file;
}

// iSndInit__Fv
// Start address: 0x1b9bb0
void iSndInit()
{
}

// iSndSuspendCD__FUi
// Start address: 0x1b9bc0
void iSndSuspendCD()
{
}

// iSndLookup__FUi
// Start address: 0x1b9bf0
iSndFileInfo* iSndLookup(uint32 id)
{
	int32 i;
}

