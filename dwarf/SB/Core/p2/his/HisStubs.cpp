typedef struct _sif_serve_data;
typedef struct HISRemoteVoiceTransStatusParameter;
typedef struct HISGetRequestDebugParameter;
typedef struct HISGetRequestStatusParameter;
typedef struct _sif_queue_data;
typedef struct HISGetRequestDebugReturn;
typedef struct HISLoadBlockAsyncReturn;
typedef struct HISFlushHostIOHandlesReturn;
typedef struct HISInitParameter;
typedef struct HISPauseVoiceParameter;
typedef struct HISGetSoundDebugVoiceReturn;
typedef struct HISDelayFrameParameter;
typedef struct HISGetRequestStatusReturn;
typedef struct HISRemoteBlockTransStatusParameter;
typedef struct HISGetRequestCountParameter;
typedef struct HISGetFileSizeParameter;
typedef struct HISSetVoicePitchParameter;
typedef struct HISSetVoiceVolumeParameter;
typedef struct HISPlaySoundParameter;
typedef struct HISPauseVoiceReturn;
typedef struct _sif_rpc_data;
typedef struct HISRemoteVoiceTransStatusReturn;
typedef struct HISGetSoundDebugVoiceParameter;
typedef struct HISDelayFrameReturn;
typedef struct HISSoundDebug;
typedef struct HISJoinStereoVoicesParameter;
typedef struct HISGetExternalStreamBufferParameter;
typedef struct HISInitReturn;
typedef struct HISPlayStreamReturn;
typedef struct HISSetVoiceVolumeReturn;
typedef struct HISPlaySoundReturn;
typedef struct HISGetRequestCountReturn;
typedef struct HISGetFileSizeReturn;
typedef struct HISResumeVoiceParameter;
typedef struct HISRemoteBlockTransStatusReturn;
typedef struct HISSetVoicePitchReturn;
typedef struct HISGetFirstValidRequestParameter;
typedef struct HISGetVoiceStatusParameter;
typedef struct HISGetSoundDebugParameter;
typedef struct HISResumeVoiceReturn;
typedef struct HISJoinStereoVoicesReturn;
typedef struct HISGetExternalStreamBufferReturn;
typedef enum HISMediaType;
typedef struct HISRemoteSetParamParameter;
typedef struct HISNullParameter;
typedef struct HISGetVersionParameter;
typedef struct HISGetFirstValidRequestReturn;
typedef struct _sif_client_data;
typedef struct HISRemoteSetParamReturn;
typedef struct HISSetMasterVolumeParameter;
typedef struct HISGetSoundDebugReturn;
typedef struct HISGetFreeRequestCountParameter;
typedef struct HISCancelRequestParameter;
typedef enum HISMemoryType;
typedef struct HISGetVoiceStatusReturn;
typedef struct HISFileIndexDebug;
typedef struct HISFlushHostIOHandlesParameter;
typedef struct HISPlayStreamParameter;
typedef struct HISStopVoiceParameter;
typedef struct HISNullReturn;
typedef struct HISRemoteVoiceTransParameter;
typedef struct HISSetMasterVolumeReturn;
typedef struct HISGetVersionReturn;
typedef struct HISCancelRequestReturn;
typedef struct HISGetFileIndexParameter;
typedef struct HISPlayExternalStreamParameter;
typedef enum HISStatus;
typedef struct HISGetFreeRequestCountReturn;
typedef struct HISStopVoiceReturn;
typedef struct HISGetFileIndexReturn;
typedef struct HISTestParameter;
typedef struct HISSoundDebugVoice;
typedef struct HISRemoteVoiceTransReturn;
typedef struct HISGetFileIndexDebugParameter;
typedef struct HISCloseRequestParameter;
typedef struct HISRemoteBlockTransParameter;
typedef struct HISGetFileIndexDebugReturn;
typedef struct HISPlayExternalStreamReturn;
typedef struct HISWaitForRequestParameter;
typedef struct HISCloseRequestReturn;
typedef struct HISRequestDebug;
typedef struct HISRemoteBlockTransReturn;
typedef struct _class;
typedef struct HISTestReturn;
typedef struct HISLoadBlockAsyncParameter;
typedef struct HISWaitForRequestReturn;
typedef struct HISWaitForAllRequestsParameter;
typedef struct HISLoadExternalStreamParameter;
typedef struct HISWaitForAllRequestsReturn;
typedef struct HISLoadExternalStreamReturn;

typedef void(*type_19)(void*);
typedef void*(*type_61)(uint32, void*, int32);

