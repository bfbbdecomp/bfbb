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

typedef void(*type_0)(void*, u32);
typedef void(*type_2)(void*, u32, void*, s8*);
typedef void(*type_4)(u32, u8);
typedef void*(*type_7)(void*, u32, void*, u32, u32*);
typedef void*(*type_8)(void*, u32, void*, void*, u32, u32*);
typedef s32(*type_10)(void*, u32, void*, s32);
typedef void(*type_13)(u32, u8);
typedef void*(*type_15)(void*, u32, void*, s32*, s32*);
typedef void(*type_19)(void*, u32, void*);

typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_3[2];
typedef u32 type_5[2];
typedef s8* type_6[23];
typedef iSndFileInfo type_9[512];
typedef s8 type_11[16];
typedef s8 type_12[4];
typedef s8 type_14[16];
typedef VAGheader type_16[1];
typedef u32 type_17[1];
typedef s8 type_18[16];
typedef f32 type_20[5];

struct iSndFileInfo
{
	u32 ID;
	u32 assetID;
	u16 sample_rate;
	u8 is_streamed;
	union
	{
		_class_0 nonstream;
		_class_1 stream;
	};
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
	u32 address;
	u32 size;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct _class_1
{
	s32 file_index;
	u32 lsn;
	u32 data_size;
	u16 stream_interleave_size;
	u16 stream_interleave_count;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
	void* mempos;
};

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	u32 num_effects;
	u32 num_streams;
	type_16 vagHeaders;
};

struct iSndInfo
{
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

struct VAGheader
{
	type_12 id;
	u32 version;
	u32 assetID;
	u32 data_size;
	u32 frequency;
	u32 streamInterleaveSize;
	u32 streamInterleaveCount;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
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
	s16 volL;
	s16 volR;
};

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_20 categoryVolFader;
	type_1 voice;
	type_3 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
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
s32 eeFileCount;
type_5 currentStatus;
type_13 externalCallback;
u32 currentSPUAddress;
xSndGlobals gSnd;

void iSndStereo(u32 stereo);
void iSndSetExternalCallback(type_4 callback);
void iSndLoadExternalData(u32 snd, void* data, s32 forceBuffer);
void iSndWaitForDeadSounds();
void iSndSetPitch(u32 snd, f32 pitch);
f32 iSndGetVol(u32 snd);
void iSndSetVol(u32 snd, f32 vol);
void iSndStop(u32 snd);
void iSndPause(u32 snd, u32 pause);
u32 iSndFindFreeVoice(u32 priority, u32 flags, u32 owner);
void iSndStartStereo(u32 id1, u32 id2, f32 pitch);
u8 iSndIsReady(u32 id);
u32 iSndPlay(xSndVoiceInfo* vp);
u8 iSndIsPlayingByHandle(u32 id);
u8 iSndIsPlaying(u32 assetID, u32 parid);
u8 iSndIsPlaying(u32 assetID);
void iSndUpdate();
iSndVol iSndCalcVol(xSndVoiceInfo* vp);
void iSndSetEnvironmentalEffect();
void iSndExit();
void iSndInitSceneLoaded();
void iSndLoadFasterer();
void iSndInit();
void iSndSuspendCD();
iSndFileInfo* iSndLookup(u32 id);

// iSndStereo__FUi
// Start address: 0x1b80c0
void iSndStereo(u32 stereo)
{
}

// iSndSetExternalCallback__FPFUib_v
// Start address: 0x1b80d0
void iSndSetExternalCallback(type_4 callback)
{
}

// iSndLoadExternalData__FUiPCvi
// Start address: 0x1b80e0
void iSndLoadExternalData(u32 snd, void* data, s32 forceBuffer)
{
	xSndVoiceInfo* vp;
	s32 i;
}

// iSndWaitForDeadSounds__Fv
// Start address: 0x1b81a0
void iSndWaitForDeadSounds()
{
	s32 i;
	s32 numdelay;
	u32 zombies;
	xSndVoiceInfo* vp;
}

// iSndSetPitch__FUif
// Start address: 0x1b8290
void iSndSetPitch(u32 snd, f32 pitch)
{
	s32 i;
}

// iSndGetVol__FUi
// Start address: 0x1b83e0
f32 iSndGetVol(u32 snd)
{
	xSndVoiceInfo* vp;
	s32 i;
}

// iSndSetVol__FUif
// Start address: 0x1b8470
void iSndSetVol(u32 snd, f32 vol)
{
	xSndVoiceInfo* vp;
	s32 i;
}

// iSndStop__FUi
// Start address: 0x1b8660
void iSndStop(u32 snd)
{
	s32 i;
}

// iSndPause__FUiUi
// Start address: 0x1b8720
void iSndPause(u32 snd, u32 pause)
{
	s32 i;
}

// iSndFindFreeVoice__FUiUiUi
// Start address: 0x1b87b0
u32 iSndFindFreeVoice(u32 priority, u32 flags, u32 owner)
{
	u32 i;
	u32 vlo;
	u32 vhi;
	u32 best;
	u32 bestpri;
	s32 bestvol;
	xSndVoiceInfo* vp;
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	s32 volR;
	s32 L;
	s32 R;
}

// iSndStartStereo__FUiUif
// Start address: 0x1b8b40
void iSndStartStereo(u32 id1, u32 id2, f32 pitch)
{
	s32 v1;
	s32 v2;
}

// iSndIsReady__FUi
// Start address: 0x1b8d10
u8 iSndIsReady(u32 id)
{
	s32 v;
}

// iSndPlay__FP13xSndVoiceInfo
// Start address: 0x1b8d90
u32 iSndPlay(xSndVoiceInfo* vp)
{
	iSndVol nvol;
	u32 voice;
	iSndFileInfo* file;
	iSndFileInfo* file;
	u8 loop;
	u8 paused;
	u32 offset;
	u32 track;
	u32 numTracks;
}

// iSndIsPlayingByHandle__FUi
// Start address: 0x1b91f0
u8 iSndIsPlayingByHandle(u32 id)
{
	s32 i;
}

// iSndIsPlaying__FUiUi
// Start address: 0x1b9260
u8 iSndIsPlaying(u32 assetID, u32 parid)
{
	s32 i;
}

// iSndIsPlaying__FUi
// Start address: 0x1b92d0
u8 iSndIsPlaying(u32 assetID)
{
	s32 i;
}

// iSndUpdate__Fv
// Start address: 0x1b9330
void iSndUpdate()
{
	s32 i;
	xSndVoiceInfo* vp;
	u8 active;
	s32 i;
	xSndVoiceInfo* vp;
	iSndVol nvol;
	s32 i;
	xSndVoiceInfo* vp;
	s32 testBuffer;
}

// iSndCalcVol__FP13xSndVoiceInfo
// Start address: 0x1b95e0
iSndVol iSndCalcVol(xSndVoiceInfo* vp)
{
	f32 volL;
	f32 volR;
	xVec3 to;
	f32 pan;
	f32 volscale;
	f32 fadeRange;
	f32 tmp;
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
	u32 size;
	s32 index;
	SndInfo* sndInfo;
	VAGheader* vagIterator;
	st_PKR_ASSET_TOCINFO xinfo;
	s8* hipname;
	s32 fileIndex;
	u32 startSPUAddress;
	u32 totalToRead;
	s32 i;
	iSndFileInfo* file;
	s32 i;
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
iSndFileInfo* iSndLookup(u32 id)
{
	s32 i;
}

