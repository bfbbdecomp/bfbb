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
typedef union _class;
typedef struct HISTestReturn;
typedef struct HISLoadBlockAsyncParameter;
typedef struct HISWaitForRequestReturn;
typedef struct HISWaitForAllRequestsParameter;
typedef struct HISLoadExternalStreamParameter;
typedef struct HISWaitForAllRequestsReturn;
typedef struct HISLoadExternalStreamReturn;

typedef void(*type_19)(void*);
typedef void*(*type_61)(u32, void*, s32);

typedef s8 type_0[20];
typedef s8 type_1[17];
typedef s8 type_2[18];
typedef s8 type_3[44];
typedef s8 type_4[17];
typedef s8 type_5[20];
typedef s8 type_6[22];
typedef s8 type_7[36];
typedef s8 type_8[17];
typedef s8 type_9[20];
typedef s8 type_10[17];
typedef s8 type_11[17];
typedef s8 type_12[17];
typedef s8 type_13[48];
typedef s8 type_14[18];
typedef s8 type_15[20];
typedef s8 type_16[20];
typedef s8 type_17[17];
typedef s8 type_18[20];
typedef s8 type_20[20];
typedef s8 type_21[17];
typedef s8 type_22[20];
typedef s8 type_23[20];
typedef s8 type_24[17];
typedef s8 type_25[20];
typedef s8 type_26[20];
typedef s8 type_27[17];
typedef s8 type_28[48];
typedef s8 type_29[17];
typedef s8 type_30[20];
typedef u32 type_31[2];
typedef s8 type_32[17];
typedef s8 type_33[17];
typedef s8 type_34[20];
typedef s8 type_35[64];
typedef s8 type_36[17];
typedef s8 type_37[17];
typedef s8 type_38[20];
typedef s8 type_39[20];
typedef s8 type_40[20];
typedef s8 type_41[20];
typedef s8 type_42[20];
typedef s8 type_43[32];
typedef s8 type_44[48];
typedef s8 type_45[20];
typedef s8 type_46[32];
typedef s8 type_47[64];
typedef s8 type_48[76];
typedef s8 type_49[17];
typedef s8 type_50[17];
typedef s8 type_51[48];
typedef s8 type_52[20];
typedef s8 type_53[20];
typedef s8 type_54[20];
typedef s8 type_55[20];
typedef s8 type_56[17];
typedef s8 type_57[44];
typedef s8 type_58[36];
typedef s8 type_59[17];
typedef s8 type_60[20];
typedef s8 type_62[17];
typedef s8 type_63[17];
typedef s8 type_64[17];
typedef s8 type_65[20];
typedef s8 type_66[17];
typedef s8 type_67[84];
typedef s8 type_68[17];
typedef s8 type_69[20];
typedef s8 type_70[17];
typedef s8 type_71[24];
typedef s8 type_72[20];
typedef s8 type_73[17];
typedef s8 type_74[20];
typedef s8 type_75[17];
typedef s8 type_76[20];
typedef s8 type_77[17];
typedef s8 type_78[18];
typedef s8 type_79[24];
typedef s8 type_80[17];
typedef s8 type_81[17];
typedef s8 type_82[17];
typedef s8 type_83[20];

