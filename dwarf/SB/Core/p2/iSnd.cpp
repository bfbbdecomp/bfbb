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
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct SndInfo
{
	uint32 num_effects;
	uint32 num_streams;
	VAGheader vagHeaders[1];
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
	int8 id[4];
	uint32 version;
	uint32 assetID;
	uint32 data_size;
	uint32 frequency;
	uint32 streamInterleaveSize;
	uint32 streamInterleaveCount;
	uint32 reserved2[1];
	int8 name[16];
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
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

int8 buffer[16];
int8 buffer[16];
int8* gSndWhere_str[23];
eSndWhereEnum gSndWhere;
iSndFileInfo eeFiles[512];
int32 eeFileCount;
uint32 currentStatus[2];
void(*externalCallback)(uint32, uint8);
uint32 currentSPUAddress;
xSndGlobals gSnd;

void iSndStereo(uint32 stereo);
void iSndSetExternalCallback(void(*callback)(uint32, uint8));
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
	// Line 1399, Address: 0x1b80c0, Func Offset: 0
	// Line 1400, Address: 0x1b80c4, Func Offset: 0x4
	// Func End, Address: 0x1b80cc, Func Offset: 0xc
}

// iSndSetExternalCallback__FPFUib_v
// Start address: 0x1b80d0
void iSndSetExternalCallback(void(*callback)(uint32, uint8))
{
	// Line 1390, Address: 0x1b80d0, Func Offset: 0
	// Func End, Address: 0x1b80d8, Func Offset: 0x8
}

// iSndLoadExternalData__FUiPCvi
// Start address: 0x1b80e0
void iSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer)
{
	xSndVoiceInfo* vp;
	int32 i;
	// Line 1372, Address: 0x1b80e0, Func Offset: 0
	// Line 1373, Address: 0x1b8108, Func Offset: 0x28
	// Line 1374, Address: 0x1b8110, Func Offset: 0x30
	// Line 1375, Address: 0x1b8118, Func Offset: 0x38
	// Line 1378, Address: 0x1b8138, Func Offset: 0x58
	// Line 1381, Address: 0x1b8140, Func Offset: 0x60
	// Line 1382, Address: 0x1b8154, Func Offset: 0x74
	// Line 1383, Address: 0x1b8164, Func Offset: 0x84
	// Line 1384, Address: 0x1b8168, Func Offset: 0x88
	// Line 1385, Address: 0x1b8178, Func Offset: 0x98
	// Func End, Address: 0x1b8198, Func Offset: 0xb8
}

// iSndWaitForDeadSounds__Fv
// Start address: 0x1b81a0
void iSndWaitForDeadSounds()
{
	int32 i;
	int32 numdelay;
	ulong32 zombies;
	xSndVoiceInfo* vp;
	// Line 1335, Address: 0x1b81a0, Func Offset: 0
	// Line 1337, Address: 0x1b81b4, Func Offset: 0x14
	// Line 1335, Address: 0x1b81b8, Func Offset: 0x18
	// Line 1338, Address: 0x1b81bc, Func Offset: 0x1c
	// Line 1340, Address: 0x1b81c0, Func Offset: 0x20
	// Line 1339, Address: 0x1b81c4, Func Offset: 0x24
	// Line 1340, Address: 0x1b81c8, Func Offset: 0x28
	// Line 1341, Address: 0x1b81cc, Func Offset: 0x2c
	// Line 1342, Address: 0x1b81d4, Func Offset: 0x34
	// Line 1343, Address: 0x1b81e8, Func Offset: 0x48
	// Line 1344, Address: 0x1b81f4, Func Offset: 0x54
	// Line 1345, Address: 0x1b8200, Func Offset: 0x60
	// Line 1348, Address: 0x1b820c, Func Offset: 0x6c
	// Line 1349, Address: 0x1b8220, Func Offset: 0x80
	// Line 1352, Address: 0x1b8228, Func Offset: 0x88
	// Line 1353, Address: 0x1b8234, Func Offset: 0x94
	// Line 1354, Address: 0x1b823c, Func Offset: 0x9c
	// Line 1364, Address: 0x1b8244, Func Offset: 0xa4
	// Line 1365, Address: 0x1b8250, Func Offset: 0xb0
	// Line 1366, Address: 0x1b8258, Func Offset: 0xb8
	// Line 1367, Address: 0x1b8268, Func Offset: 0xc8
	// Func End, Address: 0x1b8284, Func Offset: 0xe4
}

// iSndSetPitch__FUif
// Start address: 0x1b8290
void iSndSetPitch(uint32 snd, float32 pitch)
{
	int32 i;
	// Line 1321, Address: 0x1b8290, Func Offset: 0
	// Line 1323, Address: 0x1b8294, Func Offset: 0x4
	// Line 1321, Address: 0x1b8298, Func Offset: 0x8
	// Line 1323, Address: 0x1b829c, Func Offset: 0xc
	// Line 1321, Address: 0x1b82a0, Func Offset: 0x10
	// Line 1323, Address: 0x1b82a8, Func Offset: 0x18
	// Line 1324, Address: 0x1b82b0, Func Offset: 0x20
	// Line 1326, Address: 0x1b82cc, Func Offset: 0x3c
	// Line 1327, Address: 0x1b83a4, Func Offset: 0x114
	// Line 1328, Address: 0x1b83ac, Func Offset: 0x11c
	// Line 1329, Address: 0x1b83b4, Func Offset: 0x124
	// Line 1330, Address: 0x1b83b8, Func Offset: 0x128
	// Line 1331, Address: 0x1b83c8, Func Offset: 0x138
	// Func End, Address: 0x1b83dc, Func Offset: 0x14c
}