typedef int8 type_0[20];
typedef int8 type_1[17];
typedef int8 type_2[18];
typedef int8 type_3[44];
typedef int8 type_4[17];
typedef int8 type_5[20];
typedef int8 type_6[22];
typedef int8 type_7[36];
typedef int8 type_8[17];
typedef int8 type_9[20];
typedef int8 type_10[17];
typedef int8 type_11[17];
typedef int8 type_12[17];
typedef int8 type_13[48];
typedef int8 type_14[18];
typedef int8 type_15[20];
typedef int8 type_16[20];
typedef int8 type_17[17];
typedef int8 type_18[20];
typedef int8 type_20[20];
typedef int8 type_21[17];
typedef int8 type_22[20];
typedef int8 type_23[20];
typedef int8 type_24[17];
typedef int8 type_25[20];
typedef int8 type_26[20];
typedef int8 type_27[17];
typedef int8 type_28[48];
typedef int8 type_29[17];
typedef int8 type_30[20];
typedef uint32 type_31[2];
typedef int8 type_32[17];
typedef int8 type_33[17];
typedef int8 type_34[20];
typedef int8 type_35[64];
typedef int8 type_36[17];
typedef int8 type_37[17];
typedef int8 type_38[20];
typedef int8 type_39[20];
typedef int8 type_40[20];
typedef int8 type_41[20];
typedef int8 type_42[20];
typedef int8 type_43[32];
typedef int8 type_44[48];
typedef int8 type_45[20];
typedef int8 type_46[32];
typedef int8 type_47[64];
typedef int8 type_48[76];
typedef int8 type_49[17];
typedef int8 type_50[17];
typedef int8 type_51[48];
typedef int8 type_52[20];
typedef int8 type_53[20];
typedef int8 type_54[20];
typedef int8 type_55[20];
typedef int8 type_56[17];
typedef int8 type_57[44];
typedef int8 type_58[36];
typedef int8 type_59[17];
typedef int8 type_60[20];
typedef int8 type_62[17];
typedef int8 type_63[17];
typedef int8 type_64[17];
typedef int8 type_65[20];
typedef int8 type_66[17];
typedef int8 type_67[84];
typedef int8 type_68[17];
typedef int8 type_69[20];
typedef int8 type_70[17];
typedef int8 type_71[24];
typedef int8 type_72[20];
typedef int8 type_73[17];
typedef int8 type_74[20];
typedef int8 type_75[17];
typedef int8 type_76[20];
typedef int8 type_77[17];
typedef int8 type_78[18];
typedef int8 type_79[24];
typedef int8 type_80[17];
typedef int8 type_81[17];
typedef int8 type_82[17];
typedef int8 type_83[20];