struct _sif_serve_data
{
	u32 command;
	type_61 func;
	void* buff;
	s32 size;
	type_61 cfunc;
	void* cbuff;
	s32 csize;
	_sif_client_data* client;
	void* paddr;
	u32 fno;
	void* receive;
	s32 rsize;
	s32 rmode;
	u32 rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct HISRemoteVoiceTransStatusParameter
{
	s16 channel;
	s16 flag;
};

struct HISGetRequestDebugParameter
{
	s32 requestID;
};

struct HISGetRequestStatusParameter
{
	s32 requestID;
};

struct _sif_queue_data
{
	s32 key;
	s32 active;
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
	s32 requestID;
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
	u16 voice;
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
	s16 channel;
	s16 flag;
};

struct HISGetRequestCountParameter
{
};

struct HISGetFileSizeParameter
{
	s32 fileIndex;
};

struct HISSetVoicePitchParameter
{
	u16 voice;
	u16 pitch;
};

struct HISSetVoiceVolumeParameter
{
	u16 voice;
	u16 leftVolume;
	u16 rightVolume;
};

struct HISPlaySoundParameter
{
	u32 address;
	u16 voice;
	u16 leftVolume;
	u16 rightVolume;
	u16 pitch;
	u16 attack;
	u16 release;
	u8 paused;
};

struct HISPauseVoiceReturn
{
};

struct _sif_rpc_data
{
	void* paddr;
	u32 pid;
	s32 tid;
	u32 mode;
};

struct HISRemoteVoiceTransStatusReturn
{
	u32 ret;
};

struct HISGetSoundDebugVoiceParameter
{
	s32 voice;
};

struct HISDelayFrameReturn
{
};

struct HISSoundDebug
{
	u16 leftVolume;
	u16 rightVolume;
};

struct HISJoinStereoVoicesParameter
{
	u16 voice1;
	u16 voice2;
};

struct HISGetExternalStreamBufferParameter
{
	s32 voice;
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
	s32 count;
};

struct HISGetFileSizeReturn
{
	s32 size;
};

struct HISResumeVoiceParameter
{
	u16 voice;
};

struct HISRemoteBlockTransStatusReturn
{
	u32 ret;
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
	s32 buffer;
};

enum HISMediaType
{
	HIS_MEDIA_CDROM,
	HIS_MEDIA_DVD,
	HIS_MEDIA_HOSTIO
};

struct HISRemoteSetParamParameter
{
	u16 reg;
	u16 value;
};

struct HISNullParameter
{
};

struct HISGetVersionParameter
{
};

struct HISGetFirstValidRequestReturn
{
	s32 request;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	u32 command;
	void* buff;
	void* cbuff;
	type_19 func;
	void* para;
	_sif_serve_data* serve;
};

struct HISRemoteSetParamReturn
{
};

struct HISSetMasterVolumeParameter
{
	u16 leftVolume;
	u16 rightVolume;
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
	s32 requestID;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct HISGetVoiceStatusReturn
{
	type_31 status;
};

struct HISFileIndexDebug
{
	s32 logicalSectorNumber;
	s32 size;
	s32 sizeInSectors;
	type_44 name;
};

struct HISFlushHostIOHandlesParameter
{
};

struct HISPlayStreamParameter
{
	s32 fileIndex;
	s32 logicalSectorNumber;
	s32 dataSize;
	s32 blockSize;
	u16 voice;
	u16 leftVolume;
	u16 rightVolume;
	u16 pitch;
	u16 flags;
	u16 attack;
	u16 release;
	u16 interleaveSectors;
};

struct HISStopVoiceParameter
{
	u16 voice;
};

struct HISNullReturn
{
};

struct HISRemoteVoiceTransParameter
{
	s16 channel;
	u16 mode;
	u8* m_addr;
	u32 s_addr;
	u32 size;
};

struct HISSetMasterVolumeReturn
{
};

struct HISGetVersionReturn
{
	s32 version;
};

struct HISCancelRequestReturn
{
	u8 success;
};

struct HISGetFileIndexParameter
{
	type_51 filename;
};

struct HISPlayExternalStreamParameter
{
	s32 blockSize;
	u16 voice;
	u16 leftVolume;
	u16 rightVolume;
	u16 pitch;
	u16 flags;
	u16 attack;
	u16 release;
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
	s32 count;
};

struct HISStopVoiceReturn
{
};

struct HISGetFileIndexReturn
{
	s32 index;
};

struct HISTestParameter
{
	s32 testValue;
	type_47 testString;
};

struct HISSoundDebugVoice
{
	u32 address;
	u16 leftVolume;
	u16 rightVolume;
	u16 pitch;
	u16 envelope;
	u8 kon;
	u8 koff;
	u8 endx;
	u8 external;
	u8 streaming;
	u8 reading;
	u8 readingBuffer;
	u8 byteMode;
	union
	{
		s32 currentSector;
		s32 currentOffset;
	};
	s32 sectorsLeft;
	s32 dataSize;
};

struct HISRemoteVoiceTransReturn
{
	s32 ret;
};

struct HISGetFileIndexDebugParameter
{
	s32 fileIndex;
};

struct HISCloseRequestParameter
{
	s32 requestID;
};

struct HISRemoteBlockTransParameter
{
	s16 channel;
	u16 mode;
	u8* m_addr;
	u32 size;
	u8* start_addr;
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
	u8 success;
};

struct HISRequestDebug
{
	_class small;
	s32 destination;
	s32 currentPriority;
	s32 originalPriority;
	s32 fileIndex;
	s32 startSector;
	s32 sectorsToRead;
};

struct HISRemoteBlockTransReturn
{
	s32 ret;
};

union _class
{
	s32 nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct HISTestReturn
{
	s32 returnValue;
};

struct HISLoadBlockAsyncParameter
{
	s32 fileIndex;
	s32 sourceBlock;
	s32 sourceSize;
	void* destinationAddress;
	HISMemoryType destinationType;
	s32 priority;
	s32 flags;
};

struct HISWaitForRequestReturn
{
};

struct HISWaitForAllRequestsParameter
{
};

struct HISLoadExternalStreamParameter
{
	u16 voice;
	u16 buffer;
	void* address;
};

struct HISWaitForAllRequestsReturn
{
};

struct HISLoadExternalStreamReturn
{
};

_sif_client_data clientData;
u8 asyncFire;

void HISRemoteSetParam(u16 reg, u16 value);
s32 HISRemoteVoiceTrans(s16 channel, u16 mode, u8* m_addr, u32 s_addr, u32 size);
u32 HISRemoteBlockTransStatus(s16 channel, s16 flag);
s32 HISRemoteBlockTrans(s16 channel, u16 mode, u8* m_addr, u32 size, u8* start_addr);
s32 HISGetExternalStreamBuffer(s32 voice);
void HISLoadExternalStream(s32 voice, s32 buffer, void* address);
void HISSetMasterVolume(s32 leftVolume, s32 rightVolume);
void HISGetVoiceStatus(u32* data);
void _HISBatchSoundCommandsNoWait(void* data, s32 size);
void HISBatchSoundCommands(void* data, s32 size);
void HISGetFileIndexDebug(s32 fileIndex, HISFileIndexDebug* fileIndexDebug);
s32 HISGetFirstValidRequest();
void HISGetRequestDebug(s32 requestID, HISRequestDebug* requestDebug);
void HISFlushHostIOHandles();
s32 HISGetFileSize(s32 fileIndex);
void HISWaitForRequest();
u8 HISCloseRequest(s32 requestID);
u8 HISCancelRequest(s32 requestID);
HISStatus HISGetRequestStatus(s32 requestID);
s32 HISLoadBlockAsync(s32 fileIndex, s32 sourceBlock, s32 sourceSize, void* destinationAddress, HISMemoryType destinationType, s32 priority, s32 flags);
s32 HISGetFileIndex(s8* filename);
s32 HISGetVersion();
void HISInit(HISMediaType mediaType);
void HISInitStubs();

// HISRemoteSetParam__FUsUs
// Start address: 0x34a4d0
void HISRemoteSetParam(u16 reg, u16 value)
{
	type_18 inputBuffer;
	HISRemoteSetParamParameter* input;
	type_24 outputBuffer;
	HISRemoteSetParamReturn* output;
}

// HISRemoteVoiceTrans__FsUsPUcUiUi
// Start address: 0x34a580
s32 HISRemoteVoiceTrans(s16 channel, u16 mode, u8* m_addr, u32 s_addr, u32 size)
{
	type_46 inputBuffer;
	HISRemoteVoiceTransParameter* input;
	type_54 outputBuffer;
	HISRemoteVoiceTransReturn* output;
}

// HISRemoteBlockTransStatus__Fss
// Start address: 0x34a670
u32 HISRemoteBlockTransStatus(s16 channel, s16 flag)
{
	type_15 inputBuffer;
	HISRemoteBlockTransStatusParameter* input;
	type_20 outputBuffer;
	HISRemoteBlockTransStatusReturn* output;
}

// HISRemoteBlockTrans__FsUsPUcUiPUc
// Start address: 0x34a720
s32 HISRemoteBlockTrans(s16 channel, u16 mode, u8* m_addr, u32 size, u8* start_addr)
{
	type_43 inputBuffer;
	HISRemoteBlockTransParameter* input;
	type_53 outputBuffer;
	HISRemoteBlockTransReturn* output;
}

// HISGetExternalStreamBuffer__Fi
// Start address: 0x34a810
s32 HISGetExternalStreamBuffer(s32 voice)
{
	type_23 inputBuffer;
	HISGetExternalStreamBufferParameter* input;
	type_30 outputBuffer;
	HISGetExternalStreamBufferReturn* output;
}

// HISLoadExternalStream__FiiPCv
// Start address: 0x34a8c0
void HISLoadExternalStream(s32 voice, s32 buffer, void* address)
{
	type_79 inputBuffer;
	HISLoadExternalStreamParameter* input;
	type_81 outputBuffer;
	HISLoadExternalStreamReturn* output;
}

// HISSetMasterVolume__Fii
// Start address: 0x34a980
void HISSetMasterVolume(s32 leftVolume, s32 rightVolume)
{
	type_22 inputBuffer;
	HISSetMasterVolumeParameter* input;
	type_29 outputBuffer;
	HISSetMasterVolumeReturn* output;
}

// HISGetVoiceStatus__FPUi
// Start address: 0x34aa30
void HISGetVoiceStatus(u32* data)
{
	type_62 inputBuffer;
	HISGetVoiceStatusParameter* input;
	type_71 outputBuffer;
	HISGetVoiceStatusReturn* output;
	s32 i;
}

// _HISBatchSoundCommandsNoWait__FPCvi
// Start address: 0x34aaf0
void _HISBatchSoundCommandsNoWait(void* data, s32 size)
{
}

// HISBatchSoundCommands__FPCvi
// Start address: 0x34ab70
void HISBatchSoundCommands(void* data, s32 size)
{
}

// HISGetFileIndexDebug__FiP17HISFileIndexDebug
// Start address: 0x34abf0
void HISGetFileIndexDebug(s32 fileIndex, HISFileIndexDebug* fileIndexDebug)
{
	type_41 inputBuffer;
	HISGetFileIndexDebugParameter* input;
	type_48 outputBuffer;
	HISGetFileIndexDebugReturn* output;
}

// HISGetFirstValidRequest__Fv
// Start address: 0x34acf0
s32 HISGetFirstValidRequest()
{
	type_37 inputBuffer;
	HISGetFirstValidRequestParameter* input;
	type_40 outputBuffer;
	HISGetFirstValidRequestReturn* output;
}

// HISGetRequestDebug__FiP15HISRequestDebug
// Start address: 0x34ad80
void HISGetRequestDebug(s32 requestID, HISRequestDebug* requestDebug)
{
	type_83 inputBuffer;
	HISGetRequestDebugParameter* input;
	type_3 outputBuffer;
	HISGetRequestDebugReturn* output;
}

// HISFlushHostIOHandles__Fv
// Start address: 0x34ae70
void HISFlushHostIOHandles()
{
	type_82 inputBuffer;
	HISFlushHostIOHandlesParameter* input;
	type_1 outputBuffer;
	HISFlushHostIOHandlesReturn* output;
}

// HISGetFileSize__Fi
// Start address: 0x34af00
s32 HISGetFileSize(s32 fileIndex)
{
	type_69 inputBuffer;
	HISGetFileSizeParameter* input;
	type_76 outputBuffer;
	HISGetFileSizeReturn* output;
}

// HISWaitForRequest__Fv
// Start address: 0x34afb0
void HISWaitForRequest()
{
	type_70 inputBuffer;
	HISWaitForRequestParameter* input;
	type_77 outputBuffer;
	HISWaitForRequestReturn* output;
}

// HISCloseRequest__Fi
// Start address: 0x34b040
u8 HISCloseRequest(s32 requestID)
{
	type_42 inputBuffer;
	HISCloseRequestParameter* input;
	type_50 outputBuffer;
	HISCloseRequestReturn* output;
}

// HISCancelRequest__Fi
// Start address: 0x34b0f0
u8 HISCancelRequest(s32 requestID)
{
	type_25 inputBuffer;
	HISCancelRequestParameter* input;
	type_32 outputBuffer;
	HISCancelRequestReturn* output;
}

// HISGetRequestStatus__Fi
// Start address: 0x34b1a0
HISStatus HISGetRequestStatus(s32 requestID)
{
	type_0 inputBuffer;
	HISGetRequestStatusParameter* input;
	type_5 outputBuffer;
	HISGetRequestStatusReturn* output;
}

// HISLoadBlockAsync__FiiiPv13HISMemoryTypeii
// Start address: 0x34b250
s32 HISLoadBlockAsync(s32 fileIndex, s32 sourceBlock, s32 sourceSize, void* destinationAddress, HISMemoryType destinationType, s32 priority, s32 flags)
{
	type_57 inputBuffer;
	HISLoadBlockAsyncParameter* input;
	type_60 outputBuffer;
	HISLoadBlockAsyncReturn* output;
}

// HISGetFileIndex__FPCc
// Start address: 0x34b370
s32 HISGetFileIndex(s8* filename)
{
	type_35 inputBuffer;
	HISGetFileIndexParameter* input;
	type_38 outputBuffer;
	HISGetFileIndexReturn* output;
}

// HISGetVersion__Fv
// Start address: 0x34b420
s32 HISGetVersion()
{
	type_27 inputBuffer;
	HISGetVersionParameter* input;
	type_34 outputBuffer;
	HISGetVersionReturn* output;
}

// HISInit__F12HISMediaType
// Start address: 0x34b4b0
void HISInit(HISMediaType mediaType)
{
	type_16 inputBuffer;
	HISInitParameter* input;
	type_21 outputBuffer;
	HISInitReturn* output;
}

// HISInitStubs__Fv
// Start address: 0x34b550
void HISInitStubs()
{
}