// iSndGetVol__FUi
// Start address: 0x1b83e0
float32 iSndGetVol(uint32 snd)
{
	xSndVoiceInfo* vp;
	int32 i;
	// Line 1308, Address: 0x1b83e0, Func Offset: 0
	// Line 1309, Address: 0x1b83e4, Func Offset: 0x4
	// Line 1308, Address: 0x1b83e8, Func Offset: 0x8
	// Line 1309, Address: 0x1b83ec, Func Offset: 0xc
	// Line 1311, Address: 0x1b83f0, Func Offset: 0x10
	// Line 1313, Address: 0x1b8418, Func Offset: 0x38
	// Line 1311, Address: 0x1b8420, Func Offset: 0x40
	// Line 1313, Address: 0x1b8428, Func Offset: 0x48
	// Line 1316, Address: 0x1b8450, Func Offset: 0x70
	// Line 1317, Address: 0x1b8460, Func Offset: 0x80
	// Line 1318, Address: 0x1b8468, Func Offset: 0x88
	// Func End, Address: 0x1b8470, Func Offset: 0x90
}

// iSndSetVol__FUif
// Start address: 0x1b8470
void iSndSetVol(uint32 snd, float32 vol)
{
	xSndVoiceInfo* vp;
	int32 i;
	// Line 1282, Address: 0x1b8470, Func Offset: 0
	// Line 1284, Address: 0x1b8488, Func Offset: 0x18
	// Line 1282, Address: 0x1b848c, Func Offset: 0x1c
	// Line 1284, Address: 0x1b8490, Func Offset: 0x20
	// Line 1282, Address: 0x1b8494, Func Offset: 0x24
	// Line 1285, Address: 0x1b8498, Func Offset: 0x28
	// Line 1282, Address: 0x1b849c, Func Offset: 0x2c
	// Line 1285, Address: 0x1b84a0, Func Offset: 0x30
	// Line 1286, Address: 0x1b84b0, Func Offset: 0x40
	// Line 1289, Address: 0x1b84cc, Func Offset: 0x5c
	// Line 1292, Address: 0x1b84e8, Func Offset: 0x78
	// Line 1293, Address: 0x1b84f0, Func Offset: 0x80
	// Line 1295, Address: 0x1b8618, Func Offset: 0x1a8
	// Line 1302, Address: 0x1b8628, Func Offset: 0x1b8
	// Line 1303, Address: 0x1b8638, Func Offset: 0x1c8
	// Func End, Address: 0x1b865c, Func Offset: 0x1ec
}

// iSndStop__FUi
// Start address: 0x1b8660
void iSndStop(uint32 snd)
{
	int32 i;
	// Line 1240, Address: 0x1b8660, Func Offset: 0
	// Line 1244, Address: 0x1b8664, Func Offset: 0x4
	// Line 1240, Address: 0x1b8668, Func Offset: 0x8
	// Line 1244, Address: 0x1b866c, Func Offset: 0xc
	// Line 1240, Address: 0x1b8670, Func Offset: 0x10
	// Line 1244, Address: 0x1b8674, Func Offset: 0x14
	// Line 1245, Address: 0x1b8678, Func Offset: 0x18
	// Line 1261, Address: 0x1b8694, Func Offset: 0x34
	// Line 1266, Address: 0x1b86bc, Func Offset: 0x5c
	// Line 1267, Address: 0x1b86d0, Func Offset: 0x70
	// Line 1268, Address: 0x1b86e8, Func Offset: 0x88
	// Line 1271, Address: 0x1b86f0, Func Offset: 0x90
	// Line 1273, Address: 0x1b86f8, Func Offset: 0x98
	// Line 1276, Address: 0x1b8708, Func Offset: 0xa8
	// Func End, Address: 0x1b8718, Func Offset: 0xb8
}