struct _sif_serve_data
{
	uint32 command;
	void*(*func)(uint32, void*, int32);
	void* buff;
	int32 size;
	void*(*cfunc)(uint32, void*, int32);
	void* cbuff;
	int32 csize;
	_sif_client_data* client;
	void* paddr;
	uint32 fno;
	void* receive;
	int32 rsize;
	int32 rmode;
	uint32 rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct HISRemoteVoiceTransStatusParameter
{
	int16 channel;
	int16 flag;
};

struct HISGetRequestDebugParameter
{
	int32 requestID;
};

struct HISGetRequestStatusParameter
{
	int32 requestID;
};

struct _sif_queue_data
{
	int32 key;
	int32 active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct HISGetRequestDebugReturn
{
	HISRequestDebug requestDebug;
};

struct HISLoadBlockAsyncReturn
{
	int32 requestID;
};

struct HISFlushHostIOHandlesReturn
{
};

struct HISInitParameter
{
	HISMediaType mediaType;
};

struct HISPauseVoiceParameter
{
	uint16 voice;
};

struct HISGetSoundDebugVoiceReturn
{
	HISSoundDebugVoice soundDebugVoice;
};

struct HISDelayFrameParameter
{
};

struct HISGetRequestStatusReturn
{
	HISStatus currentStatus;
};

struct HISRemoteBlockTransStatusParameter
{
	int16 channel;
	int16 flag;
};

struct HISGetRequestCountParameter
{
};

struct HISGetFileSizeParameter
{
	int32 fileIndex;
};

struct HISSetVoicePitchParameter
{
	uint16 voice;
	uint16 pitch;
};

struct HISSetVoiceVolumeParameter
{
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISPlaySoundParameter
{
	uint32 address;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 attack;
	uint16 release;
	uint8 paused;
};

struct HISPauseVoiceReturn
{
};

struct _sif_rpc_data
{
	void* paddr;
	uint32 pid;
	int32 tid;
	uint32 mode;
};

struct HISRemoteVoiceTransStatusReturn
{
	uint32 ret;
};

struct HISGetSoundDebugVoiceParameter
{
	int32 voice;
};

struct HISDelayFrameReturn
{
};

struct HISSoundDebug
{
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISJoinStereoVoicesParameter
{
	uint16 voice1;
	uint16 voice2;
};

struct HISGetExternalStreamBufferParameter
{
	int32 voice;
};

struct HISInitReturn
{
};

struct HISPlayStreamReturn
{
};

struct HISSetVoiceVolumeReturn
{
};

struct HISPlaySoundReturn
{
};

struct HISGetRequestCountReturn
{
	int32 count;
};

struct HISGetFileSizeReturn
{
	int32 size;
};

struct HISResumeVoiceParameter
{
	uint16 voice;
};

struct HISRemoteBlockTransStatusReturn
{
	uint32 ret;
};

struct HISSetVoicePitchReturn
{
};

struct HISGetFirstValidRequestParameter
{
};

struct HISGetVoiceStatusParameter
{
};

struct HISGetSoundDebugParameter
{
};

struct HISResumeVoiceReturn
{
};

struct HISJoinStereoVoicesReturn
{
};

struct HISGetExternalStreamBufferReturn
{
	int32 buffer;
};

enum HISMediaType
{
	HIS_MEDIA_CDROM,
	HIS_MEDIA_DVD,
	HIS_MEDIA_HOSTIO
};

struct HISRemoteSetParamParameter
{
	uint16 reg;
	uint16 value;
};

struct HISNullParameter
{
};

struct HISGetVersionParameter
{
};

struct HISGetFirstValidRequestReturn
{
	int32 request;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	uint32 command;
	void* buff;
	void* cbuff;
	void(*func)(void*);
	void* para;
	_sif_serve_data* serve;
};

struct HISRemoteSetParamReturn
{
};

struct HISSetMasterVolumeParameter
{
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISGetSoundDebugReturn
{
	HISSoundDebug soundDebug;
};

struct HISGetFreeRequestCountParameter
{
};

struct HISCancelRequestParameter
{
	int32 requestID;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct HISGetVoiceStatusReturn
{
	uint32 status[2];
};

struct HISFileIndexDebug
{
	int32 logicalSectorNumber;
	int32 size;
	int32 sizeInSectors;
	int8 name[48];
};

struct HISFlushHostIOHandlesParameter
{
};

struct HISPlayStreamParameter
{
	int32 fileIndex;
	int32 logicalSectorNumber;
	int32 dataSize;
	int32 blockSize;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
	uint16 interleaveSectors;
};

struct HISStopVoiceParameter
{
	uint16 voice;
};

struct HISNullReturn
{
};

struct HISRemoteVoiceTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 s_addr;
	uint32 size;
};

struct HISSetMasterVolumeReturn
{
};

struct HISGetVersionReturn
{
	int32 version;
};

struct HISCancelRequestReturn
{
	uint8 success;
};

struct HISGetFileIndexParameter
{
	int8 filename[48];
};

struct HISPlayExternalStreamParameter
{
	int32 blockSize;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};

struct HISGetFreeRequestCountReturn
{
	int32 count;
};

struct HISStopVoiceReturn
{
};

struct HISGetFileIndexReturn
{
	int32 index;
};

struct HISTestParameter
{
	int32 testValue;
	int8 testString[64];
};

struct HISSoundDebugVoice
{
	uint32 address;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 envelope;
	uint8 kon;
	uint8 koff;
	uint8 endx;
	uint8 external;
	uint8 streaming;
	uint8 reading;
	uint8 readingBuffer;
	uint8 byteMode;
	union
	{
		int32 currentSector;
		int32 currentOffset;
	};
	int32 sectorsLeft;
	int32 dataSize;
};

struct HISRemoteVoiceTransReturn
{
	int32 ret;
};

struct HISGetFileIndexDebugParameter
{
	int32 fileIndex;
};

struct HISCloseRequestParameter
{
	int32 requestID;
};

struct HISRemoteBlockTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 size;
	uint8* start_addr;
};

struct HISGetFileIndexDebugReturn
{
	HISFileIndexDebug fileIndexDebug;
};

struct HISPlayExternalStreamReturn
{
};

struct HISWaitForRequestParameter
{
};

struct HISCloseRequestReturn
{
	uint8 success;
};

struct HISRequestDebug
{
	_class small;
	int32 destination;
	int32 currentPriority;
	int32 originalPriority;
	int32 fileIndex;
	int32 startSector;
	int32 sectorsToRead;
};

struct HISRemoteBlockTransReturn
{
	int32 ret;
};

struct _class
{
	struct
	{
		int32 nextRequest : 8;
		HISStatus status : 8;
		HISMemoryType destinationType : 8;
	};
};

struct HISTestReturn
{
	int32 returnValue;
};

struct HISLoadBlockAsyncParameter
{
	int32 fileIndex;
	int32 sourceBlock;
	int32 sourceSize;
	void* destinationAddress;
	HISMemoryType destinationType;
	int32 priority;
	int32 flags;
};

struct HISWaitForRequestReturn
{
};

struct HISWaitForAllRequestsParameter
{
};

struct HISLoadExternalStreamParameter
{
	uint16 voice;
	uint16 buffer;
	void* address;
};

struct HISWaitForAllRequestsReturn
{
};

struct HISLoadExternalStreamReturn
{
};

_sif_client_data clientData;
uint8 asyncFire;

void HISRemoteSetParam(uint16 reg, uint16 value);
int32 HISRemoteVoiceTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 s_addr, uint32 size);
uint32 HISRemoteBlockTransStatus(int16 channel, int16 flag);
int32 HISRemoteBlockTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 size, uint8* start_addr);
int32 HISGetExternalStreamBuffer(int32 voice);
void HISLoadExternalStream(int32 voice, int32 buffer, void* address);
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume);
void HISGetVoiceStatus(uint32* data);
void _HISBatchSoundCommandsNoWait(void* data, int32 size);
void HISBatchSoundCommands(void* data, int32 size);
void HISGetFileIndexDebug(int32 fileIndex, HISFileIndexDebug* fileIndexDebug);
int32 HISGetFirstValidRequest();
void HISGetRequestDebug(int32 requestID, HISRequestDebug* requestDebug);
void HISFlushHostIOHandles();
int32 HISGetFileSize(int32 fileIndex);
void HISWaitForRequest();
uint8 HISCloseRequest(int32 requestID);
uint8 HISCancelRequest(int32 requestID);
HISStatus HISGetRequestStatus(int32 requestID);
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags);
int32 HISGetFileIndex(int8* filename);
int32 HISGetVersion();
void HISInit(HISMediaType mediaType);
void HISInitStubs();

// HISRemoteSetParam__FUsUs
// Start address: 0x34a4d0
void HISRemoteSetParam(uint16 reg, uint16 value)
{
	int8 inputBuffer[20];
	HISRemoteSetParamParameter* input;
	int8 outputBuffer[17];
	HISRemoteSetParamReturn* output;
	// Line 677, Address: 0x34a4d0, Func Offset: 0
	// Line 679, Address: 0x34a4d4, Func Offset: 0x4
	// Line 677, Address: 0x34a4d8, Func Offset: 0x8
	// Line 679, Address: 0x34a4f4, Func Offset: 0x24
	// Line 682, Address: 0x34a508, Func Offset: 0x38
	// Line 683, Address: 0x34a50c, Func Offset: 0x3c
	// Line 686, Address: 0x34a510, Func Offset: 0x40
	// Line 687, Address: 0x34a560, Func Offset: 0x90
	// Func End, Address: 0x34a57c, Func Offset: 0xac
}

// HISRemoteVoiceTrans__FsUsPUcUiUi
// Start address: 0x34a580
int32 HISRemoteVoiceTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 s_addr, uint32 size)
{
	int8 inputBuffer[32];
	HISRemoteVoiceTransParameter* input;
	int8 outputBuffer[20];
	HISRemoteVoiceTransReturn* output;
	// Line 658, Address: 0x34a580, Func Offset: 0
	// Line 660, Address: 0x34a5b8, Func Offset: 0x38
	// Line 663, Address: 0x34a5d0, Func Offset: 0x50
	// Line 664, Address: 0x34a5d4, Func Offset: 0x54
	// Line 665, Address: 0x34a5d8, Func Offset: 0x58
	// Line 666, Address: 0x34a5dc, Func Offset: 0x5c
	// Line 667, Address: 0x34a5e0, Func Offset: 0x60
	// Line 670, Address: 0x34a5e4, Func Offset: 0x64
	// Line 673, Address: 0x34a638, Func Offset: 0xb8
	// Line 674, Address: 0x34a63c, Func Offset: 0xbc
	// Func End, Address: 0x34a664, Func Offset: 0xe4
}

// HISRemoteBlockTransStatus__Fss
// Start address: 0x34a670
uint32 HISRemoteBlockTransStatus(int16 channel, int16 flag)
{
	int8 inputBuffer[20];
	HISRemoteBlockTransStatusParameter* input;
	int8 outputBuffer[20];
	HISRemoteBlockTransStatusReturn* output;
	// Line 642, Address: 0x34a670, Func Offset: 0
	// Line 644, Address: 0x34a674, Func Offset: 0x4
	// Line 642, Address: 0x34a678, Func Offset: 0x8
	// Line 644, Address: 0x34a694, Func Offset: 0x24
	// Line 647, Address: 0x34a6a8, Func Offset: 0x38
	// Line 648, Address: 0x34a6ac, Func Offset: 0x3c
	// Line 651, Address: 0x34a6b0, Func Offset: 0x40
	// Line 654, Address: 0x34a700, Func Offset: 0x90
	// Line 655, Address: 0x34a704, Func Offset: 0x94
	// Func End, Address: 0x34a720, Func Offset: 0xb0
}

// HISRemoteBlockTrans__FsUsPUcUiPUc
// Start address: 0x34a720
int32 HISRemoteBlockTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 size, uint8* start_addr)
{
	int8 inputBuffer[32];
	HISRemoteBlockTransParameter* input;
	int8 outputBuffer[20];
	HISRemoteBlockTransReturn* output;
	// Line 623, Address: 0x34a720, Func Offset: 0
	// Line 625, Address: 0x34a758, Func Offset: 0x38
	// Line 628, Address: 0x34a770, Func Offset: 0x50
	// Line 629, Address: 0x34a774, Func Offset: 0x54
	// Line 630, Address: 0x34a778, Func Offset: 0x58
	// Line 631, Address: 0x34a77c, Func Offset: 0x5c
	// Line 632, Address: 0x34a780, Func Offset: 0x60
	// Line 635, Address: 0x34a784, Func Offset: 0x64
	// Line 638, Address: 0x34a7d8, Func Offset: 0xb8
	// Line 639, Address: 0x34a7dc, Func Offset: 0xbc
	// Func End, Address: 0x34a804, Func Offset: 0xe4
}