// iSndPause__FUiUi
// Start address: 0x1b8720
void iSndPause(uint32 snd, uint32 pause)
{
	int32 i;
	// Line 1218, Address: 0x1b8720, Func Offset: 0
	// Line 1222, Address: 0x1b8724, Func Offset: 0x4
	// Line 1218, Address: 0x1b8728, Func Offset: 0x8
	// Line 1219, Address: 0x1b872c, Func Offset: 0xc
	// Line 1222, Address: 0x1b8734, Func Offset: 0x14
	// Line 1223, Address: 0x1b8740, Func Offset: 0x20
	// Line 1225, Address: 0x1b875c, Func Offset: 0x3c
	// Line 1226, Address: 0x1b8764, Func Offset: 0x44
	// Line 1228, Address: 0x1b8778, Func Offset: 0x58
	// Line 1231, Address: 0x1b8780, Func Offset: 0x60
	// Line 1233, Address: 0x1b8788, Func Offset: 0x68
	// Line 1235, Address: 0x1b8798, Func Offset: 0x78
	// Line 1236, Address: 0x1b879c, Func Offset: 0x7c
	// Func End, Address: 0x1b87ac, Func Offset: 0x8c
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
	// Line 1119, Address: 0x1b87b0, Func Offset: 0
	// Line 1120, Address: 0x1b87b4, Func Offset: 0x4
	// Line 1119, Address: 0x1b87b8, Func Offset: 0x8
	// Line 1130, Address: 0x1b87bc, Func Offset: 0xc
	// Line 1119, Address: 0x1b87c0, Func Offset: 0x10
	// Line 1124, Address: 0x1b87dc, Func Offset: 0x2c
	// Line 1119, Address: 0x1b87e0, Func Offset: 0x30
	// Line 1120, Address: 0x1b87e8, Func Offset: 0x38
	// Line 1125, Address: 0x1b87ec, Func Offset: 0x3c
	// Line 1130, Address: 0x1b87f4, Func Offset: 0x44
	// Line 1136, Address: 0x1b87fc, Func Offset: 0x4c
	// Line 1131, Address: 0x1b8800, Func Offset: 0x50
	// Line 1136, Address: 0x1b8804, Func Offset: 0x54
	// Line 1132, Address: 0x1b8808, Func Offset: 0x58
	// Line 1136, Address: 0x1b880c, Func Offset: 0x5c
	// Line 1137, Address: 0x1b8810, Func Offset: 0x60
	// Line 1139, Address: 0x1b881c, Func Offset: 0x6c
	// Line 1141, Address: 0x1b882c, Func Offset: 0x7c
	// Line 1142, Address: 0x1b8840, Func Offset: 0x90
	// Line 1145, Address: 0x1b88e8, Func Offset: 0x138
	// Line 1144, Address: 0x1b88fc, Func Offset: 0x14c
	// Line 1145, Address: 0x1b8900, Func Offset: 0x150
	// Line 1147, Address: 0x1b8910, Func Offset: 0x160
	// Line 1148, Address: 0x1b891c, Func Offset: 0x16c
	// Line 1149, Address: 0x1b8928, Func Offset: 0x178
	// Line 1150, Address: 0x1b892c, Func Offset: 0x17c
	// Line 1154, Address: 0x1b8930, Func Offset: 0x180
	// Line 1155, Address: 0x1b8938, Func Offset: 0x188
	// Line 1154, Address: 0x1b893c, Func Offset: 0x18c
	// Line 1155, Address: 0x1b8954, Func Offset: 0x1a4
	// Line 1158, Address: 0x1b8960, Func Offset: 0x1b0
	// Line 1161, Address: 0x1b8970, Func Offset: 0x1c0
	// Line 1164, Address: 0x1b897c, Func Offset: 0x1cc
	// Line 1168, Address: 0x1b8988, Func Offset: 0x1d8
	// Line 1174, Address: 0x1b8994, Func Offset: 0x1e4
	// Line 1181, Address: 0x1b89a4, Func Offset: 0x1f4
	// Line 1183, Address: 0x1b89a8, Func Offset: 0x1f8
	// Line 1184, Address: 0x1b89b0, Func Offset: 0x200
	// Line 1186, Address: 0x1b89bc, Func Offset: 0x20c
	// Line 1188, Address: 0x1b89c4, Func Offset: 0x214
	// Line 1192, Address: 0x1b89d0, Func Offset: 0x220
	// Line 1193, Address: 0x1b89d4, Func Offset: 0x224
	// Line 1191, Address: 0x1b89d8, Func Offset: 0x228
	// Line 1194, Address: 0x1b89dc, Func Offset: 0x22c
	// Line 1197, Address: 0x1b89f0, Func Offset: 0x240
	// Line 1198, Address: 0x1b89fc, Func Offset: 0x24c
	// Line 1199, Address: 0x1b8a00, Func Offset: 0x250
	// Line 1203, Address: 0x1b8a08, Func Offset: 0x258
	// Line 1204, Address: 0x1b8a14, Func Offset: 0x264
	// Line 1205, Address: 0x1b8a18, Func Offset: 0x268
	// Line 1209, Address: 0x1b8a2c, Func Offset: 0x27c
	// Line 1205, Address: 0x1b8a30, Func Offset: 0x280
	// Line 1209, Address: 0x1b8a34, Func Offset: 0x284
	// Line 1211, Address: 0x1b8a48, Func Offset: 0x298
	// Line 1213, Address: 0x1b8b00, Func Offset: 0x350
	// Line 1212, Address: 0x1b8b04, Func Offset: 0x354
	// Line 1214, Address: 0x1b8b08, Func Offset: 0x358
	// Func End, Address: 0x1b8b34, Func Offset: 0x384
}