// HISGetExternalStreamBuffer__Fi
// Start address: 0x34a810
int32 HISGetExternalStreamBuffer(int32 voice)
{
	int8 inputBuffer[20];
	HISGetExternalStreamBufferParameter* input;
	int8 outputBuffer[20];
	HISGetExternalStreamBufferReturn* output;
	// Line 606, Address: 0x34a810, Func Offset: 0
	// Line 610, Address: 0x34a814, Func Offset: 0x4
	// Line 606, Address: 0x34a818, Func Offset: 0x8
	// Line 610, Address: 0x34a81c, Func Offset: 0xc
	// Line 606, Address: 0x34a820, Func Offset: 0x10
	// Line 610, Address: 0x34a830, Func Offset: 0x20
	// Line 613, Address: 0x34a840, Func Offset: 0x30
	// Line 616, Address: 0x34a844, Func Offset: 0x34
	// Line 619, Address: 0x34a898, Func Offset: 0x88
	// Line 620, Address: 0x34a89c, Func Offset: 0x8c
	// Func End, Address: 0x34a8b4, Func Offset: 0xa4
}

// HISLoadExternalStream__FiiPCv
// Start address: 0x34a8c0
void HISLoadExternalStream(int32 voice, int32 buffer, void* address)
{
	int8 inputBuffer[24];
	HISLoadExternalStreamParameter* input;
	int8 outputBuffer[17];
	HISLoadExternalStreamReturn* output;
	// Line 590, Address: 0x34a8c0, Func Offset: 0
	// Line 594, Address: 0x34a8e8, Func Offset: 0x28
	// Line 597, Address: 0x34a900, Func Offset: 0x40
	// Line 598, Address: 0x34a904, Func Offset: 0x44
	// Line 599, Address: 0x34a908, Func Offset: 0x48
	// Line 602, Address: 0x34a90c, Func Offset: 0x4c
	// Line 603, Address: 0x34a960, Func Offset: 0xa0
	// Func End, Address: 0x34a980, Func Offset: 0xc0
}

// HISSetMasterVolume__Fii
// Start address: 0x34a980
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume)
{
	int8 inputBuffer[20];
	HISSetMasterVolumeParameter* input;
	int8 outputBuffer[17];
	HISSetMasterVolumeReturn* output;
	// Line 352, Address: 0x34a980, Func Offset: 0
	// Line 354, Address: 0x34a984, Func Offset: 0x4
	// Line 352, Address: 0x34a988, Func Offset: 0x8
	// Line 354, Address: 0x34a9a4, Func Offset: 0x24
	// Line 357, Address: 0x34a9b8, Func Offset: 0x38
	// Line 358, Address: 0x34a9bc, Func Offset: 0x3c
	// Line 361, Address: 0x34a9c0, Func Offset: 0x40
	// Line 362, Address: 0x34aa10, Func Offset: 0x90
	// Func End, Address: 0x34aa2c, Func Offset: 0xac
}

// HISGetVoiceStatus__FPUi
// Start address: 0x34aa30
void HISGetVoiceStatus(uint32* data)
{
	int8 inputBuffer[17];
	HISGetVoiceStatusParameter* input;
	int8 outputBuffer[24];
	HISGetVoiceStatusReturn* output;
	int32 i;
	// Line 339, Address: 0x34aa30, Func Offset: 0
	// Line 341, Address: 0x34aa34, Func Offset: 0x4
	// Line 339, Address: 0x34aa38, Func Offset: 0x8
	// Line 341, Address: 0x34aa3c, Func Offset: 0xc
	// Line 339, Address: 0x34aa40, Func Offset: 0x10
	// Line 341, Address: 0x34aa48, Func Offset: 0x18
	// Line 339, Address: 0x34aa4c, Func Offset: 0x1c
	// Line 341, Address: 0x34aa54, Func Offset: 0x24
	// Line 344, Address: 0x34aa60, Func Offset: 0x30
	// Line 347, Address: 0x34aab0, Func Offset: 0x80
	// Line 348, Address: 0x34aab8, Func Offset: 0x88
	// Line 349, Address: 0x34aad4, Func Offset: 0xa4
	// Func End, Address: 0x34aaec, Func Offset: 0xbc
}

// _HISBatchSoundCommandsNoWait__FPCvi
// Start address: 0x34aaf0
void _HISBatchSoundCommandsNoWait(void* data, int32 size)
{
	// Line 324, Address: 0x34aaf0, Func Offset: 0
	// Line 330, Address: 0x34ab08, Func Offset: 0x18
	// Line 331, Address: 0x34ab28, Func Offset: 0x38
	// Line 332, Address: 0x34ab2c, Func Offset: 0x3c
	// Line 331, Address: 0x34ab30, Func Offset: 0x40
	// Line 332, Address: 0x34ab34, Func Offset: 0x44
	// Line 336, Address: 0x34ab58, Func Offset: 0x68
	// Func End, Address: 0x34ab6c, Func Offset: 0x7c
}

// HISBatchSoundCommands__FPCvi
// Start address: 0x34ab70
void HISBatchSoundCommands(void* data, int32 size)
{
	// Line 310, Address: 0x34ab70, Func Offset: 0
	// Line 316, Address: 0x34ab88, Func Offset: 0x18
	// Line 317, Address: 0x34aba8, Func Offset: 0x38
	// Line 316, Address: 0x34abac, Func Offset: 0x3c
	// Line 317, Address: 0x34abb0, Func Offset: 0x40
	// Line 321, Address: 0x34abd8, Func Offset: 0x68
	// Func End, Address: 0x34abec, Func Offset: 0x7c
}

// HISGetFileIndexDebug__FiP17HISFileIndexDebug
// Start address: 0x34abf0
void HISGetFileIndexDebug(int32 fileIndex, HISFileIndexDebug* fileIndexDebug)
{
	int8 inputBuffer[20];
	HISGetFileIndexDebugParameter* input;
	int8 outputBuffer[76];
	HISGetFileIndexDebugReturn* output;
	// Line 295, Address: 0x34abf0, Func Offset: 0
	// Line 297, Address: 0x34abf4, Func Offset: 0x4
	// Line 295, Address: 0x34abf8, Func Offset: 0x8
	// Line 297, Address: 0x34ac0c, Func Offset: 0x1c
	// Line 295, Address: 0x34ac10, Func Offset: 0x20
	// Line 297, Address: 0x34ac18, Func Offset: 0x28
	// Line 300, Address: 0x34ac28, Func Offset: 0x38
	// Line 303, Address: 0x34ac2c, Func Offset: 0x3c
	// Line 306, Address: 0x34ac80, Func Offset: 0x90
	// Line 307, Address: 0x34acc8, Func Offset: 0xd8
	// Func End, Address: 0x34ace4, Func Offset: 0xf4
}

// HISGetFirstValidRequest__Fv
// Start address: 0x34acf0
int32 HISGetFirstValidRequest()
{
	int8 inputBuffer[17];
	HISGetFirstValidRequestParameter* input;
	int8 outputBuffer[20];
	HISGetFirstValidRequestReturn* output;
	// Line 283, Address: 0x34acf0, Func Offset: 0
	// Line 285, Address: 0x34acf4, Func Offset: 0x4
	// Line 283, Address: 0x34acf8, Func Offset: 0x8
	// Line 285, Address: 0x34acfc, Func Offset: 0xc
	// Line 283, Address: 0x34ad00, Func Offset: 0x10
	// Line 285, Address: 0x34ad08, Func Offset: 0x18
	// Line 288, Address: 0x34ad18, Func Offset: 0x28
	// Line 291, Address: 0x34ad68, Func Offset: 0x78
	// Line 292, Address: 0x34ad6c, Func Offset: 0x7c
	// Func End, Address: 0x34ad80, Func Offset: 0x90
}

// HISGetRequestDebug__FiP15HISRequestDebug
// Start address: 0x34ad80
void HISGetRequestDebug(int32 requestID, HISRequestDebug* requestDebug)
{
	int8 inputBuffer[20];
	HISGetRequestDebugParameter* input;
	int8 outputBuffer[44];
	HISGetRequestDebugReturn* output;
	// Line 266, Address: 0x34ad80, Func Offset: 0
	// Line 270, Address: 0x34ad84, Func Offset: 0x4
	// Line 266, Address: 0x34ad88, Func Offset: 0x8
	// Line 270, Address: 0x34ad9c, Func Offset: 0x1c
	// Line 266, Address: 0x34ada0, Func Offset: 0x20
	// Line 270, Address: 0x34ada8, Func Offset: 0x28
	// Line 273, Address: 0x34adb8, Func Offset: 0x38
	// Line 276, Address: 0x34adbc, Func Offset: 0x3c
	// Line 279, Address: 0x34ae10, Func Offset: 0x90
	// Line 280, Address: 0x34ae48, Func Offset: 0xc8
	// Func End, Address: 0x34ae64, Func Offset: 0xe4
}

// HISFlushHostIOHandles__Fv
// Start address: 0x34ae70
void HISFlushHostIOHandles()
{
	int8 inputBuffer[17];
	HISFlushHostIOHandlesParameter* input;
	int8 outputBuffer[17];
	HISFlushHostIOHandlesReturn* output;
	// Line 257, Address: 0x34ae70, Func Offset: 0
	// Line 259, Address: 0x34ae74, Func Offset: 0x4
	// Line 257, Address: 0x34ae78, Func Offset: 0x8
	// Line 259, Address: 0x34ae7c, Func Offset: 0xc
	// Line 257, Address: 0x34ae80, Func Offset: 0x10
	// Line 259, Address: 0x34ae88, Func Offset: 0x18
	// Line 262, Address: 0x34ae98, Func Offset: 0x28
	// Line 263, Address: 0x34aee8, Func Offset: 0x78
	// Func End, Address: 0x34aefc, Func Offset: 0x8c
}