// iSndStartStereo__FUiUif
// Start address: 0x1b8b40
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
	int32 v1;
	int32 v2;
	// Line 1082, Address: 0x1b8b40, Func Offset: 0
	// Line 1087, Address: 0x1b8b44, Func Offset: 0x4
	// Line 1082, Address: 0x1b8b48, Func Offset: 0x8
	// Line 1083, Address: 0x1b8b4c, Func Offset: 0xc
	// Line 1082, Address: 0x1b8b50, Func Offset: 0x10
	// Line 1087, Address: 0x1b8b54, Func Offset: 0x14
	// Line 1082, Address: 0x1b8b58, Func Offset: 0x18
	// Line 1087, Address: 0x1b8b60, Func Offset: 0x20
	// Line 1083, Address: 0x1b8b64, Func Offset: 0x24
	// Line 1088, Address: 0x1b8b68, Func Offset: 0x28
	// Line 1090, Address: 0x1b8b84, Func Offset: 0x44
	// Line 1091, Address: 0x1b8b98, Func Offset: 0x58
	// Line 1096, Address: 0x1b8ba4, Func Offset: 0x64
	// Line 1097, Address: 0x1b8bb0, Func Offset: 0x70
	// Line 1099, Address: 0x1b8bcc, Func Offset: 0x8c
	// Line 1100, Address: 0x1b8be0, Func Offset: 0xa0
	// Line 1105, Address: 0x1b8bec, Func Offset: 0xac
	// Line 1108, Address: 0x1b8cc4, Func Offset: 0x184
	// Line 1109, Address: 0x1b8cd0, Func Offset: 0x190
	// Line 1112, Address: 0x1b8cdc, Func Offset: 0x19c
	// Line 1114, Address: 0x1b8ce8, Func Offset: 0x1a8
	// Line 1115, Address: 0x1b8cec, Func Offset: 0x1ac
	// Func End, Address: 0x1b8d08, Func Offset: 0x1c8
}

// iSndIsReady__FUi
// Start address: 0x1b8d10
uint8 iSndIsReady(uint32 id)
{
	int32 v;
	// Line 1068, Address: 0x1b8d10, Func Offset: 0
	// Line 1069, Address: 0x1b8d20, Func Offset: 0x10
	// Line 1070, Address: 0x1b8d3c, Func Offset: 0x2c
	// Line 1071, Address: 0x1b8d68, Func Offset: 0x58
	// Line 1074, Address: 0x1b8d78, Func Offset: 0x68
	// Line 1075, Address: 0x1b8d80, Func Offset: 0x70
	// Func End, Address: 0x1b8d88, Func Offset: 0x78
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
	// Line 939, Address: 0x1b8d90, Func Offset: 0
	// Line 940, Address: 0x1b8d94, Func Offset: 0x4
	// Line 939, Address: 0x1b8d98, Func Offset: 0x8
	// Line 943, Address: 0x1b8d9c, Func Offset: 0xc
	// Line 939, Address: 0x1b8da0, Func Offset: 0x10
	// Line 946, Address: 0x1b8db0, Func Offset: 0x20
	// Line 940, Address: 0x1b8db4, Func Offset: 0x24
	// Line 943, Address: 0x1b8db8, Func Offset: 0x28
	// Line 946, Address: 0x1b8dbc, Func Offset: 0x2c
	// Line 950, Address: 0x1b8dc8, Func Offset: 0x38
	// Line 946, Address: 0x1b8dcc, Func Offset: 0x3c
	// Line 950, Address: 0x1b8dd0, Func Offset: 0x40
	// Line 946, Address: 0x1b8dd4, Func Offset: 0x44
	// Line 950, Address: 0x1b8dd8, Func Offset: 0x48
	// Line 946, Address: 0x1b8de0, Func Offset: 0x50
	// Line 947, Address: 0x1b8dec, Func Offset: 0x5c
	// Line 950, Address: 0x1b8dfc, Func Offset: 0x6c
	// Line 956, Address: 0x1b8ea8, Func Offset: 0x118
	// Line 953, Address: 0x1b8eac, Func Offset: 0x11c
	// Line 951, Address: 0x1b8eb0, Func Offset: 0x120
	// Line 953, Address: 0x1b8eb4, Func Offset: 0x124
	// Line 956, Address: 0x1b8eb8, Func Offset: 0x128
	// Line 957, Address: 0x1b8edc, Func Offset: 0x14c
	// Line 958, Address: 0x1b8ee8, Func Offset: 0x158
	// Line 963, Address: 0x1b8ef0, Func Offset: 0x160
	// Line 966, Address: 0x1b8ef4, Func Offset: 0x164
	// Line 963, Address: 0x1b8ef8, Func Offset: 0x168
	// Line 966, Address: 0x1b8f00, Func Offset: 0x170
	// Line 968, Address: 0x1b8f58, Func Offset: 0x1c8
	// Line 969, Address: 0x1b8f60, Func Offset: 0x1d0
	// Line 971, Address: 0x1b8f78, Func Offset: 0x1e8
	// Line 977, Address: 0x1b8f9c, Func Offset: 0x20c
	// Line 979, Address: 0x1b8fa0, Func Offset: 0x210
	// Line 981, Address: 0x1b8fa4, Func Offset: 0x214
	// Line 986, Address: 0x1b8fbc, Func Offset: 0x22c
	// Line 984, Address: 0x1b8fc0, Func Offset: 0x230
	// Line 986, Address: 0x1b8fc4, Func Offset: 0x234
	// Line 984, Address: 0x1b8fd0, Func Offset: 0x240
	// Line 986, Address: 0x1b8fd4, Func Offset: 0x244
	// Line 989, Address: 0x1b8fe8, Func Offset: 0x258
	// Line 991, Address: 0x1b8fec, Func Offset: 0x25c
	// Line 993, Address: 0x1b8ff4, Func Offset: 0x264
	// Line 995, Address: 0x1b8ff8, Func Offset: 0x268
	// Line 996, Address: 0x1b9000, Func Offset: 0x270
	// Line 999, Address: 0x1b9008, Func Offset: 0x278
	// Line 1001, Address: 0x1b900c, Func Offset: 0x27c
	// Line 999, Address: 0x1b9010, Func Offset: 0x280
	// Line 1001, Address: 0x1b9018, Func Offset: 0x288
	// Line 1003, Address: 0x1b9070, Func Offset: 0x2e0
	// Line 1004, Address: 0x1b9078, Func Offset: 0x2e8
	// Line 1007, Address: 0x1b9094, Func Offset: 0x304
	// Line 1006, Address: 0x1b90a0, Func Offset: 0x310
	// Line 1009, Address: 0x1b90a8, Func Offset: 0x318
	// Line 1013, Address: 0x1b90b0, Func Offset: 0x320
	// Line 1012, Address: 0x1b90b4, Func Offset: 0x324
	// Line 1014, Address: 0x1b90bc, Func Offset: 0x32c
	// Line 1019, Address: 0x1b90c0, Func Offset: 0x330
	// Line 1014, Address: 0x1b90c4, Func Offset: 0x334
	// Line 1017, Address: 0x1b90c8, Func Offset: 0x338
	// Line 1014, Address: 0x1b90cc, Func Offset: 0x33c
	// Line 1019, Address: 0x1b90d0, Func Offset: 0x340
	// Line 1017, Address: 0x1b90e0, Func Offset: 0x350
	// Line 1019, Address: 0x1b90e4, Func Offset: 0x354
	// Line 1027, Address: 0x1b911c, Func Offset: 0x38c
	// Line 1030, Address: 0x1b9124, Func Offset: 0x394
	// Line 1034, Address: 0x1b9160, Func Offset: 0x3d0
	// Line 1036, Address: 0x1b9168, Func Offset: 0x3d8
	// Line 1042, Address: 0x1b91a8, Func Offset: 0x418
	// Line 1047, Address: 0x1b91b0, Func Offset: 0x420
	// Line 1048, Address: 0x1b91b4, Func Offset: 0x424
	// Line 1047, Address: 0x1b91bc, Func Offset: 0x42c
	// Line 1048, Address: 0x1b91c4, Func Offset: 0x434
	// Line 1050, Address: 0x1b91d0, Func Offset: 0x440
	// Line 1052, Address: 0x1b91d4, Func Offset: 0x444
	// Line 1053, Address: 0x1b91d8, Func Offset: 0x448
	// Func End, Address: 0x1b91f0, Func Offset: 0x460
}

// iSndIsPlayingByHandle__FUi
// Start address: 0x1b91f0
uint8 iSndIsPlayingByHandle(uint32 id)
{
	int32 i;
	// Line 927, Address: 0x1b91f0, Func Offset: 0
	// Line 929, Address: 0x1b9200, Func Offset: 0x10
	// Line 932, Address: 0x1b920c, Func Offset: 0x1c
	// Line 933, Address: 0x1b923c, Func Offset: 0x4c
	// Line 934, Address: 0x1b9250, Func Offset: 0x60
	// Line 935, Address: 0x1b9258, Func Offset: 0x68
	// Func End, Address: 0x1b9260, Func Offset: 0x70
}

// iSndIsPlaying__FUiUi
// Start address: 0x1b9260
uint8 iSndIsPlaying(uint32 assetID, uint32 parid)
{
	int32 i;
	// Line 909, Address: 0x1b9260, Func Offset: 0
	// Line 910, Address: 0x1b9270, Func Offset: 0x10
	// Line 911, Address: 0x1b9284, Func Offset: 0x24
	// Line 913, Address: 0x1b9288, Func Offset: 0x28
	// Line 916, Address: 0x1b9294, Func Offset: 0x34
	// Line 919, Address: 0x1b92a4, Func Offset: 0x44
	// Line 920, Address: 0x1b92ac, Func Offset: 0x4c
	// Line 922, Address: 0x1b92c0, Func Offset: 0x60
	// Line 923, Address: 0x1b92c8, Func Offset: 0x68
	// Func End, Address: 0x1b92d0, Func Offset: 0x70
}