// HISGetFileSize__Fi
// Start address: 0x34af00
int32 HISGetFileSize(int32 fileIndex)
{
	int8 inputBuffer[20];
	HISGetFileSizeParameter* input;
	int8 outputBuffer[20];
	HISGetFileSizeReturn* output;
	// Line 242, Address: 0x34af00, Func Offset: 0
	// Line 244, Address: 0x34af04, Func Offset: 0x4
	// Line 242, Address: 0x34af08, Func Offset: 0x8
	// Line 244, Address: 0x34af0c, Func Offset: 0xc
	// Line 242, Address: 0x34af10, Func Offset: 0x10
	// Line 244, Address: 0x34af20, Func Offset: 0x20
	// Line 247, Address: 0x34af30, Func Offset: 0x30
	// Line 250, Address: 0x34af34, Func Offset: 0x34
	// Line 253, Address: 0x34af88, Func Offset: 0x88
	// Line 254, Address: 0x34af8c, Func Offset: 0x8c
	// Func End, Address: 0x34afa4, Func Offset: 0xa4
}

// HISWaitForRequest__Fv
// Start address: 0x34afb0
void HISWaitForRequest()
{
	int8 inputBuffer[17];
	HISWaitForRequestParameter* input;
	int8 outputBuffer[17];
	HISWaitForRequestReturn* output;
	// Line 224, Address: 0x34afb0, Func Offset: 0
	// Line 226, Address: 0x34afb4, Func Offset: 0x4
	// Line 224, Address: 0x34afb8, Func Offset: 0x8
	// Line 226, Address: 0x34afbc, Func Offset: 0xc
	// Line 224, Address: 0x34afc0, Func Offset: 0x10
	// Line 226, Address: 0x34afc8, Func Offset: 0x18
	// Line 229, Address: 0x34afd8, Func Offset: 0x28
	// Line 230, Address: 0x34b028, Func Offset: 0x78
	// Func End, Address: 0x34b03c, Func Offset: 0x8c
}

// HISCloseRequest__Fi
// Start address: 0x34b040
uint8 HISCloseRequest(int32 requestID)
{
	int8 inputBuffer[20];
	HISCloseRequestParameter* input;
	int8 outputBuffer[17];
	HISCloseRequestReturn* output;
	// Line 183, Address: 0x34b040, Func Offset: 0
	// Line 187, Address: 0x34b044, Func Offset: 0x4
	// Line 183, Address: 0x34b048, Func Offset: 0x8
	// Line 187, Address: 0x34b04c, Func Offset: 0xc
	// Line 183, Address: 0x34b050, Func Offset: 0x10
	// Line 187, Address: 0x34b060, Func Offset: 0x20
	// Line 190, Address: 0x34b070, Func Offset: 0x30
	// Line 193, Address: 0x34b074, Func Offset: 0x34
	// Line 196, Address: 0x34b0c8, Func Offset: 0x88
	// Line 197, Address: 0x34b0cc, Func Offset: 0x8c
	// Func End, Address: 0x34b0e4, Func Offset: 0xa4
}

// HISCancelRequest__Fi
// Start address: 0x34b0f0
uint8 HISCancelRequest(int32 requestID)
{
	int8 inputBuffer[20];
	HISCancelRequestParameter* input;
	int8 outputBuffer[17];
	HISCancelRequestReturn* output;
	// Line 167, Address: 0x34b0f0, Func Offset: 0
	// Line 170, Address: 0x34b0f4, Func Offset: 0x4
	// Line 167, Address: 0x34b0f8, Func Offset: 0x8
	// Line 170, Address: 0x34b0fc, Func Offset: 0xc
	// Line 167, Address: 0x34b100, Func Offset: 0x10
	// Line 170, Address: 0x34b110, Func Offset: 0x20
	// Line 173, Address: 0x34b120, Func Offset: 0x30
	// Line 176, Address: 0x34b124, Func Offset: 0x34
	// Line 179, Address: 0x34b178, Func Offset: 0x88
	// Line 180, Address: 0x34b17c, Func Offset: 0x8c
	// Func End, Address: 0x34b194, Func Offset: 0xa4
}

// HISGetRequestStatus__Fi
// Start address: 0x34b1a0
HISStatus HISGetRequestStatus(int32 requestID)
{
	int8 inputBuffer[20];
	HISGetRequestStatusParameter* input;
	int8 outputBuffer[20];
	HISGetRequestStatusReturn* output;
	// Line 147, Address: 0x34b1a0, Func Offset: 0
	// Line 151, Address: 0x34b1a4, Func Offset: 0x4
	// Line 147, Address: 0x34b1a8, Func Offset: 0x8
	// Line 151, Address: 0x34b1ac, Func Offset: 0xc
	// Line 147, Address: 0x34b1b0, Func Offset: 0x10
	// Line 151, Address: 0x34b1c0, Func Offset: 0x20
	// Line 154, Address: 0x34b1d0, Func Offset: 0x30
	// Line 157, Address: 0x34b1d4, Func Offset: 0x34
	// Line 163, Address: 0x34b228, Func Offset: 0x88
	// Line 164, Address: 0x34b22c, Func Offset: 0x8c
	// Func End, Address: 0x34b244, Func Offset: 0xa4
}