// iSndIsPlaying__FUi
// Start address: 0x1b92d0
uint8 iSndIsPlaying(uint32 assetID)
{
	int32 i;
	// Line 898, Address: 0x1b92d0, Func Offset: 0
	// Line 899, Address: 0x1b92e0, Func Offset: 0x10
	// Line 901, Address: 0x1b92fc, Func Offset: 0x2c
	// Line 902, Address: 0x1b9308, Func Offset: 0x38
	// Line 904, Address: 0x1b9318, Func Offset: 0x48
	// Line 905, Address: 0x1b9320, Func Offset: 0x50
	// Func End, Address: 0x1b9328, Func Offset: 0x58
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
	// Line 479, Address: 0x1b9330, Func Offset: 0
	// Line 480, Address: 0x1b9334, Func Offset: 0x4
	// Line 479, Address: 0x1b9338, Func Offset: 0x8
	// Line 483, Address: 0x1b933c, Func Offset: 0xc
	// Line 479, Address: 0x1b9340, Func Offset: 0x10
	// Line 483, Address: 0x1b9354, Func Offset: 0x24
	// Line 485, Address: 0x1b935c, Func Offset: 0x2c
	// Line 491, Address: 0x1b9360, Func Offset: 0x30
	// Line 485, Address: 0x1b9368, Func Offset: 0x38
	// Line 491, Address: 0x1b936c, Func Offset: 0x3c
	// Line 493, Address: 0x1b9370, Func Offset: 0x40
	// Line 492, Address: 0x1b9394, Func Offset: 0x64
	// Line 498, Address: 0x1b9398, Func Offset: 0x68
	// Line 493, Address: 0x1b939c, Func Offset: 0x6c
	// Line 498, Address: 0x1b93a0, Func Offset: 0x70
	// Line 502, Address: 0x1b93b4, Func Offset: 0x84
	// Line 505, Address: 0x1b93bc, Func Offset: 0x8c
	// Line 507, Address: 0x1b93cc, Func Offset: 0x9c
	// Line 505, Address: 0x1b93d0, Func Offset: 0xa0
	// Line 510, Address: 0x1b93d8, Func Offset: 0xa8
	// Line 513, Address: 0x1b93e8, Func Offset: 0xb8
	// Line 516, Address: 0x1b93f0, Func Offset: 0xc0
	// Line 517, Address: 0x1b9400, Func Offset: 0xd0
	// Line 518, Address: 0x1b9418, Func Offset: 0xe8
	// Line 521, Address: 0x1b942c, Func Offset: 0xfc
	// Line 518, Address: 0x1b9430, Func Offset: 0x100
	// Line 526, Address: 0x1b9438, Func Offset: 0x108
	// Line 529, Address: 0x1b9454, Func Offset: 0x124
	// Line 532, Address: 0x1b945c, Func Offset: 0x12c
	// Line 539, Address: 0x1b9468, Func Offset: 0x138
	// Line 662, Address: 0x1b9478, Func Offset: 0x148
	// Line 665, Address: 0x1b947c, Func Offset: 0x14c
	// Line 662, Address: 0x1b9484, Func Offset: 0x154
	// Line 665, Address: 0x1b9488, Func Offset: 0x158
	// Line 667, Address: 0x1b9498, Func Offset: 0x168
	// Line 668, Address: 0x1b949c, Func Offset: 0x16c
	// Line 672, Address: 0x1b94bc, Func Offset: 0x18c
	// Line 701, Address: 0x1b94c4, Func Offset: 0x194
	// Line 702, Address: 0x1b94f0, Func Offset: 0x1c0
	// Line 709, Address: 0x1b9500, Func Offset: 0x1d0
	// Line 711, Address: 0x1b9510, Func Offset: 0x1e0
	// Line 714, Address: 0x1b9514, Func Offset: 0x1e4
	// Line 711, Address: 0x1b951c, Func Offset: 0x1ec
	// Line 714, Address: 0x1b9520, Func Offset: 0x1f0
	// Line 717, Address: 0x1b9528, Func Offset: 0x1f8
	// Line 718, Address: 0x1b9548, Func Offset: 0x218
	// Line 719, Address: 0x1b9558, Func Offset: 0x228
	// Line 720, Address: 0x1b9560, Func Offset: 0x230
	// Line 721, Address: 0x1b9574, Func Offset: 0x244
	// Line 722, Address: 0x1b9584, Func Offset: 0x254
	// Line 724, Address: 0x1b9590, Func Offset: 0x260
	// Line 727, Address: 0x1b9594, Func Offset: 0x264
	// Line 729, Address: 0x1b95a8, Func Offset: 0x278
	// Line 732, Address: 0x1b95ac, Func Offset: 0x27c
	// Line 734, Address: 0x1b95b4, Func Offset: 0x284
	// Line 735, Address: 0x1b95b8, Func Offset: 0x288
	// Func End, Address: 0x1b95d8, Func Offset: 0x2a8
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
	// Line 333, Address: 0x1b95e0, Func Offset: 0
	// Line 337, Address: 0x1b9608, Func Offset: 0x28
	// Line 340, Address: 0x1b9618, Func Offset: 0x38
	// Line 342, Address: 0x1b961c, Func Offset: 0x3c
	// Line 340, Address: 0x1b9620, Func Offset: 0x40
	// Line 342, Address: 0x1b9630, Func Offset: 0x50
	// Line 340, Address: 0x1b9634, Func Offset: 0x54
	// Line 341, Address: 0x1b9660, Func Offset: 0x80
	// Line 340, Address: 0x1b9664, Func Offset: 0x84
	// Line 341, Address: 0x1b9674, Func Offset: 0x94
	// Line 342, Address: 0x1b967c, Func Offset: 0x9c
	// Line 345, Address: 0x1b9688, Func Offset: 0xa8
	// Line 352, Address: 0x1b9694, Func Offset: 0xb4
	// Line 356, Address: 0x1b96d8, Func Offset: 0xf8
	// Line 352, Address: 0x1b96dc, Func Offset: 0xfc
	// Line 356, Address: 0x1b96e4, Func Offset: 0x104
	// Line 358, Address: 0x1b96ec, Func Offset: 0x10c
	// Line 359, Address: 0x1b96f8, Func Offset: 0x118
	// Line 360, Address: 0x1b96fc, Func Offset: 0x11c
	// Line 363, Address: 0x1b9708, Func Offset: 0x128
	// Line 364, Address: 0x1b9714, Func Offset: 0x134
	// Line 363, Address: 0x1b9718, Func Offset: 0x138
	// Line 364, Address: 0x1b971c, Func Offset: 0x13c
	// Line 365, Address: 0x1b972c, Func Offset: 0x14c
	// Line 366, Address: 0x1b9738, Func Offset: 0x158
	// Line 368, Address: 0x1b973c, Func Offset: 0x15c
	// Line 369, Address: 0x1b9748, Func Offset: 0x168
	// Line 378, Address: 0x1b9758, Func Offset: 0x178
	// Line 369, Address: 0x1b975c, Func Offset: 0x17c
	// Line 378, Address: 0x1b9760, Func Offset: 0x180
	// Line 369, Address: 0x1b9768, Func Offset: 0x188
	// Line 373, Address: 0x1b9770, Func Offset: 0x190
	// Line 378, Address: 0x1b9774, Func Offset: 0x194
	// Line 379, Address: 0x1b977c, Func Offset: 0x19c
	// Line 385, Address: 0x1b9798, Func Offset: 0x1b8
	// Line 389, Address: 0x1b979c, Func Offset: 0x1bc
	// Line 390, Address: 0x1b97a8, Func Offset: 0x1c8
	// Line 391, Address: 0x1b97b0, Func Offset: 0x1d0
	// Line 392, Address: 0x1b97bc, Func Offset: 0x1dc
	// Line 395, Address: 0x1b97c0, Func Offset: 0x1e0
	// Line 396, Address: 0x1b98c0, Func Offset: 0x2e0
	// Func End, Address: 0x1b98e8, Func Offset: 0x308
}