// HISLoadBlockAsync__FiiiPv13HISMemoryTypeii
// Start address: 0x34b250
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags)
{
	int8 inputBuffer[44];
	HISLoadBlockAsyncParameter* input;
	int8 outputBuffer[20];
	HISLoadBlockAsyncReturn* output;
	// Line 118, Address: 0x34b250, Func Offset: 0
	// Line 124, Address: 0x34b298, Func Offset: 0x48
	// Line 127, Address: 0x34b2b0, Func Offset: 0x60
	// Line 128, Address: 0x34b2b4, Func Offset: 0x64
	// Line 129, Address: 0x34b2b8, Func Offset: 0x68
	// Line 130, Address: 0x34b2bc, Func Offset: 0x6c
	// Line 131, Address: 0x34b2c0, Func Offset: 0x70
	// Line 132, Address: 0x34b2c4, Func Offset: 0x74
	// Line 136, Address: 0x34b2c8, Func Offset: 0x78
	// Line 137, Address: 0x34b2d0, Func Offset: 0x80
	// Line 140, Address: 0x34b2e0, Func Offset: 0x90
	// Line 143, Address: 0x34b330, Func Offset: 0xe0
	// Line 144, Address: 0x34b334, Func Offset: 0xe4
	// Func End, Address: 0x34b364, Func Offset: 0x114
}

// HISGetFileIndex__FPCc
// Start address: 0x34b370
int32 HISGetFileIndex(int8* filename)
{
	int8 inputBuffer[64];
	HISGetFileIndexParameter* input;
	int8 outputBuffer[20];
	HISGetFileIndexReturn* output;
	// Line 101, Address: 0x34b370, Func Offset: 0
	// Line 103, Address: 0x34b374, Func Offset: 0x4
	// Line 101, Address: 0x34b378, Func Offset: 0x8
	// Line 103, Address: 0x34b37c, Func Offset: 0xc
	// Line 101, Address: 0x34b380, Func Offset: 0x10
	// Line 103, Address: 0x34b390, Func Offset: 0x20
	// Line 107, Address: 0x34b3a0, Func Offset: 0x30
	// Line 110, Address: 0x34b3ac, Func Offset: 0x3c
	// Line 113, Address: 0x34b400, Func Offset: 0x90
	// Line 114, Address: 0x34b404, Func Offset: 0x94
	// Func End, Address: 0x34b41c, Func Offset: 0xac
}

// HISGetVersion__Fv
// Start address: 0x34b420
int32 HISGetVersion()
{
	int8 inputBuffer[17];
	HISGetVersionParameter* input;
	int8 outputBuffer[20];
	HISGetVersionReturn* output;
	// Line 89, Address: 0x34b420, Func Offset: 0
	// Line 91, Address: 0x34b424, Func Offset: 0x4
	// Line 89, Address: 0x34b428, Func Offset: 0x8
	// Line 91, Address: 0x34b42c, Func Offset: 0xc
	// Line 89, Address: 0x34b430, Func Offset: 0x10
	// Line 91, Address: 0x34b438, Func Offset: 0x18
	// Line 94, Address: 0x34b448, Func Offset: 0x28
	// Line 97, Address: 0x34b498, Func Offset: 0x78
	// Line 98, Address: 0x34b49c, Func Offset: 0x7c
	// Func End, Address: 0x34b4b0, Func Offset: 0x90
}

// HISInit__F12HISMediaType
// Start address: 0x34b4b0
void HISInit(HISMediaType mediaType)
{
	int8 inputBuffer[20];
	HISInitParameter* input;
	int8 outputBuffer[17];
	HISInitReturn* output;
	// Line 77, Address: 0x34b4b0, Func Offset: 0
	// Line 79, Address: 0x34b4b4, Func Offset: 0x4
	// Line 77, Address: 0x34b4b8, Func Offset: 0x8
	// Line 79, Address: 0x34b4bc, Func Offset: 0xc
	// Line 77, Address: 0x34b4c0, Func Offset: 0x10
	// Line 79, Address: 0x34b4d0, Func Offset: 0x20
	// Line 82, Address: 0x34b4e0, Func Offset: 0x30
	// Line 85, Address: 0x34b4e4, Func Offset: 0x34
	// Line 86, Address: 0x34b538, Func Offset: 0x88
	// Func End, Address: 0x34b550, Func Offset: 0xa0
}

// HISInitStubs__Fv
// Start address: 0x34b550
void HISInitStubs()
{
	// Line 62, Address: 0x34b550, Func Offset: 0
	// Line 64, Address: 0x34b558, Func Offset: 0x8
	// Line 68, Address: 0x34b560, Func Offset: 0x10
	// Line 70, Address: 0x34b574, Func Offset: 0x24
	// Line 73, Address: 0x34b584, Func Offset: 0x34
	// Line 74, Address: 0x34b588, Func Offset: 0x38
	// Func End, Address: 0x34b594, Func Offset: 0x44
}