// iSndSetEnvironmentalEffect__F13isound_effect
// Start address: 0x1b98f0
void iSndSetEnvironmentalEffect()
{
	// Line 328, Address: 0x1b98f0, Func Offset: 0
	// Func End, Address: 0x1b98f8, Func Offset: 0x8
}

// iSndExit__Fv
// Start address: 0x1b9900
void iSndExit()
{
	// Line 321, Address: 0x1b9900, Func Offset: 0
	// Func End, Address: 0x1b9908, Func Offset: 0x8
}

// iSndInitSceneLoaded__Fv
// Start address: 0x1b9910
void iSndInitSceneLoaded()
{
	// Line 302, Address: 0x1b9910, Func Offset: 0
	// Line 304, Address: 0x1b9918, Func Offset: 0x8
	// Line 305, Address: 0x1b9920, Func Offset: 0x10
	// Line 306, Address: 0x1b9928, Func Offset: 0x18
	// Line 313, Address: 0x1b9930, Func Offset: 0x20
	// Func End, Address: 0x1b993c, Func Offset: 0x2c
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
	// Line 182, Address: 0x1b9940, Func Offset: 0
	// Line 186, Address: 0x1b9944, Func Offset: 0x4
	// Line 182, Address: 0x1b9948, Func Offset: 0x8
	// Line 183, Address: 0x1b994c, Func Offset: 0xc
	// Line 182, Address: 0x1b9950, Func Offset: 0x10
	// Line 186, Address: 0x1b9954, Func Offset: 0x14
	// Line 182, Address: 0x1b9958, Func Offset: 0x18
	// Line 198, Address: 0x1b995c, Func Offset: 0x1c
	// Line 182, Address: 0x1b9960, Func Offset: 0x20
	// Line 198, Address: 0x1b9968, Func Offset: 0x28
	// Line 182, Address: 0x1b996c, Func Offset: 0x2c
	// Line 198, Address: 0x1b9970, Func Offset: 0x30
	// Line 182, Address: 0x1b9974, Func Offset: 0x34
	// Line 189, Address: 0x1b9984, Func Offset: 0x44
	// Line 183, Address: 0x1b9988, Func Offset: 0x48
	// Line 186, Address: 0x1b998c, Func Offset: 0x4c
	// Line 199, Address: 0x1b9990, Func Offset: 0x50
	// Line 200, Address: 0x1b99a8, Func Offset: 0x68
	// Line 204, Address: 0x1b99b0, Func Offset: 0x70
	// Line 212, Address: 0x1b99c8, Func Offset: 0x88
	// Line 214, Address: 0x1b99d8, Func Offset: 0x98
	// Line 215, Address: 0x1b99e0, Func Offset: 0xa0
	// Line 219, Address: 0x1b99ec, Func Offset: 0xac
	// Line 221, Address: 0x1b99f0, Func Offset: 0xb0
	// Line 220, Address: 0x1b99f4, Func Offset: 0xb4
	// Line 221, Address: 0x1b99f8, Func Offset: 0xb8
	// Line 226, Address: 0x1b9a04, Func Offset: 0xc4
	// Line 221, Address: 0x1b9a0c, Func Offset: 0xcc
	// Line 250, Address: 0x1b9a14, Func Offset: 0xd4
	// Line 226, Address: 0x1b9a18, Func Offset: 0xd8
	// Line 229, Address: 0x1b9a1c, Func Offset: 0xdc
	// Line 226, Address: 0x1b9a20, Func Offset: 0xe0
	// Line 229, Address: 0x1b9a2c, Func Offset: 0xec
	// Line 230, Address: 0x1b9a30, Func Offset: 0xf0
	// Line 231, Address: 0x1b9a38, Func Offset: 0xf8
	// Line 232, Address: 0x1b9a3c, Func Offset: 0xfc
	// Line 233, Address: 0x1b9a44, Func Offset: 0x104
	// Line 234, Address: 0x1b9a4c, Func Offset: 0x10c
	// Line 249, Address: 0x1b9a54, Func Offset: 0x114
	// Line 235, Address: 0x1b9a58, Func Offset: 0x118
	// Line 240, Address: 0x1b9a5c, Func Offset: 0x11c
	// Line 235, Address: 0x1b9a60, Func Offset: 0x120
	// Line 240, Address: 0x1b9a68, Func Offset: 0x128
	// Line 250, Address: 0x1b9a74, Func Offset: 0x134
	// Line 246, Address: 0x1b9a78, Func Offset: 0x138
	// Line 250, Address: 0x1b9a7c, Func Offset: 0x13c
	// Line 253, Address: 0x1b9a88, Func Offset: 0x148
	// Line 256, Address: 0x1b9a98, Func Offset: 0x158
	// Line 260, Address: 0x1b9aa8, Func Offset: 0x168
	// Line 263, Address: 0x1b9aac, Func Offset: 0x16c
	// Line 260, Address: 0x1b9ab0, Func Offset: 0x170
	// Line 265, Address: 0x1b9ab4, Func Offset: 0x174
	// Line 276, Address: 0x1b9ab8, Func Offset: 0x178
	// Line 260, Address: 0x1b9abc, Func Offset: 0x17c
	// Line 263, Address: 0x1b9ac4, Func Offset: 0x184
	// Line 260, Address: 0x1b9ac8, Func Offset: 0x188
	// Line 263, Address: 0x1b9ad0, Func Offset: 0x190
	// Line 264, Address: 0x1b9ad4, Func Offset: 0x194
	// Line 265, Address: 0x1b9adc, Func Offset: 0x19c
	// Line 266, Address: 0x1b9ae0, Func Offset: 0x1a0
	// Line 267, Address: 0x1b9ae8, Func Offset: 0x1a8
	// Line 268, Address: 0x1b9aec, Func Offset: 0x1ac
	// Line 269, Address: 0x1b9af4, Func Offset: 0x1b4
	// Line 270, Address: 0x1b9afc, Func Offset: 0x1bc
	// Line 271, Address: 0x1b9b08, Func Offset: 0x1c8
	// Line 272, Address: 0x1b9b10, Func Offset: 0x1d0
	// Line 276, Address: 0x1b9b1c, Func Offset: 0x1dc
	// Line 281, Address: 0x1b9b30, Func Offset: 0x1f0
	// Line 282, Address: 0x1b9b38, Func Offset: 0x1f8
	// Line 283, Address: 0x1b9b40, Func Offset: 0x200
	// Line 288, Address: 0x1b9b64, Func Offset: 0x224
	// Line 294, Address: 0x1b9b6c, Func Offset: 0x22c
	// Line 296, Address: 0x1b9b78, Func Offset: 0x238
	// Line 297, Address: 0x1b9b7c, Func Offset: 0x23c
	// Func End, Address: 0x1b9bac, Func Offset: 0x26c
}

// iSndInit__Fv
// Start address: 0x1b9bb0
void iSndInit()
{
	// Line 166, Address: 0x1b9bb0, Func Offset: 0
	// Func End, Address: 0x1b9bb8, Func Offset: 0x8
}

// iSndSuspendCD__FUi
// Start address: 0x1b9bc0
void iSndSuspendCD()
{
	// Line 154, Address: 0x1b9bc0, Func Offset: 0
	// Line 155, Address: 0x1b9bc4, Func Offset: 0x4
	// Line 154, Address: 0x1b9bc8, Func Offset: 0x8
	// Line 157, Address: 0x1b9bcc, Func Offset: 0xc
	// Line 159, Address: 0x1b9bd4, Func Offset: 0x14
	// Line 160, Address: 0x1b9bd8, Func Offset: 0x18
	// Func End, Address: 0x1b9be4, Func Offset: 0x24
}

// iSndLookup__FUi
// Start address: 0x1b9bf0
iSndFileInfo* iSndLookup(uint32 id)
{
	int32 i;
	// Line 144, Address: 0x1b9bf0, Func Offset: 0
	// Line 145, Address: 0x1b9c08, Func Offset: 0x18
	// Line 146, Address: 0x1b9c14, Func Offset: 0x24
	// Line 149, Address: 0x1b9c40, Func Offset: 0x50
	// Line 150, Address: 0x1b9c48, Func Offset: 0x58
	// Func End, Address: 0x1b9c50, Func Offset: 0x60
}

